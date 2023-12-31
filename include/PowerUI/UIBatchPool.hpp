// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: UIBatch
  class UIBatch;
  // Forward declaring type: Renderman
  class Renderman;
}
// Completed forward declares
// Type namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: UIBatchPool
  class UIBatchPool;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PowerUI::UIBatchPool);
DEFINE_IL2CPP_ARG_TYPE(::PowerUI::UIBatchPool*, "PowerUI", "UIBatchPool");
// Type namespace: PowerUI
namespace PowerUI {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: PowerUI.UIBatchPool
  // [TokenAttribute] Offset: FFFFFFFF
  class UIBatchPool : public ::Il2CppObject {
    public:
    // Get static field: static public PowerUI.UIBatch First
    static ::PowerUI::UIBatch* _get_First();
    // Set static field: static public PowerUI.UIBatch First
    static void _set_First(::PowerUI::UIBatch* value);
    // static public System.Boolean get_Empty()
    // Offset: 0x177FD5C
    static bool get_Empty();
    // static public System.Void Clear()
    // Offset: 0x177DC10
    static void Clear();
    // static public System.Void AddAll(PowerUI.UIBatch first, PowerUI.UIBatch last)
    // Offset: 0x176A46C
    static void AddAll(::PowerUI::UIBatch* first, ::PowerUI::UIBatch* last);
    // static public System.Void HideAll()
    // Offset: 0x176A4EC
    static void HideAll();
    // static public System.Void Add(PowerUI.UIBatch batch)
    // Offset: 0x177FDB4
    static void Add(::PowerUI::UIBatch* batch);
    // static public PowerUI.UIBatch Get(PowerUI.Renderman renderer)
    // Offset: 0x176A8DC
    static ::PowerUI::UIBatch* Get(::PowerUI::Renderman* renderer);
  }; // PowerUI.UIBatchPool
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PowerUI::UIBatchPool::get_Empty
// Il2CppName: get_Empty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&PowerUI::UIBatchPool::get_Empty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::UIBatchPool*), "get_Empty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::UIBatchPool::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&PowerUI::UIBatchPool::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::UIBatchPool*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::UIBatchPool::AddAll
// Il2CppName: AddAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::PowerUI::UIBatch*, ::PowerUI::UIBatch*)>(&PowerUI::UIBatchPool::AddAll)> {
  static const MethodInfo* get() {
    static auto* first = &::il2cpp_utils::GetClassFromName("PowerUI", "UIBatch")->byval_arg;
    static auto* last = &::il2cpp_utils::GetClassFromName("PowerUI", "UIBatch")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::UIBatchPool*), "AddAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{first, last});
  }
};
// Writing MetadataGetter for method: PowerUI::UIBatchPool::HideAll
// Il2CppName: HideAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&PowerUI::UIBatchPool::HideAll)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::UIBatchPool*), "HideAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::UIBatchPool::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::PowerUI::UIBatch*)>(&PowerUI::UIBatchPool::Add)> {
  static const MethodInfo* get() {
    static auto* batch = &::il2cpp_utils::GetClassFromName("PowerUI", "UIBatch")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::UIBatchPool*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{batch});
  }
};
// Writing MetadataGetter for method: PowerUI::UIBatchPool::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::PowerUI::UIBatch* (*)(::PowerUI::Renderman*)>(&PowerUI::UIBatchPool::Get)> {
  static const MethodInfo* get() {
    static auto* renderer = &::il2cpp_utils::GetClassFromName("PowerUI", "Renderman")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::UIBatchPool*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{renderer});
  }
};
