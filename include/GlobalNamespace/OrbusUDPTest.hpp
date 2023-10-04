// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OrbusUDPTest
  class OrbusUDPTest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OrbusUDPTest);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OrbusUDPTest*, "", "OrbusUDPTest");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: OrbusUDPTest
  // [TokenAttribute] Offset: FFFFFFFF
  class OrbusUDPTest : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Int32 myReliableChannelId
    // Size: 0x4
    // Offset: 0x18
    int myReliableChannelId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 reliableSocketId
    // Size: 0x4
    // Offset: 0x1C
    int reliableSocketId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 reliableSocketPort
    // Size: 0x4
    // Offset: 0x20
    int reliableSocketPort;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 connectionId
    // Size: 0x4
    // Offset: 0x24
    int connectionId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Int32 myReliableChannelId
    [[deprecated("Use field access instead!")]] int& dyn_myReliableChannelId();
    // Get instance field reference: private System.Int32 reliableSocketId
    [[deprecated("Use field access instead!")]] int& dyn_reliableSocketId();
    // Get instance field reference: private System.Int32 reliableSocketPort
    [[deprecated("Use field access instead!")]] int& dyn_reliableSocketPort();
    // Get instance field reference: private System.Int32 connectionId
    [[deprecated("Use field access instead!")]] int& dyn_connectionId();
    // private System.Void Start()
    // Offset: 0xD89FBC
    void Start();
    // public System.Void Connect()
    // Offset: 0xD8A118
    void Connect();
    // private System.Void FixedUpdate()
    // Offset: 0xD8A1B0
    void FixedUpdate();
    // public System.Void SendSocketMessage()
    // Offset: 0xD8A1B4
    void SendSocketMessage();
    // public System.Void .ctor()
    // Offset: 0xD8A2B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OrbusUDPTest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OrbusUDPTest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OrbusUDPTest*, creationType>()));
    }
  }; // OrbusUDPTest
  #pragma pack(pop)
  static check_size<sizeof(OrbusUDPTest), 36 + sizeof(int)> __GlobalNamespace_OrbusUDPTestSizeCheck;
  static_assert(sizeof(OrbusUDPTest) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OrbusUDPTest::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OrbusUDPTest::*)()>(&GlobalNamespace::OrbusUDPTest::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OrbusUDPTest*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OrbusUDPTest::Connect
// Il2CppName: Connect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OrbusUDPTest::*)()>(&GlobalNamespace::OrbusUDPTest::Connect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OrbusUDPTest*), "Connect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OrbusUDPTest::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OrbusUDPTest::*)()>(&GlobalNamespace::OrbusUDPTest::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OrbusUDPTest*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OrbusUDPTest::SendSocketMessage
// Il2CppName: SendSocketMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OrbusUDPTest::*)()>(&GlobalNamespace::OrbusUDPTest::SendSocketMessage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OrbusUDPTest*), "SendSocketMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OrbusUDPTest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!