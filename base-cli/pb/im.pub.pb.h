// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: im.pub.proto

#ifndef PROTOBUF_INCLUDED_im_2epub_2eproto
#define PROTOBUF_INCLUDED_im_2epub_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_util.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_im_2epub_2eproto 

namespace protobuf_im_2epub_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[3];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
}  // namespace protobuf_im_2epub_2eproto
namespace im {
class SYSAssocSvrRegist;
class SYSAssocSvrRegistDefaultTypeInternal;
extern SYSAssocSvrRegistDefaultTypeInternal _SYSAssocSvrRegist_default_instance_;
class SYSAssocSvrRegistAck;
class SYSAssocSvrRegistAckDefaultTypeInternal;
extern SYSAssocSvrRegistAckDefaultTypeInternal _SYSAssocSvrRegistAck_default_instance_;
class SystemPing;
class SystemPingDefaultTypeInternal;
extern SystemPingDefaultTypeInternal _SystemPing_default_instance_;
}  // namespace im
namespace google {
namespace protobuf {
template<> ::im::SYSAssocSvrRegist* Arena::CreateMaybeMessage<::im::SYSAssocSvrRegist>(Arena*);
template<> ::im::SYSAssocSvrRegistAck* Arena::CreateMaybeMessage<::im::SYSAssocSvrRegistAck>(Arena*);
template<> ::im::SystemPing* Arena::CreateMaybeMessage<::im::SystemPing>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace im {

enum CmdId {
  EXCEPT_CMDID = 0,
  SYSTEM_HEARTBEAT = 12289,
  SYSTEM_HEARTBEAT_ACK = 12290,
  SYSTEM_TIMEOUT_NOTIFICATION = 12292,
  SYSTEM_ASSOCSVR_REGIST = 12293,
  SYSTEM_ASSOCSVR_REGIST_ACK = 12294,
  SYSTEM_PING = 12295,
  SYSTEM_PING_ACK = 12296,
  CM_LOGIN = 40961,
  CM_LOGIN_ACK = 40962,
  CM_LOGOUT = 40963,
  CM_LOGOUT_ACK = 40964,
  CM_DEVICETOKENSYNC = 40965,
  CM_DEVICETOKENSYNC_ACK = 40966,
  CM_LOGOUT_CONFIRM = 40967,
  CM_LOGOUT_CONFIRM_ACK = 40968,
  CM_KICKOUT_NOTIFICATION = 40976,
  CM_LOGIN_NOTIFY = 40977,
  CM_LOGIN_NOTIFY_ACK = 40978,
  LOGIN_CM_NOTIFY = 40979,
  LOGIN_CM_NOTIFY_ACK = 40980,
  CM_LOGIN_TRANS = 40981,
  CM_PHP_LOGIN_NOTIFY = 40983,
  CM_PHP_LOGIN_NOTIFY_ACK = 40984,
  SVR_GROUP_RELATIN_NOTIFY = 40985,
  SVR_GROUP_RELATIN_NOTIFY_ACK = 40992,
  SVR_FRIEND_RELATION_NOTIFY = 40993,
  SVR_FRIEND_RELATION_NOTIFY_ACK = 40994,
  SVR_COMMON_MSG_NOTIFY = 40995,
  SVR_COMMON_MSG_NOTIFY_ACK = 40996,
  MES_CHAT = 45057,
  MES_CHAT_ACK = 45058,
  MES_CHAT_DELIVER_ACK = 45059,
  MES_CHAT_DELIVER = 45060,
  MES_CHAT_DELIVERED_NOTIFICATION_ACK = 45061,
  MES_CHAT_DELIVERED_NOTIFICATION = 45062,
  MES_CHAT_READ = 45063,
  MES_CHAT_READ_ACK = 45064,
  MES_CHAT_READ_DELIVER_ACK = 45065,
  MES_CHAT_READ_DELIVER = 45066,
  MES_OFFLINESUMMARY = 45073,
  MES_OFFLINESUMMARY_ACK = 45074,
  MES_OFFLINETOTAL = 45075,
  MES_OFFLINETOTAL_ACK = 45076,
  MES_OFFLINEMSG = 45077,
  MES_OFFLINEMSG_ACK = 45078,
  MES_OFFLINEMSG_DELIVERED = 45079,
  MES_OFFLINEMSG_DELIVERED_ACK = 45080,
  MES_OFFLINEMSG_DELIVERED_NOTIFICATION_ACK = 45081,
  MES_OFFLINEMSG_DELIVERED_NOTIFICATION = 45082,
  MES_ADDFRIEND = 45105,
  MES_ADDFRIEND_ACK = 45106,
  MES_ADDFRIEND_DELIVER_ACK = 45107,
  MES_ADDFRIEND_DELIVER = 45108,
  MES_ADDFRIEND_ANS = 45109,
  MES_ADDFRIEND_ANS_ACK = 45110,
  MES_ADDFRIEND_ANS_DELIVER_ACK = 45111,
  MES_ADDFRIEND_ANS_DELIVER = 45112,
  MES_DELFRIEND = 45113,
  MES_DELFRIEND_ACK = 45114,
  MES_INCBLACKLIST = 45121,
  MES_INCBLACKLIST_ACK = 45122,
  MES_DECBLACKLIST = 45123,
  MES_DECBLACKLIST_ACK = 45124,
  MES_JOINGRP = 45137,
  MES_JOINGRP_ACK = 45138,
  MES_JOINGRP_DELIVER_ACK = 45139,
  MES_JOINGRP_DELIVER = 45140,
  MES_EXCHANGE_KEY = 45145,
  MES_EXCHANGE_KEY_ACK = 45152,
  MES_EXCHANGE_KEY_DELIVER_ACK = 45153,
  MES_EXCHANGE_KEY_DELIVER = 45154,
  MES_EXCHANGE_KEY_DELIVERD_NOTIFY_ACK = 45155,
  MES_EXCHANGE_KEY_DELIVERD_NOTIFY = 45156,
  MES_GRPINTERNOTIFY = 45157,
  MES_GRPINTERNOTIFY_ACK = 45158,
  MES_GRPNOTIFY_DELIVER_ACK = 45159,
  MES_GRPNOTIFY_DELIVER = 45160,
  MES_GRPINTERCHAT = 45169,
  MES_GRPINTERCHAT_ACK = 45170,
  MES_GRPCHAT_DELIVER_ACK = 45171,
  MES_GRPCHAT_DELIVER = 45172,
  MES_GRPINTER_CHATCANCLE = 45173,
  MES_GRPINTER_CHATCANCLE_ACK = 45174,
  MES_CHATCANCEL = 45175,
  MES_CHATCANCEL_ACK = 45176,
  MES_CHATCANCEL_DELIVER = 45186,
  MES_CHATCANCEL_DELIVER_ACK = 45185,
  SIG_SPONSORP2PCALL = 45201,
  SIG_SPONSORP2PCALL_ACK = 45202,
  SIG_SPONSORP2PCALL_DELIVER_ACK = 45203,
  SIG_SPONSORP2PCALL_DELIVER = 45204,
  SIG_SPONSORP2PCALL_ANS = 45205,
  SIG_SPONSORP2PCALL_ANS_ACK = 45206,
  SIG_SPONSORP2PCALL_ANS_DELIVER_ACK = 45207,
  SIG_SPONSORP2PCALL_ANS_DELIVER = 45208,
  SIG_P2PCALL_EXCHANGE_NATINFO = 45209,
  SIG_P2PCALL_EXCHANGE_NATINFO_ACK = 45216,
  SIG_P2PCALL_EXCHANGE_NATINFO_DELIVER_ACK = 45217,
  SIG_P2PCALL_EXCHANGE_NATINFO_DELIVER = 45218,
  SIG_P2PCALLHANGUP = 45221,
  SIG_P2PCALLHANGUP_ACK = 45222,
  SIG_P2PCALLHANGUPDElIVER_ACK = 45223,
  SIG_P2PCALLHANGUPDElIVER = 45224,
  SIG_P2PCALLSTATENOTIFY = 45233,
  SIG_P2PCALLSTATENOTIFY_ACK = 45234,
  SIG_P2PCALLSTATENOTIFYDElIVER_ACK = 45235,
  SIG_P2PCALLSTATENOTIFYDElIVER = 45236,
  MS_COMMONNOTIFY = 45249,
  MS_COMMONNOTIFY_ACK = 45250,
  MS_COMMONNOTIFY_DELIVER_ACK = 45251,
  MS_COMMONNOTIFY_DELIVER = 45252,
  GROUP_CHAT = 49153,
  GROUP_CHAT_ACK = 49154,
  GROUP_CREATE = 49155,
  GROUP_CREATE_ACK = 49156,
  GROUP_APPLY = 49159,
  GROUP_APPLY_ACK = 49160,
  GROUP_INVITE = 49161,
  GROUP_INVITE_ACK = 49168,
  GROUP_KICKOUT = 49171,
  GROUP_KICKOUT_ACK = 49172,
  GROUP_QUIT = 49173,
  GROUP_QUIT_ACK = 49174,
  GROUP_MODIFY = 49175,
  GROUP_MODIFY_ACK = 49176,
  GROUP_PERMIT = 49185,
  GROUP_PERMIT_ACK = 49186,
  GROUP_CHATCANCEL = 49187,
  GROUP_CHATCANCEL_ACK = 49188,
  APNS_PUSH = 53249,
  APNS_PUSH_ACK = 53250,
  APNS_NOTIFY = 53252,
  APNS_NOTIFY_ACK = 53253,
  ANDROID_PUSH = 53255,
  ANDROID_PUSH_ACK = 53256,
  ANDROID_NOTIFY = 53258,
  ANDROID_NOTIFY_ACK = 53259,
  CmdId_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  CmdId_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool CmdId_IsValid(int value);
const CmdId CmdId_MIN = EXCEPT_CMDID;
const CmdId CmdId_MAX = ANDROID_NOTIFY_ACK;
const int CmdId_ARRAYSIZE = CmdId_MAX + 1;

enum ErrCode {
  EXCEPT_ERR = 0,
  NON_ERR = 32768,
  ERR_SYS_REGIST = 32769,
  ERR_LOGIN_AUTH = 33025,
  ERR_LOGIN_FORBIDDEN = 33026,
  ERR_LOGOUT = 33027,
  ERR_DEVICESYNC_PARAMETER = 33028,
  ERR_DEVICESYNC_FORBIDDEN = 33029,
  ERR_DEVICESYNC_EXCEPTION = 33030,
  ERR_TRANSMISSION_FORBIDDEN = 33031,
  ERR_TRANSMISSION_SESSION = 33032,
  ERR_CM_EXCEPTION = 33033,
  ERR_CM_AUTH_KICKEDOUT = 33040,
  ERR_CHAT_FORBIDDEN = 33281,
  ERR_CHAT_UNHEALTHY = 33282,
  ERR_CHAT_PARAMETER = 33283,
  ERR_CHAT_CANCEL_OUTTIME = 33284,
  ERR_CHAT_FRIEND_REFUSE = 33297,
  ERR_CHAT_FRIEND_BLOCK = 33298,
  ERR_CHAT_FRIEND_DEL = 33299,
  ERR_CHAT_FRIEND_ADDED = 33300,
  ERR_CHAT_FRIEND_ADDING = 33301,
  ERR_CHAT_FRIEND_HIDENADDED = 33302,
  ERR_CHAT_DEENCRY_FAILED = 33315,
  INFO_GROUP_PENDING = 33536,
  ERR_GROUP_PARAMETER = 33537,
  ERR_GROUP_OVERCREATION = 33538,
  ERR_GROUP_OVERJOIN = 33539,
  ERR_GROUP_NETWORKEXCEPTION = 33540,
  ERR_GROUP_FORBIDDEN = 33541,
  ERR_GROUP_INTEREXCEPTION = 33542,
  ERR_GROUP_MEMBEREXIST = 33543,
  ERR_GROUP_MEMBERNONEXIST = 33544,
  ERR_GROUP_INTERPERMISSION = 33545,
  ERR_GROUP_NONPERMISSION = 33552,
  ERR_GROUP_MASTER = 33553,
  ERR_GROUP_NOTMASTER = 33554,
  ERR_GROUP_INVITEEXCEPTION = 33555,
  ERR_GROUP_INVITESUCCESS = 33556,
  ERR_GROUP_DISMISSED = 33557,
  ERR_GROUP_MEMBEREXIST_HIDE = 33558,
  ERR_GROUP_JOIN_REJECT = 33568,
  ERR_GROUP_NOTIFY_REJECT = 33569,
  ERR_GROUP_MASTER_QUIT = 33570,
  ERR_CALL_REFUSE = 33792,
  ERR_CALL_BUSY = 33793,
  ERR_CALL_PEER_OFFLINE = 33794,
  ErrCode_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  ErrCode_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool ErrCode_IsValid(int value);
const ErrCode ErrCode_MIN = EXCEPT_ERR;
const ErrCode ErrCode_MAX = ERR_CALL_PEER_OFFLINE;
const int ErrCode_ARRAYSIZE = ErrCode_MAX + 1;

enum MsgType {
  DEFAULT = 0,
  PERSONAL_TALK = 1,
  GROUP_TALK = 2,
  CONTACTS = 3,
  SYS_MSG = 4,
  ADVERTISMENT_MSG = 5,
  GRP_CONTACTS = 6,
  P2P_CALL = 16,
  REFERENCE_CALL = 17,
  MsgType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  MsgType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool MsgType_IsValid(int value);
const MsgType MsgType_MIN = DEFAULT;
const MsgType MsgType_MAX = REFERENCE_CALL;
const int MsgType_ARRAYSIZE = MsgType_MAX + 1;

enum DiveceType {
  UNKNOW = 0,
  HW_PUSH = 16,
  XM_PUSH = 17,
  GOOGLE_FCM = 18,
  JPUSH = 19,
  APNS = 255,
  DiveceType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  DiveceType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool DiveceType_IsValid(int value);
const DiveceType DiveceType_MIN = UNKNOW;
const DiveceType DiveceType_MAX = APNS;
const int DiveceType_ARRAYSIZE = DiveceType_MAX + 1;

enum NotifyType {
  NOTIFY_TYPE_UNKNOWN = 0,
  NOTIFY_TYPE_GRP_INFO_CHANGED = 1,
  NOTIFY_TYPE_GRPMEM_QUIT = 2,
  NOTIFY_TYPE_GRPMEM_REMOVE = 3,
  NOTIFY_TYPE_GRPAPPLY_RESULT = 4,
  NOTIFY_TYPE_GRPINVITE_RESULT = 5,
  NOTIFY_TYPE_GRPMASTER_CHANGED = 6,
  NOTIFY_TYPE_GRP_ACTIVE = 7,
  NotifyType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  NotifyType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool NotifyType_IsValid(int value);
const NotifyType NotifyType_MIN = NOTIFY_TYPE_UNKNOWN;
const NotifyType NotifyType_MAX = NOTIFY_TYPE_GRP_ACTIVE;
const int NotifyType_ARRAYSIZE = NotifyType_MAX + 1;

enum CommonNotifyType {
  Notify_ModifyUserInfo = 0,
  CommonNotifyType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  CommonNotifyType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool CommonNotifyType_IsValid(int value);
const CommonNotifyType CommonNotifyType_MIN = Notify_ModifyUserInfo;
const CommonNotifyType CommonNotifyType_MAX = Notify_ModifyUserInfo;
const int CommonNotifyType_ARRAYSIZE = CommonNotifyType_MAX + 1;

enum CMLoginNotifyType {
  CMLOGIN_CLOSELINK = 0,
  CMLoginNotifyType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  CMLoginNotifyType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool CMLoginNotifyType_IsValid(int value);
const CMLoginNotifyType CMLoginNotifyType_MIN = CMLOGIN_CLOSELINK;
const CMLoginNotifyType CMLoginNotifyType_MAX = CMLOGIN_CLOSELINK;
const int CMLoginNotifyType_ARRAYSIZE = CMLoginNotifyType_MAX + 1;

enum LoginCMNotifyType {
  LOGINCM_CLOSELINK = 0,
  LoginCMNotifyType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  LoginCMNotifyType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool LoginCMNotifyType_IsValid(int value);
const LoginCMNotifyType LoginCMNotifyType_MIN = LOGINCM_CLOSELINK;
const LoginCMNotifyType LoginCMNotifyType_MAX = LOGINCM_CLOSELINK;
const int LoginCMNotifyType_ARRAYSIZE = LoginCMNotifyType_MAX + 1;

enum PHPLoginNotifyType {
  PHP_NOTIFY_TYPE_UNKNOWN = 0,
  PHP_NOTIFY_TYPE_LOGIN = 1,
  PHP_NOTIFY_TYPE_LOGOUT = 2,
  PHPLoginNotifyType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  PHPLoginNotifyType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool PHPLoginNotifyType_IsValid(int value);
const PHPLoginNotifyType PHPLoginNotifyType_MIN = PHP_NOTIFY_TYPE_UNKNOWN;
const PHPLoginNotifyType PHPLoginNotifyType_MAX = PHP_NOTIFY_TYPE_LOGOUT;
const int PHPLoginNotifyType_ARRAYSIZE = PHPLoginNotifyType_MAX + 1;

// ===================================================================

class SYSAssocSvrRegist : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:im.SYSAssocSvrRegist) */ {
 public:
  SYSAssocSvrRegist();
  virtual ~SYSAssocSvrRegist();

  SYSAssocSvrRegist(const SYSAssocSvrRegist& from);

  inline SYSAssocSvrRegist& operator=(const SYSAssocSvrRegist& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SYSAssocSvrRegist(SYSAssocSvrRegist&& from) noexcept
    : SYSAssocSvrRegist() {
    *this = ::std::move(from);
  }

  inline SYSAssocSvrRegist& operator=(SYSAssocSvrRegist&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const SYSAssocSvrRegist& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SYSAssocSvrRegist* internal_default_instance() {
    return reinterpret_cast<const SYSAssocSvrRegist*>(
               &_SYSAssocSvrRegist_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(SYSAssocSvrRegist* other);
  friend void swap(SYSAssocSvrRegist& a, SYSAssocSvrRegist& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SYSAssocSvrRegist* New() const final {
    return CreateMaybeMessage<SYSAssocSvrRegist>(NULL);
  }

  SYSAssocSvrRegist* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<SYSAssocSvrRegist>(arena);
  }
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    final;
  void CopyFrom(const SYSAssocSvrRegist& from);
  void MergeFrom(const SYSAssocSvrRegist& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  void DiscardUnknownFields();
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(SYSAssocSvrRegist* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string ip = 1;
  void clear_ip();
  static const int kIpFieldNumber = 1;
  const ::std::string& ip() const;
  void set_ip(const ::std::string& value);
  #if LANG_CXX11
  void set_ip(::std::string&& value);
  #endif
  void set_ip(const char* value);
  void set_ip(const char* value, size_t size);
  ::std::string* mutable_ip();
  ::std::string* release_ip();
  void set_allocated_ip(::std::string* ip);

  // uint32 port = 2;
  void clear_port();
  static const int kPortFieldNumber = 2;
  ::google::protobuf::uint32 port() const;
  void set_port(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:im.SYSAssocSvrRegist)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr ip_;
  ::google::protobuf::uint32 port_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_im_2epub_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class SYSAssocSvrRegistAck : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:im.SYSAssocSvrRegistAck) */ {
 public:
  SYSAssocSvrRegistAck();
  virtual ~SYSAssocSvrRegistAck();

  SYSAssocSvrRegistAck(const SYSAssocSvrRegistAck& from);

  inline SYSAssocSvrRegistAck& operator=(const SYSAssocSvrRegistAck& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SYSAssocSvrRegistAck(SYSAssocSvrRegistAck&& from) noexcept
    : SYSAssocSvrRegistAck() {
    *this = ::std::move(from);
  }

  inline SYSAssocSvrRegistAck& operator=(SYSAssocSvrRegistAck&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const SYSAssocSvrRegistAck& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SYSAssocSvrRegistAck* internal_default_instance() {
    return reinterpret_cast<const SYSAssocSvrRegistAck*>(
               &_SYSAssocSvrRegistAck_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(SYSAssocSvrRegistAck* other);
  friend void swap(SYSAssocSvrRegistAck& a, SYSAssocSvrRegistAck& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SYSAssocSvrRegistAck* New() const final {
    return CreateMaybeMessage<SYSAssocSvrRegistAck>(NULL);
  }

  SYSAssocSvrRegistAck* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<SYSAssocSvrRegistAck>(arena);
  }
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    final;
  void CopyFrom(const SYSAssocSvrRegistAck& from);
  void MergeFrom(const SYSAssocSvrRegistAck& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  void DiscardUnknownFields();
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(SYSAssocSvrRegistAck* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .im.ErrCode nErr = 1;
  void clear_nerr();
  static const int kNErrFieldNumber = 1;
  ::im::ErrCode nerr() const;
  void set_nerr(::im::ErrCode value);

  // @@protoc_insertion_point(class_scope:im.SYSAssocSvrRegistAck)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  int nerr_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_im_2epub_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class SystemPing : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:im.SystemPing) */ {
 public:
  SystemPing();
  virtual ~SystemPing();

  SystemPing(const SystemPing& from);

  inline SystemPing& operator=(const SystemPing& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SystemPing(SystemPing&& from) noexcept
    : SystemPing() {
    *this = ::std::move(from);
  }

  inline SystemPing& operator=(SystemPing&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const SystemPing& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SystemPing* internal_default_instance() {
    return reinterpret_cast<const SystemPing*>(
               &_SystemPing_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(SystemPing* other);
  friend void swap(SystemPing& a, SystemPing& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SystemPing* New() const final {
    return CreateMaybeMessage<SystemPing>(NULL);
  }

  SystemPing* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<SystemPing>(arena);
  }
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    final;
  void CopyFrom(const SystemPing& from);
  void MergeFrom(const SystemPing& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  void DiscardUnknownFields();
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(SystemPing* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string msgId = 1;
  void clear_msgid();
  static const int kMsgIdFieldNumber = 1;
  const ::std::string& msgid() const;
  void set_msgid(const ::std::string& value);
  #if LANG_CXX11
  void set_msgid(::std::string&& value);
  #endif
  void set_msgid(const char* value);
  void set_msgid(const char* value, size_t size);
  ::std::string* mutable_msgid();
  ::std::string* release_msgid();
  void set_allocated_msgid(::std::string* msgid);

  // @@protoc_insertion_point(class_scope:im.SystemPing)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr msgid_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_im_2epub_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SYSAssocSvrRegist

// string ip = 1;
inline void SYSAssocSvrRegist::clear_ip() {
  ip_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& SYSAssocSvrRegist::ip() const {
  // @@protoc_insertion_point(field_get:im.SYSAssocSvrRegist.ip)
  return ip_.GetNoArena();
}
inline void SYSAssocSvrRegist::set_ip(const ::std::string& value) {
  
  ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:im.SYSAssocSvrRegist.ip)
}
#if LANG_CXX11
inline void SYSAssocSvrRegist::set_ip(::std::string&& value) {
  
  ip_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:im.SYSAssocSvrRegist.ip)
}
#endif
inline void SYSAssocSvrRegist::set_ip(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:im.SYSAssocSvrRegist.ip)
}
inline void SYSAssocSvrRegist::set_ip(const char* value, size_t size) {
  
  ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:im.SYSAssocSvrRegist.ip)
}
inline ::std::string* SYSAssocSvrRegist::mutable_ip() {
  
  // @@protoc_insertion_point(field_mutable:im.SYSAssocSvrRegist.ip)
  return ip_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SYSAssocSvrRegist::release_ip() {
  // @@protoc_insertion_point(field_release:im.SYSAssocSvrRegist.ip)
  
  return ip_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SYSAssocSvrRegist::set_allocated_ip(::std::string* ip) {
  if (ip != NULL) {
    
  } else {
    
  }
  ip_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ip);
  // @@protoc_insertion_point(field_set_allocated:im.SYSAssocSvrRegist.ip)
}

// uint32 port = 2;
inline void SYSAssocSvrRegist::clear_port() {
  port_ = 0u;
}
inline ::google::protobuf::uint32 SYSAssocSvrRegist::port() const {
  // @@protoc_insertion_point(field_get:im.SYSAssocSvrRegist.port)
  return port_;
}
inline void SYSAssocSvrRegist::set_port(::google::protobuf::uint32 value) {
  
  port_ = value;
  // @@protoc_insertion_point(field_set:im.SYSAssocSvrRegist.port)
}

// -------------------------------------------------------------------

// SYSAssocSvrRegistAck

// .im.ErrCode nErr = 1;
inline void SYSAssocSvrRegistAck::clear_nerr() {
  nerr_ = 0;
}
inline ::im::ErrCode SYSAssocSvrRegistAck::nerr() const {
  // @@protoc_insertion_point(field_get:im.SYSAssocSvrRegistAck.nErr)
  return static_cast< ::im::ErrCode >(nerr_);
}
inline void SYSAssocSvrRegistAck::set_nerr(::im::ErrCode value) {
  
  nerr_ = value;
  // @@protoc_insertion_point(field_set:im.SYSAssocSvrRegistAck.nErr)
}

// -------------------------------------------------------------------

// SystemPing

// string msgId = 1;
inline void SystemPing::clear_msgid() {
  msgid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& SystemPing::msgid() const {
  // @@protoc_insertion_point(field_get:im.SystemPing.msgId)
  return msgid_.GetNoArena();
}
inline void SystemPing::set_msgid(const ::std::string& value) {
  
  msgid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:im.SystemPing.msgId)
}
#if LANG_CXX11
inline void SystemPing::set_msgid(::std::string&& value) {
  
  msgid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:im.SystemPing.msgId)
}
#endif
inline void SystemPing::set_msgid(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  msgid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:im.SystemPing.msgId)
}
inline void SystemPing::set_msgid(const char* value, size_t size) {
  
  msgid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:im.SystemPing.msgId)
}
inline ::std::string* SystemPing::mutable_msgid() {
  
  // @@protoc_insertion_point(field_mutable:im.SystemPing.msgId)
  return msgid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SystemPing::release_msgid() {
  // @@protoc_insertion_point(field_release:im.SystemPing.msgId)
  
  return msgid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SystemPing::set_allocated_msgid(::std::string* msgid) {
  if (msgid != NULL) {
    
  } else {
    
  }
  msgid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), msgid);
  // @@protoc_insertion_point(field_set_allocated:im.SystemPing.msgId)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace im

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::im::CmdId> : ::std::true_type {};
template <> struct is_proto_enum< ::im::ErrCode> : ::std::true_type {};
template <> struct is_proto_enum< ::im::MsgType> : ::std::true_type {};
template <> struct is_proto_enum< ::im::DiveceType> : ::std::true_type {};
template <> struct is_proto_enum< ::im::NotifyType> : ::std::true_type {};
template <> struct is_proto_enum< ::im::CommonNotifyType> : ::std::true_type {};
template <> struct is_proto_enum< ::im::CMLoginNotifyType> : ::std::true_type {};
template <> struct is_proto_enum< ::im::LoginCMNotifyType> : ::std::true_type {};
template <> struct is_proto_enum< ::im::PHPLoginNotifyType> : ::std::true_type {};

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_im_2epub_2eproto
