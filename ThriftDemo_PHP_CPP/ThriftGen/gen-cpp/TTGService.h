/**
 * Autogenerated by Thrift Compiler (0.9.2)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef TTGService_H
#define TTGService_H

#include <thrift/TDispatchProcessor.h>
#include "TTG_types.h"

namespace TTG {

class TTGServiceIf {
 public:
  virtual ~TTGServiceIf() {}
  virtual void getStudentInfo(Response& _return, const Request& request) = 0;
};

class TTGServiceIfFactory {
 public:
  typedef TTGServiceIf Handler;

  virtual ~TTGServiceIfFactory() {}

  virtual TTGServiceIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(TTGServiceIf* /* handler */) = 0;
};

class TTGServiceIfSingletonFactory : virtual public TTGServiceIfFactory {
 public:
  TTGServiceIfSingletonFactory(const boost::shared_ptr<TTGServiceIf>& iface) : iface_(iface) {}
  virtual ~TTGServiceIfSingletonFactory() {}

  virtual TTGServiceIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(TTGServiceIf* /* handler */) {}

 protected:
  boost::shared_ptr<TTGServiceIf> iface_;
};

class TTGServiceNull : virtual public TTGServiceIf {
 public:
  virtual ~TTGServiceNull() {}
  void getStudentInfo(Response& /* _return */, const Request& /* request */) {
    return;
  }
};

typedef struct _TTGService_getStudentInfo_args__isset {
  _TTGService_getStudentInfo_args__isset() : request(false) {}
  bool request :1;
} _TTGService_getStudentInfo_args__isset;

class TTGService_getStudentInfo_args {
 public:

  static const char* ascii_fingerprint; // = "B3124E95D8111DAEB63649B04CEB6D5F";
  static const uint8_t binary_fingerprint[16]; // = {0xB3,0x12,0x4E,0x95,0xD8,0x11,0x1D,0xAE,0xB6,0x36,0x49,0xB0,0x4C,0xEB,0x6D,0x5F};

  TTGService_getStudentInfo_args(const TTGService_getStudentInfo_args&);
  TTGService_getStudentInfo_args& operator=(const TTGService_getStudentInfo_args&);
  TTGService_getStudentInfo_args() {
  }

  virtual ~TTGService_getStudentInfo_args() throw();
  Request request;

  _TTGService_getStudentInfo_args__isset __isset;

  void __set_request(const Request& val);

  bool operator == (const TTGService_getStudentInfo_args & rhs) const
  {
    if (!(request == rhs.request))
      return false;
    return true;
  }
  bool operator != (const TTGService_getStudentInfo_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TTGService_getStudentInfo_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const TTGService_getStudentInfo_args& obj);
};


class TTGService_getStudentInfo_pargs {
 public:

  static const char* ascii_fingerprint; // = "B3124E95D8111DAEB63649B04CEB6D5F";
  static const uint8_t binary_fingerprint[16]; // = {0xB3,0x12,0x4E,0x95,0xD8,0x11,0x1D,0xAE,0xB6,0x36,0x49,0xB0,0x4C,0xEB,0x6D,0x5F};


  virtual ~TTGService_getStudentInfo_pargs() throw();
  const Request* request;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const TTGService_getStudentInfo_pargs& obj);
};

typedef struct _TTGService_getStudentInfo_result__isset {
  _TTGService_getStudentInfo_result__isset() : success(false) {}
  bool success :1;
} _TTGService_getStudentInfo_result__isset;

class TTGService_getStudentInfo_result {
 public:

  static const char* ascii_fingerprint; // = "9EDD2B2E35CB2E868C4F094097E6F39B";
  static const uint8_t binary_fingerprint[16]; // = {0x9E,0xDD,0x2B,0x2E,0x35,0xCB,0x2E,0x86,0x8C,0x4F,0x09,0x40,0x97,0xE6,0xF3,0x9B};

  TTGService_getStudentInfo_result(const TTGService_getStudentInfo_result&);
  TTGService_getStudentInfo_result& operator=(const TTGService_getStudentInfo_result&);
  TTGService_getStudentInfo_result() {
  }

  virtual ~TTGService_getStudentInfo_result() throw();
  Response success;

  _TTGService_getStudentInfo_result__isset __isset;

  void __set_success(const Response& val);

  bool operator == (const TTGService_getStudentInfo_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const TTGService_getStudentInfo_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TTGService_getStudentInfo_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const TTGService_getStudentInfo_result& obj);
};

typedef struct _TTGService_getStudentInfo_presult__isset {
  _TTGService_getStudentInfo_presult__isset() : success(false) {}
  bool success :1;
} _TTGService_getStudentInfo_presult__isset;

class TTGService_getStudentInfo_presult {
 public:

  static const char* ascii_fingerprint; // = "9EDD2B2E35CB2E868C4F094097E6F39B";
  static const uint8_t binary_fingerprint[16]; // = {0x9E,0xDD,0x2B,0x2E,0x35,0xCB,0x2E,0x86,0x8C,0x4F,0x09,0x40,0x97,0xE6,0xF3,0x9B};


  virtual ~TTGService_getStudentInfo_presult() throw();
  Response* success;

  _TTGService_getStudentInfo_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

  friend std::ostream& operator<<(std::ostream& out, const TTGService_getStudentInfo_presult& obj);
};

class TTGServiceClient : virtual public TTGServiceIf {
 public:
  TTGServiceClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  TTGServiceClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void getStudentInfo(Response& _return, const Request& request);
  void send_getStudentInfo(const Request& request);
  void recv_getStudentInfo(Response& _return);
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class TTGServiceProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  boost::shared_ptr<TTGServiceIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (TTGServiceProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_getStudentInfo(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  TTGServiceProcessor(boost::shared_ptr<TTGServiceIf> iface) :
    iface_(iface) {
    processMap_["getStudentInfo"] = &TTGServiceProcessor::process_getStudentInfo;
  }

  virtual ~TTGServiceProcessor() {}
};

class TTGServiceProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  TTGServiceProcessorFactory(const ::boost::shared_ptr< TTGServiceIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::boost::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::boost::shared_ptr< TTGServiceIfFactory > handlerFactory_;
};

class TTGServiceMultiface : virtual public TTGServiceIf {
 public:
  TTGServiceMultiface(std::vector<boost::shared_ptr<TTGServiceIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~TTGServiceMultiface() {}
 protected:
  std::vector<boost::shared_ptr<TTGServiceIf> > ifaces_;
  TTGServiceMultiface() {}
  void add(boost::shared_ptr<TTGServiceIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void getStudentInfo(Response& _return, const Request& request) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->getStudentInfo(_return, request);
    }
    ifaces_[i]->getStudentInfo(_return, request);
    return;
  }

};

} // namespace

#endif
