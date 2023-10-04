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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Pathfinding.Ionic.Zip
namespace Pathfinding::Ionic::Zip {
  // Forward declaring type: OpenDelegate
  class OpenDelegate;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::Ionic::Zip::OpenDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Ionic::Zip::OpenDelegate*, "Pathfinding.Ionic.Zip", "OpenDelegate");
// Type namespace: Pathfinding.Ionic.Zip
namespace Pathfinding::Ionic::Zip {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Ionic.Zip.OpenDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class OpenDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1F48C08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OpenDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Ionic::Zip::OpenDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OpenDelegate*, creationType>(object, method)));
    }
    // public System.IO.Stream Invoke(System.String entryName)
    // Offset: 0x1F48C18
    ::System::IO::Stream* Invoke(::StringW entryName);
    // public System.IAsyncResult BeginInvoke(System.String entryName, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1F49368
    ::System::IAsyncResult* BeginInvoke(::StringW entryName, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.IO.Stream EndInvoke(System.IAsyncResult result)
    // Offset: 0x1F4938C
    ::System::IO::Stream* EndInvoke(::System::IAsyncResult* result);
  }; // Pathfinding.Ionic.Zip.OpenDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::Ionic::Zip::OpenDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::Ionic::Zip::OpenDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (Pathfinding::Ionic::Zip::OpenDelegate::*)(::StringW)>(&Pathfinding::Ionic::Zip::OpenDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* entryName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zip::OpenDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{entryName});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zip::OpenDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Pathfinding::Ionic::Zip::OpenDelegate::*)(::StringW, ::System::AsyncCallback*, ::Il2CppObject*)>(&Pathfinding::Ionic::Zip::OpenDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* entryName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zip::OpenDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{entryName, callback, object});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zip::OpenDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (Pathfinding::Ionic::Zip::OpenDelegate::*)(::System::IAsyncResult*)>(&Pathfinding::Ionic::Zip::OpenDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zip::OpenDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
