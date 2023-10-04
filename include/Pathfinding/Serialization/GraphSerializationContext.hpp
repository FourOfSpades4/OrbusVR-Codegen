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
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: GraphNode
  class GraphNode;
  // Forward declaring type: Int3
  struct Int3;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: BinaryReader
  class BinaryReader;
  // Forward declaring type: BinaryWriter
  class BinaryWriter;
}
// Forward declaring namespace: Pathfinding::Serialization
namespace Pathfinding::Serialization {
  // Forward declaring type: GraphMeta
  class GraphMeta;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: Pathfinding.Serialization
namespace Pathfinding::Serialization {
  // Forward declaring type: GraphSerializationContext
  class GraphSerializationContext;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::Serialization::GraphSerializationContext);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Serialization::GraphSerializationContext*, "Pathfinding.Serialization", "GraphSerializationContext");
// Type namespace: Pathfinding.Serialization
namespace Pathfinding::Serialization {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Serialization.GraphSerializationContext
  // [TokenAttribute] Offset: FFFFFFFF
  class GraphSerializationContext : public ::Il2CppObject {
    public:
    public:
    // private readonly Pathfinding.GraphNode[] id2NodeMapping
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::Pathfinding::GraphNode*> id2NodeMapping;
    // Field size check
    static_assert(sizeof(::ArrayW<::Pathfinding::GraphNode*>) == 0x8);
    // public readonly System.IO.BinaryReader reader
    // Size: 0x8
    // Offset: 0x18
    ::System::IO::BinaryReader* reader;
    // Field size check
    static_assert(sizeof(::System::IO::BinaryReader*) == 0x8);
    // public readonly System.IO.BinaryWriter writer
    // Size: 0x8
    // Offset: 0x20
    ::System::IO::BinaryWriter* writer;
    // Field size check
    static_assert(sizeof(::System::IO::BinaryWriter*) == 0x8);
    // public readonly System.UInt32 graphIndex
    // Size: 0x4
    // Offset: 0x28
    uint graphIndex;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: graphIndex and: meta
    char __padding3[0x4] = {};
    // public readonly Pathfinding.Serialization.GraphMeta meta
    // Size: 0x8
    // Offset: 0x30
    ::Pathfinding::Serialization::GraphMeta* meta;
    // Field size check
    static_assert(sizeof(::Pathfinding::Serialization::GraphMeta*) == 0x8);
    public:
    // Get instance field reference: private readonly Pathfinding.GraphNode[] id2NodeMapping
    [[deprecated("Use field access instead!")]] ::ArrayW<::Pathfinding::GraphNode*>& dyn_id2NodeMapping();
    // Get instance field reference: public readonly System.IO.BinaryReader reader
    [[deprecated("Use field access instead!")]] ::System::IO::BinaryReader*& dyn_reader();
    // Get instance field reference: public readonly System.IO.BinaryWriter writer
    [[deprecated("Use field access instead!")]] ::System::IO::BinaryWriter*& dyn_writer();
    // Get instance field reference: public readonly System.UInt32 graphIndex
    [[deprecated("Use field access instead!")]] uint& dyn_graphIndex();
    // Get instance field reference: public readonly Pathfinding.Serialization.GraphMeta meta
    [[deprecated("Use field access instead!")]] ::Pathfinding::Serialization::GraphMeta*& dyn_meta();
    // public System.Void .ctor(System.IO.BinaryReader reader, Pathfinding.GraphNode[] id2NodeMapping, System.UInt32 graphIndex, Pathfinding.Serialization.GraphMeta meta)
    // Offset: 0x16BA3C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GraphSerializationContext* New_ctor(::System::IO::BinaryReader* reader, ::ArrayW<::Pathfinding::GraphNode*> id2NodeMapping, uint graphIndex, ::Pathfinding::Serialization::GraphMeta* meta) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Serialization::GraphSerializationContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GraphSerializationContext*, creationType>(reader, id2NodeMapping, graphIndex, meta)));
    }
    // public System.Void .ctor(System.IO.BinaryWriter writer)
    // Offset: 0x16B8364
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GraphSerializationContext* New_ctor(::System::IO::BinaryWriter* writer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Serialization::GraphSerializationContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GraphSerializationContext*, creationType>(writer)));
    }
    // public System.Void SerializeNodeReference(Pathfinding.GraphNode node)
    // Offset: 0x16A281C
    void SerializeNodeReference(::Pathfinding::GraphNode* node);
    // public Pathfinding.GraphNode DeserializeNodeReference()
    // Offset: 0x16A2DE0
    ::Pathfinding::GraphNode* DeserializeNodeReference();
    // public System.Void SerializeVector3(UnityEngine.Vector3 v)
    // Offset: 0x16A2878
    void SerializeVector3(::UnityEngine::Vector3 v);
    // public UnityEngine.Vector3 DeserializeVector3()
    // Offset: 0x16A2F4C
    ::UnityEngine::Vector3 DeserializeVector3();
    // public System.Void SerializeInt3(Pathfinding.Int3 v)
    // Offset: 0x16B2F90
    void SerializeInt3(::Pathfinding::Int3 v);
    // public Pathfinding.Int3 DeserializeInt3()
    // Offset: 0x16B3080
    ::Pathfinding::Int3 DeserializeInt3();
    // public System.Int32 DeserializeInt(System.Int32 defaultValue)
    // Offset: 0x16BBD30
    int DeserializeInt(int defaultValue);
    // public System.Single DeserializeFloat(System.Single defaultValue)
    // Offset: 0x16BBE14
    float DeserializeFloat(float defaultValue);
    // public UnityEngine.Object DeserializeUnityObject()
    // Offset: 0x16B18D4
    ::UnityEngine::Object* DeserializeUnityObject();
  }; // Pathfinding.Serialization.GraphSerializationContext
  #pragma pack(pop)
  static check_size<sizeof(GraphSerializationContext), 48 + sizeof(::Pathfinding::Serialization::GraphMeta*)> __Pathfinding_Serialization_GraphSerializationContextSizeCheck;
  static_assert(sizeof(GraphSerializationContext) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::Serialization::GraphSerializationContext::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::Serialization::GraphSerializationContext::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::Serialization::GraphSerializationContext::SerializeNodeReference
// Il2CppName: SerializeNodeReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Serialization::GraphSerializationContext::*)(::Pathfinding::GraphNode*)>(&Pathfinding::Serialization::GraphSerializationContext::SerializeNodeReference)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Serialization::GraphSerializationContext*), "SerializeNodeReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: Pathfinding::Serialization::GraphSerializationContext::DeserializeNodeReference
// Il2CppName: DeserializeNodeReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::GraphNode* (Pathfinding::Serialization::GraphSerializationContext::*)()>(&Pathfinding::Serialization::GraphSerializationContext::DeserializeNodeReference)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Serialization::GraphSerializationContext*), "DeserializeNodeReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Serialization::GraphSerializationContext::SerializeVector3
// Il2CppName: SerializeVector3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Serialization::GraphSerializationContext::*)(::UnityEngine::Vector3)>(&Pathfinding::Serialization::GraphSerializationContext::SerializeVector3)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Serialization::GraphSerializationContext*), "SerializeVector3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v});
  }
};
// Writing MetadataGetter for method: Pathfinding::Serialization::GraphSerializationContext::DeserializeVector3
// Il2CppName: DeserializeVector3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Pathfinding::Serialization::GraphSerializationContext::*)()>(&Pathfinding::Serialization::GraphSerializationContext::DeserializeVector3)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Serialization::GraphSerializationContext*), "DeserializeVector3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Serialization::GraphSerializationContext::SerializeInt3
// Il2CppName: SerializeInt3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Serialization::GraphSerializationContext::*)(::Pathfinding::Int3)>(&Pathfinding::Serialization::GraphSerializationContext::SerializeInt3)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("Pathfinding", "Int3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Serialization::GraphSerializationContext*), "SerializeInt3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v});
  }
};
// Writing MetadataGetter for method: Pathfinding::Serialization::GraphSerializationContext::DeserializeInt3
// Il2CppName: DeserializeInt3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::Int3 (Pathfinding::Serialization::GraphSerializationContext::*)()>(&Pathfinding::Serialization::GraphSerializationContext::DeserializeInt3)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Serialization::GraphSerializationContext*), "DeserializeInt3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Serialization::GraphSerializationContext::DeserializeInt
// Il2CppName: DeserializeInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Pathfinding::Serialization::GraphSerializationContext::*)(int)>(&Pathfinding::Serialization::GraphSerializationContext::DeserializeInt)> {
  static const MethodInfo* get() {
    static auto* defaultValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Serialization::GraphSerializationContext*), "DeserializeInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{defaultValue});
  }
};
// Writing MetadataGetter for method: Pathfinding::Serialization::GraphSerializationContext::DeserializeFloat
// Il2CppName: DeserializeFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Pathfinding::Serialization::GraphSerializationContext::*)(float)>(&Pathfinding::Serialization::GraphSerializationContext::DeserializeFloat)> {
  static const MethodInfo* get() {
    static auto* defaultValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Serialization::GraphSerializationContext*), "DeserializeFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{defaultValue});
  }
};
// Writing MetadataGetter for method: Pathfinding::Serialization::GraphSerializationContext::DeserializeUnityObject
// Il2CppName: DeserializeUnityObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object* (Pathfinding::Serialization::GraphSerializationContext::*)()>(&Pathfinding::Serialization::GraphSerializationContext::DeserializeUnityObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Serialization::GraphSerializationContext*), "DeserializeUnityObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};