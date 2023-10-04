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
// Forward declaring namespace: FMOD
namespace FMOD {
  // Forward declaring type: MEMORY_TYPE
  struct MEMORY_TYPE;
  // Forward declaring type: StringWrapper
  struct StringWrapper;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: FMOD
namespace FMOD {
  // Forward declaring type: MEMORY_ALLOC_CALLBACK
  class MEMORY_ALLOC_CALLBACK;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::FMOD::MEMORY_ALLOC_CALLBACK);
DEFINE_IL2CPP_ARG_TYPE(::FMOD::MEMORY_ALLOC_CALLBACK*, "FMOD", "MEMORY_ALLOC_CALLBACK");
// Type namespace: FMOD
namespace FMOD {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: FMOD.MEMORY_ALLOC_CALLBACK
  // [TokenAttribute] Offset: FFFFFFFF
  class MEMORY_ALLOC_CALLBACK : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x22DDCC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MEMORY_ALLOC_CALLBACK* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::FMOD::MEMORY_ALLOC_CALLBACK::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MEMORY_ALLOC_CALLBACK*, creationType>(object, method)));
    }
    // public System.IntPtr Invoke(System.UInt32 size, FMOD.MEMORY_TYPE type, FMOD.StringWrapper sourcestr)
    // Offset: 0x22DDCD4
    ::System::IntPtr Invoke(uint size, ::FMOD::MEMORY_TYPE type, ::FMOD::StringWrapper sourcestr);
    // public System.IAsyncResult BeginInvoke(System.UInt32 size, FMOD.MEMORY_TYPE type, FMOD.StringWrapper sourcestr, System.AsyncCallback callback, System.Object object)
    // Offset: 0x22DE18C
    ::System::IAsyncResult* BeginInvoke(uint size, ::FMOD::MEMORY_TYPE type, ::FMOD::StringWrapper sourcestr, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.IntPtr EndInvoke(System.IAsyncResult result)
    // Offset: 0x22DE254
    ::System::IntPtr EndInvoke(::System::IAsyncResult* result);
  }; // FMOD.MEMORY_ALLOC_CALLBACK
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: FMOD::MEMORY_ALLOC_CALLBACK::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: FMOD::MEMORY_ALLOC_CALLBACK::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (FMOD::MEMORY_ALLOC_CALLBACK::*)(uint, ::FMOD::MEMORY_TYPE, ::FMOD::StringWrapper)>(&FMOD::MEMORY_ALLOC_CALLBACK::Invoke)> {
  static const MethodInfo* get() {
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("FMOD", "MEMORY_TYPE")->byval_arg;
    static auto* sourcestr = &::il2cpp_utils::GetClassFromName("FMOD", "StringWrapper")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::MEMORY_ALLOC_CALLBACK*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{size, type, sourcestr});
  }
};
// Writing MetadataGetter for method: FMOD::MEMORY_ALLOC_CALLBACK::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (FMOD::MEMORY_ALLOC_CALLBACK::*)(uint, ::FMOD::MEMORY_TYPE, ::FMOD::StringWrapper, ::System::AsyncCallback*, ::Il2CppObject*)>(&FMOD::MEMORY_ALLOC_CALLBACK::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("FMOD", "MEMORY_TYPE")->byval_arg;
    static auto* sourcestr = &::il2cpp_utils::GetClassFromName("FMOD", "StringWrapper")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::MEMORY_ALLOC_CALLBACK*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{size, type, sourcestr, callback, object});
  }
};
// Writing MetadataGetter for method: FMOD::MEMORY_ALLOC_CALLBACK::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (FMOD::MEMORY_ALLOC_CALLBACK::*)(::System::IAsyncResult*)>(&FMOD::MEMORY_ALLOC_CALLBACK::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::MEMORY_ALLOC_CALLBACK*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
