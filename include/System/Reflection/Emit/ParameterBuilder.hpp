// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.InteropServices._ParameterBuilder
#include "System/Runtime/InteropServices/_ParameterBuilder.hpp"
// Completed includes
// Type namespace: System.Reflection.Emit
namespace System::Reflection::Emit {
  // Forward declaring type: ParameterBuilder
  class ParameterBuilder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Reflection::Emit::ParameterBuilder);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::Emit::ParameterBuilder*, "System.Reflection.Emit", "ParameterBuilder");
// Type namespace: System.Reflection.Emit
namespace System::Reflection::Emit {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.Emit.ParameterBuilder
  // [TokenAttribute] Offset: FFFFFFFF
  class ParameterBuilder : public ::Il2CppObject/*, public ::System::Runtime::InteropServices::_ParameterBuilder*/ {
    public:
    // Creating interface conversion operator: operator ::System::Runtime::InteropServices::_ParameterBuilder
    operator ::System::Runtime::InteropServices::_ParameterBuilder() noexcept {
      return *reinterpret_cast<::System::Runtime::InteropServices::_ParameterBuilder*>(this);
    }
    // public System.Int32 get_Position()
    // Offset: 0x1D74D70
    int get_Position();
  }; // System.Reflection.Emit.ParameterBuilder
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::Emit::ParameterBuilder::get_Position
// Il2CppName: get_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Reflection::Emit::ParameterBuilder::*)()>(&System::Reflection::Emit::ParameterBuilder::get_Position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::ParameterBuilder*), "get_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
