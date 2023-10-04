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
// Forward declaring namespace: LitJson
namespace LitJson {
  // Forward declaring type: IJsonWrapper
  class IJsonWrapper;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: LitJson
namespace LitJson {
  // Forward declaring type: WrapperFactory
  class WrapperFactory;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::LitJson::WrapperFactory);
DEFINE_IL2CPP_ARG_TYPE(::LitJson::WrapperFactory*, "LitJson", "WrapperFactory");
// Type namespace: LitJson
namespace LitJson {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: LitJson.WrapperFactory
  // [TokenAttribute] Offset: FFFFFFFF
  class WrapperFactory : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x12021F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WrapperFactory* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::LitJson::WrapperFactory::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WrapperFactory*, creationType>(object, method)));
    }
    // public LitJson.IJsonWrapper Invoke()
    // Offset: 0x1201DDC
    ::LitJson::IJsonWrapper* Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x120DE8C
    ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public LitJson.IJsonWrapper EndInvoke(System.IAsyncResult result)
    // Offset: 0x120DEC0
    ::LitJson::IJsonWrapper* EndInvoke(::System::IAsyncResult* result);
  }; // LitJson.WrapperFactory
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LitJson::WrapperFactory::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: LitJson::WrapperFactory::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LitJson::IJsonWrapper* (LitJson::WrapperFactory::*)()>(&LitJson::WrapperFactory::Invoke)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LitJson::WrapperFactory*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LitJson::WrapperFactory::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (LitJson::WrapperFactory::*)(::System::AsyncCallback*, ::Il2CppObject*)>(&LitJson::WrapperFactory::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::WrapperFactory*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, object});
  }
};
// Writing MetadataGetter for method: LitJson::WrapperFactory::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LitJson::IJsonWrapper* (LitJson::WrapperFactory::*)(::System::IAsyncResult*)>(&LitJson::WrapperFactory::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::WrapperFactory*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
