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
// Type namespace: KevinIglesias
namespace KevinIglesias {
  // Forward declaring type: ResourceType
  struct ResourceType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::KevinIglesias::ResourceType, "KevinIglesias", "ResourceType");
// Type namespace: KevinIglesias
namespace KevinIglesias {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: KevinIglesias.ResourceType
  // [TokenAttribute] Offset: FFFFFFFF
  struct ResourceType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ResourceType
    constexpr ResourceType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public KevinIglesias.ResourceType Berries
    static constexpr const int Berries = 0;
    // Get static field: static public KevinIglesias.ResourceType Berries
    static ::KevinIglesias::ResourceType _get_Berries();
    // Set static field: static public KevinIglesias.ResourceType Berries
    static void _set_Berries(::KevinIglesias::ResourceType value);
    // static field const value: static public KevinIglesias.ResourceType Farm
    static constexpr const int Farm = 1;
    // Get static field: static public KevinIglesias.ResourceType Farm
    static ::KevinIglesias::ResourceType _get_Farm();
    // Set static field: static public KevinIglesias.ResourceType Farm
    static void _set_Farm(::KevinIglesias::ResourceType value);
    // static field const value: static public KevinIglesias.ResourceType Wood
    static constexpr const int Wood = 2;
    // Get static field: static public KevinIglesias.ResourceType Wood
    static ::KevinIglesias::ResourceType _get_Wood();
    // Set static field: static public KevinIglesias.ResourceType Wood
    static void _set_Wood(::KevinIglesias::ResourceType value);
    // static field const value: static public KevinIglesias.ResourceType Gold
    static constexpr const int Gold = 3;
    // Get static field: static public KevinIglesias.ResourceType Gold
    static ::KevinIglesias::ResourceType _get_Gold();
    // Set static field: static public KevinIglesias.ResourceType Gold
    static void _set_Gold(::KevinIglesias::ResourceType value);
    // static field const value: static public KevinIglesias.ResourceType Builder
    static constexpr const int Builder = 4;
    // Get static field: static public KevinIglesias.ResourceType Builder
    static ::KevinIglesias::ResourceType _get_Builder();
    // Set static field: static public KevinIglesias.ResourceType Builder
    static void _set_Builder(::KevinIglesias::ResourceType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // KevinIglesias.ResourceType
  #pragma pack(pop)
  static check_size<sizeof(ResourceType), 0 + sizeof(int)> __KevinIglesias_ResourceTypeSizeCheck;
  static_assert(sizeof(ResourceType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
