// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Experimental.XR.BoundedPlane
#include "UnityEngine/Experimental/XR/BoundedPlane.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Experimental::XR
namespace UnityEngine::Experimental::XR {
  // Forward declaring type: XRPlaneSubsystem
  class XRPlaneSubsystem;
}
// Completed forward declares
// Type namespace: UnityEngine.Experimental.XR
namespace UnityEngine::Experimental::XR {
  // Forward declaring type: PlaneUpdatedEventArgs
  struct PlaneUpdatedEventArgs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::XR::PlaneUpdatedEventArgs, "UnityEngine.Experimental.XR", "PlaneUpdatedEventArgs");
// Type namespace: UnityEngine.Experimental.XR
namespace UnityEngine::Experimental::XR {
  // Size: 0x64
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Experimental.XR.PlaneUpdatedEventArgs
  // [TokenAttribute] Offset: FFFFFFFF
  struct PlaneUpdatedEventArgs/*, public ::System::ValueType*/ {
    public:
    public:
    // [DebuggerBrowsableAttribute] Offset: 0xA8F92C
    // [CompilerGeneratedAttribute] Offset: 0xA8F92C
    // private UnityEngine.Experimental.XR.XRPlaneSubsystem <PlaneSubsystem>k__BackingField
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::Experimental::XR::XRPlaneSubsystem* PlaneSubsystem;
    // Field size check
    static_assert(sizeof(::UnityEngine::Experimental::XR::XRPlaneSubsystem*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xA8F968
    // [DebuggerBrowsableAttribute] Offset: 0xA8F968
    // private UnityEngine.Experimental.XR.BoundedPlane <Plane>k__BackingField
    // Size: 0x5C
    // Offset: 0x8
    ::UnityEngine::Experimental::XR::BoundedPlane Plane;
    // Field size check
    static_assert(sizeof(::UnityEngine::Experimental::XR::BoundedPlane) == 0x5C);
    public:
    // Creating value type constructor for type: PlaneUpdatedEventArgs
    constexpr PlaneUpdatedEventArgs(::UnityEngine::Experimental::XR::XRPlaneSubsystem* PlaneSubsystem_ = {}, ::UnityEngine::Experimental::XR::BoundedPlane Plane_ = {}) noexcept : PlaneSubsystem{PlaneSubsystem_}, Plane{Plane_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private UnityEngine.Experimental.XR.XRPlaneSubsystem <PlaneSubsystem>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Experimental::XR::XRPlaneSubsystem*& dyn_$PlaneSubsystem$k__BackingField();
    // Get instance field reference: private UnityEngine.Experimental.XR.BoundedPlane <Plane>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Experimental::XR::BoundedPlane& dyn_$Plane$k__BackingField();
    // System.Void set_PlaneSubsystem(UnityEngine.Experimental.XR.XRPlaneSubsystem value)
    // Offset: 0xBD2414
    void set_PlaneSubsystem(::UnityEngine::Experimental::XR::XRPlaneSubsystem* value);
    // System.Void set_Plane(UnityEngine.Experimental.XR.BoundedPlane value)
    // Offset: 0xBD241C
    void set_Plane(::UnityEngine::Experimental::XR::BoundedPlane value);
  }; // UnityEngine.Experimental.XR.PlaneUpdatedEventArgs
  #pragma pack(pop)
  static check_size<sizeof(PlaneUpdatedEventArgs), 8 + sizeof(::UnityEngine::Experimental::XR::BoundedPlane)> __UnityEngine_Experimental_XR_PlaneUpdatedEventArgsSizeCheck;
  static_assert(sizeof(PlaneUpdatedEventArgs) == 0x64);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Experimental::XR::PlaneUpdatedEventArgs::set_PlaneSubsystem
// Il2CppName: set_PlaneSubsystem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::XR::PlaneUpdatedEventArgs::*)(::UnityEngine::Experimental::XR::XRPlaneSubsystem*)>(&UnityEngine::Experimental::XR::PlaneUpdatedEventArgs::set_PlaneSubsystem)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.XR", "XRPlaneSubsystem")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::XR::PlaneUpdatedEventArgs), "set_PlaneSubsystem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::XR::PlaneUpdatedEventArgs::set_Plane
// Il2CppName: set_Plane
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::XR::PlaneUpdatedEventArgs::*)(::UnityEngine::Experimental::XR::BoundedPlane)>(&UnityEngine::Experimental::XR::PlaneUpdatedEventArgs::set_Plane)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.XR", "BoundedPlane")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::XR::PlaneUpdatedEventArgs), "set_Plane", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};