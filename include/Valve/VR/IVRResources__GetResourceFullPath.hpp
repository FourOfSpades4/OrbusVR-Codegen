// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVRResources
#include "Valve/VR/IVRResources.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Valve::VR::IVRResources::_GetResourceFullPath);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::IVRResources::_GetResourceFullPath*, "Valve.VR", "IVRResources/_GetResourceFullPath");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRResources/_GetResourceFullPath
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: AD02CC
  class IVRResources::_GetResourceFullPath : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x259D1C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRResources::_GetResourceFullPath* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::IVRResources::_GetResourceFullPath::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRResources::_GetResourceFullPath*, creationType>(object, method)));
    }
    // public System.UInt32 Invoke(System.String pchResourceName, System.String pchResourceTypeDirectory, System.Text.StringBuilder pchPathBuffer, System.UInt32 unBufferLen)
    // Offset: 0x259D1D8
    uint Invoke(::StringW pchResourceName, ::StringW pchResourceTypeDirectory, ::System::Text::StringBuilder* pchPathBuffer, uint unBufferLen);
    // public System.IAsyncResult BeginInvoke(System.String pchResourceName, System.String pchResourceTypeDirectory, System.Text.StringBuilder pchPathBuffer, System.UInt32 unBufferLen, System.AsyncCallback callback, System.Object object)
    // Offset: 0x259D9EC
    ::System::IAsyncResult* BeginInvoke(::StringW pchResourceName, ::StringW pchResourceTypeDirectory, ::System::Text::StringBuilder* pchPathBuffer, uint unBufferLen, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x259DA9C
    uint EndInvoke(::System::IAsyncResult* result);
  }; // Valve.VR.IVRResources/_GetResourceFullPath
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRResources::_GetResourceFullPath::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRResources::_GetResourceFullPath::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Valve::VR::IVRResources::_GetResourceFullPath::*)(::StringW, ::StringW, ::System::Text::StringBuilder*, uint)>(&Valve::VR::IVRResources::_GetResourceFullPath::Invoke)> {
  static const MethodInfo* get() {
    static auto* pchResourceName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchResourceTypeDirectory = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchPathBuffer = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* unBufferLen = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRResources::_GetResourceFullPath*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchResourceName, pchResourceTypeDirectory, pchPathBuffer, unBufferLen});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRResources::_GetResourceFullPath::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Valve::VR::IVRResources::_GetResourceFullPath::*)(::StringW, ::StringW, ::System::Text::StringBuilder*, uint, ::System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRResources::_GetResourceFullPath::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pchResourceName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchResourceTypeDirectory = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchPathBuffer = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* unBufferLen = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRResources::_GetResourceFullPath*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchResourceName, pchResourceTypeDirectory, pchPathBuffer, unBufferLen, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRResources::_GetResourceFullPath::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Valve::VR::IVRResources::_GetResourceFullPath::*)(::System::IAsyncResult*)>(&Valve::VR::IVRResources::_GetResourceFullPath::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRResources::_GetResourceFullPath*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
