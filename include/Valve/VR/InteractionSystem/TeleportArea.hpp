// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.InteractionSystem.TeleportMarkerBase
#include "Valve/VR/InteractionSystem/TeleportMarkerBase.hpp"
// Including type: UnityEngine.Bounds
#include "UnityEngine/Bounds.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: Valve.VR.InteractionSystem
namespace Valve::VR::InteractionSystem {
  // Forward declaring type: TeleportArea
  class TeleportArea;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Valve::VR::InteractionSystem::TeleportArea);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::InteractionSystem::TeleportArea*, "Valve.VR.InteractionSystem", "TeleportArea");
// Type namespace: Valve.VR.InteractionSystem
namespace Valve::VR::InteractionSystem {
  // Size: 0x75
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.InteractionSystem.TeleportArea
  // [TokenAttribute] Offset: FFFFFFFF
  class TeleportArea : public ::Valve::VR::InteractionSystem::TeleportMarkerBase {
    public:
    // Writing base type padding for base size: 0x1A to desired offset: 0x1C
    char ___base_padding[0x2] = {};
    public:
    // [CompilerGeneratedAttribute] Offset: 0xADE900
    // private UnityEngine.Bounds <meshBounds>k__BackingField
    // Size: 0x18
    // Offset: 0x1C
    ::UnityEngine::Bounds meshBounds;
    // Field size check
    static_assert(sizeof(::UnityEngine::Bounds) == 0x18);
    // Padding between fields: meshBounds and: areaMesh
    char __padding0[0x4] = {};
    // private UnityEngine.MeshRenderer areaMesh
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::MeshRenderer* areaMesh;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshRenderer*) == 0x8);
    // private System.Int32 tintColorId
    // Size: 0x4
    // Offset: 0x40
    int tintColorId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.Color visibleTintColor
    // Size: 0x10
    // Offset: 0x44
    ::UnityEngine::Color visibleTintColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color highlightedTintColor
    // Size: 0x10
    // Offset: 0x54
    ::UnityEngine::Color highlightedTintColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color lockedTintColor
    // Size: 0x10
    // Offset: 0x64
    ::UnityEngine::Color lockedTintColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.Boolean highlighted
    // Size: 0x1
    // Offset: 0x74
    bool highlighted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private UnityEngine.Bounds <meshBounds>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Bounds& dyn_$meshBounds$k__BackingField();
    // Get instance field reference: private UnityEngine.MeshRenderer areaMesh
    [[deprecated("Use field access instead!")]] ::UnityEngine::MeshRenderer*& dyn_areaMesh();
    // Get instance field reference: private System.Int32 tintColorId
    [[deprecated("Use field access instead!")]] int& dyn_tintColorId();
    // Get instance field reference: private UnityEngine.Color visibleTintColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_visibleTintColor();
    // Get instance field reference: private UnityEngine.Color highlightedTintColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_highlightedTintColor();
    // Get instance field reference: private UnityEngine.Color lockedTintColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_lockedTintColor();
    // Get instance field reference: private System.Boolean highlighted
    [[deprecated("Use field access instead!")]] bool& dyn_highlighted();
    // public UnityEngine.Bounds get_meshBounds()
    // Offset: 0xDC7BC0
    ::UnityEngine::Bounds get_meshBounds();
    // private System.Void set_meshBounds(UnityEngine.Bounds value)
    // Offset: 0xDC7BD4
    void set_meshBounds(::UnityEngine::Bounds value);
    // public System.Void Awake()
    // Offset: 0xDC7BE8
    void Awake();
    // public System.Void Start()
    // Offset: 0xDC7D80
    void Start();
    // public System.Void UpdateVisualsInEditor()
    // Offset: 0xDC8194
    void UpdateVisualsInEditor();
    // private System.Boolean CalculateBounds()
    // Offset: 0xDC7C5C
    bool CalculateBounds();
    // private UnityEngine.Color GetTintColor()
    // Offset: 0xDC8074
    ::UnityEngine::Color GetTintColor();
    // public override System.Boolean ShouldActivate(UnityEngine.Vector3 playerPosition)
    // Offset: 0xDC7E9C
    // Implemented from: Valve.VR.InteractionSystem.TeleportMarkerBase
    // Base method: System.Boolean TeleportMarkerBase::ShouldActivate(UnityEngine.Vector3 playerPosition)
    bool ShouldActivate(::UnityEngine::Vector3 playerPosition);
    // public override System.Boolean ShouldMovePlayer()
    // Offset: 0xDC7EA4
    // Implemented from: Valve.VR.InteractionSystem.TeleportMarkerBase
    // Base method: System.Boolean TeleportMarkerBase::ShouldMovePlayer()
    bool ShouldMovePlayer();
    // public override System.Void Highlight(System.Boolean highlight)
    // Offset: 0xDC7EAC
    // Implemented from: Valve.VR.InteractionSystem.TeleportMarkerBase
    // Base method: System.Void TeleportMarkerBase::Highlight(System.Boolean highlight)
    void Highlight(bool highlight);
    // public override System.Void SetAlpha(System.Single tintAlpha, System.Single alphaPercent)
    // Offset: 0xDC7F98
    // Implemented from: Valve.VR.InteractionSystem.TeleportMarkerBase
    // Base method: System.Void TeleportMarkerBase::SetAlpha(System.Single tintAlpha, System.Single alphaPercent)
    void SetAlpha(float tintAlpha, float alphaPercent);
    // public override System.Void UpdateVisuals()
    // Offset: 0xDC80D0
    // Implemented from: Valve.VR.InteractionSystem.TeleportMarkerBase
    // Base method: System.Void TeleportMarkerBase::UpdateVisuals()
    void UpdateVisuals();
    // public System.Void .ctor()
    // Offset: 0xDC8270
    // Implemented from: Valve.VR.InteractionSystem.TeleportMarkerBase
    // Base method: System.Void TeleportMarkerBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TeleportArea* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::InteractionSystem::TeleportArea::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TeleportArea*, creationType>()));
    }
  }; // Valve.VR.InteractionSystem.TeleportArea
  #pragma pack(pop)
  static check_size<sizeof(TeleportArea), 116 + sizeof(bool)> __Valve_VR_InteractionSystem_TeleportAreaSizeCheck;
  static_assert(sizeof(TeleportArea) == 0x75);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::TeleportArea::get_meshBounds
// Il2CppName: get_meshBounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Bounds (Valve::VR::InteractionSystem::TeleportArea::*)()>(&Valve::VR::InteractionSystem::TeleportArea::get_meshBounds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::TeleportArea*), "get_meshBounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::TeleportArea::set_meshBounds
// Il2CppName: set_meshBounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::TeleportArea::*)(::UnityEngine::Bounds)>(&Valve::VR::InteractionSystem::TeleportArea::set_meshBounds)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Bounds")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::TeleportArea*), "set_meshBounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::TeleportArea::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::TeleportArea::*)()>(&Valve::VR::InteractionSystem::TeleportArea::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::TeleportArea*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::TeleportArea::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::TeleportArea::*)()>(&Valve::VR::InteractionSystem::TeleportArea::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::TeleportArea*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::TeleportArea::UpdateVisualsInEditor
// Il2CppName: UpdateVisualsInEditor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::TeleportArea::*)()>(&Valve::VR::InteractionSystem::TeleportArea::UpdateVisualsInEditor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::TeleportArea*), "UpdateVisualsInEditor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::TeleportArea::CalculateBounds
// Il2CppName: CalculateBounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::InteractionSystem::TeleportArea::*)()>(&Valve::VR::InteractionSystem::TeleportArea::CalculateBounds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::TeleportArea*), "CalculateBounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::TeleportArea::GetTintColor
// Il2CppName: GetTintColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (Valve::VR::InteractionSystem::TeleportArea::*)()>(&Valve::VR::InteractionSystem::TeleportArea::GetTintColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::TeleportArea*), "GetTintColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::TeleportArea::ShouldActivate
// Il2CppName: ShouldActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::InteractionSystem::TeleportArea::*)(::UnityEngine::Vector3)>(&Valve::VR::InteractionSystem::TeleportArea::ShouldActivate)> {
  static const MethodInfo* get() {
    static auto* playerPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::TeleportArea*), "ShouldActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playerPosition});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::TeleportArea::ShouldMovePlayer
// Il2CppName: ShouldMovePlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::InteractionSystem::TeleportArea::*)()>(&Valve::VR::InteractionSystem::TeleportArea::ShouldMovePlayer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::TeleportArea*), "ShouldMovePlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::TeleportArea::Highlight
// Il2CppName: Highlight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::TeleportArea::*)(bool)>(&Valve::VR::InteractionSystem::TeleportArea::Highlight)> {
  static const MethodInfo* get() {
    static auto* highlight = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::TeleportArea*), "Highlight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{highlight});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::TeleportArea::SetAlpha
// Il2CppName: SetAlpha
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::TeleportArea::*)(float, float)>(&Valve::VR::InteractionSystem::TeleportArea::SetAlpha)> {
  static const MethodInfo* get() {
    static auto* tintAlpha = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* alphaPercent = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::TeleportArea*), "SetAlpha", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tintAlpha, alphaPercent});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::TeleportArea::UpdateVisuals
// Il2CppName: UpdateVisuals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::TeleportArea::*)()>(&Valve::VR::InteractionSystem::TeleportArea::UpdateVisuals)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::TeleportArea*), "UpdateVisuals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::TeleportArea::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!