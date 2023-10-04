// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Threading.ExecutionContext
#include "System/Threading/ExecutionContext.hpp"
// Including type: System.Runtime.Remoting.Messaging.LogicalCallContext
#include "System/Runtime/Remoting/Messaging/LogicalCallContext.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: SynchronizationContext
  class SynchronizationContext;
  // Forward declaring type: IAsyncLocal
  class IAsyncLocal;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ExecutionContext::Reader, "System.Threading", "ExecutionContext/Reader");
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Threading.ExecutionContext/Reader
  // [TokenAttribute] Offset: FFFFFFFF
  struct ExecutionContext::Reader/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Threading.ExecutionContext m_ec
    // Size: 0x8
    // Offset: 0x0
    ::System::Threading::ExecutionContext* m_ec;
    // Field size check
    static_assert(sizeof(::System::Threading::ExecutionContext*) == 0x8);
    public:
    // Creating value type constructor for type: Reader
    constexpr Reader(::System::Threading::ExecutionContext* m_ec_ = {}) noexcept : m_ec{m_ec_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::System::Threading::ExecutionContext*
    constexpr operator ::System::Threading::ExecutionContext*() const noexcept {
      return m_ec;
    }
    // Get instance field reference: private System.Threading.ExecutionContext m_ec
    [[deprecated("Use field access instead!")]] ::System::Threading::ExecutionContext*& dyn_m_ec();
    // public System.Void .ctor(System.Threading.ExecutionContext ec)
    // Offset: 0xBB2D88
    // ABORTED: conflicts with another method.  Reader(::System::Threading::ExecutionContext* ec);
    // public System.Threading.ExecutionContext DangerousGetRawExecutionContext()
    // Offset: 0xBB2D90
    ::System::Threading::ExecutionContext* DangerousGetRawExecutionContext();
    // public System.Boolean get_IsNull()
    // Offset: 0xBB2D98
    bool get_IsNull();
    // public System.Boolean IsDefaultFTContext(System.Boolean ignoreSyncCtx)
    // Offset: 0xBB2DA8
    bool IsDefaultFTContext(bool ignoreSyncCtx);
    // public System.Boolean get_IsFlowSuppressed()
    // Offset: 0xBB2DB4
    bool get_IsFlowSuppressed();
    // public System.Threading.SynchronizationContext get_SynchronizationContext()
    // Offset: 0xBB2DD0
    ::System::Threading::SynchronizationContext* get_SynchronizationContext();
    // public System.Threading.SynchronizationContext get_SynchronizationContextNoFlow()
    // Offset: 0xBB2DE8
    ::System::Threading::SynchronizationContext* get_SynchronizationContextNoFlow();
    // public System.Runtime.Remoting.Messaging.LogicalCallContext/Reader get_LogicalCallContext()
    // Offset: 0xBB2E00
    ::System::Runtime::Remoting::Messaging::LogicalCallContext::Reader get_LogicalCallContext();
    // public System.Object GetLocalValue(System.Threading.IAsyncLocal local)
    // Offset: 0xBB2E08
    ::Il2CppObject* GetLocalValue(::System::Threading::IAsyncLocal* local);
    // public System.Boolean HasSameLocalValues(System.Threading.ExecutionContext other)
    // Offset: 0xBB2E10
    bool HasSameLocalValues(::System::Threading::ExecutionContext* other);
  }; // System.Threading.ExecutionContext/Reader
  #pragma pack(pop)
  static check_size<sizeof(ExecutionContext::Reader), 0 + sizeof(::System::Threading::ExecutionContext*)> __System_Threading_ExecutionContext_ReaderSizeCheck;
  static_assert(sizeof(ExecutionContext::Reader) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::ExecutionContext::Reader::Reader
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::ExecutionContext::Reader::DangerousGetRawExecutionContext
// Il2CppName: DangerousGetRawExecutionContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::ExecutionContext* (System::Threading::ExecutionContext::Reader::*)()>(&System::Threading::ExecutionContext::Reader::DangerousGetRawExecutionContext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ExecutionContext::Reader), "DangerousGetRawExecutionContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::ExecutionContext::Reader::get_IsNull
// Il2CppName: get_IsNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::ExecutionContext::Reader::*)()>(&System::Threading::ExecutionContext::Reader::get_IsNull)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ExecutionContext::Reader), "get_IsNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::ExecutionContext::Reader::IsDefaultFTContext
// Il2CppName: IsDefaultFTContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::ExecutionContext::Reader::*)(bool)>(&System::Threading::ExecutionContext::Reader::IsDefaultFTContext)> {
  static const MethodInfo* get() {
    static auto* ignoreSyncCtx = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ExecutionContext::Reader), "IsDefaultFTContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ignoreSyncCtx});
  }
};
// Writing MetadataGetter for method: System::Threading::ExecutionContext::Reader::get_IsFlowSuppressed
// Il2CppName: get_IsFlowSuppressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::ExecutionContext::Reader::*)()>(&System::Threading::ExecutionContext::Reader::get_IsFlowSuppressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ExecutionContext::Reader), "get_IsFlowSuppressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::ExecutionContext::Reader::get_SynchronizationContext
// Il2CppName: get_SynchronizationContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::SynchronizationContext* (System::Threading::ExecutionContext::Reader::*)()>(&System::Threading::ExecutionContext::Reader::get_SynchronizationContext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ExecutionContext::Reader), "get_SynchronizationContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::ExecutionContext::Reader::get_SynchronizationContextNoFlow
// Il2CppName: get_SynchronizationContextNoFlow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::SynchronizationContext* (System::Threading::ExecutionContext::Reader::*)()>(&System::Threading::ExecutionContext::Reader::get_SynchronizationContextNoFlow)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ExecutionContext::Reader), "get_SynchronizationContextNoFlow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::ExecutionContext::Reader::get_LogicalCallContext
// Il2CppName: get_LogicalCallContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::LogicalCallContext::Reader (System::Threading::ExecutionContext::Reader::*)()>(&System::Threading::ExecutionContext::Reader::get_LogicalCallContext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ExecutionContext::Reader), "get_LogicalCallContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::ExecutionContext::Reader::GetLocalValue
// Il2CppName: GetLocalValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Threading::ExecutionContext::Reader::*)(::System::Threading::IAsyncLocal*)>(&System::Threading::ExecutionContext::Reader::GetLocalValue)> {
  static const MethodInfo* get() {
    static auto* local = &::il2cpp_utils::GetClassFromName("System.Threading", "IAsyncLocal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ExecutionContext::Reader), "GetLocalValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{local});
  }
};
// Writing MetadataGetter for method: System::Threading::ExecutionContext::Reader::HasSameLocalValues
// Il2CppName: HasSameLocalValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::ExecutionContext::Reader::*)(::System::Threading::ExecutionContext*)>(&System::Threading::ExecutionContext::Reader::HasSameLocalValues)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System.Threading", "ExecutionContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ExecutionContext::Reader), "HasSameLocalValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
