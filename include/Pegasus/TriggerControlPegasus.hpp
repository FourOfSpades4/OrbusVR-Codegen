// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pegasus.TriggerBase
#include "Pegasus/TriggerBase.hpp"
// Including type: Pegasus.PegasusConstants/PoiPegasusTriggerAction
#include "Pegasus/PegasusConstants_PoiPegasusTriggerAction.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pegasus
namespace Pegasus {
  // Forward declaring type: PegasusManager
  class PegasusManager;
  // Forward declaring type: PegasusPoi
  class PegasusPoi;
}
// Completed forward declares
// Type namespace: Pegasus
namespace Pegasus {
  // Forward declaring type: TriggerControlPegasus
  class TriggerControlPegasus;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pegasus::TriggerControlPegasus);
DEFINE_IL2CPP_ARG_TYPE(::Pegasus::TriggerControlPegasus*, "Pegasus", "TriggerControlPegasus");
// Type namespace: Pegasus
namespace Pegasus {
  // Size: 0x32
  #pragma pack(push, 1)
  // Autogenerated type: Pegasus.TriggerControlPegasus
  // [TokenAttribute] Offset: FFFFFFFF
  class TriggerControlPegasus : public ::Pegasus::TriggerBase {
    public:
    // Writing base type padding for base size: 0x1B to desired offset: 0x1C
    char ___base_padding[0x1] = {};
    public:
    // public Pegasus.PegasusConstants/PoiPegasusTriggerAction m_actionOnStart
    // Size: 0x4
    // Offset: 0x1C
    ::Pegasus::PegasusConstants::PoiPegasusTriggerAction m_actionOnStart;
    // Field size check
    static_assert(sizeof(::Pegasus::PegasusConstants::PoiPegasusTriggerAction) == 0x4);
    // public Pegasus.PegasusConstants/PoiPegasusTriggerAction m_actionOnEnd
    // Size: 0x4
    // Offset: 0x20
    ::Pegasus::PegasusConstants::PoiPegasusTriggerAction m_actionOnEnd;
    // Field size check
    static_assert(sizeof(::Pegasus::PegasusConstants::PoiPegasusTriggerAction) == 0x4);
    // Padding between fields: m_actionOnEnd and: m_pegasus
    char __padding1[0x4] = {};
    // public Pegasus.PegasusManager m_pegasus
    // Size: 0x8
    // Offset: 0x28
    ::Pegasus::PegasusManager* m_pegasus;
    // Field size check
    static_assert(sizeof(::Pegasus::PegasusManager*) == 0x8);
    // public System.Boolean m_disabled
    // Size: 0x1
    // Offset: 0x30
    bool m_disabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean m_disableAfterActioned
    // Size: 0x1
    // Offset: 0x31
    bool m_disableAfterActioned;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public Pegasus.PegasusConstants/PoiPegasusTriggerAction m_actionOnStart
    [[deprecated("Use field access instead!")]] ::Pegasus::PegasusConstants::PoiPegasusTriggerAction& dyn_m_actionOnStart();
    // Get instance field reference: public Pegasus.PegasusConstants/PoiPegasusTriggerAction m_actionOnEnd
    [[deprecated("Use field access instead!")]] ::Pegasus::PegasusConstants::PoiPegasusTriggerAction& dyn_m_actionOnEnd();
    // Get instance field reference: public Pegasus.PegasusManager m_pegasus
    [[deprecated("Use field access instead!")]] ::Pegasus::PegasusManager*& dyn_m_pegasus();
    // Get instance field reference: public System.Boolean m_disabled
    [[deprecated("Use field access instead!")]] bool& dyn_m_disabled();
    // Get instance field reference: public System.Boolean m_disableAfterActioned
    [[deprecated("Use field access instead!")]] bool& dyn_m_disableAfterActioned();
    // public override System.Void OnStart(Pegasus.PegasusPoi poi)
    // Offset: 0xE4EB90
    // Implemented from: Pegasus.TriggerBase
    // Base method: System.Void TriggerBase::OnStart(Pegasus.PegasusPoi poi)
    void OnStart(::Pegasus::PegasusPoi* poi);
    // public override System.Void OnEnd(Pegasus.PegasusPoi poi)
    // Offset: 0xE4F1F0
    // Implemented from: Pegasus.TriggerBase
    // Base method: System.Void TriggerBase::OnEnd(Pegasus.PegasusPoi poi)
    void OnEnd(::Pegasus::PegasusPoi* poi);
    // public System.Void .ctor()
    // Offset: 0xE4F76C
    // Implemented from: Pegasus.TriggerBase
    // Base method: System.Void TriggerBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TriggerControlPegasus* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pegasus::TriggerControlPegasus::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TriggerControlPegasus*, creationType>()));
    }
  }; // Pegasus.TriggerControlPegasus
  #pragma pack(pop)
  static check_size<sizeof(TriggerControlPegasus), 49 + sizeof(bool)> __Pegasus_TriggerControlPegasusSizeCheck;
  static_assert(sizeof(TriggerControlPegasus) == 0x32);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pegasus::TriggerControlPegasus::OnStart
// Il2CppName: OnStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pegasus::TriggerControlPegasus::*)(::Pegasus::PegasusPoi*)>(&Pegasus::TriggerControlPegasus::OnStart)> {
  static const MethodInfo* get() {
    static auto* poi = &::il2cpp_utils::GetClassFromName("Pegasus", "PegasusPoi")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pegasus::TriggerControlPegasus*), "OnStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{poi});
  }
};
// Writing MetadataGetter for method: Pegasus::TriggerControlPegasus::OnEnd
// Il2CppName: OnEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pegasus::TriggerControlPegasus::*)(::Pegasus::PegasusPoi*)>(&Pegasus::TriggerControlPegasus::OnEnd)> {
  static const MethodInfo* get() {
    static auto* poi = &::il2cpp_utils::GetClassFromName("Pegasus", "PegasusPoi")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pegasus::TriggerControlPegasus*), "OnEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{poi});
  }
};
// Writing MetadataGetter for method: Pegasus::TriggerControlPegasus::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
