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
// Begin forward declares
// Forward declaring namespace: FMOD
namespace FMOD {
  // Forward declaring type: DSP_ALLOC_FUNC
  class DSP_ALLOC_FUNC;
  // Forward declaring type: DSP_REALLOC_FUNC
  class DSP_REALLOC_FUNC;
  // Forward declaring type: DSP_FREE_FUNC
  class DSP_FREE_FUNC;
  // Forward declaring type: DSP_GETSAMPLERATE_FUNC
  class DSP_GETSAMPLERATE_FUNC;
  // Forward declaring type: DSP_GETBLOCKSIZE_FUNC
  class DSP_GETBLOCKSIZE_FUNC;
  // Forward declaring type: DSP_GETSPEAKERMODE_FUNC
  class DSP_GETSPEAKERMODE_FUNC;
  // Forward declaring type: DSP_GETCLOCK_FUNC
  class DSP_GETCLOCK_FUNC;
  // Forward declaring type: DSP_GETLISTENERATTRIBUTES_FUNC
  class DSP_GETLISTENERATTRIBUTES_FUNC;
  // Forward declaring type: DSP_LOG_FUNC
  class DSP_LOG_FUNC;
  // Forward declaring type: DSP_GETUSERDATA_FUNC
  class DSP_GETUSERDATA_FUNC;
}
// Completed forward declares
// Type namespace: FMOD
namespace FMOD {
  // Forward declaring type: DSP_STATE_FUNCTIONS
  struct DSP_STATE_FUNCTIONS;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::FMOD::DSP_STATE_FUNCTIONS, "FMOD", "DSP_STATE_FUNCTIONS");
// Type namespace: FMOD
namespace FMOD {
  // Size: 0x60
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: FMOD.DSP_STATE_FUNCTIONS
  // [TokenAttribute] Offset: FFFFFFFF
  struct DSP_STATE_FUNCTIONS/*, public ::System::ValueType*/ {
    public:
    public:
    // private FMOD.DSP_ALLOC_FUNC alloc
    // Size: 0x8
    // Offset: 0x0
    ::FMOD::DSP_ALLOC_FUNC* alloc;
    // Field size check
    static_assert(sizeof(::FMOD::DSP_ALLOC_FUNC*) == 0x8);
    // private FMOD.DSP_REALLOC_FUNC realloc
    // Size: 0x8
    // Offset: 0x8
    ::FMOD::DSP_REALLOC_FUNC* realloc;
    // Field size check
    static_assert(sizeof(::FMOD::DSP_REALLOC_FUNC*) == 0x8);
    // private FMOD.DSP_FREE_FUNC free
    // Size: 0x8
    // Offset: 0x10
    ::FMOD::DSP_FREE_FUNC* free;
    // Field size check
    static_assert(sizeof(::FMOD::DSP_FREE_FUNC*) == 0x8);
    // private FMOD.DSP_GETSAMPLERATE_FUNC getsamplerate
    // Size: 0x8
    // Offset: 0x18
    ::FMOD::DSP_GETSAMPLERATE_FUNC* getsamplerate;
    // Field size check
    static_assert(sizeof(::FMOD::DSP_GETSAMPLERATE_FUNC*) == 0x8);
    // private FMOD.DSP_GETBLOCKSIZE_FUNC getblocksize
    // Size: 0x8
    // Offset: 0x20
    ::FMOD::DSP_GETBLOCKSIZE_FUNC* getblocksize;
    // Field size check
    static_assert(sizeof(::FMOD::DSP_GETBLOCKSIZE_FUNC*) == 0x8);
    // private System.IntPtr dft
    // Size: 0x8
    // Offset: 0x28
    ::System::IntPtr dft;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private System.IntPtr pan
    // Size: 0x8
    // Offset: 0x30
    ::System::IntPtr pan;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private FMOD.DSP_GETSPEAKERMODE_FUNC getspeakermode
    // Size: 0x8
    // Offset: 0x38
    ::FMOD::DSP_GETSPEAKERMODE_FUNC* getspeakermode;
    // Field size check
    static_assert(sizeof(::FMOD::DSP_GETSPEAKERMODE_FUNC*) == 0x8);
    // private FMOD.DSP_GETCLOCK_FUNC getclock
    // Size: 0x8
    // Offset: 0x40
    ::FMOD::DSP_GETCLOCK_FUNC* getclock;
    // Field size check
    static_assert(sizeof(::FMOD::DSP_GETCLOCK_FUNC*) == 0x8);
    // private FMOD.DSP_GETLISTENERATTRIBUTES_FUNC getlistenerattributes
    // Size: 0x8
    // Offset: 0x48
    ::FMOD::DSP_GETLISTENERATTRIBUTES_FUNC* getlistenerattributes;
    // Field size check
    static_assert(sizeof(::FMOD::DSP_GETLISTENERATTRIBUTES_FUNC*) == 0x8);
    // private FMOD.DSP_LOG_FUNC log
    // Size: 0x8
    // Offset: 0x50
    ::FMOD::DSP_LOG_FUNC* log;
    // Field size check
    static_assert(sizeof(::FMOD::DSP_LOG_FUNC*) == 0x8);
    // private FMOD.DSP_GETUSERDATA_FUNC getuserdata
    // Size: 0x8
    // Offset: 0x58
    ::FMOD::DSP_GETUSERDATA_FUNC* getuserdata;
    // Field size check
    static_assert(sizeof(::FMOD::DSP_GETUSERDATA_FUNC*) == 0x8);
    public:
    // Creating value type constructor for type: DSP_STATE_FUNCTIONS
    constexpr DSP_STATE_FUNCTIONS(::FMOD::DSP_ALLOC_FUNC* alloc_ = {}, ::FMOD::DSP_REALLOC_FUNC* realloc_ = {}, ::FMOD::DSP_FREE_FUNC* free_ = {}, ::FMOD::DSP_GETSAMPLERATE_FUNC* getsamplerate_ = {}, ::FMOD::DSP_GETBLOCKSIZE_FUNC* getblocksize_ = {}, ::System::IntPtr dft_ = {}, ::System::IntPtr pan_ = {}, ::FMOD::DSP_GETSPEAKERMODE_FUNC* getspeakermode_ = {}, ::FMOD::DSP_GETCLOCK_FUNC* getclock_ = {}, ::FMOD::DSP_GETLISTENERATTRIBUTES_FUNC* getlistenerattributes_ = {}, ::FMOD::DSP_LOG_FUNC* log_ = {}, ::FMOD::DSP_GETUSERDATA_FUNC* getuserdata_ = {}) noexcept : alloc{alloc_}, realloc{realloc_}, free{free_}, getsamplerate{getsamplerate_}, getblocksize{getblocksize_}, dft{dft_}, pan{pan_}, getspeakermode{getspeakermode_}, getclock{getclock_}, getlistenerattributes{getlistenerattributes_}, log{log_}, getuserdata{getuserdata_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private FMOD.DSP_ALLOC_FUNC alloc
    [[deprecated("Use field access instead!")]] ::FMOD::DSP_ALLOC_FUNC*& dyn_alloc();
    // Get instance field reference: private FMOD.DSP_REALLOC_FUNC realloc
    [[deprecated("Use field access instead!")]] ::FMOD::DSP_REALLOC_FUNC*& dyn_realloc();
    // Get instance field reference: private FMOD.DSP_FREE_FUNC free
    [[deprecated("Use field access instead!")]] ::FMOD::DSP_FREE_FUNC*& dyn_free();
    // Get instance field reference: private FMOD.DSP_GETSAMPLERATE_FUNC getsamplerate
    [[deprecated("Use field access instead!")]] ::FMOD::DSP_GETSAMPLERATE_FUNC*& dyn_getsamplerate();
    // Get instance field reference: private FMOD.DSP_GETBLOCKSIZE_FUNC getblocksize
    [[deprecated("Use field access instead!")]] ::FMOD::DSP_GETBLOCKSIZE_FUNC*& dyn_getblocksize();
    // Get instance field reference: private System.IntPtr dft
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_dft();
    // Get instance field reference: private System.IntPtr pan
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_pan();
    // Get instance field reference: private FMOD.DSP_GETSPEAKERMODE_FUNC getspeakermode
    [[deprecated("Use field access instead!")]] ::FMOD::DSP_GETSPEAKERMODE_FUNC*& dyn_getspeakermode();
    // Get instance field reference: private FMOD.DSP_GETCLOCK_FUNC getclock
    [[deprecated("Use field access instead!")]] ::FMOD::DSP_GETCLOCK_FUNC*& dyn_getclock();
    // Get instance field reference: private FMOD.DSP_GETLISTENERATTRIBUTES_FUNC getlistenerattributes
    [[deprecated("Use field access instead!")]] ::FMOD::DSP_GETLISTENERATTRIBUTES_FUNC*& dyn_getlistenerattributes();
    // Get instance field reference: private FMOD.DSP_LOG_FUNC log
    [[deprecated("Use field access instead!")]] ::FMOD::DSP_LOG_FUNC*& dyn_log();
    // Get instance field reference: private FMOD.DSP_GETUSERDATA_FUNC getuserdata
    [[deprecated("Use field access instead!")]] ::FMOD::DSP_GETUSERDATA_FUNC*& dyn_getuserdata();
  }; // FMOD.DSP_STATE_FUNCTIONS
  #pragma pack(pop)
  static check_size<sizeof(DSP_STATE_FUNCTIONS), 88 + sizeof(::FMOD::DSP_GETUSERDATA_FUNC*)> __FMOD_DSP_STATE_FUNCTIONSSizeCheck;
  static_assert(sizeof(DSP_STATE_FUNCTIONS) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
