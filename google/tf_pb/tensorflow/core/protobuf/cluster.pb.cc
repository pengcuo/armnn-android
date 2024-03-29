// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/protobuf/cluster.proto

#include "tensorflow/core/protobuf/cluster.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace tensorflow {
class JobDef_TasksEntry_DoNotUseDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<JobDef_TasksEntry_DoNotUse>
      _instance;
} _JobDef_TasksEntry_DoNotUse_default_instance_;
class JobDefDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<JobDef>
      _instance;
} _JobDef_default_instance_;
class ClusterDefDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ClusterDef>
      _instance;
} _ClusterDef_default_instance_;
}  // namespace tensorflow
namespace protobuf_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto {
void InitDefaultsJobDef_TasksEntry_DoNotUseImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::tensorflow::_JobDef_TasksEntry_DoNotUse_default_instance_;
    new (ptr) ::tensorflow::JobDef_TasksEntry_DoNotUse();
  }
  ::tensorflow::JobDef_TasksEntry_DoNotUse::InitAsDefaultInstance();
}

void InitDefaultsJobDef_TasksEntry_DoNotUse() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsJobDef_TasksEntry_DoNotUseImpl);
}

void InitDefaultsJobDefImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto::InitDefaultsJobDef_TasksEntry_DoNotUse();
  {
    void* ptr = &::tensorflow::_JobDef_default_instance_;
    new (ptr) ::tensorflow::JobDef();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::tensorflow::JobDef::InitAsDefaultInstance();
}

void InitDefaultsJobDef() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsJobDefImpl);
}

void InitDefaultsClusterDefImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto::InitDefaultsJobDef();
  {
    void* ptr = &::tensorflow::_ClusterDef_default_instance_;
    new (ptr) ::tensorflow::ClusterDef();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::tensorflow::ClusterDef::InitAsDefaultInstance();
}

void InitDefaultsClusterDef() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsClusterDefImpl);
}

::google::protobuf::Metadata file_level_metadata[3];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::JobDef_TasksEntry_DoNotUse, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::JobDef_TasksEntry_DoNotUse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::JobDef_TasksEntry_DoNotUse, key_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::JobDef_TasksEntry_DoNotUse, value_),
  0,
  1,
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::JobDef, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::JobDef, name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::JobDef, tasks_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::ClusterDef, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::ClusterDef, job_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::tensorflow::JobDef_TasksEntry_DoNotUse)},
  { 9, -1, sizeof(::tensorflow::JobDef)},
  { 16, -1, sizeof(::tensorflow::ClusterDef)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::tensorflow::_JobDef_TasksEntry_DoNotUse_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::tensorflow::_JobDef_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::tensorflow::_ClusterDef_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "tensorflow/core/protobuf/cluster.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 3);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n&tensorflow/core/protobuf/cluster.proto"
      "\022\ntensorflow\"r\n\006JobDef\022\014\n\004name\030\001 \001(\t\022,\n\005"
      "tasks\030\002 \003(\0132\035.tensorflow.JobDef.TasksEnt"
      "ry\032,\n\nTasksEntry\022\013\n\003key\030\001 \001(\005\022\r\n\005value\030\002"
      " \001(\t:\0028\001\"-\n\nClusterDef\022\037\n\003job\030\001 \003(\0132\022.te"
      "nsorflow.JobDefBn\n\032org.tensorflow.distru"
      "ntimeB\rClusterProtosP\001Z<github.com/tenso"
      "rflow/tensorflow/tensorflow/go/core/prot"
      "obuf\370\001\001b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 335);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "tensorflow/core/protobuf/cluster.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto
namespace tensorflow {

// ===================================================================

JobDef_TasksEntry_DoNotUse::JobDef_TasksEntry_DoNotUse() {}
JobDef_TasksEntry_DoNotUse::JobDef_TasksEntry_DoNotUse(::google::protobuf::Arena* arena) : SuperType(arena) {}
void JobDef_TasksEntry_DoNotUse::MergeFrom(const JobDef_TasksEntry_DoNotUse& other) {
  MergeFromInternal(other);
}
::google::protobuf::Metadata JobDef_TasksEntry_DoNotUse::GetMetadata() const {
  ::protobuf_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto::file_level_metadata[0];
}
void JobDef_TasksEntry_DoNotUse::MergeFrom(
    const ::google::protobuf::Message& other) {
  ::google::protobuf::Message::MergeFrom(other);
}


// ===================================================================

void JobDef::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int JobDef::kNameFieldNumber;
const int JobDef::kTasksFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

JobDef::JobDef()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto::InitDefaultsJobDef();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:tensorflow.JobDef)
}
JobDef::JobDef(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena),
  tasks_(arena) {
  ::protobuf_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto::InitDefaultsJobDef();
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:tensorflow.JobDef)
}
JobDef::JobDef(const JobDef& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  tasks_.MergeFrom(from.tasks_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name(),
      GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(copy_constructor:tensorflow.JobDef)
}

void JobDef::SharedCtor() {
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

JobDef::~JobDef() {
  // @@protoc_insertion_point(destructor:tensorflow.JobDef)
  SharedDtor();
}

void JobDef::SharedDtor() {
  GOOGLE_DCHECK(GetArenaNoVirtual() == NULL);
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void JobDef::ArenaDtor(void* object) {
  JobDef* _this = reinterpret_cast< JobDef* >(object);
  (void)_this;
}
void JobDef::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void JobDef::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* JobDef::descriptor() {
  ::protobuf_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const JobDef& JobDef::default_instance() {
  ::protobuf_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto::InitDefaultsJobDef();
  return *internal_default_instance();
}

JobDef* JobDef::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<JobDef>(arena);
}

void JobDef::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.JobDef)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  tasks_.Clear();
  name_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  _internal_metadata_.Clear();
}

bool JobDef::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tensorflow.JobDef)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tensorflow.JobDef.name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // map<int32, string> tasks = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          JobDef_TasksEntry_DoNotUse::Parser< ::google::protobuf::internal::MapField<
              JobDef_TasksEntry_DoNotUse,
              ::google::protobuf::int32, ::std::string,
              ::google::protobuf::internal::WireFormatLite::TYPE_INT32,
              ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
              0 >,
            ::google::protobuf::Map< ::google::protobuf::int32, ::std::string > > parser(&tasks_);
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, &parser));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            parser.value().data(), static_cast<int>(parser.value().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tensorflow.JobDef.TasksEntry.value"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:tensorflow.JobDef)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tensorflow.JobDef)
  return false;
#undef DO_
}

void JobDef::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tensorflow.JobDef)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.JobDef.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // map<int32, string> tasks = 2;
  if (!this->tasks().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::int32, ::std::string >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::int32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;
    struct Utf8Check {
      static void Check(ConstPtr p) {
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
          p->second.data(), static_cast<int>(p->second.length()),
          ::google::protobuf::internal::WireFormatLite::SERIALIZE,
          "tensorflow.JobDef.TasksEntry.value");
      }
    };

    if (output->IsSerializationDeterministic() &&
        this->tasks().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->tasks().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::int32, ::std::string >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::int32, ::std::string >::const_iterator
          it = this->tasks().begin();
          it != this->tasks().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<JobDef_TasksEntry_DoNotUse> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(tasks_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            2, *entry, output);
        if (entry->GetArena() != NULL) {
          entry.release();
        }
        Utf8Check::Check(items[static_cast<ptrdiff_t>(i)].second);
      }
    } else {
      ::google::protobuf::scoped_ptr<JobDef_TasksEntry_DoNotUse> entry;
      for (::google::protobuf::Map< ::google::protobuf::int32, ::std::string >::const_iterator
          it = this->tasks().begin();
          it != this->tasks().end(); ++it) {
        entry.reset(tasks_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            2, *entry, output);
        if (entry->GetArena() != NULL) {
          entry.release();
        }
        Utf8Check::Check(&*it);
      }
    }
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:tensorflow.JobDef)
}

::google::protobuf::uint8* JobDef::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.JobDef)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.JobDef.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // map<int32, string> tasks = 2;
  if (!this->tasks().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::int32, ::std::string >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::int32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;
    struct Utf8Check {
      static void Check(ConstPtr p) {
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
          p->second.data(), static_cast<int>(p->second.length()),
          ::google::protobuf::internal::WireFormatLite::SERIALIZE,
          "tensorflow.JobDef.TasksEntry.value");
      }
    };

    if (deterministic &&
        this->tasks().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->tasks().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::int32, ::std::string >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::int32, ::std::string >::const_iterator
          it = this->tasks().begin();
          it != this->tasks().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<JobDef_TasksEntry_DoNotUse> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(tasks_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       2, *entry, deterministic, target);
;
        if (entry->GetArena() != NULL) {
          entry.release();
        }
        Utf8Check::Check(items[static_cast<ptrdiff_t>(i)].second);
      }
    } else {
      ::google::protobuf::scoped_ptr<JobDef_TasksEntry_DoNotUse> entry;
      for (::google::protobuf::Map< ::google::protobuf::int32, ::std::string >::const_iterator
          it = this->tasks().begin();
          it != this->tasks().end(); ++it) {
        entry.reset(tasks_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       2, *entry, deterministic, target);
;
        if (entry->GetArena() != NULL) {
          entry.release();
        }
        Utf8Check::Check(&*it);
      }
    }
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.JobDef)
  return target;
}

size_t JobDef::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.JobDef)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // map<int32, string> tasks = 2;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->tasks_size());
  {
    ::google::protobuf::scoped_ptr<JobDef_TasksEntry_DoNotUse> entry;
    for (::google::protobuf::Map< ::google::protobuf::int32, ::std::string >::const_iterator
        it = this->tasks().begin();
        it != this->tasks().end(); ++it) {
      if (entry.get() != NULL && entry->GetArena() != NULL) {
        entry.release();
      }
      entry.reset(tasks_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
    if (entry.get() != NULL && entry->GetArena() != NULL) {
      entry.release();
    }
  }

  // string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void JobDef::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tensorflow.JobDef)
  GOOGLE_DCHECK_NE(&from, this);
  const JobDef* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const JobDef>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.JobDef)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.JobDef)
    MergeFrom(*source);
  }
}

void JobDef::MergeFrom(const JobDef& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.JobDef)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  tasks_.MergeFrom(from.tasks_);
  if (from.name().size() > 0) {
    set_name(from.name());
  }
}

void JobDef::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tensorflow.JobDef)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void JobDef::CopyFrom(const JobDef& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.JobDef)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool JobDef::IsInitialized() const {
  return true;
}

void JobDef::Swap(JobDef* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    JobDef* temp = New(GetArenaNoVirtual());
    temp->MergeFrom(*other);
    other->CopyFrom(*this);
    InternalSwap(temp);
    if (GetArenaNoVirtual() == NULL) {
      delete temp;
    }
  }
}
void JobDef::UnsafeArenaSwap(JobDef* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void JobDef::InternalSwap(JobDef* other) {
  using std::swap;
  tasks_.Swap(&other->tasks_);
  name_.Swap(&other->name_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata JobDef::GetMetadata() const {
  protobuf_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void ClusterDef::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ClusterDef::kJobFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ClusterDef::ClusterDef()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto::InitDefaultsClusterDef();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:tensorflow.ClusterDef)
}
ClusterDef::ClusterDef(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena),
  job_(arena) {
  ::protobuf_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto::InitDefaultsClusterDef();
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:tensorflow.ClusterDef)
}
ClusterDef::ClusterDef(const ClusterDef& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      job_(from.job_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:tensorflow.ClusterDef)
}

void ClusterDef::SharedCtor() {
  _cached_size_ = 0;
}

ClusterDef::~ClusterDef() {
  // @@protoc_insertion_point(destructor:tensorflow.ClusterDef)
  SharedDtor();
}

void ClusterDef::SharedDtor() {
  GOOGLE_DCHECK(GetArenaNoVirtual() == NULL);
}

void ClusterDef::ArenaDtor(void* object) {
  ClusterDef* _this = reinterpret_cast< ClusterDef* >(object);
  (void)_this;
}
void ClusterDef::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void ClusterDef::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ClusterDef::descriptor() {
  ::protobuf_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ClusterDef& ClusterDef::default_instance() {
  ::protobuf_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto::InitDefaultsClusterDef();
  return *internal_default_instance();
}

ClusterDef* ClusterDef::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<ClusterDef>(arena);
}

void ClusterDef::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.ClusterDef)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  job_.Clear();
  _internal_metadata_.Clear();
}

bool ClusterDef::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tensorflow.ClusterDef)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .tensorflow.JobDef job = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_job()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:tensorflow.ClusterDef)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tensorflow.ClusterDef)
  return false;
#undef DO_
}

void ClusterDef::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tensorflow.ClusterDef)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .tensorflow.JobDef job = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->job_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->job(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:tensorflow.ClusterDef)
}

::google::protobuf::uint8* ClusterDef::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.ClusterDef)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .tensorflow.JobDef job = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->job_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->job(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.ClusterDef)
  return target;
}

size_t ClusterDef::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.ClusterDef)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .tensorflow.JobDef job = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->job_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->job(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ClusterDef::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tensorflow.ClusterDef)
  GOOGLE_DCHECK_NE(&from, this);
  const ClusterDef* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ClusterDef>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.ClusterDef)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.ClusterDef)
    MergeFrom(*source);
  }
}

void ClusterDef::MergeFrom(const ClusterDef& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.ClusterDef)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  job_.MergeFrom(from.job_);
}

void ClusterDef::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tensorflow.ClusterDef)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ClusterDef::CopyFrom(const ClusterDef& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.ClusterDef)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ClusterDef::IsInitialized() const {
  return true;
}

void ClusterDef::Swap(ClusterDef* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    ClusterDef* temp = New(GetArenaNoVirtual());
    temp->MergeFrom(*other);
    other->CopyFrom(*this);
    InternalSwap(temp);
    if (GetArenaNoVirtual() == NULL) {
      delete temp;
    }
  }
}
void ClusterDef::UnsafeArenaSwap(ClusterDef* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void ClusterDef::InternalSwap(ClusterDef* other) {
  using std::swap;
  job_.InternalSwap(&other->job_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ClusterDef::GetMetadata() const {
  protobuf_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)
