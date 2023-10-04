// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MB3_MeshBakerRoot/ZSortObjects
#include "GlobalNamespace/MB3_MeshBakerRoot_ZSortObjects.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
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
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MB3_MeshBakerRoot::ZSortObjects::Item);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MB3_MeshBakerRoot::ZSortObjects::Item*, "", "MB3_MeshBakerRoot/ZSortObjects/Item");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: MB3_MeshBakerRoot/ZSortObjects/Item
  // [TokenAttribute] Offset: FFFFFFFF
  class MB3_MeshBakerRoot::ZSortObjects::Item : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.GameObject go
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::GameObject* go;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.Vector3 point
    // Size: 0xC
    // Offset: 0x18
    ::UnityEngine::Vector3 point;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Get instance field reference: public UnityEngine.GameObject go
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_go();
    // Get instance field reference: public UnityEngine.Vector3 point
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_point();
    // public System.Void .ctor()
    // Offset: 0x19F2BF8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB3_MeshBakerRoot::ZSortObjects::Item* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MB3_MeshBakerRoot::ZSortObjects::Item::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB3_MeshBakerRoot::ZSortObjects::Item*, creationType>()));
    }
  }; // MB3_MeshBakerRoot/ZSortObjects/Item
  #pragma pack(pop)
  static check_size<sizeof(MB3_MeshBakerRoot::ZSortObjects::Item), 24 + sizeof(::UnityEngine::Vector3)> __GlobalNamespace_MB3_MeshBakerRoot_ZSortObjects_ItemSizeCheck;
  static_assert(sizeof(MB3_MeshBakerRoot::ZSortObjects::Item) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MB3_MeshBakerRoot::ZSortObjects::Item::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
