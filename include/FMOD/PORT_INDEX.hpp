// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.UInt64
#include "System/UInt64.hpp"
// Completed includes
// Type namespace: FMOD
namespace FMOD {
  // Forward declaring type: PORT_INDEX
  struct PORT_INDEX;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::FMOD::PORT_INDEX, "FMOD", "PORT_INDEX");
// Type namespace: FMOD
namespace FMOD {
  // Size: 0x0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: FMOD.PORT_INDEX
  // [TokenAttribute] Offset: FFFFFFFF
  struct PORT_INDEX/*, public ::System::ValueType*/ {
    public:
    // Creating value type constructor for type: PORT_INDEX
    constexpr PORT_INDEX() noexcept {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // static field const value: static public System.UInt64 NONE
    static constexpr const uint64_t NONE = 18446744073709551615u;
    // Get static field: static public System.UInt64 NONE
    static uint64_t _get_NONE();
    // Set static field: static public System.UInt64 NONE
    static void _set_NONE(uint64_t value);
  }; // FMOD.PORT_INDEX
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
