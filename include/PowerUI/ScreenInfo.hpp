// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: ResolutionInfo
  class ResolutionInfo;
}
// Completed forward declares
// Type namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: ScreenInfo
  class ScreenInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PowerUI::ScreenInfo);
DEFINE_IL2CPP_ARG_TYPE(::PowerUI::ScreenInfo*, "PowerUI", "ScreenInfo");
// Type namespace: PowerUI
namespace PowerUI {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: PowerUI.ScreenInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class ScreenInfo : public ::Il2CppObject {
    public:
    // Get static field: static public System.Int32 ScreenX
    static int _get_ScreenX();
    // Set static field: static public System.Int32 ScreenX
    static void _set_ScreenX(int value);
    // Get static field: static public System.Int32 ScreenY
    static int _get_ScreenY();
    // Set static field: static public System.Int32 ScreenY
    static void _set_ScreenY(int value);
    // Get static field: static public System.Single ScreenYFloat
    static float _get_ScreenYFloat();
    // Set static field: static public System.Single ScreenYFloat
    static void _set_ScreenYFloat(float value);
    // Get static field: static public System.String ResolutionName
    static ::StringW _get_ResolutionName();
    // Set static field: static public System.String ResolutionName
    static void _set_ResolutionName(::StringW value);
    // Get static field: static public System.Single DepthDepreciation
    static float _get_DepthDepreciation();
    // Set static field: static public System.Single DepthDepreciation
    static void _set_DepthDepreciation(float value);
    // Get static field: static public System.Single ResolutionScale
    static float _get_ResolutionScale();
    // Set static field: static public System.Single ResolutionScale
    static void _set_ResolutionScale(float value);
    // Get static field: static public UnityEngine.Vector2 WorldSize
    static ::UnityEngine::Vector2 _get_WorldSize();
    // Set static field: static public UnityEngine.Vector2 WorldSize
    static void _set_WorldSize(::UnityEngine::Vector2 value);
    // Get static field: static private PowerUI.ResolutionInfo CurrentResolution
    static ::PowerUI::ResolutionInfo* _get_CurrentResolution();
    // Set static field: static private PowerUI.ResolutionInfo CurrentResolution
    static void _set_CurrentResolution(::PowerUI::ResolutionInfo* value);
    // Get static field: static public UnityEngine.Vector2 WorldPerPixel
    static ::UnityEngine::Vector2 _get_WorldPerPixel();
    // Set static field: static public UnityEngine.Vector2 WorldPerPixel
    static void _set_WorldPerPixel(::UnityEngine::Vector2 value);
    // Get static field: static public UnityEngine.Vector3 WorldScreenOrigin
    static ::UnityEngine::Vector3 _get_WorldScreenOrigin();
    // Set static field: static public UnityEngine.Vector3 WorldScreenOrigin
    static void _set_WorldScreenOrigin(::UnityEngine::Vector3 value);
    // static public System.Void Clear()
    // Offset: 0x1771728
    static void Clear();
    // static public System.Void Update()
    // Offset: 0x177179C
    static void Update();
    // static public PowerUI.ResolutionInfo get_Resolution()
    // Offset: 0x1771C84
    static ::PowerUI::ResolutionInfo* get_Resolution();
    // static public System.Void set_Resolution(PowerUI.ResolutionInfo value)
    // Offset: 0x1771CEC
    static void set_Resolution(::PowerUI::ResolutionInfo* value);
    // static private System.Void .cctor()
    // Offset: 0x1771DFC
    static void _cctor();
  }; // PowerUI.ScreenInfo
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PowerUI::ScreenInfo::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&PowerUI::ScreenInfo::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::ScreenInfo*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::ScreenInfo::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&PowerUI::ScreenInfo::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::ScreenInfo*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::ScreenInfo::get_Resolution
// Il2CppName: get_Resolution
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::PowerUI::ResolutionInfo* (*)()>(&PowerUI::ScreenInfo::get_Resolution)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::ScreenInfo*), "get_Resolution", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::ScreenInfo::set_Resolution
// Il2CppName: set_Resolution
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::PowerUI::ResolutionInfo*)>(&PowerUI::ScreenInfo::set_Resolution)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("PowerUI", "ResolutionInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::ScreenInfo*), "set_Resolution", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: PowerUI::ScreenInfo::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&PowerUI::ScreenInfo::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::ScreenInfo*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
