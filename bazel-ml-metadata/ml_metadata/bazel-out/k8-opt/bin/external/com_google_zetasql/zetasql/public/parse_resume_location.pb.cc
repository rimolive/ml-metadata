// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: zetasql/public/parse_resume_location.proto

#include "zetasql/public/parse_resume_location.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace zetasql {
PROTOBUF_CONSTEXPR ParseResumeLocationProto::ParseResumeLocationProto(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.input_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.filename_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.byte_position_)*/0
  , /*decltype(_impl_.allow_resume_)*/false} {}
struct ParseResumeLocationProtoDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ParseResumeLocationProtoDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ParseResumeLocationProtoDefaultTypeInternal() {}
  union {
    ParseResumeLocationProto _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ParseResumeLocationProtoDefaultTypeInternal _ParseResumeLocationProto_default_instance_;
}  // namespace zetasql
static ::_pb::Metadata file_level_metadata_zetasql_2fpublic_2fparse_5fresume_5flocation_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_zetasql_2fpublic_2fparse_5fresume_5flocation_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_zetasql_2fpublic_2fparse_5fresume_5flocation_2eproto = nullptr;

const uint32_t TableStruct_zetasql_2fpublic_2fparse_5fresume_5flocation_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::zetasql::ParseResumeLocationProto, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::zetasql::ParseResumeLocationProto, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::zetasql::ParseResumeLocationProto, _impl_.filename_),
  PROTOBUF_FIELD_OFFSET(::zetasql::ParseResumeLocationProto, _impl_.input_),
  PROTOBUF_FIELD_OFFSET(::zetasql::ParseResumeLocationProto, _impl_.byte_position_),
  PROTOBUF_FIELD_OFFSET(::zetasql::ParseResumeLocationProto, _impl_.allow_resume_),
  1,
  0,
  2,
  3,
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 10, -1, sizeof(::zetasql::ParseResumeLocationProto)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::zetasql::_ParseResumeLocationProto_default_instance_._instance,
};

const char descriptor_table_protodef_zetasql_2fpublic_2fparse_5fresume_5flocation_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n*zetasql/public/parse_resume_location.p"
  "roto\022\007zetasql\"h\n\030ParseResumeLocationProt"
  "o\022\020\n\010filename\030\004 \001(\t\022\r\n\005input\030\001 \001(\t\022\025\n\rby"
  "te_position\030\002 \001(\005\022\024\n\014allow_resume\030\003 \001(\010B"
  "#\n\022com.google.zetasqlB\rZetaSQLParser"
  ;
static ::_pbi::once_flag descriptor_table_zetasql_2fpublic_2fparse_5fresume_5flocation_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_zetasql_2fpublic_2fparse_5fresume_5flocation_2eproto = {
    false, false, 196, descriptor_table_protodef_zetasql_2fpublic_2fparse_5fresume_5flocation_2eproto,
    "zetasql/public/parse_resume_location.proto",
    &descriptor_table_zetasql_2fpublic_2fparse_5fresume_5flocation_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_zetasql_2fpublic_2fparse_5fresume_5flocation_2eproto::offsets,
    file_level_metadata_zetasql_2fpublic_2fparse_5fresume_5flocation_2eproto, file_level_enum_descriptors_zetasql_2fpublic_2fparse_5fresume_5flocation_2eproto,
    file_level_service_descriptors_zetasql_2fpublic_2fparse_5fresume_5flocation_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_zetasql_2fpublic_2fparse_5fresume_5flocation_2eproto_getter() {
  return &descriptor_table_zetasql_2fpublic_2fparse_5fresume_5flocation_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_zetasql_2fpublic_2fparse_5fresume_5flocation_2eproto(&descriptor_table_zetasql_2fpublic_2fparse_5fresume_5flocation_2eproto);
namespace zetasql {

// ===================================================================

class ParseResumeLocationProto::_Internal {
 public:
  using HasBits = decltype(std::declval<ParseResumeLocationProto>()._impl_._has_bits_);
  static void set_has_filename(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_input(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_byte_position(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_allow_resume(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
};

ParseResumeLocationProto::ParseResumeLocationProto(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:zetasql.ParseResumeLocationProto)
}
ParseResumeLocationProto::ParseResumeLocationProto(const ParseResumeLocationProto& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  ParseResumeLocationProto* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.input_){}
    , decltype(_impl_.filename_){}
    , decltype(_impl_.byte_position_){}
    , decltype(_impl_.allow_resume_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.input_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.input_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_input()) {
    _this->_impl_.input_.Set(from._internal_input(), 
      _this->GetArenaForAllocation());
  }
  _impl_.filename_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.filename_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_filename()) {
    _this->_impl_.filename_.Set(from._internal_filename(), 
      _this->GetArenaForAllocation());
  }
  ::memcpy(&_impl_.byte_position_, &from._impl_.byte_position_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.allow_resume_) -
    reinterpret_cast<char*>(&_impl_.byte_position_)) + sizeof(_impl_.allow_resume_));
  // @@protoc_insertion_point(copy_constructor:zetasql.ParseResumeLocationProto)
}

inline void ParseResumeLocationProto::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.input_){}
    , decltype(_impl_.filename_){}
    , decltype(_impl_.byte_position_){0}
    , decltype(_impl_.allow_resume_){false}
  };
  _impl_.input_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.input_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.filename_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.filename_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

ParseResumeLocationProto::~ParseResumeLocationProto() {
  // @@protoc_insertion_point(destructor:zetasql.ParseResumeLocationProto)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ParseResumeLocationProto::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.input_.Destroy();
  _impl_.filename_.Destroy();
}

void ParseResumeLocationProto::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ParseResumeLocationProto::Clear() {
// @@protoc_insertion_point(message_clear_start:zetasql.ParseResumeLocationProto)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _impl_.input_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      _impl_.filename_.ClearNonDefaultToEmpty();
    }
  }
  if (cached_has_bits & 0x0000000cu) {
    ::memset(&_impl_.byte_position_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&_impl_.allow_resume_) -
        reinterpret_cast<char*>(&_impl_.byte_position_)) + sizeof(_impl_.allow_resume_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ParseResumeLocationProto::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional string input = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_input();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          #ifndef NDEBUG
          ::_pbi::VerifyUTF8(str, "zetasql.ParseResumeLocationProto.input");
          #endif  // !NDEBUG
        } else
          goto handle_unusual;
        continue;
      // optional int32 byte_position = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_byte_position(&has_bits);
          _impl_.byte_position_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bool allow_resume = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _Internal::set_has_allow_resume(&has_bits);
          _impl_.allow_resume_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string filename = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_filename();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          #ifndef NDEBUG
          ::_pbi::VerifyUTF8(str, "zetasql.ParseResumeLocationProto.filename");
          #endif  // !NDEBUG
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* ParseResumeLocationProto::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:zetasql.ParseResumeLocationProto)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional string input = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_input().data(), static_cast<int>(this->_internal_input().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "zetasql.ParseResumeLocationProto.input");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_input(), target);
  }

  // optional int32 byte_position = 2;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_byte_position(), target);
  }

  // optional bool allow_resume = 3;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(3, this->_internal_allow_resume(), target);
  }

  // optional string filename = 4;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_filename().data(), static_cast<int>(this->_internal_filename().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "zetasql.ParseResumeLocationProto.filename");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_filename(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:zetasql.ParseResumeLocationProto)
  return target;
}

size_t ParseResumeLocationProto::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:zetasql.ParseResumeLocationProto)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    // optional string input = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_input());
    }

    // optional string filename = 4;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_filename());
    }

    // optional int32 byte_position = 2;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_byte_position());
    }

    // optional bool allow_resume = 3;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 + 1;
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ParseResumeLocationProto::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    ParseResumeLocationProto::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ParseResumeLocationProto::GetClassData() const { return &_class_data_; }


void ParseResumeLocationProto::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<ParseResumeLocationProto*>(&to_msg);
  auto& from = static_cast<const ParseResumeLocationProto&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:zetasql.ParseResumeLocationProto)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_input(from._internal_input());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_set_filename(from._internal_filename());
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.byte_position_ = from._impl_.byte_position_;
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_impl_.allow_resume_ = from._impl_.allow_resume_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ParseResumeLocationProto::CopyFrom(const ParseResumeLocationProto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:zetasql.ParseResumeLocationProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ParseResumeLocationProto::IsInitialized() const {
  return true;
}

void ParseResumeLocationProto::InternalSwap(ParseResumeLocationProto* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.input_, lhs_arena,
      &other->_impl_.input_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.filename_, lhs_arena,
      &other->_impl_.filename_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ParseResumeLocationProto, _impl_.allow_resume_)
      + sizeof(ParseResumeLocationProto::_impl_.allow_resume_)
      - PROTOBUF_FIELD_OFFSET(ParseResumeLocationProto, _impl_.byte_position_)>(
          reinterpret_cast<char*>(&_impl_.byte_position_),
          reinterpret_cast<char*>(&other->_impl_.byte_position_));
}

::PROTOBUF_NAMESPACE_ID::Metadata ParseResumeLocationProto::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_zetasql_2fpublic_2fparse_5fresume_5flocation_2eproto_getter, &descriptor_table_zetasql_2fpublic_2fparse_5fresume_5flocation_2eproto_once,
      file_level_metadata_zetasql_2fpublic_2fparse_5fresume_5flocation_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace zetasql
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::zetasql::ParseResumeLocationProto*
Arena::CreateMaybeMessage< ::zetasql::ParseResumeLocationProto >(Arena* arena) {
  return Arena::CreateMessageInternal< ::zetasql::ParseResumeLocationProto >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
