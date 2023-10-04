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
  // Forward declaring type: CompressionMethod
  struct CompressionMethod;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Ionic::Zip::CompressionMethod, "Pathfinding.Ionic.Zip", "CompressionMethod");
// Type namespace: Pathfinding.Ionic.Zip
namespace Pathfinding::Ionic::Zip {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Ionic.Zip.CompressionMethod
  // [TokenAttribute] Offset: FFFFFFFF
  struct CompressionMethod/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: CompressionMethod
    constexpr CompressionMethod(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Pathfinding.Ionic.Zip.CompressionMethod None
    static constexpr const int None = 0;
    // Get static field: static public Pathfinding.Ionic.Zip.CompressionMethod None
    static ::Pathfinding::Ionic::Zip::CompressionMethod _get_None();
    // Set static field: static public Pathfinding.Ionic.Zip.CompressionMethod None
    static void _set_None(::Pathfinding::Ionic::Zip::CompressionMethod value);
    // static field const value: static public Pathfinding.Ionic.Zip.CompressionMethod Deflate
    static constexpr const int Deflate = 8;
    // Get static field: static public Pathfinding.Ionic.Zip.CompressionMethod Deflate
    static ::Pathfinding::Ionic::Zip::CompressionMethod _get_Deflate();
    // Set static field: static public Pathfinding.Ionic.Zip.CompressionMethod Deflate
    static void _set_Deflate(::Pathfinding::Ionic::Zip::CompressionMethod value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Pathfinding.Ionic.Zip.CompressionMethod
  #pragma pack(pop)
  static check_size<sizeof(CompressionMethod), 0 + sizeof(int)> __Pathfinding_Ionic_Zip_CompressionMethodSizeCheck;
  static_assert(sizeof(CompressionMethod) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
