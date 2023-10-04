// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Experimental.IntegratedSubsystemDescriptor`1
#include "UnityEngine/Experimental/IntegratedSubsystemDescriptor_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Experimental::XR
namespace UnityEngine::Experimental::XR {
  // Forward declaring type: XRCameraSubsystem
  class XRCameraSubsystem;
}
// Completed forward declares
// Type namespace: UnityEngine.Experimental.XR
namespace UnityEngine::Experimental::XR {
  // Forward declaring type: XRCameraSubsystemDescriptor
  class XRCameraSubsystemDescriptor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Experimental::XR::XRCameraSubsystemDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::XR::XRCameraSubsystemDescriptor*, "UnityEngine.Experimental.XR", "XRCameraSubsystemDescriptor");
// Type namespace: UnityEngine.Experimental.XR
namespace UnityEngine::Experimental::XR {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Experimental.XR.XRCameraSubsystemDescriptor
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeTypeAttribute] Offset: A8EBCC
  // [UsedByNativeCodeAttribute] Offset: A8EBCC
  // [NativeConditionalAttribute] Offset: A8EBCC
  // [NativeHeaderAttribute] Offset: A8EBCC
  class XRCameraSubsystemDescriptor : public ::UnityEngine::Experimental::IntegratedSubsystemDescriptor_1<::UnityEngine::Experimental::XR::XRCameraSubsystem*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x287F054
    // Implemented from: UnityEngine.Experimental.IntegratedSubsystemDescriptor`1
    // Base method: System.Void IntegratedSubsystemDescriptor_1::.ctor()
    // Base method: System.Void IntegratedSubsystemDescriptor::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XRCameraSubsystemDescriptor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::XR::XRCameraSubsystemDescriptor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XRCameraSubsystemDescriptor*, creationType>()));
    }
  }; // UnityEngine.Experimental.XR.XRCameraSubsystemDescriptor
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Experimental::XR::XRCameraSubsystemDescriptor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!