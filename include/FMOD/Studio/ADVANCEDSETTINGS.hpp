// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: FMOD.Studio
namespace FMOD::Studio {
  // Forward declaring type: ADVANCEDSETTINGS
  struct ADVANCEDSETTINGS;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::FMOD::Studio::ADVANCEDSETTINGS, "FMOD.Studio", "ADVANCEDSETTINGS");
// Type namespace: FMOD.Studio
namespace FMOD::Studio {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: FMOD.Studio.ADVANCEDSETTINGS
  // [TokenAttribute] Offset: FFFFFFFF
  struct ADVANCEDSETTINGS/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32 cbsize
    // Size: 0x4
    // Offset: 0x0
    int cbsize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 commandqueuesize
    // Size: 0x4
    // Offset: 0x4
    int commandqueuesize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 handleinitialsize
    // Size: 0x4
    // Offset: 0x8
    int handleinitialsize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 studioupdateperiod
    // Size: 0x4
    // Offset: 0xC
    int studioupdateperiod;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 idlesampledatapoolsize
    // Size: 0x4
    // Offset: 0x10
    int idlesampledatapoolsize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ADVANCEDSETTINGS
    constexpr ADVANCEDSETTINGS(int cbsize_ = {}, int commandqueuesize_ = {}, int handleinitialsize_ = {}, int studioupdateperiod_ = {}, int idlesampledatapoolsize_ = {}) noexcept : cbsize{cbsize_}, commandqueuesize{commandqueuesize_}, handleinitialsize{handleinitialsize_}, studioupdateperiod{studioupdateperiod_}, idlesampledatapoolsize{idlesampledatapoolsize_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 cbsize
    [[deprecated("Use field access instead!")]] int& dyn_cbsize();
    // Get instance field reference: public System.Int32 commandqueuesize
    [[deprecated("Use field access instead!")]] int& dyn_commandqueuesize();
    // Get instance field reference: public System.Int32 handleinitialsize
    [[deprecated("Use field access instead!")]] int& dyn_handleinitialsize();
    // Get instance field reference: public System.Int32 studioupdateperiod
    [[deprecated("Use field access instead!")]] int& dyn_studioupdateperiod();
    // Get instance field reference: public System.Int32 idlesampledatapoolsize
    [[deprecated("Use field access instead!")]] int& dyn_idlesampledatapoolsize();
  }; // FMOD.Studio.ADVANCEDSETTINGS
  #pragma pack(pop)
  static check_size<sizeof(ADVANCEDSETTINGS), 16 + sizeof(int)> __FMOD_Studio_ADVANCEDSETTINGSSizeCheck;
  static_assert(sizeof(ADVANCEDSETTINGS) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
