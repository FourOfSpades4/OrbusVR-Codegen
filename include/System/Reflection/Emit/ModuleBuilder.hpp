// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Reflection.Module
#include "System/Reflection/Module.hpp"
// Including type: System.Runtime.InteropServices._ModuleBuilder
#include "System/Runtime/InteropServices/_ModuleBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection::Emit
namespace System::Reflection::Emit {
  // Forward declaring type: TypeBuilder
  class TypeBuilder;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: TypeAttributes
  struct TypeAttributes;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Reflection.Emit
namespace System::Reflection::Emit {
  // Forward declaring type: ModuleBuilder
  class ModuleBuilder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Reflection::Emit::ModuleBuilder);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::Emit::ModuleBuilder*, "System.Reflection.Emit", "ModuleBuilder");
// Type namespace: System.Reflection.Emit
namespace System::Reflection::Emit {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.Emit.ModuleBuilder
  // [TokenAttribute] Offset: FFFFFFFF
  class ModuleBuilder : public ::System::Reflection::Module/*, public ::System::Runtime::InteropServices::_ModuleBuilder*/ {
    public:
    // Creating interface conversion operator: operator ::System::Runtime::InteropServices::_ModuleBuilder
    operator ::System::Runtime::InteropServices::_ModuleBuilder() noexcept {
      return *reinterpret_cast<::System::Runtime::InteropServices::_ModuleBuilder*>(this);
    }
    // public System.Reflection.Emit.TypeBuilder DefineType(System.String name, System.Reflection.TypeAttributes attr, System.Type parent)
    // Offset: 0x1D6F09C
    ::System::Reflection::Emit::TypeBuilder* DefineType(::StringW name, ::System::Reflection::TypeAttributes attr, ::System::Type* parent);
  }; // System.Reflection.Emit.ModuleBuilder
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::Emit::ModuleBuilder::DefineType
// Il2CppName: DefineType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Emit::TypeBuilder* (System::Reflection::Emit::ModuleBuilder::*)(::StringW, ::System::Reflection::TypeAttributes, ::System::Type*)>(&System::Reflection::Emit::ModuleBuilder::DefineType)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* attr = &::il2cpp_utils::GetClassFromName("System.Reflection", "TypeAttributes")->byval_arg;
    static auto* parent = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::ModuleBuilder*), "DefineType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, attr, parent});
  }
};
