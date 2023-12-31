// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Experimental.IntegratedSubsystem`1
#include "UnityEngine/Experimental/IntegratedSubsystem_1.hpp"
// Including type: UnityEngine.Experimental.XR.SessionTrackingStateChangedEventArgs
#include "UnityEngine/Experimental/XR/SessionTrackingStateChangedEventArgs.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Experimental::XR
namespace UnityEngine::Experimental::XR {
  // Forward declaring type: XRSessionSubsystemDescriptor
  class XRSessionSubsystemDescriptor;
  // Skipping declaration: TrackingState because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: UnityEngine.Experimental.XR
namespace UnityEngine::Experimental::XR {
  // Forward declaring type: XRSessionSubsystem
  class XRSessionSubsystem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Experimental::XR::XRSessionSubsystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::XR::XRSessionSubsystem*, "UnityEngine.Experimental.XR", "XRSessionSubsystem");
// Type namespace: UnityEngine.Experimental.XR
namespace UnityEngine::Experimental::XR {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Experimental.XR.XRSessionSubsystem
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: A8F36C
  // [NativeConditionalAttribute] Offset: A8F36C
  // [UsedByNativeCodeAttribute] Offset: A8F36C
  // [NativeHeaderAttribute] Offset: A8F36C
  class XRSessionSubsystem : public ::UnityEngine::Experimental::IntegratedSubsystem_1<::UnityEngine::Experimental::XR::XRSessionSubsystemDescriptor*> {
    public:
    public:
    // [DebuggerBrowsableAttribute] Offset: 0xA8FCB0
    // [CompilerGeneratedAttribute] Offset: 0xA8FCB0
    // private System.Action`1<UnityEngine.Experimental.XR.SessionTrackingStateChangedEventArgs> TrackingStateChanged
    // Size: 0x8
    // Offset: 0x20
    ::System::Action_1<::UnityEngine::Experimental::XR::SessionTrackingStateChangedEventArgs>* TrackingStateChanged;
    // Field size check
    static_assert(sizeof(::System::Action_1<::UnityEngine::Experimental::XR::SessionTrackingStateChangedEventArgs>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Action_1<::UnityEngine::Experimental::XR::SessionTrackingStateChangedEventArgs>*
    constexpr operator ::System::Action_1<::UnityEngine::Experimental::XR::SessionTrackingStateChangedEventArgs>*() const noexcept {
      return TrackingStateChanged;
    }
    // Get instance field reference: private System.Action`1<UnityEngine.Experimental.XR.SessionTrackingStateChangedEventArgs> TrackingStateChanged
    [[deprecated("Use field access instead!")]] ::System::Action_1<::UnityEngine::Experimental::XR::SessionTrackingStateChangedEventArgs>*& dyn_TrackingStateChanged();
    // private System.Void InvokeTrackingStateChangedEvent(UnityEngine.Experimental.XR.TrackingState newState)
    // Offset: 0x287F728
    void InvokeTrackingStateChangedEvent(::UnityEngine::Experimental::XR::TrackingState newState);
    // public System.Void .ctor()
    // Offset: 0x287F6D8
    // Implemented from: UnityEngine.Experimental.IntegratedSubsystem`1
    // Base method: System.Void IntegratedSubsystem_1::.ctor()
    // Base method: System.Void IntegratedSubsystem::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XRSessionSubsystem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::XR::XRSessionSubsystem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XRSessionSubsystem*, creationType>()));
    }
  }; // UnityEngine.Experimental.XR.XRSessionSubsystem
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Experimental::XR::XRSessionSubsystem::InvokeTrackingStateChangedEvent
// Il2CppName: InvokeTrackingStateChangedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::XR::XRSessionSubsystem::*)(::UnityEngine::Experimental::XR::TrackingState)>(&UnityEngine::Experimental::XR::XRSessionSubsystem::InvokeTrackingStateChangedEvent)> {
  static const MethodInfo* get() {
    static auto* newState = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.XR", "TrackingState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::XR::XRSessionSubsystem*), "InvokeTrackingStateChangedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newState});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::XR::XRSessionSubsystem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
