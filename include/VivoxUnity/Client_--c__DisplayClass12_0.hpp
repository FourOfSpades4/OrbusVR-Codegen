// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VivoxUnity.Client
#include "VivoxUnity/Client.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: vx_req_connector_create_t
  class vx_req_connector_create_t;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VivoxUnity::Client::$$c__DisplayClass12_0);
DEFINE_IL2CPP_ARG_TYPE(::VivoxUnity::Client::$$c__DisplayClass12_0*, "VivoxUnity", "Client/<>c__DisplayClass12_0");
// Type namespace: VivoxUnity
namespace VivoxUnity {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: VivoxUnity.Client/<>c__DisplayClass12_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: ABD778
  class Client::$$c__DisplayClass12_0 : public ::Il2CppObject {
    public:
    public:
    // public vx_req_connector_create_t request
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::vx_req_connector_create_t* request;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::vx_req_connector_create_t*) == 0x8);
    // public VivoxUnity.Client <>4__this
    // Size: 0x8
    // Offset: 0x18
    ::VivoxUnity::Client* $$4__this;
    // Field size check
    static_assert(sizeof(::VivoxUnity::Client*) == 0x8);
    // public System.String connectorHandle
    // Size: 0x8
    // Offset: 0x20
    ::StringW connectorHandle;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public vx_req_connector_create_t request
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::vx_req_connector_create_t*& dyn_request();
    // Get instance field reference: public VivoxUnity.Client <>4__this
    [[deprecated("Use field access instead!")]] ::VivoxUnity::Client*& dyn_$$4__this();
    // Get instance field reference: public System.String connectorHandle
    [[deprecated("Use field access instead!")]] ::StringW& dyn_connectorHandle();
    // public System.Void .ctor()
    // Offset: 0x14B70B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Client::$$c__DisplayClass12_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VivoxUnity::Client::$$c__DisplayClass12_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Client::$$c__DisplayClass12_0*, creationType>()));
    }
    // System.Void <BeginGetConnectorHandle>b__0(System.IAsyncResult ar)
    // Offset: 0x14B8A30
    void $BeginGetConnectorHandle$b__0(::System::IAsyncResult* ar);
  }; // VivoxUnity.Client/<>c__DisplayClass12_0
  #pragma pack(pop)
  static check_size<sizeof(Client::$$c__DisplayClass12_0), 32 + sizeof(::StringW)> __VivoxUnity_Client_$$c__DisplayClass12_0SizeCheck;
  static_assert(sizeof(Client::$$c__DisplayClass12_0) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VivoxUnity::Client::$$c__DisplayClass12_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VivoxUnity::Client::$$c__DisplayClass12_0::$BeginGetConnectorHandle$b__0
// Il2CppName: <BeginGetConnectorHandle>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Client::$$c__DisplayClass12_0::*)(::System::IAsyncResult*)>(&VivoxUnity::Client::$$c__DisplayClass12_0::$BeginGetConnectorHandle$b__0)> {
  static const MethodInfo* get() {
    static auto* ar = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Client::$$c__DisplayClass12_0*), "<BeginGetConnectorHandle>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ar});
  }
};