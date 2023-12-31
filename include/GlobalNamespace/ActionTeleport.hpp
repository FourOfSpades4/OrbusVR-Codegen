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
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ActionTeleport
  class ActionTeleport;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ActionTeleport);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ActionTeleport*, "", "ActionTeleport");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: ActionTeleport
  // [TokenAttribute] Offset: FFFFFFFF
  class ActionTeleport : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.GameObject destination
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::GameObject* destination;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public System.Boolean destinationIsIndoors
    // Size: 0x1
    // Offset: 0x20
    bool destinationIsIndoors;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.GameObject destination
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_destination();
    // Get instance field reference: public System.Boolean destinationIsIndoors
    [[deprecated("Use field access instead!")]] bool& dyn_destinationIsIndoors();
    // public System.Void doTriggerInteraction(UnityEngine.GameObject sender)
    // Offset: 0xEF4BA8
    void doTriggerInteraction(::UnityEngine::GameObject* sender);
    // public System.Void .ctor()
    // Offset: 0xEF4CE8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ActionTeleport* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ActionTeleport::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ActionTeleport*, creationType>()));
    }
  }; // ActionTeleport
  #pragma pack(pop)
  static check_size<sizeof(ActionTeleport), 32 + sizeof(bool)> __GlobalNamespace_ActionTeleportSizeCheck;
  static_assert(sizeof(ActionTeleport) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ActionTeleport::doTriggerInteraction
// Il2CppName: doTriggerInteraction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ActionTeleport::*)(::UnityEngine::GameObject*)>(&GlobalNamespace::ActionTeleport::doTriggerInteraction)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ActionTeleport*), "doTriggerInteraction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ActionTeleport::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
