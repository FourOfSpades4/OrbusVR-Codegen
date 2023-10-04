// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: InfiniText
namespace InfiniText {
  // Forward declaring type: OnGetDistance
  class OnGetDistance;
}
// Completed forward declares
// Type namespace: InfiniText
namespace InfiniText {
  // Forward declaring type: DistanceSpread
  class DistanceSpread;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::InfiniText::DistanceSpread);
DEFINE_IL2CPP_ARG_TYPE(::InfiniText::DistanceSpread*, "InfiniText", "DistanceSpread");
// Type namespace: InfiniText
namespace InfiniText {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: InfiniText.DistanceSpread
  // [TokenAttribute] Offset: FFFFFFFF
  class DistanceSpread : public ::Il2CppObject {
    public:
    // Get static field: static public System.Boolean Custom
    static bool _get_Custom();
    // Set static field: static public System.Boolean Custom
    static void _set_Custom(bool value);
    // Get static field: static public InfiniText.OnGetDistance GetInner
    static ::InfiniText::OnGetDistance* _get_GetInner();
    // Set static field: static public InfiniText.OnGetDistance GetInner
    static void _set_GetInner(::InfiniText::OnGetDistance* value);
    // Get static field: static public InfiniText.OnGetDistance GetOuter
    static ::InfiniText::OnGetDistance* _get_GetOuter();
    // Set static field: static public InfiniText.OnGetDistance GetOuter
    static void _set_GetOuter(::InfiniText::OnGetDistance* value);
    // Get static field: static public System.Boolean InnerOuterDiff
    static bool _get_InnerOuterDiff();
    // Set static field: static public System.Boolean InnerOuterDiff
    static void _set_InnerOuterDiff(bool value);
    // Get static field: static public System.Single DefaultInner
    static float _get_DefaultInner();
    // Set static field: static public System.Single DefaultInner
    static void _set_DefaultInner(float value);
    // Get static field: static public System.Single DefaultOuter
    static float _get_DefaultOuter();
    // Set static field: static public System.Single DefaultOuter
    static void _set_DefaultOuter(float value);
    // static public System.Void SetFunction(InfiniText.OnGetDistance method)
    // Offset: 0x14A7468
    static void SetFunction(::InfiniText::OnGetDistance* method);
    // static public System.Void SetFunctions(InfiniText.OnGetDistance inner, InfiniText.OnGetDistance outer, System.Boolean hd)
    // Offset: 0x14A74D8
    static void SetFunctions(::InfiniText::OnGetDistance* inner, ::InfiniText::OnGetDistance* outer, bool hd);
    // static private System.Void .cctor()
    // Offset: 0x14A75DC
    static void _cctor();
  }; // InfiniText.DistanceSpread
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: InfiniText::DistanceSpread::SetFunction
// Il2CppName: SetFunction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::InfiniText::OnGetDistance*)>(&InfiniText::DistanceSpread::SetFunction)> {
  static const MethodInfo* get() {
    static auto* method = &::il2cpp_utils::GetClassFromName("InfiniText", "OnGetDistance")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(InfiniText::DistanceSpread*), "SetFunction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{method});
  }
};
// Writing MetadataGetter for method: InfiniText::DistanceSpread::SetFunctions
// Il2CppName: SetFunctions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::InfiniText::OnGetDistance*, ::InfiniText::OnGetDistance*, bool)>(&InfiniText::DistanceSpread::SetFunctions)> {
  static const MethodInfo* get() {
    static auto* inner = &::il2cpp_utils::GetClassFromName("InfiniText", "OnGetDistance")->byval_arg;
    static auto* outer = &::il2cpp_utils::GetClassFromName("InfiniText", "OnGetDistance")->byval_arg;
    static auto* hd = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(InfiniText::DistanceSpread*), "SetFunctions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inner, outer, hd});
  }
};
// Writing MetadataGetter for method: InfiniText::DistanceSpread::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&InfiniText::DistanceSpread::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(InfiniText::DistanceSpread*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};