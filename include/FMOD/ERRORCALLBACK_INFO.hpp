// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: FMOD.RESULT
#include "FMOD/RESULT.hpp"
// Including type: FMOD.ERRORCALLBACK_INSTANCETYPE
#include "FMOD/ERRORCALLBACK_INSTANCETYPE.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: FMOD.StringWrapper
#include "FMOD/StringWrapper.hpp"
// Completed includes
// Type namespace: FMOD
namespace FMOD {
  // Forward declaring type: ERRORCALLBACK_INFO
  struct ERRORCALLBACK_INFO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::FMOD::ERRORCALLBACK_INFO, "FMOD", "ERRORCALLBACK_INFO");
// Type namespace: FMOD
namespace FMOD {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: FMOD.ERRORCALLBACK_INFO
  // [TokenAttribute] Offset: FFFFFFFF
  struct ERRORCALLBACK_INFO/*, public ::System::ValueType*/ {
    public:
    public:
    // public FMOD.RESULT result
    // Size: 0x4
    // Offset: 0x0
    ::FMOD::RESULT result;
    // Field size check
    static_assert(sizeof(::FMOD::RESULT) == 0x4);
    // public FMOD.ERRORCALLBACK_INSTANCETYPE instancetype
    // Size: 0x4
    // Offset: 0x4
    ::FMOD::ERRORCALLBACK_INSTANCETYPE instancetype;
    // Field size check
    static_assert(sizeof(::FMOD::ERRORCALLBACK_INSTANCETYPE) == 0x4);
    // public System.IntPtr instance
    // Size: 0x8
    // Offset: 0x8
    ::System::IntPtr instance;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // public FMOD.StringWrapper functionname
    // Size: 0x8
    // Offset: 0x10
    ::FMOD::StringWrapper functionname;
    // Field size check
    static_assert(sizeof(::FMOD::StringWrapper) == 0x8);
    // public FMOD.StringWrapper functionparams
    // Size: 0x8
    // Offset: 0x18
    ::FMOD::StringWrapper functionparams;
    // Field size check
    static_assert(sizeof(::FMOD::StringWrapper) == 0x8);
    public:
    // Creating value type constructor for type: ERRORCALLBACK_INFO
    constexpr ERRORCALLBACK_INFO(::FMOD::RESULT result_ = {}, ::FMOD::ERRORCALLBACK_INSTANCETYPE instancetype_ = {}, ::System::IntPtr instance_ = {}, ::FMOD::StringWrapper functionname_ = {}, ::FMOD::StringWrapper functionparams_ = {}) noexcept : result{result_}, instancetype{instancetype_}, instance{instance_}, functionname{functionname_}, functionparams{functionparams_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public FMOD.RESULT result
    [[deprecated("Use field access instead!")]] ::FMOD::RESULT& dyn_result();
    // Get instance field reference: public FMOD.ERRORCALLBACK_INSTANCETYPE instancetype
    [[deprecated("Use field access instead!")]] ::FMOD::ERRORCALLBACK_INSTANCETYPE& dyn_instancetype();
    // Get instance field reference: public System.IntPtr instance
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_instance();
    // Get instance field reference: public FMOD.StringWrapper functionname
    [[deprecated("Use field access instead!")]] ::FMOD::StringWrapper& dyn_functionname();
    // Get instance field reference: public FMOD.StringWrapper functionparams
    [[deprecated("Use field access instead!")]] ::FMOD::StringWrapper& dyn_functionparams();
  }; // FMOD.ERRORCALLBACK_INFO
  #pragma pack(pop)
  static check_size<sizeof(ERRORCALLBACK_INFO), 24 + sizeof(::FMOD::StringWrapper)> __FMOD_ERRORCALLBACK_INFOSizeCheck;
  static_assert(sizeof(ERRORCALLBACK_INFO) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"