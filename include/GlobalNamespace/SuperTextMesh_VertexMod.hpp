// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SuperTextMesh
#include "GlobalNamespace/SuperTextMesh.hpp"
// Including type: UnityEngine.Events.UnityEvent`3
#include "UnityEngine/Events/UnityEvent_3.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SuperTextMesh::VertexMod);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SuperTextMesh::VertexMod*, "", "SuperTextMesh/VertexMod");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: SuperTextMesh/VertexMod
  // [TokenAttribute] Offset: FFFFFFFF
  class SuperTextMesh::VertexMod : public ::UnityEngine::Events::UnityEvent_3<::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>> {
    public:
    // public System.Void .ctor()
    // Offset: 0x103AB14
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SuperTextMesh::VertexMod* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SuperTextMesh::VertexMod::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SuperTextMesh::VertexMod*, creationType>()));
    }
  }; // SuperTextMesh/VertexMod
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SuperTextMesh::VertexMod::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
