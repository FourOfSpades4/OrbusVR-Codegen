// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VivoxUnity.Private.ChannelParticipant
#include "VivoxUnity/Private/ChannelParticipant.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: vx_req_session_set_participant_mute_for_me_t
  class vx_req_session_set_participant_mute_for_me_t;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VivoxUnity::Private::ChannelParticipant::$$c__DisplayClass39_1);
DEFINE_IL2CPP_ARG_TYPE(::VivoxUnity::Private::ChannelParticipant::$$c__DisplayClass39_1*, "VivoxUnity.Private", "ChannelParticipant/<>c__DisplayClass39_1");
// Type namespace: VivoxUnity.Private
namespace VivoxUnity::Private {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: VivoxUnity.Private.ChannelParticipant/<>c__DisplayClass39_1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: ABD868
  class ChannelParticipant::$$c__DisplayClass39_1 : public ::Il2CppObject {
    public:
    public:
    // public vx_req_session_set_participant_mute_for_me_t request
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::vx_req_session_set_participant_mute_for_me_t* request;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::vx_req_session_set_participant_mute_for_me_t*) == 0x8);
    // public VivoxUnity.Private.ChannelParticipant/<>c__DisplayClass39_0 CS$<>8__locals1
    // Size: 0x8
    // Offset: 0x18
    ::VivoxUnity::Private::ChannelParticipant::$$c__DisplayClass39_0* CS$$$8__locals1;
    // Field size check
    static_assert(sizeof(::VivoxUnity::Private::ChannelParticipant::$$c__DisplayClass39_0*) == 0x8);
    public:
    // Get instance field reference: public vx_req_session_set_participant_mute_for_me_t request
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::vx_req_session_set_participant_mute_for_me_t*& dyn_request();
    // Get instance field reference: public VivoxUnity.Private.ChannelParticipant/<>c__DisplayClass39_0 CS$<>8__locals1
    [[deprecated("Use field access instead!")]] ::VivoxUnity::Private::ChannelParticipant::$$c__DisplayClass39_0*& dyn_CS$$$8__locals1();
    // public System.Void .ctor()
    // Offset: 0x14BEF3C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ChannelParticipant::$$c__DisplayClass39_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VivoxUnity::Private::ChannelParticipant::$$c__DisplayClass39_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ChannelParticipant::$$c__DisplayClass39_1*, creationType>()));
    }
    // System.Void <set_LocalMute>b__0(System.IAsyncResult result)
    // Offset: 0x14BF644
    void $set_LocalMute$b__0(::System::IAsyncResult* result);
  }; // VivoxUnity.Private.ChannelParticipant/<>c__DisplayClass39_1
  #pragma pack(pop)
  static check_size<sizeof(ChannelParticipant::$$c__DisplayClass39_1), 24 + sizeof(::VivoxUnity::Private::ChannelParticipant::$$c__DisplayClass39_0*)> __VivoxUnity_Private_ChannelParticipant_$$c__DisplayClass39_1SizeCheck;
  static_assert(sizeof(ChannelParticipant::$$c__DisplayClass39_1) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VivoxUnity::Private::ChannelParticipant::$$c__DisplayClass39_1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VivoxUnity::Private::ChannelParticipant::$$c__DisplayClass39_1::$set_LocalMute$b__0
// Il2CppName: <set_LocalMute>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::ChannelParticipant::$$c__DisplayClass39_1::*)(::System::IAsyncResult*)>(&VivoxUnity::Private::ChannelParticipant::$$c__DisplayClass39_1::$set_LocalMute$b__0)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::ChannelParticipant::$$c__DisplayClass39_1*), "<set_LocalMute>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
