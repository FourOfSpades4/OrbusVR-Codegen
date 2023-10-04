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
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: BoxCollider
  class BoxCollider;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: DistanceFade
  class DistanceFade;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::DistanceFade);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DistanceFade*, "", "DistanceFade");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: DistanceFade
  // [TokenAttribute] Offset: FFFFFFFF
  class DistanceFade : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.GameObject fadeObject
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::GameObject* fadeObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.Material transitionMat
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Material* transitionMat;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // private UnityEngine.Transform fadeTrans
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Transform* fadeTrans;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public System.Single fadeDist
    // Size: 0x4
    // Offset: 0x30
    float fadeDist;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single fadeAmt
    // Size: 0x4
    // Offset: 0x34
    float fadeAmt;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single prevFadeAmt
    // Size: 0x4
    // Offset: 0x38
    float prevFadeAmt;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: prevFadeAmt and: myCollider
    char __padding5[0x4] = {};
    // private UnityEngine.BoxCollider myCollider
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::BoxCollider* myCollider;
    // Field size check
    static_assert(sizeof(::UnityEngine::BoxCollider*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.GameObject fadeObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_fadeObject();
    // Get instance field reference: public UnityEngine.Material transitionMat
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_transitionMat();
    // Get instance field reference: private UnityEngine.Transform fadeTrans
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_fadeTrans();
    // Get instance field reference: public System.Single fadeDist
    [[deprecated("Use field access instead!")]] float& dyn_fadeDist();
    // Get instance field reference: private System.Single fadeAmt
    [[deprecated("Use field access instead!")]] float& dyn_fadeAmt();
    // Get instance field reference: private System.Single prevFadeAmt
    [[deprecated("Use field access instead!")]] float& dyn_prevFadeAmt();
    // Get instance field reference: private UnityEngine.BoxCollider myCollider
    [[deprecated("Use field access instead!")]] ::UnityEngine::BoxCollider*& dyn_myCollider();
    // private System.Void Start()
    // Offset: 0xF43B6C
    void Start();
    // private System.Void FixedUpdate()
    // Offset: 0xF43C7C
    void FixedUpdate();
    // public System.Void .ctor()
    // Offset: 0xF43E34
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DistanceFade* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DistanceFade::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DistanceFade*, creationType>()));
    }
  }; // DistanceFade
  #pragma pack(pop)
  static check_size<sizeof(DistanceFade), 64 + sizeof(::UnityEngine::BoxCollider*)> __GlobalNamespace_DistanceFadeSizeCheck;
  static_assert(sizeof(DistanceFade) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DistanceFade::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DistanceFade::*)()>(&GlobalNamespace::DistanceFade::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DistanceFade*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DistanceFade::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DistanceFade::*)()>(&GlobalNamespace::DistanceFade::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DistanceFade*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DistanceFade::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
