// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: FMOD.PLUGINTYPE
#include "FMOD/PLUGINTYPE.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: FMOD
namespace FMOD {
  // Forward declaring type: PLUGINLIST
  struct PLUGINLIST;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::FMOD::PLUGINLIST, "FMOD", "PLUGINLIST");
// Type namespace: FMOD
namespace FMOD {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: FMOD.PLUGINLIST
  // [TokenAttribute] Offset: FFFFFFFF
  struct PLUGINLIST/*, public ::System::ValueType*/ {
    public:
    public:
    // private FMOD.PLUGINTYPE type
    // Size: 0x4
    // Offset: 0x0
    ::FMOD::PLUGINTYPE type;
    // Field size check
    static_assert(sizeof(::FMOD::PLUGINTYPE) == 0x4);
    // Padding between fields: type and: description
    char __padding0[0x4] = {};
    // private System.IntPtr description
    // Size: 0x8
    // Offset: 0x8
    ::System::IntPtr description;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating value type constructor for type: PLUGINLIST
    constexpr PLUGINLIST(::FMOD::PLUGINTYPE type_ = {}, ::System::IntPtr description_ = {}) noexcept : type{type_}, description{description_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private FMOD.PLUGINTYPE type
    [[deprecated("Use field access instead!")]] ::FMOD::PLUGINTYPE& dyn_type();
    // Get instance field reference: private System.IntPtr description
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_description();
  }; // FMOD.PLUGINLIST
  #pragma pack(pop)
  static check_size<sizeof(PLUGINLIST), 8 + sizeof(::System::IntPtr)> __FMOD_PLUGINLISTSizeCheck;
  static_assert(sizeof(PLUGINLIST) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
