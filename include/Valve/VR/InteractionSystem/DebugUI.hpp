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
// Forward declaring namespace: Valve::VR::InteractionSystem
namespace Valve::VR::InteractionSystem {
  // Forward declaring type: Player
  class Player;
}
// Completed forward declares
// Type namespace: Valve.VR.InteractionSystem
namespace Valve::VR::InteractionSystem {
  // Forward declaring type: DebugUI
  class DebugUI;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Valve::VR::InteractionSystem::DebugUI);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::InteractionSystem::DebugUI*, "Valve.VR.InteractionSystem", "DebugUI");
// Type namespace: Valve.VR.InteractionSystem
namespace Valve::VR::InteractionSystem {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.InteractionSystem.DebugUI
  // [TokenAttribute] Offset: FFFFFFFF
  class DebugUI : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private Valve.VR.InteractionSystem.Player player
    // Size: 0x8
    // Offset: 0x18
    ::Valve::VR::InteractionSystem::Player* player;
    // Field size check
    static_assert(sizeof(::Valve::VR::InteractionSystem::Player*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static private Valve.VR.InteractionSystem.DebugUI _instance
    static ::Valve::VR::InteractionSystem::DebugUI* _get__instance();
    // Set static field: static private Valve.VR.InteractionSystem.DebugUI _instance
    static void _set__instance(::Valve::VR::InteractionSystem::DebugUI* value);
    // Get instance field reference: private Valve.VR.InteractionSystem.Player player
    [[deprecated("Use field access instead!")]] ::Valve::VR::InteractionSystem::Player*& dyn_player();
    // static public Valve.VR.InteractionSystem.DebugUI get_instance()
    // Offset: 0x1166020
    static ::Valve::VR::InteractionSystem::DebugUI* get_instance();
    // private System.Void Start()
    // Offset: 0x11660EC
    void Start();
    // public System.Void .ctor()
    // Offset: 0x1166114
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DebugUI* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::InteractionSystem::DebugUI::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DebugUI*, creationType>()));
    }
  }; // Valve.VR.InteractionSystem.DebugUI
  #pragma pack(pop)
  static check_size<sizeof(DebugUI), 24 + sizeof(::Valve::VR::InteractionSystem::Player*)> __Valve_VR_InteractionSystem_DebugUISizeCheck;
  static_assert(sizeof(DebugUI) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::DebugUI::get_instance
// Il2CppName: get_instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::InteractionSystem::DebugUI* (*)()>(&Valve::VR::InteractionSystem::DebugUI::get_instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::DebugUI*), "get_instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::DebugUI::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::InteractionSystem::DebugUI::*)()>(&Valve::VR::InteractionSystem::DebugUI::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::InteractionSystem::DebugUI*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::InteractionSystem::DebugUI::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
