// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: SteamVR_TrackedObject/EIndex
#include "GlobalNamespace/SteamVR_TrackedObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SteamVR_Frustum
  class SteamVR_Frustum;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SteamVR_Frustum);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SteamVR_Frustum*, "", "SteamVR_Frustum");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_Frustum
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: FFFFFFFF
  // [RequireComponent] Offset: ACE8B8
  class SteamVR_Frustum : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public SteamVR_TrackedObject/EIndex index
    // Size: 0x4
    // Offset: 0x18
    ::GlobalNamespace::SteamVR_TrackedObject::EIndex index;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SteamVR_TrackedObject::EIndex) == 0x4);
    // public System.Single fovLeft
    // Size: 0x4
    // Offset: 0x1C
    float fovLeft;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single fovRight
    // Size: 0x4
    // Offset: 0x20
    float fovRight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single fovTop
    // Size: 0x4
    // Offset: 0x24
    float fovTop;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single fovBottom
    // Size: 0x4
    // Offset: 0x28
    float fovBottom;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single nearZ
    // Size: 0x4
    // Offset: 0x2C
    float nearZ;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single farZ
    // Size: 0x4
    // Offset: 0x30
    float farZ;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public SteamVR_TrackedObject/EIndex index
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SteamVR_TrackedObject::EIndex& dyn_index();
    // Get instance field reference: public System.Single fovLeft
    [[deprecated("Use field access instead!")]] float& dyn_fovLeft();
    // Get instance field reference: public System.Single fovRight
    [[deprecated("Use field access instead!")]] float& dyn_fovRight();
    // Get instance field reference: public System.Single fovTop
    [[deprecated("Use field access instead!")]] float& dyn_fovTop();
    // Get instance field reference: public System.Single fovBottom
    [[deprecated("Use field access instead!")]] float& dyn_fovBottom();
    // Get instance field reference: public System.Single nearZ
    [[deprecated("Use field access instead!")]] float& dyn_nearZ();
    // Get instance field reference: public System.Single farZ
    [[deprecated("Use field access instead!")]] float& dyn_farZ();
    // public System.Void UpdateModel()
    // Offset: 0xE08230
    void UpdateModel();
    // private System.Void OnDeviceConnected(System.Int32 i, System.Boolean connected)
    // Offset: 0xE08BF4
    void OnDeviceConnected(int i, bool connected);
    // private System.Void OnEnable()
    // Offset: 0xE08DBC
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0xE08EB4
    void OnDisable();
    // public System.Void .ctor()
    // Offset: 0xE08FAC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_Frustum* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SteamVR_Frustum::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_Frustum*, creationType>()));
    }
  }; // SteamVR_Frustum
  #pragma pack(pop)
  static check_size<sizeof(SteamVR_Frustum), 48 + sizeof(float)> __GlobalNamespace_SteamVR_FrustumSizeCheck;
  static_assert(sizeof(SteamVR_Frustum) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Frustum::UpdateModel
// Il2CppName: UpdateModel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Frustum::*)()>(&GlobalNamespace::SteamVR_Frustum::UpdateModel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Frustum*), "UpdateModel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Frustum::OnDeviceConnected
// Il2CppName: OnDeviceConnected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Frustum::*)(int, bool)>(&GlobalNamespace::SteamVR_Frustum::OnDeviceConnected)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* connected = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Frustum*), "OnDeviceConnected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i, connected});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Frustum::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Frustum::*)()>(&GlobalNamespace::SteamVR_Frustum::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Frustum*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Frustum::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Frustum::*)()>(&GlobalNamespace::SteamVR_Frustum::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Frustum*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Frustum::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!