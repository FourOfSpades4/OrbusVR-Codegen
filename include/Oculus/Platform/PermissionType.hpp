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
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: PermissionType
  struct PermissionType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::PermissionType, "Oculus.Platform", "PermissionType");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.PermissionType
  // [TokenAttribute] Offset: FFFFFFFF
  struct PermissionType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: PermissionType
    constexpr PermissionType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // [DescriptionAttribute] Offset: 0xAB4AB4
    // static field const value: static public Oculus.Platform.PermissionType Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.PermissionType Unknown
    static ::Oculus::Platform::PermissionType _get_Unknown();
    // Set static field: static public Oculus.Platform.PermissionType Unknown
    static void _set_Unknown(::Oculus::Platform::PermissionType value);
    // [DescriptionAttribute] Offset: 0xAB4AEC
    // static field const value: static public Oculus.Platform.PermissionType Microphone
    static constexpr const int Microphone = 1;
    // Get static field: static public Oculus.Platform.PermissionType Microphone
    static ::Oculus::Platform::PermissionType _get_Microphone();
    // Set static field: static public Oculus.Platform.PermissionType Microphone
    static void _set_Microphone(::Oculus::Platform::PermissionType value);
    // [DescriptionAttribute] Offset: 0xAB4B24
    // static field const value: static public Oculus.Platform.PermissionType WriteExternalStorage
    static constexpr const int WriteExternalStorage = 2;
    // Get static field: static public Oculus.Platform.PermissionType WriteExternalStorage
    static ::Oculus::Platform::PermissionType _get_WriteExternalStorage();
    // Set static field: static public Oculus.Platform.PermissionType WriteExternalStorage
    static void _set_WriteExternalStorage(::Oculus::Platform::PermissionType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Oculus.Platform.PermissionType
  #pragma pack(pop)
  static check_size<sizeof(PermissionType), 0 + sizeof(int)> __Oculus_Platform_PermissionTypeSizeCheck;
  static_assert(sizeof(PermissionType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
