// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVRInput
#include "Valve/VR/IVRInput.hpp"
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
  // Forward declaring type: EVRInputError
  struct EVRInputError;
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
NEED_NO_BOX(::Valve::VR::IVRInput::_GetActionSetHandle);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::IVRInput::_GetActionSetHandle*, "Valve.VR", "IVRInput/_GetActionSetHandle");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRInput/_GetActionSetHandle
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: AD0330
  class IVRInput::_GetActionSetHandle : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x23981B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRInput::_GetActionSetHandle* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::IVRInput::_GetActionSetHandle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRInput::_GetActionSetHandle*, creationType>(object, method)));
    }
    // public Valve.VR.EVRInputError Invoke(System.String pchActionSetName, ref System.UInt64 pHandle)
    // Offset: 0x23981C0
    ::Valve::VR::EVRInputError Invoke(::StringW pchActionSetName, ByRef<uint64_t> pHandle);
    // public System.IAsyncResult BeginInvoke(System.String pchActionSetName, ref System.UInt64 pHandle, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2398950
    ::System::IAsyncResult* BeginInvoke(::StringW pchActionSetName, ByRef<uint64_t> pHandle, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRInputError EndInvoke(ref System.UInt64 pHandle, System.IAsyncResult result)
    // Offset: 0x23989EC
    ::Valve::VR::EVRInputError EndInvoke(ByRef<uint64_t> pHandle, ::System::IAsyncResult* result);
  }; // Valve.VR.IVRInput/_GetActionSetHandle
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRInput::_GetActionSetHandle::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRInput::_GetActionSetHandle::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EVRInputError (Valve::VR::IVRInput::_GetActionSetHandle::*)(::StringW, ByRef<uint64_t>)>(&Valve::VR::IVRInput::_GetActionSetHandle::Invoke)> {
  static const MethodInfo* get() {
    static auto* pchActionSetName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRInput::_GetActionSetHandle*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchActionSetName, pHandle});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRInput::_GetActionSetHandle::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Valve::VR::IVRInput::_GetActionSetHandle::*)(::StringW, ByRef<uint64_t>, ::System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRInput::_GetActionSetHandle::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pchActionSetName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRInput::_GetActionSetHandle*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchActionSetName, pHandle, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRInput::_GetActionSetHandle::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EVRInputError (Valve::VR::IVRInput::_GetActionSetHandle::*)(ByRef<uint64_t>, ::System::IAsyncResult*)>(&Valve::VR::IVRInput::_GetActionSetHandle::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRInput::_GetActionSetHandle*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pHandle, result});
  }
};
