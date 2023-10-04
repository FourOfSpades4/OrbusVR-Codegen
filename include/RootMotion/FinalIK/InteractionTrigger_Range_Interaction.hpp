// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.InteractionTrigger/Range
#include "RootMotion/FinalIK/InteractionTrigger_Range.hpp"
// Including type: RootMotion.FinalIK.FullBodyBipedEffector
#include "RootMotion/FinalIK/FullBodyBipedEffector.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: InteractionObject
  class InteractionObject;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::InteractionTrigger::Range::Interaction);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::InteractionTrigger::Range::Interaction*, "RootMotion.FinalIK", "InteractionTrigger/Range/Interaction");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.InteractionTrigger/Range/Interaction
  // [TokenAttribute] Offset: FFFFFFFF
  class InteractionTrigger::Range::Interaction : public ::Il2CppObject {
    public:
    public:
    // [TooltipAttribute] Offset: 0xAC9820
    // public RootMotion.FinalIK.InteractionObject interactionObject
    // Size: 0x8
    // Offset: 0x10
    ::RootMotion::FinalIK::InteractionObject* interactionObject;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::InteractionObject*) == 0x8);
    // [TooltipAttribute] Offset: 0xAC9858
    // public RootMotion.FinalIK.FullBodyBipedEffector[] effectors
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::RootMotion::FinalIK::FullBodyBipedEffector> effectors;
    // Field size check
    static_assert(sizeof(::ArrayW<::RootMotion::FinalIK::FullBodyBipedEffector>) == 0x8);
    public:
    // Get instance field reference: public RootMotion.FinalIK.InteractionObject interactionObject
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::InteractionObject*& dyn_interactionObject();
    // Get instance field reference: public RootMotion.FinalIK.FullBodyBipedEffector[] effectors
    [[deprecated("Use field access instead!")]] ::ArrayW<::RootMotion::FinalIK::FullBodyBipedEffector>& dyn_effectors();
    // public System.Void .ctor()
    // Offset: 0x1179400
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InteractionTrigger::Range::Interaction* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::InteractionTrigger::Range::Interaction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InteractionTrigger::Range::Interaction*, creationType>()));
    }
  }; // RootMotion.FinalIK.InteractionTrigger/Range/Interaction
  #pragma pack(pop)
  static check_size<sizeof(InteractionTrigger::Range::Interaction), 24 + sizeof(::ArrayW<::RootMotion::FinalIK::FullBodyBipedEffector>)> __RootMotion_FinalIK_InteractionTrigger_Range_InteractionSizeCheck;
  static_assert(sizeof(InteractionTrigger::Range::Interaction) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionTrigger::Range::Interaction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!