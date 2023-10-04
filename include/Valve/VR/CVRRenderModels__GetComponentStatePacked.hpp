// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.CVRRenderModels
#include "Valve/VR/CVRRenderModels.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: VRControllerState_t_Packed
  struct VRControllerState_t_Packed;
  // Forward declaring type: RenderModel_ControllerMode_State_t
  struct RenderModel_ControllerMode_State_t;
  // Forward declaring type: RenderModel_ComponentState_t
  struct RenderModel_ComponentState_t;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Valve::VR::CVRRenderModels::_GetComponentStatePacked);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::CVRRenderModels::_GetComponentStatePacked*, "Valve.VR", "CVRRenderModels/_GetComponentStatePacked");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.CVRRenderModels/_GetComponentStatePacked
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: AD0600
  class CVRRenderModels::_GetComponentStatePacked : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xFFA398
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVRRenderModels::_GetComponentStatePacked* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::CVRRenderModels::_GetComponentStatePacked::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVRRenderModels::_GetComponentStatePacked*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.String pchRenderModelName, System.String pchComponentName, ref Valve.VR.VRControllerState_t_Packed pControllerState, ref Valve.VR.RenderModel_ControllerMode_State_t pState, ref Valve.VR.RenderModel_ComponentState_t pComponentState)
    // Offset: 0xFF99D8
    bool Invoke(::StringW pchRenderModelName, ::StringW pchComponentName, ByRef<::Valve::VR::VRControllerState_t_Packed> pControllerState, ByRef<::Valve::VR::RenderModel_ControllerMode_State_t> pState, ByRef<::Valve::VR::RenderModel_ComponentState_t> pComponentState);
    // public System.IAsyncResult BeginInvoke(System.String pchRenderModelName, System.String pchComponentName, ref Valve.VR.VRControllerState_t_Packed pControllerState, ref Valve.VR.RenderModel_ControllerMode_State_t pState, ref Valve.VR.RenderModel_ComponentState_t pComponentState, System.AsyncCallback callback, System.Object object)
    // Offset: 0xFFA3A8
    ::System::IAsyncResult* BeginInvoke(::StringW pchRenderModelName, ::StringW pchComponentName, ByRef<::Valve::VR::VRControllerState_t_Packed> pControllerState, ByRef<::Valve::VR::RenderModel_ControllerMode_State_t> pState, ByRef<::Valve::VR::RenderModel_ComponentState_t> pComponentState, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref Valve.VR.VRControllerState_t_Packed pControllerState, ref Valve.VR.RenderModel_ControllerMode_State_t pState, ref Valve.VR.RenderModel_ComponentState_t pComponentState, System.IAsyncResult result)
    // Offset: 0xFFA498
    bool EndInvoke(ByRef<::Valve::VR::VRControllerState_t_Packed> pControllerState, ByRef<::Valve::VR::RenderModel_ControllerMode_State_t> pState, ByRef<::Valve::VR::RenderModel_ComponentState_t> pComponentState, ::System::IAsyncResult* result);
  }; // Valve.VR.CVRRenderModels/_GetComponentStatePacked
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::CVRRenderModels::_GetComponentStatePacked::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::CVRRenderModels::_GetComponentStatePacked::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::CVRRenderModels::_GetComponentStatePacked::*)(::StringW, ::StringW, ByRef<::Valve::VR::VRControllerState_t_Packed>, ByRef<::Valve::VR::RenderModel_ControllerMode_State_t>, ByRef<::Valve::VR::RenderModel_ComponentState_t>)>(&Valve::VR::CVRRenderModels::_GetComponentStatePacked::Invoke)> {
  static const MethodInfo* get() {
    static auto* pchRenderModelName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchComponentName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pControllerState = &::il2cpp_utils::GetClassFromName("Valve.VR", "VRControllerState_t_Packed")->this_arg;
    static auto* pState = &::il2cpp_utils::GetClassFromName("Valve.VR", "RenderModel_ControllerMode_State_t")->this_arg;
    static auto* pComponentState = &::il2cpp_utils::GetClassFromName("Valve.VR", "RenderModel_ComponentState_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRRenderModels::_GetComponentStatePacked*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchRenderModelName, pchComponentName, pControllerState, pState, pComponentState});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRRenderModels::_GetComponentStatePacked::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Valve::VR::CVRRenderModels::_GetComponentStatePacked::*)(::StringW, ::StringW, ByRef<::Valve::VR::VRControllerState_t_Packed>, ByRef<::Valve::VR::RenderModel_ControllerMode_State_t>, ByRef<::Valve::VR::RenderModel_ComponentState_t>, ::System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::CVRRenderModels::_GetComponentStatePacked::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pchRenderModelName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchComponentName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pControllerState = &::il2cpp_utils::GetClassFromName("Valve.VR", "VRControllerState_t_Packed")->this_arg;
    static auto* pState = &::il2cpp_utils::GetClassFromName("Valve.VR", "RenderModel_ControllerMode_State_t")->this_arg;
    static auto* pComponentState = &::il2cpp_utils::GetClassFromName("Valve.VR", "RenderModel_ComponentState_t")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRRenderModels::_GetComponentStatePacked*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchRenderModelName, pchComponentName, pControllerState, pState, pComponentState, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRRenderModels::_GetComponentStatePacked::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::CVRRenderModels::_GetComponentStatePacked::*)(ByRef<::Valve::VR::VRControllerState_t_Packed>, ByRef<::Valve::VR::RenderModel_ControllerMode_State_t>, ByRef<::Valve::VR::RenderModel_ComponentState_t>, ::System::IAsyncResult*)>(&Valve::VR::CVRRenderModels::_GetComponentStatePacked::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pControllerState = &::il2cpp_utils::GetClassFromName("Valve.VR", "VRControllerState_t_Packed")->this_arg;
    static auto* pState = &::il2cpp_utils::GetClassFromName("Valve.VR", "RenderModel_ControllerMode_State_t")->this_arg;
    static auto* pComponentState = &::il2cpp_utils::GetClassFromName("Valve.VR", "RenderModel_ComponentState_t")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRRenderModels::_GetComponentStatePacked*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pControllerState, pState, pComponentState, result});
  }
};
