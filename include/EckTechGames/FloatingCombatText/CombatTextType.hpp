// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: EckTechGames.FloatingCombatText
namespace EckTechGames::FloatingCombatText {
  // Forward declaring type: CombatTextType
  struct CombatTextType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::EckTechGames::FloatingCombatText::CombatTextType, "EckTechGames.FloatingCombatText", "CombatTextType");
// Type namespace: EckTechGames.FloatingCombatText
namespace EckTechGames::FloatingCombatText {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: EckTechGames.FloatingCombatText.CombatTextType
  // [TokenAttribute] Offset: FFFFFFFF
  struct CombatTextType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: CombatTextType
    constexpr CombatTextType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public EckTechGames.FloatingCombatText.CombatTextType UnsetInvalid
    static constexpr const int UnsetInvalid = 0;
    // Get static field: static public EckTechGames.FloatingCombatText.CombatTextType UnsetInvalid
    static ::EckTechGames::FloatingCombatText::CombatTextType _get_UnsetInvalid();
    // Set static field: static public EckTechGames.FloatingCombatText.CombatTextType UnsetInvalid
    static void _set_UnsetInvalid(::EckTechGames::FloatingCombatText::CombatTextType value);
    // static field const value: static public EckTechGames.FloatingCombatText.CombatTextType Miss
    static constexpr const int Miss = 1;
    // Get static field: static public EckTechGames.FloatingCombatText.CombatTextType Miss
    static ::EckTechGames::FloatingCombatText::CombatTextType _get_Miss();
    // Set static field: static public EckTechGames.FloatingCombatText.CombatTextType Miss
    static void _set_Miss(::EckTechGames::FloatingCombatText::CombatTextType value);
    // static field const value: static public EckTechGames.FloatingCombatText.CombatTextType Hit
    static constexpr const int Hit = 2;
    // Get static field: static public EckTechGames.FloatingCombatText.CombatTextType Hit
    static ::EckTechGames::FloatingCombatText::CombatTextType _get_Hit();
    // Set static field: static public EckTechGames.FloatingCombatText.CombatTextType Hit
    static void _set_Hit(::EckTechGames::FloatingCombatText::CombatTextType value);
    // static field const value: static public EckTechGames.FloatingCombatText.CombatTextType CriticalHit
    static constexpr const int CriticalHit = 3;
    // Get static field: static public EckTechGames.FloatingCombatText.CombatTextType CriticalHit
    static ::EckTechGames::FloatingCombatText::CombatTextType _get_CriticalHit();
    // Set static field: static public EckTechGames.FloatingCombatText.CombatTextType CriticalHit
    static void _set_CriticalHit(::EckTechGames::FloatingCombatText::CombatTextType value);
    // static field const value: static public EckTechGames.FloatingCombatText.CombatTextType Heal
    static constexpr const int Heal = 4;
    // Get static field: static public EckTechGames.FloatingCombatText.CombatTextType Heal
    static ::EckTechGames::FloatingCombatText::CombatTextType _get_Heal();
    // Set static field: static public EckTechGames.FloatingCombatText.CombatTextType Heal
    static void _set_Heal(::EckTechGames::FloatingCombatText::CombatTextType value);
    // static field const value: static public EckTechGames.FloatingCombatText.CombatTextType XP
    static constexpr const int XP = 5;
    // Get static field: static public EckTechGames.FloatingCombatText.CombatTextType XP
    static ::EckTechGames::FloatingCombatText::CombatTextType _get_XP();
    // Set static field: static public EckTechGames.FloatingCombatText.CombatTextType XP
    static void _set_XP(::EckTechGames::FloatingCombatText::CombatTextType value);
    // static field const value: static public EckTechGames.FloatingCombatText.CombatTextType Rune
    static constexpr const int Rune = 6;
    // Get static field: static public EckTechGames.FloatingCombatText.CombatTextType Rune
    static ::EckTechGames::FloatingCombatText::CombatTextType _get_Rune();
    // Set static field: static public EckTechGames.FloatingCombatText.CombatTextType Rune
    static void _set_Rune(::EckTechGames::FloatingCombatText::CombatTextType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // EckTechGames.FloatingCombatText.CombatTextType
  #pragma pack(pop)
  static check_size<sizeof(CombatTextType), 0 + sizeof(int)> __EckTechGames_FloatingCombatText_CombatTextTypeSizeCheck;
  static_assert(sizeof(CombatTextType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"