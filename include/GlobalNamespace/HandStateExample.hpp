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
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: HandStateExample
  class HandStateExample;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::HandStateExample);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HandStateExample*, "", "HandStateExample");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x6C
  #pragma pack(push, 1)
  // Autogenerated type: HandStateExample
  // [TokenAttribute] Offset: FFFFFFFF
  class HandStateExample : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.Animator animator
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Animator* animator;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animator*) == 0x8);
    // public System.Boolean thumbUp
    // Size: 0x1
    // Offset: 0x20
    bool thumbUp;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean fingerPointing
    // Size: 0x1
    // Offset: 0x21
    bool fingerPointing;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean gripping
    // Size: 0x1
    // Offset: 0x22
    bool gripping;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: gripping and: scaleSpeed
    char __padding3[0x1] = {};
    // private System.Single scaleSpeed
    // Size: 0x4
    // Offset: 0x24
    float scaleSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single TClosed
    // Size: 0x4
    // Offset: 0x28
    float TClosed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single IClosed
    // Size: 0x4
    // Offset: 0x2C
    float IClosed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single MClosed
    // Size: 0x4
    // Offset: 0x30
    float MClosed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single RClosed
    // Size: 0x4
    // Offset: 0x34
    float RClosed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single PClosed
    // Size: 0x4
    // Offset: 0x38
    float PClosed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single TOpen
    // Size: 0x4
    // Offset: 0x3C
    float TOpen;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single IOpen
    // Size: 0x4
    // Offset: 0x40
    float IOpen;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single MOpen
    // Size: 0x4
    // Offset: 0x44
    float MOpen;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single ROpen
    // Size: 0x4
    // Offset: 0x48
    float ROpen;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single POpen
    // Size: 0x4
    // Offset: 0x4C
    float POpen;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single tDelta
    // Size: 0x4
    // Offset: 0x50
    float tDelta;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single iDelta
    // Size: 0x4
    // Offset: 0x54
    float iDelta;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single mDelta
    // Size: 0x4
    // Offset: 0x58
    float mDelta;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single rDelta
    // Size: 0x4
    // Offset: 0x5C
    float rDelta;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single pDelta
    // Size: 0x4
    // Offset: 0x60
    float pDelta;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single indexPosition
    // Size: 0x4
    // Offset: 0x64
    float indexPosition;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single thumbPosition
    // Size: 0x4
    // Offset: 0x68
    float thumbPosition;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.Animator animator
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animator*& dyn_animator();
    // Get instance field reference: public System.Boolean thumbUp
    [[deprecated("Use field access instead!")]] bool& dyn_thumbUp();
    // Get instance field reference: public System.Boolean fingerPointing
    [[deprecated("Use field access instead!")]] bool& dyn_fingerPointing();
    // Get instance field reference: public System.Boolean gripping
    [[deprecated("Use field access instead!")]] bool& dyn_gripping();
    // Get instance field reference: private System.Single scaleSpeed
    [[deprecated("Use field access instead!")]] float& dyn_scaleSpeed();
    // Get instance field reference: private System.Single TClosed
    [[deprecated("Use field access instead!")]] float& dyn_TClosed();
    // Get instance field reference: private System.Single IClosed
    [[deprecated("Use field access instead!")]] float& dyn_IClosed();
    // Get instance field reference: private System.Single MClosed
    [[deprecated("Use field access instead!")]] float& dyn_MClosed();
    // Get instance field reference: private System.Single RClosed
    [[deprecated("Use field access instead!")]] float& dyn_RClosed();
    // Get instance field reference: private System.Single PClosed
    [[deprecated("Use field access instead!")]] float& dyn_PClosed();
    // Get instance field reference: private System.Single TOpen
    [[deprecated("Use field access instead!")]] float& dyn_TOpen();
    // Get instance field reference: private System.Single IOpen
    [[deprecated("Use field access instead!")]] float& dyn_IOpen();
    // Get instance field reference: private System.Single MOpen
    [[deprecated("Use field access instead!")]] float& dyn_MOpen();
    // Get instance field reference: private System.Single ROpen
    [[deprecated("Use field access instead!")]] float& dyn_ROpen();
    // Get instance field reference: private System.Single POpen
    [[deprecated("Use field access instead!")]] float& dyn_POpen();
    // Get instance field reference: private System.Single tDelta
    [[deprecated("Use field access instead!")]] float& dyn_tDelta();
    // Get instance field reference: private System.Single iDelta
    [[deprecated("Use field access instead!")]] float& dyn_iDelta();
    // Get instance field reference: private System.Single mDelta
    [[deprecated("Use field access instead!")]] float& dyn_mDelta();
    // Get instance field reference: private System.Single rDelta
    [[deprecated("Use field access instead!")]] float& dyn_rDelta();
    // Get instance field reference: private System.Single pDelta
    [[deprecated("Use field access instead!")]] float& dyn_pDelta();
    // Get instance field reference: private System.Single indexPosition
    [[deprecated("Use field access instead!")]] float& dyn_indexPosition();
    // Get instance field reference: private System.Single thumbPosition
    [[deprecated("Use field access instead!")]] float& dyn_thumbPosition();
    // private System.Void Start()
    // Offset: 0x14939D8
    void Start();
    // private System.Void OnEnable()
    // Offset: 0x14939E4
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x1493A84
    void OnDisable();
    // private System.Void FixedUpdate()
    // Offset: 0x1493B24
    void FixedUpdate();
    // private System.Void HandStateManager()
    // Offset: 0x1493B28
    void HandStateManager();
    // public System.Void .ctor()
    // Offset: 0x1494028
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HandStateExample* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::HandStateExample::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HandStateExample*, creationType>()));
    }
  }; // HandStateExample
  #pragma pack(pop)
  static check_size<sizeof(HandStateExample), 104 + sizeof(float)> __GlobalNamespace_HandStateExampleSizeCheck;
  static_assert(sizeof(HandStateExample) == 0x6C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HandStateExample::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HandStateExample::*)()>(&GlobalNamespace::HandStateExample::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HandStateExample*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HandStateExample::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HandStateExample::*)()>(&GlobalNamespace::HandStateExample::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HandStateExample*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HandStateExample::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HandStateExample::*)()>(&GlobalNamespace::HandStateExample::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HandStateExample*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HandStateExample::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HandStateExample::*)()>(&GlobalNamespace::HandStateExample::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HandStateExample*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HandStateExample::HandStateManager
// Il2CppName: HandStateManager
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HandStateExample::*)()>(&GlobalNamespace::HandStateExample::HandStateManager)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HandStateExample*), "HandStateManager", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HandStateExample::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
