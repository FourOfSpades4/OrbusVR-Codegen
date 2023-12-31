// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GazeEventArgs
  struct GazeEventArgs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GazeEventArgs, "", "GazeEventArgs");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: GazeEventArgs
  // [TokenAttribute] Offset: FFFFFFFF
  struct GazeEventArgs/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Single distance
    // Size: 0x4
    // Offset: 0x0
    float distance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: GazeEventArgs
    constexpr GazeEventArgs(float distance_ = {}) noexcept : distance{distance_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator float
    constexpr operator float() const noexcept {
      return distance;
    }
    // Get instance field reference: public System.Single distance
    [[deprecated("Use field access instead!")]] float& dyn_distance();
  }; // GazeEventArgs
  #pragma pack(pop)
  static check_size<sizeof(GazeEventArgs), 0 + sizeof(float)> __GlobalNamespace_GazeEventArgsSizeCheck;
  static_assert(sizeof(GazeEventArgs) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
