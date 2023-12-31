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
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: ConnectionConfig
  class ConnectionConfig;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.Networking
namespace UnityEngine::Networking {
  // Forward declaring type: HostTopology
  class HostTopology;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Networking::HostTopology);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::HostTopology*, "UnityEngine.Networking", "HostTopology");
// Type namespace: UnityEngine.Networking
namespace UnityEngine::Networking {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Networking.HostTopology
  // [TokenAttribute] Offset: FFFFFFFF
  // [ObsoleteAttribute] Offset: AA5854
  class HostTopology : public ::Il2CppObject {
    public:
    public:
    // private UnityEngine.Networking.ConnectionConfig m_DefConfig
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Networking::ConnectionConfig* m_DefConfig;
    // Field size check
    static_assert(sizeof(::UnityEngine::Networking::ConnectionConfig*) == 0x8);
    // private System.Int32 m_MaxDefConnections
    // Size: 0x4
    // Offset: 0x18
    int m_MaxDefConnections;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_MaxDefConnections and: m_SpecialConnections
    char __padding1[0x4] = {};
    // private System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig> m_SpecialConnections
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::UnityEngine::Networking::ConnectionConfig*>* m_SpecialConnections;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Networking::ConnectionConfig*>*) == 0x8);
    // private System.UInt16 m_ReceivedMessagePoolSize
    // Size: 0x2
    // Offset: 0x28
    uint16_t m_ReceivedMessagePoolSize;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // private System.UInt16 m_SentMessagePoolSize
    // Size: 0x2
    // Offset: 0x2A
    uint16_t m_SentMessagePoolSize;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // private System.Single m_MessagePoolSizeGrowthFactor
    // Size: 0x4
    // Offset: 0x2C
    float m_MessagePoolSizeGrowthFactor;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private UnityEngine.Networking.ConnectionConfig m_DefConfig
    [[deprecated("Use field access instead!")]] ::UnityEngine::Networking::ConnectionConfig*& dyn_m_DefConfig();
    // Get instance field reference: private System.Int32 m_MaxDefConnections
    [[deprecated("Use field access instead!")]] int& dyn_m_MaxDefConnections();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig> m_SpecialConnections
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Networking::ConnectionConfig*>*& dyn_m_SpecialConnections();
    // Get instance field reference: private System.UInt16 m_ReceivedMessagePoolSize
    [[deprecated("Use field access instead!")]] uint16_t& dyn_m_ReceivedMessagePoolSize();
    // Get instance field reference: private System.UInt16 m_SentMessagePoolSize
    [[deprecated("Use field access instead!")]] uint16_t& dyn_m_SentMessagePoolSize();
    // Get instance field reference: private System.Single m_MessagePoolSizeGrowthFactor
    [[deprecated("Use field access instead!")]] float& dyn_m_MessagePoolSizeGrowthFactor();
    // public System.Void .ctor(UnityEngine.Networking.ConnectionConfig defaultConfig, System.Int32 maxDefaultConnections)
    // Offset: 0x288B278
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HostTopology* New_ctor(::UnityEngine::Networking::ConnectionConfig* defaultConfig, int maxDefaultConnections) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Networking::HostTopology::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HostTopology*, creationType>(defaultConfig, maxDefaultConnections)));
    }
    // private System.Void .ctor()
    // Offset: 0x288B3F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HostTopology* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Networking::HostTopology::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HostTopology*, creationType>()));
    }
    // public UnityEngine.Networking.ConnectionConfig get_DefaultConfig()
    // Offset: 0x288B478
    ::UnityEngine::Networking::ConnectionConfig* get_DefaultConfig();
    // public System.Int32 get_MaxDefaultConnections()
    // Offset: 0x288B480
    int get_MaxDefaultConnections();
    // public System.Int32 get_SpecialConnectionConfigsCount()
    // Offset: 0x288B488
    int get_SpecialConnectionConfigsCount();
    // public System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig> get_SpecialConnectionConfigs()
    // Offset: 0x288B4E8
    ::System::Collections::Generic::List_1<::UnityEngine::Networking::ConnectionConfig*>* get_SpecialConnectionConfigs();
    // public UnityEngine.Networking.ConnectionConfig GetSpecialConnectionConfig(System.Int32 i)
    // Offset: 0x288B4F0
    ::UnityEngine::Networking::ConnectionConfig* GetSpecialConnectionConfig(int i);
    // public System.UInt16 get_ReceivedMessagePoolSize()
    // Offset: 0x288B5D4
    uint16_t get_ReceivedMessagePoolSize();
    // public System.UInt16 get_SentMessagePoolSize()
    // Offset: 0x288B5DC
    uint16_t get_SentMessagePoolSize();
    // public System.Single get_MessagePoolSizeGrowthFactor()
    // Offset: 0x288B5E4
    float get_MessagePoolSizeGrowthFactor();
  }; // UnityEngine.Networking.HostTopology
  #pragma pack(pop)
  static check_size<sizeof(HostTopology), 44 + sizeof(float)> __UnityEngine_Networking_HostTopologySizeCheck;
  static_assert(sizeof(HostTopology) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Networking::HostTopology::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Networking::HostTopology::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Networking::HostTopology::get_DefaultConfig
// Il2CppName: get_DefaultConfig
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::ConnectionConfig* (UnityEngine::Networking::HostTopology::*)()>(&UnityEngine::Networking::HostTopology::get_DefaultConfig)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::HostTopology*), "get_DefaultConfig", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::HostTopology::get_MaxDefaultConnections
// Il2CppName: get_MaxDefaultConnections
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Networking::HostTopology::*)()>(&UnityEngine::Networking::HostTopology::get_MaxDefaultConnections)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::HostTopology*), "get_MaxDefaultConnections", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::HostTopology::get_SpecialConnectionConfigsCount
// Il2CppName: get_SpecialConnectionConfigsCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Networking::HostTopology::*)()>(&UnityEngine::Networking::HostTopology::get_SpecialConnectionConfigsCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::HostTopology*), "get_SpecialConnectionConfigsCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::HostTopology::get_SpecialConnectionConfigs
// Il2CppName: get_SpecialConnectionConfigs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Networking::ConnectionConfig*>* (UnityEngine::Networking::HostTopology::*)()>(&UnityEngine::Networking::HostTopology::get_SpecialConnectionConfigs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::HostTopology*), "get_SpecialConnectionConfigs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::HostTopology::GetSpecialConnectionConfig
// Il2CppName: GetSpecialConnectionConfig
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::ConnectionConfig* (UnityEngine::Networking::HostTopology::*)(int)>(&UnityEngine::Networking::HostTopology::GetSpecialConnectionConfig)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::HostTopology*), "GetSpecialConnectionConfig", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::HostTopology::get_ReceivedMessagePoolSize
// Il2CppName: get_ReceivedMessagePoolSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (UnityEngine::Networking::HostTopology::*)()>(&UnityEngine::Networking::HostTopology::get_ReceivedMessagePoolSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::HostTopology*), "get_ReceivedMessagePoolSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::HostTopology::get_SentMessagePoolSize
// Il2CppName: get_SentMessagePoolSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (UnityEngine::Networking::HostTopology::*)()>(&UnityEngine::Networking::HostTopology::get_SentMessagePoolSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::HostTopology*), "get_SentMessagePoolSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::HostTopology::get_MessagePoolSizeGrowthFactor
// Il2CppName: get_MessagePoolSizeGrowthFactor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Networking::HostTopology::*)()>(&UnityEngine::Networking::HostTopology::get_MessagePoolSizeGrowthFactor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::HostTopology*), "get_MessagePoolSizeGrowthFactor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
