// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: zetasql/public/simple_value.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_zetasql_2fpublic_2fsimple_5fvalue_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_zetasql_2fpublic_2fsimple_5fvalue_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021012 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_zetasql_2fpublic_2fsimple_5fvalue_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_zetasql_2fpublic_2fsimple_5fvalue_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_zetasql_2fpublic_2fsimple_5fvalue_2eproto;
namespace zetasql {
class SimpleValueProto;
struct SimpleValueProtoDefaultTypeInternal;
extern SimpleValueProtoDefaultTypeInternal _SimpleValueProto_default_instance_;
}  // namespace zetasql
PROTOBUF_NAMESPACE_OPEN
template<> ::zetasql::SimpleValueProto* Arena::CreateMaybeMessage<::zetasql::SimpleValueProto>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace zetasql {

// ===================================================================

class SimpleValueProto final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:zetasql.SimpleValueProto) */ {
 public:
  inline SimpleValueProto() : SimpleValueProto(nullptr) {}
  ~SimpleValueProto() override;
  explicit PROTOBUF_CONSTEXPR SimpleValueProto(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SimpleValueProto(const SimpleValueProto& from);
  SimpleValueProto(SimpleValueProto&& from) noexcept
    : SimpleValueProto() {
    *this = ::std::move(from);
  }

  inline SimpleValueProto& operator=(const SimpleValueProto& from) {
    CopyFrom(from);
    return *this;
  }
  inline SimpleValueProto& operator=(SimpleValueProto&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const SimpleValueProto& default_instance() {
    return *internal_default_instance();
  }
  enum ValueCase {
    kInt64Value = 1,
    kStringValue = 2,
    kBoolValue = 3,
    kDoubleValue = 4,
    kBytesValue = 5,
    kSimpleValueProtoSwitchMustHaveADefault = 255,
    VALUE_NOT_SET = 0,
  };

  static inline const SimpleValueProto* internal_default_instance() {
    return reinterpret_cast<const SimpleValueProto*>(
               &_SimpleValueProto_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SimpleValueProto& a, SimpleValueProto& b) {
    a.Swap(&b);
  }
  inline void Swap(SimpleValueProto* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SimpleValueProto* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SimpleValueProto* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<SimpleValueProto>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const SimpleValueProto& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const SimpleValueProto& from) {
    SimpleValueProto::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SimpleValueProto* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "zetasql.SimpleValueProto";
  }
  protected:
  explicit SimpleValueProto(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kInt64ValueFieldNumber = 1,
    kStringValueFieldNumber = 2,
    kBoolValueFieldNumber = 3,
    kDoubleValueFieldNumber = 4,
    kBytesValueFieldNumber = 5,
    kSimpleValueProtoSwitchMustHaveADefaultFieldNumber = 255,
  };
  // int64 int64_value = 1;
  bool has_int64_value() const;
  private:
  bool _internal_has_int64_value() const;
  public:
  void clear_int64_value();
  int64_t int64_value() const;
  void set_int64_value(int64_t value);
  private:
  int64_t _internal_int64_value() const;
  void _internal_set_int64_value(int64_t value);
  public:

  // string string_value = 2;
  bool has_string_value() const;
  private:
  bool _internal_has_string_value() const;
  public:
  void clear_string_value();
  const std::string& string_value() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_string_value(ArgT0&& arg0, ArgT... args);
  std::string* mutable_string_value();
  PROTOBUF_NODISCARD std::string* release_string_value();
  void set_allocated_string_value(std::string* string_value);
  private:
  const std::string& _internal_string_value() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_string_value(const std::string& value);
  std::string* _internal_mutable_string_value();
  public:

  // bool bool_value = 3;
  bool has_bool_value() const;
  private:
  bool _internal_has_bool_value() const;
  public:
  void clear_bool_value();
  bool bool_value() const;
  void set_bool_value(bool value);
  private:
  bool _internal_bool_value() const;
  void _internal_set_bool_value(bool value);
  public:

  // double double_value = 4;
  bool has_double_value() const;
  private:
  bool _internal_has_double_value() const;
  public:
  void clear_double_value();
  double double_value() const;
  void set_double_value(double value);
  private:
  double _internal_double_value() const;
  void _internal_set_double_value(double value);
  public:

  // bytes bytes_value = 5;
  bool has_bytes_value() const;
  private:
  bool _internal_has_bytes_value() const;
  public:
  void clear_bytes_value();
  const std::string& bytes_value() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_bytes_value(ArgT0&& arg0, ArgT... args);
  std::string* mutable_bytes_value();
  PROTOBUF_NODISCARD std::string* release_bytes_value();
  void set_allocated_bytes_value(std::string* bytes_value);
  private:
  const std::string& _internal_bytes_value() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_bytes_value(const std::string& value);
  std::string* _internal_mutable_bytes_value();
  public:

  // bool __SimpleValueProto__switch_must_have_a_default = 255;
  bool has___simplevalueproto__switch_must_have_a_default() const;
  private:
  bool _internal_has___simplevalueproto__switch_must_have_a_default() const;
  public:
  void clear___simplevalueproto__switch_must_have_a_default();
  bool __simplevalueproto__switch_must_have_a_default() const;
  void set___simplevalueproto__switch_must_have_a_default(bool value);
  private:
  bool _internal___simplevalueproto__switch_must_have_a_default() const;
  void _internal_set___simplevalueproto__switch_must_have_a_default(bool value);
  public:

  void clear_value();
  ValueCase value_case() const;
  // @@protoc_insertion_point(class_scope:zetasql.SimpleValueProto)
 private:
  class _Internal;
  void set_has_int64_value();
  void set_has_string_value();
  void set_has_bool_value();
  void set_has_double_value();
  void set_has_bytes_value();
  void set_has___simplevalueproto__switch_must_have_a_default();

  inline bool has_value() const;
  inline void clear_has_value();

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    union ValueUnion {
      constexpr ValueUnion() : _constinit_{} {}
        ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized _constinit_;
      int64_t int64_value_;
      ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr string_value_;
      bool bool_value_;
      double double_value_;
      ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr bytes_value_;
      bool __simplevalueproto__switch_must_have_a_default_;
    } value_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    uint32_t _oneof_case_[1];

  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_zetasql_2fpublic_2fsimple_5fvalue_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SimpleValueProto

// int64 int64_value = 1;
inline bool SimpleValueProto::_internal_has_int64_value() const {
  return value_case() == kInt64Value;
}
inline bool SimpleValueProto::has_int64_value() const {
  return _internal_has_int64_value();
}
inline void SimpleValueProto::set_has_int64_value() {
  _impl_._oneof_case_[0] = kInt64Value;
}
inline void SimpleValueProto::clear_int64_value() {
  if (_internal_has_int64_value()) {
    _impl_.value_.int64_value_ = int64_t{0};
    clear_has_value();
  }
}
inline int64_t SimpleValueProto::_internal_int64_value() const {
  if (_internal_has_int64_value()) {
    return _impl_.value_.int64_value_;
  }
  return int64_t{0};
}
inline void SimpleValueProto::_internal_set_int64_value(int64_t value) {
  if (!_internal_has_int64_value()) {
    clear_value();
    set_has_int64_value();
  }
  _impl_.value_.int64_value_ = value;
}
inline int64_t SimpleValueProto::int64_value() const {
  // @@protoc_insertion_point(field_get:zetasql.SimpleValueProto.int64_value)
  return _internal_int64_value();
}
inline void SimpleValueProto::set_int64_value(int64_t value) {
  _internal_set_int64_value(value);
  // @@protoc_insertion_point(field_set:zetasql.SimpleValueProto.int64_value)
}

// string string_value = 2;
inline bool SimpleValueProto::_internal_has_string_value() const {
  return value_case() == kStringValue;
}
inline bool SimpleValueProto::has_string_value() const {
  return _internal_has_string_value();
}
inline void SimpleValueProto::set_has_string_value() {
  _impl_._oneof_case_[0] = kStringValue;
}
inline void SimpleValueProto::clear_string_value() {
  if (_internal_has_string_value()) {
    _impl_.value_.string_value_.Destroy();
    clear_has_value();
  }
}
inline const std::string& SimpleValueProto::string_value() const {
  // @@protoc_insertion_point(field_get:zetasql.SimpleValueProto.string_value)
  return _internal_string_value();
}
template <typename ArgT0, typename... ArgT>
inline void SimpleValueProto::set_string_value(ArgT0&& arg0, ArgT... args) {
  if (!_internal_has_string_value()) {
    clear_value();
    set_has_string_value();
    _impl_.value_.string_value_.InitDefault();
  }
  _impl_.value_.string_value_.Set( static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:zetasql.SimpleValueProto.string_value)
}
inline std::string* SimpleValueProto::mutable_string_value() {
  std::string* _s = _internal_mutable_string_value();
  // @@protoc_insertion_point(field_mutable:zetasql.SimpleValueProto.string_value)
  return _s;
}
inline const std::string& SimpleValueProto::_internal_string_value() const {
  if (_internal_has_string_value()) {
    return _impl_.value_.string_value_.Get();
  }
  return ::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited();
}
inline void SimpleValueProto::_internal_set_string_value(const std::string& value) {
  if (!_internal_has_string_value()) {
    clear_value();
    set_has_string_value();
    _impl_.value_.string_value_.InitDefault();
  }
  _impl_.value_.string_value_.Set(value, GetArenaForAllocation());
}
inline std::string* SimpleValueProto::_internal_mutable_string_value() {
  if (!_internal_has_string_value()) {
    clear_value();
    set_has_string_value();
    _impl_.value_.string_value_.InitDefault();
  }
  return _impl_.value_.string_value_.Mutable(      GetArenaForAllocation());
}
inline std::string* SimpleValueProto::release_string_value() {
  // @@protoc_insertion_point(field_release:zetasql.SimpleValueProto.string_value)
  if (_internal_has_string_value()) {
    clear_has_value();
    return _impl_.value_.string_value_.Release();
  } else {
    return nullptr;
  }
}
inline void SimpleValueProto::set_allocated_string_value(std::string* string_value) {
  if (has_value()) {
    clear_value();
  }
  if (string_value != nullptr) {
    set_has_string_value();
    _impl_.value_.string_value_.InitAllocated(string_value, GetArenaForAllocation());
  }
  // @@protoc_insertion_point(field_set_allocated:zetasql.SimpleValueProto.string_value)
}

// bool bool_value = 3;
inline bool SimpleValueProto::_internal_has_bool_value() const {
  return value_case() == kBoolValue;
}
inline bool SimpleValueProto::has_bool_value() const {
  return _internal_has_bool_value();
}
inline void SimpleValueProto::set_has_bool_value() {
  _impl_._oneof_case_[0] = kBoolValue;
}
inline void SimpleValueProto::clear_bool_value() {
  if (_internal_has_bool_value()) {
    _impl_.value_.bool_value_ = false;
    clear_has_value();
  }
}
inline bool SimpleValueProto::_internal_bool_value() const {
  if (_internal_has_bool_value()) {
    return _impl_.value_.bool_value_;
  }
  return false;
}
inline void SimpleValueProto::_internal_set_bool_value(bool value) {
  if (!_internal_has_bool_value()) {
    clear_value();
    set_has_bool_value();
  }
  _impl_.value_.bool_value_ = value;
}
inline bool SimpleValueProto::bool_value() const {
  // @@protoc_insertion_point(field_get:zetasql.SimpleValueProto.bool_value)
  return _internal_bool_value();
}
inline void SimpleValueProto::set_bool_value(bool value) {
  _internal_set_bool_value(value);
  // @@protoc_insertion_point(field_set:zetasql.SimpleValueProto.bool_value)
}

// double double_value = 4;
inline bool SimpleValueProto::_internal_has_double_value() const {
  return value_case() == kDoubleValue;
}
inline bool SimpleValueProto::has_double_value() const {
  return _internal_has_double_value();
}
inline void SimpleValueProto::set_has_double_value() {
  _impl_._oneof_case_[0] = kDoubleValue;
}
inline void SimpleValueProto::clear_double_value() {
  if (_internal_has_double_value()) {
    _impl_.value_.double_value_ = 0;
    clear_has_value();
  }
}
inline double SimpleValueProto::_internal_double_value() const {
  if (_internal_has_double_value()) {
    return _impl_.value_.double_value_;
  }
  return 0;
}
inline void SimpleValueProto::_internal_set_double_value(double value) {
  if (!_internal_has_double_value()) {
    clear_value();
    set_has_double_value();
  }
  _impl_.value_.double_value_ = value;
}
inline double SimpleValueProto::double_value() const {
  // @@protoc_insertion_point(field_get:zetasql.SimpleValueProto.double_value)
  return _internal_double_value();
}
inline void SimpleValueProto::set_double_value(double value) {
  _internal_set_double_value(value);
  // @@protoc_insertion_point(field_set:zetasql.SimpleValueProto.double_value)
}

// bytes bytes_value = 5;
inline bool SimpleValueProto::_internal_has_bytes_value() const {
  return value_case() == kBytesValue;
}
inline bool SimpleValueProto::has_bytes_value() const {
  return _internal_has_bytes_value();
}
inline void SimpleValueProto::set_has_bytes_value() {
  _impl_._oneof_case_[0] = kBytesValue;
}
inline void SimpleValueProto::clear_bytes_value() {
  if (_internal_has_bytes_value()) {
    _impl_.value_.bytes_value_.Destroy();
    clear_has_value();
  }
}
inline const std::string& SimpleValueProto::bytes_value() const {
  // @@protoc_insertion_point(field_get:zetasql.SimpleValueProto.bytes_value)
  return _internal_bytes_value();
}
template <typename ArgT0, typename... ArgT>
inline void SimpleValueProto::set_bytes_value(ArgT0&& arg0, ArgT... args) {
  if (!_internal_has_bytes_value()) {
    clear_value();
    set_has_bytes_value();
    _impl_.value_.bytes_value_.InitDefault();
  }
  _impl_.value_.bytes_value_.SetBytes( static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:zetasql.SimpleValueProto.bytes_value)
}
inline std::string* SimpleValueProto::mutable_bytes_value() {
  std::string* _s = _internal_mutable_bytes_value();
  // @@protoc_insertion_point(field_mutable:zetasql.SimpleValueProto.bytes_value)
  return _s;
}
inline const std::string& SimpleValueProto::_internal_bytes_value() const {
  if (_internal_has_bytes_value()) {
    return _impl_.value_.bytes_value_.Get();
  }
  return ::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited();
}
inline void SimpleValueProto::_internal_set_bytes_value(const std::string& value) {
  if (!_internal_has_bytes_value()) {
    clear_value();
    set_has_bytes_value();
    _impl_.value_.bytes_value_.InitDefault();
  }
  _impl_.value_.bytes_value_.Set(value, GetArenaForAllocation());
}
inline std::string* SimpleValueProto::_internal_mutable_bytes_value() {
  if (!_internal_has_bytes_value()) {
    clear_value();
    set_has_bytes_value();
    _impl_.value_.bytes_value_.InitDefault();
  }
  return _impl_.value_.bytes_value_.Mutable(      GetArenaForAllocation());
}
inline std::string* SimpleValueProto::release_bytes_value() {
  // @@protoc_insertion_point(field_release:zetasql.SimpleValueProto.bytes_value)
  if (_internal_has_bytes_value()) {
    clear_has_value();
    return _impl_.value_.bytes_value_.Release();
  } else {
    return nullptr;
  }
}
inline void SimpleValueProto::set_allocated_bytes_value(std::string* bytes_value) {
  if (has_value()) {
    clear_value();
  }
  if (bytes_value != nullptr) {
    set_has_bytes_value();
    _impl_.value_.bytes_value_.InitAllocated(bytes_value, GetArenaForAllocation());
  }
  // @@protoc_insertion_point(field_set_allocated:zetasql.SimpleValueProto.bytes_value)
}

// bool __SimpleValueProto__switch_must_have_a_default = 255;
inline bool SimpleValueProto::_internal_has___simplevalueproto__switch_must_have_a_default() const {
  return value_case() == kSimpleValueProtoSwitchMustHaveADefault;
}
inline bool SimpleValueProto::has___simplevalueproto__switch_must_have_a_default() const {
  return _internal_has___simplevalueproto__switch_must_have_a_default();
}
inline void SimpleValueProto::set_has___simplevalueproto__switch_must_have_a_default() {
  _impl_._oneof_case_[0] = kSimpleValueProtoSwitchMustHaveADefault;
}
inline void SimpleValueProto::clear___simplevalueproto__switch_must_have_a_default() {
  if (_internal_has___simplevalueproto__switch_must_have_a_default()) {
    _impl_.value_.__simplevalueproto__switch_must_have_a_default_ = false;
    clear_has_value();
  }
}
inline bool SimpleValueProto::_internal___simplevalueproto__switch_must_have_a_default() const {
  if (_internal_has___simplevalueproto__switch_must_have_a_default()) {
    return _impl_.value_.__simplevalueproto__switch_must_have_a_default_;
  }
  return false;
}
inline void SimpleValueProto::_internal_set___simplevalueproto__switch_must_have_a_default(bool value) {
  if (!_internal_has___simplevalueproto__switch_must_have_a_default()) {
    clear_value();
    set_has___simplevalueproto__switch_must_have_a_default();
  }
  _impl_.value_.__simplevalueproto__switch_must_have_a_default_ = value;
}
inline bool SimpleValueProto::__simplevalueproto__switch_must_have_a_default() const {
  // @@protoc_insertion_point(field_get:zetasql.SimpleValueProto.__SimpleValueProto__switch_must_have_a_default)
  return _internal___simplevalueproto__switch_must_have_a_default();
}
inline void SimpleValueProto::set___simplevalueproto__switch_must_have_a_default(bool value) {
  _internal_set___simplevalueproto__switch_must_have_a_default(value);
  // @@protoc_insertion_point(field_set:zetasql.SimpleValueProto.__SimpleValueProto__switch_must_have_a_default)
}

inline bool SimpleValueProto::has_value() const {
  return value_case() != VALUE_NOT_SET;
}
inline void SimpleValueProto::clear_has_value() {
  _impl_._oneof_case_[0] = VALUE_NOT_SET;
}
inline SimpleValueProto::ValueCase SimpleValueProto::value_case() const {
  return SimpleValueProto::ValueCase(_impl_._oneof_case_[0]);
}
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace zetasql

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_zetasql_2fpublic_2fsimple_5fvalue_2eproto
