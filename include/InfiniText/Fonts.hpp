// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Blaze
namespace Blaze {
  // Forward declaring type: Scanner
  class Scanner;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: InfiniText
namespace InfiniText {
  // Forward declaring type: FontFamily
  class FontFamily;
  // Forward declaring type: OnLogEvent
  class OnLogEvent;
  // Forward declaring type: FontFace
  class FontFace;
}
// Completed forward declares
// Type namespace: InfiniText
namespace InfiniText {
  // Forward declaring type: Fonts
  class Fonts;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::InfiniText::Fonts);
DEFINE_IL2CPP_ARG_TYPE(::InfiniText::Fonts*, "InfiniText", "Fonts");
// Type namespace: InfiniText
namespace InfiniText {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: InfiniText.Fonts
  // [TokenAttribute] Offset: FFFFFFFF
  class Fonts : public ::Il2CppObject {
    public:
    // Get static field: static public System.Boolean UseOS2Metrics
    static bool _get_UseOS2Metrics();
    // Set static field: static public System.Boolean UseOS2Metrics
    static void _set_UseOS2Metrics(bool value);
    // Get static field: static public System.Int32 GlyphID
    static int _get_GlyphID();
    // Set static field: static public System.Int32 GlyphID
    static void _set_GlyphID(int value);
    // Get static field: static public System.Boolean UseGPU
    static bool _get_UseGPU();
    // Set static field: static public System.Boolean UseGPU
    static void _set_UseGPU(bool value);
    // Get static field: static public readonly System.Single[] AutoAliasHints
    static ::ArrayW<float> _get_AutoAliasHints();
    // Set static field: static public readonly System.Single[] AutoAliasHints
    static void _set_AutoAliasHints(::ArrayW<float> value);
    // Get static field: static public System.Single Aliasing
    static float _get_Aliasing();
    // Set static field: static public System.Single Aliasing
    static void _set_Aliasing(float value);
    // Get static field: static public Blaze.Scanner Rasteriser
    static ::Blaze::Scanner* _get_Rasteriser();
    // Set static field: static public Blaze.Scanner Rasteriser
    static void _set_Rasteriser(::Blaze::Scanner* value);
    // Get static field: static public System.Boolean Preload
    static bool _get_Preload();
    // Set static field: static public System.Boolean Preload
    static void _set_Preload(bool value);
    // Get static field: static public System.Boolean DeferLoad
    static bool _get_DeferLoad();
    // Set static field: static public System.Boolean DeferLoad
    static void _set_DeferLoad(bool value);
    // Get static field: static public System.Boolean InvertedNormals
    static bool _get_InvertedNormals();
    // Set static field: static public System.Boolean InvertedNormals
    static void _set_InvertedNormals(bool value);
    // Get static field: static public System.Single SdfPixelHeight
    static float _get_SdfPixelHeight();
    // Set static field: static public System.Single SdfPixelHeight
    static void _set_SdfPixelHeight(float value);
    // Get static field: static public System.Single SdfOffset
    static float _get_SdfOffset();
    // Set static field: static public System.Single SdfOffset
    static void _set_SdfOffset(float value);
    // Get static field: static public System.Int32 SdfSize
    static int _get_SdfSize();
    // Set static field: static public System.Int32 SdfSize
    static void _set_SdfSize(int value);
    // Get static field: static public System.Int32 DoubleSdfSize
    static int _get_DoubleSdfSize();
    // Set static field: static public System.Int32 DoubleSdfSize
    static void _set_DoubleSdfSize(int value);
    // Get static field: static public System.Single OutlineLocation
    static float _get_OutlineLocation();
    // Set static field: static public System.Single OutlineLocation
    static void _set_OutlineLocation(float value);
    // Get static field: static public System.Collections.Generic.Dictionary`2<System.String,InfiniText.FontFamily> All
    static ::System::Collections::Generic::Dictionary_2<::StringW, ::InfiniText::FontFamily*>* _get_All();
    // Set static field: static public System.Collections.Generic.Dictionary`2<System.String,InfiniText.FontFamily> All
    static void _set_All(::System::Collections::Generic::Dictionary_2<::StringW, ::InfiniText::FontFamily*>* value);
    // Get static field: static public InfiniText.OnLogEvent OnLog
    static ::InfiniText::OnLogEvent* _get_OnLog();
    // Set static field: static public InfiniText.OnLogEvent OnLog
    static void _set_OnLog(::InfiniText::OnLogEvent* value);
    // static public System.Void OnLogMessage(System.String message)
    // Offset: 0x14A6FF0
    static void OnLogMessage(::StringW message);
    // static public InfiniText.FontFace Load(System.Byte[] data)
    // Offset: 0x14AB110
    static ::InfiniText::FontFace* Load(::ArrayW<uint8_t> data);
    // static private System.Void UpdateAliasValues()
    // Offset: 0x14AB114
    static void UpdateAliasValues();
    // static public System.Int32 get_SDFSpread()
    // Offset: 0x14AB1BC
    static int get_SDFSpread();
    // static public System.Void set_SDFSpread(System.Int32 value)
    // Offset: 0x14AB224
    static void set_SDFSpread(int value);
    // static public System.Single get_PixelHeight()
    // Offset: 0x14AB2B4
    static float get_PixelHeight();
    // static public System.Void set_PixelHeight(System.Single value)
    // Offset: 0x14AB31C
    static void set_PixelHeight(float value);
    // static public System.Void Clear()
    // Offset: 0x14AB44C
    static void Clear();
    // static System.Void Start()
    // Offset: 0x14AB4C0
    static void Start();
    // static public InfiniText.FontFamily GetOrCreate(System.String name)
    // Offset: 0x14A8B34
    static ::InfiniText::FontFamily* GetOrCreate(::StringW name);
    // static public System.Void AddToCache(System.String name, InfiniText.FontFamily family)
    // Offset: 0x14AB738
    static void AddToCache(::StringW name, ::InfiniText::FontFamily* family);
    // static public InfiniText.FontFamily Get(System.String name)
    // Offset: 0x14AB644
    static ::InfiniText::FontFamily* Get(::StringW name);
    // static private System.Void .cctor()
    // Offset: 0x14AB85C
    static void _cctor();
  }; // InfiniText.Fonts
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: InfiniText::Fonts::OnLogMessage
// Il2CppName: OnLogMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&InfiniText::Fonts::OnLogMessage)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(InfiniText::Fonts*), "OnLogMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: InfiniText::Fonts::Load
// Il2CppName: Load
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::InfiniText::FontFace* (*)(::ArrayW<uint8_t>)>(&InfiniText::Fonts::Load)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(InfiniText::Fonts*), "Load", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: InfiniText::Fonts::UpdateAliasValues
// Il2CppName: UpdateAliasValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&InfiniText::Fonts::UpdateAliasValues)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(InfiniText::Fonts*), "UpdateAliasValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: InfiniText::Fonts::get_SDFSpread
// Il2CppName: get_SDFSpread
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&InfiniText::Fonts::get_SDFSpread)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(InfiniText::Fonts*), "get_SDFSpread", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: InfiniText::Fonts::set_SDFSpread
// Il2CppName: set_SDFSpread
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&InfiniText::Fonts::set_SDFSpread)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(InfiniText::Fonts*), "set_SDFSpread", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: InfiniText::Fonts::get_PixelHeight
// Il2CppName: get_PixelHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&InfiniText::Fonts::get_PixelHeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(InfiniText::Fonts*), "get_PixelHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: InfiniText::Fonts::set_PixelHeight
// Il2CppName: set_PixelHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float)>(&InfiniText::Fonts::set_PixelHeight)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(InfiniText::Fonts*), "set_PixelHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: InfiniText::Fonts::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&InfiniText::Fonts::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(InfiniText::Fonts*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: InfiniText::Fonts::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&InfiniText::Fonts::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(InfiniText::Fonts*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: InfiniText::Fonts::GetOrCreate
// Il2CppName: GetOrCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::InfiniText::FontFamily* (*)(::StringW)>(&InfiniText::Fonts::GetOrCreate)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(InfiniText::Fonts*), "GetOrCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: InfiniText::Fonts::AddToCache
// Il2CppName: AddToCache
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::InfiniText::FontFamily*)>(&InfiniText::Fonts::AddToCache)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* family = &::il2cpp_utils::GetClassFromName("InfiniText", "FontFamily")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(InfiniText::Fonts*), "AddToCache", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, family});
  }
};
// Writing MetadataGetter for method: InfiniText::Fonts::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::InfiniText::FontFamily* (*)(::StringW)>(&InfiniText::Fonts::Get)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(InfiniText::Fonts*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: InfiniText::Fonts::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&InfiniText::Fonts::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(InfiniText::Fonts*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
