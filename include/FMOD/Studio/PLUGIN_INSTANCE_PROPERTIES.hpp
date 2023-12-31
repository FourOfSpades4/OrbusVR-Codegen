// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: FMOD.Studio
namespace FMOD::Studio {
  // Forward declaring type: PLUGIN_INSTANCE_PROPERTIES
  struct PLUGIN_INSTANCE_PROPERTIES;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::FMOD::Studio::PLUGIN_INSTANCE_PROPERTIES, "FMOD.Studio", "PLUGIN_INSTANCE_PROPERTIES");
// Type namespace: FMOD.Studio
namespace FMOD::Studio {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: FMOD.Studio.PLUGIN_INSTANCE_PROPERTIES
  // [TokenAttribute] Offset: FFFFFFFF
  struct PLUGIN_INSTANCE_PROPERTIES/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.IntPtr name
    // Size: 0x8
    // Offset: 0x0
    ::System::IntPtr name;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // public System.IntPtr dsp
    // Size: 0x8
    // Offset: 0x8
    ::System::IntPtr dsp;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating value type constructor for type: PLUGIN_INSTANCE_PROPERTIES
    constexpr PLUGIN_INSTANCE_PROPERTIES(::System::IntPtr name_ = {}, ::System::IntPtr dsp_ = {}) noexcept : name{name_}, dsp{dsp_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.IntPtr name
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_name();
    // Get instance field reference: public System.IntPtr dsp
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_dsp();
  }; // FMOD.Studio.PLUGIN_INSTANCE_PROPERTIES
  #pragma pack(pop)
  static check_size<sizeof(PLUGIN_INSTANCE_PROPERTIES), 8 + sizeof(::System::IntPtr)> __FMOD_Studio_PLUGIN_INSTANCE_PROPERTIESSizeCheck;
  static_assert(sizeof(PLUGIN_INSTANCE_PROPERTIES) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
