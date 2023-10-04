// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MagicalActual.Runemage
#include "MagicalActual/Runemage.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::Runemage::orbusIncomingMethodIdx, "MagicalActual", "Runemage/orbusIncomingMethodIdx");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.Runemage/orbusIncomingMethodIdx
  // [TokenAttribute] Offset: FFFFFFFF
  struct Runemage::orbusIncomingMethodIdx/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: orbusIncomingMethodIdx
    constexpr orbusIncomingMethodIdx(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public MagicalActual.Runemage/orbusIncomingMethodIdx LFLHGEMIBBI
    static constexpr const int LFLHGEMIBBI = 1;
    // Get static field: static public MagicalActual.Runemage/orbusIncomingMethodIdx LFLHGEMIBBI
    static ::MagicalActual::Runemage::orbusIncomingMethodIdx _get_LFLHGEMIBBI();
    // Set static field: static public MagicalActual.Runemage/orbusIncomingMethodIdx LFLHGEMIBBI
    static void _set_LFLHGEMIBBI(::MagicalActual::Runemage::orbusIncomingMethodIdx value);
    // static field const value: static public MagicalActual.Runemage/orbusIncomingMethodIdx FCEBKGOELNC
    static constexpr const int FCEBKGOELNC = 2;
    // Get static field: static public MagicalActual.Runemage/orbusIncomingMethodIdx FCEBKGOELNC
    static ::MagicalActual::Runemage::orbusIncomingMethodIdx _get_FCEBKGOELNC();
    // Set static field: static public MagicalActual.Runemage/orbusIncomingMethodIdx FCEBKGOELNC
    static void _set_FCEBKGOELNC(::MagicalActual::Runemage::orbusIncomingMethodIdx value);
    // static field const value: static public MagicalActual.Runemage/orbusIncomingMethodIdx GDHGGPBEENO
    static constexpr const int GDHGGPBEENO = 3;
    // Get static field: static public MagicalActual.Runemage/orbusIncomingMethodIdx GDHGGPBEENO
    static ::MagicalActual::Runemage::orbusIncomingMethodIdx _get_GDHGGPBEENO();
    // Set static field: static public MagicalActual.Runemage/orbusIncomingMethodIdx GDHGGPBEENO
    static void _set_GDHGGPBEENO(::MagicalActual::Runemage::orbusIncomingMethodIdx value);
    // static field const value: static public MagicalActual.Runemage/orbusIncomingMethodIdx PHCDMGLJJEB
    static constexpr const int PHCDMGLJJEB = 4;
    // Get static field: static public MagicalActual.Runemage/orbusIncomingMethodIdx PHCDMGLJJEB
    static ::MagicalActual::Runemage::orbusIncomingMethodIdx _get_PHCDMGLJJEB();
    // Set static field: static public MagicalActual.Runemage/orbusIncomingMethodIdx PHCDMGLJJEB
    static void _set_PHCDMGLJJEB(::MagicalActual::Runemage::orbusIncomingMethodIdx value);
    // static field const value: static public MagicalActual.Runemage/orbusIncomingMethodIdx CBHGAMKGJGI
    static constexpr const int CBHGAMKGJGI = 5;
    // Get static field: static public MagicalActual.Runemage/orbusIncomingMethodIdx CBHGAMKGJGI
    static ::MagicalActual::Runemage::orbusIncomingMethodIdx _get_CBHGAMKGJGI();
    // Set static field: static public MagicalActual.Runemage/orbusIncomingMethodIdx CBHGAMKGJGI
    static void _set_CBHGAMKGJGI(::MagicalActual::Runemage::orbusIncomingMethodIdx value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // MagicalActual.Runemage/orbusIncomingMethodIdx
  #pragma pack(pop)
  static check_size<sizeof(Runemage::orbusIncomingMethodIdx), 0 + sizeof(int)> __MagicalActual_Runemage_orbusIncomingMethodIdxSizeCheck;
  static_assert(sizeof(Runemage::orbusIncomingMethodIdx) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"