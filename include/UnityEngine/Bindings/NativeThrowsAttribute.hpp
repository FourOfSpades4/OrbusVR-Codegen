// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: UnityEngine.Bindings.IBindingsThrowsProviderAttribute
#include "UnityEngine/Bindings/IBindingsThrowsProviderAttribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.Bindings
namespace UnityEngine::Bindings {
  // Forward declaring type: NativeThrowsAttribute
  class NativeThrowsAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Bindings::NativeThrowsAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::NativeThrowsAttribute*, "UnityEngine.Bindings", "NativeThrowsAttribute");
// Type namespace: UnityEngine.Bindings
namespace UnityEngine::Bindings {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Bindings.NativeThrowsAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: A6BEA0
  // [VisibleToOtherModulesAttribute] Offset: A6BEA0
  class NativeThrowsAttribute : public ::System::Attribute/*, public ::UnityEngine::Bindings::IBindingsThrowsProviderAttribute*/ {
    public:
    public:
    // [DebuggerBrowsableAttribute] Offset: 0xA6C504
    // [CompilerGeneratedAttribute] Offset: 0xA6C504
    // private System.Boolean <ThrowsException>k__BackingField
    // Size: 0x1
    // Offset: 0x10
    bool ThrowsException;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::Bindings::IBindingsThrowsProviderAttribute
    operator ::UnityEngine::Bindings::IBindingsThrowsProviderAttribute() noexcept {
      return *reinterpret_cast<::UnityEngine::Bindings::IBindingsThrowsProviderAttribute*>(this);
    }
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return ThrowsException;
    }
    // Get instance field reference: private System.Boolean <ThrowsException>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$ThrowsException$k__BackingField();
    // public System.Void .ctor()
    // Offset: 0x289FB44
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NativeThrowsAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Bindings::NativeThrowsAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NativeThrowsAttribute*, creationType>()));
    }
    // public System.Void set_ThrowsException(System.Boolean value)
    // Offset: 0x289FB70
    void set_ThrowsException(bool value);
  }; // UnityEngine.Bindings.NativeThrowsAttribute
  #pragma pack(pop)
  static check_size<sizeof(NativeThrowsAttribute), 16 + sizeof(bool)> __UnityEngine_Bindings_NativeThrowsAttributeSizeCheck;
  static_assert(sizeof(NativeThrowsAttribute) == 0x11);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Bindings::NativeThrowsAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Bindings::NativeThrowsAttribute::set_ThrowsException
// Il2CppName: set_ThrowsException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Bindings::NativeThrowsAttribute::*)(bool)>(&UnityEngine::Bindings::NativeThrowsAttribute::set_ThrowsException)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bindings::NativeThrowsAttribute*), "set_ThrowsException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};