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
  // Forward declaring type: RESULT
  struct RESULT;
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
  // Forward declaring type: SOUND_PCMREADCALLBACK
  class SOUND_PCMREADCALLBACK;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::FMOD::SOUND_PCMREADCALLBACK);
DEFINE_IL2CPP_ARG_TYPE(::FMOD::SOUND_PCMREADCALLBACK*, "FMOD", "SOUND_PCMREADCALLBACK");
// Type namespace: FMOD
namespace FMOD {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: FMOD.SOUND_PCMREADCALLBACK
  // [TokenAttribute] Offset: FFFFFFFF
  class SOUND_PCMREADCALLBACK : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x22E0018
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SOUND_PCMREADCALLBACK* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::FMOD::SOUND_PCMREADCALLBACK::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SOUND_PCMREADCALLBACK*, creationType>(object, method)));
    }
    // public FMOD.RESULT Invoke(System.IntPtr soundraw, System.IntPtr data, System.UInt32 datalen)
    // Offset: 0x22E0028
    ::FMOD::RESULT Invoke(::System::IntPtr soundraw, ::System::IntPtr data, uint datalen);
    // public System.IAsyncResult BeginInvoke(System.IntPtr soundraw, System.IntPtr data, System.UInt32 datalen, System.AsyncCallback callback, System.Object object)
    // Offset: 0x22E04E0
    ::System::IAsyncResult* BeginInvoke(::System::IntPtr soundraw, ::System::IntPtr data, uint datalen, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public FMOD.RESULT EndInvoke(System.IAsyncResult result)
    // Offset: 0x22E05A4
    ::FMOD::RESULT EndInvoke(::System::IAsyncResult* result);
  }; // FMOD.SOUND_PCMREADCALLBACK
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: FMOD::SOUND_PCMREADCALLBACK::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: FMOD::SOUND_PCMREADCALLBACK::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::SOUND_PCMREADCALLBACK::*)(::System::IntPtr, ::System::IntPtr, uint)>(&FMOD::SOUND_PCMREADCALLBACK::Invoke)> {
  static const MethodInfo* get() {
    static auto* soundraw = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* datalen = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::SOUND_PCMREADCALLBACK*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{soundraw, data, datalen});
  }
};
// Writing MetadataGetter for method: FMOD::SOUND_PCMREADCALLBACK::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (FMOD::SOUND_PCMREADCALLBACK::*)(::System::IntPtr, ::System::IntPtr, uint, ::System::AsyncCallback*, ::Il2CppObject*)>(&FMOD::SOUND_PCMREADCALLBACK::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* soundraw = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* datalen = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::SOUND_PCMREADCALLBACK*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{soundraw, data, datalen, callback, object});
  }
};
// Writing MetadataGetter for method: FMOD::SOUND_PCMREADCALLBACK::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::FMOD::RESULT (FMOD::SOUND_PCMREADCALLBACK::*)(::System::IAsyncResult*)>(&FMOD::SOUND_PCMREADCALLBACK::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::SOUND_PCMREADCALLBACK*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
