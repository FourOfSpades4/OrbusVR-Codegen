// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Experimental.IntegratedSubsystem`1
#include "UnityEngine/Experimental/IntegratedSubsystem_1.hpp"
// Including type: UnityEngine.Experimental.XR.MeshGenerationResult
#include "UnityEngine/Experimental/XR/MeshGenerationResult.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Experimental::XR
namespace UnityEngine::Experimental::XR {
  // Forward declaring type: XRMeshSubsystemDescriptor
  class XRMeshSubsystemDescriptor;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: UnityEngine.Experimental.XR
namespace UnityEngine::Experimental::XR {
  // Forward declaring type: XRMeshSubsystem
  class XRMeshSubsystem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Experimental::XR::XRMeshSubsystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::XR::XRMeshSubsystem*, "UnityEngine.Experimental.XR", "XRMeshSubsystem");
// Type namespace: UnityEngine.Experimental.XR
namespace UnityEngine::Experimental::XR {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Experimental.XR.XRMeshSubsystem
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: A8EE94
  // [NativeConditionalAttribute] Offset: A8EE94
  // [NativeHeaderAttribute] Offset: A8EE94
  // [UsedByNativeCodeAttribute] Offset: A8EE94
  class XRMeshSubsystem : public ::UnityEngine::Experimental::IntegratedSubsystem_1<::UnityEngine::Experimental::XR::XRMeshSubsystemDescriptor*> {
    public:
    // private System.Void InvokeMeshReadyDelegate(UnityEngine.Experimental.XR.MeshGenerationResult result, System.Action`1<UnityEngine.Experimental.XR.MeshGenerationResult> onMeshGenerationComplete)
    // Offset: 0x287F1F8
    void InvokeMeshReadyDelegate(::UnityEngine::Experimental::XR::MeshGenerationResult result, ::System::Action_1<::UnityEngine::Experimental::XR::MeshGenerationResult>* onMeshGenerationComplete);
    // public System.Void .ctor()
    // Offset: 0x287F1A8
    // Implemented from: UnityEngine.Experimental.IntegratedSubsystem`1
    // Base method: System.Void IntegratedSubsystem_1::.ctor()
    // Base method: System.Void IntegratedSubsystem::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XRMeshSubsystem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::XR::XRMeshSubsystem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XRMeshSubsystem*, creationType>()));
    }
  }; // UnityEngine.Experimental.XR.XRMeshSubsystem
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Experimental::XR::XRMeshSubsystem::InvokeMeshReadyDelegate
// Il2CppName: InvokeMeshReadyDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::XR::XRMeshSubsystem::*)(::UnityEngine::Experimental::XR::MeshGenerationResult, ::System::Action_1<::UnityEngine::Experimental::XR::MeshGenerationResult>*)>(&UnityEngine::Experimental::XR::XRMeshSubsystem::InvokeMeshReadyDelegate)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.XR", "MeshGenerationResult")->byval_arg;
    static auto* onMeshGenerationComplete = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.XR", "MeshGenerationResult")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::XR::XRMeshSubsystem*), "InvokeMeshReadyDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result, onMeshGenerationComplete});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::XR::XRMeshSubsystem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
