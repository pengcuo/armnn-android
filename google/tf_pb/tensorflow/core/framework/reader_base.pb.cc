// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/framework/reader_base.proto

#include "tensorflow/core/framework/reader_base.pb.h"

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
class ReaderBaseStateDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ReaderBaseState>
      _instance;
} _ReaderBaseState_default_instance_;
}  // namespace tensorflow
namespace protobuf_tensorflow_2fcore_2fframework_2freader_5fbase_2eproto {
void InitDefaultsReaderBaseStateImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::tensorflow::_ReaderBaseState_default_instance_;
    new (ptr) ::tensorflow::ReaderBaseState();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::tensorflow::ReaderBaseState::InitAsDefaultInstance();
}

void InitDefaultsReaderBaseState() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsReaderBaseStateImpl);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::ReaderBaseState, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::ReaderBaseState, work_started_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::ReaderBaseState, work_finished_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::ReaderBaseState, num_records_produced_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::ReaderBaseState, current_work_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::tensorflow::ReaderBaseState)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::tensorflow::_ReaderBaseState_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "tensorflow/core/framework/reader_base.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n+tensorflow/core/framework/reader_base."
      "proto\022\ntensorflow\"r\n\017ReaderBaseState\022\024\n\014"
      "work_started\030\001 \001(\003\022\025\n\rwork_finished\030\002 \001("
      "\003\022\034\n\024num_records_produced\030\003 \001(\003\022\024\n\014curre"
      "nt_work\030\004 \001(\014Bp\n\030org.tensorflow.framewor"
      "kB\020ReaderBaseProtosP\001Z=github.com/tensor"
      "flow/tensorflow/tensorflow/go/core/frame"
      "work\370\001\001b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 295);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "tensorflow/core/framework/reader_base.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_tensorflow_2fcore_2fframework_2freader_5fbase_2eproto
namespace tensorflow {

// ===================================================================

void ReaderBaseState::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ReaderBaseState::kWorkStartedFieldNumber;
const int ReaderBaseState::kWorkFinishedFieldNumber;
const int ReaderBaseState::kNumRecordsProducedFieldNumber;
const int ReaderBaseState::kCurrentWorkFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ReaderBaseState::ReaderBaseState()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_tensorflow_2fcore_2fframework_2freader_5fbase_2eproto::InitDefaultsReaderBaseState();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:tensorflow.ReaderBaseState)
}
ReaderBaseState::ReaderBaseState(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena) {
  ::protobuf_tensorflow_2fcore_2fframework_2freader_5fbase_2eproto::InitDefaultsReaderBaseState();
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:tensorflow.ReaderBaseState)
}
ReaderBaseState::ReaderBaseState(const ReaderBaseState& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  current_work_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.current_work().size() > 0) {
    current_work_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.current_work(),
      GetArenaNoVirtual());
  }
  ::memcpy(&work_started_, &from.work_started_,
    static_cast<size_t>(reinterpret_cast<char*>(&num_records_produced_) -
    reinterpret_cast<char*>(&work_started_)) + sizeof(num_records_produced_));
  // @@protoc_insertion_point(copy_constructor:tensorflow.ReaderBaseState)
}

void ReaderBaseState::SharedCtor() {
  current_work_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&work_started_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&num_records_produced_) -
      reinterpret_cast<char*>(&work_started_)) + sizeof(num_records_produced_));
  _cached_size_ = 0;
}

ReaderBaseState::~ReaderBaseState() {
  // @@protoc_insertion_point(destructor:tensorflow.ReaderBaseState)
  SharedDtor();
}

void ReaderBaseState::SharedDtor() {
  GOOGLE_DCHECK(GetArenaNoVirtual() == NULL);
  current_work_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void ReaderBaseState::ArenaDtor(void* object) {
  ReaderBaseState* _this = reinterpret_cast< ReaderBaseState* >(object);
  (void)_this;
}
void ReaderBaseState::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void ReaderBaseState::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ReaderBaseState::descriptor() {
  ::protobuf_tensorflow_2fcore_2fframework_2freader_5fbase_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_tensorflow_2fcore_2fframework_2freader_5fbase_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ReaderBaseState& ReaderBaseState::default_instance() {
  ::protobuf_tensorflow_2fcore_2fframework_2freader_5fbase_2eproto::InitDefaultsReaderBaseState();
  return *internal_default_instance();
}

ReaderBaseState* ReaderBaseState::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<ReaderBaseState>(arena);
}

void ReaderBaseState::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.ReaderBaseState)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  current_work_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  ::memset(&work_started_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&num_records_produced_) -
      reinterpret_cast<char*>(&work_started_)) + sizeof(num_records_produced_));
  _internal_metadata_.Clear();
}

bool ReaderBaseState::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tensorflow.ReaderBaseState)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int64 work_started = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &work_started_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 work_finished = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &work_finished_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 num_records_produced = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &num_records_produced_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bytes current_work = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_current_work()));
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
  // @@protoc_insertion_point(parse_success:tensorflow.ReaderBaseState)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tensorflow.ReaderBaseState)
  return false;
#undef DO_
}

void ReaderBaseState::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tensorflow.ReaderBaseState)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 work_started = 1;
  if (this->work_started() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->work_started(), output);
  }

  // int64 work_finished = 2;
  if (this->work_finished() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->work_finished(), output);
  }

  // int64 num_records_produced = 3;
  if (this->num_records_produced() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->num_records_produced(), output);
  }

  // bytes current_work = 4;
  if (this->current_work().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      4, this->current_work(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:tensorflow.ReaderBaseState)
}

::google::protobuf::uint8* ReaderBaseState::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.ReaderBaseState)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 work_started = 1;
  if (this->work_started() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->work_started(), target);
  }

  // int64 work_finished = 2;
  if (this->work_finished() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->work_finished(), target);
  }

  // int64 num_records_produced = 3;
  if (this->num_records_produced() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->num_records_produced(), target);
  }

  // bytes current_work = 4;
  if (this->current_work().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        4, this->current_work(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.ReaderBaseState)
  return target;
}

size_t ReaderBaseState::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.ReaderBaseState)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // bytes current_work = 4;
  if (this->current_work().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->current_work());
  }

  // int64 work_started = 1;
  if (this->work_started() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->work_started());
  }

  // int64 work_finished = 2;
  if (this->work_finished() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->work_finished());
  }

  // int64 num_records_produced = 3;
  if (this->num_records_produced() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->num_records_produced());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ReaderBaseState::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tensorflow.ReaderBaseState)
  GOOGLE_DCHECK_NE(&from, this);
  const ReaderBaseState* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ReaderBaseState>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.ReaderBaseState)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.ReaderBaseState)
    MergeFrom(*source);
  }
}

void ReaderBaseState::MergeFrom(const ReaderBaseState& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.ReaderBaseState)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.current_work().size() > 0) {
    set_current_work(from.current_work());
  }
  if (from.work_started() != 0) {
    set_work_started(from.work_started());
  }
  if (from.work_finished() != 0) {
    set_work_finished(from.work_finished());
  }
  if (from.num_records_produced() != 0) {
    set_num_records_produced(from.num_records_produced());
  }
}

void ReaderBaseState::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tensorflow.ReaderBaseState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ReaderBaseState::CopyFrom(const ReaderBaseState& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.ReaderBaseState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ReaderBaseState::IsInitialized() const {
  return true;
}

void ReaderBaseState::Swap(ReaderBaseState* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    ReaderBaseState* temp = New(GetArenaNoVirtual());
    temp->MergeFrom(*other);
    other->CopyFrom(*this);
    InternalSwap(temp);
    if (GetArenaNoVirtual() == NULL) {
      delete temp;
    }
  }
}
void ReaderBaseState::UnsafeArenaSwap(ReaderBaseState* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void ReaderBaseState::InternalSwap(ReaderBaseState* other) {
  using std::swap;
  current_work_.Swap(&other->current_work_);
  swap(work_started_, other->work_started_);
  swap(work_finished_, other->work_finished_);
  swap(num_records_produced_, other->num_records_produced_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ReaderBaseState::GetMetadata() const {
  protobuf_tensorflow_2fcore_2fframework_2freader_5fbase_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_tensorflow_2fcore_2fframework_2freader_5fbase_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)
