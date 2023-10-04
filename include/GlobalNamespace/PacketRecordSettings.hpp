// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PacketRecordSettings
  class PacketRecordSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PacketRecordSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PacketRecordSettings*, "", "PacketRecordSettings");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: PacketRecordSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class PacketRecordSettings : public ::Il2CppObject {
    public:
    public:
    // System.Boolean RecordingFrames
    // Size: 0x1
    // Offset: 0x10
    bool RecordingFrames;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: RecordingFrames and: UpdateRate
    char __padding0[0x3] = {};
    // public System.Single UpdateRate
    // Size: 0x4
    // Offset: 0x14
    float UpdateRate;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.Single AccumulatedTime
    // Size: 0x4
    // Offset: 0x18
    float AccumulatedTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: System.Boolean RecordingFrames
    [[deprecated("Use field access instead!")]] bool& dyn_RecordingFrames();
    // Get instance field reference: public System.Single UpdateRate
    [[deprecated("Use field access instead!")]] float& dyn_UpdateRate();
    // Get instance field reference: System.Single AccumulatedTime
    [[deprecated("Use field access instead!")]] float& dyn_AccumulatedTime();
    // public System.Void .ctor()
    // Offset: 0x102F46C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PacketRecordSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PacketRecordSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PacketRecordSettings*, creationType>()));
    }
  }; // PacketRecordSettings
  #pragma pack(pop)
  static check_size<sizeof(PacketRecordSettings), 24 + sizeof(float)> __GlobalNamespace_PacketRecordSettingsSizeCheck;
  static_assert(sizeof(PacketRecordSettings) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PacketRecordSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!