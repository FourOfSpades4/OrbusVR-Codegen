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
  // Forward declaring type: ENetApiMacOS
  class ENetApiMacOS;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ENet::Native::ENetApiMacOS);
DEFINE_IL2CPP_ARG_TYPE(::ENet::Native::ENetApiMacOS*, "ENet.Native", "ENetApiMacOS");
// Type namespace: ENet.Native
namespace ENet::Native {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ENet.Native.ENetApiMacOS
  // [TokenAttribute] Offset: FFFFFFFF
  class ENetApiMacOS : public ::ENet::Native::ENetApi {
    public:
    // static private System.Int32 native_initialize_with_callbacks(System.UInt32 version, ref ENet.Native.ENetCallbacks inits)
    // Offset: 0x2859780
    static int native_initialize_with_callbacks(uint version, ByRef<::ENet::Native::ENetCallbacks> inits);
    // static private System.Int32 native_host_check_events(ENet.Native.ENetHost* host, out ENet.Native.ENetEvent event)
    // Offset: 0x285983C
    static int native_host_check_events(::ENet::Native::ENetHost* host, ByRef<::ENet::Native::ENetEvent> event);
    // static private ENet.Native.ENetPeer* native_host_connect(ENet.Native.ENetHost* host, ref ENet.Native.ENetAddress address, System.IntPtr channelCount, System.UInt32 data)
    // Offset: 0x2859938
    static ::ENet::Native::ENetPeer* native_host_connect(::ENet::Native::ENetHost* host, ByRef<::ENet::Native::ENetAddress> address, ::System::IntPtr channelCount, uint data);
    // static private ENet.Native.ENetHost* native_host_create(ENet.Native.ENetAddress* address, System.IntPtr peerLimit, System.IntPtr channelLimit, System.UInt32 incomingBandwidth, System.UInt32 outgoingBandwidth)
    // Offset: 0x2859A18
    static ::ENet::Native::ENetHost* native_host_create(::ENet::Native::ENetAddress* address, ::System::IntPtr peerLimit, ::System::IntPtr channelLimit, uint incomingBandwidth, uint outgoingBandwidth);
    // static private ENet.Native.ENetHost* native_host_create(ref ENet.Native.ENetAddress address, System.IntPtr peerLimit, System.IntPtr channelLimit, System.UInt32 incomingBandwidth, System.UInt32 outgoingBandwidth)
    // Offset: 0x2859B00
    static ::ENet::Native::ENetHost* native_host_create(ByRef<::ENet::Native::ENetAddress> address, ::System::IntPtr peerLimit, ::System::IntPtr channelLimit, uint incomingBandwidth, uint outgoingBandwidth);
    // static private System.Void native_host_destroy(ENet.Native.ENetHost* host)
    // Offset: 0x2859BD8
    static void native_host_destroy(::ENet::Native::ENetHost* host);
    // static private System.Int32 native_host_service(ENet.Native.ENetHost* host, out ENet.Native.ENetEvent event, System.UInt32 timeout)
    // Offset: 0x2859C88
    static int native_host_service(::ENet::Native::ENetHost* host, ByRef<::ENet::Native::ENetEvent> event, uint timeout);
    // static private ENet.Native.ENetPacket* native_packet_create(System.IntPtr data, System.IntPtr dataLength, ENet.PacketFlags flags)
    // Offset: 0x2859D88
    static ::ENet::Native::ENetPacket* native_packet_create(::System::IntPtr data, ::System::IntPtr dataLength, ::ENet::PacketFlags flags);
    // static private System.Void native_packet_destroy(ENet.Native.ENetPacket* packet)
    // Offset: 0x2859E48
    static void native_packet_destroy(::ENet::Native::ENetPacket* packet);
    // static private System.Int32 native_packet_resize(ENet.Native.ENetPacket* packet, System.IntPtr dataLength)
    // Offset: 0x2859EF4
    static int native_packet_resize(::ENet::Native::ENetPacket* packet, ::System::IntPtr dataLength);
    // static private System.Void native_peer_disconnect(ENet.Native.ENetPeer* peer, System.UInt32 data)
    // Offset: 0x2859FB0
    static void native_peer_disconnect(::ENet::Native::ENetPeer* peer, uint data);
    // static private System.Int32 native_peer_send(ENet.Native.ENetPeer* peer, System.Byte channelID, ENet.Native.ENetPacket* packet)
    // Offset: 0x285A070
    static int native_peer_send(::ENet::Native::ENetPeer* peer, uint8_t channelID, ::ENet::Native::ENetPacket* packet);
    // public override System.Int32 initialize_with_callbacks(System.UInt32 version, ref ENet.Native.ENetCallbacks inits)
    // Offset: 0x2859774
    // Implemented from: ENet.Native.ENetApi
    // Base method: System.Int32 ENetApi::initialize_with_callbacks(System.UInt32 version, ref ENet.Native.ENetCallbacks inits)
    int initialize_with_callbacks(uint version, ByRef<::ENet::Native::ENetCallbacks> inits);
    // public override System.Int32 host_check_events(ENet.Native.ENetHost* host, out ENet.Native.ENetEvent event)
    // Offset: 0x2859830
    // Implemented from: ENet.Native.ENetApi
    // Base method: System.Int32 ENetApi::host_check_events(ENet.Native.ENetHost* host, out ENet.Native.ENetEvent event)
    int host_check_events(::ENet::Native::ENetHost* host, ByRef<::ENet::Native::ENetEvent> event);
    // public override ENet.Native.ENetPeer* host_connect(ENet.Native.ENetHost* host, ref ENet.Native.ENetAddress address, System.IntPtr channelCount, System.UInt32 data)
    // Offset: 0x2859924
    // Implemented from: ENet.Native.ENetApi
    // Base method: ENet.Native.ENetPeer* ENetApi::host_connect(ENet.Native.ENetHost* host, ref ENet.Native.ENetAddress address, System.IntPtr channelCount, System.UInt32 data)
    ::ENet::Native::ENetPeer* host_connect(::ENet::Native::ENetHost* host, ByRef<::ENet::Native::ENetAddress> address, ::System::IntPtr channelCount, uint data);
    // public override ENet.Native.ENetHost* host_create(ENet.Native.ENetAddress* address, System.IntPtr peerLimit, System.IntPtr channelLimit, System.UInt32 incomingBandwidth, System.UInt32 outgoingBandwidth)
    // Offset: 0x2859A00
    // Implemented from: ENet.Native.ENetApi
    // Base method: ENet.Native.ENetHost* ENetApi::host_create(ENet.Native.ENetAddress* address, System.IntPtr peerLimit, System.IntPtr channelLimit, System.UInt32 incomingBandwidth, System.UInt32 outgoingBandwidth)
    ::ENet::Native::ENetHost* host_create(::ENet::Native::ENetAddress* address, ::System::IntPtr peerLimit, ::System::IntPtr channelLimit, uint incomingBandwidth, uint outgoingBandwidth);
    // public override ENet.Native.ENetHost* host_create(ref ENet.Native.ENetAddress address, System.IntPtr peerLimit, System.IntPtr channelLimit, System.UInt32 incomingBandwidth, System.UInt32 outgoingBandwidth)
    // Offset: 0x2859AE8
    // Implemented from: ENet.Native.ENetApi
    // Base method: ENet.Native.ENetHost* ENetApi::host_create(ref ENet.Native.ENetAddress address, System.IntPtr peerLimit, System.IntPtr channelLimit, System.UInt32 incomingBandwidth, System.UInt32 outgoingBandwidth)
    ::ENet::Native::ENetHost* host_create(ByRef<::ENet::Native::ENetAddress> address, ::System::IntPtr peerLimit, ::System::IntPtr channelLimit, uint incomingBandwidth, uint outgoingBandwidth);
    // public override System.Void host_destroy(ENet.Native.ENetHost* host)
    // Offset: 0x2859BD0
    // Implemented from: ENet.Native.ENetApi
    // Base method: System.Void ENetApi::host_destroy(ENet.Native.ENetHost* host)
    void host_destroy(::ENet::Native::ENetHost* host);
    // public override System.Int32 host_service(ENet.Native.ENetHost* host, out ENet.Native.ENetEvent event, System.UInt32 timeout)
    // Offset: 0x2859C78
    // Implemented from: ENet.Native.ENetApi
    // Base method: System.Int32 ENetApi::host_service(ENet.Native.ENetHost* host, out ENet.Native.ENetEvent event, System.UInt32 timeout)
    int host_service(::ENet::Native::ENetHost* host, ByRef<::ENet::Native::ENetEvent> event, uint timeout);
    // public override ENet.Native.ENetPacket* packet_create(System.IntPtr data, System.IntPtr dataLength, ENet.PacketFlags flags)
    // Offset: 0x2859D78
    // Implemented from: ENet.Native.ENetApi
    // Base method: ENet.Native.ENetPacket* ENetApi::packet_create(System.IntPtr data, System.IntPtr dataLength, ENet.PacketFlags flags)
    ::ENet::Native::ENetPacket* packet_create(::System::IntPtr data, ::System::IntPtr dataLength, ::ENet::PacketFlags flags);
    // public override System.Void packet_destroy(ENet.Native.ENetPacket* packet)
    // Offset: 0x2859E40
    // Implemented from: ENet.Native.ENetApi
    // Base method: System.Void ENetApi::packet_destroy(ENet.Native.ENetPacket* packet)
    void packet_destroy(::ENet::Native::ENetPacket* packet);
    // public override System.Int32 packet_resize(ENet.Native.ENetPacket* packet, System.IntPtr dataLength)
    // Offset: 0x2859EE8
    // Implemented from: ENet.Native.ENetApi
    // Base method: System.Int32 ENetApi::packet_resize(ENet.Native.ENetPacket* packet, System.IntPtr dataLength)
    int packet_resize(::ENet::Native::ENetPacket* packet, ::System::IntPtr dataLength);
    // public override System.Void peer_disconnect(ENet.Native.ENetPeer* peer, System.UInt32 data)
    // Offset: 0x2859FA4
    // Implemented from: ENet.Native.ENetApi
    // Base method: System.Void ENetApi::peer_disconnect(ENet.Native.ENetPeer* peer, System.UInt32 data)
    void peer_disconnect(::ENet::Native::ENetPeer* peer, uint data);
    // public override System.Int32 peer_send(ENet.Native.ENetPeer* peer, System.Byte channelID, ENet.Native.ENetPacket* packet)
    // Offset: 0x285A060
    // Implemented from: ENet.Native.ENetApi
    // Base method: System.Int32 ENetApi::peer_send(ENet.Native.ENetPeer* peer, System.Byte channelID, ENet.Native.ENetPacket* packet)
    int peer_send(::ENet::Native::ENetPeer* peer, uint8_t channelID, ::ENet::Native::ENetPacket* packet);
    // public System.Void .ctor()
    // Offset: 0x2858A14
    // Implemented from: ENet.Native.ENetApi
    // Base method: System.Void ENetApi::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ENetApiMacOS* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ENet::Native::ENetApiMacOS::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ENetApiMacOS*, creationType>()));
    }
  }; // ENet.Native.ENetApiMacOS
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ENet::Native::ENetApiMacOS::native_initialize_with_callbacks
// Il2CppName: native_initialize_with_callbacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(uint, ByRef<::ENet::Native::ENetCallbacks>)>(&ENet::Native::ENetApiMacOS::native_initialize_with_callbacks)> {
  static const MethodInfo* get() {
    static auto* version = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* inits = &::il2cpp_utils::GetClassFromName("ENet.Native", "ENetCallbacks")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetApiMacOS*), "native_initialize_with_callbacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{version, inits});
  }
};
// Writing MetadataGetter for method: ENet::Native::ENetApiMacOS::native_host_check_events
// Il2CppName: native_host_check_events
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ENet::Native::ENetHost*, ByRef<::ENet::Native::ENetEvent>)>(&ENet::Native::ENetApiMacOS::native_host_check_events)> {
  static const MethodInfo* get() {
    static auto* host = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("ENet.Native", "ENetHost"))->byval_arg;
    static auto* event = &::il2cpp_utils::GetClassFromName("ENet.Native", "ENetEvent")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetApiMacOS*), "native_host_check_events", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{host, event});
  }
};
// Writing MetadataGetter for method: ENet::Native::ENetApiMacOS::native_host_connect
// Il2CppName: native_host_connect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ENet::Native::ENetPeer* (*)(::ENet::Native::ENetHost*, ByRef<::ENet::Native::ENetAddress>, ::System::IntPtr, uint)>(&ENet::Native::ENetApiMacOS::native_host_connect)> {
  static const MethodInfo* get() {
    static auto* host = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("ENet.Native", "ENetHost"))->byval_arg;
    static auto* address = &::il2cpp_utils::GetClassFromName("ENet.Native", "ENetAddress")->this_arg;
    static auto* channelCount = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetApiMacOS*), "native_host_connect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{host, address, channelCount, data});
  }
};
// Writing MetadataGetter for method: ENet::Native::ENetApiMacOS::native_host_create
// Il2CppName: native_host_create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ENet::Native::ENetHost* (*)(::ENet::Native::ENetAddress*, ::System::IntPtr, ::System::IntPtr, uint, uint)>(&ENet::Native::ENetApiMacOS::native_host_create)> {
  static const MethodInfo* get() {
    static auto* address = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("ENet.Native", "ENetAddress"))->byval_arg;
    static auto* peerLimit = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* channelLimit = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* incomingBandwidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* outgoingBandwidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetApiMacOS*), "native_host_create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{address, peerLimit, channelLimit, incomingBandwidth, outgoingBandwidth});
  }
};
// Writing MetadataGetter for method: ENet::Native::ENetApiMacOS::native_host_create
// Il2CppName: native_host_create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ENet::Native::ENetHost* (*)(ByRef<::ENet::Native::ENetAddress>, ::System::IntPtr, ::System::IntPtr, uint, uint)>(&ENet::Native::ENetApiMacOS::native_host_create)> {
  static const MethodInfo* get() {
    static auto* address = &::il2cpp_utils::GetClassFromName("ENet.Native", "ENetAddress")->this_arg;
    static auto* peerLimit = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* channelLimit = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* incomingBandwidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* outgoingBandwidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetApiMacOS*), "native_host_create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{address, peerLimit, channelLimit, incomingBandwidth, outgoingBandwidth});
  }
};
// Writing MetadataGetter for method: ENet::Native::ENetApiMacOS::native_host_destroy
// Il2CppName: native_host_destroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ENet::Native::ENetHost*)>(&ENet::Native::ENetApiMacOS::native_host_destroy)> {
  static const MethodInfo* get() {
    static auto* host = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("ENet.Native", "ENetHost"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetApiMacOS*), "native_host_destroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{host});
  }
};
// Writing MetadataGetter for method: ENet::Native::ENetApiMacOS::native_host_service
// Il2CppName: native_host_service
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ENet::Native::ENetHost*, ByRef<::ENet::Native::ENetEvent>, uint)>(&ENet::Native::ENetApiMacOS::native_host_service)> {
  static const MethodInfo* get() {
    static auto* host = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("ENet.Native", "ENetHost"))->byval_arg;
    static auto* event = &::il2cpp_utils::GetClassFromName("ENet.Native", "ENetEvent")->this_arg;
    static auto* timeout = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetApiMacOS*), "native_host_service", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{host, event, timeout});
  }
};
// Writing MetadataGetter for method: ENet::Native::ENetApiMacOS::native_packet_create
// Il2CppName: native_packet_create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ENet::Native::ENetPacket* (*)(::System::IntPtr, ::System::IntPtr, ::ENet::PacketFlags)>(&ENet::Native::ENetApiMacOS::native_packet_create)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* dataLength = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("ENet", "PacketFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetApiMacOS*), "native_packet_create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, dataLength, flags});
  }
};
// Writing MetadataGetter for method: ENet::Native::ENetApiMacOS::native_packet_destroy
// Il2CppName: native_packet_destroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ENet::Native::ENetPacket*)>(&ENet::Native::ENetApiMacOS::native_packet_destroy)> {
  static const MethodInfo* get() {
    static auto* packet = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("ENet.Native", "ENetPacket"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetApiMacOS*), "native_packet_destroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{packet});
  }
};
// Writing MetadataGetter for method: ENet::Native::ENetApiMacOS::native_packet_resize
// Il2CppName: native_packet_resize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ENet::Native::ENetPacket*, ::System::IntPtr)>(&ENet::Native::ENetApiMacOS::native_packet_resize)> {
  static const MethodInfo* get() {
    static auto* packet = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("ENet.Native", "ENetPacket"))->byval_arg;
    static auto* dataLength = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetApiMacOS*), "native_packet_resize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{packet, dataLength});
  }
};
// Writing MetadataGetter for method: ENet::Native::ENetApiMacOS::native_peer_disconnect
// Il2CppName: native_peer_disconnect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ENet::Native::ENetPeer*, uint)>(&ENet::Native::ENetApiMacOS::native_peer_disconnect)> {
  static const MethodInfo* get() {
    static auto* peer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("ENet.Native", "ENetPeer"))->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetApiMacOS*), "native_peer_disconnect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{peer, data});
  }
};
// Writing MetadataGetter for method: ENet::Native::ENetApiMacOS::native_peer_send
// Il2CppName: native_peer_send
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ENet::Native::ENetPeer*, uint8_t, ::ENet::Native::ENetPacket*)>(&ENet::Native::ENetApiMacOS::native_peer_send)> {
  static const MethodInfo* get() {
    static auto* peer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("ENet.Native", "ENetPeer"))->byval_arg;
    static auto* channelID = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* packet = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("ENet.Native", "ENetPacket"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetApiMacOS*), "native_peer_send", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{peer, channelID, packet});
  }
};
// Writing MetadataGetter for method: ENet::Native::ENetApiMacOS::initialize_with_callbacks
// Il2CppName: initialize_with_callbacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ENet::Native::ENetApiMacOS::*)(uint, ByRef<::ENet::Native::ENetCallbacks>)>(&ENet::Native::ENetApiMacOS::initialize_with_callbacks)> {
  static const MethodInfo* get() {
    static auto* version = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* inits = &::il2cpp_utils::GetClassFromName("ENet.Native", "ENetCallbacks")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetApiMacOS*), "initialize_with_callbacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{version, inits});
  }
};
// Writing MetadataGetter for method: ENet::Native::ENetApiMacOS::host_check_events
// Il2CppName: host_check_events
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ENet::Native::ENetApiMacOS::*)(::ENet::Native::ENetHost*, ByRef<::ENet::Native::ENetEvent>)>(&ENet::Native::ENetApiMacOS::host_check_events)> {
  static const MethodInfo* get() {
    static auto* host = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("ENet.Native", "ENetHost"))->byval_arg;
    static auto* event = &::il2cpp_utils::GetClassFromName("ENet.Native", "ENetEvent")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetApiMacOS*), "host_check_events", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{host, event});
  }
};
// Writing MetadataGetter for method: ENet::Native::ENetApiMacOS::host_connect
// Il2CppName: host_connect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ENet::Native::ENetPeer* (ENet::Native::ENetApiMacOS::*)(::ENet::Native::ENetHost*, ByRef<::ENet::Native::ENetAddress>, ::System::IntPtr, uint)>(&ENet::Native::ENetApiMacOS::host_connect)> {
  static const MethodInfo* get() {
    static auto* host = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("ENet.Native", "ENetHost"))->byval_arg;
    static auto* address = &::il2cpp_utils::GetClassFromName("ENet.Native", "ENetAddress")->this_arg;
    static auto* channelCount = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetApiMacOS*), "host_connect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{host, address, channelCount, data});
  }
};
// Writing MetadataGetter for method: ENet::Native::ENetApiMacOS::host_create
// Il2CppName: host_create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ENet::Native::ENetHost* (ENet::Native::ENetApiMacOS::*)(::ENet::Native::ENetAddress*, ::System::IntPtr, ::System::IntPtr, uint, uint)>(&ENet::Native::ENetApiMacOS::host_create)> {
  static const MethodInfo* get() {
    static auto* address = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("ENet.Native", "ENetAddress"))->byval_arg;
    static auto* peerLimit = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* channelLimit = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* incomingBandwidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* outgoingBandwidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetApiMacOS*), "host_create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{address, peerLimit, channelLimit, incomingBandwidth, outgoingBandwidth});
  }
};
// Writing MetadataGetter for method: ENet::Native::ENetApiMacOS::host_create
// Il2CppName: host_create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ENet::Native::ENetHost* (ENet::Native::ENetApiMacOS::*)(ByRef<::ENet::Native::ENetAddress>, ::System::IntPtr, ::System::IntPtr, uint, uint)>(&ENet::Native::ENetApiMacOS::host_create)> {
  static const MethodInfo* get() {
    static auto* address = &::il2cpp_utils::GetClassFromName("ENet.Native", "ENetAddress")->this_arg;
    static auto* peerLimit = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* channelLimit = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* incomingBandwidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* outgoingBandwidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetApiMacOS*), "host_create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{address, peerLimit, channelLimit, incomingBandwidth, outgoingBandwidth});
  }
};
// Writing MetadataGetter for method: ENet::Native::ENetApiMacOS::host_destroy
// Il2CppName: host_destroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ENet::Native::ENetApiMacOS::*)(::ENet::Native::ENetHost*)>(&ENet::Native::ENetApiMacOS::host_destroy)> {
  static const MethodInfo* get() {
    static auto* host = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("ENet.Native", "ENetHost"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetApiMacOS*), "host_destroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{host});
  }
};
// Writing MetadataGetter for method: ENet::Native::ENetApiMacOS::host_service
// Il2CppName: host_service
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ENet::Native::ENetApiMacOS::*)(::ENet::Native::ENetHost*, ByRef<::ENet::Native::ENetEvent>, uint)>(&ENet::Native::ENetApiMacOS::host_service)> {
  static const MethodInfo* get() {
    static auto* host = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("ENet.Native", "ENetHost"))->byval_arg;
    static auto* event = &::il2cpp_utils::GetClassFromName("ENet.Native", "ENetEvent")->this_arg;
    static auto* timeout = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetApiMacOS*), "host_service", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{host, event, timeout});
  }
};
// Writing MetadataGetter for method: ENet::Native::ENetApiMacOS::packet_create
// Il2CppName: packet_create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ENet::Native::ENetPacket* (ENet::Native::ENetApiMacOS::*)(::System::IntPtr, ::System::IntPtr, ::ENet::PacketFlags)>(&ENet::Native::ENetApiMacOS::packet_create)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* dataLength = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("ENet", "PacketFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetApiMacOS*), "packet_create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, dataLength, flags});
  }
};
// Writing MetadataGetter for method: ENet::Native::ENetApiMacOS::packet_destroy
// Il2CppName: packet_destroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ENet::Native::ENetApiMacOS::*)(::ENet::Native::ENetPacket*)>(&ENet::Native::ENetApiMacOS::packet_destroy)> {
  static const MethodInfo* get() {
    static auto* packet = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("ENet.Native", "ENetPacket"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetApiMacOS*), "packet_destroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{packet});
  }
};
// Writing MetadataGetter for method: ENet::Native::ENetApiMacOS::packet_resize
// Il2CppName: packet_resize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ENet::Native::ENetApiMacOS::*)(::ENet::Native::ENetPacket*, ::System::IntPtr)>(&ENet::Native::ENetApiMacOS::packet_resize)> {
  static const MethodInfo* get() {
    static auto* packet = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("ENet.Native", "ENetPacket"))->byval_arg;
    static auto* dataLength = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetApiMacOS*), "packet_resize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{packet, dataLength});
  }
};
// Writing MetadataGetter for method: ENet::Native::ENetApiMacOS::peer_disconnect
// Il2CppName: peer_disconnect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ENet::Native::ENetApiMacOS::*)(::ENet::Native::ENetPeer*, uint)>(&ENet::Native::ENetApiMacOS::peer_disconnect)> {
  static const MethodInfo* get() {
    static auto* peer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("ENet.Native", "ENetPeer"))->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetApiMacOS*), "peer_disconnect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{peer, data});
  }
};
// Writing MetadataGetter for method: ENet::Native::ENetApiMacOS::peer_send
// Il2CppName: peer_send
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ENet::Native::ENetApiMacOS::*)(::ENet::Native::ENetPeer*, uint8_t, ::ENet::Native::ENetPacket*)>(&ENet::Native::ENetApiMacOS::peer_send)> {
  static const MethodInfo* get() {
    static auto* peer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("ENet.Native", "ENetPeer"))->byval_arg;
    static auto* channelID = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* packet = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("ENet.Native", "ENetPacket"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetApiMacOS*), "peer_send", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{peer, channelID, packet});
  }
};
// Writing MetadataGetter for method: ENet::Native::ENetApiMacOS::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
