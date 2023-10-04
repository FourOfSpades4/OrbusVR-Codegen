// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Experimental.XR.TrackableId
#include "UnityEngine/Experimental/XR/TrackableId.hpp"
// Including type: UnityEngine.Experimental.XR.MeshGenerationStatus
#include "UnityEngine/Experimental/XR/MeshGenerationStatus.hpp"
// Including type: UnityEngine.Experimental.XR.MeshVertexAttributes
#include "UnityEngine/Experimental/XR/MeshVertexAttributes.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: MeshCollider
  class MeshCollider;
}
// Completed forward declares
// Type namespace: UnityEngine.Experimental.XR
namespace UnityEngine::Experimental::XR {
  // Forward declaring type: MeshGenerationResult
  struct MeshGenerationResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::XR::MeshGenerationResult, "UnityEngine.Experimental.XR", "MeshGenerationResult");
// Type namespace: UnityEngine.Experimental.XR
namespace UnityEngine::Experimental::XR {
  // Size: 0x28
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Experimental.XR.MeshGenerationResult
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: A8EDEC
  // [NativeHeaderAttribute] Offset: A8EDEC
  struct MeshGenerationResult/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::Experimental::XR::MeshGenerationResult>*/ {
    public:
    public:
    // [DebuggerBrowsableAttribute] Offset: 0xA8F620
    // [CompilerGeneratedAttribute] Offset: 0xA8F620
    // private readonly UnityEngine.Experimental.XR.TrackableId <MeshId>k__BackingField
    // Size: 0x10
    // Offset: 0x0
    ::UnityEngine::Experimental::XR::TrackableId MeshId;
    // Field size check
    static_assert(sizeof(::UnityEngine::Experimental::XR::TrackableId) == 0x10);
    // [DebuggerBrowsableAttribute] Offset: 0xA8F65C
    // [CompilerGeneratedAttribute] Offset: 0xA8F65C
    // private readonly UnityEngine.Mesh <Mesh>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Mesh* Mesh;
    // Field size check
    static_assert(sizeof(::UnityEngine::Mesh*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xA8F698
    // [DebuggerBrowsableAttribute] Offset: 0xA8F698
    // private readonly UnityEngine.MeshCollider <MeshCollider>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::MeshCollider* MeshCollider;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshCollider*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xA8F6D4
    // [CompilerGeneratedAttribute] Offset: 0xA8F6D4
    // private readonly UnityEngine.Experimental.XR.MeshGenerationStatus <Status>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    ::UnityEngine::Experimental::XR::MeshGenerationStatus Status;
    // Field size check
    static_assert(sizeof(::UnityEngine::Experimental::XR::MeshGenerationStatus) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xA8F710
    // [DebuggerBrowsableAttribute] Offset: 0xA8F710
    // private readonly UnityEngine.Experimental.XR.MeshVertexAttributes <Attributes>k__BackingField
    // Size: 0x4
    // Offset: 0x24
    ::UnityEngine::Experimental::XR::MeshVertexAttributes Attributes;
    // Field size check
    static_assert(sizeof(::UnityEngine::Experimental::XR::MeshVertexAttributes) == 0x4);
    public:
    // Creating value type constructor for type: MeshGenerationResult
    constexpr MeshGenerationResult(::UnityEngine::Experimental::XR::TrackableId MeshId_ = {}, ::UnityEngine::Mesh* Mesh_ = {}, ::UnityEngine::MeshCollider* MeshCollider_ = {}, ::UnityEngine::Experimental::XR::MeshGenerationStatus Status_ = {}, ::UnityEngine::Experimental::XR::MeshVertexAttributes Attributes_ = {}) noexcept : MeshId{MeshId_}, Mesh{Mesh_}, MeshCollider{MeshCollider_}, Status{Status_}, Attributes{Attributes_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::Experimental::XR::MeshGenerationResult>
    operator ::System::IEquatable_1<::UnityEngine::Experimental::XR::MeshGenerationResult>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::Experimental::XR::MeshGenerationResult>*>(this);
    }
    // Get instance field reference: private readonly UnityEngine.Experimental.XR.TrackableId <MeshId>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Experimental::XR::TrackableId& dyn_$MeshId$k__BackingField();
    // Get instance field reference: private readonly UnityEngine.Mesh <Mesh>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Mesh*& dyn_$Mesh$k__BackingField();
    // Get instance field reference: private readonly UnityEngine.MeshCollider <MeshCollider>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::MeshCollider*& dyn_$MeshCollider$k__BackingField();
    // Get instance field reference: private readonly UnityEngine.Experimental.XR.MeshGenerationStatus <Status>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Experimental::XR::MeshGenerationStatus& dyn_$Status$k__BackingField();
    // Get instance field reference: private readonly UnityEngine.Experimental.XR.MeshVertexAttributes <Attributes>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Experimental::XR::MeshVertexAttributes& dyn_$Attributes$k__BackingField();
    // public UnityEngine.Experimental.XR.TrackableId get_MeshId()
    // Offset: 0xBD226C
    ::UnityEngine::Experimental::XR::TrackableId get_MeshId();
    // public UnityEngine.Mesh get_Mesh()
    // Offset: 0xBD2278
    ::UnityEngine::Mesh* get_Mesh();
    // public UnityEngine.MeshCollider get_MeshCollider()
    // Offset: 0xBD2280
    ::UnityEngine::MeshCollider* get_MeshCollider();
    // public UnityEngine.Experimental.XR.MeshGenerationStatus get_Status()
    // Offset: 0xBD2288
    ::UnityEngine::Experimental::XR::MeshGenerationStatus get_Status();
    // public UnityEngine.Experimental.XR.MeshVertexAttributes get_Attributes()
    // Offset: 0xBD2290
    ::UnityEngine::Experimental::XR::MeshVertexAttributes get_Attributes();
    // public System.Boolean Equals(UnityEngine.Experimental.XR.MeshGenerationResult other)
    // Offset: 0xBD22A0
    bool Equals(::UnityEngine::Experimental::XR::MeshGenerationResult other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xBD2298
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xBD22E0
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.Experimental.XR.MeshGenerationResult
  #pragma pack(pop)
  static check_size<sizeof(MeshGenerationResult), 36 + sizeof(::UnityEngine::Experimental::XR::MeshVertexAttributes)> __UnityEngine_Experimental_XR_MeshGenerationResultSizeCheck;
  static_assert(sizeof(MeshGenerationResult) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Experimental::XR::MeshGenerationResult::get_MeshId
// Il2CppName: get_MeshId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::XR::TrackableId (UnityEngine::Experimental::XR::MeshGenerationResult::*)()>(&UnityEngine::Experimental::XR::MeshGenerationResult::get_MeshId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::XR::MeshGenerationResult), "get_MeshId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::XR::MeshGenerationResult::get_Mesh
// Il2CppName: get_Mesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Mesh* (UnityEngine::Experimental::XR::MeshGenerationResult::*)()>(&UnityEngine::Experimental::XR::MeshGenerationResult::get_Mesh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::XR::MeshGenerationResult), "get_Mesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::XR::MeshGenerationResult::get_MeshCollider
// Il2CppName: get_MeshCollider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::MeshCollider* (UnityEngine::Experimental::XR::MeshGenerationResult::*)()>(&UnityEngine::Experimental::XR::MeshGenerationResult::get_MeshCollider)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::XR::MeshGenerationResult), "get_MeshCollider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::XR::MeshGenerationResult::get_Status
// Il2CppName: get_Status
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::XR::MeshGenerationStatus (UnityEngine::Experimental::XR::MeshGenerationResult::*)()>(&UnityEngine::Experimental::XR::MeshGenerationResult::get_Status)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::XR::MeshGenerationResult), "get_Status", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::XR::MeshGenerationResult::get_Attributes
// Il2CppName: get_Attributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::XR::MeshVertexAttributes (UnityEngine::Experimental::XR::MeshGenerationResult::*)()>(&UnityEngine::Experimental::XR::MeshGenerationResult::get_Attributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::XR::MeshGenerationResult), "get_Attributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::XR::MeshGenerationResult::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Experimental::XR::MeshGenerationResult::*)(::UnityEngine::Experimental::XR::MeshGenerationResult)>(&UnityEngine::Experimental::XR::MeshGenerationResult::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.XR", "MeshGenerationResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::XR::MeshGenerationResult), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::XR::MeshGenerationResult::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Experimental::XR::MeshGenerationResult::*)(::Il2CppObject*)>(&UnityEngine::Experimental::XR::MeshGenerationResult::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::XR::MeshGenerationResult), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::XR::MeshGenerationResult::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Experimental::XR::MeshGenerationResult::*)()>(&UnityEngine::Experimental::XR::MeshGenerationResult::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::XR::MeshGenerationResult), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};