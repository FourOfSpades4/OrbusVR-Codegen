// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: FMOD
namespace FMOD {
  // Forward declaring type: DSP_PAN_SUMMONOMATRIX_FUNC
  class DSP_PAN_SUMMONOMATRIX_FUNC;
  // Forward declaring type: DSP_PAN_SUMSTEREOMATRIX_FUNC
  class DSP_PAN_SUMSTEREOMATRIX_FUNC;
  // Forward declaring type: DSP_PAN_SUMSURROUNDMATRIX_FUNC
  class DSP_PAN_SUMSURROUNDMATRIX_FUNC;
  // Forward declaring type: DSP_PAN_SUMMONOTOSURROUNDMATRIX_FUNC
  class DSP_PAN_SUMMONOTOSURROUNDMATRIX_FUNC;
  // Forward declaring type: DSP_PAN_SUMSTEREOTOSURROUNDMATRIX_FUNC
  class DSP_PAN_SUMSTEREOTOSURROUNDMATRIX_FUNC;
  // Forward declaring type: DSP_PAN_GETROLLOFFGAIN_FUNC
  class DSP_PAN_GETROLLOFFGAIN_FUNC;
}
// Completed forward declares
// Type namespace: FMOD
namespace FMOD {
  // Forward declaring type: DSP_STATE_PAN_FUNCTIONS
  struct DSP_STATE_PAN_FUNCTIONS;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::FMOD::DSP_STATE_PAN_FUNCTIONS, "FMOD", "DSP_STATE_PAN_FUNCTIONS");
// Type namespace: FMOD
namespace FMOD {
  // Size: 0x30
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: FMOD.DSP_STATE_PAN_FUNCTIONS
  // [TokenAttribute] Offset: FFFFFFFF
  struct DSP_STATE_PAN_FUNCTIONS/*, public ::System::ValueType*/ {
    public:
    public:
    // public FMOD.DSP_PAN_SUMMONOMATRIX_FUNC summonomatrix
    // Size: 0x8
    // Offset: 0x0
    ::FMOD::DSP_PAN_SUMMONOMATRIX_FUNC* summonomatrix;
    // Field size check
    static_assert(sizeof(::FMOD::DSP_PAN_SUMMONOMATRIX_FUNC*) == 0x8);
    // public FMOD.DSP_PAN_SUMSTEREOMATRIX_FUNC sumstereomatrix
    // Size: 0x8
    // Offset: 0x8
    ::FMOD::DSP_PAN_SUMSTEREOMATRIX_FUNC* sumstereomatrix;
    // Field size check
    static_assert(sizeof(::FMOD::DSP_PAN_SUMSTEREOMATRIX_FUNC*) == 0x8);
    // public FMOD.DSP_PAN_SUMSURROUNDMATRIX_FUNC sumsurroundmatrix
    // Size: 0x8
    // Offset: 0x10
    ::FMOD::DSP_PAN_SUMSURROUNDMATRIX_FUNC* sumsurroundmatrix;
    // Field size check
    static_assert(sizeof(::FMOD::DSP_PAN_SUMSURROUNDMATRIX_FUNC*) == 0x8);
    // public FMOD.DSP_PAN_SUMMONOTOSURROUNDMATRIX_FUNC summonotosurroundmatrix
    // Size: 0x8
    // Offset: 0x18
    ::FMOD::DSP_PAN_SUMMONOTOSURROUNDMATRIX_FUNC* summonotosurroundmatrix;
    // Field size check
    static_assert(sizeof(::FMOD::DSP_PAN_SUMMONOTOSURROUNDMATRIX_FUNC*) == 0x8);
    // public FMOD.DSP_PAN_SUMSTEREOTOSURROUNDMATRIX_FUNC sumstereotosurroundmatrix
    // Size: 0x8
    // Offset: 0x20
    ::FMOD::DSP_PAN_SUMSTEREOTOSURROUNDMATRIX_FUNC* sumstereotosurroundmatrix;
    // Field size check
    static_assert(sizeof(::FMOD::DSP_PAN_SUMSTEREOTOSURROUNDMATRIX_FUNC*) == 0x8);
    // public FMOD.DSP_PAN_GETROLLOFFGAIN_FUNC getrolloffgain
    // Size: 0x8
    // Offset: 0x28
    ::FMOD::DSP_PAN_GETROLLOFFGAIN_FUNC* getrolloffgain;
    // Field size check
    static_assert(sizeof(::FMOD::DSP_PAN_GETROLLOFFGAIN_FUNC*) == 0x8);
    public:
    // Creating value type constructor for type: DSP_STATE_PAN_FUNCTIONS
    constexpr DSP_STATE_PAN_FUNCTIONS(::FMOD::DSP_PAN_SUMMONOMATRIX_FUNC* summonomatrix_ = {}, ::FMOD::DSP_PAN_SUMSTEREOMATRIX_FUNC* sumstereomatrix_ = {}, ::FMOD::DSP_PAN_SUMSURROUNDMATRIX_FUNC* sumsurroundmatrix_ = {}, ::FMOD::DSP_PAN_SUMMONOTOSURROUNDMATRIX_FUNC* summonotosurroundmatrix_ = {}, ::FMOD::DSP_PAN_SUMSTEREOTOSURROUNDMATRIX_FUNC* sumstereotosurroundmatrix_ = {}, ::FMOD::DSP_PAN_GETROLLOFFGAIN_FUNC* getrolloffgain_ = {}) noexcept : summonomatrix{summonomatrix_}, sumstereomatrix{sumstereomatrix_}, sumsurroundmatrix{sumsurroundmatrix_}, summonotosurroundmatrix{summonotosurroundmatrix_}, sumstereotosurroundmatrix{sumstereotosurroundmatrix_}, getrolloffgain{getrolloffgain_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public FMOD.DSP_PAN_SUMMONOMATRIX_FUNC summonomatrix
    [[deprecated("Use field access instead!")]] ::FMOD::DSP_PAN_SUMMONOMATRIX_FUNC*& dyn_summonomatrix();
    // Get instance field reference: public FMOD.DSP_PAN_SUMSTEREOMATRIX_FUNC sumstereomatrix
    [[deprecated("Use field access instead!")]] ::FMOD::DSP_PAN_SUMSTEREOMATRIX_FUNC*& dyn_sumstereomatrix();
    // Get instance field reference: public FMOD.DSP_PAN_SUMSURROUNDMATRIX_FUNC sumsurroundmatrix
    [[deprecated("Use field access instead!")]] ::FMOD::DSP_PAN_SUMSURROUNDMATRIX_FUNC*& dyn_sumsurroundmatrix();
    // Get instance field reference: public FMOD.DSP_PAN_SUMMONOTOSURROUNDMATRIX_FUNC summonotosurroundmatrix
    [[deprecated("Use field access instead!")]] ::FMOD::DSP_PAN_SUMMONOTOSURROUNDMATRIX_FUNC*& dyn_summonotosurroundmatrix();
    // Get instance field reference: public FMOD.DSP_PAN_SUMSTEREOTOSURROUNDMATRIX_FUNC sumstereotosurroundmatrix
    [[deprecated("Use field access instead!")]] ::FMOD::DSP_PAN_SUMSTEREOTOSURROUNDMATRIX_FUNC*& dyn_sumstereotosurroundmatrix();
    // Get instance field reference: public FMOD.DSP_PAN_GETROLLOFFGAIN_FUNC getrolloffgain
    [[deprecated("Use field access instead!")]] ::FMOD::DSP_PAN_GETROLLOFFGAIN_FUNC*& dyn_getrolloffgain();
  }; // FMOD.DSP_STATE_PAN_FUNCTIONS
  #pragma pack(pop)
  static check_size<sizeof(DSP_STATE_PAN_FUNCTIONS), 40 + sizeof(::FMOD::DSP_PAN_GETROLLOFFGAIN_FUNC*)> __FMOD_DSP_STATE_PAN_FUNCTIONSSizeCheck;
  static_assert(sizeof(DSP_STATE_PAN_FUNCTIONS) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"