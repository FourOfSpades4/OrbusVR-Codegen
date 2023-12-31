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
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: DamageAffinity
  struct DamageAffinity;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::DamageAffinity, "MagicalActual", "DamageAffinity");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.DamageAffinity
  // [TokenAttribute] Offset: FFFFFFFF
  struct DamageAffinity/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DamageAffinity
    constexpr DamageAffinity(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public MagicalActual.DamageAffinity CPFBGAEFGGA
    static constexpr const int CPFBGAEFGGA = 0;
    // Get static field: static public MagicalActual.DamageAffinity CPFBGAEFGGA
    static ::MagicalActual::DamageAffinity _get_CPFBGAEFGGA();
    // Set static field: static public MagicalActual.DamageAffinity CPFBGAEFGGA
    static void _set_CPFBGAEFGGA(::MagicalActual::DamageAffinity value);
    // static field const value: static public MagicalActual.DamageAffinity ANGNJGJNDJN
    static constexpr const int ANGNJGJNDJN = 1;
    // Get static field: static public MagicalActual.DamageAffinity ANGNJGJNDJN
    static ::MagicalActual::DamageAffinity _get_ANGNJGJNDJN();
    // Set static field: static public MagicalActual.DamageAffinity ANGNJGJNDJN
    static void _set_ANGNJGJNDJN(::MagicalActual::DamageAffinity value);
    // static field const value: static public MagicalActual.DamageAffinity JNIHMMGLOAN
    static constexpr const int JNIHMMGLOAN = 2;
    // Get static field: static public MagicalActual.DamageAffinity JNIHMMGLOAN
    static ::MagicalActual::DamageAffinity _get_JNIHMMGLOAN();
    // Set static field: static public MagicalActual.DamageAffinity JNIHMMGLOAN
    static void _set_JNIHMMGLOAN(::MagicalActual::DamageAffinity value);
    // static field const value: static public MagicalActual.DamageAffinity HMJPDFOCDDP
    static constexpr const int HMJPDFOCDDP = 4;
    // Get static field: static public MagicalActual.DamageAffinity HMJPDFOCDDP
    static ::MagicalActual::DamageAffinity _get_HMJPDFOCDDP();
    // Set static field: static public MagicalActual.DamageAffinity HMJPDFOCDDP
    static void _set_HMJPDFOCDDP(::MagicalActual::DamageAffinity value);
    // static field const value: static public MagicalActual.DamageAffinity OAHKKFJAJMF
    static constexpr const int OAHKKFJAJMF = 8;
    // Get static field: static public MagicalActual.DamageAffinity OAHKKFJAJMF
    static ::MagicalActual::DamageAffinity _get_OAHKKFJAJMF();
    // Set static field: static public MagicalActual.DamageAffinity OAHKKFJAJMF
    static void _set_OAHKKFJAJMF(::MagicalActual::DamageAffinity value);
    // static field const value: static public MagicalActual.DamageAffinity NNCIDPFCBHK
    static constexpr const int NNCIDPFCBHK = 16;
    // Get static field: static public MagicalActual.DamageAffinity NNCIDPFCBHK
    static ::MagicalActual::DamageAffinity _get_NNCIDPFCBHK();
    // Set static field: static public MagicalActual.DamageAffinity NNCIDPFCBHK
    static void _set_NNCIDPFCBHK(::MagicalActual::DamageAffinity value);
    // static field const value: static public MagicalActual.DamageAffinity MOKHLKKCJIJ
    static constexpr const int MOKHLKKCJIJ = 32;
    // Get static field: static public MagicalActual.DamageAffinity MOKHLKKCJIJ
    static ::MagicalActual::DamageAffinity _get_MOKHLKKCJIJ();
    // Set static field: static public MagicalActual.DamageAffinity MOKHLKKCJIJ
    static void _set_MOKHLKKCJIJ(::MagicalActual::DamageAffinity value);
    // static field const value: static public MagicalActual.DamageAffinity CNELJOADFGC
    static constexpr const int CNELJOADFGC = 64;
    // Get static field: static public MagicalActual.DamageAffinity CNELJOADFGC
    static ::MagicalActual::DamageAffinity _get_CNELJOADFGC();
    // Set static field: static public MagicalActual.DamageAffinity CNELJOADFGC
    static void _set_CNELJOADFGC(::MagicalActual::DamageAffinity value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // MagicalActual.DamageAffinity
  #pragma pack(pop)
  static check_size<sizeof(DamageAffinity), 0 + sizeof(int)> __MagicalActual_DamageAffinitySizeCheck;
  static_assert(sizeof(DamageAffinity) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
