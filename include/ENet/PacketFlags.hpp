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
// Type namespace: ENet
namespace ENet {
  // Forward declaring type: PacketFlags
  struct PacketFlags;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::ENet::PacketFlags, "ENet", "PacketFlags");
// Type namespace: ENet
namespace ENet {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: ENet.PacketFlags
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct PacketFlags/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: PacketFlags
    constexpr PacketFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public ENet.PacketFlags None
    static constexpr const int None = 0;
    // Get static field: static public ENet.PacketFlags None
    static ::ENet::PacketFlags _get_None();
    // Set static field: static public ENet.PacketFlags None
    static void _set_None(::ENet::PacketFlags value);
    // static field const value: static public ENet.PacketFlags Reliable
    static constexpr const int Reliable = 1;
    // Get static field: static public ENet.PacketFlags Reliable
    static ::ENet::PacketFlags _get_Reliable();
    // Set static field: static public ENet.PacketFlags Reliable
    static void _set_Reliable(::ENet::PacketFlags value);
    // static field const value: static public ENet.PacketFlags Unsequenced
    static constexpr const int Unsequenced = 2;
    // Get static field: static public ENet.PacketFlags Unsequenced
    static ::ENet::PacketFlags _get_Unsequenced();
    // Set static field: static public ENet.PacketFlags Unsequenced
    static void _set_Unsequenced(::ENet::PacketFlags value);
    // static field const value: static public ENet.PacketFlags NoAllocate
    static constexpr const int NoAllocate = 4;
    // Get static field: static public ENet.PacketFlags NoAllocate
    static ::ENet::PacketFlags _get_NoAllocate();
    // Set static field: static public ENet.PacketFlags NoAllocate
    static void _set_NoAllocate(::ENet::PacketFlags value);
    // static field const value: static public ENet.PacketFlags UnreliableFragment
    static constexpr const int UnreliableFragment = 8;
    // Get static field: static public ENet.PacketFlags UnreliableFragment
    static ::ENet::PacketFlags _get_UnreliableFragment();
    // Set static field: static public ENet.PacketFlags UnreliableFragment
    static void _set_UnreliableFragment(::ENet::PacketFlags value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // ENet.PacketFlags
  #pragma pack(pop)
  static check_size<sizeof(PacketFlags), 0 + sizeof(int)> __ENet_PacketFlagsSizeCheck;
  static_assert(sizeof(PacketFlags) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
