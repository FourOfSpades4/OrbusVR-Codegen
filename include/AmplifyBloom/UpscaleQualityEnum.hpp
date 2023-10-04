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
  // Forward declaring type: UpscaleQualityEnum
  struct UpscaleQualityEnum;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::AmplifyBloom::UpscaleQualityEnum, "AmplifyBloom", "UpscaleQualityEnum");
// Type namespace: AmplifyBloom
namespace AmplifyBloom {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: AmplifyBloom.UpscaleQualityEnum
  // [TokenAttribute] Offset: FFFFFFFF
  struct UpscaleQualityEnum/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: UpscaleQualityEnum
    constexpr UpscaleQualityEnum(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public AmplifyBloom.UpscaleQualityEnum Realistic
    static constexpr const int Realistic = 0;
    // Get static field: static public AmplifyBloom.UpscaleQualityEnum Realistic
    static ::AmplifyBloom::UpscaleQualityEnum _get_Realistic();
    // Set static field: static public AmplifyBloom.UpscaleQualityEnum Realistic
    static void _set_Realistic(::AmplifyBloom::UpscaleQualityEnum value);
    // static field const value: static public AmplifyBloom.UpscaleQualityEnum Natural
    static constexpr const int Natural = 1;
    // Get static field: static public AmplifyBloom.UpscaleQualityEnum Natural
    static ::AmplifyBloom::UpscaleQualityEnum _get_Natural();
    // Set static field: static public AmplifyBloom.UpscaleQualityEnum Natural
    static void _set_Natural(::AmplifyBloom::UpscaleQualityEnum value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // AmplifyBloom.UpscaleQualityEnum
  #pragma pack(pop)
  static check_size<sizeof(UpscaleQualityEnum), 0 + sizeof(int)> __AmplifyBloom_UpscaleQualityEnumSizeCheck;
  static_assert(sizeof(UpscaleQualityEnum) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"