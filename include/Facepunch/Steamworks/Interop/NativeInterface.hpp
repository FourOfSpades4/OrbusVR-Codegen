// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: SteamNative
namespace SteamNative {
  // Forward declaring type: SteamApi
  class SteamApi;
  // Forward declaring type: SteamClient
  class SteamClient;
  // Forward declaring type: SteamUser
  class SteamUser;
  // Forward declaring type: SteamApps
  class SteamApps;
  // Forward declaring type: SteamAppList
  class SteamAppList;
  // Forward declaring type: SteamFriends
  class SteamFriends;
  // Forward declaring type: SteamMatchmakingServers
  class SteamMatchmakingServers;
  // Forward declaring type: SteamMatchmaking
  class SteamMatchmaking;
  // Forward declaring type: SteamInventory
  class SteamInventory;
  // Forward declaring type: SteamNetworking
  class SteamNetworking;
  // Forward declaring type: SteamUserStats
  class SteamUserStats;
  // Forward declaring type: SteamUtils
  class SteamUtils;
  // Forward declaring type: SteamScreenshots
  class SteamScreenshots;
  // Forward declaring type: SteamHTTP
  class SteamHTTP;
  // Forward declaring type: SteamUGC
  class SteamUGC;
  // Forward declaring type: SteamGameServer
  class SteamGameServer;
  // Forward declaring type: SteamGameServerStats
  class SteamGameServerStats;
  // Forward declaring type: SteamRemoteStorage
  class SteamRemoteStorage;
}
// Completed forward declares
// Type namespace: Facepunch.Steamworks.Interop
namespace Facepunch::Steamworks::Interop {
  // Forward declaring type: NativeInterface
  class NativeInterface;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Facepunch::Steamworks::Interop::NativeInterface);
DEFINE_IL2CPP_ARG_TYPE(::Facepunch::Steamworks::Interop::NativeInterface*, "Facepunch.Steamworks.Interop", "NativeInterface");
// Type namespace: Facepunch.Steamworks.Interop
namespace Facepunch::Steamworks::Interop {
  // Size: 0xA1
  #pragma pack(push, 1)
  // Autogenerated type: Facepunch.Steamworks.Interop.NativeInterface
  // [TokenAttribute] Offset: FFFFFFFF
  class NativeInterface : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // SteamNative.SteamApi api
    // Size: 0x8
    // Offset: 0x10
    ::SteamNative::SteamApi* api;
    // Field size check
    static_assert(sizeof(::SteamNative::SteamApi*) == 0x8);
    // SteamNative.SteamClient client
    // Size: 0x8
    // Offset: 0x18
    ::SteamNative::SteamClient* client;
    // Field size check
    static_assert(sizeof(::SteamNative::SteamClient*) == 0x8);
    // SteamNative.SteamUser user
    // Size: 0x8
    // Offset: 0x20
    ::SteamNative::SteamUser* user;
    // Field size check
    static_assert(sizeof(::SteamNative::SteamUser*) == 0x8);
    // SteamNative.SteamApps apps
    // Size: 0x8
    // Offset: 0x28
    ::SteamNative::SteamApps* apps;
    // Field size check
    static_assert(sizeof(::SteamNative::SteamApps*) == 0x8);
    // SteamNative.SteamAppList applist
    // Size: 0x8
    // Offset: 0x30
    ::SteamNative::SteamAppList* applist;
    // Field size check
    static_assert(sizeof(::SteamNative::SteamAppList*) == 0x8);
    // SteamNative.SteamFriends friends
    // Size: 0x8
    // Offset: 0x38
    ::SteamNative::SteamFriends* friends;
    // Field size check
    static_assert(sizeof(::SteamNative::SteamFriends*) == 0x8);
    // SteamNative.SteamMatchmakingServers servers
    // Size: 0x8
    // Offset: 0x40
    ::SteamNative::SteamMatchmakingServers* servers;
    // Field size check
    static_assert(sizeof(::SteamNative::SteamMatchmakingServers*) == 0x8);
    // SteamNative.SteamMatchmaking matchmaking
    // Size: 0x8
    // Offset: 0x48
    ::SteamNative::SteamMatchmaking* matchmaking;
    // Field size check
    static_assert(sizeof(::SteamNative::SteamMatchmaking*) == 0x8);
    // SteamNative.SteamInventory inventory
    // Size: 0x8
    // Offset: 0x50
    ::SteamNative::SteamInventory* inventory;
    // Field size check
    static_assert(sizeof(::SteamNative::SteamInventory*) == 0x8);
    // SteamNative.SteamNetworking networking
    // Size: 0x8
    // Offset: 0x58
    ::SteamNative::SteamNetworking* networking;
    // Field size check
    static_assert(sizeof(::SteamNative::SteamNetworking*) == 0x8);
    // SteamNative.SteamUserStats userstats
    // Size: 0x8
    // Offset: 0x60
    ::SteamNative::SteamUserStats* userstats;
    // Field size check
    static_assert(sizeof(::SteamNative::SteamUserStats*) == 0x8);
    // SteamNative.SteamUtils utils
    // Size: 0x8
    // Offset: 0x68
    ::SteamNative::SteamUtils* utils;
    // Field size check
    static_assert(sizeof(::SteamNative::SteamUtils*) == 0x8);
    // SteamNative.SteamScreenshots screenshots
    // Size: 0x8
    // Offset: 0x70
    ::SteamNative::SteamScreenshots* screenshots;
    // Field size check
    static_assert(sizeof(::SteamNative::SteamScreenshots*) == 0x8);
    // SteamNative.SteamHTTP http
    // Size: 0x8
    // Offset: 0x78
    ::SteamNative::SteamHTTP* http;
    // Field size check
    static_assert(sizeof(::SteamNative::SteamHTTP*) == 0x8);
    // SteamNative.SteamUGC ugc
    // Size: 0x8
    // Offset: 0x80
    ::SteamNative::SteamUGC* ugc;
    // Field size check
    static_assert(sizeof(::SteamNative::SteamUGC*) == 0x8);
    // SteamNative.SteamGameServer gameServer
    // Size: 0x8
    // Offset: 0x88
    ::SteamNative::SteamGameServer* gameServer;
    // Field size check
    static_assert(sizeof(::SteamNative::SteamGameServer*) == 0x8);
    // SteamNative.SteamGameServerStats gameServerStats
    // Size: 0x8
    // Offset: 0x90
    ::SteamNative::SteamGameServerStats* gameServerStats;
    // Field size check
    static_assert(sizeof(::SteamNative::SteamGameServerStats*) == 0x8);
    // SteamNative.SteamRemoteStorage remoteStorage
    // Size: 0x8
    // Offset: 0x98
    ::SteamNative::SteamRemoteStorage* remoteStorage;
    // Field size check
    static_assert(sizeof(::SteamNative::SteamRemoteStorage*) == 0x8);
    // private System.Boolean isServer
    // Size: 0x1
    // Offset: 0xA0
    bool isServer;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: SteamNative.SteamApi api
    [[deprecated("Use field access instead!")]] ::SteamNative::SteamApi*& dyn_api();
    // Get instance field reference: SteamNative.SteamClient client
    [[deprecated("Use field access instead!")]] ::SteamNative::SteamClient*& dyn_client();
    // Get instance field reference: SteamNative.SteamUser user
    [[deprecated("Use field access instead!")]] ::SteamNative::SteamUser*& dyn_user();
    // Get instance field reference: SteamNative.SteamApps apps
    [[deprecated("Use field access instead!")]] ::SteamNative::SteamApps*& dyn_apps();
    // Get instance field reference: SteamNative.SteamAppList applist
    [[deprecated("Use field access instead!")]] ::SteamNative::SteamAppList*& dyn_applist();
    // Get instance field reference: SteamNative.SteamFriends friends
    [[deprecated("Use field access instead!")]] ::SteamNative::SteamFriends*& dyn_friends();
    // Get instance field reference: SteamNative.SteamMatchmakingServers servers
    [[deprecated("Use field access instead!")]] ::SteamNative::SteamMatchmakingServers*& dyn_servers();
    // Get instance field reference: SteamNative.SteamMatchmaking matchmaking
    [[deprecated("Use field access instead!")]] ::SteamNative::SteamMatchmaking*& dyn_matchmaking();
    // Get instance field reference: SteamNative.SteamInventory inventory
    [[deprecated("Use field access instead!")]] ::SteamNative::SteamInventory*& dyn_inventory();
    // Get instance field reference: SteamNative.SteamNetworking networking
    [[deprecated("Use field access instead!")]] ::SteamNative::SteamNetworking*& dyn_networking();
    // Get instance field reference: SteamNative.SteamUserStats userstats
    [[deprecated("Use field access instead!")]] ::SteamNative::SteamUserStats*& dyn_userstats();
    // Get instance field reference: SteamNative.SteamUtils utils
    [[deprecated("Use field access instead!")]] ::SteamNative::SteamUtils*& dyn_utils();
    // Get instance field reference: SteamNative.SteamScreenshots screenshots
    [[deprecated("Use field access instead!")]] ::SteamNative::SteamScreenshots*& dyn_screenshots();
    // Get instance field reference: SteamNative.SteamHTTP http
    [[deprecated("Use field access instead!")]] ::SteamNative::SteamHTTP*& dyn_http();
    // Get instance field reference: SteamNative.SteamUGC ugc
    [[deprecated("Use field access instead!")]] ::SteamNative::SteamUGC*& dyn_ugc();
    // Get instance field reference: SteamNative.SteamGameServer gameServer
    [[deprecated("Use field access instead!")]] ::SteamNative::SteamGameServer*& dyn_gameServer();
    // Get instance field reference: SteamNative.SteamGameServerStats gameServerStats
    [[deprecated("Use field access instead!")]] ::SteamNative::SteamGameServerStats*& dyn_gameServerStats();
    // Get instance field reference: SteamNative.SteamRemoteStorage remoteStorage
    [[deprecated("Use field access instead!")]] ::SteamNative::SteamRemoteStorage*& dyn_remoteStorage();
    // Get instance field reference: private System.Boolean isServer
    [[deprecated("Use field access instead!")]] bool& dyn_isServer();
    // public System.Void Dispose()
    // Offset: 0x2840FF0
    void Dispose();
  }; // Facepunch.Steamworks.Interop.NativeInterface
  #pragma pack(pop)
  static check_size<sizeof(NativeInterface), 160 + sizeof(bool)> __Facepunch_Steamworks_Interop_NativeInterfaceSizeCheck;
  static_assert(sizeof(NativeInterface) == 0xA1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Facepunch::Steamworks::Interop::NativeInterface::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facepunch::Steamworks::Interop::NativeInterface::*)()>(&Facepunch::Steamworks::Interop::NativeInterface::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facepunch::Steamworks::Interop::NativeInterface*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};