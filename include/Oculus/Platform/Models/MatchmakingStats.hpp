// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Forward declaring type: MatchmakingStats
  class MatchmakingStats;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::MatchmakingStats);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::MatchmakingStats*, "Oculus.Platform.Models", "MatchmakingStats");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.MatchmakingStats
  // [TokenAttribute] Offset: FFFFFFFF
  class MatchmakingStats : public ::Il2CppObject {
    public:
    public:
    // public readonly System.UInt32 DrawCount
    // Size: 0x4
    // Offset: 0x10
    uint DrawCount;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public readonly System.UInt32 LossCount
    // Size: 0x4
    // Offset: 0x14
    uint LossCount;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public readonly System.UInt32 SkillLevel
    // Size: 0x4
    // Offset: 0x18
    uint SkillLevel;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: SkillLevel and: SkillMean
    char __padding2[0x4] = {};
    // public readonly System.Double SkillMean
    // Size: 0x8
    // Offset: 0x20
    double SkillMean;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public readonly System.Double SkillStandardDeviation
    // Size: 0x8
    // Offset: 0x28
    double SkillStandardDeviation;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public readonly System.UInt32 WinCount
    // Size: 0x4
    // Offset: 0x30
    uint WinCount;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Get instance field reference: public readonly System.UInt32 DrawCount
    [[deprecated("Use field access instead!")]] uint& dyn_DrawCount();
    // Get instance field reference: public readonly System.UInt32 LossCount
    [[deprecated("Use field access instead!")]] uint& dyn_LossCount();
    // Get instance field reference: public readonly System.UInt32 SkillLevel
    [[deprecated("Use field access instead!")]] uint& dyn_SkillLevel();
    // Get instance field reference: public readonly System.Double SkillMean
    [[deprecated("Use field access instead!")]] double& dyn_SkillMean();
    // Get instance field reference: public readonly System.Double SkillStandardDeviation
    [[deprecated("Use field access instead!")]] double& dyn_SkillStandardDeviation();
    // Get instance field reference: public readonly System.UInt32 WinCount
    [[deprecated("Use field access instead!")]] uint& dyn_WinCount();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0xF7B274
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MatchmakingStats* New_ctor(::System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::MatchmakingStats::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MatchmakingStats*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.MatchmakingStats
  #pragma pack(pop)
  static check_size<sizeof(MatchmakingStats), 48 + sizeof(uint)> __Oculus_Platform_Models_MatchmakingStatsSizeCheck;
  static_assert(sizeof(MatchmakingStats) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::MatchmakingStats::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
