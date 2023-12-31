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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Facepunch::Steamworks
namespace Facepunch::Steamworks {
  // Forward declaring type: Client
  class Client;
  // Forward declaring type: SteamFriend
  class SteamFriend;
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: SteamNative
namespace SteamNative {
  // Forward declaring type: GameConnectedFriendChatMsg_t
  struct GameConnectedFriendChatMsg_t;
  // Forward declaring type: GameRichPresenceJoinRequested_t
  struct GameRichPresenceJoinRequested_t;
  // Forward declaring type: PersonaStateChange_t
  struct PersonaStateChange_t;
  // Forward declaring type: AvatarImageLoaded_t
  struct AvatarImageLoaded_t;
}
// Completed forward declares
// Type namespace: Facepunch.Steamworks
namespace Facepunch::Steamworks {
  // Forward declaring type: Friends
  class Friends;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Facepunch::Steamworks::Friends);
DEFINE_IL2CPP_ARG_TYPE(::Facepunch::Steamworks::Friends*, "Facepunch.Steamworks", "Friends");
// Type namespace: Facepunch.Steamworks
namespace Facepunch::Steamworks {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Facepunch.Steamworks.Friends
  // [TokenAttribute] Offset: FFFFFFFF
  class Friends : public ::Il2CppObject {
    public:
    // Nested type: ::Facepunch::Steamworks::Friends::ChatMessageDelegate
    class ChatMessageDelegate;
    // Nested type: ::Facepunch::Steamworks::Friends::JoinRequestedDelegate
    class JoinRequestedDelegate;
    // Nested type: ::Facepunch::Steamworks::Friends::AvatarSize
    struct AvatarSize;
    // Nested type: ::Facepunch::Steamworks::Friends::PersonaCallback
    class PersonaCallback;
    // Nested type: ::Facepunch::Steamworks::Friends::$$c__DisplayClass32_0
    class $$c__DisplayClass32_0;
    public:
    // Facepunch.Steamworks.Client client
    // Size: 0x8
    // Offset: 0x10
    ::Facepunch::Steamworks::Client* client;
    // Field size check
    static_assert(sizeof(::Facepunch::Steamworks::Client*) == 0x8);
    // private System.Byte[] buffer
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> buffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xAB2CF8
    // private Facepunch.Steamworks.Friends/ChatMessageDelegate OnChatMessage
    // Size: 0x8
    // Offset: 0x20
    ::Facepunch::Steamworks::Friends::ChatMessageDelegate* OnChatMessage;
    // Field size check
    static_assert(sizeof(::Facepunch::Steamworks::Friends::ChatMessageDelegate*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xAB2D08
    // private Facepunch.Steamworks.Friends/JoinRequestedDelegate OnInvitedToGame
    // Size: 0x8
    // Offset: 0x28
    ::Facepunch::Steamworks::Friends::JoinRequestedDelegate* OnInvitedToGame;
    // Field size check
    static_assert(sizeof(::Facepunch::Steamworks::Friends::JoinRequestedDelegate*) == 0x8);
    // private System.Collections.Generic.List`1<Facepunch.Steamworks.SteamFriend> _allFriends
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::List_1<::Facepunch::Steamworks::SteamFriend*>* allFriends;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Facepunch::Steamworks::SteamFriend*>*) == 0x8);
    // private System.Collections.Generic.List`1<Facepunch.Steamworks.Friends/PersonaCallback> PersonaCallbacks
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::List_1<::Facepunch::Steamworks::Friends::PersonaCallback*>* PersonaCallbacks;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Facepunch::Steamworks::Friends::PersonaCallback*>*) == 0x8);
    public:
    // Get instance field reference: Facepunch.Steamworks.Client client
    [[deprecated("Use field access instead!")]] ::Facepunch::Steamworks::Client*& dyn_client();
    // Get instance field reference: private System.Byte[] buffer
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_buffer();
    // Get instance field reference: private Facepunch.Steamworks.Friends/ChatMessageDelegate OnChatMessage
    [[deprecated("Use field access instead!")]] ::Facepunch::Steamworks::Friends::ChatMessageDelegate*& dyn_OnChatMessage();
    // Get instance field reference: private Facepunch.Steamworks.Friends/JoinRequestedDelegate OnInvitedToGame
    [[deprecated("Use field access instead!")]] ::Facepunch::Steamworks::Friends::JoinRequestedDelegate*& dyn_OnInvitedToGame();
    // Get instance field reference: private System.Collections.Generic.List`1<Facepunch.Steamworks.SteamFriend> _allFriends
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Facepunch::Steamworks::SteamFriend*>*& dyn__allFriends();
    // Get instance field reference: private System.Collections.Generic.List`1<Facepunch.Steamworks.Friends/PersonaCallback> PersonaCallbacks
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Facepunch::Steamworks::Friends::PersonaCallback*>*& dyn_PersonaCallbacks();
    // System.Void .ctor(Facepunch.Steamworks.Client c)
    // Offset: 0x2842188
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Friends* New_ctor(::Facepunch::Steamworks::Client* c) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Facepunch::Steamworks::Friends::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Friends*, creationType>(c)));
    }
    // private System.Void OnFriendChatMessage(SteamNative.GameConnectedFriendChatMsg_t data)
    // Offset: 0x284238C
    void OnFriendChatMessage(::SteamNative::GameConnectedFriendChatMsg_t data);
    // private System.Void OnGameJoinRequested(SteamNative.GameRichPresenceJoinRequested_t data)
    // Offset: 0x2842F78
    void OnGameJoinRequested(::SteamNative::GameRichPresenceJoinRequested_t data);
    // public System.Collections.Generic.IEnumerable`1<Facepunch.Steamworks.SteamFriend> get_All()
    // Offset: 0x2843738
    ::System::Collections::Generic::IEnumerable_1<::Facepunch::Steamworks::SteamFriend*>* get_All();
    // public System.Void Refresh()
    // Offset: 0x28437B4
    void Refresh();
    // public Facepunch.Steamworks.Image GetCachedAvatar(Facepunch.Steamworks.Friends/AvatarSize size, System.UInt64 steamid)
    // Offset: 0x2843AB8
    ::Facepunch::Steamworks::Image* GetCachedAvatar(::Facepunch::Steamworks::Friends::AvatarSize size, uint64_t steamid);
    // public Facepunch.Steamworks.SteamFriend Get(System.UInt64 steamid)
    // Offset: 0x2842564
    ::Facepunch::Steamworks::SteamFriend* Get(uint64_t steamid);
    // System.Void Cycle()
    // Offset: 0x2841D94
    void Cycle();
    // private System.Void OnPersonaStateChange(SteamNative.PersonaStateChange_t data)
    // Offset: 0x28441F8
    void OnPersonaStateChange(::SteamNative::PersonaStateChange_t data);
    // private System.Void LoadAvatarForSteamId(System.UInt64 Steamid)
    // Offset: 0x28444B4
    void LoadAvatarForSteamId(uint64_t Steamid);
    // private System.Void OnAvatarImageLoaded(SteamNative.AvatarImageLoaded_t data)
    // Offset: 0x28445F0
    void OnAvatarImageLoaded(::SteamNative::AvatarImageLoaded_t data);
  }; // Facepunch.Steamworks.Friends
  #pragma pack(pop)
  static check_size<sizeof(Friends), 56 + sizeof(::System::Collections::Generic::List_1<::Facepunch::Steamworks::Friends::PersonaCallback*>*)> __Facepunch_Steamworks_FriendsSizeCheck;
  static_assert(sizeof(Friends) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Facepunch::Steamworks::Friends::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Facepunch::Steamworks::Friends::OnFriendChatMessage
// Il2CppName: OnFriendChatMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facepunch::Steamworks::Friends::*)(::SteamNative::GameConnectedFriendChatMsg_t)>(&Facepunch::Steamworks::Friends::OnFriendChatMessage)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("SteamNative", "GameConnectedFriendChatMsg_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facepunch::Steamworks::Friends*), "OnFriendChatMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: Facepunch::Steamworks::Friends::OnGameJoinRequested
// Il2CppName: OnGameJoinRequested
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facepunch::Steamworks::Friends::*)(::SteamNative::GameRichPresenceJoinRequested_t)>(&Facepunch::Steamworks::Friends::OnGameJoinRequested)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("SteamNative", "GameRichPresenceJoinRequested_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facepunch::Steamworks::Friends*), "OnGameJoinRequested", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: Facepunch::Steamworks::Friends::get_All
// Il2CppName: get_All
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::Facepunch::Steamworks::SteamFriend*>* (Facepunch::Steamworks::Friends::*)()>(&Facepunch::Steamworks::Friends::get_All)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facepunch::Steamworks::Friends*), "get_All", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facepunch::Steamworks::Friends::Refresh
// Il2CppName: Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facepunch::Steamworks::Friends::*)()>(&Facepunch::Steamworks::Friends::Refresh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facepunch::Steamworks::Friends*), "Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facepunch::Steamworks::Friends::GetCachedAvatar
// Il2CppName: GetCachedAvatar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Facepunch::Steamworks::Image* (Facepunch::Steamworks::Friends::*)(::Facepunch::Steamworks::Friends::AvatarSize, uint64_t)>(&Facepunch::Steamworks::Friends::GetCachedAvatar)> {
  static const MethodInfo* get() {
    static auto* size = &::il2cpp_utils::GetClassFromName("Facepunch.Steamworks", "Friends/AvatarSize")->byval_arg;
    static auto* steamid = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facepunch::Steamworks::Friends*), "GetCachedAvatar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{size, steamid});
  }
};
// Writing MetadataGetter for method: Facepunch::Steamworks::Friends::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Facepunch::Steamworks::SteamFriend* (Facepunch::Steamworks::Friends::*)(uint64_t)>(&Facepunch::Steamworks::Friends::Get)> {
  static const MethodInfo* get() {
    static auto* steamid = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facepunch::Steamworks::Friends*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{steamid});
  }
};
// Writing MetadataGetter for method: Facepunch::Steamworks::Friends::Cycle
// Il2CppName: Cycle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facepunch::Steamworks::Friends::*)()>(&Facepunch::Steamworks::Friends::Cycle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facepunch::Steamworks::Friends*), "Cycle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facepunch::Steamworks::Friends::OnPersonaStateChange
// Il2CppName: OnPersonaStateChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facepunch::Steamworks::Friends::*)(::SteamNative::PersonaStateChange_t)>(&Facepunch::Steamworks::Friends::OnPersonaStateChange)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("SteamNative", "PersonaStateChange_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facepunch::Steamworks::Friends*), "OnPersonaStateChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: Facepunch::Steamworks::Friends::LoadAvatarForSteamId
// Il2CppName: LoadAvatarForSteamId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facepunch::Steamworks::Friends::*)(uint64_t)>(&Facepunch::Steamworks::Friends::LoadAvatarForSteamId)> {
  static const MethodInfo* get() {
    static auto* Steamid = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facepunch::Steamworks::Friends*), "LoadAvatarForSteamId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{Steamid});
  }
};
// Writing MetadataGetter for method: Facepunch::Steamworks::Friends::OnAvatarImageLoaded
// Il2CppName: OnAvatarImageLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facepunch::Steamworks::Friends::*)(::SteamNative::AvatarImageLoaded_t)>(&Facepunch::Steamworks::Friends::OnAvatarImageLoaded)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("SteamNative", "AvatarImageLoaded_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facepunch::Steamworks::Friends*), "OnAvatarImageLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
