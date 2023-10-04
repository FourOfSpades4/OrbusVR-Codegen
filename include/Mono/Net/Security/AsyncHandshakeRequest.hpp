// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Net.Security.AsyncProtocolRequest
#include "Mono/Net/Security/AsyncProtocolRequest.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Net::Security
namespace Mono::Net::Security {
  // Forward declaring type: MobileAuthenticatedStream
  class MobileAuthenticatedStream;
  // Forward declaring type: AsyncOperationStatus
  struct AsyncOperationStatus;
}
// Completed forward declares
// Type namespace: Mono.Net.Security
namespace Mono::Net::Security {
  // Forward declaring type: AsyncHandshakeRequest
  class AsyncHandshakeRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Net::Security::AsyncHandshakeRequest);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::AsyncHandshakeRequest*, "Mono.Net.Security", "AsyncHandshakeRequest");
// Type namespace: Mono.Net.Security
namespace Mono::Net::Security {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Net.Security.AsyncHandshakeRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class AsyncHandshakeRequest : public ::Mono::Net::Security::AsyncProtocolRequest {
    public:
    // public System.Void .ctor(Mono.Net.Security.MobileAuthenticatedStream parent, System.Boolean sync)
    // Offset: 0x1922BB0
    // Implemented from: Mono.Net.Security.AsyncProtocolRequest
    // Base method: System.Void AsyncProtocolRequest::.ctor(Mono.Net.Security.MobileAuthenticatedStream parent, System.Boolean sync)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AsyncHandshakeRequest* New_ctor(::Mono::Net::Security::MobileAuthenticatedStream* parent, bool sync) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Net::Security::AsyncHandshakeRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AsyncHandshakeRequest*, creationType>(parent, sync)));
    }
    // protected override Mono.Net.Security.AsyncOperationStatus Run(Mono.Net.Security.AsyncOperationStatus status)
    // Offset: 0x1922C40
    // Implemented from: Mono.Net.Security.AsyncProtocolRequest
    // Base method: Mono.Net.Security.AsyncOperationStatus AsyncProtocolRequest::Run(Mono.Net.Security.AsyncOperationStatus status)
    ::Mono::Net::Security::AsyncOperationStatus Run(::Mono::Net::Security::AsyncOperationStatus status);
  }; // Mono.Net.Security.AsyncHandshakeRequest
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Net::Security::AsyncHandshakeRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Net::Security::AsyncHandshakeRequest::Run
// Il2CppName: Run
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Net::Security::AsyncOperationStatus (Mono::Net::Security::AsyncHandshakeRequest::*)(::Mono::Net::Security::AsyncOperationStatus)>(&Mono::Net::Security::AsyncHandshakeRequest::Run)> {
  static const MethodInfo* get() {
    static auto* status = &::il2cpp_utils::GetClassFromName("Mono.Net.Security", "AsyncOperationStatus")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::AsyncHandshakeRequest*), "Run", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{status});
  }
};
