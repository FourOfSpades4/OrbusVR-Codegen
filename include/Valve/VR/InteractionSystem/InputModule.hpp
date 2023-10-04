// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EventSystems.BaseInputModule
#include "UnityEngine/EventSystems/BaseInputModule.hpp"
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
// Type namespace: Valve.VR.InteractionSystem
namespace Valve::VR::InteractionSystem {
  // Forward declaring type: InputModule
  class InputModule;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Valve::VR::InteractionSystem::InputModule);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::InteractionSystem::InputModule*, "Valve.VR.InteractionSystem", "InputModule");
// Type namespace: Valve.VR.InteractionSystem
namespace Valve::VR::InteractionSystem {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.InteractionSystem.InputModule
  // [TokenAttribute] Offset: FFFFFFFF
  class InputModule : public ::UnityEngine::EventSystems::BaseInputModule {
    public:
    public:
    // private UnityEngine.GameObject submitObject
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::GameObject* submitObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    public:
    // Get static field: static private Valve.VR.InteractionSystem.InputModule _instance
    static ::Valve::VR::InteractionSystem::InputModule* _get__instance();
    // Set static field: static private Valve.VR.InteractionSystem.InputModule _instance
    static void _set__instance(::Valve::VR::InteractionSystem::InputModule* value);
    // Get instance field reference: private UnityEngine.GameObject submitObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_submitObject();
    // static public Valve.VR.InteractionSystem.InputModule get_instance()
    // Offset: 0x116A77C
    static ::Valve::VR::InteractionSystem::InputModule* get_instance();
    // public System.Void HoverBegin(UnityEngine.GameObject gameObject)
    // Offset: 0x116A8D8
    void HoverBegin(::UnityEngine::GameObject* gameObject);
    // public System.Void HoverEnd(UnityEngine.GameObject gameObject)
    // Offset: 0x116A998
    void HoverEnd(::UnityEngine::GameObject* gameObject);
    // public System.Void Submit(UnityEngine.GameObject gameObject)
    // Offset: 0x116AA74
    void Submit(::UnityEngine::GameObject* gameObject);
    // public System.Void .ctor()
    // Offset: 0x116AB78
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InputModule* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::InteractionSystem::InputModule::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InputModule*, creationType>()));
    }
    // public override System.Boolean ShouldActivateModule()
    // Offset: 0x116A848
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Boolean BaseInputModule::ShouldActivateModule()
    bool ShouldActivateModule();
    // public override System.Void Process()
    // Offset: 0x116AA7C
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Void BaseInputModule::Process()
    void Process();
  }; // Valve.VR.InteractionSystem.InputModule
  #pragma pack(pop)
  static check_size<sizeof(InputModule), 72 + sizeof(::UnityEngine::GameObject*)> __Valve_VR_InteractionSystem_InputModuleSizeCheck;
  static_assert(sizeof(InputModule) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::InputModule::get_instance
// Il2CppName: get_instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::InteractionSystem::InputModule* (*)()>(&Valve::VR::InteractionSystem::InputModule::get_instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::InputModule*), "get_instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::InputModule::HoverBegin
// Il2CppName: HoverBegin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::InputModule::*)(::UnityEngine::GameObject*)>(&Valve::VR::InteractionSystem::InputModule::HoverBegin)> {
  static const MethodInfo* get() {
    static auto* gameObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::InputModule*), "HoverBegin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gameObject});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::InputModule::HoverEnd
// Il2CppName: HoverEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::InputModule::*)(::UnityEngine::GameObject*)>(&Valve::VR::InteractionSystem::InputModule::HoverEnd)> {
  static const MethodInfo* get() {
    static auto* gameObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::InputModule*), "HoverEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gameObject});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::InputModule::Submit
// Il2CppName: Submit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::InputModule::*)(::UnityEngine::GameObject*)>(&Valve::VR::InteractionSystem::InputModule::Submit)> {
  static const MethodInfo* get() {
    static auto* gameObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::InputModule*), "Submit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gameObject});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::InputModule::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::InputModule::ShouldActivateModule
// Il2CppName: ShouldActivateModule
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::InteractionSystem::InputModule::*)()>(&Valve::VR::InteractionSystem::InputModule::ShouldActivateModule)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::InputModule*), "ShouldActivateModule", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::InputModule::Process
// Il2CppName: Process
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::InputModule::*)()>(&Valve::VR::InteractionSystem::InputModule::Process)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::InputModule*), "Process", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
