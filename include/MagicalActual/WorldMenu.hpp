// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
  // Forward declaring type: MonoBehaviour
  class MonoBehaviour;
}
// Forward declaring namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: WorldUI
  class WorldUI;
}
// Completed forward declares
// Type namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: WorldMenu
  class WorldMenu;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MagicalActual::WorldMenu);
DEFINE_IL2CPP_ARG_TYPE(::MagicalActual::WorldMenu*, "MagicalActual", "WorldMenu");
// Type namespace: MagicalActual
namespace MagicalActual {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MagicalActual.WorldMenu
  // [TokenAttribute] Offset: FFFFFFFF
  class WorldMenu : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.GameObject BHKFEDHNBHD
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::GameObject* BHKFEDHNBHD;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public PowerUI.WorldUI CGCDOOHOBPN
    // Size: 0x8
    // Offset: 0x18
    ::PowerUI::WorldUI* CGCDOOHOBPN;
    // Field size check
    static_assert(sizeof(::PowerUI::WorldUI*) == 0x8);
    // public System.Boolean IIBKKHNPNGI
    // Size: 0x1
    // Offset: 0x20
    bool IIBKKHNPNGI;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IIBKKHNPNGI and: BPNOOMPMIML
    char __padding2[0x7] = {};
    // public UnityEngine.MonoBehaviour BPNOOMPMIML
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::MonoBehaviour* BPNOOMPMIML;
    // Field size check
    static_assert(sizeof(::UnityEngine::MonoBehaviour*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.GameObject BHKFEDHNBHD
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_BHKFEDHNBHD();
    // Get instance field reference: public PowerUI.WorldUI CGCDOOHOBPN
    [[deprecated("Use field access instead!")]] ::PowerUI::WorldUI*& dyn_CGCDOOHOBPN();
    // Get instance field reference: public System.Boolean IIBKKHNPNGI
    [[deprecated("Use field access instead!")]] bool& dyn_IIBKKHNPNGI();
    // Get instance field reference: public UnityEngine.MonoBehaviour BPNOOMPMIML
    [[deprecated("Use field access instead!")]] ::UnityEngine::MonoBehaviour*& dyn_BPNOOMPMIML();
    // public System.Void .ctor()
    // Offset: 0xF4CBD8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WorldMenu* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MagicalActual::WorldMenu::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WorldMenu*, creationType>()));
    }
  }; // MagicalActual.WorldMenu
  #pragma pack(pop)
  static check_size<sizeof(WorldMenu), 40 + sizeof(::UnityEngine::MonoBehaviour*)> __MagicalActual_WorldMenuSizeCheck;
  static_assert(sizeof(WorldMenu) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MagicalActual::WorldMenu::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
