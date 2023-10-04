// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents
#include "UnityEngine/Networking/PlayerConnection/PlayerEditorConnectionEvents.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::$AddAndCreate$c__AnonStorey1);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::$AddAndCreate$c__AnonStorey1*, "UnityEngine.Networking.PlayerConnection", "PlayerEditorConnectionEvents/<AddAndCreate>c__AnonStorey1");
// Type namespace: UnityEngine.Networking.PlayerConnection
namespace UnityEngine::Networking::PlayerConnection {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<AddAndCreate>c__AnonStorey1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: A71E48
  class PlayerEditorConnectionEvents::$AddAndCreate$c__AnonStorey1 : public ::Il2CppObject {
    public:
    public:
    // System.Guid messageId
    // Size: 0x10
    // Offset: 0x10
    ::System::Guid messageId;
    // Field size check
    static_assert(sizeof(::System::Guid) == 0x10);
    public:
    // Creating conversion operator: operator ::System::Guid
    constexpr operator ::System::Guid() const noexcept {
      return messageId;
    }
    // Get instance field reference: System.Guid messageId
    [[deprecated("Use field access instead!")]] ::System::Guid& dyn_messageId();
    // public System.Void .ctor()
    // Offset: 0x1CCB8E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerEditorConnectionEvents::$AddAndCreate$c__AnonStorey1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::$AddAndCreate$c__AnonStorey1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerEditorConnectionEvents::$AddAndCreate$c__AnonStorey1*, creationType>()));
    }
    // System.Boolean <>m__0(UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers x)
    // Offset: 0x1CCB9E4
    bool $$m__0(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::MessageTypeSubscribers* x);
  }; // UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<AddAndCreate>c__AnonStorey1
  #pragma pack(pop)
  static check_size<sizeof(PlayerEditorConnectionEvents::$AddAndCreate$c__AnonStorey1), 16 + sizeof(::System::Guid)> __UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_$AddAndCreate$c__AnonStorey1SizeCheck;
  static_assert(sizeof(PlayerEditorConnectionEvents::$AddAndCreate$c__AnonStorey1) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::$AddAndCreate$c__AnonStorey1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::$AddAndCreate$c__AnonStorey1::$$m__0
// Il2CppName: <>m__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::$AddAndCreate$c__AnonStorey1::*)(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::MessageTypeSubscribers*)>(&UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::$AddAndCreate$c__AnonStorey1::$$m__0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine.Networking.PlayerConnection", "PlayerEditorConnectionEvents/MessageTypeSubscribers")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::$AddAndCreate$c__AnonStorey1*), "<>m__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};