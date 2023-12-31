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
  // Forward declaring type: vx_password_hash_algorithm_t
  struct vx_password_hash_algorithm_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::vx_password_hash_algorithm_t, "", "vx_password_hash_algorithm_t");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: vx_password_hash_algorithm_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct vx_password_hash_algorithm_t/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: vx_password_hash_algorithm_t
    constexpr vx_password_hash_algorithm_t(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public vx_password_hash_algorithm_t password_hash_algorithm_cleartext
    static constexpr const int password_hash_algorithm_cleartext = 0;
    // Get static field: static public vx_password_hash_algorithm_t password_hash_algorithm_cleartext
    static ::GlobalNamespace::vx_password_hash_algorithm_t _get_password_hash_algorithm_cleartext();
    // Set static field: static public vx_password_hash_algorithm_t password_hash_algorithm_cleartext
    static void _set_password_hash_algorithm_cleartext(::GlobalNamespace::vx_password_hash_algorithm_t value);
    // static field const value: static public vx_password_hash_algorithm_t password_hash_algorithm_sha1_username_hash
    static constexpr const int password_hash_algorithm_sha1_username_hash = 1;
    // Get static field: static public vx_password_hash_algorithm_t password_hash_algorithm_sha1_username_hash
    static ::GlobalNamespace::vx_password_hash_algorithm_t _get_password_hash_algorithm_sha1_username_hash();
    // Set static field: static public vx_password_hash_algorithm_t password_hash_algorithm_sha1_username_hash
    static void _set_password_hash_algorithm_sha1_username_hash(::GlobalNamespace::vx_password_hash_algorithm_t value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // vx_password_hash_algorithm_t
  #pragma pack(pop)
  static check_size<sizeof(vx_password_hash_algorithm_t), 0 + sizeof(int)> __GlobalNamespace_vx_password_hash_algorithm_tSizeCheck;
  static_assert(sizeof(vx_password_hash_algorithm_t) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
