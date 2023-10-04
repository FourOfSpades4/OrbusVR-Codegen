// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: FMOD.StringWrapper
#include "FMOD/StringWrapper.hpp"
// Including type: FMOD.Studio.PARAMETER_TYPE
#include "FMOD/Studio/PARAMETER_TYPE.hpp"
// Completed includes
// Type namespace: FMOD.Studio
namespace FMOD::Studio {
  // Forward declaring type: PARAMETER_DESCRIPTION
  struct PARAMETER_DESCRIPTION;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::FMOD::Studio::PARAMETER_DESCRIPTION, "FMOD.Studio", "PARAMETER_DESCRIPTION");
// Type namespace: FMOD.Studio
namespace FMOD::Studio {
  // Size: 0x1C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: FMOD.Studio.PARAMETER_DESCRIPTION
  // [TokenAttribute] Offset: FFFFFFFF
  struct PARAMETER_DESCRIPTION/*, public ::System::ValueType*/ {
    public:
    public:
    // public FMOD.StringWrapper name
    // Size: 0x8
    // Offset: 0x0
    ::FMOD::StringWrapper name;
    // Field size check
    static_assert(sizeof(::FMOD::StringWrapper) == 0x8);
    // public System.Int32 index
    // Size: 0x4
    // Offset: 0x8
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single minimum
    // Size: 0x4
    // Offset: 0xC
    float minimum;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single maximum
    // Size: 0x4
    // Offset: 0x10
    float maximum;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single defaultvalue
    // Size: 0x4
    // Offset: 0x14
    float defaultvalue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public FMOD.Studio.PARAMETER_TYPE type
    // Size: 0x4
    // Offset: 0x18
    ::FMOD::Studio::PARAMETER_TYPE type;
    // Field size check
    static_assert(sizeof(::FMOD::Studio::PARAMETER_TYPE) == 0x4);
    public:
    // Creating value type constructor for type: PARAMETER_DESCRIPTION
    constexpr PARAMETER_DESCRIPTION(::FMOD::StringWrapper name_ = {}, int index_ = {}, float minimum_ = {}, float maximum_ = {}, float defaultvalue_ = {}, ::FMOD::Studio::PARAMETER_TYPE type_ = {}) noexcept : name{name_}, index{index_}, minimum{minimum_}, maximum{maximum_}, defaultvalue{defaultvalue_}, type{type_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public FMOD.StringWrapper name
    [[deprecated("Use field access instead!")]] ::FMOD::StringWrapper& dyn_name();
    // Get instance field reference: public System.Int32 index
    [[deprecated("Use field access instead!")]] int& dyn_index();
    // Get instance field reference: public System.Single minimum
    [[deprecated("Use field access instead!")]] float& dyn_minimum();
    // Get instance field reference: public System.Single maximum
    [[deprecated("Use field access instead!")]] float& dyn_maximum();
    // Get instance field reference: public System.Single defaultvalue
    [[deprecated("Use field access instead!")]] float& dyn_defaultvalue();
    // Get instance field reference: public FMOD.Studio.PARAMETER_TYPE type
    [[deprecated("Use field access instead!")]] ::FMOD::Studio::PARAMETER_TYPE& dyn_type();
  }; // FMOD.Studio.PARAMETER_DESCRIPTION
  #pragma pack(pop)
  static check_size<sizeof(PARAMETER_DESCRIPTION), 24 + sizeof(::FMOD::Studio::PARAMETER_TYPE)> __FMOD_Studio_PARAMETER_DESCRIPTIONSizeCheck;
  static_assert(sizeof(PARAMETER_DESCRIPTION) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
