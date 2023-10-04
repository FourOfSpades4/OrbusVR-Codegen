// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MB3_MeshBakerCommon
#include "GlobalNamespace/MB3_MeshBakerCommon.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: DigitalOpus::MB::Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: MB3_MeshCombinerSingle
  class MB3_MeshCombinerSingle;
  // Skipping declaration: MB3_MeshCombiner because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MB3_MeshBaker
  class MB3_MeshBaker;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MB3_MeshBaker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MB3_MeshBaker*, "", "MB3_MeshBaker");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: MB3_MeshBaker
  // [TokenAttribute] Offset: FFFFFFFF
  class MB3_MeshBaker : public ::GlobalNamespace::MB3_MeshBakerCommon {
    public:
    public:
    // protected DigitalOpus.MB.Core.MB3_MeshCombinerSingle _meshCombiner
    // Size: 0x8
    // Offset: 0x48
    ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle* meshCombiner;
    // Field size check
    static_assert(sizeof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*) == 0x8);
    public:
    // Get instance field reference: protected DigitalOpus.MB.Core.MB3_MeshCombinerSingle _meshCombiner
    [[deprecated("Use field access instead!")]] ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*& dyn__meshCombiner();
    // public System.Void BuildSceneMeshObject()
    // Offset: 0x1216700
    void BuildSceneMeshObject();
    // public System.Boolean ShowHide(UnityEngine.GameObject[] gos, UnityEngine.GameObject[] deleteGOs)
    // Offset: 0x1216738
    bool ShowHide(::ArrayW<::UnityEngine::GameObject*> gos, ::ArrayW<::UnityEngine::GameObject*> deleteGOs);
    // public System.Void ApplyShowHide()
    // Offset: 0x1216780
    void ApplyShowHide();
    // public override DigitalOpus.MB.Core.MB3_MeshCombiner get_meshCombiner()
    // Offset: 0x12166F8
    // Implemented from: MB3_MeshBakerCommon
    // Base method: DigitalOpus.MB.Core.MB3_MeshCombiner MB3_MeshBakerCommon::get_meshCombiner()
    ::DigitalOpus::MB::Core::MB3_MeshCombiner* get_meshCombiner();
    // public override System.Boolean AddDeleteGameObjects(UnityEngine.GameObject[] gos, UnityEngine.GameObject[] deleteGOs, System.Boolean disableRendererInSource)
    // Offset: 0x12167B8
    // Implemented from: MB3_MeshBakerCommon
    // Base method: System.Boolean MB3_MeshBakerCommon::AddDeleteGameObjects(UnityEngine.GameObject[] gos, UnityEngine.GameObject[] deleteGOs, System.Boolean disableRendererInSource)
    bool AddDeleteGameObjects(::ArrayW<::UnityEngine::GameObject*> gos, ::ArrayW<::UnityEngine::GameObject*> deleteGOs, bool disableRendererInSource);
    // public override System.Boolean AddDeleteGameObjectsByID(UnityEngine.GameObject[] gos, System.Int32[] deleteGOinstanceIDs, System.Boolean disableRendererInSource)
    // Offset: 0x1216884
    // Implemented from: MB3_MeshBakerCommon
    // Base method: System.Boolean MB3_MeshBakerCommon::AddDeleteGameObjectsByID(UnityEngine.GameObject[] gos, System.Int32[] deleteGOinstanceIDs, System.Boolean disableRendererInSource)
    bool AddDeleteGameObjectsByID(::ArrayW<::UnityEngine::GameObject*> gos, ::ArrayW<int> deleteGOinstanceIDs, bool disableRendererInSource);
    // public System.Void .ctor()
    // Offset: 0x1216950
    // Implemented from: MB3_MeshBakerCommon
    // Base method: System.Void MB3_MeshBakerCommon::.ctor()
    // Base method: System.Void MB3_MeshBakerRoot::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB3_MeshBaker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MB3_MeshBaker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB3_MeshBaker*, creationType>()));
    }
  }; // MB3_MeshBaker
  #pragma pack(pop)
  static check_size<sizeof(MB3_MeshBaker), 72 + sizeof(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*)> __GlobalNamespace_MB3_MeshBakerSizeCheck;
  static_assert(sizeof(MB3_MeshBaker) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MB3_MeshBaker::BuildSceneMeshObject
// Il2CppName: BuildSceneMeshObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MB3_MeshBaker::*)()>(&GlobalNamespace::MB3_MeshBaker::BuildSceneMeshObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MB3_MeshBaker*), "BuildSceneMeshObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MB3_MeshBaker::ShowHide
// Il2CppName: ShowHide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MB3_MeshBaker::*)(::ArrayW<::UnityEngine::GameObject*>, ::ArrayW<::UnityEngine::GameObject*>)>(&GlobalNamespace::MB3_MeshBaker::ShowHide)> {
  static const MethodInfo* get() {
    static auto* gos = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject"), 1)->byval_arg;
    static auto* deleteGOs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MB3_MeshBaker*), "ShowHide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gos, deleteGOs});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MB3_MeshBaker::ApplyShowHide
// Il2CppName: ApplyShowHide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MB3_MeshBaker::*)()>(&GlobalNamespace::MB3_MeshBaker::ApplyShowHide)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MB3_MeshBaker*), "ApplyShowHide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MB3_MeshBaker::get_meshCombiner
// Il2CppName: get_meshCombiner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DigitalOpus::MB::Core::MB3_MeshCombiner* (GlobalNamespace::MB3_MeshBaker::*)()>(&GlobalNamespace::MB3_MeshBaker::get_meshCombiner)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MB3_MeshBaker*), "get_meshCombiner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MB3_MeshBaker::AddDeleteGameObjects
// Il2CppName: AddDeleteGameObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MB3_MeshBaker::*)(::ArrayW<::UnityEngine::GameObject*>, ::ArrayW<::UnityEngine::GameObject*>, bool)>(&GlobalNamespace::MB3_MeshBaker::AddDeleteGameObjects)> {
  static const MethodInfo* get() {
    static auto* gos = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject"), 1)->byval_arg;
    static auto* deleteGOs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject"), 1)->byval_arg;
    static auto* disableRendererInSource = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MB3_MeshBaker*), "AddDeleteGameObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gos, deleteGOs, disableRendererInSource});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MB3_MeshBaker::AddDeleteGameObjectsByID
// Il2CppName: AddDeleteGameObjectsByID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MB3_MeshBaker::*)(::ArrayW<::UnityEngine::GameObject*>, ::ArrayW<int>, bool)>(&GlobalNamespace::MB3_MeshBaker::AddDeleteGameObjectsByID)> {
  static const MethodInfo* get() {
    static auto* gos = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject"), 1)->byval_arg;
    static auto* deleteGOinstanceIDs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* disableRendererInSource = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MB3_MeshBaker*), "AddDeleteGameObjectsByID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gos, deleteGOinstanceIDs, disableRendererInSource});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MB3_MeshBaker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!