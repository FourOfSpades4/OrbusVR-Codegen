// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVROverlay
#include "Valve/VR/IVROverlay.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
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
NEED_NO_BOX(::Valve::VR::IVROverlay::_SetOverlayRaw);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::IVROverlay::_SetOverlayRaw*, "Valve.VR", "IVROverlay/_SetOverlayRaw");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVROverlay/_SetOverlayRaw
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: ACFDE0
  class IVROverlay::_SetOverlayRaw : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x23FE48C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_SetOverlayRaw* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::IVROverlay::_SetOverlayRaw::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_SetOverlayRaw*, creationType>(object, method)));
    }
    // public Valve.VR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, System.IntPtr pvBuffer, System.UInt32 unWidth, System.UInt32 unHeight, System.UInt32 unDepth)
    // Offset: 0x23FE49C
    ::Valve::VR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::System::IntPtr pvBuffer, uint unWidth, uint unHeight, uint unDepth);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, System.IntPtr pvBuffer, System.UInt32 unWidth, System.UInt32 unHeight, System.UInt32 unDepth, System.AsyncCallback callback, System.Object object)
    // Offset: 0x23FE97C
    ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::System::IntPtr pvBuffer, uint unWidth, uint unHeight, uint unDepth, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(System.IAsyncResult result)
    // Offset: 0x23FEA70
    ::Valve::VR::EVROverlayError EndInvoke(::System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_SetOverlayRaw
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_SetOverlayRaw::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_SetOverlayRaw::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EVROverlayError (Valve::VR::IVROverlay::_SetOverlayRaw::*)(uint64_t, ::System::IntPtr, uint, uint, uint)>(&Valve::VR::IVROverlay::_SetOverlayRaw::Invoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* pvBuffer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* unWidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* unHeight = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* unDepth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_SetOverlayRaw*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, pvBuffer, unWidth, unHeight, unDepth});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_SetOverlayRaw::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Valve::VR::IVROverlay::_SetOverlayRaw::*)(uint64_t, ::System::IntPtr, uint, uint, uint, ::System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVROverlay::_SetOverlayRaw::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* pvBuffer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* unWidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* unHeight = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* unDepth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_SetOverlayRaw*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, pvBuffer, unWidth, unHeight, unDepth, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_SetOverlayRaw::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EVROverlayError (Valve::VR::IVROverlay::_SetOverlayRaw::*)(::System::IAsyncResult*)>(&Valve::VR::IVROverlay::_SetOverlayRaw::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_SetOverlayRaw*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};