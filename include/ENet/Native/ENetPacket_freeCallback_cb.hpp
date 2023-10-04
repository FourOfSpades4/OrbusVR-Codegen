// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ENet.Native.ENetPacket
#include "ENet/Native/ENetPacket.hpp"
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
NEED_NO_BOX(::ENet::Native::ENetPacket::freeCallback_cb);
DEFINE_IL2CPP_ARG_TYPE(::ENet::Native::ENetPacket::freeCallback_cb*, "ENet.Native", "ENetPacket/freeCallback_cb");
// Type namespace: ENet.Native
namespace ENet::Native {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: ENet.Native.ENetPacket/freeCallback_cb
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: AB2A68
  class ENetPacket::freeCallback_cb : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x285B490
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ENetPacket::freeCallback_cb* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::ENet::Native::ENetPacket::freeCallback_cb::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ENetPacket::freeCallback_cb*, creationType>(object, method)));
    }
    // public System.Void Invoke(ENet.Native.ENetPacket* packet)
    // Offset: 0x285B4A0
    void Invoke(::ENet::Native::ENetPacket* packet);
    // public System.IAsyncResult BeginInvoke(ENet.Native.ENetPacket* packet, System.AsyncCallback callback, System.Object object)
    // Offset: 0x285B8E0
    ::System::IAsyncResult* BeginInvoke(::ENet::Native::ENetPacket* packet, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x285B904
    void EndInvoke(::System::IAsyncResult* result);
  }; // ENet.Native.ENetPacket/freeCallback_cb
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ENet::Native::ENetPacket::freeCallback_cb::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: ENet::Native::ENetPacket::freeCallback_cb::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ENet::Native::ENetPacket::freeCallback_cb::*)(::ENet::Native::ENetPacket*)>(&ENet::Native::ENetPacket::freeCallback_cb::Invoke)> {
  static const MethodInfo* get() {
    static auto* packet = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("ENet.Native", "ENetPacket"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetPacket::freeCallback_cb*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{packet});
  }
};
// Writing MetadataGetter for method: ENet::Native::ENetPacket::freeCallback_cb::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (ENet::Native::ENetPacket::freeCallback_cb::*)(::ENet::Native::ENetPacket*, ::System::AsyncCallback*, ::Il2CppObject*)>(&ENet::Native::ENetPacket::freeCallback_cb::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* packet = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("ENet.Native", "ENetPacket"))->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetPacket::freeCallback_cb*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{packet, callback, object});
  }
};
// Writing MetadataGetter for method: ENet::Native::ENetPacket::freeCallback_cb::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ENet::Native::ENetPacket::freeCallback_cb::*)(::System::IAsyncResult*)>(&ENet::Native::ENetPacket::freeCallback_cb::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ENet::Native::ENetPacket::freeCallback_cb*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
