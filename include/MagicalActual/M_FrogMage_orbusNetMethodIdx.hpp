// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MagicalActual.M_FrogMage
#include "MagicalActual/M_FrogMage.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::M_FrogMage::orbusNetMethodIdx, "MagicalActual", "M_FrogMage/orbusNetMethodIdx");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.M_FrogMage/orbusNetMethodIdx
  // [TokenAttribute] Offset: FFFFFFFF
  struct M_FrogMage::orbusNetMethodIdx/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: orbusNetMethodIdx
    constexpr orbusNetMethodIdx(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public MagicalActual.M_FrogMage/orbusNetMethodIdx FKAMKDENFCD
    static constexpr const int FKAMKDENFCD = 1;
    // Get static field: static public MagicalActual.M_FrogMage/orbusNetMethodIdx FKAMKDENFCD
    static ::MagicalActual::M_FrogMage::orbusNetMethodIdx _get_FKAMKDENFCD();
    // Set static field: static public MagicalActual.M_FrogMage/orbusNetMethodIdx FKAMKDENFCD
    static void _set_FKAMKDENFCD(::MagicalActual::M_FrogMage::orbusNetMethodIdx value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // MagicalActual.M_FrogMage/orbusNetMethodIdx
  #pragma pack(pop)
  static check_size<sizeof(M_FrogMage::orbusNetMethodIdx), 0 + sizeof(int)> __MagicalActual_M_FrogMage_orbusNetMethodIdxSizeCheck;
  static_assert(sizeof(M_FrogMage::orbusNetMethodIdx) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"