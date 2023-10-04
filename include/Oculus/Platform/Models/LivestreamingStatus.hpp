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
  // Forward declaring type: LivestreamingStatus
  class LivestreamingStatus;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::LivestreamingStatus);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::LivestreamingStatus*, "Oculus.Platform.Models", "LivestreamingStatus");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.LivestreamingStatus
  // [TokenAttribute] Offset: FFFFFFFF
  class LivestreamingStatus : public ::Il2CppObject {
    public:
    public:
    // public readonly System.Boolean CommentsVisible
    // Size: 0x1
    // Offset: 0x10
    bool CommentsVisible;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public readonly System.Boolean IsPaused
    // Size: 0x1
    // Offset: 0x11
    bool IsPaused;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public readonly System.Boolean LivestreamingEnabled
    // Size: 0x1
    // Offset: 0x12
    bool LivestreamingEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: LivestreamingEnabled and: LivestreamingType
    char __padding2[0x1] = {};
    // public readonly System.Int32 LivestreamingType
    // Size: 0x4
    // Offset: 0x14
    int LivestreamingType;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Boolean MicEnabled
    // Size: 0x1
    // Offset: 0x18
    bool MicEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public readonly System.Boolean CommentsVisible
    [[deprecated("Use field access instead!")]] bool& dyn_CommentsVisible();
    // Get instance field reference: public readonly System.Boolean IsPaused
    [[deprecated("Use field access instead!")]] bool& dyn_IsPaused();
    // Get instance field reference: public readonly System.Boolean LivestreamingEnabled
    [[deprecated("Use field access instead!")]] bool& dyn_LivestreamingEnabled();
    // Get instance field reference: public readonly System.Int32 LivestreamingType
    [[deprecated("Use field access instead!")]] int& dyn_LivestreamingType();
    // Get instance field reference: public readonly System.Boolean MicEnabled
    [[deprecated("Use field access instead!")]] bool& dyn_MicEnabled();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0xF7A290
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LivestreamingStatus* New_ctor(::System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::LivestreamingStatus::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LivestreamingStatus*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.LivestreamingStatus
  #pragma pack(pop)
  static check_size<sizeof(LivestreamingStatus), 24 + sizeof(bool)> __Oculus_Platform_Models_LivestreamingStatusSizeCheck;
  static_assert(sizeof(LivestreamingStatus) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::LivestreamingStatus::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
