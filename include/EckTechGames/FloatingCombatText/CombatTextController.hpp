// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: EckTechGames.FloatingCombatText.CombatTextType
#include "EckTechGames/FloatingCombatText/CombatTextType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Text
  class Text;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
}
// Completed forward declares
// Type namespace: EckTechGames.FloatingCombatText
namespace EckTechGames::FloatingCombatText {
  // Forward declaring type: CombatTextController
  class CombatTextController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::EckTechGames::FloatingCombatText::CombatTextController);
DEFINE_IL2CPP_ARG_TYPE(::EckTechGames::FloatingCombatText::CombatTextController*, "EckTechGames.FloatingCombatText", "CombatTextController");
// Type namespace: EckTechGames.FloatingCombatText
namespace EckTechGames::FloatingCombatText {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: EckTechGames.FloatingCombatText.CombatTextController
  // [TokenAttribute] Offset: FFFFFFFF
  class CombatTextController : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public EckTechGames.FloatingCombatText.CombatTextType combatTextType
    // Size: 0x4
    // Offset: 0x18
    ::EckTechGames::FloatingCombatText::CombatTextType combatTextType;
    // Field size check
    static_assert(sizeof(::EckTechGames::FloatingCombatText::CombatTextType) == 0x4);
    // public System.Boolean combatTextShown
    // Size: 0x1
    // Offset: 0x1C
    bool combatTextShown;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: combatTextShown and: combatText
    char __padding1[0x3] = {};
    // protected UnityEngine.UI.Text combatText
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::UI::Text* combatText;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Text*) == 0x8);
    // protected System.Int32 combatNumber
    // Size: 0x4
    // Offset: 0x28
    int combatNumber;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: combatNumber and: combatTextAnimator
    char __padding3[0x4] = {};
    // protected UnityEngine.Animator combatTextAnimator
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Animator* combatTextAnimator;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animator*) == 0x8);
    // protected System.Int32 combatTextTypeHash
    // Size: 0x4
    // Offset: 0x38
    int combatTextTypeHash;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public EckTechGames.FloatingCombatText.CombatTextType combatTextType
    [[deprecated("Use field access instead!")]] ::EckTechGames::FloatingCombatText::CombatTextType& dyn_combatTextType();
    // Get instance field reference: public System.Boolean combatTextShown
    [[deprecated("Use field access instead!")]] bool& dyn_combatTextShown();
    // Get instance field reference: protected UnityEngine.UI.Text combatText
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Text*& dyn_combatText();
    // Get instance field reference: protected System.Int32 combatNumber
    [[deprecated("Use field access instead!")]] int& dyn_combatNumber();
    // Get instance field reference: protected UnityEngine.Animator combatTextAnimator
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animator*& dyn_combatTextAnimator();
    // Get instance field reference: protected System.Int32 combatTextTypeHash
    [[deprecated("Use field access instead!")]] int& dyn_combatTextTypeHash();
    // private System.Void Awake()
    // Offset: 0xF451E0
    void Awake();
    // private System.Void Update()
    // Offset: 0xF45250
    void Update();
    // public System.Void ShowCombatText(EckTechGames.FloatingCombatText.CombatTextType combatTextType, System.String combatText)
    // Offset: 0xF45088
    void ShowCombatText(::EckTechGames::FloatingCombatText::CombatTextType combatTextType, ::StringW combatText);
    // public System.Void ShowCombatText(EckTechGames.FloatingCombatText.CombatTextType combatTextType, System.Int32 combatNumber)
    // Offset: 0xF45180
    void ShowCombatText(::EckTechGames::FloatingCombatText::CombatTextType combatTextType, int combatNumber);
    // protected System.Void SetAnimatorsCombatTextType()
    // Offset: 0xF452A8
    void SetAnimatorsCombatTextType();
    // public System.Void .ctor()
    // Offset: 0xF45330
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CombatTextController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::EckTechGames::FloatingCombatText::CombatTextController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CombatTextController*, creationType>()));
    }
  }; // EckTechGames.FloatingCombatText.CombatTextController
  #pragma pack(pop)
  static check_size<sizeof(CombatTextController), 56 + sizeof(int)> __EckTechGames_FloatingCombatText_CombatTextControllerSizeCheck;
  static_assert(sizeof(CombatTextController) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: EckTechGames::FloatingCombatText::CombatTextController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (EckTechGames::FloatingCombatText::CombatTextController::*)()>(&EckTechGames::FloatingCombatText::CombatTextController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(EckTechGames::FloatingCombatText::CombatTextController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: EckTechGames::FloatingCombatText::CombatTextController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (EckTechGames::FloatingCombatText::CombatTextController::*)()>(&EckTechGames::FloatingCombatText::CombatTextController::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(EckTechGames::FloatingCombatText::CombatTextController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: EckTechGames::FloatingCombatText::CombatTextController::ShowCombatText
// Il2CppName: ShowCombatText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (EckTechGames::FloatingCombatText::CombatTextController::*)(::EckTechGames::FloatingCombatText::CombatTextType, ::StringW)>(&EckTechGames::FloatingCombatText::CombatTextController::ShowCombatText)> {
  static const MethodInfo* get() {
    static auto* combatTextType = &::il2cpp_utils::GetClassFromName("EckTechGames.FloatingCombatText", "CombatTextType")->byval_arg;
    static auto* combatText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(EckTechGames::FloatingCombatText::CombatTextController*), "ShowCombatText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{combatTextType, combatText});
  }
};
// Writing MetadataGetter for method: EckTechGames::FloatingCombatText::CombatTextController::ShowCombatText
// Il2CppName: ShowCombatText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (EckTechGames::FloatingCombatText::CombatTextController::*)(::EckTechGames::FloatingCombatText::CombatTextType, int)>(&EckTechGames::FloatingCombatText::CombatTextController::ShowCombatText)> {
  static const MethodInfo* get() {
    static auto* combatTextType = &::il2cpp_utils::GetClassFromName("EckTechGames.FloatingCombatText", "CombatTextType")->byval_arg;
    static auto* combatNumber = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(EckTechGames::FloatingCombatText::CombatTextController*), "ShowCombatText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{combatTextType, combatNumber});
  }
};
// Writing MetadataGetter for method: EckTechGames::FloatingCombatText::CombatTextController::SetAnimatorsCombatTextType
// Il2CppName: SetAnimatorsCombatTextType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (EckTechGames::FloatingCombatText::CombatTextController::*)()>(&EckTechGames::FloatingCombatText::CombatTextController::SetAnimatorsCombatTextType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(EckTechGames::FloatingCombatText::CombatTextController*), "SetAnimatorsCombatTextType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: EckTechGames::FloatingCombatText::CombatTextController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
