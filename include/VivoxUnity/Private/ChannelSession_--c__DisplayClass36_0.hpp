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
// Forward declaring namespace: VivoxUnity
namespace VivoxUnity {
  // Forward declaring type: AsyncNoResult
  class AsyncNoResult;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VivoxUnity::Private::ChannelSession::$$c__DisplayClass36_0);
DEFINE_IL2CPP_ARG_TYPE(::VivoxUnity::Private::ChannelSession::$$c__DisplayClass36_0*, "VivoxUnity.Private", "ChannelSession/<>c__DisplayClass36_0");
// Type namespace: VivoxUnity.Private
namespace VivoxUnity::Private {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: VivoxUnity.Private.ChannelSession/<>c__DisplayClass36_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: ABD8E8
  class ChannelSession::$$c__DisplayClass36_0 : public ::Il2CppObject {
    public:
    public:
    // public VivoxUnity.AsyncNoResult ar
    // Size: 0x8
    // Offset: 0x10
    ::VivoxUnity::AsyncNoResult* ar;
    // Field size check
    static_assert(sizeof(::VivoxUnity::AsyncNoResult*) == 0x8);
    public:
    // Creating conversion operator: operator ::VivoxUnity::AsyncNoResult*
    constexpr operator ::VivoxUnity::AsyncNoResult*() const noexcept {
      return ar;
    }
    // Get instance field reference: public VivoxUnity.AsyncNoResult ar
    [[deprecated("Use field access instead!")]] ::VivoxUnity::AsyncNoResult*& dyn_ar();
    // public System.Void .ctor()
    // Offset: 0x14C28E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ChannelSession::$$c__DisplayClass36_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VivoxUnity::Private::ChannelSession::$$c__DisplayClass36_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ChannelSession::$$c__DisplayClass36_0*, creationType>()));
    }
  }; // VivoxUnity.Private.ChannelSession/<>c__DisplayClass36_0
  #pragma pack(pop)
  static check_size<sizeof(ChannelSession::$$c__DisplayClass36_0), 16 + sizeof(::VivoxUnity::AsyncNoResult*)> __VivoxUnity_Private_ChannelSession_$$c__DisplayClass36_0SizeCheck;
  static_assert(sizeof(ChannelSession::$$c__DisplayClass36_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VivoxUnity::Private::ChannelSession::$$c__DisplayClass36_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
