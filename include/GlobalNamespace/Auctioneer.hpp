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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: MagicalActual
namespace MagicalActual {
  // Forward declaring type: NetEntity
  class NetEntity;
  // Forward declaring type: WorldMenu
  class WorldMenu;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: TextAsset
  class TextAsset;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: Auctioneer
  class Auctioneer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::Auctioneer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Auctioneer*, "", "Auctioneer");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: Auctioneer
  // [TokenAttribute] Offset: FFFFFFFF
  class Auctioneer : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::Auctioneer::AuctionHouseItemList
    class AuctionHouseItemList;
    // Nested type: ::GlobalNamespace::Auctioneer::$$c__DisplayClass18_0
    class $$c__DisplayClass18_0;
    // Nested type: ::GlobalNamespace::Auctioneer::$$c__DisplayClass19_0
    class $$c__DisplayClass19_0;
    // Nested type: ::GlobalNamespace::Auctioneer::$$c__DisplayClass20_0
    class $$c__DisplayClass20_0;
    // Nested type: ::GlobalNamespace::Auctioneer::$$c__DisplayClass21_0
    class $$c__DisplayClass21_0;
    // Nested type: ::GlobalNamespace::Auctioneer::$$c
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
    // private UnityEngine.Transform ownerMenuPoint
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Transform* ownerMenuPoint;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform ownerMenuPoint2
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Transform* ownerMenuPoint2;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private MagicalActual.WorldMenu interactionMenu
    // Size: 0x8
    // Offset: 0x38
    ::MagicalActual::WorldMenu* interactionMenu;
    // Field size check
    static_assert(sizeof(::MagicalActual::WorldMenu*) == 0x8);
    // public UnityEngine.TextAsset MenuHtml
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::TextAsset* MenuHtml;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextAsset*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xADA128
    // private System.String[] <myErrors>k__BackingField
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<::StringW> myErrors;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // public System.String errors
    // Size: 0x8
    // Offset: 0x50
    ::StringW errors;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.String OrbusNetComponent
    [[deprecated("Use field access instead!")]] ::StringW& dyn_OrbusNetComponent();
    // Get instance field reference: private MagicalActual.NetEntity myEntity
    [[deprecated("Use field access instead!")]] ::MagicalActual::NetEntity*& dyn_myEntity();
    // Get instance field reference: private UnityEngine.Transform ownerMenuPoint
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_ownerMenuPoint();
    // Get instance field reference: private UnityEngine.Transform ownerMenuPoint2
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_ownerMenuPoint2();
    // Get instance field reference: private MagicalActual.WorldMenu interactionMenu
    [[deprecated("Use field access instead!")]] ::MagicalActual::WorldMenu*& dyn_interactionMenu();
    // Get instance field reference: public UnityEngine.TextAsset MenuHtml
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextAsset*& dyn_MenuHtml();
    // Get instance field reference: private System.String[] <myErrors>k__BackingField
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_$myErrors$k__BackingField();
    // Get instance field reference: public System.String errors
    [[deprecated("Use field access instead!")]] ::StringW& dyn_errors();
    // private System.Void set_myErrors(System.String[] value)
    // Offset: 0x12B1108
    void set_myErrors(::ArrayW<::StringW> value);
    // protected System.String[] get_myErrors()
    // Offset: 0x12B1110
    ::ArrayW<::StringW> get_myErrors();
    // private System.Void Awake()
    // Offset: 0x12B1118
    void Awake();
    // private System.Void Start()
    // Offset: 0x12B111C
    void Start();
    // public System.Void PlayerInteraction()
    // Offset: 0x12B1120
    void PlayerInteraction();
    // public System.Void ResetMenu()
    // Offset: 0x12B14F8
    void ResetMenu();
    // public System.Void OnDestroy()
    // Offset: 0x12AB8C4
    void OnDestroy();
    // static public System.Void parseAuctionData(Auctioneer/AuctionHouseItemList results)
    // Offset: 0x12B1588
    static void parseAuctionData(::GlobalNamespace::Auctioneer::AuctionHouseItemList* results);
    // public System.Void callServerItemSearch(System.String searchable)
    // Offset: 0x12AB554
    void callServerItemSearch(::StringW searchable);
    // public System.Void callServerCategorySearch(System.String searchable)
    // Offset: 0x12AB664
    void callServerCategorySearch(::StringW searchable);
    // public System.Void Bid(System.String auctionId, System.String bid, System.Int32 isBuyout)
    // Offset: 0x12AAE3C
    void Bid(::StringW auctionId, ::StringW bid, int isBuyout);
    // public System.Void marketBuyout(System.String marketContainerId, System.String itemid)
    // Offset: 0x12AB0D0
    void marketBuyout(::StringW marketContainerId, ::StringW itemid);
    // public System.Void UpdateErrors()
    // Offset: 0x12B16C0
    void UpdateErrors();
    // public System.Void orbusNetInit(MagicalActual.NetEntity entity)
    // Offset: 0x12B180C
    void orbusNetInit(::MagicalActual::NetEntity* entity);
    // public System.Void .ctor()
    // Offset: 0x12B1A14
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Auctioneer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::Auctioneer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Auctioneer*, creationType>()));
    }
    // private System.Void <orbusNetInit>b__23_1(System.Object newvalue)
    // Offset: 0x12B1A7C
    void $orbusNetInit$b__23_1(::Il2CppObject* newvalue);
  }; // Auctioneer
  #pragma pack(pop)
  static check_size<sizeof(Auctioneer), 80 + sizeof(::StringW)> __GlobalNamespace_AuctioneerSizeCheck;
  static_assert(sizeof(Auctioneer) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::Auctioneer::set_myErrors
// Il2CppName: set_myErrors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Auctioneer::*)(::ArrayW<::StringW>)>(&GlobalNamespace::Auctioneer::set_myErrors)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Auctioneer*), "set_myErrors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Auctioneer::get_myErrors
// Il2CppName: get_myErrors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (GlobalNamespace::Auctioneer::*)()>(&GlobalNamespace::Auctioneer::get_myErrors)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Auctioneer*), "get_myErrors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Auctioneer::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Auctioneer::*)()>(&GlobalNamespace::Auctioneer::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Auctioneer*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Auctioneer::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Auctioneer::*)()>(&GlobalNamespace::Auctioneer::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Auctioneer*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Auctioneer::PlayerInteraction
// Il2CppName: PlayerInteraction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Auctioneer::*)()>(&GlobalNamespace::Auctioneer::PlayerInteraction)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Auctioneer*), "PlayerInteraction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Auctioneer::ResetMenu
// Il2CppName: ResetMenu
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Auctioneer::*)()>(&GlobalNamespace::Auctioneer::ResetMenu)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Auctioneer*), "ResetMenu", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Auctioneer::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Auctioneer::*)()>(&GlobalNamespace::Auctioneer::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Auctioneer*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Auctioneer::parseAuctionData
// Il2CppName: parseAuctionData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::Auctioneer::AuctionHouseItemList*)>(&GlobalNamespace::Auctioneer::parseAuctionData)> {
  static const MethodInfo* get() {
    static auto* results = &::il2cpp_utils::GetClassFromName("", "Auctioneer/AuctionHouseItemList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Auctioneer*), "parseAuctionData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{results});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Auctioneer::callServerItemSearch
// Il2CppName: callServerItemSearch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Auctioneer::*)(::StringW)>(&GlobalNamespace::Auctioneer::callServerItemSearch)> {
  static const MethodInfo* get() {
    static auto* searchable = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Auctioneer*), "callServerItemSearch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{searchable});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Auctioneer::callServerCategorySearch
// Il2CppName: callServerCategorySearch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Auctioneer::*)(::StringW)>(&GlobalNamespace::Auctioneer::callServerCategorySearch)> {
  static const MethodInfo* get() {
    static auto* searchable = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Auctioneer*), "callServerCategorySearch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{searchable});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Auctioneer::Bid
// Il2CppName: Bid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Auctioneer::*)(::StringW, ::StringW, int)>(&GlobalNamespace::Auctioneer::Bid)> {
  static const MethodInfo* get() {
    static auto* auctionId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* bid = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* isBuyout = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Auctioneer*), "Bid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{auctionId, bid, isBuyout});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Auctioneer::marketBuyout
// Il2CppName: marketBuyout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Auctioneer::*)(::StringW, ::StringW)>(&GlobalNamespace::Auctioneer::marketBuyout)> {
  static const MethodInfo* get() {
    static auto* marketContainerId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* itemid = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Auctioneer*), "marketBuyout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{marketContainerId, itemid});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Auctioneer::UpdateErrors
// Il2CppName: UpdateErrors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Auctioneer::*)()>(&GlobalNamespace::Auctioneer::UpdateErrors)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Auctioneer*), "UpdateErrors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Auctioneer::orbusNetInit
// Il2CppName: orbusNetInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Auctioneer::*)(::MagicalActual::NetEntity*)>(&GlobalNamespace::Auctioneer::orbusNetInit)> {
  static const MethodInfo* get() {
    static auto* entity = &::il2cpp_utils::GetClassFromName("MagicalActual", "NetEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Auctioneer*), "orbusNetInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{entity});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Auctioneer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::Auctioneer::$orbusNetInit$b__23_1
// Il2CppName: <orbusNetInit>b__23_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Auctioneer::*)(::Il2CppObject*)>(&GlobalNamespace::Auctioneer::$orbusNetInit$b__23_1)> {
  static const MethodInfo* get() {
    static auto* newvalue = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Auctioneer*), "<orbusNetInit>b__23_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newvalue});
  }
};
