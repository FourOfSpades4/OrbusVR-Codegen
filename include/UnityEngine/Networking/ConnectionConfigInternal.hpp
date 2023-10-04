// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: ConnectionConfig
  class ConnectionConfig;
}
// Completed forward declares
// Type namespace: UnityEngine.Networking
namespace UnityEngine::Networking {
  // Forward declaring type: ConnectionConfigInternal
  class ConnectionConfigInternal;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Networking::ConnectionConfigInternal);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::ConnectionConfigInternal*, "UnityEngine.Networking", "ConnectionConfigInternal");
// Type namespace: UnityEngine.Networking
namespace UnityEngine::Networking {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Networking.ConnectionConfigInternal
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: AA588C
  // [NativeHeaderAttribute] Offset: AA588C
  // [NativeConditionalAttribute] Offset: AA588C
  // [NativeHeaderAttribute] Offset: AA588C
  class ConnectionConfigInternal : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // public System.IntPtr m_Ptr
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr m_Ptr;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept {
      return m_Ptr;
    }
    // Get instance field reference: public System.IntPtr m_Ptr
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_m_Ptr();
    // public System.Void .ctor(UnityEngine.Networking.ConnectionConfig config)
    // Offset: 0x2889F48
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConnectionConfigInternal* New_ctor(::UnityEngine::Networking::ConnectionConfig* config) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Networking::ConnectionConfigInternal::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConnectionConfigInternal*, creationType>(config)));
    }
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x288B0CC
    void Dispose(bool disposing);
    // public System.Void Dispose()
    // Offset: 0x288B218
    void Dispose();
    // static private System.IntPtr InternalCreate()
    // Offset: 0x288A3C4
    static ::System::IntPtr InternalCreate();
    // static private System.Void InternalDestroy(System.IntPtr ptr)
    // Offset: 0x288B12C
    static void InternalDestroy(::System::IntPtr ptr);
    // public System.Byte AddChannel(System.Int32 value)
    // Offset: 0x288AFE4
    uint8_t AddChannel(int value);
    // public System.Boolean SetPacketSize(System.UInt16 value)
    // Offset: 0x288A41C
    bool SetPacketSize(uint16_t value);
    // private System.Void set_FragmentSize(System.UInt16 value)
    // Offset: 0x288A490
    void set_FragmentSize(uint16_t value);
    // private System.Void set_ResendTimeout(System.UInt32 value)
    // Offset: 0x288A504
    void set_ResendTimeout(uint value);
    // private System.Void set_DisconnectTimeout(System.UInt32 value)
    // Offset: 0x288A578
    void set_DisconnectTimeout(uint value);
    // private System.Void set_ConnectTimeout(System.UInt32 value)
    // Offset: 0x288A5EC
    void set_ConnectTimeout(uint value);
    // private System.Void set_MinUpdateTimeout(System.UInt32 value)
    // Offset: 0x288A660
    void set_MinUpdateTimeout(uint value);
    // private System.Void set_PingTimeout(System.UInt32 value)
    // Offset: 0x288A6D4
    void set_PingTimeout(uint value);
    // private System.Void set_ReducedPingTimeout(System.UInt32 value)
    // Offset: 0x288A748
    void set_ReducedPingTimeout(uint value);
    // private System.Void set_AllCostTimeout(System.UInt32 value)
    // Offset: 0x288A7BC
    void set_AllCostTimeout(uint value);
    // private System.Void set_NetworkDropThreshold(System.Byte value)
    // Offset: 0x288A830
    void set_NetworkDropThreshold(uint8_t value);
    // private System.Void set_OverflowDropThreshold(System.Byte value)
    // Offset: 0x288A8A4
    void set_OverflowDropThreshold(uint8_t value);
    // private System.Void set_MaxConnectionAttempt(System.Byte value)
    // Offset: 0x288A918
    void set_MaxConnectionAttempt(uint8_t value);
    // private System.Void set_AckDelay(System.UInt32 value)
    // Offset: 0x288A98C
    void set_AckDelay(uint value);
    // private System.Void set_SendDelay(System.UInt32 value)
    // Offset: 0x288AA00
    void set_SendDelay(uint value);
    // private System.Void set_MaxCombinedReliableMessageSize(System.UInt16 value)
    // Offset: 0x288AA74
    void set_MaxCombinedReliableMessageSize(uint16_t value);
    // private System.Void set_MaxCombinedReliableMessageCount(System.UInt16 value)
    // Offset: 0x288AAE8
    void set_MaxCombinedReliableMessageCount(uint16_t value);
    // private System.Void set_MaxSentMessageQueueSize(System.UInt16 value)
    // Offset: 0x288AB5C
    void set_MaxSentMessageQueueSize(uint16_t value);
    // private System.Void set_AcksType(System.Byte value)
    // Offset: 0x288ABD0
    void set_AcksType(uint8_t value);
    // private System.Void set_UsePlatformSpecificProtocols(System.Boolean value)
    // Offset: 0x288AC44
    void set_UsePlatformSpecificProtocols(bool value);
    // private System.Void set_InitialBandwidth(System.UInt32 value)
    // Offset: 0x288ACB8
    void set_InitialBandwidth(uint value);
    // private System.Void set_BandwidthPeakFactor(System.Single value)
    // Offset: 0x288AD2C
    void set_BandwidthPeakFactor(float value);
    // private System.Void set_WebSocketReceiveBufferMaxSize(System.UInt16 value)
    // Offset: 0x288ADA0
    void set_WebSocketReceiveBufferMaxSize(uint16_t value);
    // private System.Void set_UdpSocketReceiveBufferMaxSize(System.UInt32 value)
    // Offset: 0x288AE14
    void set_UdpSocketReceiveBufferMaxSize(uint value);
    // public System.Int32 SetSSLCertFilePath(System.String value)
    // Offset: 0x288AE88
    int SetSSLCertFilePath(::StringW value);
    // public System.Int32 SetSSLPrivateKeyFilePath(System.String value)
    // Offset: 0x288AEFC
    int SetSSLPrivateKeyFilePath(::StringW value);
    // public System.Int32 SetSSLCAFilePath(System.String value)
    // Offset: 0x288AF70
    int SetSSLCAFilePath(::StringW value);
    // private System.Boolean MakeChannelsSharedOrder(System.Byte[] values)
    // Offset: 0x288B058
    bool MakeChannelsSharedOrder(::ArrayW<uint8_t> values);
    // protected override System.Void Finalize()
    // Offset: 0x288B198
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // UnityEngine.Networking.ConnectionConfigInternal
  #pragma pack(pop)
  static check_size<sizeof(ConnectionConfigInternal), 16 + sizeof(::System::IntPtr)> __UnityEngine_Networking_ConnectionConfigInternalSizeCheck;
  static_assert(sizeof(ConnectionConfigInternal) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Networking::ConnectionConfigInternal::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Networking::ConnectionConfigInternal::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::ConnectionConfigInternal::*)(bool)>(&UnityEngine::Networking::ConnectionConfigInternal::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::ConnectionConfigInternal*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::ConnectionConfigInternal::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::ConnectionConfigInternal::*)()>(&UnityEngine::Networking::ConnectionConfigInternal::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::ConnectionConfigInternal*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::ConnectionConfigInternal::InternalCreate
// Il2CppName: InternalCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)()>(&UnityEngine::Networking::ConnectionConfigInternal::InternalCreate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::ConnectionConfigInternal*), "InternalCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::ConnectionConfigInternal::InternalDestroy
// Il2CppName: InternalDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&UnityEngine::Networking::ConnectionConfigInternal::InternalDestroy)> {
  static const MethodInfo* get() {
    static auto* ptr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::ConnectionConfigInternal*), "InternalDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ptr});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::ConnectionConfigInternal::AddChannel
// Il2CppName: AddChannel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (UnityEngine::Networking::ConnectionConfigInternal::*)(int)>(&UnityEngine::Networking::ConnectionConfigInternal::AddChannel)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::ConnectionConfigInternal*), "AddChannel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::ConnectionConfigInternal::SetPacketSize
// Il2CppName: SetPacketSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Networking::ConnectionConfigInternal::*)(uint16_t)>(&UnityEngine::Networking::ConnectionConfigInternal::SetPacketSize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::ConnectionConfigInternal*), "SetPacketSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::ConnectionConfigInternal::set_FragmentSize
// Il2CppName: set_FragmentSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::ConnectionConfigInternal::*)(uint16_t)>(&UnityEngine::Networking::ConnectionConfigInternal::set_FragmentSize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::ConnectionConfigInternal*), "set_FragmentSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::ConnectionConfigInternal::set_ResendTimeout
// Il2CppName: set_ResendTimeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::ConnectionConfigInternal::*)(uint)>(&UnityEngine::Networking::ConnectionConfigInternal::set_ResendTimeout)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::ConnectionConfigInternal*), "set_ResendTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::ConnectionConfigInternal::set_DisconnectTimeout
// Il2CppName: set_DisconnectTimeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::ConnectionConfigInternal::*)(uint)>(&UnityEngine::Networking::ConnectionConfigInternal::set_DisconnectTimeout)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::ConnectionConfigInternal*), "set_DisconnectTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::ConnectionConfigInternal::set_ConnectTimeout
// Il2CppName: set_ConnectTimeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::ConnectionConfigInternal::*)(uint)>(&UnityEngine::Networking::ConnectionConfigInternal::set_ConnectTimeout)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::ConnectionConfigInternal*), "set_ConnectTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::ConnectionConfigInternal::set_MinUpdateTimeout
// Il2CppName: set_MinUpdateTimeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::ConnectionConfigInternal::*)(uint)>(&UnityEngine::Networking::ConnectionConfigInternal::set_MinUpdateTimeout)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::ConnectionConfigInternal*), "set_MinUpdateTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::ConnectionConfigInternal::set_PingTimeout
// Il2CppName: set_PingTimeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::ConnectionConfigInternal::*)(uint)>(&UnityEngine::Networking::ConnectionConfigInternal::set_PingTimeout)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::ConnectionConfigInternal*), "set_PingTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::ConnectionConfigInternal::set_ReducedPingTimeout
// Il2CppName: set_ReducedPingTimeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::ConnectionConfigInternal::*)(uint)>(&UnityEngine::Networking::ConnectionConfigInternal::set_ReducedPingTimeout)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::ConnectionConfigInternal*), "set_ReducedPingTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::ConnectionConfigInternal::set_AllCostTimeout
// Il2CppName: set_AllCostTimeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::ConnectionConfigInternal::*)(uint)>(&UnityEngine::Networking::ConnectionConfigInternal::set_AllCostTimeout)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::ConnectionConfigInternal*), "set_AllCostTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::ConnectionConfigInternal::set_NetworkDropThreshold
// Il2CppName: set_NetworkDropThreshold
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::ConnectionConfigInternal::*)(uint8_t)>(&UnityEngine::Networking::ConnectionConfigInternal::set_NetworkDropThreshold)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::ConnectionConfigInternal*), "set_NetworkDropThreshold", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::ConnectionConfigInternal::set_OverflowDropThreshold
// Il2CppName: set_OverflowDropThreshold
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::ConnectionConfigInternal::*)(uint8_t)>(&UnityEngine::Networking::ConnectionConfigInternal::set_OverflowDropThreshold)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::ConnectionConfigInternal*), "set_OverflowDropThreshold", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::ConnectionConfigInternal::set_MaxConnectionAttempt
// Il2CppName: set_MaxConnectionAttempt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::ConnectionConfigInternal::*)(uint8_t)>(&UnityEngine::Networking::ConnectionConfigInternal::set_MaxConnectionAttempt)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::ConnectionConfigInternal*), "set_MaxConnectionAttempt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::ConnectionConfigInternal::set_AckDelay
// Il2CppName: set_AckDelay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::ConnectionConfigInternal::*)(uint)>(&UnityEngine::Networking::ConnectionConfigInternal::set_AckDelay)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::ConnectionConfigInternal*), "set_AckDelay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::ConnectionConfigInternal::set_SendDelay
// Il2CppName: set_SendDelay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::ConnectionConfigInternal::*)(uint)>(&UnityEngine::Networking::ConnectionConfigInternal::set_SendDelay)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::ConnectionConfigInternal*), "set_SendDelay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::ConnectionConfigInternal::set_MaxCombinedReliableMessageSize
// Il2CppName: set_MaxCombinedReliableMessageSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::ConnectionConfigInternal::*)(uint16_t)>(&UnityEngine::Networking::ConnectionConfigInternal::set_MaxCombinedReliableMessageSize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::ConnectionConfigInternal*), "set_MaxCombinedReliableMessageSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::ConnectionConfigInternal::set_MaxCombinedReliableMessageCount
// Il2CppName: set_MaxCombinedReliableMessageCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::ConnectionConfigInternal::*)(uint16_t)>(&UnityEngine::Networking::ConnectionConfigInternal::set_MaxCombinedReliableMessageCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::ConnectionConfigInternal*), "set_MaxCombinedReliableMessageCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::ConnectionConfigInternal::set_MaxSentMessageQueueSize
// Il2CppName: set_MaxSentMessageQueueSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::ConnectionConfigInternal::*)(uint16_t)>(&UnityEngine::Networking::ConnectionConfigInternal::set_MaxSentMessageQueueSize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::ConnectionConfigInternal*), "set_MaxSentMessageQueueSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::ConnectionConfigInternal::set_AcksType
// Il2CppName: set_AcksType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::ConnectionConfigInternal::*)(uint8_t)>(&UnityEngine::Networking::ConnectionConfigInternal::set_AcksType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::ConnectionConfigInternal*), "set_AcksType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::ConnectionConfigInternal::set_UsePlatformSpecificProtocols
// Il2CppName: set_UsePlatformSpecificProtocols
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::ConnectionConfigInternal::*)(bool)>(&UnityEngine::Networking::ConnectionConfigInternal::set_UsePlatformSpecificProtocols)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::ConnectionConfigInternal*), "set_UsePlatformSpecificProtocols", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::ConnectionConfigInternal::set_InitialBandwidth
// Il2CppName: set_InitialBandwidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::ConnectionConfigInternal::*)(uint)>(&UnityEngine::Networking::ConnectionConfigInternal::set_InitialBandwidth)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::ConnectionConfigInternal*), "set_InitialBandwidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::ConnectionConfigInternal::set_BandwidthPeakFactor
// Il2CppName: set_BandwidthPeakFactor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::ConnectionConfigInternal::*)(float)>(&UnityEngine::Networking::ConnectionConfigInternal::set_BandwidthPeakFactor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::ConnectionConfigInternal*), "set_BandwidthPeakFactor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::ConnectionConfigInternal::set_WebSocketReceiveBufferMaxSize
// Il2CppName: set_WebSocketReceiveBufferMaxSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::ConnectionConfigInternal::*)(uint16_t)>(&UnityEngine::Networking::ConnectionConfigInternal::set_WebSocketReceiveBufferMaxSize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::ConnectionConfigInternal*), "set_WebSocketReceiveBufferMaxSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::ConnectionConfigInternal::set_UdpSocketReceiveBufferMaxSize
// Il2CppName: set_UdpSocketReceiveBufferMaxSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::ConnectionConfigInternal::*)(uint)>(&UnityEngine::Networking::ConnectionConfigInternal::set_UdpSocketReceiveBufferMaxSize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::ConnectionConfigInternal*), "set_UdpSocketReceiveBufferMaxSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::ConnectionConfigInternal::SetSSLCertFilePath
// Il2CppName: SetSSLCertFilePath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Networking::ConnectionConfigInternal::*)(::StringW)>(&UnityEngine::Networking::ConnectionConfigInternal::SetSSLCertFilePath)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::ConnectionConfigInternal*), "SetSSLCertFilePath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::ConnectionConfigInternal::SetSSLPrivateKeyFilePath
// Il2CppName: SetSSLPrivateKeyFilePath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Networking::ConnectionConfigInternal::*)(::StringW)>(&UnityEngine::Networking::ConnectionConfigInternal::SetSSLPrivateKeyFilePath)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::ConnectionConfigInternal*), "SetSSLPrivateKeyFilePath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::ConnectionConfigInternal::SetSSLCAFilePath
// Il2CppName: SetSSLCAFilePath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Networking::ConnectionConfigInternal::*)(::StringW)>(&UnityEngine::Networking::ConnectionConfigInternal::SetSSLCAFilePath)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::ConnectionConfigInternal*), "SetSSLCAFilePath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::ConnectionConfigInternal::MakeChannelsSharedOrder
// Il2CppName: MakeChannelsSharedOrder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Networking::ConnectionConfigInternal::*)(::ArrayW<uint8_t>)>(&UnityEngine::Networking::ConnectionConfigInternal::MakeChannelsSharedOrder)> {
  static const MethodInfo* get() {
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::ConnectionConfigInternal*), "MakeChannelsSharedOrder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{values});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::ConnectionConfigInternal::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::ConnectionConfigInternal::*)()>(&UnityEngine::Networking::ConnectionConfigInternal::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::ConnectionConfigInternal*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
