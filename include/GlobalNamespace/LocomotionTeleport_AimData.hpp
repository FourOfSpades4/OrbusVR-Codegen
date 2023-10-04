// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LocomotionTeleport
#include "GlobalNamespace/LocomotionTeleport.hpp"
// Including type: UnityEngine.RaycastHit
#include "UnityEngine/RaycastHit.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LocomotionTeleport::AimData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocomotionTeleport::AimData*, "", "LocomotionTeleport/AimData");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: LocomotionTeleport/AimData
  // [TokenAttribute] Offset: FFFFFFFF
  class LocomotionTeleport::AimData : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.RaycastHit TargetHitInfo
    // Size: 0x2C
    // Offset: 0x10
    ::UnityEngine::RaycastHit TargetHitInfo;
    // Field size check
    static_assert(sizeof(::UnityEngine::RaycastHit) == 0x2C);
    // public System.Boolean TargetValid
    // Size: 0x1
    // Offset: 0x3C
    bool TargetValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Nullable`1<UnityEngine.Vector3> Destination
    // Size: 0xFFFFFFFF
    // Offset: 0x40
    ::System::Nullable_1<::UnityEngine::Vector3> Destination;
    // public System.Single Radius
    // Size: 0x4
    // Offset: 0x50
    float Radius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xADBB90
    // private System.Collections.Generic.List`1<UnityEngine.Vector3> <Points>k__BackingField
    // Size: 0x8
    // Offset: 0x58
    ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Points;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.RaycastHit TargetHitInfo
    [[deprecated("Use field access instead!")]] ::UnityEngine::RaycastHit& dyn_TargetHitInfo();
    // Get instance field reference: public System.Boolean TargetValid
    [[deprecated("Use field access instead!")]] bool& dyn_TargetValid();
    // Get instance field reference: public System.Nullable`1<UnityEngine.Vector3> Destination
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::UnityEngine::Vector3>& dyn_Destination();
    // Get instance field reference: public System.Single Radius
    [[deprecated("Use field access instead!")]] float& dyn_Radius();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.Vector3> <Points>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& dyn_$Points$k__BackingField();
    // public System.Void .ctor()
    // Offset: 0x1211FBC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocomotionTeleport::AimData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LocomotionTeleport::AimData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocomotionTeleport::AimData*, creationType>()));
    }
    // public System.Collections.Generic.List`1<UnityEngine.Vector3> get_Points()
    // Offset: 0x1212038
    ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* get_Points();
    // private System.Void set_Points(System.Collections.Generic.List`1<UnityEngine.Vector3> value)
    // Offset: 0x1212030
    void set_Points(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value);
    // public System.Void Reset()
    // Offset: 0x1212040
    void Reset();
  }; // LocomotionTeleport/AimData
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LocomotionTeleport::AimData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LocomotionTeleport::AimData::get_Points
// Il2CppName: get_Points
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Vector3>* (GlobalNamespace::LocomotionTeleport::AimData::*)()>(&GlobalNamespace::LocomotionTeleport::AimData::get_Points)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocomotionTeleport::AimData*), "get_Points", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LocomotionTeleport::AimData::set_Points
// Il2CppName: set_Points
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocomotionTeleport::AimData::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*)>(&GlobalNamespace::LocomotionTeleport::AimData::set_Points)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocomotionTeleport::AimData*), "set_Points", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LocomotionTeleport::AimData::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocomotionTeleport::AimData::*)()>(&GlobalNamespace::LocomotionTeleport::AimData::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocomotionTeleport::AimData*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};