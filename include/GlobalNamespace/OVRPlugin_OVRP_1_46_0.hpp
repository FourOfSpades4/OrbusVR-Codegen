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
NEED_NO_BOX(::GlobalNamespace::OVRPlugin::OVRP_1_46_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::OVRP_1_46_0*, "", "OVRPlugin/OVRP_1_46_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/OVRP_1_46_0
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRPlugin::OVRP_1_46_0 : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Version version
    static ::System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(::System::Version* value);
    // static public OVRPlugin/Result ovrp_GetTiledMultiResDynamic(out OVRPlugin/Bool isDynamic)
    // Offset: 0x1B8D240
    static ::GlobalNamespace::OVRPlugin::Result ovrp_GetTiledMultiResDynamic(ByRef<::GlobalNamespace::OVRPlugin::Bool> isDynamic);
    // static public OVRPlugin/Result ovrp_SetTiledMultiResDynamic(OVRPlugin/Bool isDynamic)
    // Offset: 0x1B8D410
    static ::GlobalNamespace::OVRPlugin::Result ovrp_SetTiledMultiResDynamic(::GlobalNamespace::OVRPlugin::Bool isDynamic);
    // static private System.Void .cctor()
    // Offset: 0x1B99988
    static void _cctor();
  }; // OVRPlugin/OVRP_1_46_0
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_46_0::ovrp_GetTiledMultiResDynamic
// Il2CppName: ovrp_GetTiledMultiResDynamic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(ByRef<::GlobalNamespace::OVRPlugin::Bool>)>(&GlobalNamespace::OVRPlugin::OVRP_1_46_0::ovrp_GetTiledMultiResDynamic)> {
  static const MethodInfo* get() {
    static auto* isDynamic = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Bool")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_46_0*), "ovrp_GetTiledMultiResDynamic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isDynamic});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_46_0::ovrp_SetTiledMultiResDynamic
// Il2CppName: ovrp_SetTiledMultiResDynamic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Result (*)(::GlobalNamespace::OVRPlugin::Bool)>(&GlobalNamespace::OVRPlugin::OVRP_1_46_0::ovrp_SetTiledMultiResDynamic)> {
  static const MethodInfo* get() {
    static auto* isDynamic = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Bool")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_46_0*), "ovrp_SetTiledMultiResDynamic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isDynamic});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_46_0::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_46_0::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_46_0*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
