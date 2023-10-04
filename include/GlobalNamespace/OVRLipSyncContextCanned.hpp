// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRLipSyncContextBase
#include "GlobalNamespace/OVRLipSyncContextBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRLipSyncSequence
  class OVRLipSyncSequence;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRLipSyncContextCanned
  class OVRLipSyncContextCanned;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRLipSyncContextCanned);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRLipSyncContextCanned*, "", "OVRLipSyncContextCanned");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: OVRLipSyncContextCanned
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: ACE364
  class OVRLipSyncContextCanned : public ::GlobalNamespace::OVRLipSyncContextBase {
    public:
    public:
    // [TooltipAttribute] Offset: 0xADAF98
    // public OVRLipSyncSequence currentSequence
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::OVRLipSyncSequence* currentSequence;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRLipSyncSequence*) == 0x8);
    public:
    // Get instance field reference: public OVRLipSyncSequence currentSequence
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRLipSyncSequence*& dyn_currentSequence();
    // private System.Void Update()
    // Offset: 0x1390DA8
    void Update();
    // public System.Void .ctor()
    // Offset: 0x1390FB4
    // Implemented from: OVRLipSyncContextBase
    // Base method: System.Void OVRLipSyncContextBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRLipSyncContextCanned* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRLipSyncContextCanned::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRLipSyncContextCanned*, creationType>()));
    }
  }; // OVRLipSyncContextCanned
  #pragma pack(pop)
  static check_size<sizeof(OVRLipSyncContextCanned), 56 + sizeof(::GlobalNamespace::OVRLipSyncSequence*)> __GlobalNamespace_OVRLipSyncContextCannedSizeCheck;
  static_assert(sizeof(OVRLipSyncContextCanned) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncContextCanned::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRLipSyncContextCanned::*)()>(&GlobalNamespace::OVRLipSyncContextCanned::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLipSyncContextCanned*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncContextCanned::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
