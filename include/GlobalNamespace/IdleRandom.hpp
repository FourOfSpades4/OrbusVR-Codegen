// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.StateMachineBehaviour
#include "UnityEngine/StateMachineBehaviour.hpp"
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
  // Forward declaring type: IdleRandom
  class IdleRandom;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::IdleRandom);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IdleRandom*, "", "IdleRandom");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: IdleRandom
  // [TokenAttribute] Offset: FFFFFFFF
  class IdleRandom : public ::UnityEngine::StateMachineBehaviour {
    public:
    public:
    // public System.Int32 totalOptions
    // Size: 0x4
    // Offset: 0x18
    int totalOptions;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Int32 totalOptions
    [[deprecated("Use field access instead!")]] int& dyn_totalOptions();
    // public System.Void .ctor()
    // Offset: 0x149CC6C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IdleRandom* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::IdleRandom::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IdleRandom*, creationType>()));
    }
    // public override System.Void OnStateMachineEnter(UnityEngine.Animator animator, System.Int32 stateMachinePathHash)
    // Offset: 0x149CBE8
    // Implemented from: UnityEngine.StateMachineBehaviour
    // Base method: System.Void StateMachineBehaviour::OnStateMachineEnter(UnityEngine.Animator animator, System.Int32 stateMachinePathHash)
    void OnStateMachineEnter(::UnityEngine::Animator* animator, int stateMachinePathHash);
  }; // IdleRandom
  #pragma pack(pop)
  static check_size<sizeof(IdleRandom), 24 + sizeof(int)> __GlobalNamespace_IdleRandomSizeCheck;
  static_assert(sizeof(IdleRandom) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IdleRandom::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::IdleRandom::OnStateMachineEnter
// Il2CppName: OnStateMachineEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IdleRandom::*)(::UnityEngine::Animator*, int)>(&GlobalNamespace::IdleRandom::OnStateMachineEnter)> {
  static const MethodInfo* get() {
    static auto* animator = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animator")->byval_arg;
    static auto* stateMachinePathHash = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IdleRandom*), "OnStateMachineEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animator, stateMachinePathHash});
  }
};
