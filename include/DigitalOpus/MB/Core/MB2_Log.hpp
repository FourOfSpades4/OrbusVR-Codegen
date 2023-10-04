// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: DigitalOpus::MB::Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: MB2_LogLevel
  struct MB2_LogLevel;
}
// Completed forward declares
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: MB2_Log
  class MB2_Log;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::MB2_Log);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::MB2_Log*, "DigitalOpus.MB.Core", "MB2_Log");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.MB2_Log
  // [TokenAttribute] Offset: FFFFFFFF
  class MB2_Log : public ::Il2CppObject {
    public:
    // static public System.Void Log(DigitalOpus.MB.Core.MB2_LogLevel l, System.String msg, DigitalOpus.MB.Core.MB2_LogLevel currentThreshold)
    // Offset: 0xDF4670
    static void Log(::DigitalOpus::MB::Core::MB2_LogLevel l, ::StringW msg, ::DigitalOpus::MB::Core::MB2_LogLevel currentThreshold);
    // static public System.String Error(System.String msg, params System.Object[] args)
    // Offset: 0xDF4880
    static ::StringW Error(::StringW msg, ::ArrayW<::Il2CppObject*> args);
    // static public System.String Warn(System.String msg, params System.Object[] args)
    // Offset: 0xDF495C
    static ::StringW Warn(::StringW msg, ::ArrayW<::Il2CppObject*> args);
    // static public System.String Info(System.String msg, params System.Object[] args)
    // Offset: 0xDF4A38
    static ::StringW Info(::StringW msg, ::ArrayW<::Il2CppObject*> args);
    // static public System.String LogDebug(System.String msg, params System.Object[] args)
    // Offset: 0xDF4B14
    static ::StringW LogDebug(::StringW msg, ::ArrayW<::Il2CppObject*> args);
    // static public System.String Trace(System.String msg, params System.Object[] args)
    // Offset: 0xDF4BF0
    static ::StringW Trace(::StringW msg, ::ArrayW<::Il2CppObject*> args);
    // public System.Void .ctor()
    // Offset: 0xDF4CCC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB2_Log* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::MB2_Log::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB2_Log*, creationType>()));
    }
  }; // DigitalOpus.MB.Core.MB2_Log
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB2_Log::Log
// Il2CppName: Log
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::DigitalOpus::MB::Core::MB2_LogLevel, ::StringW, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&DigitalOpus::MB::Core::MB2_Log::Log)> {
  static const MethodInfo* get() {
    static auto* l = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB2_LogLevel")->byval_arg;
    static auto* msg = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* currentThreshold = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB2_LogLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB2_Log*), "Log", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{l, msg, currentThreshold});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB2_Log::Error
// Il2CppName: Error
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::ArrayW<::Il2CppObject*>)>(&DigitalOpus::MB::Core::MB2_Log::Error)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB2_Log*), "Error", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg, args});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB2_Log::Warn
// Il2CppName: Warn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::ArrayW<::Il2CppObject*>)>(&DigitalOpus::MB::Core::MB2_Log::Warn)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB2_Log*), "Warn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg, args});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB2_Log::Info
// Il2CppName: Info
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::ArrayW<::Il2CppObject*>)>(&DigitalOpus::MB::Core::MB2_Log::Info)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB2_Log*), "Info", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg, args});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB2_Log::LogDebug
// Il2CppName: LogDebug
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::ArrayW<::Il2CppObject*>)>(&DigitalOpus::MB::Core::MB2_Log::LogDebug)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB2_Log*), "LogDebug", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg, args});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB2_Log::Trace
// Il2CppName: Trace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::ArrayW<::Il2CppObject*>)>(&DigitalOpus::MB::Core::MB2_Log::Trace)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB2_Log*), "Trace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg, args});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB2_Log::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
