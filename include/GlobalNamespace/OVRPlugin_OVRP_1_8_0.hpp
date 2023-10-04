// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRPlugin::OVRP_1_8_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::OVRP_1_8_0*, "", "OVRPlugin/OVRP_1_8_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/OVRP_1_8_0
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRPlugin::OVRP_1_8_0 : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Version version
    static ::System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(::System::Version* value);
    // static public OVRPlugin/Bool ovrp_GetBoundaryConfigured()
    // Offset: 0x1B89210
    static ::GlobalNamespace::OVRPlugin::Bool ovrp_GetBoundaryConfigured();
    // static public OVRPlugin/BoundaryTestResult ovrp_TestBoundaryNode(OVRPlugin/Node nodeId, OVRPlugin/BoundaryType boundaryType)
    // Offset: 0x1B893C4
    static ::GlobalNamespace::OVRPlugin::BoundaryTestResult ovrp_TestBoundaryNode(::GlobalNamespace::OVRPlugin::Node nodeId, ::GlobalNamespace::OVRPlugin::BoundaryType boundaryType);
    // static public OVRPlugin/BoundaryTestResult ovrp_TestBoundaryPoint(OVRPlugin/Vector3f point, OVRPlugin/BoundaryType boundaryType)
    // Offset: 0x1B895C8
    static ::GlobalNamespace::OVRPlugin::BoundaryTestResult ovrp_TestBoundaryPoint(::GlobalNamespace::OVRPlugin::Vector3f point, ::GlobalNamespace::OVRPlugin::BoundaryType boundaryType);
    // static public OVRPlugin/BoundaryGeometry ovrp_GetBoundaryGeometry(OVRPlugin/BoundaryType boundaryType)
    // Offset: 0x1B897BC
    static ::GlobalNamespace::OVRPlugin::BoundaryGeometry ovrp_GetBoundaryGeometry(::GlobalNamespace::OVRPlugin::BoundaryType boundaryType);
    // static public OVRPlugin/Vector3f ovrp_GetBoundaryDimensions(OVRPlugin/BoundaryType boundaryType)
    // Offset: 0x1B8BE34
    static ::GlobalNamespace::OVRPlugin::Vector3f ovrp_GetBoundaryDimensions(::GlobalNamespace::OVRPlugin::BoundaryType boundaryType);
    // static public OVRPlugin/Bool ovrp_GetBoundaryVisible()
    // Offset: 0x1B8BFD0
    static ::GlobalNamespace::OVRPlugin::Bool ovrp_GetBoundaryVisible();
    // static public OVRPlugin/Bool ovrp_SetBoundaryVisible(OVRPlugin/Bool value)
    // Offset: 0x1B8C188
    static ::GlobalNamespace::OVRPlugin::Bool ovrp_SetBoundaryVisible(::GlobalNamespace::OVRPlugin::Bool value);
    // static public OVRPlugin/Bool ovrp_Update2(System.Int32 stateId, System.Int32 frameIndex, System.Double predictionSeconds)
    // Offset: 0x1B86428
    static ::GlobalNamespace::OVRPlugin::Bool ovrp_Update2(int stateId, int frameIndex, double predictionSeconds);
    // static public OVRPlugin/Posef ovrp_GetNodePose2(System.Int32 stateId, OVRPlugin/Node nodeId)
    // Offset: 0x1B865A0
    static ::GlobalNamespace::OVRPlugin::Posef ovrp_GetNodePose2(int stateId, ::GlobalNamespace::OVRPlugin::Node nodeId);
    // static public OVRPlugin/Posef ovrp_GetNodeVelocity2(System.Int32 stateId, OVRPlugin/Node nodeId)
    // Offset: 0x1B8696C
    static ::GlobalNamespace::OVRPlugin::Posef ovrp_GetNodeVelocity2(int stateId, ::GlobalNamespace::OVRPlugin::Node nodeId);
    // static public OVRPlugin/Posef ovrp_GetNodeAcceleration2(System.Int32 stateId, OVRPlugin/Node nodeId)
    // Offset: 0x1B86EBC
    static ::GlobalNamespace::OVRPlugin::Posef ovrp_GetNodeAcceleration2(int stateId, ::GlobalNamespace::OVRPlugin::Node nodeId);
    // static private System.Void .cctor()
    // Offset: 0x1B9A830
    static void _cctor();
  }; // OVRPlugin/OVRP_1_8_0
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_8_0::ovrp_GetBoundaryConfigured
// Il2CppName: ovrp_GetBoundaryConfigured
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Bool (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_8_0::ovrp_GetBoundaryConfigured)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_8_0*), "ovrp_GetBoundaryConfigured", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_8_0::ovrp_TestBoundaryNode
// Il2CppName: ovrp_TestBoundaryNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::BoundaryTestResult (*)(::GlobalNamespace::OVRPlugin::Node, ::GlobalNamespace::OVRPlugin::BoundaryType)>(&GlobalNamespace::OVRPlugin::OVRP_1_8_0::ovrp_TestBoundaryNode)> {
  static const MethodInfo* get() {
    static auto* nodeId = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Node")->byval_arg;
    static auto* boundaryType = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/BoundaryType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_8_0*), "ovrp_TestBoundaryNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nodeId, boundaryType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_8_0::ovrp_TestBoundaryPoint
// Il2CppName: ovrp_TestBoundaryPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::BoundaryTestResult (*)(::GlobalNamespace::OVRPlugin::Vector3f, ::GlobalNamespace::OVRPlugin::BoundaryType)>(&GlobalNamespace::OVRPlugin::OVRP_1_8_0::ovrp_TestBoundaryPoint)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Vector3f")->byval_arg;
    static auto* boundaryType = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/BoundaryType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_8_0*), "ovrp_TestBoundaryPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point, boundaryType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_8_0::ovrp_GetBoundaryGeometry
// Il2CppName: ovrp_GetBoundaryGeometry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::BoundaryGeometry (*)(::GlobalNamespace::OVRPlugin::BoundaryType)>(&GlobalNamespace::OVRPlugin::OVRP_1_8_0::ovrp_GetBoundaryGeometry)> {
  static const MethodInfo* get() {
    static auto* boundaryType = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/BoundaryType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_8_0*), "ovrp_GetBoundaryGeometry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{boundaryType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_8_0::ovrp_GetBoundaryDimensions
// Il2CppName: ovrp_GetBoundaryDimensions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Vector3f (*)(::GlobalNamespace::OVRPlugin::BoundaryType)>(&GlobalNamespace::OVRPlugin::OVRP_1_8_0::ovrp_GetBoundaryDimensions)> {
  static const MethodInfo* get() {
    static auto* boundaryType = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/BoundaryType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_8_0*), "ovrp_GetBoundaryDimensions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{boundaryType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_8_0::ovrp_GetBoundaryVisible
// Il2CppName: ovrp_GetBoundaryVisible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Bool (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_8_0::ovrp_GetBoundaryVisible)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_8_0*), "ovrp_GetBoundaryVisible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_8_0::ovrp_SetBoundaryVisible
// Il2CppName: ovrp_SetBoundaryVisible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Bool (*)(::GlobalNamespace::OVRPlugin::Bool)>(&GlobalNamespace::OVRPlugin::OVRP_1_8_0::ovrp_SetBoundaryVisible)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Bool")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_8_0*), "ovrp_SetBoundaryVisible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_8_0::ovrp_Update2
// Il2CppName: ovrp_Update2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Bool (*)(int, int, double)>(&GlobalNamespace::OVRPlugin::OVRP_1_8_0::ovrp_Update2)> {
  static const MethodInfo* get() {
    static auto* stateId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* frameIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* predictionSeconds = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_8_0*), "ovrp_Update2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateId, frameIndex, predictionSeconds});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_8_0::ovrp_GetNodePose2
// Il2CppName: ovrp_GetNodePose2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Posef (*)(int, ::GlobalNamespace::OVRPlugin::Node)>(&GlobalNamespace::OVRPlugin::OVRP_1_8_0::ovrp_GetNodePose2)> {
  static const MethodInfo* get() {
    static auto* stateId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* nodeId = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Node")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_8_0*), "ovrp_GetNodePose2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateId, nodeId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_8_0::ovrp_GetNodeVelocity2
// Il2CppName: ovrp_GetNodeVelocity2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Posef (*)(int, ::GlobalNamespace::OVRPlugin::Node)>(&GlobalNamespace::OVRPlugin::OVRP_1_8_0::ovrp_GetNodeVelocity2)> {
  static const MethodInfo* get() {
    static auto* stateId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* nodeId = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Node")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_8_0*), "ovrp_GetNodeVelocity2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateId, nodeId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_8_0::ovrp_GetNodeAcceleration2
// Il2CppName: ovrp_GetNodeAcceleration2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Posef (*)(int, ::GlobalNamespace::OVRPlugin::Node)>(&GlobalNamespace::OVRPlugin::OVRP_1_8_0::ovrp_GetNodeAcceleration2)> {
  static const MethodInfo* get() {
    static auto* stateId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* nodeId = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Node")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_8_0*), "ovrp_GetNodeAcceleration2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateId, nodeId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_8_0::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_8_0::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_8_0*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
