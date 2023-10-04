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
// Type namespace: AmplifyBloom
namespace AmplifyBloom {
  // Forward declaring type: DebugToScreenEnum
  struct DebugToScreenEnum;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::AmplifyBloom::DebugToScreenEnum, "AmplifyBloom", "DebugToScreenEnum");
// Type namespace: AmplifyBloom
namespace AmplifyBloom {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: AmplifyBloom.DebugToScreenEnum
  // [TokenAttribute] Offset: FFFFFFFF
  struct DebugToScreenEnum/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DebugToScreenEnum
    constexpr DebugToScreenEnum(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public AmplifyBloom.DebugToScreenEnum None
    static constexpr const int None = 0;
    // Get static field: static public AmplifyBloom.DebugToScreenEnum None
    static ::AmplifyBloom::DebugToScreenEnum _get_None();
    // Set static field: static public AmplifyBloom.DebugToScreenEnum None
    static void _set_None(::AmplifyBloom::DebugToScreenEnum value);
    // static field const value: static public AmplifyBloom.DebugToScreenEnum Bloom
    static constexpr const int Bloom = 1;
    // Get static field: static public AmplifyBloom.DebugToScreenEnum Bloom
    static ::AmplifyBloom::DebugToScreenEnum _get_Bloom();
    // Set static field: static public AmplifyBloom.DebugToScreenEnum Bloom
    static void _set_Bloom(::AmplifyBloom::DebugToScreenEnum value);
    // static field const value: static public AmplifyBloom.DebugToScreenEnum MainThreshold
    static constexpr const int MainThreshold = 2;
    // Get static field: static public AmplifyBloom.DebugToScreenEnum MainThreshold
    static ::AmplifyBloom::DebugToScreenEnum _get_MainThreshold();
    // Set static field: static public AmplifyBloom.DebugToScreenEnum MainThreshold
    static void _set_MainThreshold(::AmplifyBloom::DebugToScreenEnum value);
    // static field const value: static public AmplifyBloom.DebugToScreenEnum FeaturesThreshold
    static constexpr const int FeaturesThreshold = 3;
    // Get static field: static public AmplifyBloom.DebugToScreenEnum FeaturesThreshold
    static ::AmplifyBloom::DebugToScreenEnum _get_FeaturesThreshold();
    // Set static field: static public AmplifyBloom.DebugToScreenEnum FeaturesThreshold
    static void _set_FeaturesThreshold(::AmplifyBloom::DebugToScreenEnum value);
    // static field const value: static public AmplifyBloom.DebugToScreenEnum TemporalFilter
    static constexpr const int TemporalFilter = 4;
    // Get static field: static public AmplifyBloom.DebugToScreenEnum TemporalFilter
    static ::AmplifyBloom::DebugToScreenEnum _get_TemporalFilter();
    // Set static field: static public AmplifyBloom.DebugToScreenEnum TemporalFilter
    static void _set_TemporalFilter(::AmplifyBloom::DebugToScreenEnum value);
    // static field const value: static public AmplifyBloom.DebugToScreenEnum BokehFilter
    static constexpr const int BokehFilter = 5;
    // Get static field: static public AmplifyBloom.DebugToScreenEnum BokehFilter
    static ::AmplifyBloom::DebugToScreenEnum _get_BokehFilter();
    // Set static field: static public AmplifyBloom.DebugToScreenEnum BokehFilter
    static void _set_BokehFilter(::AmplifyBloom::DebugToScreenEnum value);
    // static field const value: static public AmplifyBloom.DebugToScreenEnum LensFlare
    static constexpr const int LensFlare = 6;
    // Get static field: static public AmplifyBloom.DebugToScreenEnum LensFlare
    static ::AmplifyBloom::DebugToScreenEnum _get_LensFlare();
    // Set static field: static public AmplifyBloom.DebugToScreenEnum LensFlare
    static void _set_LensFlare(::AmplifyBloom::DebugToScreenEnum value);
    // static field const value: static public AmplifyBloom.DebugToScreenEnum LensGlare
    static constexpr const int LensGlare = 7;
    // Get static field: static public AmplifyBloom.DebugToScreenEnum LensGlare
    static ::AmplifyBloom::DebugToScreenEnum _get_LensGlare();
    // Set static field: static public AmplifyBloom.DebugToScreenEnum LensGlare
    static void _set_LensGlare(::AmplifyBloom::DebugToScreenEnum value);
    // static field const value: static public AmplifyBloom.DebugToScreenEnum LensDirt
    static constexpr const int LensDirt = 8;
    // Get static field: static public AmplifyBloom.DebugToScreenEnum LensDirt
    static ::AmplifyBloom::DebugToScreenEnum _get_LensDirt();
    // Set static field: static public AmplifyBloom.DebugToScreenEnum LensDirt
    static void _set_LensDirt(::AmplifyBloom::DebugToScreenEnum value);
    // static field const value: static public AmplifyBloom.DebugToScreenEnum LensStarburst
    static constexpr const int LensStarburst = 9;
    // Get static field: static public AmplifyBloom.DebugToScreenEnum LensStarburst
    static ::AmplifyBloom::DebugToScreenEnum _get_LensStarburst();
    // Set static field: static public AmplifyBloom.DebugToScreenEnum LensStarburst
    static void _set_LensStarburst(::AmplifyBloom::DebugToScreenEnum value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // AmplifyBloom.DebugToScreenEnum
  #pragma pack(pop)
  static check_size<sizeof(DebugToScreenEnum), 0 + sizeof(int)> __AmplifyBloom_DebugToScreenEnumSizeCheck;
  static_assert(sizeof(DebugToScreenEnum) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
