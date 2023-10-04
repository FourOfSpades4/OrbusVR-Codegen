// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRChaperone
#include "OVR/OpenVR/IVRChaperone.hpp"
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
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OVR::OpenVR::IVRChaperone::_GetPlayAreaSize);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRChaperone::_GetPlayAreaSize*, "OVR.OpenVR", "IVRChaperone/_GetPlayAreaSize");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRChaperone/_GetPlayAreaSize
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: AB76B8
  class IVRChaperone::_GetPlayAreaSize : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x14727DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRChaperone::_GetPlayAreaSize* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::IVRChaperone::_GetPlayAreaSize::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRChaperone::_GetPlayAreaSize*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(ref System.Single pSizeX, ref System.Single pSizeZ)
    // Offset: 0x146421C
    bool Invoke(ByRef<float> pSizeX, ByRef<float> pSizeZ);
    // public System.IAsyncResult BeginInvoke(ref System.Single pSizeX, ref System.Single pSizeZ, System.AsyncCallback callback, System.Object object)
    // Offset: 0x14727EC
    ::System::IAsyncResult* BeginInvoke(ByRef<float> pSizeX, ByRef<float> pSizeZ, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref System.Single pSizeX, ref System.Single pSizeZ, System.IAsyncResult result)
    // Offset: 0x1472898
    bool EndInvoke(ByRef<float> pSizeX, ByRef<float> pSizeZ, ::System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRChaperone/_GetPlayAreaSize
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperone::_GetPlayAreaSize::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperone::_GetPlayAreaSize::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::IVRChaperone::_GetPlayAreaSize::*)(ByRef<float>, ByRef<float>)>(&OVR::OpenVR::IVRChaperone::_GetPlayAreaSize::Invoke)> {
  static const MethodInfo* get() {
    static auto* pSizeX = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* pSizeZ = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRChaperone::_GetPlayAreaSize*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pSizeX, pSizeZ});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperone::_GetPlayAreaSize::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (OVR::OpenVR::IVRChaperone::_GetPlayAreaSize::*)(ByRef<float>, ByRef<float>, ::System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRChaperone::_GetPlayAreaSize::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pSizeX = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* pSizeZ = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRChaperone::_GetPlayAreaSize*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pSizeX, pSizeZ, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperone::_GetPlayAreaSize::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::IVRChaperone::_GetPlayAreaSize::*)(ByRef<float>, ByRef<float>, ::System::IAsyncResult*)>(&OVR::OpenVR::IVRChaperone::_GetPlayAreaSize::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pSizeX = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* pSizeZ = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRChaperone::_GetPlayAreaSize*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pSizeX, pSizeZ, result});
  }
};
