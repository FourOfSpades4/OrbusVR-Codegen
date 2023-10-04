// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: HostTopology
  class HostTopology;
  // Forward declaring type: HostTopologyInternal
  class HostTopologyInternal;
}
// Completed forward declares
// Type namespace: UnityEngine.Networking
namespace UnityEngine::Networking {
  // Forward declaring type: NetworkTransport
  class NetworkTransport;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Networking::NetworkTransport);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::NetworkTransport*, "UnityEngine.Networking", "NetworkTransport");
// Type namespace: UnityEngine.Networking
namespace UnityEngine::Networking {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Networking.NetworkTransport
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: AA5714
  // [NativeHeaderAttribute] Offset: AA5714
  // [NativeConditionalAttribute] Offset: AA5714
  // [NativeHeaderAttribute] Offset: AA5714
  // [ObsoleteAttribute] Offset: AA5714
  class NetworkTransport : public ::Il2CppObject {
    public:
    // Get static field: static private System.Int32 s_nextSceneId
    static int _get_s_nextSceneId();
    // Set static field: static private System.Int32 s_nextSceneId
    static void _set_s_nextSceneId(int value);
    // static public System.Void Init()
    // Offset: 0x288BB38
    static void Init();
    // static private System.Void InitializeClass()
    // Offset: 0x288BB94
    static void InitializeClass();
    // static public System.Int32 AddHostWithSimulator(UnityEngine.Networking.HostTopology topology, System.Int32 minTimeout, System.Int32 maxTimeout, System.Int32 port, System.String ip)
    // Offset: 0x288BBEC
    static int AddHostWithSimulator(::UnityEngine::Networking::HostTopology* topology, int minTimeout, int maxTimeout, int port, ::StringW ip);
    // static public System.Int32 AddHost(UnityEngine.Networking.HostTopology topology, System.Int32 port, System.String ip)
    // Offset: 0x288BF6C
    static int AddHost(::UnityEngine::Networking::HostTopology* topology, int port, ::StringW ip);
    // static public System.Int32 AddHost(UnityEngine.Networking.HostTopology topology, System.Int32 port)
    // Offset: 0x288BFF0
    static int AddHost(::UnityEngine::Networking::HostTopology* topology, int port);
    // static private System.Int32 AddHostInternal(UnityEngine.Networking.HostTopologyInternal topologyInt, System.String ip, System.Int32 port, System.Int32 minTimeout, System.Int32 maxTimeout)
    // Offset: 0x288BED0
    static int AddHostInternal(::UnityEngine::Networking::HostTopologyInternal* topologyInt, ::StringW ip, int port, int minTimeout, int maxTimeout);
    // static private System.Int32 GetMaxPacketSize()
    // Offset: 0x288C068
    static int GetMaxPacketSize();
    // static public System.Int32 Connect(System.Int32 hostId, System.String address, System.Int32 port, System.Int32 exeptionConnectionId, out System.Byte error)
    // Offset: 0x288C0C0
    static int Connect(int hostId, ::StringW address, int port, int exeptionConnectionId, ByRef<uint8_t> error);
    // static public System.Boolean Send(System.Int32 hostId, System.Int32 connectionId, System.Int32 channelId, System.Byte[] buffer, System.Int32 size, out System.Byte error)
    // Offset: 0x288C15C
    static bool Send(int hostId, int connectionId, int channelId, ::ArrayW<uint8_t> buffer, int size, ByRef<uint8_t> error);
    // static private System.Boolean SendWrapper(System.Int32 hostId, System.Int32 connectionId, System.Int32 channelId, out System.Byte[] buffer, System.Int32 size, out System.Byte error)
    // Offset: 0x288C248
    static bool SendWrapper(int hostId, int connectionId, int channelId, ByRef<::ArrayW<uint8_t>> buffer, int size, ByRef<uint8_t> error);
    // static private System.Void CheckTopology(UnityEngine.Networking.HostTopology topology)
    // Offset: 0x288BCEC
    static void CheckTopology(::UnityEngine::Networking::HostTopology* topology);
    // static private System.Void .cctor()
    // Offset: 0x288C2EC
    static void _cctor();
  }; // UnityEngine.Networking.NetworkTransport
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Networking::NetworkTransport::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Networking::NetworkTransport::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::NetworkTransport*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::NetworkTransport::InitializeClass
// Il2CppName: InitializeClass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Networking::NetworkTransport::InitializeClass)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::NetworkTransport*), "InitializeClass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::NetworkTransport::AddHostWithSimulator
// Il2CppName: AddHostWithSimulator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::UnityEngine::Networking::HostTopology*, int, int, int, ::StringW)>(&UnityEngine::Networking::NetworkTransport::AddHostWithSimulator)> {
  static const MethodInfo* get() {
    static auto* topology = &::il2cpp_utils::GetClassFromName("UnityEngine.Networking", "HostTopology")->byval_arg;
    static auto* minTimeout = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* maxTimeout = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* port = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ip = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::NetworkTransport*), "AddHostWithSimulator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{topology, minTimeout, maxTimeout, port, ip});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::NetworkTransport::AddHost
// Il2CppName: AddHost
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::UnityEngine::Networking::HostTopology*, int, ::StringW)>(&UnityEngine::Networking::NetworkTransport::AddHost)> {
  static const MethodInfo* get() {
    static auto* topology = &::il2cpp_utils::GetClassFromName("UnityEngine.Networking", "HostTopology")->byval_arg;
    static auto* port = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ip = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::NetworkTransport*), "AddHost", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{topology, port, ip});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::NetworkTransport::AddHost
// Il2CppName: AddHost
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::UnityEngine::Networking::HostTopology*, int)>(&UnityEngine::Networking::NetworkTransport::AddHost)> {
  static const MethodInfo* get() {
    static auto* topology = &::il2cpp_utils::GetClassFromName("UnityEngine.Networking", "HostTopology")->byval_arg;
    static auto* port = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::NetworkTransport*), "AddHost", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{topology, port});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::NetworkTransport::AddHostInternal
// Il2CppName: AddHostInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::UnityEngine::Networking::HostTopologyInternal*, ::StringW, int, int, int)>(&UnityEngine::Networking::NetworkTransport::AddHostInternal)> {
  static const MethodInfo* get() {
    static auto* topologyInt = &::il2cpp_utils::GetClassFromName("UnityEngine.Networking", "HostTopologyInternal")->byval_arg;
    static auto* ip = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* port = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* minTimeout = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* maxTimeout = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::NetworkTransport*), "AddHostInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{topologyInt, ip, port, minTimeout, maxTimeout});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::NetworkTransport::GetMaxPacketSize
// Il2CppName: GetMaxPacketSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&UnityEngine::Networking::NetworkTransport::GetMaxPacketSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::NetworkTransport*), "GetMaxPacketSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::NetworkTransport::Connect
// Il2CppName: Connect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, ::StringW, int, int, ByRef<uint8_t>)>(&UnityEngine::Networking::NetworkTransport::Connect)> {
  static const MethodInfo* get() {
    static auto* hostId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* address = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* port = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* exeptionConnectionId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("System", "Byte")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::NetworkTransport*), "Connect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hostId, address, port, exeptionConnectionId, error});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::NetworkTransport::Send
// Il2CppName: Send
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int, int, int, ::ArrayW<uint8_t>, int, ByRef<uint8_t>)>(&UnityEngine::Networking::NetworkTransport::Send)> {
  static const MethodInfo* get() {
    static auto* hostId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* connectionId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* channelId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("System", "Byte")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::NetworkTransport*), "Send", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hostId, connectionId, channelId, buffer, size, error});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::NetworkTransport::SendWrapper
// Il2CppName: SendWrapper
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int, int, int, ByRef<::ArrayW<uint8_t>>, int, ByRef<uint8_t>)>(&UnityEngine::Networking::NetworkTransport::SendWrapper)> {
  static const MethodInfo* get() {
    static auto* hostId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* connectionId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* channelId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->this_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("System", "Byte")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::NetworkTransport*), "SendWrapper", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hostId, connectionId, channelId, buffer, size, error});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::NetworkTransport::CheckTopology
// Il2CppName: CheckTopology
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Networking::HostTopology*)>(&UnityEngine::Networking::NetworkTransport::CheckTopology)> {
  static const MethodInfo* get() {
    static auto* topology = &::il2cpp_utils::GetClassFromName("UnityEngine.Networking", "HostTopology")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::NetworkTransport*), "CheckTopology", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{topology});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::NetworkTransport::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Networking::NetworkTransport::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::NetworkTransport*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};