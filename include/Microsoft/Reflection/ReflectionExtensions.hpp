// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: TypeCode
  struct TypeCode;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Completed forward declares
// Type namespace: Microsoft.Reflection
namespace Microsoft::Reflection {
  // Forward declaring type: ReflectionExtensions
  class ReflectionExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Microsoft::Reflection::ReflectionExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Microsoft::Reflection::ReflectionExtensions*, "Microsoft.Reflection", "ReflectionExtensions");
// Type namespace: Microsoft.Reflection
namespace Microsoft::Reflection {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Microsoft.Reflection.ReflectionExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class ReflectionExtensions : public ::Il2CppObject {
    public:
    // static public System.Boolean IsEnum(System.Type type)
    // Offset: 0x1BC670C
    static bool IsEnum(::System::Type* type);
    // static public System.Boolean IsAbstract(System.Type type)
    // Offset: 0x1BC6740
    static bool IsAbstract(::System::Type* type);
    // static public System.Boolean IsSealed(System.Type type)
    // Offset: 0x1BC676C
    static bool IsSealed(::System::Type* type);
    // static public System.Type BaseType(System.Type type)
    // Offset: 0x1BC6798
    static ::System::Type* BaseType(::System::Type* type);
    // static public System.Reflection.Assembly Assembly(System.Type type)
    // Offset: 0x1BC67CC
    static ::System::Reflection::Assembly* Assembly(::System::Type* type);
    // static public System.TypeCode GetTypeCode(System.Type type)
    // Offset: 0x1BC6800
    static ::System::TypeCode GetTypeCode(::System::Type* type);
    // static public System.Boolean ReflectionOnly(System.Reflection.Assembly assm)
    // Offset: 0x1BC6868
    static bool ReflectionOnly(::System::Reflection::Assembly* assm);
  }; // Microsoft.Reflection.ReflectionExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Microsoft::Reflection::ReflectionExtensions::IsEnum
// Il2CppName: IsEnum
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&Microsoft::Reflection::ReflectionExtensions::IsEnum)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Reflection::ReflectionExtensions*), "IsEnum", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Microsoft::Reflection::ReflectionExtensions::IsAbstract
// Il2CppName: IsAbstract
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&Microsoft::Reflection::ReflectionExtensions::IsAbstract)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Reflection::ReflectionExtensions*), "IsAbstract", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Microsoft::Reflection::ReflectionExtensions::IsSealed
// Il2CppName: IsSealed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&Microsoft::Reflection::ReflectionExtensions::IsSealed)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Reflection::ReflectionExtensions*), "IsSealed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Microsoft::Reflection::ReflectionExtensions::BaseType
// Il2CppName: BaseType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Type*)>(&Microsoft::Reflection::ReflectionExtensions::BaseType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Reflection::ReflectionExtensions*), "BaseType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Microsoft::Reflection::ReflectionExtensions::Assembly
// Il2CppName: Assembly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Assembly* (*)(::System::Type*)>(&Microsoft::Reflection::ReflectionExtensions::Assembly)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Reflection::ReflectionExtensions*), "Assembly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Microsoft::Reflection::ReflectionExtensions::GetTypeCode
// Il2CppName: GetTypeCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TypeCode (*)(::System::Type*)>(&Microsoft::Reflection::ReflectionExtensions::GetTypeCode)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Reflection::ReflectionExtensions*), "GetTypeCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Microsoft::Reflection::ReflectionExtensions::ReflectionOnly
// Il2CppName: ReflectionOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Reflection::Assembly*)>(&Microsoft::Reflection::ReflectionExtensions::ReflectionOnly)> {
  static const MethodInfo* get() {
    static auto* assm = &::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Reflection::ReflectionExtensions*), "ReflectionOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assm});
  }
};
