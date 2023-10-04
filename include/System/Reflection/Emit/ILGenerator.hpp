// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.InteropServices._ILGenerator
#include "System/Runtime/InteropServices/_ILGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection::Emit
namespace System::Reflection::Emit {
  // Forward declaring type: LocalBuilder
  class LocalBuilder;
  // Forward declaring type: Label
  struct Label;
  // Forward declaring type: OpCode
  struct OpCode;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: ConstructorInfo
  class ConstructorInfo;
  // Forward declaring type: FieldInfo
  class FieldInfo;
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: System.Reflection.Emit
namespace System::Reflection::Emit {
  // Forward declaring type: ILGenerator
  class ILGenerator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Reflection::Emit::ILGenerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::Emit::ILGenerator*, "System.Reflection.Emit", "ILGenerator");
// Type namespace: System.Reflection.Emit
namespace System::Reflection::Emit {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.Emit.ILGenerator
  // [TokenAttribute] Offset: FFFFFFFF
  class ILGenerator : public ::Il2CppObject/*, public ::System::Runtime::InteropServices::_ILGenerator*/ {
    public:
    // Creating interface conversion operator: operator ::System::Runtime::InteropServices::_ILGenerator
    operator ::System::Runtime::InteropServices::_ILGenerator() noexcept {
      return *reinterpret_cast<::System::Runtime::InteropServices::_ILGenerator*>(this);
    }
    // public System.Reflection.Emit.LocalBuilder DeclareLocal(System.Type localType)
    // Offset: 0x1D6E22C
    ::System::Reflection::Emit::LocalBuilder* DeclareLocal(::System::Type* localType);
    // public System.Reflection.Emit.Label DefineLabel()
    // Offset: 0x1D6E294
    ::System::Reflection::Emit::Label DefineLabel();
    // public System.Void Emit(System.Reflection.Emit.OpCode opcode)
    // Offset: 0x1D6E2FC
    void Emit(::System::Reflection::Emit::OpCode opcode);
    // public System.Void Emit(System.Reflection.Emit.OpCode opcode, System.Byte arg)
    // Offset: 0x1D6E364
    void Emit(::System::Reflection::Emit::OpCode opcode, uint8_t arg);
    // public System.Void Emit(System.Reflection.Emit.OpCode opcode, System.Double arg)
    // Offset: 0x1D6E3CC
    void Emit(::System::Reflection::Emit::OpCode opcode, double arg);
    // public System.Void Emit(System.Reflection.Emit.OpCode opcode, System.Int16 arg)
    // Offset: 0x1D6E434
    void Emit(::System::Reflection::Emit::OpCode opcode, int16_t arg);
    // public System.Void Emit(System.Reflection.Emit.OpCode opcode, System.Int32 arg)
    // Offset: 0x1D6E49C
    void Emit(::System::Reflection::Emit::OpCode opcode, int arg);
    // public System.Void Emit(System.Reflection.Emit.OpCode opcode, System.Int64 arg)
    // Offset: 0x1D6E504
    void Emit(::System::Reflection::Emit::OpCode opcode, int64_t arg);
    // public System.Void Emit(System.Reflection.Emit.OpCode opcode, System.Reflection.ConstructorInfo con)
    // Offset: 0x1D6E56C
    void Emit(::System::Reflection::Emit::OpCode opcode, ::System::Reflection::ConstructorInfo* con);
    // public System.Void Emit(System.Reflection.Emit.OpCode opcode, System.Reflection.Emit.Label label)
    // Offset: 0x1D6E5D4
    void Emit(::System::Reflection::Emit::OpCode opcode, ::System::Reflection::Emit::Label label);
    // public System.Void Emit(System.Reflection.Emit.OpCode opcode, System.Reflection.Emit.LocalBuilder local)
    // Offset: 0x1D6E63C
    void Emit(::System::Reflection::Emit::OpCode opcode, ::System::Reflection::Emit::LocalBuilder* local);
    // public System.Void Emit(System.Reflection.Emit.OpCode opcode, System.Reflection.FieldInfo field)
    // Offset: 0x1D6E6A4
    void Emit(::System::Reflection::Emit::OpCode opcode, ::System::Reflection::FieldInfo* field);
    // public System.Void Emit(System.Reflection.Emit.OpCode opcode, System.Reflection.MethodInfo meth)
    // Offset: 0x1D6E70C
    void Emit(::System::Reflection::Emit::OpCode opcode, ::System::Reflection::MethodInfo* meth);
    // public System.Void Emit(System.Reflection.Emit.OpCode opcode, System.SByte arg)
    // Offset: 0x1D6E774
    void Emit(::System::Reflection::Emit::OpCode opcode, int8_t arg);
    // public System.Void Emit(System.Reflection.Emit.OpCode opcode, System.Single arg)
    // Offset: 0x1D6E7DC
    void Emit(::System::Reflection::Emit::OpCode opcode, float arg);
    // public System.Void Emit(System.Reflection.Emit.OpCode opcode, System.String str)
    // Offset: 0x1D6E844
    void Emit(::System::Reflection::Emit::OpCode opcode, ::StringW str);
    // public System.Void Emit(System.Reflection.Emit.OpCode opcode, System.Type cls)
    // Offset: 0x1D6E8AC
    void Emit(::System::Reflection::Emit::OpCode opcode, ::System::Type* cls);
    // public System.Void MarkLabel(System.Reflection.Emit.Label loc)
    // Offset: 0x1D6E914
    void MarkLabel(::System::Reflection::Emit::Label loc);
  }; // System.Reflection.Emit.ILGenerator
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::Emit::ILGenerator::DeclareLocal
// Il2CppName: DeclareLocal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Emit::LocalBuilder* (System::Reflection::Emit::ILGenerator::*)(::System::Type*)>(&System::Reflection::Emit::ILGenerator::DeclareLocal)> {
  static const MethodInfo* get() {
    static auto* localType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::ILGenerator*), "DeclareLocal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{localType});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::ILGenerator::DefineLabel
// Il2CppName: DefineLabel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Emit::Label (System::Reflection::Emit::ILGenerator::*)()>(&System::Reflection::Emit::ILGenerator::DefineLabel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::ILGenerator*), "DefineLabel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::ILGenerator::Emit
// Il2CppName: Emit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::Emit::ILGenerator::*)(::System::Reflection::Emit::OpCode)>(&System::Reflection::Emit::ILGenerator::Emit)> {
  static const MethodInfo* get() {
    static auto* opcode = &::il2cpp_utils::GetClassFromName("System.Reflection.Emit", "OpCode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::ILGenerator*), "Emit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{opcode});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::ILGenerator::Emit
// Il2CppName: Emit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::Emit::ILGenerator::*)(::System::Reflection::Emit::OpCode, uint8_t)>(&System::Reflection::Emit::ILGenerator::Emit)> {
  static const MethodInfo* get() {
    static auto* opcode = &::il2cpp_utils::GetClassFromName("System.Reflection.Emit", "OpCode")->byval_arg;
    static auto* arg = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::ILGenerator*), "Emit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{opcode, arg});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::ILGenerator::Emit
// Il2CppName: Emit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::Emit::ILGenerator::*)(::System::Reflection::Emit::OpCode, double)>(&System::Reflection::Emit::ILGenerator::Emit)> {
  static const MethodInfo* get() {
    static auto* opcode = &::il2cpp_utils::GetClassFromName("System.Reflection.Emit", "OpCode")->byval_arg;
    static auto* arg = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::ILGenerator*), "Emit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{opcode, arg});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::ILGenerator::Emit
// Il2CppName: Emit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::Emit::ILGenerator::*)(::System::Reflection::Emit::OpCode, int16_t)>(&System::Reflection::Emit::ILGenerator::Emit)> {
  static const MethodInfo* get() {
    static auto* opcode = &::il2cpp_utils::GetClassFromName("System.Reflection.Emit", "OpCode")->byval_arg;
    static auto* arg = &::il2cpp_utils::GetClassFromName("System", "Int16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::ILGenerator*), "Emit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{opcode, arg});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::ILGenerator::Emit
// Il2CppName: Emit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::Emit::ILGenerator::*)(::System::Reflection::Emit::OpCode, int)>(&System::Reflection::Emit::ILGenerator::Emit)> {
  static const MethodInfo* get() {
    static auto* opcode = &::il2cpp_utils::GetClassFromName("System.Reflection.Emit", "OpCode")->byval_arg;
    static auto* arg = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::ILGenerator*), "Emit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{opcode, arg});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::ILGenerator::Emit
// Il2CppName: Emit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::Emit::ILGenerator::*)(::System::Reflection::Emit::OpCode, int64_t)>(&System::Reflection::Emit::ILGenerator::Emit)> {
  static const MethodInfo* get() {
    static auto* opcode = &::il2cpp_utils::GetClassFromName("System.Reflection.Emit", "OpCode")->byval_arg;
    static auto* arg = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::ILGenerator*), "Emit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{opcode, arg});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::ILGenerator::Emit
// Il2CppName: Emit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::Emit::ILGenerator::*)(::System::Reflection::Emit::OpCode, ::System::Reflection::ConstructorInfo*)>(&System::Reflection::Emit::ILGenerator::Emit)> {
  static const MethodInfo* get() {
    static auto* opcode = &::il2cpp_utils::GetClassFromName("System.Reflection.Emit", "OpCode")->byval_arg;
    static auto* con = &::il2cpp_utils::GetClassFromName("System.Reflection", "ConstructorInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::ILGenerator*), "Emit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{opcode, con});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::ILGenerator::Emit
// Il2CppName: Emit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::Emit::ILGenerator::*)(::System::Reflection::Emit::OpCode, ::System::Reflection::Emit::Label)>(&System::Reflection::Emit::ILGenerator::Emit)> {
  static const MethodInfo* get() {
    static auto* opcode = &::il2cpp_utils::GetClassFromName("System.Reflection.Emit", "OpCode")->byval_arg;
    static auto* label = &::il2cpp_utils::GetClassFromName("System.Reflection.Emit", "Label")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::ILGenerator*), "Emit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{opcode, label});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::ILGenerator::Emit
// Il2CppName: Emit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::Emit::ILGenerator::*)(::System::Reflection::Emit::OpCode, ::System::Reflection::Emit::LocalBuilder*)>(&System::Reflection::Emit::ILGenerator::Emit)> {
  static const MethodInfo* get() {
    static auto* opcode = &::il2cpp_utils::GetClassFromName("System.Reflection.Emit", "OpCode")->byval_arg;
    static auto* local = &::il2cpp_utils::GetClassFromName("System.Reflection.Emit", "LocalBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::ILGenerator*), "Emit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{opcode, local});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::ILGenerator::Emit
// Il2CppName: Emit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::Emit::ILGenerator::*)(::System::Reflection::Emit::OpCode, ::System::Reflection::FieldInfo*)>(&System::Reflection::Emit::ILGenerator::Emit)> {
  static const MethodInfo* get() {
    static auto* opcode = &::il2cpp_utils::GetClassFromName("System.Reflection.Emit", "OpCode")->byval_arg;
    static auto* field = &::il2cpp_utils::GetClassFromName("System.Reflection", "FieldInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::ILGenerator*), "Emit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{opcode, field});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::ILGenerator::Emit
// Il2CppName: Emit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::Emit::ILGenerator::*)(::System::Reflection::Emit::OpCode, ::System::Reflection::MethodInfo*)>(&System::Reflection::Emit::ILGenerator::Emit)> {
  static const MethodInfo* get() {
    static auto* opcode = &::il2cpp_utils::GetClassFromName("System.Reflection.Emit", "OpCode")->byval_arg;
    static auto* meth = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::ILGenerator*), "Emit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{opcode, meth});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::ILGenerator::Emit
// Il2CppName: Emit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::Emit::ILGenerator::*)(::System::Reflection::Emit::OpCode, int8_t)>(&System::Reflection::Emit::ILGenerator::Emit)> {
  static const MethodInfo* get() {
    static auto* opcode = &::il2cpp_utils::GetClassFromName("System.Reflection.Emit", "OpCode")->byval_arg;
    static auto* arg = &::il2cpp_utils::GetClassFromName("System", "SByte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::ILGenerator*), "Emit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{opcode, arg});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::ILGenerator::Emit
// Il2CppName: Emit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::Emit::ILGenerator::*)(::System::Reflection::Emit::OpCode, float)>(&System::Reflection::Emit::ILGenerator::Emit)> {
  static const MethodInfo* get() {
    static auto* opcode = &::il2cpp_utils::GetClassFromName("System.Reflection.Emit", "OpCode")->byval_arg;
    static auto* arg = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::ILGenerator*), "Emit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{opcode, arg});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::ILGenerator::Emit
// Il2CppName: Emit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::Emit::ILGenerator::*)(::System::Reflection::Emit::OpCode, ::StringW)>(&System::Reflection::Emit::ILGenerator::Emit)> {
  static const MethodInfo* get() {
    static auto* opcode = &::il2cpp_utils::GetClassFromName("System.Reflection.Emit", "OpCode")->byval_arg;
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::ILGenerator*), "Emit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{opcode, str});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::ILGenerator::Emit
// Il2CppName: Emit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::Emit::ILGenerator::*)(::System::Reflection::Emit::OpCode, ::System::Type*)>(&System::Reflection::Emit::ILGenerator::Emit)> {
  static const MethodInfo* get() {
    static auto* opcode = &::il2cpp_utils::GetClassFromName("System.Reflection.Emit", "OpCode")->byval_arg;
    static auto* cls = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::ILGenerator*), "Emit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{opcode, cls});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::ILGenerator::MarkLabel
// Il2CppName: MarkLabel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::Emit::ILGenerator::*)(::System::Reflection::Emit::Label)>(&System::Reflection::Emit::ILGenerator::MarkLabel)> {
  static const MethodInfo* get() {
    static auto* loc = &::il2cpp_utils::GetClassFromName("System.Reflection.Emit", "Label")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::ILGenerator*), "MarkLabel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{loc});
  }
};
