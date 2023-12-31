// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnLogickFactory.UnityFbxExporterBinding
#include "UnLogickFactory/UnityFbxExporterBinding.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnLogickFactory::UnityFbxExporterBinding::EType, "UnLogickFactory", "UnityFbxExporterBinding/EType");
// Type namespace: UnLogickFactory
namespace UnLogickFactory {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnLogickFactory.UnityFbxExporterBinding/EType
  // [TokenAttribute] Offset: FFFFFFFF
  struct UnityFbxExporterBinding::EType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EType
    constexpr EType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnLogickFactory.UnityFbxExporterBinding/EType ePoint
    static constexpr const int ePoint = 0;
    // Get static field: static public UnLogickFactory.UnityFbxExporterBinding/EType ePoint
    static ::UnLogickFactory::UnityFbxExporterBinding::EType _get_ePoint();
    // Set static field: static public UnLogickFactory.UnityFbxExporterBinding/EType ePoint
    static void _set_ePoint(::UnLogickFactory::UnityFbxExporterBinding::EType value);
    // static field const value: static public UnLogickFactory.UnityFbxExporterBinding/EType eDirectional
    static constexpr const int eDirectional = 1;
    // Get static field: static public UnLogickFactory.UnityFbxExporterBinding/EType eDirectional
    static ::UnLogickFactory::UnityFbxExporterBinding::EType _get_eDirectional();
    // Set static field: static public UnLogickFactory.UnityFbxExporterBinding/EType eDirectional
    static void _set_eDirectional(::UnLogickFactory::UnityFbxExporterBinding::EType value);
    // static field const value: static public UnLogickFactory.UnityFbxExporterBinding/EType eSpot
    static constexpr const int eSpot = 2;
    // Get static field: static public UnLogickFactory.UnityFbxExporterBinding/EType eSpot
    static ::UnLogickFactory::UnityFbxExporterBinding::EType _get_eSpot();
    // Set static field: static public UnLogickFactory.UnityFbxExporterBinding/EType eSpot
    static void _set_eSpot(::UnLogickFactory::UnityFbxExporterBinding::EType value);
    // static field const value: static public UnLogickFactory.UnityFbxExporterBinding/EType eArea
    static constexpr const int eArea = 3;
    // Get static field: static public UnLogickFactory.UnityFbxExporterBinding/EType eArea
    static ::UnLogickFactory::UnityFbxExporterBinding::EType _get_eArea();
    // Set static field: static public UnLogickFactory.UnityFbxExporterBinding/EType eArea
    static void _set_eArea(::UnLogickFactory::UnityFbxExporterBinding::EType value);
    // static field const value: static public UnLogickFactory.UnityFbxExporterBinding/EType eVolume
    static constexpr const int eVolume = 4;
    // Get static field: static public UnLogickFactory.UnityFbxExporterBinding/EType eVolume
    static ::UnLogickFactory::UnityFbxExporterBinding::EType _get_eVolume();
    // Set static field: static public UnLogickFactory.UnityFbxExporterBinding/EType eVolume
    static void _set_eVolume(::UnLogickFactory::UnityFbxExporterBinding::EType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnLogickFactory.UnityFbxExporterBinding/EType
  #pragma pack(pop)
  static check_size<sizeof(UnityFbxExporterBinding::EType), 0 + sizeof(int)> __UnLogickFactory_UnityFbxExporterBinding_ETypeSizeCheck;
  static_assert(sizeof(UnityFbxExporterBinding::EType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
