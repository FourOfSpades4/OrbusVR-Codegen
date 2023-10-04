// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Skipping declaration: Transformer`1 because it is already included!
  // Skipping declaration: Caster`1 because it is already included!
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: EnumHelper`1<UnderlyingType>
  template<typename UnderlyingType>
  class EnumHelper_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Diagnostics::Tracing::EnumHelper_1, "System.Diagnostics.Tracing", "EnumHelper`1");
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Diagnostics.Tracing.EnumHelper`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename UnderlyingType>
  class EnumHelper_1 : public ::Il2CppObject {
    public:
    // Nested type: ::System::Diagnostics::Tracing::EnumHelper_1::Transformer_1<UnderlyingType, ValueType>
    template<typename ValueType>
    class Transformer_1;
    // Nested type: ::System::Diagnostics::Tracing::EnumHelper_1::Caster_1<UnderlyingType, ValueType>
    template<typename ValueType>
    class Caster_1;
    // WARNING Size may be invalid!
    // Autogenerated type: System.Diagnostics.Tracing.EnumHelper`1/Transformer`1
    // [TokenAttribute] Offset: FFFFFFFF
    template<typename ValueType>
    class Transformer_1 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::System::MulticastDelegate {
      public:
      using declaring_type = EnumHelper_1<UnderlyingType>*;
      static constexpr std::string_view NESTED_NAME = "Transformer`1";
      static constexpr bool IS_VALUE_TYPE = false;
      // public System.Void .ctor(System.Object object, System.IntPtr method)
      // Offset: 0xFFFFFFFFFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename EnumHelper_1<UnderlyingType>::Transformer_1<ValueType>* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::EnumHelper_1::Transformer_1::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename EnumHelper_1<UnderlyingType>::Transformer_1<ValueType>*, creationType>(object, method)));
      }
      // public UnderlyingType Invoke(ValueType value)
      // Offset: 0xFFFFFFFFFFFFFFFF
      UnderlyingType Invoke(ValueType value) {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::EnumHelper_1::Transformer_1::Invoke");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(typename ::System::Diagnostics::Tracing::EnumHelper_1<UnderlyingType>::Transformer_1<ValueType>*), -1));
        return ::il2cpp_utils::RunMethodRethrow<UnderlyingType, false>(this, ___internal__method, value);
      }
      // public System.IAsyncResult BeginInvoke(ValueType value, System.AsyncCallback callback, System.Object object)
      // Offset: 0xFFFFFFFFFFFFFFFF
      ::System::IAsyncResult* BeginInvoke(ValueType value, ::System::AsyncCallback* callback, ::Il2CppObject* object) {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::EnumHelper_1::Transformer_1::BeginInvoke");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(typename ::System::Diagnostics::Tracing::EnumHelper_1<UnderlyingType>::Transformer_1<ValueType>*), -1));
        return ::il2cpp_utils::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal__method, value, callback, object);
      }
      // public UnderlyingType EndInvoke(System.IAsyncResult result)
      // Offset: 0xFFFFFFFFFFFFFFFF
      UnderlyingType EndInvoke(::System::IAsyncResult* result) {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::EnumHelper_1::Transformer_1::EndInvoke");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(typename ::System::Diagnostics::Tracing::EnumHelper_1<UnderlyingType>::Transformer_1<ValueType>*), -1));
        return ::il2cpp_utils::RunMethodRethrow<UnderlyingType, false>(this, ___internal__method, result);
      }
    }; // System.Diagnostics.Tracing.EnumHelper`1/Transformer`1
    // Could not write size check! Type: System.Diagnostics.Tracing.EnumHelper`1/Transformer`1 is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: System.Diagnostics.Tracing.EnumHelper`1/Caster`1
    // [TokenAttribute] Offset: FFFFFFFF
    template<typename ValueType>
    class Caster_1 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = EnumHelper_1<UnderlyingType>*;
      static constexpr std::string_view NESTED_NAME = "Caster`1";
      static constexpr bool IS_VALUE_TYPE = false;
      // Autogenerated static field getter
      // Get static field: static public readonly System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> Instance
      static typename ::System::Diagnostics::Tracing::EnumHelper_1<UnderlyingType>::Transformer_1<ValueType>* _get_Instance() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::EnumHelper_1::Caster_1::_get_Instance");
        return THROW_UNLESS(il2cpp_utils::GetFieldValue<typename ::System::Diagnostics::Tracing::EnumHelper_1<UnderlyingType>::Transformer_1<ValueType>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename EnumHelper_1<UnderlyingType>::Caster_1<ValueType>*>::get(), "Instance"));
      }
      // Autogenerated static field setter
      // Set static field: static public readonly System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> Instance
      static void _set_Instance(typename ::System::Diagnostics::Tracing::EnumHelper_1<UnderlyingType>::Transformer_1<ValueType>* value) {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::EnumHelper_1::Caster_1::_set_Instance");
        THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename EnumHelper_1<UnderlyingType>::Caster_1<ValueType>*>::get(), "Instance", value));
      }
      // static private System.Void .cctor()
      // Offset: 0xFFFFFFFFFFFFFFFF
      static void _cctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::EnumHelper_1::Caster_1::.cctor");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename EnumHelper_1<UnderlyingType>::Caster_1<ValueType>*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
      }
    }; // System.Diagnostics.Tracing.EnumHelper`1/Caster`1
    // Could not write size check! Type: System.Diagnostics.Tracing.EnumHelper`1/Caster`1 is generic, or has no fields that are valid for size checks!
    // Autogenerated static field getter
    // Get static field: static private readonly System.Reflection.MethodInfo IdentityInfo
    static ::System::Reflection::MethodInfo* _get_IdentityInfo() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::EnumHelper_1::_get_IdentityInfo");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<::System::Reflection::MethodInfo*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<EnumHelper_1<UnderlyingType>*>::get(), "IdentityInfo"));
    }
    // Autogenerated static field setter
    // Set static field: static private readonly System.Reflection.MethodInfo IdentityInfo
    static void _set_IdentityInfo(::System::Reflection::MethodInfo* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::EnumHelper_1::_set_IdentityInfo");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<EnumHelper_1<UnderlyingType>*>::get(), "IdentityInfo", value));
    }
    // static public UnderlyingType Cast(ValueType value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class ValueType>
    static UnderlyingType Cast(ValueType value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::EnumHelper_1::Cast");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<EnumHelper_1<UnderlyingType>*>::get(), "Cast", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ValueType>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ValueType>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<UnderlyingType, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, value);
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static void _cctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::EnumHelper_1::.cctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<EnumHelper_1<UnderlyingType>*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
  }; // System.Diagnostics.Tracing.EnumHelper`1
  // Could not write size check! Type: System.Diagnostics.Tracing.EnumHelper`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
