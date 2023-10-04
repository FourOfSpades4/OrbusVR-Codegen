// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: ImageFormat
  class ImageFormat;
}
// Completed forward declares
// Type namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: ImageFormats
  class ImageFormats;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PowerUI::ImageFormats);
DEFINE_IL2CPP_ARG_TYPE(::PowerUI::ImageFormats*, "PowerUI", "ImageFormats");
// Type namespace: PowerUI
namespace PowerUI {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: PowerUI.ImageFormats
  // [TokenAttribute] Offset: FFFFFFFF
  class ImageFormats : public ::Il2CppObject {
    public:
    // Get static field: static public System.String UnrecognisedImageHandler
    static ::StringW _get_UnrecognisedImageHandler();
    // Set static field: static public System.String UnrecognisedImageHandler
    static void _set_UnrecognisedImageHandler(::StringW value);
    // Get static field: static public System.Collections.Generic.Dictionary`2<System.String,PowerUI.ImageFormat> Formats
    static ::System::Collections::Generic::Dictionary_2<::StringW, ::PowerUI::ImageFormat*>* _get_Formats();
    // Set static field: static public System.Collections.Generic.Dictionary`2<System.String,PowerUI.ImageFormat> Formats
    static void _set_Formats(::System::Collections::Generic::Dictionary_2<::StringW, ::PowerUI::ImageFormat*>* value);
    // static public System.Void Setup()
    // Offset: 0x1A4C7B0
    static void Setup();
    // static public System.Void Add(PowerUI.ImageFormat format)
    // Offset: 0x1A4CA28
    static void Add(::PowerUI::ImageFormat* format);
    // static public PowerUI.ImageFormat Get(System.String type)
    // Offset: 0x1A4CB58
    static ::PowerUI::ImageFormat* Get(::StringW type);
    // static private System.Void .cctor()
    // Offset: 0x1A4CC7C
    static void _cctor();
  }; // PowerUI.ImageFormats
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PowerUI::ImageFormats::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&PowerUI::ImageFormats::Setup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::ImageFormats*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::ImageFormats::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::PowerUI::ImageFormat*)>(&PowerUI::ImageFormats::Add)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("PowerUI", "ImageFormat")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::ImageFormats*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format});
  }
};
// Writing MetadataGetter for method: PowerUI::ImageFormats::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::PowerUI::ImageFormat* (*)(::StringW)>(&PowerUI::ImageFormats::Get)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::ImageFormats*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: PowerUI::ImageFormats::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&PowerUI::ImageFormats::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::ImageFormats*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
