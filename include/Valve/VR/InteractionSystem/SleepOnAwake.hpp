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
// Type namespace: Valve.VR.InteractionSystem
namespace Valve::VR::InteractionSystem {
  // Forward declaring type: SleepOnAwake
  class SleepOnAwake;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Valve::VR::InteractionSystem::SleepOnAwake);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::InteractionSystem::SleepOnAwake*, "Valve.VR.InteractionSystem", "SleepOnAwake");
// Type namespace: Valve.VR.InteractionSystem
namespace Valve::VR::InteractionSystem {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.InteractionSystem.SleepOnAwake
  // [TokenAttribute] Offset: FFFFFFFF
  class SleepOnAwake : public ::UnityEngine::MonoBehaviour {
    public:
    // private System.Void Awake()
    // Offset: 0xDBF75C
    void Awake();
    // public System.Void .ctor()
    // Offset: 0xDBF808
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SleepOnAwake* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::InteractionSystem::SleepOnAwake::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SleepOnAwake*, creationType>()));
    }
  }; // Valve.VR.InteractionSystem.SleepOnAwake
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::SleepOnAwake::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::SleepOnAwake::*)()>(&Valve::VR::InteractionSystem::SleepOnAwake::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::SleepOnAwake*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::SleepOnAwake::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
