// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Wrench
namespace Wrench {
  // Forward declaring type: MLVariableElement
  class MLVariableElement;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Wrench::MLVariableElement);
DEFINE_IL2CPP_ARG_TYPE(::Wrench::MLVariableElement*, "Wrench", "MLVariableElement");
// Type namespace: Wrench
namespace Wrench {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Wrench.MLVariableElement
  // [TokenAttribute] Offset: FFFFFFFF
  class MLVariableElement {
    public:
    // public System.String GetArgument(System.Int32 id)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW GetArgument(int id);
    // public System.Void LoadNow(System.Boolean innerElement)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void LoadNow(bool innerElement);
    // public System.Void SetVariableName(System.String name)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetVariableName(::StringW name);
    // public System.Void SetArguments(System.String[] arguments)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetArguments(::ArrayW<::StringW> arguments);
  }; // Wrench.MLVariableElement
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Wrench::MLVariableElement::GetArgument
// Il2CppName: GetArgument
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Wrench::MLVariableElement::*)(int)>(&Wrench::MLVariableElement::GetArgument)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Wrench::MLVariableElement*), "GetArgument", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id});
  }
};
// Writing MetadataGetter for method: Wrench::MLVariableElement::LoadNow
// Il2CppName: LoadNow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Wrench::MLVariableElement::*)(bool)>(&Wrench::MLVariableElement::LoadNow)> {
  static const MethodInfo* get() {
    static auto* innerElement = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Wrench::MLVariableElement*), "LoadNow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{innerElement});
  }
};
// Writing MetadataGetter for method: Wrench::MLVariableElement::SetVariableName
// Il2CppName: SetVariableName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Wrench::MLVariableElement::*)(::StringW)>(&Wrench::MLVariableElement::SetVariableName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Wrench::MLVariableElement*), "SetVariableName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: Wrench::MLVariableElement::SetArguments
// Il2CppName: SetArguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Wrench::MLVariableElement::*)(::ArrayW<::StringW>)>(&Wrench::MLVariableElement::SetArguments)> {
  static const MethodInfo* get() {
    static auto* arguments = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Wrench::MLVariableElement*), "SetArguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{arguments});
  }
};