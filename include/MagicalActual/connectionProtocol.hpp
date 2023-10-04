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
  // Forward declaring type: connectionProtocol
  struct connectionProtocol;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::connectionProtocol, "MagicalActual", "connectionProtocol");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.connectionProtocol
  // [TokenAttribute] Offset: FFFFFFFF
  struct connectionProtocol/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: connectionProtocol
    constexpr connectionProtocol(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public MagicalActual.connectionProtocol CLIIPFKGMOK
    static constexpr const int CLIIPFKGMOK = 1;
    // Get static field: static public MagicalActual.connectionProtocol CLIIPFKGMOK
    static ::MagicalActual::connectionProtocol _get_CLIIPFKGMOK();
    // Set static field: static public MagicalActual.connectionProtocol CLIIPFKGMOK
    static void _set_CLIIPFKGMOK(::MagicalActual::connectionProtocol value);
    // static field const value: static public MagicalActual.connectionProtocol JGHCOIFMMPA
    static constexpr const int JGHCOIFMMPA = 2;
    // Get static field: static public MagicalActual.connectionProtocol JGHCOIFMMPA
    static ::MagicalActual::connectionProtocol _get_JGHCOIFMMPA();
    // Set static field: static public MagicalActual.connectionProtocol JGHCOIFMMPA
    static void _set_JGHCOIFMMPA(::MagicalActual::connectionProtocol value);
    // static field const value: static public MagicalActual.connectionProtocol MDFMAJHJGON
    static constexpr const int MDFMAJHJGON = 3;
    // Get static field: static public MagicalActual.connectionProtocol MDFMAJHJGON
    static ::MagicalActual::connectionProtocol _get_MDFMAJHJGON();
    // Set static field: static public MagicalActual.connectionProtocol MDFMAJHJGON
    static void _set_MDFMAJHJGON(::MagicalActual::connectionProtocol value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // MagicalActual.connectionProtocol
  #pragma pack(pop)
  static check_size<sizeof(connectionProtocol), 0 + sizeof(int)> __MagicalActual_connectionProtocolSizeCheck;
  static_assert(sizeof(connectionProtocol) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"