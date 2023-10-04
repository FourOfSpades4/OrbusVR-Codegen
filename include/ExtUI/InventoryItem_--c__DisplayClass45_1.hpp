// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ExtUI.InventoryItem
#include "ExtUI/InventoryItem.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ResourceRequest
  class ResourceRequest;
  // Forward declaring type: AsyncOperation
  class AsyncOperation;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ExtUI::InventoryItem::$$c__DisplayClass45_1);
DEFINE_IL2CPP_ARG_TYPE(::ExtUI::InventoryItem::$$c__DisplayClass45_1*, "ExtUI", "InventoryItem/<>c__DisplayClass45_1");
// Type namespace: ExtUI
namespace ExtUI {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: ExtUI.InventoryItem/<>c__DisplayClass45_1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: AD1BA8
  class InventoryItem::$$c__DisplayClass45_1 : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.ResourceRequest async
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::ResourceRequest* async;
    // Field size check
    static_assert(sizeof(::UnityEngine::ResourceRequest*) == 0x8);
    // public ExtUI.InventoryItem/<>c__DisplayClass45_0 CS$<>8__locals1
    // Size: 0x8
    // Offset: 0x18
    ::ExtUI::InventoryItem::$$c__DisplayClass45_0* CS$$$8__locals1;
    // Field size check
    static_assert(sizeof(::ExtUI::InventoryItem::$$c__DisplayClass45_0*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.ResourceRequest async
    [[deprecated("Use field access instead!")]] ::UnityEngine::ResourceRequest*& dyn_async();
    // Get instance field reference: public ExtUI.InventoryItem/<>c__DisplayClass45_0 CS$<>8__locals1
    [[deprecated("Use field access instead!")]] ::ExtUI::InventoryItem::$$c__DisplayClass45_0*& dyn_CS$$$8__locals1();
    // public System.Void .ctor()
    // Offset: 0x28E4038
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InventoryItem::$$c__DisplayClass45_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExtUI::InventoryItem::$$c__DisplayClass45_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InventoryItem::$$c__DisplayClass45_1*, creationType>()));
    }
    // System.Void <GetPrefabAsync>b__0(UnityEngine.AsyncOperation operation)
    // Offset: 0x28E43B8
    void $GetPrefabAsync$b__0(::UnityEngine::AsyncOperation* operation);
  }; // ExtUI.InventoryItem/<>c__DisplayClass45_1
  #pragma pack(pop)
  static check_size<sizeof(InventoryItem::$$c__DisplayClass45_1), 24 + sizeof(::ExtUI::InventoryItem::$$c__DisplayClass45_0*)> __ExtUI_InventoryItem_$$c__DisplayClass45_1SizeCheck;
  static_assert(sizeof(InventoryItem::$$c__DisplayClass45_1) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ExtUI::InventoryItem::$$c__DisplayClass45_1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: ExtUI::InventoryItem::$$c__DisplayClass45_1::$GetPrefabAsync$b__0
// Il2CppName: <GetPrefabAsync>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExtUI::InventoryItem::$$c__DisplayClass45_1::*)(::UnityEngine::AsyncOperation*)>(&ExtUI::InventoryItem::$$c__DisplayClass45_1::$GetPrefabAsync$b__0)> {
  static const MethodInfo* get() {
    static auto* operation = &::il2cpp_utils::GetClassFromName("UnityEngine", "AsyncOperation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExtUI::InventoryItem::$$c__DisplayClass45_1*), "<GetPrefabAsync>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{operation});
  }
};
