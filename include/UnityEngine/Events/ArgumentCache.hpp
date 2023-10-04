// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ISerializationCallbackReceiver
#include "UnityEngine/ISerializationCallbackReceiver.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: UnityEngine.Events
namespace UnityEngine::Events {
  // Forward declaring type: ArgumentCache
  class ArgumentCache;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Events::ArgumentCache);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Events::ArgumentCache*, "UnityEngine.Events", "ArgumentCache");
// Type namespace: UnityEngine.Events
namespace UnityEngine::Events {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Events.ArgumentCache
  // [TokenAttribute] Offset: FFFFFFFF
  class ArgumentCache : public ::Il2CppObject/*, public ::UnityEngine::ISerializationCallbackReceiver*/ {
    public:
    public:
    // [FormerlySerializedAsAttribute] Offset: 0xA739A8
    // private UnityEngine.Object m_ObjectArgument
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Object* m_ObjectArgument;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xA739F4
    // private System.String m_ObjectArgumentAssemblyTypeName
    // Size: 0x8
    // Offset: 0x18
    ::StringW m_ObjectArgumentAssemblyTypeName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xA73A40
    // private System.Int32 m_IntArgument
    // Size: 0x4
    // Offset: 0x20
    int m_IntArgument;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [FormerlySerializedAsAttribute] Offset: 0xA73A8C
    // private System.Single m_FloatArgument
    // Size: 0x4
    // Offset: 0x24
    float m_FloatArgument;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [FormerlySerializedAsAttribute] Offset: 0xA73AD8
    // private System.String m_StringArgument
    // Size: 0x8
    // Offset: 0x28
    ::StringW m_StringArgument;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean m_BoolArgument
    // Size: 0x1
    // Offset: 0x30
    bool m_BoolArgument;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::ISerializationCallbackReceiver
    operator ::UnityEngine::ISerializationCallbackReceiver() noexcept {
      return *reinterpret_cast<::UnityEngine::ISerializationCallbackReceiver*>(this);
    }
    // Get instance field reference: private UnityEngine.Object m_ObjectArgument
    [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn_m_ObjectArgument();
    // Get instance field reference: private System.String m_ObjectArgumentAssemblyTypeName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_ObjectArgumentAssemblyTypeName();
    // Get instance field reference: private System.Int32 m_IntArgument
    [[deprecated("Use field access instead!")]] int& dyn_m_IntArgument();
    // Get instance field reference: private System.Single m_FloatArgument
    [[deprecated("Use field access instead!")]] float& dyn_m_FloatArgument();
    // Get instance field reference: private System.String m_StringArgument
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_StringArgument();
    // Get instance field reference: private System.Boolean m_BoolArgument
    [[deprecated("Use field access instead!")]] bool& dyn_m_BoolArgument();
    // public System.Void .ctor()
    // Offset: 0x20460CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArgumentCache* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Events::ArgumentCache::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArgumentCache*, creationType>()));
    }
    // public UnityEngine.Object get_unityObjectArgument()
    // Offset: 0x20460D4
    ::UnityEngine::Object* get_unityObjectArgument();
    // public System.String get_unityObjectArgumentAssemblyTypeName()
    // Offset: 0x20460DC
    ::StringW get_unityObjectArgumentAssemblyTypeName();
    // public System.Int32 get_intArgument()
    // Offset: 0x20460E4
    int get_intArgument();
    // public System.Single get_floatArgument()
    // Offset: 0x20460EC
    float get_floatArgument();
    // public System.String get_stringArgument()
    // Offset: 0x20460F4
    ::StringW get_stringArgument();
    // public System.Boolean get_boolArgument()
    // Offset: 0x20460FC
    bool get_boolArgument();
    // private System.Void TidyAssemblyTypeName()
    // Offset: 0x2046104
    void TidyAssemblyTypeName();
    // public System.Void OnBeforeSerialize()
    // Offset: 0x204636C
    void OnBeforeSerialize();
    // public System.Void OnAfterDeserialize()
    // Offset: 0x2046370
    void OnAfterDeserialize();
  }; // UnityEngine.Events.ArgumentCache
  #pragma pack(pop)
  static check_size<sizeof(ArgumentCache), 48 + sizeof(bool)> __UnityEngine_Events_ArgumentCacheSizeCheck;
  static_assert(sizeof(ArgumentCache) == 0x31);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Events::ArgumentCache::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Events::ArgumentCache::get_unityObjectArgument
// Il2CppName: get_unityObjectArgument
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object* (UnityEngine::Events::ArgumentCache::*)()>(&UnityEngine::Events::ArgumentCache::get_unityObjectArgument)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::ArgumentCache*), "get_unityObjectArgument", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::ArgumentCache::get_unityObjectArgumentAssemblyTypeName
// Il2CppName: get_unityObjectArgumentAssemblyTypeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Events::ArgumentCache::*)()>(&UnityEngine::Events::ArgumentCache::get_unityObjectArgumentAssemblyTypeName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::ArgumentCache*), "get_unityObjectArgumentAssemblyTypeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::ArgumentCache::get_intArgument
// Il2CppName: get_intArgument
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Events::ArgumentCache::*)()>(&UnityEngine::Events::ArgumentCache::get_intArgument)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::ArgumentCache*), "get_intArgument", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::ArgumentCache::get_floatArgument
// Il2CppName: get_floatArgument
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Events::ArgumentCache::*)()>(&UnityEngine::Events::ArgumentCache::get_floatArgument)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::ArgumentCache*), "get_floatArgument", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::ArgumentCache::get_stringArgument
// Il2CppName: get_stringArgument
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Events::ArgumentCache::*)()>(&UnityEngine::Events::ArgumentCache::get_stringArgument)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::ArgumentCache*), "get_stringArgument", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::ArgumentCache::get_boolArgument
// Il2CppName: get_boolArgument
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Events::ArgumentCache::*)()>(&UnityEngine::Events::ArgumentCache::get_boolArgument)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::ArgumentCache*), "get_boolArgument", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::ArgumentCache::TidyAssemblyTypeName
// Il2CppName: TidyAssemblyTypeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Events::ArgumentCache::*)()>(&UnityEngine::Events::ArgumentCache::TidyAssemblyTypeName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::ArgumentCache*), "TidyAssemblyTypeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::ArgumentCache::OnBeforeSerialize
// Il2CppName: OnBeforeSerialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Events::ArgumentCache::*)()>(&UnityEngine::Events::ArgumentCache::OnBeforeSerialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::ArgumentCache*), "OnBeforeSerialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Events::ArgumentCache::OnAfterDeserialize
// Il2CppName: OnAfterDeserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Events::ArgumentCache::*)()>(&UnityEngine::Events::ArgumentCache::OnAfterDeserialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Events::ArgumentCache*), "OnAfterDeserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
