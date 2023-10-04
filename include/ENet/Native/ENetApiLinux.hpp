// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ENet.Native.ENetApi
#include "ENet/Native/ENetApi.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: ENet::Native
namespace ENet::Native {
  // Forward declaring type: ENetCallbacks
  struct ENetCallbacks;
  // Forward declaring type: ENetHost
  struct ENetHost;
  // Forward declaring type: ENetEvent
  struct ENetEvent;
  // Forward declaring type: ENetPeer
  struct ENetPeer;
  // Forward declaring type: ENetAddress
  struct ENetAddress;
  // Forward declaring type: ENetPacket
  struct ENetPacket;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: ENet
namespace ENet {
  // Forward declaring type: PacketFlags
  struct PacketFlags;
}
// Completed forward declares
// Type namespace: ENet.Native
namespace ENet::Native {
  // Forward declaring type: ENetApiLinux
  class ENetApiLinux;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ENet::Native::ENetApiLinux);
DEFINE_IL2CPP_ARG_TYPE(::ENet::Native::ENetApiLinux*, "ENet.Native", "ENetApiLinux");
// Type namespace: ENet.Native
namespace ENet::Native {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ENet.Native.ENetApiLinux
  // [TokenAttribute] Offset: FFFFFFFF
  class ENetApiLinux : public ::ENet::Native::ENetApi {
    public:
    // static private System.Int32 native_initialize_with_callbacks(System.UInt32 version, ref ENet.Native.ENetCallbacks inits)
    // Offset: 0x2858DCC
    static int native_initialize_with_callbacks(uint version, ByRef<::ENet::Native::ENetCallbacks> inits);
    // static private System.Int32 native_host_check_events(ENet.Native.ENetHost* host, out ENet.Native.ENetEvent event)
    // Offset: 0x2858E88
    static int native_host_check_events(::ENet::Native::ENetHost* host, ByRef<::ENet::Native::ENetEvent> event);
    // static private ENet.Native.ENetPeer* native_host_connect(ENet.Native.ENetHost* host, ref ENet.Native.ENetAddress address, System.IntPtr channelCount, System.UInt32 data)
    // Offset: 0x2858F84
    static ::ENet::Native::ENetPeer* native_host_connect(::ENet::Native::ENetHost* host, ByRef<::ENet::Native::ENetAddress> address, ::System::IntPtr channelCount, uint data);
    // static private ENet.Native.ENetHost* native_host_create(ENet.Native.ENetAddress* address, System.IntPtr peerLimit, System.IntPtr channelLimit, System.UInt32 incomingBandwidth, System.UInt32 outgoingBandwidth)
    // Offset: 0x2859064
    static ::ENet::Native::ENetHost* native_host_create(::ENet::Native::ENetAddress* address, ::System::IntPtr peerLimit, ::System::IntPtr channelLimit, uint incomingBandwidth, uint outgoingBandwidth);
    // static private ENet.Native.ENetHost* native_host_create(ref ENet.Native.ENetAddress address, System.IntPtr peerLimit, System.IntPtr channelLimit, System.UInt32 incomingBandwidth, System.UInt32 outgoingBandwidth)
    // Offset: 0x285914C
    static ::ENet::Native::ENetHost* native_host_create(ByRef<::ENet::Native::ENetAddress> address, ::System::IntPtr peerLimit, ::System::IntPtr channelLimit, uint incomingBandwidth, uint outgoingBandwidth);
    // static private System.Void native_host_destroy(ENet.Native.ENetHost* host)
    // Offset: 0x2859224
    static void native_host_destroy(::ENet::Native::ENetHost* host);
    // static private System.Int32 native_host_service(ENet.Native.ENetHost* host, out ENet.Native.ENetEvent event, System.UInt32 timeout)
    // Offset: 0x28592D4
    static int native_host_service(::ENet::Native::ENetHost* host, ByRef<::ENet::Native::ENetEvent> event, uint timeout);
    // static private ENet.Native.ENetPacket* native_packet_create(System.IntPtr data, System.IntPtr dataLength, ENet.PacketFlags flags)
    // Offset: 0x28593D4
    static ::ENet::Native::ENetPacket* native_packet_create(::System::IntPtr data, ::System::IntPtr dataLength, ::ENet::PacketFlags flags);
    // static private System.Void native_packet_destroy(ENet.Native.ENetPacket* packet)
    // Offset: 0x2859494
    static void native_packet_destroy(::ENet::Native::ENetPacket* packet);
    // static private System.Int32 native_packet_resize(ENet.Native.ENetPacket* packet, System.IntPtr dataLength)
    // Offset: 0x2859540
    static int native_packet_resize(::ENet::Native::ENetPacket* packet, ::System::IntPtr dataLength);
    // static private System.Void native_peer_disconnect(ENet.Native.ENetPeer* peer, System.UInt32 data)
    // Offset: 0x28595FC
    static void native_peer_disconnect(::ENet::Native::ENetPeer* peer, uint data);
    // static private System.Int32 native_peer_send(ENet.Native.ENetPeer* peer, System.Byte channelID, ENet.Native.ENetPacket* packet)
    // Offset: 0x28596BC
    static int native_peer_send(::ENet::Native::ENetPeer* peer, uint8_t channelID, ::ENet::Native::ENetPacket* packet);
    // public override System.Int32 initialize_with_callbacks(System.UInt32 version, ref ENet.Native.ENetCallbacks inits)
    // Offset: 0x2858DC0
    // Implemented from: ENet.Native.ENetApi
    // Base method: System.Int32 ENetApi::initialize_with_callbacks(System.UInt32 version, ref ENet.Native.ENetCallbacks inits)
    int initialize_with_callbacks(uint version, ByRef<::ENet::Native::ENetCallbacks> inits);
    // public override System.Int32 host_check_events(ENet.Native.ENetHost* host, out ENet.Native.ENetEvent event)
    // Offset: 0x2858E7C
    // Implemented from: ENet.Native.ENetApi
    // Base method: System.Int32 ENetApi::host_check_events(ENet.Native.ENetHost* host, out ENet.Native.ENetEvent event)
    int host_check_events(::ENet::Native::ENetHost* host, ByRef<::ENet::Native::ENetEvent> event);
    // public override ENet.Native.ENetPeer* host_connect(ENet.Native.ENetHost* host, ref ENet.Native.ENetAddress address, System.IntPtr channelCount, System.UInt32 data)
    // Offset: 0x2858F70
    // Implemented from: ENet.Native.ENetApi
    // Base method: ENet.Native.ENetPeer* ENetApi::host_connect(ENet.Native.ENetHost* host, ref ENet.Native.ENetAddress address, System.IntPtr channelCount, System.UInt32 data)
    ::ENet::Native::ENetPeer* host_connect(::ENet::Native::ENetHost* host, ByRef<::ENet::Native::ENetAddress> address, ::System::IntPtr channelCount, uint data);
    // public override ENet.Native.ENetHost* host_create(ENet.Native.ENetAddress* address, System.IntPtr peerLimit, System.IntPtr channelLimit, System.UInt32 incomingBandwidth, System.UInt32 outgoingBandwidth)
    // Offset: 0x285904C
    // Implemented from: ENet.Native.ENetApi
    // Base method: ENet.Native.ENetHost* ENetApi::host_create(ENet.Native.ENetAddress* address, System.IntPtr peerLimit, System.IntPtr channelLimit, System.UInt32 incomingBandwidth, System.UInt32 outgoingBandwidth)
    ::ENet::Native::ENetHost* host_create(::ENet::Native::ENetAddress* address, ::System::IntPtr peerLimit, ::System::IntPtr channelLimit, uint incomingBandwidth, uint outgoingBandwidth);
    // public override ENet.Native.ENetHost* host_create(ref ENet.Native.ENetAddress address, System.IntPtr peerLimit, System.IntPtr channelLimit, System.UInt32 incomingBandwidth, System.UInt32 outgoingBandwidth)
    // Offset: 0x2859134
    // Implemented from: ENet.Native.ENetApi
    // Base method: ENet.Native.ENetHost* ENetApi::host_create(ref ENet.Native.ENetAddress address, System.IntPtr peerLimit, System.IntPtr channelLimit, System.UInt32 incomingBandwidth, System.UInt32 outgoingBandwidth)
    ::ENet::Native::ENetHost* host_create(ByRef<::ENet::Native::ENetAddress> address, ::System::IntPtr peerLimit, ::System::IntPtr channelLimit, uint incomingBandwidth, uint outgoingBandwidth);
    // public override System.Void host_destroy(ENet.Native.ENetHost* host)
    // Offset: 0x285921C
    // Implemented from: ENet.Native.ENetApi
    // Base method: System.Void ENetApi::host_destroy(ENet.Native.ENetHost* host)
    void host_destroy(::ENet::Native::ENetHost* host);
    // public override System.Int32 host_service(ENet.Native.ENetHost* host, out ENet.Native.ENetEvent event, System.UInt32 timeout)
    // Offset: 0x28592C4
    // Implemented from: ENet.Native.ENetApi
    // Base method: System.Int32 ENetApi::host_service(ENet.Native.ENetHost* host, out ENet.Native.ENetEvent event, System.UInt32 timeout)
    int host_service(::ENet::Native::ENetHost* host, ByRef<::ENet::Native::ENetEvent> event, uint timeout);
    // public override ENet.Native.ENetPacket* packet_create(System.IntPtr data, System.IntPtr dataLength, ENet.PacketFlags flags)
    // Offset: 0x28593C4
    // Implemented from: ENet.Native.ENetApi
    // Base method: ENet.Native.ENetPacket* ENetApi::packet_create(System.IntPtr data, System.IntPtr dataLength, ENet.PacketFlags flags)
    ::ENet::Native::ENetPacket* packet_create(::System::IntPtr data, ::System::IntPtr dataLength, ::ENet::PacketFlags flags);
    // public override System.Void packet_destroy(ENet.Native.ENetPacket* packet)
    // Offset: 0x285948C
    // Implemented from: ENet.Native.ENetApi
    // Base method: System.Void ENetApi::packet_destroy(ENet.Native.ENetPacket* packet)
    void packet_destroy(::ENet::Native::ENetPacket* packet);
    // public override System.Int32 packet_resize(ENet.Native.ENetPacket* packet, System.IntPtr dataLength)
    // Offset: 0x2859534
    // Implemented from: ENet.Native.ENetApi
    // Base method: System.Int32 ENetApi::packet_resize(ENet.Native.ENetPacket* packet, System.IntPtr dataLength)
    int packet_resize(::ENet::Native::ENetPacket* packet, ::System::IntPtr dataLength);
    // public override System.Void peer_disconnect(ENet.Native.ENetPeer* peer, System.UInt32 data)
    // Offset: 0x28595F0
    // Implemented from: ENet.Native.ENetApi
    // Base method: System.Void ENetApi::peer_disconnect(ENet.Native.ENetPeer* peer, System.UInt32 data)
    void peer_disconnect(::ENet::Native::ENetPeer* peer, uint data);
    // public override System.Int32 peer_send(ENet.Native.ENetPeer* peer, System.Byte channelID, ENet.Native.ENetPacket* packet)
    // Offset: 0x28596AC
    // Implemented from: ENet.Native.ENetApi
    // Base method: System.Int32 ENetApi::peer_send(ENet.Native.ENetPeer* peer, System.Byte channelID, ENet.Native.ENetPacket* packet)
    int peer_send(::ENet::Native::ENetPeer* peer, uint8_t channelID, ::ENet::Native::ENetPacket* packet);
    // public System.Void .ctor()
    // Offset: 0x28589AC
    // Implemented from: ENet.Native.ENetApi
    // Base method: System.Void ENetApi::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ENetApiLinux* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ENet::Native::ENetApiLinux::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ENetApiLinux*, creationType>()));
    }
  }; // ENet.Native.ENetApiLinux
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ENet::Native::ENetApiLinux::native_initialize_with_callbacks
// Il2CppName: native_initialize_with_callbacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(uint, ByRef<::ENet::Native::ENetCallbacks>)>(&ENet::Native::ENetApiLinux::native_initialize_with_callbacks)> {
  static const MethodInfo* get() {
    static auto* version = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* inits = &::il2cpp_utils::GetClassFromName("ENet.Native", "ENetCallbacks")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetApiLinux*), "native_initialize_with_callbacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{version, inits});
  }
};
// Writing MetadataGetter for method: ENet::Native::ENetApiLinux::native_host_check_events
// Il2CppName: native_host_check_events
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ENet::Native::ENetHost*, ByRef<::ENet::Native::ENetEvent>)>(&ENet::Native::ENetApiLinux::native_host_check_events)> {
  static const MethodInfo* get() {
    static auto* host = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("ENet.Native", "ENetHost"))->byval_arg;
    static auto* event = &::il2cpp_utils::GetClassFromName("ENet.Native", "ENetEvent")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetApiLinux*), "native_host_check_events", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{host, event});
  }
};
// Writing MetadataGetter for method: ENet::Native::ENetApiLinux::native_host_connect
// Il2CppName: native_host_connect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ENet::Native::ENetPeer* (*)(::ENet::Native::ENetHost*, ByRef<::ENet::Native::ENetAddress>, ::System::IntPtr, uint)>(&ENet::Native::ENetApiLinux::native_host_connect)> {
  static const MethodInfo* get() {
    static auto* host = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("ENet.Native", "ENetHost"))->byval_arg;
    static auto* address = &::il2cpp_utils::GetClassFromName("ENet.Native", "ENetAddress")->this_arg;
    static auto* channelCount = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetApiLinux*), "native_host_connect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{host, address, channelCount, data});
  }
};
// Writing MetadataGetter for method: ENet::Native::ENetApiLinux::native_host_create
// Il2CppName: native_host_create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ENet::Native::ENetHost* (*)(::ENet::Native::ENetAddress*, ::System::IntPtr, ::System::IntPtr, uint, uint)>(&ENet::Native::ENetApiLinux::native_host_create)> {
  static const MethodInfo* get() {
    static auto* address = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("ENet.Native", "ENetAddress"))->byval_arg;
    static auto* peerLimit = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* channelLimit = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* incomingBandwidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* outgoingBandwidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetApiLinux*), "native_host_create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{address, peerLimit, channelLimit, incomingBandwidth, outgoingBandwidth});
  }
};
// Writing MetadataGetter for method: ENet::Native::ENetApiLinux::native_host_create
// Il2CppName: native_host_create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ENet::Native::ENetHost* (*)(ByRef<::ENet::Native::ENetAddress>, ::System::IntPtr, ::System::IntPtr, uint, uint)>(&ENet::Native::ENetApiLinux::native_host_create)> {
  static const MethodInfo* get() {
    static auto* address = &::il2cpp_utils::GetClassFromName("ENet.Native", "ENetAddress")->this_arg;
    static auto* peerLimit = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* channelLimit = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* incomingBandwidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* outgoingBandwidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetApiLinux*), "native_host_create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{address, peerLimit, channelLimit, incomingBandwidth, outgoingBandwidth});
  }
};
// Writing MetadataGetter for method: ENet::Native::ENetApiLinux::native_host_destroy
// Il2CppName: native_host_destroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ENet::Native::ENetHost*)>(&ENet::Native::ENetApiLinux::native_host_destroy)> {
  static const MethodInfo* get() {
    static auto* host = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("ENet.Native", "ENetHost"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetApiLinux*), "native_host_destroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{host});
  }
};
// Writing MetadataGetter for method: ENet::Native::ENetApiLinux::native_host_service
// Il2CppName: native_host_service
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ENet::Native::ENetHost*, ByRef<::ENet::Native::ENetEvent>, uint)>(&ENet::Native::ENetApiLinux::native_host_service)> {
  static const MethodInfo* get() {
    static auto* host = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("ENet.Native", "ENetHost"))->byval_arg;
    static auto* event = &::il2cpp_utils::GetClassFromName("ENet.Native", "ENetEvent")->this_arg;
    static auto* timeout = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetApiLinux*), "native_host_service", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{host, event, timeout});
  }
};
// Writing MetadataGetter for method: ENet::Native::ENetApiLinux::native_packet_create
// Il2CppName: native_packet_create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ENet::Native::ENetPacket* (*)(::System::IntPtr, ::System::IntPtr, ::ENet::PacketFlags)>(&ENet::Native::ENetApiLinux::native_packet_create)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* dataLength = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("ENet", "PacketFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetApiLinux*), "native_packet_create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, dataLength, flags});
  }
};
// Writing MetadataGetter for method: ENet::Native::ENetApiLinux::native_packet_destroy
// Il2CppName: native_packet_destroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ENet::Native::ENetPacket*)>(&ENet::Native::ENetApiLinux::native_packet_destroy)> {
  static const MethodInfo* get() {
    static auto* packet = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("ENet.Native", "ENetPacket"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetApiLinux*), "native_packet_destroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{packet});
  }
};
// Writing MetadataGetter for method: ENet::Native::ENetApiLinux::native_packet_resize
// Il2CppName: native_packet_resize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ENet::Native::ENetPacket*, ::System::IntPtr)>(&ENet::Native::ENetApiLinux::native_packet_resize)> {
  static const MethodInfo* get() {
    static auto* packet = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("ENet.Native", "ENetPacket"))->byval_arg;
    static auto* dataLength = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetApiLinux*), "native_packet_resize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{packet, dataLength});
  }
};
// Writing MetadataGetter for method: ENet::Native::ENetApiLinux::native_peer_disconnect
// Il2CppName: native_peer_disconnect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ENet::Native::ENetPeer*, uint)>(&ENet::Native::ENetApiLinux::native_peer_disconnect)> {
  static const MethodInfo* get() {
    static auto* peer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("ENet.Native", "ENetPeer"))->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetApiLinux*), "native_peer_disconnect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{peer, data});
  }
};
// Writing MetadataGetter for method: ENet::Native::ENetApiLinux::native_peer_send
// Il2CppName: native_peer_send
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ENet::Native::ENetPeer*, uint8_t, ::ENet::Native::ENetPacket*)>(&ENet::Native::ENetApiLinux::native_peer_send)> {
  static const MethodInfo* get() {
    static auto* peer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("ENet.Native", "ENetPeer"))->byval_arg;
    static auto* channelID = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* packet = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("ENet.Native", "ENetPacket"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetApiLinux*), "native_peer_send", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{peer, channelID, packet});
  }
};
// Writing MetadataGetter for method: ENet::Native::ENetApiLinux::initialize_with_callbacks
// Il2CppName: initialize_with_callbacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ENet::Native::ENetApiLinux::*)(uint, ByRef<::ENet::Native::ENetCallbacks>)>(&ENet::Native::ENetApiLinux::initialize_with_callbacks)> {
  static const MethodInfo* get() {
    static auto* version = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* inits = &::il2cpp_utils::GetClassFromName("ENet.Native", "ENetCallbacks")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetApiLinux*), "initialize_with_callbacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{version, inits});
  }
};
// Writing MetadataGetter for method: ENet::Native::ENetApiLinux::host_check_events
// Il2CppName: host_check_events
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ENet::Native::ENetApiLinux::*)(::ENet::Native::ENetHost*, ByRef<::ENet::Native::ENetEvent>)>(&ENet::Native::ENetApiLinux::host_check_events)> {
  static const MethodInfo* get() {
    static auto* host = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("ENet.Native", "ENetHost"))->byval_arg;
    static auto* event = &::il2cpp_utils::GetClassFromName("ENet.Native", "ENetEvent")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetApiLinux*), "host_check_events", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{host, event});
  }
};
// Writing MetadataGetter for method: ENet::Native::ENetApiLinux::host_connect
// Il2CppName: host_connect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ENet::Native::ENetPeer* (ENet::Native::ENetApiLinux::*)(::ENet::Native::ENetHost*, ByRef<::ENet::Native::ENetAddress>, ::System::IntPtr, uint)>(&ENet::Native::ENetApiLinux::host_connect)> {
  static const MethodInfo* get() {
    static auto* host = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("ENet.Native", "ENetHost"))->byval_arg;
    static auto* address = &::il2cpp_utils::GetClassFromName("ENet.Native", "ENetAddress")->this_arg;
    static auto* channelCount = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetApiLinux*), "host_connect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{host, address, channelCount, data});
  }
};
// Writing MetadataGetter for method: ENet::Native::ENetApiLinux::host_create
// Il2CppName: host_create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ENet::Native::ENetHost* (ENet::Native::ENetApiLinux::*)(::ENet::Native::ENetAddress*, ::System::IntPtr, ::System::IntPtr, uint, uint)>(&ENet::Native::ENetApiLinux::host_create)> {
  static const MethodInfo* get() {
    static auto* address = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("ENet.Native", "ENetAddress"))->byval_arg;
    static auto* peerLimit = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* channelLimit = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* incomingBandwidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* outgoingBandwidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetApiLinux*), "host_create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{address, peerLimit, channelLimit, incomingBandwidth, outgoingBandwidth});
  }
};
// Writing MetadataGetter for method: ENet::Native::ENetApiLinux::host_create
// Il2CppName: host_create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ENet::Native::ENetHost* (ENet::Native::ENetApiLinux::*)(ByRef<::ENet::Native::ENetAddress>, ::System::IntPtr, ::System::IntPtr, uint, uint)>(&ENet::Native::ENetApiLinux::host_create)> {
  static const MethodInfo* get() {
    static auto* address = &::il2cpp_utils::GetClassFromName("ENet.Native", "ENetAddress")->this_arg;
    static auto* peerLimit = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* channelLimit = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* incomingBandwidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* outgoingBandwidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetApiLinux*), "host_create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{address, peerLimit, channelLimit, incomingBandwidth, outgoingBandwidth});
  }
};
// Writing MetadataGetter for method: ENet::Native::ENetApiLinux::host_destroy
// Il2CppName: host_destroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ENet::Native::ENetApiLinux::*)(::ENet::Native::ENetHost*)>(&ENet::Native::ENetApiLinux::host_destroy)> {
  static const MethodInfo* get() {
    static auto* host = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("ENet.Native", "ENetHost"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetApiLinux*), "host_destroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{host});
  }
};
// Writing MetadataGetter for method: ENet::Native::ENetApiLinux::host_service
// Il2CppName: host_service
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ENet::Native::ENetApiLinux::*)(::ENet::Native::ENetHost*, ByRef<::ENet::Native::ENetEvent>, uint)>(&ENet::Native::ENetApiLinux::host_service)> {
  static const MethodInfo* get() {
    static auto* host = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("ENet.Native", "ENetHost"))->byval_arg;
    static auto* event = &::il2cpp_utils::GetClassFromName("ENet.Native", "ENetEvent")->this_arg;
    static auto* timeout = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetApiLinux*), "host_service", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{host, event, timeout});
  }
};
// Writing MetadataGetter for method: ENet::Native::ENetApiLinux::packet_create
// Il2CppName: packet_create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ENet::Native::ENetPacket* (ENet::Native::ENetApiLinux::*)(::System::IntPtr, ::System::IntPtr, ::ENet::PacketFlags)>(&ENet::Native::ENetApiLinux::packet_create)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* dataLength = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("ENet", "PacketFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetApiLinux*), "packet_create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, dataLength, flags});
  }
};
// Writing MetadataGetter for method: ENet::Native::ENetApiLinux::packet_destroy
// Il2CppName: packet_destroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ENet::Native::ENetApiLinux::*)(::ENet::Native::ENetPacket*)>(&ENet::Native::ENetApiLinux::packet_destroy)> {
  static const MethodInfo* get() {
    static auto* packet = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("ENet.Native", "ENetPacket"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetApiLinux*), "packet_destroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{packet});
  }
};
// Writing MetadataGetter for method: ENet::Native::ENetApiLinux::packet_resize
// Il2CppName: packet_resize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ENet::Native::ENetApiLinux::*)(::ENet::Native::ENetPacket*, ::System::IntPtr)>(&ENet::Native::ENetApiLinux::packet_resize)> {
  static const MethodInfo* get() {
    static auto* packet = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("ENet.Native", "ENetPacket"))->byval_arg;
    static auto* dataLength = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetApiLinux*), "packet_resize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{packet, dataLength});
  }
};
// Writing MetadataGetter for method: ENet::Native::ENetApiLinux::peer_disconnect
// Il2CppName: peer_disconnect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ENet::Native::ENetApiLinux::*)(::ENet::Native::ENetPeer*, uint)>(&ENet::Native::ENetApiLinux::peer_disconnect)> {
  static const MethodInfo* get() {
    static auto* peer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("ENet.Native", "ENetPeer"))->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetApiLinux*), "peer_disconnect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{peer, data});
  }
};
// Writing MetadataGetter for method: ENet::Native::ENetApiLinux::peer_send
// Il2CppName: peer_send
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ENet::Native::ENetApiLinux::*)(::ENet::Native::ENetPeer*, uint8_t, ::ENet::Native::ENetPacket*)>(&ENet::Native::ENetApiLinux::peer_send)> {
  static const MethodInfo* get() {
    static auto* peer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("ENet.Native", "ENetPeer"))->byval_arg;
    static auto* channelID = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* packet = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("ENet.Native", "ENetPacket"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetApiLinux*), "peer_send", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{peer, channelID, packet});
  }
};
// Writing MetadataGetter for method: ENet::Native::ENetApiLinux::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!