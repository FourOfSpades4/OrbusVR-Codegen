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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OvrAvatarAsset
  class OvrAvatarAsset;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: assetLoadedCallback
  class assetLoadedCallback;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::assetLoadedCallback);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::assetLoadedCallback*, "", "assetLoadedCallback");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: assetLoadedCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class assetLoadedCallback : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2833A9C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static assetLoadedCallback* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::assetLoadedCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<assetLoadedCallback*, creationType>(object, method)));
    }
    // public System.Void Invoke(OvrAvatarAsset asset)
    // Offset: 0x2833AAC
    void Invoke(::GlobalNamespace::OvrAvatarAsset* asset);
    // public System.IAsyncResult BeginInvoke(OvrAvatarAsset asset, System.AsyncCallback callback, System.Object object)
    // Offset: 0x28341E0
    ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::OvrAvatarAsset* asset, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x2834204
    void EndInvoke(::System::IAsyncResult* result);
  }; // assetLoadedCallback
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::assetLoadedCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::assetLoadedCallback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::assetLoadedCallback::*)(::GlobalNamespace::OvrAvatarAsset*)>(&GlobalNamespace::assetLoadedCallback::Invoke)> {
  static const MethodInfo* get() {
    static auto* asset = &::il2cpp_utils::GetClassFromName("", "OvrAvatarAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::assetLoadedCallback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asset});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::assetLoadedCallback::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (GlobalNamespace::assetLoadedCallback::*)(::GlobalNamespace::OvrAvatarAsset*, ::System::AsyncCallback*, ::Il2CppObject*)>(&GlobalNamespace::assetLoadedCallback::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* asset = &::il2cpp_utils::GetClassFromName("", "OvrAvatarAsset")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::assetLoadedCallback*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asset, callback, object});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::assetLoadedCallback::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::assetLoadedCallback::*)(::System::IAsyncResult*)>(&GlobalNamespace::assetLoadedCallback::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::assetLoadedCallback*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
