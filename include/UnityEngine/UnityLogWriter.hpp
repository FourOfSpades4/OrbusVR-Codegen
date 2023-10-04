// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.TextWriter
#include "System/IO/TextWriter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: UnityLogWriter
  class UnityLogWriter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UnityLogWriter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UnityLogWriter*, "UnityEngine", "UnityLogWriter");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UnityLogWriter
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: A71130
  class UnityLogWriter : public ::System::IO::TextWriter {
    public:
    // public System.Void .ctor()
    // Offset: 0x283736C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityLogWriter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UnityLogWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityLogWriter*, creationType>()));
    }
    // static public System.Void WriteStringToUnityLog(System.String s)
    // Offset: 0x28373D4
    static void WriteStringToUnityLog(::StringW s);
    // static private System.Void WriteStringToUnityLogImpl(System.String s)
    // Offset: 0x28373E0
    static void WriteStringToUnityLogImpl(::StringW s);
    // static public System.Void Init()
    // Offset: 0x283744C
    static void Init();
    // public override System.Void Write(System.Char value)
    // Offset: 0x28374C8
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Write(System.Char value)
    void Write(::Il2CppChar value);
    // public override System.Void Write(System.String s)
    // Offset: 0x28374F8
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Write(System.String s)
    void Write(::StringW s);
    // public override System.Void Write(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x2837508
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Write(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void Write(::ArrayW<::Il2CppChar> buffer, int index, int count);
  }; // UnityEngine.UnityLogWriter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UnityLogWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UnityLogWriter::WriteStringToUnityLog
// Il2CppName: WriteStringToUnityLog
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&UnityEngine::UnityLogWriter::WriteStringToUnityLog)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UnityLogWriter*), "WriteStringToUnityLog", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: UnityEngine::UnityLogWriter::WriteStringToUnityLogImpl
// Il2CppName: WriteStringToUnityLogImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&UnityEngine::UnityLogWriter::WriteStringToUnityLogImpl)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UnityLogWriter*), "WriteStringToUnityLogImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: UnityEngine::UnityLogWriter::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UnityLogWriter::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UnityLogWriter*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UnityLogWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UnityLogWriter::*)(::Il2CppChar)>(&UnityEngine::UnityLogWriter::Write)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UnityLogWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UnityLogWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UnityLogWriter::*)(::StringW)>(&UnityEngine::UnityLogWriter::Write)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UnityLogWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: UnityEngine::UnityLogWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UnityLogWriter::*)(::ArrayW<::Il2CppChar>, int, int)>(&UnityEngine::UnityLogWriter::Write)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UnityLogWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
