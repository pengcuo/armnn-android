# Copyright Louis Dionne 2013-2017
# Distributed under the Boost Software License, Version 1.0.
# (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)

cmake_minimum_required(VERSION 3.7)
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")


##############################################################################
# Setup project
#
# We parse the canonical version number located in <boost/hana/version.hpp>.
# This is done to allow the library to be used without requiring a proper
# installation during which the version would be written to this header.
##############################################################################
foreach(level MAJOR MINOR PATCH)
    file(STRINGS include/boost/hana/version.hpp
                 _define_${level}
                 REGEX "#define BOOST_HANA_${level}_VERSION")
    string(REGEX MATCH "([0-9]+)" _version_${level} "${_define_${level}}")
endforeach()

set(Boost.Hana_VERSION_STRING "${_version_MAJOR}.${_version_MINOR}.${_version_PATCH}")
project(Boost.Hana VERSION ${Boost.Hana_VERSION_STRING} LANGUAGES CXX)

# Perform checks to make sure we support the current compiler
include(CheckCxxCompilerSupport)


##############################################################################
# Setup the 'hana' header-only library target.
##############################################################################
add_library(hana INTERFACE)
target_include_directories(hana INTERFACE include)

include(CheckCXXCompilerFlag)
# On Clang for Windows, -std=c++14 is not known, but -std=c++1y appears to work.
if (MSVC AND ${CMAKE_CXX_COMPILER_ID} STREQUAL "Clang")
    check_cxx_compiler_flag(-std=c++1y BOOST_HANA_HAS_STD_CPP1Y)
    if (BOOST_HANA_HAS_STD_CPP1Y)
        target_add_compile_options(hana INTERFACE -std=c++1y)
    endif()
else()
    # TODO: Set these as interface properties when supported
    set(CMAKE_CXX_STANDARD 14)
    set(CMAKE_CXX_STANDARD_REQUIRED YES)
endif()


##############################################################################
# Setup CMake options
##############################################################################
option(BOOST_HANA_ENABLE_CONCEPT_CHECKS "Enable concept checking in the interface methods." ON)
option(BOOST_HANA_ENABLE_DEBUG_MODE "Enable Hana's debug mode." OFF)

option(BOOST_HANA_ENABLE_STRING_UDL
"Enable the GNU extension allowing the special string literal operator\
 template, which enables the _s suffix for creating compile-time strings." ON)

option(BOOST_HANA_ENABLE_EXCEPTIONS
"Build with exceptions enabled. Note that Hana does not make use of exceptions,\
 but this switch can be disabled when building the tests to assess that it is\
 really the case." ON)


##############################################################################
# Function to setup common compiler flags on tests and examples
##############################################################################
function(boost_hana_set_test_properties target)
    target_link_libraries(${target} PRIVATE hana)
    set_target_properties(${target} PROPERTIES CXX_EXTENSIONS NO)

    macro(setflag testname flag)
        check_cxx_compiler_flag(${flag} ${testname})
        if (${testname})
            target_compile_options(${target} PRIVATE ${flag})
        endif()
    endmacro()

    setflag(BOOST_HANA_HAS_FDIAGNOSTICS_COLOR        -fdiagnostics-color)
    setflag(BOOST_HANA_HAS_FTEMPLATE_BACKTRACE_LIMIT -ftemplate-backtrace-limit=0)
    setflag(BOOST_HANA_HAS_PEDANTIC                  -pedantic)
    setflag(BOOST_HANA_HAS_WALL                      -Wall)
    setflag(BOOST_HANA_HAS_WERROR                    -Werror)
    setflag(BOOST_HANA_HAS_WEXTRA                    -Wextra)
    setflag(BOOST_HANA_HAS_WNO_UNUSED_LOCAL_TYPEDEFS -Wno-unused-local-typedefs)
    setflag(BOOST_HANA_HAS_WWRITE_STRINGS            -Wwrite-strings)

    if (NOT BOOST_HANA_ENABLE_EXCEPTIONS)
        setflag(BOOST_HANA_HAS_FNO_EXCEPTIONS -fno-exceptions)
    endif()

    if (NOT BOOST_HANA_ENABLE_CONCEPT_CHECKS)
        target_compile_definitions(${target} PRIVATE -DBOOST_HANA_CONFIG_DISABLE_CONCEPT_CHECKS)
    endif()

    if (BOOST_HANA_ENABLE_DEBUG_MODE)
        target_compile_definitions(${target} PRIVATE -DBOOST_HANA_CONFIG_ENABLE_DEBUG_MODE)
    endif()

    if (BOOST_HANA_ENABLE_STRING_UDL)
        target_compile_definitions(${target} PRIVATE -DBOOST_HANA_CONFIG_ENABLE_STRING_UDL)
        # GCC pretends to have the flag, but produces a "unrecognized command line option"
        # warning when we use it.
        if (NOT ${CMAKE_CXX_COMPILER_ID} STREQUAL "GNU")
            setflag(BOOST_HANA_HAS_WNO_GNU_STRING_UDL -Wno-gnu-string-literal-operator-template)
        endif()
    endif()
endfunction()


##############################################################################
# Setup include paths. More include paths can be added in subdirectories.
##############################################################################
include_directories(${Boost.Hana_SOURCE_DIR}/include)

find_package(Boost 1.59)
if (Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
else()
    message(WARNING
        "The Boost library headers were not found; targets depending "
        "on Boost won't be available.")
endif()


##############################################################################
# Setup custom functions to ease the creation of targets
##############################################################################
#   boost_hana_target_name_for(<output variable> <source file> [ext])
#
# Return the target name associated to a source file. If the path of the
# source file relative from the root of Hana is `path/to/source/file.ext`,
# the target name associated to it will be `path.to.source.file`.
#
# The extension of the file should be specified as a last argument. If no
# extension is specified, the `.cpp` extension is assumed.
function(boost_hana_target_name_for out file)
    if (NOT ARGV2)
        set(_extension ".cpp")
    else()
        set(_extension "${ARGV2}")
    endif()

    file(RELATIVE_PATH _relative ${Boost.Hana_SOURCE_DIR} ${file})
    string(REPLACE "${_extension}" "" _name ${_relative})
    string(REGEX REPLACE "/" "." _name ${_name})
    set(${out} "${_name}" PARENT_SCOPE)
endfunction()


##############################################################################
# Setup the `check` target to build and then run all the tests and examples.
##############################################################################
add_custom_target(check
    COMMAND ${CMAKE_CTEST_COMMAND} --output-on-failure
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
    COMMENT "Build and then run all the tests and examples.")


##############################################################################
# Setup subdirectories and testing
##############################################################################
enable_testing()
find_program(MEMORYCHECK_COMMAND valgrind)
if (MEMORYCHECK_COMMAND)
    message(STATUS "Found Valgrind: ${MEMORYCHECK_COMMAND}")
    set(MEMORYCHECK_COMMAND_OPTIONS "--leak-check=full --error-exitcode=1")
else()
    message("Valgrind not found")
endif()
include(CTest)

add_subdirectory(benchmark)
add_subdirectory(doc)
add_subdirectory(example)
add_subdirectory(test)


##############################################################################
# Setup the 'install' target.
# This copies the whole content of include/ to ${CMAKE_INSTALL_PREFIX}.
##############################################################################
install(DIRECTORY include/boost DESTINATION include
        PATTERN ".DS_Store" EXCLUDE)

# We also install an optional pkg-config file.
configure_file(cmake/hana.pc.in hana.pc @ONLY)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/hana.pc DESTINATION lib/pkgconfig)