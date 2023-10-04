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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Camera
  class Camera;
}
// Forward declaring namespace: EckTechGames::FloatingCombatText
namespace EckTechGames::FloatingCombatText {
  // Forward declaring type: CombatTextController
  class CombatTextController;
  // Forward declaring type: CombatTextType
  struct CombatTextType;
}
// Completed forward declares
// Type namespace: EckTechGames.FloatingCombatText
namespace EckTechGames::FloatingCombatText {
  // Forward declaring type: CombatTextAnchorController
  class CombatTextAnchorController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::EckTechGames::FloatingCombatText::CombatTextAnchorController);
DEFINE_IL2CPP_ARG_TYPE(::EckTechGames::FloatingCombatText::CombatTextAnchorController*, "EckTechGames.FloatingCombatText", "CombatTextAnchorController");
// Type namespace: EckTechGames.FloatingCombatText
namespace EckTechGames::FloatingCombatText {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: EckTechGames.FloatingCombatText.CombatTextAnchorController
  // [TokenAttribute] Offset: FFFFFFFF
  class CombatTextAnchorController : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.GameObject targetGameObject
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::GameObject* targetGameObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.Camera mainCamera
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Camera* mainCamera;
    // Field size check
    static_assert(sizeof(::UnityEngine::Camera*) == 0x8);
    // public System.Single ageInSeconds
    // Size: 0x4
    // Offset: 0x28
    float ageInSeconds;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: ageInSeconds and: combatTextController
    char __padding2[0x4] = {};
    // protected EckTechGames.FloatingCombatText.CombatTextController combatTextController
    // Size: 0x8
    // Offset: 0x30
    ::EckTechGames::FloatingCombatText::CombatTextController* combatTextController;
    // Field size check
    static_assert(sizeof(::EckTechGames::FloatingCombatText::CombatTextController*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.GameObject targetGameObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_targetGameObject();
    // Get instance field reference: public UnityEngine.Camera mainCamera
    [[deprecated("Use field access instead!")]] ::UnityEngine::Camera*& dyn_mainCamera();
    // Get instance field reference: public System.Single ageInSeconds
    [[deprecated("Use field access instead!")]] float& dyn_ageInSeconds();
    // Get instance field reference: protected EckTechGames.FloatingCombatText.CombatTextController combatTextController
    [[deprecated("Use field access instead!")]] ::EckTechGames::FloatingCombatText::CombatTextController*& dyn_combatTextController();
    // public System.Boolean get_combatTextShown()
    // Offset: 0xF44F0C
    bool get_combatTextShown();
    // private System.Void Awake()
    // Offset: 0xF44F38
    void Awake();
    // private System.Void Update()
    // Offset: 0xF44F90
    void Update();
    // public System.Void ShowCombatText(UnityEngine.GameObject targetGameObject, EckTechGames.FloatingCombatText.CombatTextType combatTextType, System.String combatText)
    // Offset: 0xF45014
    void ShowCombatText(::UnityEngine::GameObject* targetGameObject, ::EckTechGames::FloatingCombatText::CombatTextType combatTextType, ::StringW combatText);
    // public System.Void ShowCombatText(UnityEngine.GameObject targetGameObject, EckTechGames.FloatingCombatText.CombatTextType combatTextType, System.Int32 combatNumber)
    // Offset: 0xF4510C
    void ShowCombatText(::UnityEngine::GameObject* targetGameObject, ::EckTechGames::FloatingCombatText::CombatTextType combatTextType, int combatNumber);
    // public System.Void ResetForReuse()
    // Offset: 0xF451CC
    void ResetForReuse();
    // protected System.Void UpdatePosition()
    // Offset: 0xF451D4
    void UpdatePosition();
    // public System.Void .ctor()
    // Offset: 0xF451D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CombatTextAnchorController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::EckTechGames::FloatingCombatText::CombatTextAnchorController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CombatTextAnchorController*, creationType>()));
    }
  }; // EckTechGames.FloatingCombatText.CombatTextAnchorController
  #pragma pack(pop)
  static check_size<sizeof(CombatTextAnchorController), 48 + sizeof(::EckTechGames::FloatingCombatText::CombatTextController*)> __EckTechGames_FloatingCombatText_CombatTextAnchorControllerSizeCheck;
  static_assert(sizeof(CombatTextAnchorController) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: EckTechGames::FloatingCombatText::CombatTextAnchorController::get_combatTextShown
// Il2CppName: get_combatTextShown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (EckTechGames::FloatingCombatText::CombatTextAnchorController::*)()>(&EckTechGames::FloatingCombatText::CombatTextAnchorController::get_combatTextShown)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(EckTechGames::FloatingCombatText::CombatTextAnchorController*), "get_combatTextShown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: EckTechGames::FloatingCombatText::CombatTextAnchorController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (EckTechGames::FloatingCombatText::CombatTextAnchorController::*)()>(&EckTechGames::FloatingCombatText::CombatTextAnchorController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(EckTechGames::FloatingCombatText::CombatTextAnchorController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: EckTechGames::FloatingCombatText::CombatTextAnchorController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (EckTechGames::FloatingCombatText::CombatTextAnchorController::*)()>(&EckTechGames::FloatingCombatText::CombatTextAnchorController::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(EckTechGames::FloatingCombatText::CombatTextAnchorController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: EckTechGames::FloatingCombatText::CombatTextAnchorController::ShowCombatText
// Il2CppName: ShowCombatText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (EckTechGames::FloatingCombatText::CombatTextAnchorController::*)(::UnityEngine::GameObject*, ::EckTechGames::FloatingCombatText::CombatTextType, ::StringW)>(&EckTechGames::FloatingCombatText::CombatTextAnchorController::ShowCombatText)> {
  static const MethodInfo* get() {
    static auto* targetGameObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* combatTextType = &::il2cpp_utils::GetClassFromName("EckTechGames.FloatingCombatText", "CombatTextType")->byval_arg;
    static auto* combatText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(EckTechGames::FloatingCombatText::CombatTextAnchorController*), "ShowCombatText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetGameObject, combatTextType, combatText});
  }
};
// Writing MetadataGetter for method: EckTechGames::FloatingCombatText::CombatTextAnchorController::ShowCombatText
// Il2CppName: ShowCombatText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (EckTechGames::FloatingCombatText::CombatTextAnchorController::*)(::UnityEngine::GameObject*, ::EckTechGames::FloatingCombatText::CombatTextType, int)>(&EckTechGames::FloatingCombatText::CombatTextAnchorController::ShowCombatText)> {
  static const MethodInfo* get() {
    static auto* targetGameObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* combatTextType = &::il2cpp_utils::GetClassFromName("EckTechGames.FloatingCombatText", "CombatTextType")->byval_arg;
    static auto* combatNumber = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(EckTechGames::FloatingCombatText::CombatTextAnchorController*), "ShowCombatText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetGameObject, combatTextType, combatNumber});
  }
};
// Writing MetadataGetter for method: EckTechGames::FloatingCombatText::CombatTextAnchorController::ResetForReuse
// Il2CppName: ResetForReuse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (EckTechGames::FloatingCombatText::CombatTextAnchorController::*)()>(&EckTechGames::FloatingCombatText::CombatTextAnchorController::ResetForReuse)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(EckTechGames::FloatingCombatText::CombatTextAnchorController*), "ResetForReuse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: EckTechGames::FloatingCombatText::CombatTextAnchorController::UpdatePosition
// Il2CppName: UpdatePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (EckTechGames::FloatingCombatText::CombatTextAnchorController::*)()>(&EckTechGames::FloatingCombatText::CombatTextAnchorController::UpdatePosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(EckTechGames::FloatingCombatText::CombatTextAnchorController*), "UpdatePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: EckTechGames::FloatingCombatText::CombatTextAnchorController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!