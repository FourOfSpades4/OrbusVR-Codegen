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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: vx_subscription_type
  struct vx_subscription_type;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::vx_subscription_type, "", "vx_subscription_type");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: vx_subscription_type
  // [TokenAttribute] Offset: FFFFFFFF
  struct vx_subscription_type/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: vx_subscription_type
    constexpr vx_subscription_type(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public vx_subscription_type subscription_presence
    static constexpr const int subscription_presence = 0;
    // Get static field: static public vx_subscription_type subscription_presence
    static ::GlobalNamespace::vx_subscription_type _get_subscription_presence();
    // Set static field: static public vx_subscription_type subscription_presence
    static void _set_subscription_presence(::GlobalNamespace::vx_subscription_type value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // vx_subscription_type
  #pragma pack(pop)
  static check_size<sizeof(vx_subscription_type), 0 + sizeof(int)> __GlobalNamespace_vx_subscription_typeSizeCheck;
  static_assert(sizeof(vx_subscription_type) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
