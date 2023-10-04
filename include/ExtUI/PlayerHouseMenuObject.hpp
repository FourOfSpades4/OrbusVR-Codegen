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
  // Forward declaring type: TextAsset
  class TextAsset;
}
// Forward declaring namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: WorldMenu
  class WorldMenu;
}
// Completed forward declares
// Type namespace: ExtUI
namespace ExtUI {
  // Forward declaring type: PlayerHouseMenuObject
  class PlayerHouseMenuObject;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ExtUI::PlayerHouseMenuObject);
DEFINE_IL2CPP_ARG_TYPE(::ExtUI::PlayerHouseMenuObject*, "ExtUI", "PlayerHouseMenuObject");
// Type namespace: ExtUI
namespace ExtUI {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: ExtUI.PlayerHouseMenuObject
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerHouseMenuObject : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.GameObject ownerMenuPoint
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::GameObject* ownerMenuPoint;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private MagicalActual.WorldMenu interactionMenu
    // Size: 0x8
    // Offset: 0x20
    ::MagicalActual::WorldMenu* interactionMenu;
    // Field size check
    static_assert(sizeof(::MagicalActual::WorldMenu*) == 0x8);
    // public UnityEngine.TextAsset MenuHtml
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::TextAsset* MenuHtml;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextAsset*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.GameObject ownerMenuPoint
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_ownerMenuPoint();
    // Get instance field reference: private MagicalActual.WorldMenu interactionMenu
    [[deprecated("Use field access instead!")]] ::MagicalActual::WorldMenu*& dyn_interactionMenu();
    // Get instance field reference: public UnityEngine.TextAsset MenuHtml
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextAsset*& dyn_MenuHtml();
    // private System.Void Awake()
    // Offset: 0x28E8D78
    void Awake();
    // private System.Void Start()
    // Offset: 0x28E8D7C
    void Start();
    // public System.Void ResetMenu()
    // Offset: 0x28E8FE0
    void ResetMenu();
    // public System.Void OnDestroy()
    // Offset: 0x28E9074
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0x28E90F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerHouseMenuObject* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExtUI::PlayerHouseMenuObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerHouseMenuObject*, creationType>()));
    }
  }; // ExtUI.PlayerHouseMenuObject
  #pragma pack(pop)
  static check_size<sizeof(PlayerHouseMenuObject), 40 + sizeof(::UnityEngine::TextAsset*)> __ExtUI_PlayerHouseMenuObjectSizeCheck;
  static_assert(sizeof(PlayerHouseMenuObject) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ExtUI::PlayerHouseMenuObject::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExtUI::PlayerHouseMenuObject::*)()>(&ExtUI::PlayerHouseMenuObject::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExtUI::PlayerHouseMenuObject*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExtUI::PlayerHouseMenuObject::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExtUI::PlayerHouseMenuObject::*)()>(&ExtUI::PlayerHouseMenuObject::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExtUI::PlayerHouseMenuObject*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExtUI::PlayerHouseMenuObject::ResetMenu
// Il2CppName: ResetMenu
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExtUI::PlayerHouseMenuObject::*)()>(&ExtUI::PlayerHouseMenuObject::ResetMenu)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExtUI::PlayerHouseMenuObject*), "ResetMenu", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExtUI::PlayerHouseMenuObject::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExtUI::PlayerHouseMenuObject::*)()>(&ExtUI::PlayerHouseMenuObject::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExtUI::PlayerHouseMenuObject*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExtUI::PlayerHouseMenuObject::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!