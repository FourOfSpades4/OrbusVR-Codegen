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
// Forward declaring namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: Grabber
  class Grabber;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PhysicsInteractable
  class PhysicsInteractable;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ActionOpenChest
  class ActionOpenChest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ActionOpenChest);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ActionOpenChest*, "", "ActionOpenChest");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: ActionOpenChest
  // [TokenAttribute] Offset: FFFFFFFF
  class ActionOpenChest : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private MagicalActual.Grabber attachedToPlayer
    // Size: 0x8
    // Offset: 0x18
    ::MagicalActual::Grabber* attachedToPlayer;
    // Field size check
    static_assert(sizeof(::MagicalActual::Grabber*) == 0x8);
    // public UnityEngine.GameObject chest
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* chest;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private System.Single startYPosition
    // Size: 0x4
    // Offset: 0x28
    float startYPosition;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single startXRotation
    // Size: 0x4
    // Offset: 0x2C
    float startXRotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean chestOpen
    // Size: 0x1
    // Offset: 0x30
    bool chestOpen;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: chestOpen and: myPhysicsInteractable
    char __padding4[0x7] = {};
    // private PhysicsInteractable myPhysicsInteractable
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::PhysicsInteractable* myPhysicsInteractable;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PhysicsInteractable*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private MagicalActual.Grabber attachedToPlayer
    [[deprecated("Use field access instead!")]] ::MagicalActual::Grabber*& dyn_attachedToPlayer();
    // Get instance field reference: public UnityEngine.GameObject chest
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_chest();
    // Get instance field reference: private System.Single startYPosition
    [[deprecated("Use field access instead!")]] float& dyn_startYPosition();
    // Get instance field reference: private System.Single startXRotation
    [[deprecated("Use field access instead!")]] float& dyn_startXRotation();
    // Get instance field reference: private System.Boolean chestOpen
    [[deprecated("Use field access instead!")]] bool& dyn_chestOpen();
    // Get instance field reference: private PhysicsInteractable myPhysicsInteractable
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PhysicsInteractable*& dyn_myPhysicsInteractable();
    // private System.Void Awake()
    // Offset: 0xEF388C
    void Awake();
    // private System.Void Start()
    // Offset: 0xEF38E4
    void Start();
    // public System.Void doGripInteraction(UnityEngine.GameObject sender)
    // Offset: 0xEF396C
    void doGripInteraction(::UnityEngine::GameObject* sender);
    // public System.Void doUnGripInteraction(UnityEngine.GameObject sender)
    // Offset: 0xEF3B24
    void doUnGripInteraction(::UnityEngine::GameObject* sender);
    // private System.Void FixedUpdate()
    // Offset: 0xEF3C48
    void FixedUpdate();
    // public System.Void ForceChestClose()
    // Offset: 0xEF4088
    void ForceChestClose();
    // public System.Void ForceChestOpen()
    // Offset: 0xEF3EF0
    void ForceChestOpen();
    // public System.Void .ctor()
    // Offset: 0xEF421C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ActionOpenChest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ActionOpenChest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ActionOpenChest*, creationType>()));
    }
  }; // ActionOpenChest
  #pragma pack(pop)
  static check_size<sizeof(ActionOpenChest), 56 + sizeof(::GlobalNamespace::PhysicsInteractable*)> __GlobalNamespace_ActionOpenChestSizeCheck;
  static_assert(sizeof(ActionOpenChest) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ActionOpenChest::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ActionOpenChest::*)()>(&GlobalNamespace::ActionOpenChest::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ActionOpenChest*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ActionOpenChest::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ActionOpenChest::*)()>(&GlobalNamespace::ActionOpenChest::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ActionOpenChest*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ActionOpenChest::doGripInteraction
// Il2CppName: doGripInteraction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ActionOpenChest::*)(::UnityEngine::GameObject*)>(&GlobalNamespace::ActionOpenChest::doGripInteraction)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ActionOpenChest*), "doGripInteraction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ActionOpenChest::doUnGripInteraction
// Il2CppName: doUnGripInteraction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ActionOpenChest::*)(::UnityEngine::GameObject*)>(&GlobalNamespace::ActionOpenChest::doUnGripInteraction)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ActionOpenChest*), "doUnGripInteraction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ActionOpenChest::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ActionOpenChest::*)()>(&GlobalNamespace::ActionOpenChest::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ActionOpenChest*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ActionOpenChest::ForceChestClose
// Il2CppName: ForceChestClose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ActionOpenChest::*)()>(&GlobalNamespace::ActionOpenChest::ForceChestClose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ActionOpenChest*), "ForceChestClose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ActionOpenChest::ForceChestOpen
// Il2CppName: ForceChestOpen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ActionOpenChest::*)()>(&GlobalNamespace::ActionOpenChest::ForceChestOpen)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ActionOpenChest*), "ForceChestOpen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ActionOpenChest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!