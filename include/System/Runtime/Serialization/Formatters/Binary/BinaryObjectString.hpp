// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.IStreamable
#include "System/Runtime/Serialization/Formatters/Binary/IStreamable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: __BinaryWriter
  class __BinaryWriter;
  // Forward declaring type: __BinaryParser
  class __BinaryParser;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: BinaryObjectString
  class BinaryObjectString;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString*, "System.Runtime.Serialization.Formatters.Binary", "BinaryObjectString");
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.BinaryObjectString
  // [TokenAttribute] Offset: FFFFFFFF
  class BinaryObjectString : public ::Il2CppObject/*, public ::System::Runtime::Serialization::Formatters::Binary::IStreamable*/ {
    public:
    public:
    // System.Int32 objectId
    // Size: 0x4
    // Offset: 0x10
    int objectId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: objectId and: value
    char __padding0[0x4] = {};
    // System.String value
    // Size: 0x8
    // Offset: 0x18
    ::StringW value;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Runtime::Serialization::Formatters::Binary::IStreamable
    operator ::System::Runtime::Serialization::Formatters::Binary::IStreamable() noexcept {
      return *reinterpret_cast<::System::Runtime::Serialization::Formatters::Binary::IStreamable*>(this);
    }
    // Get instance field reference: System.Int32 objectId
    [[deprecated("Use field access instead!")]] int& dyn_objectId();
    // Get instance field reference: System.String value
    [[deprecated("Use field access instead!")]] ::StringW& dyn_value();
    // System.Void Set(System.Int32 objectId, System.String value)
    // Offset: 0x16CA074
    void Set(int objectId, ::StringW value);
    // public System.Void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
    // Offset: 0x16CA080
    void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
    // public System.Void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
    // Offset: 0x16CA120
    void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);
    // public System.Void Dump()
    // Offset: 0x16CA1A4
    void Dump();
    // System.Void .ctor()
    // Offset: 0x16CA06C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BinaryObjectString* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BinaryObjectString*, creationType>()));
    }
  }; // System.Runtime.Serialization.Formatters.Binary.BinaryObjectString
  #pragma pack(pop)
  static check_size<sizeof(BinaryObjectString), 24 + sizeof(::StringW)> __System_Runtime_Serialization_Formatters_Binary_BinaryObjectStringSizeCheck;
  static_assert(sizeof(BinaryObjectString) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryObjectString::Set
// Il2CppName: Set
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::BinaryObjectString::*)(int, ::StringW)>(&System::Runtime::Serialization::Formatters::Binary::BinaryObjectString::Set)> {
  static const MethodInfo* get() {
    static auto* objectId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::BinaryObjectString*), "Set", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objectId, value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryObjectString::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::BinaryObjectString::*)(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*)>(&System::Runtime::Serialization::Formatters::Binary::BinaryObjectString::Write)> {
  static const MethodInfo* get() {
    static auto* sout = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "__BinaryWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::BinaryObjectString*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sout});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryObjectString::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::BinaryObjectString::*)(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*)>(&System::Runtime::Serialization::Formatters::Binary::BinaryObjectString::Read)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "__BinaryParser")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::BinaryObjectString*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryObjectString::Dump
// Il2CppName: Dump
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::BinaryObjectString::*)()>(&System::Runtime::Serialization::Formatters::Binary::BinaryObjectString::Dump)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::BinaryObjectString*), "Dump", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryObjectString::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
