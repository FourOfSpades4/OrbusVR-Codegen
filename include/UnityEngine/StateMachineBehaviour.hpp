// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
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
  // Forward declaring type: AnimatorStateInfo
  struct AnimatorStateInfo;
}
// Forward declaring namespace: UnityEngine::Animations
namespace UnityEngine::Animations {
  // Forward declaring type: AnimatorControllerPlayable
  struct AnimatorControllerPlayable;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: StateMachineBehaviour
  class StateMachineBehaviour;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::StateMachineBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::StateMachineBehaviour*, "UnityEngine", "StateMachineBehaviour");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.StateMachineBehaviour
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: A92428
  class StateMachineBehaviour : public ::UnityEngine::ScriptableObject {
    public:
    // protected System.Void .ctor()
    // Offset: 0x28645A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StateMachineBehaviour* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::StateMachineBehaviour::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StateMachineBehaviour*, creationType>()));
    }
    // public System.Void OnStateEnter(UnityEngine.Animator animator, UnityEngine.AnimatorStateInfo stateInfo, System.Int32 layerIndex)
    // Offset: 0x28645A8
    void OnStateEnter(::UnityEngine::Animator* animator, ::UnityEngine::AnimatorStateInfo stateInfo, int layerIndex);
    // public System.Void OnStateUpdate(UnityEngine.Animator animator, UnityEngine.AnimatorStateInfo stateInfo, System.Int32 layerIndex)
    // Offset: 0x28645AC
    void OnStateUpdate(::UnityEngine::Animator* animator, ::UnityEngine::AnimatorStateInfo stateInfo, int layerIndex);
    // public System.Void OnStateExit(UnityEngine.Animator animator, UnityEngine.AnimatorStateInfo stateInfo, System.Int32 layerIndex)
    // Offset: 0x28645B0
    void OnStateExit(::UnityEngine::Animator* animator, ::UnityEngine::AnimatorStateInfo stateInfo, int layerIndex);
    // public System.Void OnStateMove(UnityEngine.Animator animator, UnityEngine.AnimatorStateInfo stateInfo, System.Int32 layerIndex)
    // Offset: 0x28645B4
    void OnStateMove(::UnityEngine::Animator* animator, ::UnityEngine::AnimatorStateInfo stateInfo, int layerIndex);
    // public System.Void OnStateIK(UnityEngine.Animator animator, UnityEngine.AnimatorStateInfo stateInfo, System.Int32 layerIndex)
    // Offset: 0x28645B8
    void OnStateIK(::UnityEngine::Animator* animator, ::UnityEngine::AnimatorStateInfo stateInfo, int layerIndex);
    // public System.Void OnStateMachineEnter(UnityEngine.Animator animator, System.Int32 stateMachinePathHash)
    // Offset: 0x28645BC
    void OnStateMachineEnter(::UnityEngine::Animator* animator, int stateMachinePathHash);
    // public System.Void OnStateMachineExit(UnityEngine.Animator animator, System.Int32 stateMachinePathHash)
    // Offset: 0x28645C0
    void OnStateMachineExit(::UnityEngine::Animator* animator, int stateMachinePathHash);
    // public System.Void OnStateEnter(UnityEngine.Animator animator, UnityEngine.AnimatorStateInfo stateInfo, System.Int32 layerIndex, UnityEngine.Animations.AnimatorControllerPlayable controller)
    // Offset: 0x28645C4
    void OnStateEnter(::UnityEngine::Animator* animator, ::UnityEngine::AnimatorStateInfo stateInfo, int layerIndex, ::UnityEngine::Animations::AnimatorControllerPlayable controller);
    // public System.Void OnStateUpdate(UnityEngine.Animator animator, UnityEngine.AnimatorStateInfo stateInfo, System.Int32 layerIndex, UnityEngine.Animations.AnimatorControllerPlayable controller)
    // Offset: 0x28645C8
    void OnStateUpdate(::UnityEngine::Animator* animator, ::UnityEngine::AnimatorStateInfo stateInfo, int layerIndex, ::UnityEngine::Animations::AnimatorControllerPlayable controller);
    // public System.Void OnStateExit(UnityEngine.Animator animator, UnityEngine.AnimatorStateInfo stateInfo, System.Int32 layerIndex, UnityEngine.Animations.AnimatorControllerPlayable controller)
    // Offset: 0x28645CC
    void OnStateExit(::UnityEngine::Animator* animator, ::UnityEngine::AnimatorStateInfo stateInfo, int layerIndex, ::UnityEngine::Animations::AnimatorControllerPlayable controller);
    // public System.Void OnStateMove(UnityEngine.Animator animator, UnityEngine.AnimatorStateInfo stateInfo, System.Int32 layerIndex, UnityEngine.Animations.AnimatorControllerPlayable controller)
    // Offset: 0x28645D0
    void OnStateMove(::UnityEngine::Animator* animator, ::UnityEngine::AnimatorStateInfo stateInfo, int layerIndex, ::UnityEngine::Animations::AnimatorControllerPlayable controller);
    // public System.Void OnStateIK(UnityEngine.Animator animator, UnityEngine.AnimatorStateInfo stateInfo, System.Int32 layerIndex, UnityEngine.Animations.AnimatorControllerPlayable controller)
    // Offset: 0x28645D4
    void OnStateIK(::UnityEngine::Animator* animator, ::UnityEngine::AnimatorStateInfo stateInfo, int layerIndex, ::UnityEngine::Animations::AnimatorControllerPlayable controller);
    // public System.Void OnStateMachineEnter(UnityEngine.Animator animator, System.Int32 stateMachinePathHash, UnityEngine.Animations.AnimatorControllerPlayable controller)
    // Offset: 0x28645D8
    void OnStateMachineEnter(::UnityEngine::Animator* animator, int stateMachinePathHash, ::UnityEngine::Animations::AnimatorControllerPlayable controller);
    // public System.Void OnStateMachineExit(UnityEngine.Animator animator, System.Int32 stateMachinePathHash, UnityEngine.Animations.AnimatorControllerPlayable controller)
    // Offset: 0x28645DC
    void OnStateMachineExit(::UnityEngine::Animator* animator, int stateMachinePathHash, ::UnityEngine::Animations::AnimatorControllerPlayable controller);
  }; // UnityEngine.StateMachineBehaviour
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::StateMachineBehaviour::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::StateMachineBehaviour::OnStateEnter
// Il2CppName: OnStateEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::StateMachineBehaviour::*)(::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, int)>(&UnityEngine::StateMachineBehaviour::OnStateEnter)> {
  static const MethodInfo* get() {
    static auto* animator = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animator")->byval_arg;
    static auto* stateInfo = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimatorStateInfo")->byval_arg;
    static auto* layerIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::StateMachineBehaviour*), "OnStateEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animator, stateInfo, layerIndex});
  }
};
// Writing MetadataGetter for method: UnityEngine::StateMachineBehaviour::OnStateUpdate
// Il2CppName: OnStateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::StateMachineBehaviour::*)(::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, int)>(&UnityEngine::StateMachineBehaviour::OnStateUpdate)> {
  static const MethodInfo* get() {
    static auto* animator = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animator")->byval_arg;
    static auto* stateInfo = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimatorStateInfo")->byval_arg;
    static auto* layerIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::StateMachineBehaviour*), "OnStateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animator, stateInfo, layerIndex});
  }
};
// Writing MetadataGetter for method: UnityEngine::StateMachineBehaviour::OnStateExit
// Il2CppName: OnStateExit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::StateMachineBehaviour::*)(::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, int)>(&UnityEngine::StateMachineBehaviour::OnStateExit)> {
  static const MethodInfo* get() {
    static auto* animator = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animator")->byval_arg;
    static auto* stateInfo = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimatorStateInfo")->byval_arg;
    static auto* layerIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::StateMachineBehaviour*), "OnStateExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animator, stateInfo, layerIndex});
  }
};
// Writing MetadataGetter for method: UnityEngine::StateMachineBehaviour::OnStateMove
// Il2CppName: OnStateMove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::StateMachineBehaviour::*)(::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, int)>(&UnityEngine::StateMachineBehaviour::OnStateMove)> {
  static const MethodInfo* get() {
    static auto* animator = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animator")->byval_arg;
    static auto* stateInfo = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimatorStateInfo")->byval_arg;
    static auto* layerIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::StateMachineBehaviour*), "OnStateMove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animator, stateInfo, layerIndex});
  }
};
// Writing MetadataGetter for method: UnityEngine::StateMachineBehaviour::OnStateIK
// Il2CppName: OnStateIK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::StateMachineBehaviour::*)(::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, int)>(&UnityEngine::StateMachineBehaviour::OnStateIK)> {
  static const MethodInfo* get() {
    static auto* animator = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animator")->byval_arg;
    static auto* stateInfo = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimatorStateInfo")->byval_arg;
    static auto* layerIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::StateMachineBehaviour*), "OnStateIK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animator, stateInfo, layerIndex});
  }
};
// Writing MetadataGetter for method: UnityEngine::StateMachineBehaviour::OnStateMachineEnter
// Il2CppName: OnStateMachineEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::StateMachineBehaviour::*)(::UnityEngine::Animator*, int)>(&UnityEngine::StateMachineBehaviour::OnStateMachineEnter)> {
  static const MethodInfo* get() {
    static auto* animator = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animator")->byval_arg;
    static auto* stateMachinePathHash = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::StateMachineBehaviour*), "OnStateMachineEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animator, stateMachinePathHash});
  }
};
// Writing MetadataGetter for method: UnityEngine::StateMachineBehaviour::OnStateMachineExit
// Il2CppName: OnStateMachineExit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::StateMachineBehaviour::*)(::UnityEngine::Animator*, int)>(&UnityEngine::StateMachineBehaviour::OnStateMachineExit)> {
  static const MethodInfo* get() {
    static auto* animator = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animator")->byval_arg;
    static auto* stateMachinePathHash = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::StateMachineBehaviour*), "OnStateMachineExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animator, stateMachinePathHash});
  }
};
// Writing MetadataGetter for method: UnityEngine::StateMachineBehaviour::OnStateEnter
// Il2CppName: OnStateEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::StateMachineBehaviour::*)(::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, int, ::UnityEngine::Animations::AnimatorControllerPlayable)>(&UnityEngine::StateMachineBehaviour::OnStateEnter)> {
  static const MethodInfo* get() {
    static auto* animator = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animator")->byval_arg;
    static auto* stateInfo = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimatorStateInfo")->byval_arg;
    static auto* layerIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* controller = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "AnimatorControllerPlayable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::StateMachineBehaviour*), "OnStateEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animator, stateInfo, layerIndex, controller});
  }
};
// Writing MetadataGetter for method: UnityEngine::StateMachineBehaviour::OnStateUpdate
// Il2CppName: OnStateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::StateMachineBehaviour::*)(::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, int, ::UnityEngine::Animations::AnimatorControllerPlayable)>(&UnityEngine::StateMachineBehaviour::OnStateUpdate)> {
  static const MethodInfo* get() {
    static auto* animator = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animator")->byval_arg;
    static auto* stateInfo = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimatorStateInfo")->byval_arg;
    static auto* layerIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* controller = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "AnimatorControllerPlayable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::StateMachineBehaviour*), "OnStateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animator, stateInfo, layerIndex, controller});
  }
};
// Writing MetadataGetter for method: UnityEngine::StateMachineBehaviour::OnStateExit
// Il2CppName: OnStateExit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::StateMachineBehaviour::*)(::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, int, ::UnityEngine::Animations::AnimatorControllerPlayable)>(&UnityEngine::StateMachineBehaviour::OnStateExit)> {
  static const MethodInfo* get() {
    static auto* animator = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animator")->byval_arg;
    static auto* stateInfo = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimatorStateInfo")->byval_arg;
    static auto* layerIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* controller = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "AnimatorControllerPlayable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::StateMachineBehaviour*), "OnStateExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animator, stateInfo, layerIndex, controller});
  }
};
// Writing MetadataGetter for method: UnityEngine::StateMachineBehaviour::OnStateMove
// Il2CppName: OnStateMove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::StateMachineBehaviour::*)(::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, int, ::UnityEngine::Animations::AnimatorControllerPlayable)>(&UnityEngine::StateMachineBehaviour::OnStateMove)> {
  static const MethodInfo* get() {
    static auto* animator = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animator")->byval_arg;
    static auto* stateInfo = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimatorStateInfo")->byval_arg;
    static auto* layerIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* controller = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "AnimatorControllerPlayable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::StateMachineBehaviour*), "OnStateMove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animator, stateInfo, layerIndex, controller});
  }
};
// Writing MetadataGetter for method: UnityEngine::StateMachineBehaviour::OnStateIK
// Il2CppName: OnStateIK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::StateMachineBehaviour::*)(::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, int, ::UnityEngine::Animations::AnimatorControllerPlayable)>(&UnityEngine::StateMachineBehaviour::OnStateIK)> {
  static const MethodInfo* get() {
    static auto* animator = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animator")->byval_arg;
    static auto* stateInfo = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimatorStateInfo")->byval_arg;
    static auto* layerIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* controller = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "AnimatorControllerPlayable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::StateMachineBehaviour*), "OnStateIK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animator, stateInfo, layerIndex, controller});
  }
};
// Writing MetadataGetter for method: UnityEngine::StateMachineBehaviour::OnStateMachineEnter
// Il2CppName: OnStateMachineEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::StateMachineBehaviour::*)(::UnityEngine::Animator*, int, ::UnityEngine::Animations::AnimatorControllerPlayable)>(&UnityEngine::StateMachineBehaviour::OnStateMachineEnter)> {
  static const MethodInfo* get() {
    static auto* animator = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animator")->byval_arg;
    static auto* stateMachinePathHash = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* controller = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "AnimatorControllerPlayable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::StateMachineBehaviour*), "OnStateMachineEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animator, stateMachinePathHash, controller});
  }
};
// Writing MetadataGetter for method: UnityEngine::StateMachineBehaviour::OnStateMachineExit
// Il2CppName: OnStateMachineExit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::StateMachineBehaviour::*)(::UnityEngine::Animator*, int, ::UnityEngine::Animations::AnimatorControllerPlayable)>(&UnityEngine::StateMachineBehaviour::OnStateMachineExit)> {
  static const MethodInfo* get() {
    static auto* animator = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animator")->byval_arg;
    static auto* stateMachinePathHash = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* controller = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "AnimatorControllerPlayable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::StateMachineBehaviour*), "OnStateMachineExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animator, stateMachinePathHash, controller});
  }
};
