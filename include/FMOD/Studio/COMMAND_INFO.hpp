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
// Including type: FMOD.Studio.INSTANCETYPE
#include "FMOD/Studio/INSTANCETYPE.hpp"
// Completed includes
// Type namespace: FMOD.Studio
namespace FMOD::Studio {
  // Forward declaring type: COMMAND_INFO
  struct COMMAND_INFO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::FMOD::Studio::COMMAND_INFO, "FMOD.Studio", "COMMAND_INFO");
// Type namespace: FMOD.Studio
namespace FMOD::Studio {
  // Size: 0x24
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: FMOD.Studio.COMMAND_INFO
  // [TokenAttribute] Offset: FFFFFFFF
  struct COMMAND_INFO/*, public ::System::ValueType*/ {
    public:
    public:
    // private FMOD.StringWrapper commandname
    // Size: 0x8
    // Offset: 0x0
    ::FMOD::StringWrapper commandname;
    // Field size check
    static_assert(sizeof(::FMOD::StringWrapper) == 0x8);
    // public System.Int32 parentcommandindex
    // Size: 0x4
    // Offset: 0x8
    int parentcommandindex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 framenumber
    // Size: 0x4
    // Offset: 0xC
    int framenumber;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single frametime
    // Size: 0x4
    // Offset: 0x10
    float frametime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public FMOD.Studio.INSTANCETYPE instancetype
    // Size: 0x4
    // Offset: 0x14
    ::FMOD::Studio::INSTANCETYPE instancetype;
    // Field size check
    static_assert(sizeof(::FMOD::Studio::INSTANCETYPE) == 0x4);
    // public FMOD.Studio.INSTANCETYPE outputtype
    // Size: 0x4
    // Offset: 0x18
    ::FMOD::Studio::INSTANCETYPE outputtype;
    // Field size check
    static_assert(sizeof(::FMOD::Studio::INSTANCETYPE) == 0x4);
    // public System.UInt32 instancehandle
    // Size: 0x4
    // Offset: 0x1C
    uint instancehandle;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 outputhandle
    // Size: 0x4
    // Offset: 0x20
    uint outputhandle;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: COMMAND_INFO
    constexpr COMMAND_INFO(::FMOD::StringWrapper commandname_ = {}, int parentcommandindex_ = {}, int framenumber_ = {}, float frametime_ = {}, ::FMOD::Studio::INSTANCETYPE instancetype_ = {}, ::FMOD::Studio::INSTANCETYPE outputtype_ = {}, uint instancehandle_ = {}, uint outputhandle_ = {}) noexcept : commandname{commandname_}, parentcommandindex{parentcommandindex_}, framenumber{framenumber_}, frametime{frametime_}, instancetype{instancetype_}, outputtype{outputtype_}, instancehandle{instancehandle_}, outputhandle{outputhandle_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private FMOD.StringWrapper commandname
    [[deprecated("Use field access instead!")]] ::FMOD::StringWrapper& dyn_commandname();
    // Get instance field reference: public System.Int32 parentcommandindex
    [[deprecated("Use field access instead!")]] int& dyn_parentcommandindex();
    // Get instance field reference: public System.Int32 framenumber
    [[deprecated("Use field access instead!")]] int& dyn_framenumber();
    // Get instance field reference: public System.Single frametime
    [[deprecated("Use field access instead!")]] float& dyn_frametime();
    // Get instance field reference: public FMOD.Studio.INSTANCETYPE instancetype
    [[deprecated("Use field access instead!")]] ::FMOD::Studio::INSTANCETYPE& dyn_instancetype();
    // Get instance field reference: public FMOD.Studio.INSTANCETYPE outputtype
    [[deprecated("Use field access instead!")]] ::FMOD::Studio::INSTANCETYPE& dyn_outputtype();
    // Get instance field reference: public System.UInt32 instancehandle
    [[deprecated("Use field access instead!")]] uint& dyn_instancehandle();
    // Get instance field reference: public System.UInt32 outputhandle
    [[deprecated("Use field access instead!")]] uint& dyn_outputhandle();
  }; // FMOD.Studio.COMMAND_INFO
  #pragma pack(pop)
  static check_size<sizeof(COMMAND_INFO), 32 + sizeof(uint)> __FMOD_Studio_COMMAND_INFOSizeCheck;
  static_assert(sizeof(COMMAND_INFO) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
