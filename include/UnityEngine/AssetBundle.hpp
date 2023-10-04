// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AssetBundle
  class AssetBundle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AssetBundle);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AssetBundle*, "UnityEngine", "AssetBundle");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AssetBundle
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: A846B8
  // [NativeHeaderAttribute] Offset: A846B8
  // [NativeHeaderAttribute] Offset: A846B8
  // [NativeHeaderAttribute] Offset: A846B8
  // [NativeHeaderAttribute] Offset: A846B8
  // [NativeHeaderAttribute] Offset: A846B8
  // [ExcludeFromPresetAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: A846B8
  // [NativeHeaderAttribute] Offset: A846B8
  // [NativeHeaderAttribute] Offset: A846B8
  // [NativeHeaderAttribute] Offset: A846B8
  // [NativeHeaderAttribute] Offset: A846B8
  class AssetBundle : public ::UnityEngine::Object {
    public:
    // private System.Void .ctor()
    // Offset: 0x28A44A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssetBundle* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AssetBundle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssetBundle*, creationType>()));
    }
    // static UnityEngine.AssetBundle LoadFromFile_Internal(System.String path, System.UInt32 crc, System.UInt64 offset)
    // Offset: 0x28A4510
    static ::UnityEngine::AssetBundle* LoadFromFile_Internal(::StringW path, uint crc, uint64_t offset);
    // static public UnityEngine.AssetBundle LoadFromFile(System.String path)
    // Offset: 0x28A4594
    static ::UnityEngine::AssetBundle* LoadFromFile(::StringW path);
    // public UnityEngine.Object LoadAsset(System.String name)
    // Offset: 0x28A45A0
    ::UnityEngine::Object* LoadAsset(::StringW name);
    // public T LoadAsset(System.String name)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    T LoadAsset(::StringW name) {
      static_assert(std::is_convertible_v<T, ::UnityEngine::Object*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AssetBundle::LoadAsset");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "LoadAsset", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(name)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___generic__method, name);
    }
    // public UnityEngine.Object LoadAsset(System.String name, System.Type type)
    // Offset: 0x28A4630
    ::UnityEngine::Object* LoadAsset(::StringW name, ::System::Type* type);
    // private UnityEngine.Object LoadAsset_Internal(System.String name, System.Type type)
    // Offset: 0x28A4730
    ::UnityEngine::Object* LoadAsset_Internal(::StringW name, ::System::Type* type);
    // public System.Void Unload(System.Boolean unloadAllLoadedObjects)
    // Offset: 0x28A47B4
    void Unload(bool unloadAllLoadedObjects);
    // public System.String[] GetAllAssetNames()
    // Offset: 0x28A4828
    ::ArrayW<::StringW> GetAllAssetNames();
    // public System.String[] GetAllScenePaths()
    // Offset: 0x28A4894
    ::ArrayW<::StringW> GetAllScenePaths();
  }; // UnityEngine.AssetBundle
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AssetBundle::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AssetBundle::LoadFromFile_Internal
// Il2CppName: LoadFromFile_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AssetBundle* (*)(::StringW, uint, uint64_t)>(&UnityEngine::AssetBundle::LoadFromFile_Internal)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* crc = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AssetBundle*), "LoadFromFile_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, crc, offset});
  }
};
// Writing MetadataGetter for method: UnityEngine::AssetBundle::LoadFromFile
// Il2CppName: LoadFromFile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AssetBundle* (*)(::StringW)>(&UnityEngine::AssetBundle::LoadFromFile)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AssetBundle*), "LoadFromFile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: UnityEngine::AssetBundle::LoadAsset
// Il2CppName: LoadAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object* (UnityEngine::AssetBundle::*)(::StringW)>(&UnityEngine::AssetBundle::LoadAsset)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AssetBundle*), "LoadAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: UnityEngine::AssetBundle::LoadAsset
// Il2CppName: LoadAsset
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::AssetBundle::LoadAsset
// Il2CppName: LoadAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object* (UnityEngine::AssetBundle::*)(::StringW, ::System::Type*)>(&UnityEngine::AssetBundle::LoadAsset)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AssetBundle*), "LoadAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, type});
  }
};
// Writing MetadataGetter for method: UnityEngine::AssetBundle::LoadAsset_Internal
// Il2CppName: LoadAsset_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object* (UnityEngine::AssetBundle::*)(::StringW, ::System::Type*)>(&UnityEngine::AssetBundle::LoadAsset_Internal)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AssetBundle*), "LoadAsset_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, type});
  }
};
// Writing MetadataGetter for method: UnityEngine::AssetBundle::Unload
// Il2CppName: Unload
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AssetBundle::*)(bool)>(&UnityEngine::AssetBundle::Unload)> {
  static const MethodInfo* get() {
    static auto* unloadAllLoadedObjects = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AssetBundle*), "Unload", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unloadAllLoadedObjects});
  }
};
// Writing MetadataGetter for method: UnityEngine::AssetBundle::GetAllAssetNames
// Il2CppName: GetAllAssetNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (UnityEngine::AssetBundle::*)()>(&UnityEngine::AssetBundle::GetAllAssetNames)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AssetBundle*), "GetAllAssetNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AssetBundle::GetAllScenePaths
// Il2CppName: GetAllScenePaths
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (UnityEngine::AssetBundle::*)()>(&UnityEngine::AssetBundle::GetAllScenePaths)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AssetBundle*), "GetAllScenePaths", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
