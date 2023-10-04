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
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: MB_RenderType
  struct MB_RenderType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::MB_RenderType, "DigitalOpus.MB.Core", "MB_RenderType");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.MB_RenderType
  // [TokenAttribute] Offset: FFFFFFFF
  struct MB_RenderType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: MB_RenderType
    constexpr MB_RenderType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public DigitalOpus.MB.Core.MB_RenderType meshRenderer
    static constexpr const int meshRenderer = 0;
    // Get static field: static public DigitalOpus.MB.Core.MB_RenderType meshRenderer
    static ::DigitalOpus::MB::Core::MB_RenderType _get_meshRenderer();
    // Set static field: static public DigitalOpus.MB.Core.MB_RenderType meshRenderer
    static void _set_meshRenderer(::DigitalOpus::MB::Core::MB_RenderType value);
    // static field const value: static public DigitalOpus.MB.Core.MB_RenderType skinnedMeshRenderer
    static constexpr const int skinnedMeshRenderer = 1;
    // Get static field: static public DigitalOpus.MB.Core.MB_RenderType skinnedMeshRenderer
    static ::DigitalOpus::MB::Core::MB_RenderType _get_skinnedMeshRenderer();
    // Set static field: static public DigitalOpus.MB.Core.MB_RenderType skinnedMeshRenderer
    static void _set_skinnedMeshRenderer(::DigitalOpus::MB::Core::MB_RenderType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // DigitalOpus.MB.Core.MB_RenderType
  #pragma pack(pop)
  static check_size<sizeof(MB_RenderType), 0 + sizeof(int)> __DigitalOpus_MB_Core_MB_RenderTypeSizeCheck;
  static_assert(sizeof(MB_RenderType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
