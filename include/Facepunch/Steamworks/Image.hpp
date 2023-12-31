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
// Forward declaring namespace: SteamNative
namespace SteamNative {
  // Forward declaring type: SteamUtils
  class SteamUtils;
}
// Completed forward declares
// Type namespace: Facepunch.Steamworks
namespace Facepunch::Steamworks {
  // Forward declaring type: Image
  class Image;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Facepunch::Steamworks::Image);
DEFINE_IL2CPP_ARG_TYPE(::Facepunch::Steamworks::Image*, "Facepunch.Steamworks", "Image");
// Type namespace: Facepunch.Steamworks
namespace Facepunch::Steamworks {
  // Size: 0x2A
  #pragma pack(push, 1)
  // Autogenerated type: Facepunch.Steamworks.Image
  // [TokenAttribute] Offset: FFFFFFFF
  class Image : public ::Il2CppObject {
    public:
    public:
    // [CompilerGeneratedAttribute] Offset: 0xAB2D18
    // private System.Int32 <Id>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    int Id;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xAB2D28
    // private System.Int32 <Width>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    int Width;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xAB2D38
    // private System.Int32 <Height>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    int Height;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: Height and: Data
    char __padding2[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xAB2D48
    // private System.Byte[] <Data>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<uint8_t> Data;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xAB2D58
    // private System.Boolean <IsLoaded>k__BackingField
    // Size: 0x1
    // Offset: 0x28
    bool IsLoaded;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xAB2D68
    // private System.Boolean <IsError>k__BackingField
    // Size: 0x1
    // Offset: 0x29
    bool IsError;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Int32 <Id>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$Id$k__BackingField();
    // Get instance field reference: private System.Int32 <Width>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$Width$k__BackingField();
    // Get instance field reference: private System.Int32 <Height>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$Height$k__BackingField();
    // Get instance field reference: private System.Byte[] <Data>k__BackingField
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_$Data$k__BackingField();
    // Get instance field reference: private System.Boolean <IsLoaded>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsLoaded$k__BackingField();
    // Get instance field reference: private System.Boolean <IsError>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsError$k__BackingField();
    // public System.Int32 get_Id()
    // Offset: 0x28446CC
    int get_Id();
    // System.Void set_Id(System.Int32 value)
    // Offset: 0x2843EB4
    void set_Id(int value);
    // System.Void set_Width(System.Int32 value)
    // Offset: 0x28446D4
    void set_Width(int value);
    // System.Void set_Height(System.Int32 value)
    // Offset: 0x28446DC
    void set_Height(int value);
    // System.Void set_Data(System.Byte[] value)
    // Offset: 0x28446E4
    void set_Data(::ArrayW<uint8_t> value);
    // public System.Boolean get_IsLoaded()
    // Offset: 0x28446EC
    bool get_IsLoaded();
    // System.Void set_IsLoaded(System.Boolean value)
    // Offset: 0x28446F4
    void set_IsLoaded(bool value);
    // System.Void set_IsError(System.Boolean value)
    // Offset: 0x2844700
    void set_IsError(bool value);
    // System.Boolean TryLoad(SteamNative.SteamUtils utils)
    // Offset: 0x2843EBC
    bool TryLoad(::SteamNative::SteamUtils* utils);
    // public System.Void .ctor()
    // Offset: 0x2843EAC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Image* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Facepunch::Steamworks::Image::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Image*, creationType>()));
    }
  }; // Facepunch.Steamworks.Image
  #pragma pack(pop)
  static check_size<sizeof(Image), 41 + sizeof(bool)> __Facepunch_Steamworks_ImageSizeCheck;
  static_assert(sizeof(Image) == 0x2A);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Facepunch::Steamworks::Image::get_Id
// Il2CppName: get_Id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Facepunch::Steamworks::Image::*)()>(&Facepunch::Steamworks::Image::get_Id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facepunch::Steamworks::Image*), "get_Id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facepunch::Steamworks::Image::set_Id
// Il2CppName: set_Id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facepunch::Steamworks::Image::*)(int)>(&Facepunch::Steamworks::Image::set_Id)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facepunch::Steamworks::Image*), "set_Id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Facepunch::Steamworks::Image::set_Width
// Il2CppName: set_Width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facepunch::Steamworks::Image::*)(int)>(&Facepunch::Steamworks::Image::set_Width)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facepunch::Steamworks::Image*), "set_Width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Facepunch::Steamworks::Image::set_Height
// Il2CppName: set_Height
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facepunch::Steamworks::Image::*)(int)>(&Facepunch::Steamworks::Image::set_Height)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facepunch::Steamworks::Image*), "set_Height", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Facepunch::Steamworks::Image::set_Data
// Il2CppName: set_Data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facepunch::Steamworks::Image::*)(::ArrayW<uint8_t>)>(&Facepunch::Steamworks::Image::set_Data)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facepunch::Steamworks::Image*), "set_Data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Facepunch::Steamworks::Image::get_IsLoaded
// Il2CppName: get_IsLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Facepunch::Steamworks::Image::*)()>(&Facepunch::Steamworks::Image::get_IsLoaded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facepunch::Steamworks::Image*), "get_IsLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facepunch::Steamworks::Image::set_IsLoaded
// Il2CppName: set_IsLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facepunch::Steamworks::Image::*)(bool)>(&Facepunch::Steamworks::Image::set_IsLoaded)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facepunch::Steamworks::Image*), "set_IsLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Facepunch::Steamworks::Image::set_IsError
// Il2CppName: set_IsError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facepunch::Steamworks::Image::*)(bool)>(&Facepunch::Steamworks::Image::set_IsError)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facepunch::Steamworks::Image*), "set_IsError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Facepunch::Steamworks::Image::TryLoad
// Il2CppName: TryLoad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Facepunch::Steamworks::Image::*)(::SteamNative::SteamUtils*)>(&Facepunch::Steamworks::Image::TryLoad)> {
  static const MethodInfo* get() {
    static auto* utils = &::il2cpp_utils::GetClassFromName("SteamNative", "SteamUtils")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facepunch::Steamworks::Image*), "TryLoad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{utils});
  }
};
// Writing MetadataGetter for method: Facepunch::Steamworks::Image::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
