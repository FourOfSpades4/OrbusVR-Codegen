// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Resources.IResourceReader
#include "System/Resources/IResourceReader.hpp"
// Including type: System.Resources.ResourceLocator
#include "System/Resources/ResourceLocator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Resources
namespace System::Resources {
  // Forward declaring type: ResourceTypeCode
  struct ResourceTypeCode;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: BinaryReader
  class BinaryReader;
  // Forward declaring type: UnmanagedMemoryStream
  class UnmanagedMemoryStream;
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: RuntimeType
  class RuntimeType;
}
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: BinaryFormatter
  class BinaryFormatter;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
  // Forward declaring type: IDictionaryEnumerator
  class IDictionaryEnumerator;
}
// Completed forward declares
// Type namespace: System.Resources
namespace System::Resources {
  // Forward declaring type: ResourceReader
  class ResourceReader;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Resources::ResourceReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::ResourceReader*, "System.Resources", "ResourceReader");
// Type namespace: System.Resources
namespace System::Resources {
  // Size: 0x7C
  #pragma pack(push, 1)
  // Autogenerated type: System.Resources.ResourceReader
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: A585F0
  class ResourceReader : public ::Il2CppObject/*, public ::System::Resources::IResourceReader*/ {
    public:
    // Nested type: ::System::Resources::ResourceReader::ResourceEnumerator
    class ResourceEnumerator;
    public:
    // private System.IO.BinaryReader _store
    // Size: 0x8
    // Offset: 0x10
    ::System::IO::BinaryReader* store;
    // Field size check
    static_assert(sizeof(::System::IO::BinaryReader*) == 0x8);
    // System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceLocator> _resCache
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>* resCache;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>*) == 0x8);
    // private System.Int64 _nameSectionOffset
    // Size: 0x8
    // Offset: 0x20
    int64_t nameSectionOffset;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 _dataSectionOffset
    // Size: 0x8
    // Offset: 0x28
    int64_t dataSectionOffset;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int32[] _nameHashes
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<int> nameHashes;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private System.Int32* _nameHashesPtr
    // Size: 0x8
    // Offset: 0x38
    int* nameHashesPtr;
    // Field size check
    static_assert(sizeof(int*) == 0x8);
    // private System.Int32[] _namePositions
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<int> namePositions;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private System.Int32* _namePositionsPtr
    // Size: 0x8
    // Offset: 0x48
    int* namePositionsPtr;
    // Field size check
    static_assert(sizeof(int*) == 0x8);
    // private System.RuntimeType[] _typeTable
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<::System::RuntimeType*> typeTable;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::RuntimeType*>) == 0x8);
    // private System.Int32[] _typeNamePositions
    // Size: 0x8
    // Offset: 0x58
    ::ArrayW<int> typeNamePositions;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private System.Runtime.Serialization.Formatters.Binary.BinaryFormatter _objFormatter
    // Size: 0x8
    // Offset: 0x60
    ::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* objFormatter;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter*) == 0x8);
    // private System.Int32 _numResources
    // Size: 0x4
    // Offset: 0x68
    int numResources;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: numResources and: ums
    char __padding11[0x4] = {};
    // private System.IO.UnmanagedMemoryStream _ums
    // Size: 0x8
    // Offset: 0x70
    ::System::IO::UnmanagedMemoryStream* ums;
    // Field size check
    static_assert(sizeof(::System::IO::UnmanagedMemoryStream*) == 0x8);
    // private System.Int32 _version
    // Size: 0x4
    // Offset: 0x78
    int version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Resources::IResourceReader
    operator ::System::Resources::IResourceReader() noexcept {
      return *reinterpret_cast<::System::Resources::IResourceReader*>(this);
    }
    // Get instance field reference: private System.IO.BinaryReader _store
    [[deprecated("Use field access instead!")]] ::System::IO::BinaryReader*& dyn__store();
    // Get instance field reference: System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceLocator> _resCache
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>*& dyn__resCache();
    // Get instance field reference: private System.Int64 _nameSectionOffset
    [[deprecated("Use field access instead!")]] int64_t& dyn__nameSectionOffset();
    // Get instance field reference: private System.Int64 _dataSectionOffset
    [[deprecated("Use field access instead!")]] int64_t& dyn__dataSectionOffset();
    // Get instance field reference: private System.Int32[] _nameHashes
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn__nameHashes();
    // Get instance field reference: private System.Int32* _nameHashesPtr
    [[deprecated("Use field access instead!")]] int*& dyn__nameHashesPtr();
    // Get instance field reference: private System.Int32[] _namePositions
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn__namePositions();
    // Get instance field reference: private System.Int32* _namePositionsPtr
    [[deprecated("Use field access instead!")]] int*& dyn__namePositionsPtr();
    // Get instance field reference: private System.RuntimeType[] _typeTable
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::RuntimeType*>& dyn__typeTable();
    // Get instance field reference: private System.Int32[] _typeNamePositions
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn__typeNamePositions();
    // Get instance field reference: private System.Runtime.Serialization.Formatters.Binary.BinaryFormatter _objFormatter
    [[deprecated("Use field access instead!")]] ::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter*& dyn__objFormatter();
    // Get instance field reference: private System.Int32 _numResources
    [[deprecated("Use field access instead!")]] int& dyn__numResources();
    // Get instance field reference: private System.IO.UnmanagedMemoryStream _ums
    [[deprecated("Use field access instead!")]] ::System::IO::UnmanagedMemoryStream*& dyn__ums();
    // Get instance field reference: private System.Int32 _version
    [[deprecated("Use field access instead!")]] int& dyn__version();
    // System.Void .ctor(System.IO.Stream stream, System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceLocator> resCache)
    // Offset: 0x141C5C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResourceReader* New_ctor(::System::IO::Stream* stream, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceLocator>* resCache) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Resources::ResourceReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResourceReader*, creationType>(stream, resCache)));
    }
    // public System.Void Close()
    // Offset: 0x141C81C
    void Close();
    // public System.Void Dispose()
    // Offset: 0x141C8B4
    void Dispose();
    // private System.Void Dispose(System.Boolean disposing)
    // Offset: 0x141C868
    void Dispose(bool disposing);
    // static System.Int32 ReadUnalignedI4(System.Int32* p)
    // Offset: 0x141C900
    static int ReadUnalignedI4(int* p);
    // private System.Void SkipString()
    // Offset: 0x141C908
    void SkipString();
    // private System.Int32 GetNameHash(System.Int32 index)
    // Offset: 0x141CA08
    int GetNameHash(int index);
    // private System.Int32 GetNamePosition(System.Int32 index)
    // Offset: 0x141CA70
    int GetNamePosition(int index);
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x141CBDC
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public System.Collections.IDictionaryEnumerator GetEnumerator()
    // Offset: 0x141CBE0
    ::System::Collections::IDictionaryEnumerator* GetEnumerator();
    // System.Resources.ResourceReader/ResourceEnumerator GetEnumeratorInternal()
    // Offset: 0x141CCE0
    ::System::Resources::ResourceReader::ResourceEnumerator* GetEnumeratorInternal();
    // System.Int32 FindPosForResource(System.String name)
    // Offset: 0x141CD4C
    int FindPosForResource(::StringW name);
    // private System.Boolean CompareStringEqualsName(System.String name)
    // Offset: 0x141D14C
    bool CompareStringEqualsName(::StringW name);
    // private System.String AllocateStringForNameIndex(System.Int32 index, out System.Int32 dataOffset)
    // Offset: 0x141D3A4
    ::StringW AllocateStringForNameIndex(int index, ByRef<int> dataOffset);
    // private System.Object GetValueForNameIndex(System.Int32 index)
    // Offset: 0x141DD4C
    ::Il2CppObject* GetValueForNameIndex(int index);
    // System.String LoadString(System.Int32 pos)
    // Offset: 0x141E2B8
    ::StringW LoadString(int pos);
    // System.Object LoadObject(System.Int32 pos)
    // Offset: 0x141EA60
    ::Il2CppObject* LoadObject(int pos);
    // System.Object LoadObject(System.Int32 pos, out System.Resources.ResourceTypeCode typeCode)
    // Offset: 0x141EA98
    ::Il2CppObject* LoadObject(int pos, ByRef<::System::Resources::ResourceTypeCode> typeCode);
    // System.Object LoadObjectV1(System.Int32 pos)
    // Offset: 0x141E038
    ::Il2CppObject* LoadObjectV1(int pos);
    // private System.Object _LoadObjectV1(System.Int32 pos)
    // Offset: 0x141EB38
    ::Il2CppObject* _LoadObjectV1(int pos);
    // System.Object LoadObjectV2(System.Int32 pos, out System.Resources.ResourceTypeCode typeCode)
    // Offset: 0x141E174
    ::Il2CppObject* LoadObjectV2(int pos, ByRef<::System::Resources::ResourceTypeCode> typeCode);
    // private System.Object _LoadObjectV2(System.Int32 pos, out System.Resources.ResourceTypeCode typeCode)
    // Offset: 0x141F5A8
    ::Il2CppObject* _LoadObjectV2(int pos, ByRef<::System::Resources::ResourceTypeCode> typeCode);
    // private System.Object DeserializeObject(System.Int32 typeIndex)
    // Offset: 0x141F38C
    ::Il2CppObject* DeserializeObject(int typeIndex);
    // private System.Void ReadResources()
    // Offset: 0x141C6A4
    void ReadResources();
    // private System.Void _ReadResources()
    // Offset: 0x141FD94
    void _ReadResources();
    // private System.RuntimeType FindType(System.Int32 typeIndex)
    // Offset: 0x141E5D0
    ::System::RuntimeType* FindType(int typeIndex);
  }; // System.Resources.ResourceReader
  #pragma pack(pop)
  static check_size<sizeof(ResourceReader), 120 + sizeof(int)> __System_Resources_ResourceReaderSizeCheck;
  static_assert(sizeof(ResourceReader) == 0x7C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Resources::ResourceReader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Resources::ResourceReader::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Resources::ResourceReader::*)()>(&System::Resources::ResourceReader::Close)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Resources::ResourceReader::*)()>(&System::Resources::ResourceReader::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Resources::ResourceReader::*)(bool)>(&System::Resources::ResourceReader::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::ReadUnalignedI4
// Il2CppName: ReadUnalignedI4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int*)>(&System::Resources::ResourceReader::ReadUnalignedI4)> {
  static const MethodInfo* get() {
    static auto* p = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Int32"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader*), "ReadUnalignedI4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::SkipString
// Il2CppName: SkipString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Resources::ResourceReader::*)()>(&System::Resources::ResourceReader::SkipString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader*), "SkipString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::GetNameHash
// Il2CppName: GetNameHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Resources::ResourceReader::*)(int)>(&System::Resources::ResourceReader::GetNameHash)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader*), "GetNameHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::GetNamePosition
// Il2CppName: GetNamePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Resources::ResourceReader::*)(int)>(&System::Resources::ResourceReader::GetNamePosition)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader*), "GetNamePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (System::Resources::ResourceReader::*)()>(&System::Resources::ResourceReader::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionaryEnumerator* (System::Resources::ResourceReader::*)()>(&System::Resources::ResourceReader::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::GetEnumeratorInternal
// Il2CppName: GetEnumeratorInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Resources::ResourceReader::ResourceEnumerator* (System::Resources::ResourceReader::*)()>(&System::Resources::ResourceReader::GetEnumeratorInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader*), "GetEnumeratorInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::FindPosForResource
// Il2CppName: FindPosForResource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Resources::ResourceReader::*)(::StringW)>(&System::Resources::ResourceReader::FindPosForResource)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader*), "FindPosForResource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::CompareStringEqualsName
// Il2CppName: CompareStringEqualsName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Resources::ResourceReader::*)(::StringW)>(&System::Resources::ResourceReader::CompareStringEqualsName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader*), "CompareStringEqualsName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::AllocateStringForNameIndex
// Il2CppName: AllocateStringForNameIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Resources::ResourceReader::*)(int, ByRef<int>)>(&System::Resources::ResourceReader::AllocateStringForNameIndex)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* dataOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader*), "AllocateStringForNameIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, dataOffset});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::GetValueForNameIndex
// Il2CppName: GetValueForNameIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Resources::ResourceReader::*)(int)>(&System::Resources::ResourceReader::GetValueForNameIndex)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader*), "GetValueForNameIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::LoadString
// Il2CppName: LoadString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Resources::ResourceReader::*)(int)>(&System::Resources::ResourceReader::LoadString)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader*), "LoadString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::LoadObject
// Il2CppName: LoadObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Resources::ResourceReader::*)(int)>(&System::Resources::ResourceReader::LoadObject)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader*), "LoadObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::LoadObject
// Il2CppName: LoadObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Resources::ResourceReader::*)(int, ByRef<::System::Resources::ResourceTypeCode>)>(&System::Resources::ResourceReader::LoadObject)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* typeCode = &::il2cpp_utils::GetClassFromName("System.Resources", "ResourceTypeCode")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader*), "LoadObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos, typeCode});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::LoadObjectV1
// Il2CppName: LoadObjectV1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Resources::ResourceReader::*)(int)>(&System::Resources::ResourceReader::LoadObjectV1)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader*), "LoadObjectV1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::_LoadObjectV1
// Il2CppName: _LoadObjectV1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Resources::ResourceReader::*)(int)>(&System::Resources::ResourceReader::_LoadObjectV1)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader*), "_LoadObjectV1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::LoadObjectV2
// Il2CppName: LoadObjectV2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Resources::ResourceReader::*)(int, ByRef<::System::Resources::ResourceTypeCode>)>(&System::Resources::ResourceReader::LoadObjectV2)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* typeCode = &::il2cpp_utils::GetClassFromName("System.Resources", "ResourceTypeCode")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader*), "LoadObjectV2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos, typeCode});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::_LoadObjectV2
// Il2CppName: _LoadObjectV2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Resources::ResourceReader::*)(int, ByRef<::System::Resources::ResourceTypeCode>)>(&System::Resources::ResourceReader::_LoadObjectV2)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* typeCode = &::il2cpp_utils::GetClassFromName("System.Resources", "ResourceTypeCode")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader*), "_LoadObjectV2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos, typeCode});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::DeserializeObject
// Il2CppName: DeserializeObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Resources::ResourceReader::*)(int)>(&System::Resources::ResourceReader::DeserializeObject)> {
  static const MethodInfo* get() {
    static auto* typeIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader*), "DeserializeObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{typeIndex});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::ReadResources
// Il2CppName: ReadResources
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Resources::ResourceReader::*)()>(&System::Resources::ResourceReader::ReadResources)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader*), "ReadResources", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::_ReadResources
// Il2CppName: _ReadResources
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Resources::ResourceReader::*)()>(&System::Resources::ResourceReader::_ReadResources)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader*), "_ReadResources", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceReader::FindType
// Il2CppName: FindType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::RuntimeType* (System::Resources::ResourceReader::*)(int)>(&System::Resources::ResourceReader::FindType)> {
  static const MethodInfo* get() {
    static auto* typeIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceReader*), "FindType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{typeIndex});
  }
};
