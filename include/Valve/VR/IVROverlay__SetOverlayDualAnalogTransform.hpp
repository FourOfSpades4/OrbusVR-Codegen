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
  // Forward declaring type: EDualAnalogWhich
  struct EDualAnalogWhich;
  // Forward declaring type: HmdVector2_t
  struct HmdVector2_t;
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
NEED_NO_BOX(::Valve::VR::IVROverlay::_SetOverlayDualAnalogTransform);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::IVROverlay::_SetOverlayDualAnalogTransform*, "Valve.VR", "IVROverlay/_SetOverlayDualAnalogTransform");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVROverlay/_SetOverlayDualAnalogTransform
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: ACFD90
  class IVROverlay::_SetOverlayDualAnalogTransform : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x23FB6E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_SetOverlayDualAnalogTransform* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::IVROverlay::_SetOverlayDualAnalogTransform::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_SetOverlayDualAnalogTransform*, creationType>(object, method)));
    }
    // public Valve.VR.EVROverlayError Invoke(System.UInt64 ulOverlay, Valve.VR.EDualAnalogWhich eWhich, ref Valve.VR.HmdVector2_t pvCenter, System.Single fRadius)
    // Offset: 0x23FB6F0
    ::Valve::VR::EVROverlayError Invoke(uint64_t ulOverlay, ::Valve::VR::EDualAnalogWhich eWhich, ByRef<::Valve::VR::HmdVector2_t> pvCenter, float fRadius);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlay, Valve.VR.EDualAnalogWhich eWhich, ref Valve.VR.HmdVector2_t pvCenter, System.Single fRadius, System.AsyncCallback callback, System.Object object)
    // Offset: 0x23FBBD0
    ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlay, ::Valve::VR::EDualAnalogWhich eWhich, ByRef<::Valve::VR::HmdVector2_t> pvCenter, float fRadius, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(ref Valve.VR.HmdVector2_t pvCenter, System.IAsyncResult result)
    // Offset: 0x23FBCC4
    ::Valve::VR::EVROverlayError EndInvoke(ByRef<::Valve::VR::HmdVector2_t> pvCenter, ::System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_SetOverlayDualAnalogTransform
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_SetOverlayDualAnalogTransform::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_SetOverlayDualAnalogTransform::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EVROverlayError (Valve::VR::IVROverlay::_SetOverlayDualAnalogTransform::*)(uint64_t, ::Valve::VR::EDualAnalogWhich, ByRef<::Valve::VR::HmdVector2_t>, float)>(&Valve::VR::IVROverlay::_SetOverlayDualAnalogTransform::Invoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlay = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* eWhich = &::il2cpp_utils::GetClassFromName("Valve.VR", "EDualAnalogWhich")->byval_arg;
    static auto* pvCenter = &::il2cpp_utils::GetClassFromName("Valve.VR", "HmdVector2_t")->this_arg;
    static auto* fRadius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_SetOverlayDualAnalogTransform*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlay, eWhich, pvCenter, fRadius});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_SetOverlayDualAnalogTransform::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Valve::VR::IVROverlay::_SetOverlayDualAnalogTransform::*)(uint64_t, ::Valve::VR::EDualAnalogWhich, ByRef<::Valve::VR::HmdVector2_t>, float, ::System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVROverlay::_SetOverlayDualAnalogTransform::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlay = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* eWhich = &::il2cpp_utils::GetClassFromName("Valve.VR", "EDualAnalogWhich")->byval_arg;
    static auto* pvCenter = &::il2cpp_utils::GetClassFromName("Valve.VR", "HmdVector2_t")->this_arg;
    static auto* fRadius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_SetOverlayDualAnalogTransform*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlay, eWhich, pvCenter, fRadius, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_SetOverlayDualAnalogTransform::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EVROverlayError (Valve::VR::IVROverlay::_SetOverlayDualAnalogTransform::*)(ByRef<::Valve::VR::HmdVector2_t>, ::System::IAsyncResult*)>(&Valve::VR::IVROverlay::_SetOverlayDualAnalogTransform::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pvCenter = &::il2cpp_utils::GetClassFromName("Valve.VR", "HmdVector2_t")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_SetOverlayDualAnalogTransform*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pvCenter, result});
  }
};
