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
  // Forward declaring type: XRDepthSubsystem
  class XRDepthSubsystem;
}
// Completed forward declares
// Type namespace: UnityEngine.Experimental.XR
namespace UnityEngine::Experimental::XR {
  // Forward declaring type: XRDepthSubsystemDescriptor
  class XRDepthSubsystemDescriptor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Experimental::XR::XRDepthSubsystemDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::XR::XRDepthSubsystemDescriptor*, "UnityEngine.Experimental.XR", "XRDepthSubsystemDescriptor");
// Type namespace: UnityEngine.Experimental.XR
namespace UnityEngine::Experimental::XR {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Experimental.XR.XRDepthSubsystemDescriptor
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: A8ED00
  // [NativeTypeAttribute] Offset: A8ED00
  // [NativeConditionalAttribute] Offset: A8ED00
  // [NativeHeaderAttribute] Offset: A8ED00
  class XRDepthSubsystemDescriptor : public ::UnityEngine::Experimental::IntegratedSubsystemDescriptor_1<::UnityEngine::Experimental::XR::XRDepthSubsystem*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x287F158
    // Implemented from: UnityEngine.Experimental.IntegratedSubsystemDescriptor`1
    // Base method: System.Void IntegratedSubsystemDescriptor_1::.ctor()
    // Base method: System.Void IntegratedSubsystemDescriptor::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XRDepthSubsystemDescriptor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::XR::XRDepthSubsystemDescriptor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XRDepthSubsystemDescriptor*, creationType>()));
    }
  }; // UnityEngine.Experimental.XR.XRDepthSubsystemDescriptor
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Experimental::XR::XRDepthSubsystemDescriptor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
