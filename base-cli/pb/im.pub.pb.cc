// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: im.pub.proto

#include "im.pub.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace im {
class SYSAssocSvrRegistDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<SYSAssocSvrRegist>
      _instance;
} _SYSAssocSvrRegist_default_instance_;
class SYSAssocSvrRegistAckDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<SYSAssocSvrRegistAck>
      _instance;
} _SYSAssocSvrRegistAck_default_instance_;
class SystemPingDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<SystemPing>
      _instance;
} _SystemPing_default_instance_;
}  // namespace im
namespace protobuf_im_2epub_2eproto {
static void InitDefaultsSYSAssocSvrRegist() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::im::_SYSAssocSvrRegist_default_instance_;
    new (ptr) ::im::SYSAssocSvrRegist();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::im::SYSAssocSvrRegist::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_SYSAssocSvrRegist =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsSYSAssocSvrRegist}, {}};

static void InitDefaultsSYSAssocSvrRegistAck() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::im::_SYSAssocSvrRegistAck_default_instance_;
    new (ptr) ::im::SYSAssocSvrRegistAck();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::im::SYSAssocSvrRegistAck::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_SYSAssocSvrRegistAck =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsSYSAssocSvrRegistAck}, {}};

static void InitDefaultsSystemPing() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::im::_SystemPing_default_instance_;
    new (ptr) ::im::SystemPing();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::im::SystemPing::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_SystemPing =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsSystemPing}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_SYSAssocSvrRegist.base);
  ::google::protobuf::internal::InitSCC(&scc_info_SYSAssocSvrRegistAck.base);
  ::google::protobuf::internal::InitSCC(&scc_info_SystemPing.base);
}

}  // namespace protobuf_im_2epub_2eproto
namespace im {
bool CmdId_IsValid(int value) {
  switch (value) {
    case 0:
    case 12289:
    case 12290:
    case 12292:
    case 12293:
    case 12294:
    case 12295:
    case 12296:
    case 40961:
    case 40962:
    case 40963:
    case 40964:
    case 40965:
    case 40966:
    case 40967:
    case 40968:
    case 40976:
    case 40977:
    case 40978:
    case 40979:
    case 40980:
    case 40981:
    case 40983:
    case 40984:
    case 40985:
    case 40992:
    case 40993:
    case 40994:
    case 40995:
    case 40996:
    case 45057:
    case 45058:
    case 45059:
    case 45060:
    case 45061:
    case 45062:
    case 45063:
    case 45064:
    case 45065:
    case 45066:
    case 45073:
    case 45074:
    case 45075:
    case 45076:
    case 45077:
    case 45078:
    case 45079:
    case 45080:
    case 45081:
    case 45082:
    case 45105:
    case 45106:
    case 45107:
    case 45108:
    case 45109:
    case 45110:
    case 45111:
    case 45112:
    case 45113:
    case 45114:
    case 45121:
    case 45122:
    case 45123:
    case 45124:
    case 45137:
    case 45138:
    case 45139:
    case 45140:
    case 45145:
    case 45152:
    case 45153:
    case 45154:
    case 45155:
    case 45156:
    case 45157:
    case 45158:
    case 45159:
    case 45160:
    case 45169:
    case 45170:
    case 45171:
    case 45172:
    case 45173:
    case 45174:
    case 45175:
    case 45176:
    case 45185:
    case 45186:
    case 45201:
    case 45202:
    case 45203:
    case 45204:
    case 45205:
    case 45206:
    case 45207:
    case 45208:
    case 45209:
    case 45216:
    case 45217:
    case 45218:
    case 45221:
    case 45222:
    case 45223:
    case 45224:
    case 45233:
    case 45234:
    case 45235:
    case 45236:
    case 45249:
    case 45250:
    case 45251:
    case 45252:
    case 49153:
    case 49154:
    case 49155:
    case 49156:
    case 49159:
    case 49160:
    case 49161:
    case 49168:
    case 49171:
    case 49172:
    case 49173:
    case 49174:
    case 49175:
    case 49176:
    case 49185:
    case 49186:
    case 49187:
    case 49188:
    case 53249:
    case 53250:
    case 53252:
    case 53253:
    case 53255:
    case 53256:
    case 53258:
    case 53259:
      return true;
    default:
      return false;
  }
}

bool ErrCode_IsValid(int value) {
  switch (value) {
    case 0:
    case 32768:
    case 32769:
    case 33025:
    case 33026:
    case 33027:
    case 33028:
    case 33029:
    case 33030:
    case 33031:
    case 33032:
    case 33033:
    case 33040:
    case 33281:
    case 33282:
    case 33283:
    case 33284:
    case 33297:
    case 33298:
    case 33299:
    case 33300:
    case 33301:
    case 33302:
    case 33315:
    case 33536:
    case 33537:
    case 33538:
    case 33539:
    case 33540:
    case 33541:
    case 33542:
    case 33543:
    case 33544:
    case 33545:
    case 33552:
    case 33553:
    case 33554:
    case 33555:
    case 33556:
    case 33557:
    case 33558:
    case 33568:
    case 33569:
    case 33570:
    case 33792:
    case 33793:
    case 33794:
      return true;
    default:
      return false;
  }
}

bool MsgType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 16:
    case 17:
      return true;
    default:
      return false;
  }
}

bool DiveceType_IsValid(int value) {
  switch (value) {
    case 0:
    case 16:
    case 17:
    case 18:
    case 19:
    case 255:
      return true;
    default:
      return false;
  }
}

bool NotifyType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    default:
      return false;
  }
}

bool CommonNotifyType_IsValid(int value) {
  switch (value) {
    case 0:
      return true;
    default:
      return false;
  }
}

bool CMLoginNotifyType_IsValid(int value) {
  switch (value) {
    case 0:
      return true;
    default:
      return false;
  }
}

bool LoginCMNotifyType_IsValid(int value) {
  switch (value) {
    case 0:
      return true;
    default:
      return false;
  }
}

bool PHPLoginNotifyType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}


// ===================================================================

void SYSAssocSvrRegist::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SYSAssocSvrRegist::kIpFieldNumber;
const int SYSAssocSvrRegist::kPortFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SYSAssocSvrRegist::SYSAssocSvrRegist()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_im_2epub_2eproto::scc_info_SYSAssocSvrRegist.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:im.SYSAssocSvrRegist)
}
SYSAssocSvrRegist::SYSAssocSvrRegist(const SYSAssocSvrRegist& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ip_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.ip().size() > 0) {
    ip_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.ip_);
  }
  port_ = from.port_;
  // @@protoc_insertion_point(copy_constructor:im.SYSAssocSvrRegist)
}

void SYSAssocSvrRegist::SharedCtor() {
  ip_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  port_ = 0u;
}

SYSAssocSvrRegist::~SYSAssocSvrRegist() {
  // @@protoc_insertion_point(destructor:im.SYSAssocSvrRegist)
  SharedDtor();
}

void SYSAssocSvrRegist::SharedDtor() {
  ip_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void SYSAssocSvrRegist::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const SYSAssocSvrRegist& SYSAssocSvrRegist::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_im_2epub_2eproto::scc_info_SYSAssocSvrRegist.base);
  return *internal_default_instance();
}


void SYSAssocSvrRegist::Clear() {
// @@protoc_insertion_point(message_clear_start:im.SYSAssocSvrRegist)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ip_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  port_ = 0u;
  _internal_metadata_.Clear();
}

bool SYSAssocSvrRegist::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:im.SYSAssocSvrRegist)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string ip = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_ip()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->ip().data(), static_cast<int>(this->ip().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "im.SYSAssocSvrRegist.ip"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 port = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &port_)));
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:im.SYSAssocSvrRegist)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:im.SYSAssocSvrRegist)
  return false;
#undef DO_
}

void SYSAssocSvrRegist::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:im.SYSAssocSvrRegist)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string ip = 1;
  if (this->ip().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->ip().data(), static_cast<int>(this->ip().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "im.SYSAssocSvrRegist.ip");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->ip(), output);
  }

  // uint32 port = 2;
  if (this->port() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->port(), output);
  }

  output->WriteRaw((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).data(),
                   static_cast<int>((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size()));
  // @@protoc_insertion_point(serialize_end:im.SYSAssocSvrRegist)
}

size_t SYSAssocSvrRegist::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:im.SYSAssocSvrRegist)
  size_t total_size = 0;

  total_size += (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size();

  // string ip = 1;
  if (this->ip().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->ip());
  }

  // uint32 port = 2;
  if (this->port() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->port());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SYSAssocSvrRegist::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const SYSAssocSvrRegist*>(&from));
}

void SYSAssocSvrRegist::MergeFrom(const SYSAssocSvrRegist& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:im.SYSAssocSvrRegist)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.ip().size() > 0) {

    ip_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.ip_);
  }
  if (from.port() != 0) {
    set_port(from.port());
  }
}

void SYSAssocSvrRegist::CopyFrom(const SYSAssocSvrRegist& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:im.SYSAssocSvrRegist)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SYSAssocSvrRegist::IsInitialized() const {
  return true;
}

void SYSAssocSvrRegist::Swap(SYSAssocSvrRegist* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SYSAssocSvrRegist::InternalSwap(SYSAssocSvrRegist* other) {
  using std::swap;
  ip_.Swap(&other->ip_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(port_, other->port_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::std::string SYSAssocSvrRegist::GetTypeName() const {
  return "im.SYSAssocSvrRegist";
}


// ===================================================================

void SYSAssocSvrRegistAck::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SYSAssocSvrRegistAck::kNErrFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SYSAssocSvrRegistAck::SYSAssocSvrRegistAck()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_im_2epub_2eproto::scc_info_SYSAssocSvrRegistAck.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:im.SYSAssocSvrRegistAck)
}
SYSAssocSvrRegistAck::SYSAssocSvrRegistAck(const SYSAssocSvrRegistAck& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  nerr_ = from.nerr_;
  // @@protoc_insertion_point(copy_constructor:im.SYSAssocSvrRegistAck)
}

void SYSAssocSvrRegistAck::SharedCtor() {
  nerr_ = 0;
}

SYSAssocSvrRegistAck::~SYSAssocSvrRegistAck() {
  // @@protoc_insertion_point(destructor:im.SYSAssocSvrRegistAck)
  SharedDtor();
}

void SYSAssocSvrRegistAck::SharedDtor() {
}

void SYSAssocSvrRegistAck::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const SYSAssocSvrRegistAck& SYSAssocSvrRegistAck::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_im_2epub_2eproto::scc_info_SYSAssocSvrRegistAck.base);
  return *internal_default_instance();
}


void SYSAssocSvrRegistAck::Clear() {
// @@protoc_insertion_point(message_clear_start:im.SYSAssocSvrRegistAck)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  nerr_ = 0;
  _internal_metadata_.Clear();
}

bool SYSAssocSvrRegistAck::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:im.SYSAssocSvrRegistAck)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .im.ErrCode nErr = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_nerr(static_cast< ::im::ErrCode >(value));
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:im.SYSAssocSvrRegistAck)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:im.SYSAssocSvrRegistAck)
  return false;
#undef DO_
}

void SYSAssocSvrRegistAck::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:im.SYSAssocSvrRegistAck)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .im.ErrCode nErr = 1;
  if (this->nerr() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->nerr(), output);
  }

  output->WriteRaw((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).data(),
                   static_cast<int>((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size()));
  // @@protoc_insertion_point(serialize_end:im.SYSAssocSvrRegistAck)
}

size_t SYSAssocSvrRegistAck::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:im.SYSAssocSvrRegistAck)
  size_t total_size = 0;

  total_size += (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size();

  // .im.ErrCode nErr = 1;
  if (this->nerr() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->nerr());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SYSAssocSvrRegistAck::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const SYSAssocSvrRegistAck*>(&from));
}

void SYSAssocSvrRegistAck::MergeFrom(const SYSAssocSvrRegistAck& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:im.SYSAssocSvrRegistAck)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.nerr() != 0) {
    set_nerr(from.nerr());
  }
}

void SYSAssocSvrRegistAck::CopyFrom(const SYSAssocSvrRegistAck& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:im.SYSAssocSvrRegistAck)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SYSAssocSvrRegistAck::IsInitialized() const {
  return true;
}

void SYSAssocSvrRegistAck::Swap(SYSAssocSvrRegistAck* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SYSAssocSvrRegistAck::InternalSwap(SYSAssocSvrRegistAck* other) {
  using std::swap;
  swap(nerr_, other->nerr_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::std::string SYSAssocSvrRegistAck::GetTypeName() const {
  return "im.SYSAssocSvrRegistAck";
}


// ===================================================================

void SystemPing::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SystemPing::kMsgIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SystemPing::SystemPing()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_im_2epub_2eproto::scc_info_SystemPing.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:im.SystemPing)
}
SystemPing::SystemPing(const SystemPing& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  msgid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.msgid().size() > 0) {
    msgid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.msgid_);
  }
  // @@protoc_insertion_point(copy_constructor:im.SystemPing)
}

void SystemPing::SharedCtor() {
  msgid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

SystemPing::~SystemPing() {
  // @@protoc_insertion_point(destructor:im.SystemPing)
  SharedDtor();
}

void SystemPing::SharedDtor() {
  msgid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void SystemPing::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const SystemPing& SystemPing::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_im_2epub_2eproto::scc_info_SystemPing.base);
  return *internal_default_instance();
}


void SystemPing::Clear() {
// @@protoc_insertion_point(message_clear_start:im.SystemPing)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  msgid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool SystemPing::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:im.SystemPing)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string msgId = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_msgid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->msgid().data(), static_cast<int>(this->msgid().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "im.SystemPing.msgId"));
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:im.SystemPing)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:im.SystemPing)
  return false;
#undef DO_
}

void SystemPing::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:im.SystemPing)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string msgId = 1;
  if (this->msgid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->msgid().data(), static_cast<int>(this->msgid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "im.SystemPing.msgId");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->msgid(), output);
  }

  output->WriteRaw((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).data(),
                   static_cast<int>((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size()));
  // @@protoc_insertion_point(serialize_end:im.SystemPing)
}

size_t SystemPing::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:im.SystemPing)
  size_t total_size = 0;

  total_size += (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size();

  // string msgId = 1;
  if (this->msgid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->msgid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SystemPing::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const SystemPing*>(&from));
}

void SystemPing::MergeFrom(const SystemPing& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:im.SystemPing)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.msgid().size() > 0) {

    msgid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.msgid_);
  }
}

void SystemPing::CopyFrom(const SystemPing& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:im.SystemPing)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SystemPing::IsInitialized() const {
  return true;
}

void SystemPing::Swap(SystemPing* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SystemPing::InternalSwap(SystemPing* other) {
  using std::swap;
  msgid_.Swap(&other->msgid_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::std::string SystemPing::GetTypeName() const {
  return "im.SystemPing";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace im
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::im::SYSAssocSvrRegist* Arena::CreateMaybeMessage< ::im::SYSAssocSvrRegist >(Arena* arena) {
  return Arena::CreateInternal< ::im::SYSAssocSvrRegist >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::im::SYSAssocSvrRegistAck* Arena::CreateMaybeMessage< ::im::SYSAssocSvrRegistAck >(Arena* arena) {
  return Arena::CreateInternal< ::im::SYSAssocSvrRegistAck >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::im::SystemPing* Arena::CreateMaybeMessage< ::im::SystemPing >(Arena* arena) {
  return Arena::CreateInternal< ::im::SystemPing >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
