// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Microsoft.Win32.UnsafeNativeMethods/ManifestEtw
#include "Microsoft/Win32/UnsafeNativeMethods_ManifestEtw.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Guid
  struct Guid;
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::EtwEnableCallback);
DEFINE_IL2CPP_ARG_TYPE(::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::EtwEnableCallback*, "Microsoft.Win32", "UnsafeNativeMethods/ManifestEtw/EtwEnableCallback");
// Type namespace: Microsoft.Win32
namespace Microsoft::Win32 {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EtwEnableCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class UnsafeNativeMethods_ManifestEtw::EtwEnableCallback : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1BCD948
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnsafeNativeMethods_ManifestEtw::EtwEnableCallback* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::EtwEnableCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnsafeNativeMethods_ManifestEtw::EtwEnableCallback*, creationType>(object, method)));
    }
    // public System.Void Invoke(in System.Guid sourceId, in System.Int32 isEnabled, in System.Byte level, in System.Int64 matchAnyKeywords, in System.Int64 matchAllKeywords, in Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EVENT_FILTER_DESCRIPTOR* filterData, in System.Void* callbackContext)
    // Offset: 0x1BCD958
    void Invoke(ByRef<::System::Guid> sourceId, ByRef<int> isEnabled, ByRef<uint8_t> level, ByRef<int64_t> matchAnyKeywords, ByRef<int64_t> matchAllKeywords, ByRef<::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::EVENT_FILTER_DESCRIPTOR*> filterData, ByRef<void*> callbackContext);
    // public System.IAsyncResult BeginInvoke(in System.Guid sourceId, in System.Int32 isEnabled, in System.Byte level, in System.Int64 matchAnyKeywords, in System.Int64 matchAllKeywords, in Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EVENT_FILTER_DESCRIPTOR* filterData, in System.Void* callbackContext, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1BCDE68
    ::System::IAsyncResult* BeginInvoke(ByRef<::System::Guid> sourceId, ByRef<int> isEnabled, ByRef<uint8_t> level, ByRef<int64_t> matchAnyKeywords, ByRef<int64_t> matchAllKeywords, ByRef<::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::EVENT_FILTER_DESCRIPTOR*> filterData, ByRef<void*> callbackContext, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(in System.Guid sourceId, System.IAsyncResult result)
    // Offset: 0x1BCDF80
    void EndInvoke(ByRef<::System::Guid> sourceId, ::System::IAsyncResult* result);
  }; // Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EtwEnableCallback
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::EtwEnableCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::EtwEnableCallback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::EtwEnableCallback::*)(ByRef<::System::Guid>, ByRef<int>, ByRef<uint8_t>, ByRef<int64_t>, ByRef<int64_t>, ByRef<::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::EVENT_FILTER_DESCRIPTOR*>, ByRef<void*>)>(&Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::EtwEnableCallback::Invoke)> {
  static const MethodInfo* get() {
    static auto* sourceId = &::il2cpp_utils::GetClassFromName("System", "Guid")->this_arg;
    static auto* isEnabled = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* level = &::il2cpp_utils::GetClassFromName("System", "Byte")->this_arg;
    static auto* matchAnyKeywords = &::il2cpp_utils::GetClassFromName("System", "Int64")->this_arg;
    static auto* matchAllKeywords = &::il2cpp_utils::GetClassFromName("System", "Int64")->this_arg;
    static auto* filterData = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Microsoft.Win32", "UnsafeNativeMethods/ManifestEtw/EVENT_FILTER_DESCRIPTOR"))->this_arg;
    static auto* callbackContext = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Void"))->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::EtwEnableCallback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourceId, isEnabled, level, matchAnyKeywords, matchAllKeywords, filterData, callbackContext});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::EtwEnableCallback::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::EtwEnableCallback::*)(ByRef<::System::Guid>, ByRef<int>, ByRef<uint8_t>, ByRef<int64_t>, ByRef<int64_t>, ByRef<::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::EVENT_FILTER_DESCRIPTOR*>, ByRef<void*>, ::System::AsyncCallback*, ::Il2CppObject*)>(&Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::EtwEnableCallback::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* sourceId = &::il2cpp_utils::GetClassFromName("System", "Guid")->this_arg;
    static auto* isEnabled = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* level = &::il2cpp_utils::GetClassFromName("System", "Byte")->this_arg;
    static auto* matchAnyKeywords = &::il2cpp_utils::GetClassFromName("System", "Int64")->this_arg;
    static auto* matchAllKeywords = &::il2cpp_utils::GetClassFromName("System", "Int64")->this_arg;
    static auto* filterData = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Microsoft.Win32", "UnsafeNativeMethods/ManifestEtw/EVENT_FILTER_DESCRIPTOR"))->this_arg;
    static auto* callbackContext = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Void"))->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::EtwEnableCallback*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourceId, isEnabled, level, matchAnyKeywords, matchAllKeywords, filterData, callbackContext, callback, object});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::EtwEnableCallback::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::EtwEnableCallback::*)(ByRef<::System::Guid>, ::System::IAsyncResult*)>(&Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::EtwEnableCallback::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* sourceId = &::il2cpp_utils::GetClassFromName("System", "Guid")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::EtwEnableCallback*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourceId, result});
  }
};
