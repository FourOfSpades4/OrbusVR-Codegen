// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: AmplifyColorTriggerProxyBase
#include "GlobalNamespace/AmplifyColorTriggerProxyBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CircleCollider2D
  class CircleCollider2D;
  // Forward declaring type: Rigidbody2D
  class Rigidbody2D;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: AmplifyColorTriggerProxy2D
  class AmplifyColorTriggerProxy2D;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AmplifyColorTriggerProxy2D);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AmplifyColorTriggerProxy2D*, "", "AmplifyColorTriggerProxy2D");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: AmplifyColorTriggerProxy2D
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: ACCBF0
  // [RequireComponent] Offset: ACCBF0
  // [AddComponentMenu] Offset: ACCBF0
  class AmplifyColorTriggerProxy2D : public ::GlobalNamespace::AmplifyColorTriggerProxyBase {
    public:
    public:
    // private UnityEngine.CircleCollider2D circleCollider
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::CircleCollider2D* circleCollider;
    // Field size check
    static_assert(sizeof(::UnityEngine::CircleCollider2D*) == 0x8);
    // private UnityEngine.Rigidbody2D rigidBody
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Rigidbody2D* rigidBody;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rigidbody2D*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.CircleCollider2D circleCollider
    [[deprecated("Use field access instead!")]] ::UnityEngine::CircleCollider2D*& dyn_circleCollider();
    // Get instance field reference: private UnityEngine.Rigidbody2D rigidBody
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rigidbody2D*& dyn_rigidBody();
    // private System.Void Start()
    // Offset: 0xF08BE4
    void Start();
    // private System.Void LateUpdate()
    // Offset: 0xF08CCC
    void LateUpdate();
    // public System.Void .ctor()
    // Offset: 0xF08DB8
    // Implemented from: AmplifyColorTriggerProxyBase
    // Base method: System.Void AmplifyColorTriggerProxyBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AmplifyColorTriggerProxy2D* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AmplifyColorTriggerProxy2D::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AmplifyColorTriggerProxy2D*, creationType>()));
    }
  }; // AmplifyColorTriggerProxy2D
  #pragma pack(pop)
  static check_size<sizeof(AmplifyColorTriggerProxy2D), 48 + sizeof(::UnityEngine::Rigidbody2D*)> __GlobalNamespace_AmplifyColorTriggerProxy2DSizeCheck;
  static_assert(sizeof(AmplifyColorTriggerProxy2D) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AmplifyColorTriggerProxy2D::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AmplifyColorTriggerProxy2D::*)()>(&GlobalNamespace::AmplifyColorTriggerProxy2D::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AmplifyColorTriggerProxy2D*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AmplifyColorTriggerProxy2D::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AmplifyColorTriggerProxy2D::*)()>(&GlobalNamespace::AmplifyColorTriggerProxy2D::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AmplifyColorTriggerProxy2D*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AmplifyColorTriggerProxy2D::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
