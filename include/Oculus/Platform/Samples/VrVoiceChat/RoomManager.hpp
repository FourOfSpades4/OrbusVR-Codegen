// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
  // Forward declaring type: Message
  class Message;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: User
  class User;
  // Forward declaring type: Room
  class Room;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Samples.VrVoiceChat
namespace Oculus::Platform::Samples::VrVoiceChat {
  // Forward declaring type: RoomManager
  class RoomManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Samples::VrVoiceChat::RoomManager);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Samples::VrVoiceChat::RoomManager*, "Oculus.Platform.Samples.VrVoiceChat", "RoomManager");
// Type namespace: Oculus.Platform.Samples.VrVoiceChat
namespace Oculus::Platform::Samples::VrVoiceChat {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Samples.VrVoiceChat.RoomManager
  // [TokenAttribute] Offset: FFFFFFFF
  class RoomManager : public ::Il2CppObject {
    public:
    // Nested type: ::Oculus::Platform::Samples::VrVoiceChat::RoomManager::Invite
    struct Invite;
    // Size: 0x10
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Oculus.Platform.Samples.VrVoiceChat.RoomManager/Invite
    // [TokenAttribute] Offset: FFFFFFFF
    struct Invite/*, public ::System::ValueType*/ {
      public:
      public:
      // public readonly System.UInt64 RoomID
      // Size: 0x8
      // Offset: 0x0
      uint64_t RoomID;
      // Field size check
      static_assert(sizeof(uint64_t) == 0x8);
      // public readonly System.String OwnerID
      // Size: 0x8
      // Offset: 0x8
      ::StringW OwnerID;
      // Field size check
      static_assert(sizeof(::StringW) == 0x8);
      public:
      // Creating value type constructor for type: Invite
      constexpr Invite(uint64_t RoomID_ = {}, ::StringW OwnerID_ = {}) noexcept : RoomID{RoomID_}, OwnerID{OwnerID_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public readonly System.UInt64 RoomID
      [[deprecated("Use field access instead!")]] uint64_t& dyn_RoomID();
      // Get instance field reference: public readonly System.String OwnerID
      [[deprecated("Use field access instead!")]] ::StringW& dyn_OwnerID();
      // public System.Void .ctor(System.UInt64 roomID, System.String owner)
      // Offset: 0xBA0994
      // ABORTED: conflicts with another method.  Invite(uint64_t roomID, ::StringW owner);
    }; // Oculus.Platform.Samples.VrVoiceChat.RoomManager/Invite
    #pragma pack(pop)
    static check_size<sizeof(RoomManager::Invite), 8 + sizeof(::StringW)> __Oculus_Platform_Samples_VrVoiceChat_RoomManager_InviteSizeCheck;
    static_assert(sizeof(RoomManager::Invite) == 0x10);
    public:
    // private System.UInt64 m_roomID
    // Size: 0x8
    // Offset: 0x10
    uint64_t m_roomID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private Oculus.Platform.Models.User m_remoteUser
    // Size: 0x8
    // Offset: 0x18
    ::Oculus::Platform::Models::User* m_remoteUser;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Models::User*) == 0x8);
    // private System.Single m_nextPollTime
    // Size: 0x4
    // Offset: 0x20
    float m_nextPollTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: m_nextPollTime and: m_pendingRoomRequests
    char __padding2[0x4] = {};
    // private System.Collections.Generic.HashSet`1<System.UInt64> m_pendingRoomRequests
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::HashSet_1<uint64_t>* m_pendingRoomRequests;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::HashSet_1<uint64_t>*) == 0x8);
    // private System.Collections.Generic.List`1<Oculus.Platform.Samples.VrVoiceChat.RoomManager/Invite> m_invites
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::List_1<::Oculus::Platform::Samples::VrVoiceChat::RoomManager::Invite>* m_invites;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Oculus::Platform::Samples::VrVoiceChat::RoomManager::Invite>*) == 0x8);
    public:
    // Get static field: static private readonly System.Single INVITE_POLL_FREQ_SECONDS
    static float _get_INVITE_POLL_FREQ_SECONDS();
    // Set static field: static private readonly System.Single INVITE_POLL_FREQ_SECONDS
    static void _set_INVITE_POLL_FREQ_SECONDS(float value);
    // Get instance field reference: private System.UInt64 m_roomID
    [[deprecated("Use field access instead!")]] uint64_t& dyn_m_roomID();
    // Get instance field reference: private Oculus.Platform.Models.User m_remoteUser
    [[deprecated("Use field access instead!")]] ::Oculus::Platform::Models::User*& dyn_m_remoteUser();
    // Get instance field reference: private System.Single m_nextPollTime
    [[deprecated("Use field access instead!")]] float& dyn_m_nextPollTime();
    // Get instance field reference: private System.Collections.Generic.HashSet`1<System.UInt64> m_pendingRoomRequests
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::HashSet_1<uint64_t>*& dyn_m_pendingRoomRequests();
    // Get instance field reference: private System.Collections.Generic.List`1<Oculus.Platform.Samples.VrVoiceChat.RoomManager/Invite> m_invites
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Oculus::Platform::Samples::VrVoiceChat::RoomManager::Invite>*& dyn_m_invites();
    // public System.Void .ctor()
    // Offset: 0x1542AE8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RoomManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Samples::VrVoiceChat::RoomManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RoomManager*, creationType>()));
    }
    // public System.UInt64 get_RemoteUserID()
    // Offset: 0x154369C
    uint64_t get_RemoteUserID();
    // public System.String get_RemoteOculusID()
    // Offset: 0x1544078
    ::StringW get_RemoteOculusID();
    // private System.Void LaunchedFromAcceptingInviteCallback(Oculus.Platform.Message`1<System.String> msg)
    // Offset: 0x15440DC
    void LaunchedFromAcceptingInviteCallback(::Oculus::Platform::Message_1<::StringW>* msg);
    // public System.Boolean CheckForLaunchInvite()
    // Offset: 0x1543010
    bool CheckForLaunchInvite();
    // public System.Void CreateRoomAndLaunchInviteMenu()
    // Offset: 0x15433F8
    void CreateRoomAndLaunchInviteMenu();
    // private System.Void CreateAndJoinPrivateRoomCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.Room> msg)
    // Offset: 0x1544240
    void CreateAndJoinPrivateRoomCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room*>* msg);
    // private System.Void OnLaunchInviteWorkflowComplete(Oculus.Platform.Message msg)
    // Offset: 0x1544390
    void OnLaunchInviteWorkflowComplete(::Oculus::Platform::Message* msg);
    // public System.Boolean get_ShouldPollInviteList()
    // Offset: 0x1542324
    bool get_ShouldPollInviteList();
    // public System.Void UpdateActiveInvitesList()
    // Offset: 0x1542364
    void UpdateActiveInvitesList();
    // private System.Void GetRoomInviteNotificationsCallback(Oculus.Platform.Message msg_untyped)
    // Offset: 0x154441C
    void GetRoomInviteNotificationsCallback(::Oculus::Platform::Message* msg_untyped);
    // private System.Void GetRoomInfoCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.Room> msg)
    // Offset: 0x154486C
    void GetRoomInfoCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room*>* msg);
    // public System.Void JoinExistingRoom(System.UInt64 roomID)
    // Offset: 0x15435E4
    void JoinExistingRoom(uint64_t roomID);
    // private System.Void JoinRoomCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.Room> msg)
    // Offset: 0x1544B04
    void JoinRoomCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room*>* msg);
    // private System.Void RoomUpdateCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.Room> msg)
    // Offset: 0x154513C
    void RoomUpdateCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room*>* msg);
    // public System.Void LeaveCurrentRoom()
    // Offset: 0x15430A8
    void LeaveCurrentRoom();
    // static private System.Void .cctor()
    // Offset: 0x154577C
    static void _cctor();
  }; // Oculus.Platform.Samples.VrVoiceChat.RoomManager
  #pragma pack(pop)
  static check_size<sizeof(RoomManager), 48 + sizeof(::System::Collections::Generic::List_1<::Oculus::Platform::Samples::VrVoiceChat::RoomManager::Invite>*)> __Oculus_Platform_Samples_VrVoiceChat_RoomManagerSizeCheck;
  static_assert(sizeof(RoomManager) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Samples::VrVoiceChat::RoomManager::Invite, "Oculus.Platform.Samples.VrVoiceChat", "RoomManager/Invite");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrVoiceChat::RoomManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrVoiceChat::RoomManager::get_RemoteUserID
// Il2CppName: get_RemoteUserID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (Oculus::Platform::Samples::VrVoiceChat::RoomManager::*)()>(&Oculus::Platform::Samples::VrVoiceChat::RoomManager::get_RemoteUserID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrVoiceChat::RoomManager*), "get_RemoteUserID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrVoiceChat::RoomManager::get_RemoteOculusID
// Il2CppName: get_RemoteOculusID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Oculus::Platform::Samples::VrVoiceChat::RoomManager::*)()>(&Oculus::Platform::Samples::VrVoiceChat::RoomManager::get_RemoteOculusID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrVoiceChat::RoomManager*), "get_RemoteOculusID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrVoiceChat::RoomManager::LaunchedFromAcceptingInviteCallback
// Il2CppName: LaunchedFromAcceptingInviteCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrVoiceChat::RoomManager::*)(::Oculus::Platform::Message_1<::StringW>*)>(&Oculus::Platform::Samples::VrVoiceChat::RoomManager::LaunchedFromAcceptingInviteCallback)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrVoiceChat::RoomManager*), "LaunchedFromAcceptingInviteCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrVoiceChat::RoomManager::CheckForLaunchInvite
// Il2CppName: CheckForLaunchInvite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Platform::Samples::VrVoiceChat::RoomManager::*)()>(&Oculus::Platform::Samples::VrVoiceChat::RoomManager::CheckForLaunchInvite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrVoiceChat::RoomManager*), "CheckForLaunchInvite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrVoiceChat::RoomManager::CreateRoomAndLaunchInviteMenu
// Il2CppName: CreateRoomAndLaunchInviteMenu
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrVoiceChat::RoomManager::*)()>(&Oculus::Platform::Samples::VrVoiceChat::RoomManager::CreateRoomAndLaunchInviteMenu)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrVoiceChat::RoomManager*), "CreateRoomAndLaunchInviteMenu", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrVoiceChat::RoomManager::CreateAndJoinPrivateRoomCallback
// Il2CppName: CreateAndJoinPrivateRoomCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrVoiceChat::RoomManager::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room*>*)>(&Oculus::Platform::Samples::VrVoiceChat::RoomManager::CreateAndJoinPrivateRoomCallback)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "Room")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrVoiceChat::RoomManager*), "CreateAndJoinPrivateRoomCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrVoiceChat::RoomManager::OnLaunchInviteWorkflowComplete
// Il2CppName: OnLaunchInviteWorkflowComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrVoiceChat::RoomManager::*)(::Oculus::Platform::Message*)>(&Oculus::Platform::Samples::VrVoiceChat::RoomManager::OnLaunchInviteWorkflowComplete)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrVoiceChat::RoomManager*), "OnLaunchInviteWorkflowComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrVoiceChat::RoomManager::get_ShouldPollInviteList
// Il2CppName: get_ShouldPollInviteList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Platform::Samples::VrVoiceChat::RoomManager::*)()>(&Oculus::Platform::Samples::VrVoiceChat::RoomManager::get_ShouldPollInviteList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrVoiceChat::RoomManager*), "get_ShouldPollInviteList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrVoiceChat::RoomManager::UpdateActiveInvitesList
// Il2CppName: UpdateActiveInvitesList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrVoiceChat::RoomManager::*)()>(&Oculus::Platform::Samples::VrVoiceChat::RoomManager::UpdateActiveInvitesList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrVoiceChat::RoomManager*), "UpdateActiveInvitesList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrVoiceChat::RoomManager::GetRoomInviteNotificationsCallback
// Il2CppName: GetRoomInviteNotificationsCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrVoiceChat::RoomManager::*)(::Oculus::Platform::Message*)>(&Oculus::Platform::Samples::VrVoiceChat::RoomManager::GetRoomInviteNotificationsCallback)> {
  static const MethodInfo* get() {
    static auto* msg_untyped = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrVoiceChat::RoomManager*), "GetRoomInviteNotificationsCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg_untyped});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrVoiceChat::RoomManager::GetRoomInfoCallback
// Il2CppName: GetRoomInfoCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrVoiceChat::RoomManager::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room*>*)>(&Oculus::Platform::Samples::VrVoiceChat::RoomManager::GetRoomInfoCallback)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "Room")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrVoiceChat::RoomManager*), "GetRoomInfoCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrVoiceChat::RoomManager::JoinExistingRoom
// Il2CppName: JoinExistingRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrVoiceChat::RoomManager::*)(uint64_t)>(&Oculus::Platform::Samples::VrVoiceChat::RoomManager::JoinExistingRoom)> {
  static const MethodInfo* get() {
    static auto* roomID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrVoiceChat::RoomManager*), "JoinExistingRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{roomID});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrVoiceChat::RoomManager::JoinRoomCallback
// Il2CppName: JoinRoomCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrVoiceChat::RoomManager::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room*>*)>(&Oculus::Platform::Samples::VrVoiceChat::RoomManager::JoinRoomCallback)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "Room")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrVoiceChat::RoomManager*), "JoinRoomCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrVoiceChat::RoomManager::RoomUpdateCallback
// Il2CppName: RoomUpdateCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrVoiceChat::RoomManager::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room*>*)>(&Oculus::Platform::Samples::VrVoiceChat::RoomManager::RoomUpdateCallback)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "Room")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrVoiceChat::RoomManager*), "RoomUpdateCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrVoiceChat::RoomManager::LeaveCurrentRoom
// Il2CppName: LeaveCurrentRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrVoiceChat::RoomManager::*)()>(&Oculus::Platform::Samples::VrVoiceChat::RoomManager::LeaveCurrentRoom)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrVoiceChat::RoomManager*), "LeaveCurrentRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrVoiceChat::RoomManager::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Oculus::Platform::Samples::VrVoiceChat::RoomManager::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrVoiceChat::RoomManager*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};