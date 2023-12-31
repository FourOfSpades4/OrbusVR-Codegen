// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: AmplifyBloom
namespace AmplifyBloom {
  // Forward declaring type: AmplifyPassCache
  class AmplifyPassCache;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::AmplifyBloom::AmplifyPassCache);
DEFINE_IL2CPP_ARG_TYPE(::AmplifyBloom::AmplifyPassCache*, "AmplifyBloom", "AmplifyPassCache");
// Type namespace: AmplifyBloom
namespace AmplifyBloom {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: AmplifyBloom.AmplifyPassCache
  // [TokenAttribute] Offset: FFFFFFFF
  class AmplifyPassCache : public ::Il2CppObject {
    public:
    public:
    // UnityEngine.Vector4[] Offsets
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::UnityEngine::Vector4> Offsets;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector4>) == 0x8);
    // UnityEngine.Vector4[] Weights
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::UnityEngine::Vector4> Weights;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector4>) == 0x8);
    public:
    // Get instance field reference: UnityEngine.Vector4[] Offsets
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector4>& dyn_Offsets();
    // Get instance field reference: UnityEngine.Vector4[] Weights
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector4>& dyn_Weights();
    // public System.Void .ctor()
    // Offset: 0xEFFA24
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AmplifyPassCache* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::AmplifyBloom::AmplifyPassCache::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AmplifyPassCache*, creationType>()));
    }
    // public System.Void Destroy()
    // Offset: 0xEFFA98
    void Destroy();
  }; // AmplifyBloom.AmplifyPassCache
  #pragma pack(pop)
  static check_size<sizeof(AmplifyPassCache), 24 + sizeof(::ArrayW<::UnityEngine::Vector4>)> __AmplifyBloom_AmplifyPassCacheSizeCheck;
  static_assert(sizeof(AmplifyPassCache) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: AmplifyBloom::AmplifyPassCache::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: AmplifyBloom::AmplifyPassCache::Destroy
// Il2CppName: Destroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AmplifyBloom::AmplifyPassCache::*)()>(&AmplifyBloom::AmplifyPassCache::Destroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AmplifyBloom::AmplifyPassCache*), "Destroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
