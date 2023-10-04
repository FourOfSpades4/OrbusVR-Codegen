// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Scripting.PreserveAttribute
#include "UnityEngine/Scripting/PreserveAttribute.hpp"
// Including type: UnityEngine.RuntimeInitializeLoadType
#include "UnityEngine/RuntimeInitializeLoadType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RuntimeInitializeOnLoadMethodAttribute
  class RuntimeInitializeOnLoadMethodAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::RuntimeInitializeOnLoadMethodAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RuntimeInitializeOnLoadMethodAttribute*, "UnityEngine", "RuntimeInitializeOnLoadMethodAttribute");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.RuntimeInitializeOnLoadMethodAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: A708F0
  class RuntimeInitializeOnLoadMethodAttribute : public ::UnityEngine::Scripting::PreserveAttribute {
    public:
    public:
    // [DebuggerBrowsableAttribute] Offset: 0xA73708
    // [CompilerGeneratedAttribute] Offset: 0xA73708
    // private UnityEngine.RuntimeInitializeLoadType <loadType>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    ::UnityEngine::RuntimeInitializeLoadType loadType;
    // Field size check
    static_assert(sizeof(::UnityEngine::RuntimeInitializeLoadType) == 0x4);
    public:
    // Creating conversion operator: operator ::UnityEngine::RuntimeInitializeLoadType
    constexpr operator ::UnityEngine::RuntimeInitializeLoadType() const noexcept {
      return loadType;
    }
    // Get instance field reference: private UnityEngine.RuntimeInitializeLoadType <loadType>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::RuntimeInitializeLoadType& dyn_$loadType$k__BackingField();
    // public System.Void .ctor(UnityEngine.RuntimeInitializeLoadType loadType)
    // Offset: 0x1F96258
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RuntimeInitializeOnLoadMethodAttribute* New_ctor(::UnityEngine::RuntimeInitializeLoadType loadType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::RuntimeInitializeOnLoadMethodAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RuntimeInitializeOnLoadMethodAttribute*, creationType>(loadType)));
    }
    // private System.Void set_loadType(UnityEngine.RuntimeInitializeLoadType value)
    // Offset: 0x1F9628C
    void set_loadType(::UnityEngine::RuntimeInitializeLoadType value);
  }; // UnityEngine.RuntimeInitializeOnLoadMethodAttribute
  #pragma pack(pop)
  static check_size<sizeof(RuntimeInitializeOnLoadMethodAttribute), 16 + sizeof(::UnityEngine::RuntimeInitializeLoadType)> __UnityEngine_RuntimeInitializeOnLoadMethodAttributeSizeCheck;
  static_assert(sizeof(RuntimeInitializeOnLoadMethodAttribute) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::RuntimeInitializeOnLoadMethodAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::RuntimeInitializeOnLoadMethodAttribute::set_loadType
// Il2CppName: set_loadType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RuntimeInitializeOnLoadMethodAttribute::*)(::UnityEngine::RuntimeInitializeLoadType)>(&UnityEngine::RuntimeInitializeOnLoadMethodAttribute::set_loadType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "RuntimeInitializeLoadType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RuntimeInitializeOnLoadMethodAttribute*), "set_loadType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
