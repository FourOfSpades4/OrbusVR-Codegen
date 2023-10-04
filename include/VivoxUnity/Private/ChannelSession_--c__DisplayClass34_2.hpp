// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VivoxUnity.Private.ChannelSession
#include "VivoxUnity/Private/ChannelSession.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: vx_req_session_media_disconnect_t
  class vx_req_session_media_disconnect_t;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VivoxUnity::Private::ChannelSession::$$c__DisplayClass34_2);
DEFINE_IL2CPP_ARG_TYPE(::VivoxUnity::Private::ChannelSession::$$c__DisplayClass34_2*, "VivoxUnity.Private", "ChannelSession/<>c__DisplayClass34_2");
// Type namespace: VivoxUnity.Private
namespace VivoxUnity::Private {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: VivoxUnity.Private.ChannelSession/<>c__DisplayClass34_2
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: ABD8D8
  class ChannelSession::$$c__DisplayClass34_2 : public ::Il2CppObject {
    public:
    public:
    // public vx_req_session_media_disconnect_t request
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::vx_req_session_media_disconnect_t* request;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::vx_req_session_media_disconnect_t*) == 0x8);
    // public VivoxUnity.Private.ChannelSession/<>c__DisplayClass34_0 CS$<>8__locals2
    // Size: 0x8
    // Offset: 0x18
    ::VivoxUnity::Private::ChannelSession::$$c__DisplayClass34_0* CS$$$8__locals2;
    // Field size check
    static_assert(sizeof(::VivoxUnity::Private::ChannelSession::$$c__DisplayClass34_0*) == 0x8);
    public:
    // Get instance field reference: public vx_req_session_media_disconnect_t request
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::vx_req_session_media_disconnect_t*& dyn_request();
    // Get instance field reference: public VivoxUnity.Private.ChannelSession/<>c__DisplayClass34_0 CS$<>8__locals2
    [[deprecated("Use field access instead!")]] ::VivoxUnity::Private::ChannelSession::$$c__DisplayClass34_0*& dyn_CS$$$8__locals2();
    // public System.Void .ctor()
    // Offset: 0x14C24D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ChannelSession::$$c__DisplayClass34_2* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VivoxUnity::Private::ChannelSession::$$c__DisplayClass34_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ChannelSession::$$c__DisplayClass34_2*, creationType>()));
    }
    // System.Void <BeginSetAudioConnected>b__1(System.IAsyncResult result)
    // Offset: 0x14C4D94
    void $BeginSetAudioConnected$b__1(::System::IAsyncResult* result);
  }; // VivoxUnity.Private.ChannelSession/<>c__DisplayClass34_2
  #pragma pack(pop)
  static check_size<sizeof(ChannelSession::$$c__DisplayClass34_2), 24 + sizeof(::VivoxUnity::Private::ChannelSession::$$c__DisplayClass34_0*)> __VivoxUnity_Private_ChannelSession_$$c__DisplayClass34_2SizeCheck;
  static_assert(sizeof(ChannelSession::$$c__DisplayClass34_2) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VivoxUnity::Private::ChannelSession::$$c__DisplayClass34_2::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VivoxUnity::Private::ChannelSession::$$c__DisplayClass34_2::$BeginSetAudioConnected$b__1
// Il2CppName: <BeginSetAudioConnected>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VivoxUnity::Private::ChannelSession::$$c__DisplayClass34_2::*)(::System::IAsyncResult*)>(&VivoxUnity::Private::ChannelSession::$$c__DisplayClass34_2::$BeginSetAudioConnected$b__1)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VivoxUnity::Private::ChannelSession::$$c__DisplayClass34_2*), "<BeginSetAudioConnected>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
