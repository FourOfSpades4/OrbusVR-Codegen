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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
}
// Completed forward declares
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: MB3_CopyBoneWeights
  class MB3_CopyBoneWeights;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::MB3_CopyBoneWeights);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::MB3_CopyBoneWeights*, "DigitalOpus.MB.Core", "MB3_CopyBoneWeights");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.MB3_CopyBoneWeights
  // [TokenAttribute] Offset: FFFFFFFF
  class MB3_CopyBoneWeights : public ::Il2CppObject {
    public:
    // static public System.Void CopyBoneWeightsFromSeamMeshToOtherMeshes(System.Single radius, UnityEngine.Mesh seamMesh, UnityEngine.Mesh[] targetMeshes)
    // Offset: 0x1B5422C
    static void CopyBoneWeightsFromSeamMeshToOtherMeshes(float radius, ::UnityEngine::Mesh* seamMesh, ::ArrayW<::UnityEngine::Mesh*> targetMeshes);
    // public System.Void .ctor()
    // Offset: 0x1B54EB8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB3_CopyBoneWeights* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::MB3_CopyBoneWeights::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB3_CopyBoneWeights*, creationType>()));
    }
  }; // DigitalOpus.MB.Core.MB3_CopyBoneWeights
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_CopyBoneWeights::CopyBoneWeightsFromSeamMeshToOtherMeshes
// Il2CppName: CopyBoneWeightsFromSeamMeshToOtherMeshes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float, ::UnityEngine::Mesh*, ::ArrayW<::UnityEngine::Mesh*>)>(&DigitalOpus::MB::Core::MB3_CopyBoneWeights::CopyBoneWeightsFromSeamMeshToOtherMeshes)> {
  static const MethodInfo* get() {
    static auto* radius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* seamMesh = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    static auto* targetMeshes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_CopyBoneWeights*), "CopyBoneWeightsFromSeamMeshToOtherMeshes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{radius, seamMesh, targetMeshes});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_CopyBoneWeights::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
