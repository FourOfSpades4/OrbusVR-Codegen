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
  // Forward declaring type: DEBUG_FLAGS
  struct DEBUG_FLAGS;
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
  // Forward declaring type: DSP_LOG_FUNC
  class DSP_LOG_FUNC;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::FMOD::DSP_LOG_FUNC);
DEFINE_IL2CPP_ARG_TYPE(::FMOD::DSP_LOG_FUNC*, "FMOD", "DSP_LOG_FUNC");
// Type namespace: FMOD
namespace FMOD {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: FMOD.DSP_LOG_FUNC
  // [TokenAttribute] Offset: FFFFFFFF
  class DSP_LOG_FUNC : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2272B78
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DSP_LOG_FUNC* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::FMOD::DSP_LOG_FUNC::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DSP_LOG_FUNC*, creationType>(object, method)));
    }
    // public System.Void Invoke(FMOD.DEBUG_FLAGS level, FMOD.StringWrapper file, System.Int32 line, FMOD.StringWrapper function, FMOD.StringWrapper format)
    // Offset: 0x2272B88
    void Invoke(::FMOD::DEBUG_FLAGS level, ::FMOD::StringWrapper file, int line, ::FMOD::StringWrapper function, ::FMOD::StringWrapper format);
    // public System.IAsyncResult BeginInvoke(FMOD.DEBUG_FLAGS level, FMOD.StringWrapper file, System.Int32 line, FMOD.StringWrapper function, FMOD.StringWrapper format, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2273078
    ::System::IAsyncResult* BeginInvoke(::FMOD::DEBUG_FLAGS level, ::FMOD::StringWrapper file, int line, ::FMOD::StringWrapper function, ::FMOD::StringWrapper format, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x227316C
    void EndInvoke(::System::IAsyncResult* result);
  }; // FMOD.DSP_LOG_FUNC
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: FMOD::DSP_LOG_FUNC::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: FMOD::DSP_LOG_FUNC::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (FMOD::DSP_LOG_FUNC::*)(::FMOD::DEBUG_FLAGS, ::FMOD::StringWrapper, int, ::FMOD::StringWrapper, ::FMOD::StringWrapper)>(&FMOD::DSP_LOG_FUNC::Invoke)> {
  static const MethodInfo* get() {
    static auto* level = &::il2cpp_utils::GetClassFromName("FMOD", "DEBUG_FLAGS")->byval_arg;
    static auto* file = &::il2cpp_utils::GetClassFromName("FMOD", "StringWrapper")->byval_arg;
    static auto* line = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* function = &::il2cpp_utils::GetClassFromName("FMOD", "StringWrapper")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("FMOD", "StringWrapper")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::DSP_LOG_FUNC*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{level, file, line, function, format});
  }
};
// Writing MetadataGetter for method: FMOD::DSP_LOG_FUNC::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (FMOD::DSP_LOG_FUNC::*)(::FMOD::DEBUG_FLAGS, ::FMOD::StringWrapper, int, ::FMOD::StringWrapper, ::FMOD::StringWrapper, ::System::AsyncCallback*, ::Il2CppObject*)>(&FMOD::DSP_LOG_FUNC::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* level = &::il2cpp_utils::GetClassFromName("FMOD", "DEBUG_FLAGS")->byval_arg;
    static auto* file = &::il2cpp_utils::GetClassFromName("FMOD", "StringWrapper")->byval_arg;
    static auto* line = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* function = &::il2cpp_utils::GetClassFromName("FMOD", "StringWrapper")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("FMOD", "StringWrapper")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::DSP_LOG_FUNC*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{level, file, line, function, format, callback, object});
  }
};
// Writing MetadataGetter for method: FMOD::DSP_LOG_FUNC::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (FMOD::DSP_LOG_FUNC::*)(::System::IAsyncResult*)>(&FMOD::DSP_LOG_FUNC::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(FMOD::DSP_LOG_FUNC*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
