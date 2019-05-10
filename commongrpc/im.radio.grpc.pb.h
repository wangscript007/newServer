// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: im.radio.proto
#ifndef GRPC_im_2eradio_2eproto__INCLUDED
#define GRPC_im_2eradio_2eproto__INCLUDED

#include "im.radio.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace radionotify {

class RadioNotifyService final {
 public:
  static constexpr char const* service_full_name() {
    return "radionotify.RadioNotifyService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status OnRadioMsgNotify(::grpc::ClientContext* context, const ::radionotify::RadioMsgNotify& request, ::radionotify::RadioMsgNotifyACK* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::radionotify::RadioMsgNotifyACK>> AsyncOnRadioMsgNotify(::grpc::ClientContext* context, const ::radionotify::RadioMsgNotify& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::radionotify::RadioMsgNotifyACK>>(AsyncOnRadioMsgNotifyRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::radionotify::RadioMsgNotifyACK>> PrepareAsyncOnRadioMsgNotify(::grpc::ClientContext* context, const ::radionotify::RadioMsgNotify& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::radionotify::RadioMsgNotifyACK>>(PrepareAsyncOnRadioMsgNotifyRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void OnRadioMsgNotify(::grpc::ClientContext* context, const ::radionotify::RadioMsgNotify* request, ::radionotify::RadioMsgNotifyACK* response, std::function<void(::grpc::Status)>) = 0;
    };
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::radionotify::RadioMsgNotifyACK>* AsyncOnRadioMsgNotifyRaw(::grpc::ClientContext* context, const ::radionotify::RadioMsgNotify& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::radionotify::RadioMsgNotifyACK>* PrepareAsyncOnRadioMsgNotifyRaw(::grpc::ClientContext* context, const ::radionotify::RadioMsgNotify& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status OnRadioMsgNotify(::grpc::ClientContext* context, const ::radionotify::RadioMsgNotify& request, ::radionotify::RadioMsgNotifyACK* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::radionotify::RadioMsgNotifyACK>> AsyncOnRadioMsgNotify(::grpc::ClientContext* context, const ::radionotify::RadioMsgNotify& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::radionotify::RadioMsgNotifyACK>>(AsyncOnRadioMsgNotifyRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::radionotify::RadioMsgNotifyACK>> PrepareAsyncOnRadioMsgNotify(::grpc::ClientContext* context, const ::radionotify::RadioMsgNotify& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::radionotify::RadioMsgNotifyACK>>(PrepareAsyncOnRadioMsgNotifyRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void OnRadioMsgNotify(::grpc::ClientContext* context, const ::radionotify::RadioMsgNotify* request, ::radionotify::RadioMsgNotifyACK* response, std::function<void(::grpc::Status)>) override;
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::radionotify::RadioMsgNotifyACK>* AsyncOnRadioMsgNotifyRaw(::grpc::ClientContext* context, const ::radionotify::RadioMsgNotify& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::radionotify::RadioMsgNotifyACK>* PrepareAsyncOnRadioMsgNotifyRaw(::grpc::ClientContext* context, const ::radionotify::RadioMsgNotify& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_OnRadioMsgNotify_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status OnRadioMsgNotify(::grpc::ServerContext* context, const ::radionotify::RadioMsgNotify* request, ::radionotify::RadioMsgNotifyACK* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_OnRadioMsgNotify : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_OnRadioMsgNotify() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_OnRadioMsgNotify() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status OnRadioMsgNotify(::grpc::ServerContext* context, const ::radionotify::RadioMsgNotify* request, ::radionotify::RadioMsgNotifyACK* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestOnRadioMsgNotify(::grpc::ServerContext* context, ::radionotify::RadioMsgNotify* request, ::grpc::ServerAsyncResponseWriter< ::radionotify::RadioMsgNotifyACK>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_OnRadioMsgNotify<Service > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_OnRadioMsgNotify : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_OnRadioMsgNotify() {
      ::grpc::Service::experimental().MarkMethodCallback(0,
        new ::grpc::internal::CallbackUnaryHandler< ExperimentalWithCallbackMethod_OnRadioMsgNotify<BaseClass>, ::radionotify::RadioMsgNotify, ::radionotify::RadioMsgNotifyACK>(
          [this](::grpc::ServerContext* context,
                 const ::radionotify::RadioMsgNotify* request,
                 ::radionotify::RadioMsgNotifyACK* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->OnRadioMsgNotify(context, request, response, controller);
                 }, this));
    }
    ~ExperimentalWithCallbackMethod_OnRadioMsgNotify() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status OnRadioMsgNotify(::grpc::ServerContext* context, const ::radionotify::RadioMsgNotify* request, ::radionotify::RadioMsgNotifyACK* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void OnRadioMsgNotify(::grpc::ServerContext* context, const ::radionotify::RadioMsgNotify* request, ::radionotify::RadioMsgNotifyACK* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  typedef ExperimentalWithCallbackMethod_OnRadioMsgNotify<Service > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_OnRadioMsgNotify : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_OnRadioMsgNotify() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_OnRadioMsgNotify() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status OnRadioMsgNotify(::grpc::ServerContext* context, const ::radionotify::RadioMsgNotify* request, ::radionotify::RadioMsgNotifyACK* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_OnRadioMsgNotify : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_OnRadioMsgNotify() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_OnRadioMsgNotify() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status OnRadioMsgNotify(::grpc::ServerContext* context, const ::radionotify::RadioMsgNotify* request, ::radionotify::RadioMsgNotifyACK* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestOnRadioMsgNotify(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_OnRadioMsgNotify : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_OnRadioMsgNotify() {
      ::grpc::Service::experimental().MarkMethodRawCallback(0,
        new ::grpc::internal::CallbackUnaryHandler< ExperimentalWithRawCallbackMethod_OnRadioMsgNotify<BaseClass>, ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::ServerContext* context,
                 const ::grpc::ByteBuffer* request,
                 ::grpc::ByteBuffer* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->OnRadioMsgNotify(context, request, response, controller);
                 }, this));
    }
    ~ExperimentalWithRawCallbackMethod_OnRadioMsgNotify() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status OnRadioMsgNotify(::grpc::ServerContext* context, const ::radionotify::RadioMsgNotify* request, ::radionotify::RadioMsgNotifyACK* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void OnRadioMsgNotify(::grpc::ServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_OnRadioMsgNotify : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_OnRadioMsgNotify() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::radionotify::RadioMsgNotify, ::radionotify::RadioMsgNotifyACK>(std::bind(&WithStreamedUnaryMethod_OnRadioMsgNotify<BaseClass>::StreamedOnRadioMsgNotify, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_OnRadioMsgNotify() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status OnRadioMsgNotify(::grpc::ServerContext* context, const ::radionotify::RadioMsgNotify* request, ::radionotify::RadioMsgNotifyACK* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedOnRadioMsgNotify(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::radionotify::RadioMsgNotify,::radionotify::RadioMsgNotifyACK>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_OnRadioMsgNotify<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_OnRadioMsgNotify<Service > StreamedService;
};

}  // namespace radionotify


#endif  // GRPC_im_2eradio_2eproto__INCLUDED
