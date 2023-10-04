// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: UnityEngine.Bindings.IBindingsWritableSelfProviderAttribute
#include "UnityEngine/Bindings/IBindingsWritableSelfProviderAttribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.Bindings
namespace UnityEngine::Bindings {
  // Forward declaring type: NativeWritableSelfAttribute
  class NativeWritableSelfAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Bindings::NativeWritableSelfAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::NativeWritableSelfAttribute*, "UnityEngine.Bindings", "NativeWritableSelfAttribute");
// Type namespace: UnityEngine.Bindings
namespace UnityEngine::Bindings {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Bindings.NativeWritableSelfAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [VisibleToOtherModulesAttribute] Offset: A6BC54
  // [AttributeUsageAttribute] Offset: A6BC54
  class NativeWritableSelfAttribute : public ::System::Attribute/*, public ::UnityEngine::Bindings::IBindingsWritableSelfProviderAttribute*/ {
    public:
    public:
    // [DebuggerBrowsableAttribute] Offset: 0xA6C234
    // [CompilerGeneratedAttribute] Offset: 0xA6C234
    // private System.Boolean <WritableSelf>k__BackingField
    // Size: 0x1
    // Offset: 0x10
    bool WritableSelf;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::Bindings::IBindingsWritableSelfProviderAttribute
    operator ::UnityEngine::Bindings::IBindingsWritableSelfProviderAttribute() noexcept {
      return *reinterpret_cast<::UnityEngine::Bindings::IBindingsWritableSelfProviderAttribute*>(this);
    }
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return WritableSelf;
    }
    // Get instance field reference: private System.Boolean <WritableSelf>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$WritableSelf$k__BackingField();
    // public System.Void .ctor()
    // Offset: 0x289FD20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NativeWritableSelfAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Bindings::NativeWritableSelfAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NativeWritableSelfAttribute*, creationType>()));
    }
    // public System.Void set_WritableSelf(System.Boolean value)
    // Offset: 0x289FD4C
    void set_WritableSelf(bool value);
  }; // UnityEngine.Bindings.NativeWritableSelfAttribute
  #pragma pack(pop)
  static check_size<sizeof(NativeWritableSelfAttribute), 16 + sizeof(bool)> __UnityEngine_Bindings_NativeWritableSelfAttributeSizeCheck;
  static_assert(sizeof(NativeWritableSelfAttribute) == 0x11);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Bindings::NativeWritableSelfAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Bindings::NativeWritableSelfAttribute::set_WritableSelf
// Il2CppName: set_WritableSelf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Bindings::NativeWritableSelfAttribute::*)(bool)>(&UnityEngine::Bindings::NativeWritableSelfAttribute::set_WritableSelf)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bindings::NativeWritableSelfAttribute*), "set_WritableSelf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};