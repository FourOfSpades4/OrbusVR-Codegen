// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VivoxUnity.Private.LoginSession
#include "VivoxUnity/Private/LoginSession.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: vx_req_sessiongroup_set_tx_all_sessions_t
  class vx_req_sessiongroup_set_tx_all_sessions_t;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VivoxUnity::Private::LoginSession::$$c__DisplayClass127_0);
DEFINE_IL2CPP_ARG_TYPE(::VivoxUnity::Private::LoginSession::$$c__DisplayClass127_0*, "VivoxUnity.Private", "LoginSession/<>c__DisplayClass127_0");
// Type namespace: VivoxUnity.Private
namespace VivoxUnity::Private {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: VivoxUnity.Private.LoginSession/<>c__DisplayClass127_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: ABDB08
  class LoginSession::$$c__DisplayClass127_0 : public ::Il2CppObject {
    public:
    public:
    // public vx_req_sessiongroup_set_tx_all_sessions_t request
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::vx_req_sessiongroup_set_tx_all_sessions_t* request;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::vx_req_sessiongroup_set_tx_all_sessions_t*) == 0x8);
    public:
    // Creating conversion operator: operator ::GlobalNamespace::vx_req_sessiongroup_set_tx_all_sessions_t*
    constexpr operator ::GlobalNamespace::vx_req_sessiongroup_set_tx_all_sessions_t*() const noexcept {
      return request;
    }
    // Get instance field reference: public vx_req_sessiongroup_set_tx_all_sessions_t request
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::vx_req_sessiongroup_set_tx_all_sessions_t*& dyn_request();
    // public System.Void .ctor()
    // Offset: 0x12D3210
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoginSession::$$c__DisplayClass127_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VivoxUnity::Private::LoginSession::$$c__DisplayClass127_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoginSession::$$c__DisplayClass127_0*, creationType>()));
    }
    // System.Void <SetAllSessionsTransmitting>b__0(System.IAsyncResult result)
    // Offset: 0x12D3218
    void $SetAllSessionsTransmitting$b__0(::System::IAsyncResult* result);
  }; // VivoxUnity.Private.LoginSession/<>c__DisplayClass127_0
  #pragma pack(pop)
  static check_size<sizeof(LoginSession::$$c__DisplayClass127_0), 16 + sizeof(::GlobalNamespace::vx_req_sessiongroup_set_tx_all_sessions_t*)> __VivoxUnity_Private_LoginSession_$$c__DisplayClass127_0SizeCheck;
  static_assert(sizeof(LoginSession::$$c__DisplayClass127_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VivoxUnity::Private::LoginSession::$$c__DisplayClass127_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VivoxUnity::Private::LoginSession::$$c__DisplayClass127_0::$SetAllSessionsTransmitting$b__0
// Il2CppName: <SetAllSessionsTransmitting>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::LoginSession::$$c__DisplayClass127_0::*)(::System::IAsyncResult*)>(&VivoxUnity::Private::LoginSession::$$c__DisplayClass127_0::$SetAllSessionsTransmitting$b__0)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::LoginSession::$$c__DisplayClass127_0*), "<SetAllSessionsTransmitting>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
