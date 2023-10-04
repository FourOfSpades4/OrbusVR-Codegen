// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: Mono.RuntimeGPtrArrayHandle
#include "Mono/RuntimeGPtrArrayHandle.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: Mono
namespace Mono {
  // Forward declaring type: SafeGPtrArrayHandle
  struct SafeGPtrArrayHandle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Mono::SafeGPtrArrayHandle, "Mono", "SafeGPtrArrayHandle");
// Type namespace: Mono
namespace Mono {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Mono.SafeGPtrArrayHandle
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: A56BFC
  struct SafeGPtrArrayHandle/*, public ::System::ValueType, public ::System::IDisposable*/ {
    public:
    public:
    // private Mono.RuntimeGPtrArrayHandle handle
    // Size: 0x8
    // Offset: 0x0
    ::Mono::RuntimeGPtrArrayHandle handle;
    // Field size check
    static_assert(sizeof(::Mono::RuntimeGPtrArrayHandle) == 0x8);
    public:
    // Creating value type constructor for type: SafeGPtrArrayHandle
    constexpr SafeGPtrArrayHandle(::Mono::RuntimeGPtrArrayHandle handle_ = {}) noexcept : handle{handle_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating conversion operator: operator ::Mono::RuntimeGPtrArrayHandle
    constexpr operator ::Mono::RuntimeGPtrArrayHandle() const noexcept {
      return handle;
    }
    // Get instance field reference: private Mono.RuntimeGPtrArrayHandle handle
    [[deprecated("Use field access instead!")]] ::Mono::RuntimeGPtrArrayHandle& dyn_handle();
    // System.Void .ctor(System.IntPtr ptr)
    // Offset: 0xBAC66C
    SafeGPtrArrayHandle(::System::IntPtr ptr);
    // public System.Void Dispose()
    // Offset: 0xBAC698
    void Dispose();
    // System.Int32 get_Length()
    // Offset: 0xBAC6C0
    int get_Length();
    // System.IntPtr get_Item(System.Int32 i)
    // Offset: 0xBAC6EC
    ::System::IntPtr get_Item(int i);
  }; // Mono.SafeGPtrArrayHandle
  #pragma pack(pop)
  static check_size<sizeof(SafeGPtrArrayHandle), 0 + sizeof(::Mono::RuntimeGPtrArrayHandle)> __Mono_SafeGPtrArrayHandleSizeCheck;
  static_assert(sizeof(SafeGPtrArrayHandle) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::SafeGPtrArrayHandle::SafeGPtrArrayHandle
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::SafeGPtrArrayHandle::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::SafeGPtrArrayHandle::*)()>(&Mono::SafeGPtrArrayHandle::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::SafeGPtrArrayHandle), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::SafeGPtrArrayHandle::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::SafeGPtrArrayHandle::*)()>(&Mono::SafeGPtrArrayHandle::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::SafeGPtrArrayHandle), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::SafeGPtrArrayHandle::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (Mono::SafeGPtrArrayHandle::*)(int)>(&Mono::SafeGPtrArrayHandle::get_Item)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::SafeGPtrArrayHandle), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
