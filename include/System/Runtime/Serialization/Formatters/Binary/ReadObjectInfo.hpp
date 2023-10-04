// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
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
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: ObjectManager
  class ObjectManager;
  // Forward declaring type: ISerializationSurrogate
  class ISerializationSurrogate;
  // Forward declaring type: IFormatterConverter
  class IFormatterConverter;
  // Forward declaring type: ISurrogateSelector
  class ISurrogateSelector;
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: SerObjectInfoCache
  class SerObjectInfoCache;
  // Forward declaring type: SerObjectInfoInit
  class SerObjectInfoInit;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MemberInfo
  class MemberInfo;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: ReadObjectInfo
  class ReadObjectInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*, "System.Runtime.Serialization.Formatters.Binary", "ReadObjectInfo");
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class ReadObjectInfo : public ::Il2CppObject {
    public:
    public:
    // System.Int32 objectInfoId
    // Size: 0x4
    // Offset: 0x10
    int objectInfoId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: objectInfoId and: objectType
    char __padding0[0x4] = {};
    // System.Type objectType
    // Size: 0x8
    // Offset: 0x18
    ::System::Type* objectType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // System.Runtime.Serialization.ObjectManager objectManager
    // Size: 0x8
    // Offset: 0x20
    ::System::Runtime::Serialization::ObjectManager* objectManager;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::ObjectManager*) == 0x8);
    // System.Int32 count
    // Size: 0x4
    // Offset: 0x28
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Boolean isSi
    // Size: 0x1
    // Offset: 0x2C
    bool isSi;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean isNamed
    // Size: 0x1
    // Offset: 0x2D
    bool isNamed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean isTyped
    // Size: 0x1
    // Offset: 0x2E
    bool isTyped;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean bSimpleAssembly
    // Size: 0x1
    // Offset: 0x2F
    bool bSimpleAssembly;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Runtime.Serialization.Formatters.Binary.SerObjectInfoCache cache
    // Size: 0x8
    // Offset: 0x30
    ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* cache;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*) == 0x8);
    // System.String[] wireMemberNames
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::StringW> wireMemberNames;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // System.Type[] wireMemberTypes
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::System::Type*> wireMemberTypes;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Type*>) == 0x8);
    // private System.Int32 lastPosition
    // Size: 0x4
    // Offset: 0x48
    int lastPosition;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: lastPosition and: serializationSurrogate
    char __padding11[0x4] = {};
    // System.Runtime.Serialization.ISerializationSurrogate serializationSurrogate
    // Size: 0x8
    // Offset: 0x50
    ::System::Runtime::Serialization::ISerializationSurrogate* serializationSurrogate;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::ISerializationSurrogate*) == 0x8);
    // System.Runtime.Serialization.StreamingContext context
    // Size: 0xC
    // Offset: 0x58
    ::System::Runtime::Serialization::StreamingContext context;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::StreamingContext) == 0xC);
    // Padding between fields: context and: memberTypesList
    char __padding13[0x4] = {};
    // System.Collections.Generic.List`1<System.Type> memberTypesList
    // Size: 0x8
    // Offset: 0x68
    ::System::Collections::Generic::List_1<::System::Type*>* memberTypesList;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::System::Type*>*) == 0x8);
    // System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit
    // Size: 0x8
    // Offset: 0x70
    ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*) == 0x8);
    // System.Runtime.Serialization.IFormatterConverter formatterConverter
    // Size: 0x8
    // Offset: 0x78
    ::System::Runtime::Serialization::IFormatterConverter* formatterConverter;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::IFormatterConverter*) == 0x8);
    public:
    // Get static field: static System.Int32 readObjectInfoCounter
    static int _get_readObjectInfoCounter();
    // Set static field: static System.Int32 readObjectInfoCounter
    static void _set_readObjectInfoCounter(int value);
    // Get instance field reference: System.Int32 objectInfoId
    [[deprecated("Use field access instead!")]] int& dyn_objectInfoId();
    // Get instance field reference: System.Type objectType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_objectType();
    // Get instance field reference: System.Runtime.Serialization.ObjectManager objectManager
    [[deprecated("Use field access instead!")]] ::System::Runtime::Serialization::ObjectManager*& dyn_objectManager();
    // Get instance field reference: System.Int32 count
    [[deprecated("Use field access instead!")]] int& dyn_count();
    // Get instance field reference: System.Boolean isSi
    [[deprecated("Use field access instead!")]] bool& dyn_isSi();
    // Get instance field reference: System.Boolean isNamed
    [[deprecated("Use field access instead!")]] bool& dyn_isNamed();
    // Get instance field reference: System.Boolean isTyped
    [[deprecated("Use field access instead!")]] bool& dyn_isTyped();
    // Get instance field reference: System.Boolean bSimpleAssembly
    [[deprecated("Use field access instead!")]] bool& dyn_bSimpleAssembly();
    // Get instance field reference: System.Runtime.Serialization.Formatters.Binary.SerObjectInfoCache cache
    [[deprecated("Use field access instead!")]] ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*& dyn_cache();
    // Get instance field reference: System.String[] wireMemberNames
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_wireMemberNames();
    // Get instance field reference: System.Type[] wireMemberTypes
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Type*>& dyn_wireMemberTypes();
    // Get instance field reference: private System.Int32 lastPosition
    [[deprecated("Use field access instead!")]] int& dyn_lastPosition();
    // Get instance field reference: System.Runtime.Serialization.ISerializationSurrogate serializationSurrogate
    [[deprecated("Use field access instead!")]] ::System::Runtime::Serialization::ISerializationSurrogate*& dyn_serializationSurrogate();
    // Get instance field reference: System.Runtime.Serialization.StreamingContext context
    [[deprecated("Use field access instead!")]] ::System::Runtime::Serialization::StreamingContext& dyn_context();
    // Get instance field reference: System.Collections.Generic.List`1<System.Type> memberTypesList
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::System::Type*>*& dyn_memberTypesList();
    // Get instance field reference: System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit
    [[deprecated("Use field access instead!")]] ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*& dyn_serObjectInfoInit();
    // Get instance field reference: System.Runtime.Serialization.IFormatterConverter formatterConverter
    [[deprecated("Use field access instead!")]] ::System::Runtime::Serialization::IFormatterConverter*& dyn_formatterConverter();
    // System.Void ObjectEnd()
    // Offset: 0x16D2578
    void ObjectEnd();
    // System.Void PrepareForReuse()
    // Offset: 0x16CED18
    void PrepareForReuse();
    // static System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo Create(System.Type objectType, System.Runtime.Serialization.ISurrogateSelector surrogateSelector, System.Runtime.Serialization.StreamingContext context, System.Runtime.Serialization.ObjectManager objectManager, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, System.Runtime.Serialization.IFormatterConverter converter, System.Boolean bSimpleAssembly)
    // Offset: 0x16D013C
    static ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* Create(::System::Type* objectType, ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, ::System::Runtime::Serialization::StreamingContext context, ::System::Runtime::Serialization::ObjectManager* objectManager, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, ::System::Runtime::Serialization::IFormatterConverter* converter, bool bSimpleAssembly);
    // System.Void Init(System.Type objectType, System.Runtime.Serialization.ISurrogateSelector surrogateSelector, System.Runtime.Serialization.StreamingContext context, System.Runtime.Serialization.ObjectManager objectManager, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, System.Runtime.Serialization.IFormatterConverter converter, System.Boolean bSimpleAssembly)
    // Offset: 0x16D84CC
    void Init(::System::Type* objectType, ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, ::System::Runtime::Serialization::StreamingContext context, ::System::Runtime::Serialization::ObjectManager* objectManager, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, ::System::Runtime::Serialization::IFormatterConverter* converter, bool bSimpleAssembly);
    // static System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo Create(System.Type objectType, System.String[] memberNames, System.Type[] memberTypes, System.Runtime.Serialization.ISurrogateSelector surrogateSelector, System.Runtime.Serialization.StreamingContext context, System.Runtime.Serialization.ObjectManager objectManager, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, System.Runtime.Serialization.IFormatterConverter converter, System.Boolean bSimpleAssembly)
    // Offset: 0x16D01D4
    static ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* Create(::System::Type* objectType, ::ArrayW<::StringW> memberNames, ::ArrayW<::System::Type*> memberTypes, ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, ::System::Runtime::Serialization::StreamingContext context, ::System::Runtime::Serialization::ObjectManager* objectManager, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, ::System::Runtime::Serialization::IFormatterConverter* converter, bool bSimpleAssembly);
    // System.Void Init(System.Type objectType, System.String[] memberNames, System.Type[] memberTypes, System.Runtime.Serialization.ISurrogateSelector surrogateSelector, System.Runtime.Serialization.StreamingContext context, System.Runtime.Serialization.ObjectManager objectManager, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, System.Runtime.Serialization.IFormatterConverter converter, System.Boolean bSimpleAssembly)
    // Offset: 0x16D86B0
    void Init(::System::Type* objectType, ::ArrayW<::StringW> memberNames, ::ArrayW<::System::Type*> memberTypes, ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, ::System::Runtime::Serialization::StreamingContext context, ::System::Runtime::Serialization::ObjectManager* objectManager, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, ::System::Runtime::Serialization::IFormatterConverter* converter, bool bSimpleAssembly);
    // private System.Void InitReadConstructor(System.Type objectType, System.Runtime.Serialization.ISurrogateSelector surrogateSelector, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x16D84E8
    void InitReadConstructor(::System::Type* objectType, ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, ::System::Runtime::Serialization::StreamingContext context);
    // private System.Void InitSiRead()
    // Offset: 0x16D876C
    void InitSiRead();
    // private System.Void InitNoMembers()
    // Offset: 0x16D8700
    void InitNoMembers();
    // private System.Void InitMemberInfo()
    // Offset: 0x16D87E0
    void InitMemberInfo();
    // System.Reflection.MemberInfo GetMemberInfo(System.String name)
    // Offset: 0x16D4134
    ::System::Reflection::MemberInfo* GetMemberInfo(::StringW name);
    // System.Type GetType(System.String name)
    // Offset: 0x16D3BC0
    ::System::Type* GetType(::StringW name);
    // System.Void AddValue(System.String name, System.Object value, ref System.Runtime.Serialization.SerializationInfo si, ref System.Object[] memberData)
    // Offset: 0x16D3D70
    void AddValue(::StringW name, ::Il2CppObject* value, ByRef<::System::Runtime::Serialization::SerializationInfo*> si, ByRef<::ArrayW<::Il2CppObject*>> memberData);
    // System.Void InitDataStore(ref System.Runtime.Serialization.SerializationInfo si, ref System.Object[] memberData)
    // Offset: 0x16CEC4C
    void InitDataStore(ByRef<::System::Runtime::Serialization::SerializationInfo*> si, ByRef<::ArrayW<::Il2CppObject*>> memberData);
    // System.Void RecordFixup(System.Int64 objectId, System.String name, System.Int64 idRef)
    // Offset: 0x16D3E90
    void RecordFixup(int64_t objectId, ::StringW name, int64_t idRef);
    // System.Void PopulateObjectMembers(System.Object obj, System.Object[] memberData)
    // Offset: 0x16D2140
    void PopulateObjectMembers(::Il2CppObject* obj, ::ArrayW<::Il2CppObject*> memberData);
    // private System.Int32 Position(System.String name)
    // Offset: 0x16D8D80
    int Position(::StringW name);
    // System.Type[] GetMemberTypes(System.String[] inMemberNames, System.Type objectType)
    // Offset: 0x16CDFB4
    ::ArrayW<::System::Type*> GetMemberTypes(::ArrayW<::StringW> inMemberNames, ::System::Type* objectType);
    // System.Type GetMemberType(System.Reflection.MemberInfo objMember)
    // Offset: 0x16D8BB4
    ::System::Type* GetMemberType(::System::Reflection::MemberInfo* objMember);
    // static private System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo GetObjectInfo(System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit)
    // Offset: 0x16D844C
    static ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* GetObjectInfo(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit);
    // System.Void .ctor()
    // Offset: 0x16D8444
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReadObjectInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReadObjectInfo*, creationType>()));
    }
  }; // System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo
  #pragma pack(pop)
  static check_size<sizeof(ReadObjectInfo), 120 + sizeof(::System::Runtime::Serialization::IFormatterConverter*)> __System_Runtime_Serialization_Formatters_Binary_ReadObjectInfoSizeCheck;
  static_assert(sizeof(ReadObjectInfo) == 0x80);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::ObjectEnd
// Il2CppName: ObjectEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)()>(&System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::ObjectEnd)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*), "ObjectEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::PrepareForReuse
// Il2CppName: PrepareForReuse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)()>(&System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::PrepareForReuse)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*), "PrepareForReuse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* (*)(::System::Type*, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::ObjectManager*, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, ::System::Runtime::Serialization::IFormatterConverter*, bool)>(&System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::Create)> {
  static const MethodInfo* get() {
    static auto* objectType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* surrogateSelector = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "ISurrogateSelector")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    static auto* objectManager = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "ObjectManager")->byval_arg;
    static auto* serObjectInfoInit = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "SerObjectInfoInit")->byval_arg;
    static auto* converter = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "IFormatterConverter")->byval_arg;
    static auto* bSimpleAssembly = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objectType, surrogateSelector, context, objectManager, serObjectInfoInit, converter, bSimpleAssembly});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)(::System::Type*, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::ObjectManager*, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, ::System::Runtime::Serialization::IFormatterConverter*, bool)>(&System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::Init)> {
  static const MethodInfo* get() {
    static auto* objectType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* surrogateSelector = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "ISurrogateSelector")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    static auto* objectManager = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "ObjectManager")->byval_arg;
    static auto* serObjectInfoInit = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "SerObjectInfoInit")->byval_arg;
    static auto* converter = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "IFormatterConverter")->byval_arg;
    static auto* bSimpleAssembly = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objectType, surrogateSelector, context, objectManager, serObjectInfoInit, converter, bSimpleAssembly});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* (*)(::System::Type*, ::ArrayW<::StringW>, ::ArrayW<::System::Type*>, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::ObjectManager*, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, ::System::Runtime::Serialization::IFormatterConverter*, bool)>(&System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::Create)> {
  static const MethodInfo* get() {
    static auto* objectType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* memberNames = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    static auto* memberTypes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    static auto* surrogateSelector = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "ISurrogateSelector")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    static auto* objectManager = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "ObjectManager")->byval_arg;
    static auto* serObjectInfoInit = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "SerObjectInfoInit")->byval_arg;
    static auto* converter = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "IFormatterConverter")->byval_arg;
    static auto* bSimpleAssembly = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objectType, memberNames, memberTypes, surrogateSelector, context, objectManager, serObjectInfoInit, converter, bSimpleAssembly});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)(::System::Type*, ::ArrayW<::StringW>, ::ArrayW<::System::Type*>, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::ObjectManager*, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, ::System::Runtime::Serialization::IFormatterConverter*, bool)>(&System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::Init)> {
  static const MethodInfo* get() {
    static auto* objectType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* memberNames = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    static auto* memberTypes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    static auto* surrogateSelector = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "ISurrogateSelector")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    static auto* objectManager = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "ObjectManager")->byval_arg;
    static auto* serObjectInfoInit = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "SerObjectInfoInit")->byval_arg;
    static auto* converter = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "IFormatterConverter")->byval_arg;
    static auto* bSimpleAssembly = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objectType, memberNames, memberTypes, surrogateSelector, context, objectManager, serObjectInfoInit, converter, bSimpleAssembly});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::InitReadConstructor
// Il2CppName: InitReadConstructor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)(::System::Type*, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext)>(&System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::InitReadConstructor)> {
  static const MethodInfo* get() {
    static auto* objectType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* surrogateSelector = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "ISurrogateSelector")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*), "InitReadConstructor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objectType, surrogateSelector, context});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::InitSiRead
// Il2CppName: InitSiRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)()>(&System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::InitSiRead)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*), "InitSiRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::InitNoMembers
// Il2CppName: InitNoMembers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)()>(&System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::InitNoMembers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*), "InitNoMembers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::InitMemberInfo
// Il2CppName: InitMemberInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)()>(&System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::InitMemberInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*), "InitMemberInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::GetMemberInfo
// Il2CppName: GetMemberInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MemberInfo* (System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)(::StringW)>(&System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::GetMemberInfo)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*), "GetMemberInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::GetType
// Il2CppName: GetType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)(::StringW)>(&System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::GetType)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*), "GetType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::AddValue
// Il2CppName: AddValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)(::StringW, ::Il2CppObject*, ByRef<::System::Runtime::Serialization::SerializationInfo*>, ByRef<::ArrayW<::Il2CppObject*>>)>(&System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::AddValue)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* si = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->this_arg;
    static auto* memberData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*), "AddValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value, si, memberData});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::InitDataStore
// Il2CppName: InitDataStore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)(ByRef<::System::Runtime::Serialization::SerializationInfo*>, ByRef<::ArrayW<::Il2CppObject*>>)>(&System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::InitDataStore)> {
  static const MethodInfo* get() {
    static auto* si = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->this_arg;
    static auto* memberData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*), "InitDataStore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{si, memberData});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::RecordFixup
// Il2CppName: RecordFixup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)(int64_t, ::StringW, int64_t)>(&System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::RecordFixup)> {
  static const MethodInfo* get() {
    static auto* objectId = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* idRef = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*), "RecordFixup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objectId, name, idRef});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::PopulateObjectMembers
// Il2CppName: PopulateObjectMembers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)(::Il2CppObject*, ::ArrayW<::Il2CppObject*>)>(&System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::PopulateObjectMembers)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* memberData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*), "PopulateObjectMembers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, memberData});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::Position
// Il2CppName: Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)(::StringW)>(&System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::Position)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*), "Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::GetMemberTypes
// Il2CppName: GetMemberTypes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type*> (System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)(::ArrayW<::StringW>, ::System::Type*)>(&System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::GetMemberTypes)> {
  static const MethodInfo* get() {
    static auto* inMemberNames = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    static auto* objectType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*), "GetMemberTypes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inMemberNames, objectType});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::GetMemberType
// Il2CppName: GetMemberType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)(::System::Reflection::MemberInfo*)>(&System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::GetMemberType)> {
  static const MethodInfo* get() {
    static auto* objMember = &::il2cpp_utils::GetClassFromName("System.Reflection", "MemberInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*), "GetMemberType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objMember});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::GetObjectInfo
// Il2CppName: GetObjectInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* (*)(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*)>(&System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::GetObjectInfo)> {
  static const MethodInfo* get() {
    static auto* serObjectInfoInit = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "SerObjectInfoInit")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*), "GetObjectInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serObjectInfoInit});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
