// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/protobuf/remote_tensor_handle.proto

#include "tensorflow/core/protobuf/remote_tensor_handle.pb.h"

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
namespace eager {
class RemoteTensorHandleDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<RemoteTensorHandle>
      _instance;
} _RemoteTensorHandle_default_instance_;
}  // namespace eager
}  // namespace tensorflow
namespace protobuf_tensorflow_2fcore_2fprotobuf_2fremote_5ftensor_5fhandle_2eproto {
void InitDefaultsRemoteTensorHandleImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::tensorflow::eager::_RemoteTensorHandle_default_instance_;
    new (ptr) ::tensorflow::eager::RemoteTensorHandle();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::tensorflow::eager::RemoteTensorHandle::InitAsDefaultInstance();
}

void InitDefaultsRemoteTensorHandle() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsRemoteTensorHandleImpl);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::eager::RemoteTensorHandle, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::eager::RemoteTensorHandle, op_id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::eager::RemoteTensorHandle, output_num_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::eager::RemoteTensorHandle, device_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::eager::RemoteTensorHandle, op_device_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::eager::RemoteTensorHandle, dtype_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::tensorflow::eager::RemoteTensorHandle)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::tensorflow::eager::_RemoteTensorHandle_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "tensorflow/core/protobuf/remote_tensor_handle.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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
      "\n3tensorflow/core/protobuf/remote_tensor"
      "_handle.proto\022\020tensorflow.eager\032%tensorf"
      "low/core/framework/types.proto\"\177\n\022Remote"
      "TensorHandle\022\r\n\005op_id\030\001 \001(\003\022\022\n\noutput_nu"
      "m\030\002 \001(\005\022\016\n\006device\030\003 \001(\t\022\021\n\top_device\030\004 \001"
      "(\t\022#\n\005dtype\030\005 \001(\0162\024.tensorflow.DataTypeB"
      "9\n\030org.tensorflow.frameworkB\030RemoteTenso"
      "rHandleProtosP\001\370\001\001b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 306);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "tensorflow/core/protobuf/remote_tensor_handle.proto", &protobuf_RegisterTypes);
  ::protobuf_tensorflow_2fcore_2fframework_2ftypes_2eproto::AddDescriptors();
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
}  // namespace protobuf_tensorflow_2fcore_2fprotobuf_2fremote_5ftensor_5fhandle_2eproto
namespace tensorflow {
namespace eager {

// ===================================================================

void RemoteTensorHandle::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RemoteTensorHandle::kOpIdFieldNumber;
const int RemoteTensorHandle::kOutputNumFieldNumber;
const int RemoteTensorHandle::kDeviceFieldNumber;
const int RemoteTensorHandle::kOpDeviceFieldNumber;
const int RemoteTensorHandle::kDtypeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RemoteTensorHandle::RemoteTensorHandle()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_tensorflow_2fcore_2fprotobuf_2fremote_5ftensor_5fhandle_2eproto::InitDefaultsRemoteTensorHandle();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:tensorflow.eager.RemoteTensorHandle)
}
RemoteTensorHandle::RemoteTensorHandle(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena) {
  ::protobuf_tensorflow_2fcore_2fprotobuf_2fremote_5ftensor_5fhandle_2eproto::InitDefaultsRemoteTensorHandle();
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:tensorflow.eager.RemoteTensorHandle)
}
RemoteTensorHandle::RemoteTensorHandle(const RemoteTensorHandle& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  device_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.device().size() > 0) {
    device_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.device(),
      GetArenaNoVirtual());
  }
  op_device_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.op_device().size() > 0) {
    op_device_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.op_device(),
      GetArenaNoVirtual());
  }
  ::memcpy(&op_id_, &from.op_id_,
    static_cast<size_t>(reinterpret_cast<char*>(&dtype_) -
    reinterpret_cast<char*>(&op_id_)) + sizeof(dtype_));
  // @@protoc_insertion_point(copy_constructor:tensorflow.eager.RemoteTensorHandle)
}

void RemoteTensorHandle::SharedCtor() {
  device_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  op_device_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&op_id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&dtype_) -
      reinterpret_cast<char*>(&op_id_)) + sizeof(dtype_));
  _cached_size_ = 0;
}

RemoteTensorHandle::~RemoteTensorHandle() {
  // @@protoc_insertion_point(destructor:tensorflow.eager.RemoteTensorHandle)
  SharedDtor();
}

void RemoteTensorHandle::SharedDtor() {
  GOOGLE_DCHECK(GetArenaNoVirtual() == NULL);
  device_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  op_device_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void RemoteTensorHandle::ArenaDtor(void* object) {
  RemoteTensorHandle* _this = reinterpret_cast< RemoteTensorHandle* >(object);
  (void)_this;
}
void RemoteTensorHandle::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void RemoteTensorHandle::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RemoteTensorHandle::descriptor() {
  ::protobuf_tensorflow_2fcore_2fprotobuf_2fremote_5ftensor_5fhandle_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_tensorflow_2fcore_2fprotobuf_2fremote_5ftensor_5fhandle_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const RemoteTensorHandle& RemoteTensorHandle::default_instance() {
  ::protobuf_tensorflow_2fcore_2fprotobuf_2fremote_5ftensor_5fhandle_2eproto::InitDefaultsRemoteTensorHandle();
  return *internal_default_instance();
}

RemoteTensorHandle* RemoteTensorHandle::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<RemoteTensorHandle>(arena);
}

void RemoteTensorHandle::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.eager.RemoteTensorHandle)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  device_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  op_device_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  ::memset(&op_id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&dtype_) -
      reinterpret_cast<char*>(&op_id_)) + sizeof(dtype_));
  _internal_metadata_.Clear();
}

bool RemoteTensorHandle::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tensorflow.eager.RemoteTensorHandle)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int64 op_id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &op_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 output_num = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &output_num_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string device = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_device()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->device().data(), static_cast<int>(this->device().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tensorflow.eager.RemoteTensorHandle.device"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string op_device = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_op_device()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->op_device().data(), static_cast<int>(this->op_device().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tensorflow.eager.RemoteTensorHandle.op_device"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .tensorflow.DataType dtype = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_dtype(static_cast< ::tensorflow::DataType >(value));
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
  // @@protoc_insertion_point(parse_success:tensorflow.eager.RemoteTensorHandle)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tensorflow.eager.RemoteTensorHandle)
  return false;
#undef DO_
}

void RemoteTensorHandle::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tensorflow.eager.RemoteTensorHandle)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 op_id = 1;
  if (this->op_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->op_id(), output);
  }

  // int32 output_num = 2;
  if (this->output_num() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->output_num(), output);
  }

  // string device = 3;
  if (this->device().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->device().data(), static_cast<int>(this->device().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.eager.RemoteTensorHandle.device");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->device(), output);
  }

  // string op_device = 4;
  if (this->op_device().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->op_device().data(), static_cast<int>(this->op_device().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.eager.RemoteTensorHandle.op_device");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->op_device(), output);
  }

  // .tensorflow.DataType dtype = 5;
  if (this->dtype() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      5, this->dtype(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:tensorflow.eager.RemoteTensorHandle)
}

::google::protobuf::uint8* RemoteTensorHandle::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.eager.RemoteTensorHandle)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 op_id = 1;
  if (this->op_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->op_id(), target);
  }

  // int32 output_num = 2;
  if (this->output_num() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->output_num(), target);
  }

  // string device = 3;
  if (this->device().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->device().data(), static_cast<int>(this->device().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.eager.RemoteTensorHandle.device");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->device(), target);
  }

  // string op_device = 4;
  if (this->op_device().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->op_device().data(), static_cast<int>(this->op_device().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.eager.RemoteTensorHandle.op_device");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->op_device(), target);
  }

  // .tensorflow.DataType dtype = 5;
  if (this->dtype() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      5, this->dtype(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.eager.RemoteTensorHandle)
  return target;
}

size_t RemoteTensorHandle::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.eager.RemoteTensorHandle)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string device = 3;
  if (this->device().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->device());
  }

  // string op_device = 4;
  if (this->op_device().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->op_device());
  }

  // int64 op_id = 1;
  if (this->op_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->op_id());
  }

  // int32 output_num = 2;
  if (this->output_num() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->output_num());
  }

  // .tensorflow.DataType dtype = 5;
  if (this->dtype() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->dtype());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void RemoteTensorHandle::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tensorflow.eager.RemoteTensorHandle)
  GOOGLE_DCHECK_NE(&from, this);
  const RemoteTensorHandle* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const RemoteTensorHandle>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.eager.RemoteTensorHandle)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.eager.RemoteTensorHandle)
    MergeFrom(*source);
  }
}

void RemoteTensorHandle::MergeFrom(const RemoteTensorHandle& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.eager.RemoteTensorHandle)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.device().size() > 0) {
    set_device(from.device());
  }
  if (from.op_device().size() > 0) {
    set_op_device(from.op_device());
  }
  if (from.op_id() != 0) {
    set_op_id(from.op_id());
  }
  if (from.output_num() != 0) {
    set_output_num(from.output_num());
  }
  if (from.dtype() != 0) {
    set_dtype(from.dtype());
  }
}

void RemoteTensorHandle::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tensorflow.eager.RemoteTensorHandle)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RemoteTensorHandle::CopyFrom(const RemoteTensorHandle& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.eager.RemoteTensorHandle)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RemoteTensorHandle::IsInitialized() const {
  return true;
}

void RemoteTensorHandle::Swap(RemoteTensorHandle* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    RemoteTensorHandle* temp = New(GetArenaNoVirtual());
    temp->MergeFrom(*other);
    other->CopyFrom(*this);
    InternalSwap(temp);
    if (GetArenaNoVirtual() == NULL) {
      delete temp;
    }
  }
}
void RemoteTensorHandle::UnsafeArenaSwap(RemoteTensorHandle* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void RemoteTensorHandle::InternalSwap(RemoteTensorHandle* other) {
  using std::swap;
  device_.Swap(&other->device_);
  op_device_.Swap(&other->op_device_);
  swap(op_id_, other->op_id_);
  swap(output_num_, other->output_num_);
  swap(dtype_, other->dtype_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata RemoteTensorHandle::GetMetadata() const {
  protobuf_tensorflow_2fcore_2fprotobuf_2fremote_5ftensor_5fhandle_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_tensorflow_2fcore_2fprotobuf_2fremote_5ftensor_5fhandle_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace eager
}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)
