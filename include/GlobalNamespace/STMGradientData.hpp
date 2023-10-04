// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Gradient
  class Gradient;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: STMGradientData
  class STMGradientData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::STMGradientData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::STMGradientData*, "", "STMGradientData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2D
  #pragma pack(push, 1)
  // Autogenerated type: STMGradientData
  // [TokenAttribute] Offset: FFFFFFFF
  // [CreateAssetMenuAttribute] Offset: ACD7E4
  class STMGradientData : public ::UnityEngine::ScriptableObject {
    public:
    // Nested type: ::GlobalNamespace::STMGradientData::GradientDirection
    struct GradientDirection;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: STMGradientData/GradientDirection
    // [TokenAttribute] Offset: FFFFFFFF
    struct GradientDirection/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: GradientDirection
      constexpr GradientDirection(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public STMGradientData/GradientDirection Horizontal
      static constexpr const int Horizontal = 0;
      // Get static field: static public STMGradientData/GradientDirection Horizontal
      static ::GlobalNamespace::STMGradientData::GradientDirection _get_Horizontal();
      // Set static field: static public STMGradientData/GradientDirection Horizontal
      static void _set_Horizontal(::GlobalNamespace::STMGradientData::GradientDirection value);
      // static field const value: static public STMGradientData/GradientDirection Vertical
      static constexpr const int Vertical = 1;
      // Get static field: static public STMGradientData/GradientDirection Vertical
      static ::GlobalNamespace::STMGradientData::GradientDirection _get_Vertical();
      // Set static field: static public STMGradientData/GradientDirection Vertical
      static void _set_Vertical(::GlobalNamespace::STMGradientData::GradientDirection value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // STMGradientData/GradientDirection
    #pragma pack(pop)
    static check_size<sizeof(STMGradientData::GradientDirection), 0 + sizeof(int)> __GlobalNamespace_STMGradientData_GradientDirectionSizeCheck;
    static_assert(sizeof(STMGradientData::GradientDirection) == 0x4);
    public:
    // public UnityEngine.Gradient gradient
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Gradient* gradient;
    // Field size check
    static_assert(sizeof(::UnityEngine::Gradient*) == 0x8);
    // public System.Single gradientSpread
    // Size: 0x4
    // Offset: 0x20
    float gradientSpread;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single scrollSpeed
    // Size: 0x4
    // Offset: 0x24
    float scrollSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public STMGradientData/GradientDirection direction
    // Size: 0x4
    // Offset: 0x28
    ::GlobalNamespace::STMGradientData::GradientDirection direction;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::STMGradientData::GradientDirection) == 0x4);
    // public System.Boolean smoothGradient
    // Size: 0x1
    // Offset: 0x2C
    bool smoothGradient;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.Gradient gradient
    [[deprecated("Use field access instead!")]] ::UnityEngine::Gradient*& dyn_gradient();
    // Get instance field reference: public System.Single gradientSpread
    [[deprecated("Use field access instead!")]] float& dyn_gradientSpread();
    // Get instance field reference: public System.Single scrollSpeed
    [[deprecated("Use field access instead!")]] float& dyn_scrollSpeed();
    // Get instance field reference: public STMGradientData/GradientDirection direction
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::STMGradientData::GradientDirection& dyn_direction();
    // Get instance field reference: public System.Boolean smoothGradient
    [[deprecated("Use field access instead!")]] bool& dyn_smoothGradient();
    // public System.Void .ctor()
    // Offset: 0xE2E43C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static STMGradientData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::STMGradientData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<STMGradientData*, creationType>()));
    }
  }; // STMGradientData
  #pragma pack(pop)
  static check_size<sizeof(STMGradientData), 44 + sizeof(bool)> __GlobalNamespace_STMGradientDataSizeCheck;
  static_assert(sizeof(STMGradientData) == 0x2D);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::STMGradientData::GradientDirection, "", "STMGradientData/GradientDirection");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::STMGradientData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
