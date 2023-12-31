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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: ExtUI
namespace ExtUI {
}
// Forward declaring namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: NetEntity
  class NetEntity;
  // Forward declaring type: ItemContainer
  class ItemContainer;
}
// Completed forward declares
// Type namespace: ExtUI
namespace ExtUI {
  // Forward declaring type: PlayerChest
  class PlayerChest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ExtUI::PlayerChest);
DEFINE_IL2CPP_ARG_TYPE(::ExtUI::PlayerChest*, "ExtUI", "PlayerChest");
// Type namespace: ExtUI
namespace ExtUI {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: ExtUI.PlayerChest
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerChest : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::ExtUI::PlayerChest::$$c
    class $$c;
    public:
    // public System.String OrbusNetComponent
    // Size: 0x8
    // Offset: 0x18
    ::StringW OrbusNetComponent;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private MagicalActual.NetEntity myEntity
    // Size: 0x8
    // Offset: 0x20
    ::MagicalActual::NetEntity* myEntity;
    // Field size check
    static_assert(sizeof(::MagicalActual::NetEntity*) == 0x8);
    // private MagicalActual.ItemContainer myItemContainer
    // Size: 0x8
    // Offset: 0x28
    ::MagicalActual::ItemContainer* myItemContainer;
    // Field size check
    static_assert(sizeof(::MagicalActual::ItemContainer*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.String OrbusNetComponent
    [[deprecated("Use field access instead!")]] ::StringW& dyn_OrbusNetComponent();
    // Get instance field reference: private MagicalActual.NetEntity myEntity
    [[deprecated("Use field access instead!")]] ::MagicalActual::NetEntity*& dyn_myEntity();
    // Get instance field reference: private MagicalActual.ItemContainer myItemContainer
    [[deprecated("Use field access instead!")]] ::MagicalActual::ItemContainer*& dyn_myItemContainer();
    // private System.Void Awake()
    // Offset: 0x28E8C4C
    void Awake();
    // private System.Void Start()
    // Offset: 0x28E8CA4
    void Start();
    // public System.Void RequestRepair()
    // Offset: 0x28D7B30
    void RequestRepair();
    // public System.Void orbusNetInit(MagicalActual.NetEntity entity)
    // Offset: 0x28E8CA8
    void orbusNetInit(::MagicalActual::NetEntity* entity);
    // public System.Void .ctor()
    // Offset: 0x28E8CB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerChest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExtUI::PlayerChest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerChest*, creationType>()));
    }
  }; // ExtUI.PlayerChest
  #pragma pack(pop)
  static check_size<sizeof(PlayerChest), 40 + sizeof(::MagicalActual::ItemContainer*)> __ExtUI_PlayerChestSizeCheck;
  static_assert(sizeof(PlayerChest) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ExtUI::PlayerChest::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExtUI::PlayerChest::*)()>(&ExtUI::PlayerChest::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExtUI::PlayerChest*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExtUI::PlayerChest::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExtUI::PlayerChest::*)()>(&ExtUI::PlayerChest::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExtUI::PlayerChest*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExtUI::PlayerChest::RequestRepair
// Il2CppName: RequestRepair
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExtUI::PlayerChest::*)()>(&ExtUI::PlayerChest::RequestRepair)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExtUI::PlayerChest*), "RequestRepair", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExtUI::PlayerChest::orbusNetInit
// Il2CppName: orbusNetInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExtUI::PlayerChest::*)(::MagicalActual::NetEntity*)>(&ExtUI::PlayerChest::orbusNetInit)> {
  static const MethodInfo* get() {
    static auto* entity = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExtUI::PlayerChest*), "orbusNetInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{entity});
  }
};
// Writing MetadataGetter for method: ExtUI::PlayerChest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
