// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/protobuf/remote_tensor_handle.proto

#ifndef PROTOBUF_tensorflow_2fcore_2fprotobuf_2fremote_5ftensor_5fhandle_2eproto__INCLUDED
#define PROTOBUF_tensorflow_2fcore_2fprotobuf_2fremote_5ftensor_5fhandle_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "tensorflow/core/framework/types.pb.h"
// @@protoc_insertion_point(includes)

namespace protobuf_tensorflow_2fcore_2fprotobuf_2fremote_5ftensor_5fhandle_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsRemoteTensorHandleImpl();
void InitDefaultsRemoteTensorHandle();
inline void InitDefaults() {
  InitDefaultsRemoteTensorHandle();
}
}  // namespace protobuf_tensorflow_2fcore_2fprotobuf_2fremote_5ftensor_5fhandle_2eproto
namespace tensorflow {
namespace eager {
class RemoteTensorHandle;
class RemoteTensorHandleDefaultTypeInternal;
extern RemoteTensorHandleDefaultTypeInternal _RemoteTensorHandle_default_instance_;
}  // namespace eager
}  // namespace tensorflow
namespace tensorflow {
namespace eager {

// ===================================================================

class RemoteTensorHandle : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.eager.RemoteTensorHandle) */ {
 public:
  RemoteTensorHandle();
  virtual ~RemoteTensorHandle();

  RemoteTensorHandle(const RemoteTensorHandle& from);

  inline RemoteTensorHandle& operator=(const RemoteTensorHandle& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  RemoteTensorHandle(RemoteTensorHandle&& from) noexcept
    : RemoteTensorHandle() {
    *this = ::std::move(from);
  }

  inline RemoteTensorHandle& operator=(RemoteTensorHandle&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline ::google::protobuf::Arena* GetArena() const PROTOBUF_FINAL {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const PROTOBUF_FINAL {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const RemoteTensorHandle& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const RemoteTensorHandle* internal_default_instance() {
    return reinterpret_cast<const RemoteTensorHandle*>(
               &_RemoteTensorHandle_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void UnsafeArenaSwap(RemoteTensorHandle* other);
  void Swap(RemoteTensorHandle* other);
  friend void swap(RemoteTensorHandle& a, RemoteTensorHandle& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline RemoteTensorHandle* New() const PROTOBUF_FINAL { return New(NULL); }

  RemoteTensorHandle* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const RemoteTensorHandle& from);
  void MergeFrom(const RemoteTensorHandle& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(RemoteTensorHandle* other);
  protected:
  explicit RemoteTensorHandle(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string device = 3;
  void clear_device();
  static const int kDeviceFieldNumber = 3;
  const ::std::string& device() const;
  void set_device(const ::std::string& value);
  #if LANG_CXX11
  void set_device(::std::string&& value);
  #endif
  void set_device(const char* value);
  void set_device(const char* value, size_t size);
  ::std::string* mutable_device();
  ::std::string* release_device();
  void set_allocated_device(::std::string* device);
  PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  ::std::string* unsafe_arena_release_device();
  PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_device(
      ::std::string* device);

  // string op_device = 4;
  void clear_op_device();
  static const int kOpDeviceFieldNumber = 4;
  const ::std::string& op_device() const;
  void set_op_device(const ::std::string& value);
  #if LANG_CXX11
  void set_op_device(::std::string&& value);
  #endif
  void set_op_device(const char* value);
  void set_op_device(const char* value, size_t size);
  ::std::string* mutable_op_device();
  ::std::string* release_op_device();
  void set_allocated_op_device(::std::string* op_device);
  PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  ::std::string* unsafe_arena_release_op_device();
  PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_op_device(
      ::std::string* op_device);

  // int64 op_id = 1;
  void clear_op_id();
  static const int kOpIdFieldNumber = 1;
  ::google::protobuf::int64 op_id() const;
  void set_op_id(::google::protobuf::int64 value);

  // int32 output_num = 2;
  void clear_output_num();
  static const int kOutputNumFieldNumber = 2;
  ::google::protobuf::int32 output_num() const;
  void set_output_num(::google::protobuf::int32 value);

  // .tensorflow.DataType dtype = 5;
  void clear_dtype();
  static const int kDtypeFieldNumber = 5;
  ::tensorflow::DataType dtype() const;
  void set_dtype(::tensorflow::DataType value);

  // @@protoc_insertion_point(class_scope:tensorflow.eager.RemoteTensorHandle)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::internal::ArenaStringPtr device_;
  ::google::protobuf::internal::ArenaStringPtr op_device_;
  ::google::protobuf::int64 op_id_;
  ::google::protobuf::int32 output_num_;
  int dtype_;
  mutable int _cached_size_;
  friend struct ::protobuf_tensorflow_2fcore_2fprotobuf_2fremote_5ftensor_5fhandle_2eproto::TableStruct;
  friend void ::protobuf_tensorflow_2fcore_2fprotobuf_2fremote_5ftensor_5fhandle_2eproto::InitDefaultsRemoteTensorHandleImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RemoteTensorHandle

// int64 op_id = 1;
inline void RemoteTensorHandle::clear_op_id() {
  op_id_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 RemoteTensorHandle::op_id() const {
  // @@protoc_insertion_point(field_get:tensorflow.eager.RemoteTensorHandle.op_id)
  return op_id_;
}
inline void RemoteTensorHandle::set_op_id(::google::protobuf::int64 value) {
  
  op_id_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.eager.RemoteTensorHandle.op_id)
}

// int32 output_num = 2;
inline void RemoteTensorHandle::clear_output_num() {
  output_num_ = 0;
}
inline ::google::protobuf::int32 RemoteTensorHandle::output_num() const {
  // @@protoc_insertion_point(field_get:tensorflow.eager.RemoteTensorHandle.output_num)
  return output_num_;
}
inline void RemoteTensorHandle::set_output_num(::google::protobuf::int32 value) {
  
  output_num_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.eager.RemoteTensorHandle.output_num)
}

// string device = 3;
inline void RemoteTensorHandle::clear_device() {
  device_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const ::std::string& RemoteTensorHandle::device() const {
  // @@protoc_insertion_point(field_get:tensorflow.eager.RemoteTensorHandle.device)
  return device_.Get();
}
inline void RemoteTensorHandle::set_device(const ::std::string& value) {
  
  device_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.eager.RemoteTensorHandle.device)
}
#if LANG_CXX11
inline void RemoteTensorHandle::set_device(::std::string&& value) {
  
  device_.Set(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_rvalue:tensorflow.eager.RemoteTensorHandle.device)
}
#endif
inline void RemoteTensorHandle::set_device(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  device_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.eager.RemoteTensorHandle.device)
}
inline void RemoteTensorHandle::set_device(const char* value,
    size_t size) {
  
  device_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.eager.RemoteTensorHandle.device)
}
inline ::std::string* RemoteTensorHandle::mutable_device() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.eager.RemoteTensorHandle.device)
  return device_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* RemoteTensorHandle::release_device() {
  // @@protoc_insertion_point(field_release:tensorflow.eager.RemoteTensorHandle.device)
  
  return device_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline void RemoteTensorHandle::set_allocated_device(::std::string* device) {
  if (device != NULL) {
    
  } else {
    
  }
  device_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), device,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.eager.RemoteTensorHandle.device)
}
inline ::std::string* RemoteTensorHandle::unsafe_arena_release_device() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.eager.RemoteTensorHandle.device)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return device_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void RemoteTensorHandle::unsafe_arena_set_allocated_device(
    ::std::string* device) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (device != NULL) {
    
  } else {
    
  }
  device_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      device, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.eager.RemoteTensorHandle.device)
}

// string op_device = 4;
inline void RemoteTensorHandle::clear_op_device() {
  op_device_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const ::std::string& RemoteTensorHandle::op_device() const {
  // @@protoc_insertion_point(field_get:tensorflow.eager.RemoteTensorHandle.op_device)
  return op_device_.Get();
}
inline void RemoteTensorHandle::set_op_device(const ::std::string& value) {
  
  op_device_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.eager.RemoteTensorHandle.op_device)
}
#if LANG_CXX11
inline void RemoteTensorHandle::set_op_device(::std::string&& value) {
  
  op_device_.Set(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_rvalue:tensorflow.eager.RemoteTensorHandle.op_device)
}
#endif
inline void RemoteTensorHandle::set_op_device(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  op_device_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.eager.RemoteTensorHandle.op_device)
}
inline void RemoteTensorHandle::set_op_device(const char* value,
    size_t size) {
  
  op_device_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.eager.RemoteTensorHandle.op_device)
}
inline ::std::string* RemoteTensorHandle::mutable_op_device() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.eager.RemoteTensorHandle.op_device)
  return op_device_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* RemoteTensorHandle::release_op_device() {
  // @@protoc_insertion_point(field_release:tensorflow.eager.RemoteTensorHandle.op_device)
  
  return op_device_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline void RemoteTensorHandle::set_allocated_op_device(::std::string* op_device) {
  if (op_device != NULL) {
    
  } else {
    
  }
  op_device_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), op_device,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.eager.RemoteTensorHandle.op_device)
}
inline ::std::string* RemoteTensorHandle::unsafe_arena_release_op_device() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.eager.RemoteTensorHandle.op_device)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return op_device_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void RemoteTensorHandle::unsafe_arena_set_allocated_op_device(
    ::std::string* op_device) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (op_device != NULL) {
    
  } else {
    
  }
  op_device_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      op_device, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.eager.RemoteTensorHandle.op_device)
}

// .tensorflow.DataType dtype = 5;
inline void RemoteTensorHandle::clear_dtype() {
  dtype_ = 0;
}
inline ::tensorflow::DataType RemoteTensorHandle::dtype() const {
  // @@protoc_insertion_point(field_get:tensorflow.eager.RemoteTensorHandle.dtype)
  return static_cast< ::tensorflow::DataType >(dtype_);
}
inline void RemoteTensorHandle::set_dtype(::tensorflow::DataType value) {
  
  dtype_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.eager.RemoteTensorHandle.dtype)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace eager
}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_tensorflow_2fcore_2fprotobuf_2fremote_5ftensor_5fhandle_2eproto__INCLUDED
