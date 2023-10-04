// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: Valve.VR.InteractionSystem
namespace Valve::VR::InteractionSystem {
  // Forward declaring type: TeleportMarkerBase
  class TeleportMarkerBase;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Valve::VR::InteractionSystem::TeleportMarkerBase);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::InteractionSystem::TeleportMarkerBase*, "Valve.VR.InteractionSystem", "TeleportMarkerBase");
// Type namespace: Valve.VR.InteractionSystem
namespace Valve::VR::InteractionSystem {
  // Size: 0x1A
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.InteractionSystem.TeleportMarkerBase
  // [TokenAttribute] Offset: FFFFFFFF
  class TeleportMarkerBase : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.Boolean locked
    // Size: 0x1
    // Offset: 0x18
    bool locked;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean markerActive
    // Size: 0x1
    // Offset: 0x19
    bool markerActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Boolean locked
    [[deprecated("Use field access instead!")]] bool& dyn_locked();
    // Get instance field reference: public System.Boolean markerActive
    [[deprecated("Use field access instead!")]] bool& dyn_markerActive();
    // public System.Boolean get_showReticle()
    // Offset: 0xDC82DC
    bool get_showReticle();
    // public System.Void SetLocked(System.Boolean locked)
    // Offset: 0xDC82E4
    void SetLocked(bool locked);
    // public System.Void TeleportPlayer(UnityEngine.Vector3 pointedAtPosition)
    // Offset: 0xDC82F8
    void TeleportPlayer(::UnityEngine::Vector3 pointedAtPosition);
    // public System.Void UpdateVisuals()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void UpdateVisuals();
    // public System.Void Highlight(System.Boolean highlight)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Highlight(bool highlight);
    // public System.Void SetAlpha(System.Single tintAlpha, System.Single alphaPercent)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetAlpha(float tintAlpha, float alphaPercent);
    // public System.Boolean ShouldActivate(UnityEngine.Vector3 playerPosition)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool ShouldActivate(::UnityEngine::Vector3 playerPosition);
    // public System.Boolean ShouldMovePlayer()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool ShouldMovePlayer();
    // protected System.Void .ctor()
    // Offset: 0xDC82CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TeleportMarkerBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::InteractionSystem::TeleportMarkerBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TeleportMarkerBase*, creationType>()));
    }
  }; // Valve.VR.InteractionSystem.TeleportMarkerBase
  #pragma pack(pop)
  static check_size<sizeof(TeleportMarkerBase), 25 + sizeof(bool)> __Valve_VR_InteractionSystem_TeleportMarkerBaseSizeCheck;
  static_assert(sizeof(TeleportMarkerBase) == 0x1A);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::TeleportMarkerBase::get_showReticle
// Il2CppName: get_showReticle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::InteractionSystem::TeleportMarkerBase::*)()>(&Valve::VR::InteractionSystem::TeleportMarkerBase::get_showReticle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::TeleportMarkerBase*), "get_showReticle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::TeleportMarkerBase::SetLocked
// Il2CppName: SetLocked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::TeleportMarkerBase::*)(bool)>(&Valve::VR::InteractionSystem::TeleportMarkerBase::SetLocked)> {
  static const MethodInfo* get() {
    static auto* locked = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::TeleportMarkerBase*), "SetLocked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{locked});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::TeleportMarkerBase::TeleportPlayer
// Il2CppName: TeleportPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::TeleportMarkerBase::*)(::UnityEngine::Vector3)>(&Valve::VR::InteractionSystem::TeleportMarkerBase::TeleportPlayer)> {
  static const MethodInfo* get() {
    static auto* pointedAtPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::TeleportMarkerBase*), "TeleportPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointedAtPosition});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::TeleportMarkerBase::UpdateVisuals
// Il2CppName: UpdateVisuals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::TeleportMarkerBase::*)()>(&Valve::VR::InteractionSystem::TeleportMarkerBase::UpdateVisuals)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::TeleportMarkerBase*), "UpdateVisuals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::TeleportMarkerBase::Highlight
// Il2CppName: Highlight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::TeleportMarkerBase::*)(bool)>(&Valve::VR::InteractionSystem::TeleportMarkerBase::Highlight)> {
  static const MethodInfo* get() {
    static auto* highlight = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::TeleportMarkerBase*), "Highlight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{highlight});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::TeleportMarkerBase::SetAlpha
// Il2CppName: SetAlpha
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::TeleportMarkerBase::*)(float, float)>(&Valve::VR::InteractionSystem::TeleportMarkerBase::SetAlpha)> {
  static const MethodInfo* get() {
    static auto* tintAlpha = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* alphaPercent = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::TeleportMarkerBase*), "SetAlpha", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tintAlpha, alphaPercent});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::TeleportMarkerBase::ShouldActivate
// Il2CppName: ShouldActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::InteractionSystem::TeleportMarkerBase::*)(::UnityEngine::Vector3)>(&Valve::VR::InteractionSystem::TeleportMarkerBase::ShouldActivate)> {
  static const MethodInfo* get() {
    static auto* playerPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::TeleportMarkerBase*), "ShouldActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playerPosition});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::TeleportMarkerBase::ShouldMovePlayer
// Il2CppName: ShouldMovePlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::InteractionSystem::TeleportMarkerBase::*)()>(&Valve::VR::InteractionSystem::TeleportMarkerBase::ShouldMovePlayer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::TeleportMarkerBase*), "ShouldMovePlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::TeleportMarkerBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!