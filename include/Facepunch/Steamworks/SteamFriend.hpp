// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SteamNative.PersonaState
#include "SteamNative/PersonaState.hpp"
// Including type: SteamNative.FriendRelationship
#include "SteamNative/FriendRelationship.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Facepunch::Steamworks
namespace Facepunch::Steamworks {
  // Forward declaring type: Client
  class Client;
}
// Completed forward declares
// Type namespace: Facepunch.Steamworks
namespace Facepunch::Steamworks {
  // Forward declaring type: SteamFriend
  class SteamFriend;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Facepunch::Steamworks::SteamFriend);
DEFINE_IL2CPP_ARG_TYPE(::Facepunch::Steamworks::SteamFriend*, "Facepunch.Steamworks", "SteamFriend");
// Type namespace: Facepunch.Steamworks
namespace Facepunch::Steamworks {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: Facepunch.Steamworks.SteamFriend
  // [TokenAttribute] Offset: FFFFFFFF
  class SteamFriend : public ::Il2CppObject {
    public:
    public:
    // [CompilerGeneratedAttribute] Offset: 0xAB2D78
    // private System.UInt64 <Id>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    uint64_t Id;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.String Name
    // Size: 0x8
    // Offset: 0x18
    ::StringW Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xAB2D88
    // private System.UInt64 <CurrentAppId>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    uint64_t CurrentAppId;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xAB2D98
    // private System.UInt32 <ServerIp>k__BackingField
    // Size: 0x4
    // Offset: 0x28
    uint ServerIp;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xAB2DA8
    // private System.Int32 <ServerGamePort>k__BackingField
    // Size: 0x4
    // Offset: 0x2C
    int ServerGamePort;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xAB2DB8
    // private System.Int32 <ServerQueryPort>k__BackingField
    // Size: 0x4
    // Offset: 0x30
    int ServerQueryPort;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: ServerQueryPort and: ServerLobbyId
    char __padding5[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xAB2DC8
    // private System.UInt64 <ServerLobbyId>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    uint64_t ServerLobbyId;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xAB2DD8
    // private Facepunch.Steamworks.Client <Client>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    ::Facepunch::Steamworks::Client* Client;
    // Field size check
    static_assert(sizeof(::Facepunch::Steamworks::Client*) == 0x8);
    // private SteamNative.PersonaState personaState
    // Size: 0x4
    // Offset: 0x48
    ::SteamNative::PersonaState personaState;
    // Field size check
    static_assert(sizeof(::SteamNative::PersonaState) == 0x4);
    // private SteamNative.FriendRelationship relationship
    // Size: 0x4
    // Offset: 0x4C
    ::SteamNative::FriendRelationship relationship;
    // Field size check
    static_assert(sizeof(::SteamNative::FriendRelationship) == 0x4);
    public:
    // Get instance field reference: private System.UInt64 <Id>k__BackingField
    [[deprecated("Use field access instead!")]] uint64_t& dyn_$Id$k__BackingField();
    // Get instance field reference: public System.String Name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Name();
    // Get instance field reference: private System.UInt64 <CurrentAppId>k__BackingField
    [[deprecated("Use field access instead!")]] uint64_t& dyn_$CurrentAppId$k__BackingField();
    // Get instance field reference: private System.UInt32 <ServerIp>k__BackingField
    [[deprecated("Use field access instead!")]] uint& dyn_$ServerIp$k__BackingField();
    // Get instance field reference: private System.Int32 <ServerGamePort>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$ServerGamePort$k__BackingField();
    // Get instance field reference: private System.Int32 <ServerQueryPort>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$ServerQueryPort$k__BackingField();
    // Get instance field reference: private System.UInt64 <ServerLobbyId>k__BackingField
    [[deprecated("Use field access instead!")]] uint64_t& dyn_$ServerLobbyId$k__BackingField();
    // Get instance field reference: private Facepunch.Steamworks.Client <Client>k__BackingField
    [[deprecated("Use field access instead!")]] ::Facepunch::Steamworks::Client*& dyn_$Client$k__BackingField();
    // Get instance field reference: private SteamNative.PersonaState personaState
    [[deprecated("Use field access instead!")]] ::SteamNative::PersonaState& dyn_personaState();
    // Get instance field reference: private SteamNative.FriendRelationship relationship
    [[deprecated("Use field access instead!")]] ::SteamNative::FriendRelationship& dyn_relationship();
    // public System.UInt64 get_Id()
    // Offset: 0x28445E8
    uint64_t get_Id();
    // System.Void set_Id(System.UInt64 value)
    // Offset: 0x2844024
    void set_Id(uint64_t value);
    // System.Void set_CurrentAppId(System.UInt64 value)
    // Offset: 0x2845960
    void set_CurrentAppId(uint64_t value);
    // System.Void set_ServerIp(System.UInt32 value)
    // Offset: 0x2845968
    void set_ServerIp(uint value);
    // System.Void set_ServerGamePort(System.Int32 value)
    // Offset: 0x2845970
    void set_ServerGamePort(int value);
    // System.Void set_ServerQueryPort(System.Int32 value)
    // Offset: 0x2845978
    void set_ServerQueryPort(int value);
    // System.Void set_ServerLobbyId(System.UInt64 value)
    // Offset: 0x2845980
    void set_ServerLobbyId(uint64_t value);
    // Facepunch.Steamworks.Client get_Client()
    // Offset: 0x2845988
    ::Facepunch::Steamworks::Client* get_Client();
    // System.Void set_Client(Facepunch.Steamworks.Client value)
    // Offset: 0x284402C
    void set_Client(::Facepunch::Steamworks::Client* value);
    // public System.Void Refresh()
    // Offset: 0x2844034
    void Refresh();
    // public System.Void .ctor()
    // Offset: 0x284401C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamFriend* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Facepunch::Steamworks::SteamFriend::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamFriend*, creationType>()));
    }
  }; // Facepunch.Steamworks.SteamFriend
  #pragma pack(pop)
  static check_size<sizeof(SteamFriend), 76 + sizeof(::SteamNative::FriendRelationship)> __Facepunch_Steamworks_SteamFriendSizeCheck;
  static_assert(sizeof(SteamFriend) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Facepunch::Steamworks::SteamFriend::get_Id
// Il2CppName: get_Id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (Facepunch::Steamworks::SteamFriend::*)()>(&Facepunch::Steamworks::SteamFriend::get_Id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facepunch::Steamworks::SteamFriend*), "get_Id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facepunch::Steamworks::SteamFriend::set_Id
// Il2CppName: set_Id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facepunch::Steamworks::SteamFriend::*)(uint64_t)>(&Facepunch::Steamworks::SteamFriend::set_Id)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facepunch::Steamworks::SteamFriend*), "set_Id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Facepunch::Steamworks::SteamFriend::set_CurrentAppId
// Il2CppName: set_CurrentAppId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facepunch::Steamworks::SteamFriend::*)(uint64_t)>(&Facepunch::Steamworks::SteamFriend::set_CurrentAppId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facepunch::Steamworks::SteamFriend*), "set_CurrentAppId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Facepunch::Steamworks::SteamFriend::set_ServerIp
// Il2CppName: set_ServerIp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facepunch::Steamworks::SteamFriend::*)(uint)>(&Facepunch::Steamworks::SteamFriend::set_ServerIp)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facepunch::Steamworks::SteamFriend*), "set_ServerIp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Facepunch::Steamworks::SteamFriend::set_ServerGamePort
// Il2CppName: set_ServerGamePort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facepunch::Steamworks::SteamFriend::*)(int)>(&Facepunch::Steamworks::SteamFriend::set_ServerGamePort)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facepunch::Steamworks::SteamFriend*), "set_ServerGamePort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Facepunch::Steamworks::SteamFriend::set_ServerQueryPort
// Il2CppName: set_ServerQueryPort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facepunch::Steamworks::SteamFriend::*)(int)>(&Facepunch::Steamworks::SteamFriend::set_ServerQueryPort)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facepunch::Steamworks::SteamFriend*), "set_ServerQueryPort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Facepunch::Steamworks::SteamFriend::set_ServerLobbyId
// Il2CppName: set_ServerLobbyId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facepunch::Steamworks::SteamFriend::*)(uint64_t)>(&Facepunch::Steamworks::SteamFriend::set_ServerLobbyId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facepunch::Steamworks::SteamFriend*), "set_ServerLobbyId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Facepunch::Steamworks::SteamFriend::get_Client
// Il2CppName: get_Client
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Facepunch::Steamworks::Client* (Facepunch::Steamworks::SteamFriend::*)()>(&Facepunch::Steamworks::SteamFriend::get_Client)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facepunch::Steamworks::SteamFriend*), "get_Client", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facepunch::Steamworks::SteamFriend::set_Client
// Il2CppName: set_Client
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facepunch::Steamworks::SteamFriend::*)(::Facepunch::Steamworks::Client*)>(&Facepunch::Steamworks::SteamFriend::set_Client)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Facepunch.Steamworks", "Client")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facepunch::Steamworks::SteamFriend*), "set_Client", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Facepunch::Steamworks::SteamFriend::Refresh
// Il2CppName: Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facepunch::Steamworks::SteamFriend::*)()>(&Facepunch::Steamworks::SteamFriend::Refresh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facepunch::Steamworks::SteamFriend*), "Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facepunch::Steamworks::SteamFriend::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
