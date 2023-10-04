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
// Type namespace: Pathfinding.Ionic.Zip
namespace Pathfinding::Ionic::Zip {
  // Forward declaring type: CryptoMode
  struct CryptoMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Ionic::Zip::CryptoMode, "Pathfinding.Ionic.Zip", "CryptoMode");
// Type namespace: Pathfinding.Ionic.Zip
namespace Pathfinding::Ionic::Zip {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Ionic.Zip.CryptoMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct CryptoMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: CryptoMode
    constexpr CryptoMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Pathfinding.Ionic.Zip.CryptoMode Encrypt
    static constexpr const int Encrypt = 0;
    // Get static field: static public Pathfinding.Ionic.Zip.CryptoMode Encrypt
    static ::Pathfinding::Ionic::Zip::CryptoMode _get_Encrypt();
    // Set static field: static public Pathfinding.Ionic.Zip.CryptoMode Encrypt
    static void _set_Encrypt(::Pathfinding::Ionic::Zip::CryptoMode value);
    // static field const value: static public Pathfinding.Ionic.Zip.CryptoMode Decrypt
    static constexpr const int Decrypt = 1;
    // Get static field: static public Pathfinding.Ionic.Zip.CryptoMode Decrypt
    static ::Pathfinding::Ionic::Zip::CryptoMode _get_Decrypt();
    // Set static field: static public Pathfinding.Ionic.Zip.CryptoMode Decrypt
    static void _set_Decrypt(::Pathfinding::Ionic::Zip::CryptoMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Pathfinding.Ionic.Zip.CryptoMode
  #pragma pack(pop)
  static check_size<sizeof(CryptoMode), 0 + sizeof(int)> __Pathfinding_Ionic_Zip_CryptoModeSizeCheck;
  static_assert(sizeof(CryptoMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"