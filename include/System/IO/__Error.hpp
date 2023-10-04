// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.IO
namespace System::IO {
  // Forward declaring type: __Error
  class __Error;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::__Error);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__Error*, "System.IO", "__Error");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.__Error
  // [TokenAttribute] Offset: FFFFFFFF
  class __Error : public ::Il2CppObject {
    public:
    // static System.Void EndOfFile()
    // Offset: 0x19D9C98
    static void EndOfFile();
    // static System.Void FileNotOpen()
    // Offset: 0x19ED100
    static void FileNotOpen();
    // static System.Void StreamIsClosed()
    // Offset: 0x19D9ABC
    static void StreamIsClosed();
    // static System.Void MemoryStreamNotExpandable()
    // Offset: 0x19D9EE0
    static void MemoryStreamNotExpandable();
    // static System.Void ReaderClosed()
    // Offset: 0x19E4D80
    static void ReaderClosed();
    // static System.Void ReadNotSupported()
    // Offset: 0x19E1CD0
    static void ReadNotSupported();
    // static System.Void WrongAsyncResult()
    // Offset: 0x19E40F8
    static void WrongAsyncResult();
    // static System.Void EndReadCalledTwice()
    // Offset: 0x19E4180
    static void EndReadCalledTwice();
    // static System.Void EndWriteCalledTwice()
    // Offset: 0x19E4208
    static void EndWriteCalledTwice();
    // static System.String GetDisplayablePath(System.String path, System.Boolean isInvalidPath)
    // Offset: 0x19ED18C
    static ::StringW GetDisplayablePath(::StringW path, bool isInvalidPath);
    // static System.Void WinIOError(System.Int32 errorCode, System.String maybeFullPath)
    // Offset: 0x19ED2EC
    static void WinIOError(int errorCode, ::StringW maybeFullPath);
    // static System.Void WriteNotSupported()
    // Offset: 0x19D9850
    static void WriteNotSupported();
    // static System.Void WriterClosed()
    // Offset: 0x19E7084
    static void WriterClosed();
  }; // System.IO.__Error
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::__Error::EndOfFile
// Il2CppName: EndOfFile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::IO::__Error::EndOfFile)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::__Error*), "EndOfFile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::__Error::FileNotOpen
// Il2CppName: FileNotOpen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::IO::__Error::FileNotOpen)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::__Error*), "FileNotOpen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::__Error::StreamIsClosed
// Il2CppName: StreamIsClosed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::IO::__Error::StreamIsClosed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::__Error*), "StreamIsClosed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::__Error::MemoryStreamNotExpandable
// Il2CppName: MemoryStreamNotExpandable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::IO::__Error::MemoryStreamNotExpandable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::__Error*), "MemoryStreamNotExpandable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::__Error::ReaderClosed
// Il2CppName: ReaderClosed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::IO::__Error::ReaderClosed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::__Error*), "ReaderClosed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::__Error::ReadNotSupported
// Il2CppName: ReadNotSupported
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::IO::__Error::ReadNotSupported)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::__Error*), "ReadNotSupported", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::__Error::WrongAsyncResult
// Il2CppName: WrongAsyncResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::IO::__Error::WrongAsyncResult)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::__Error*), "WrongAsyncResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::__Error::EndReadCalledTwice
// Il2CppName: EndReadCalledTwice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::IO::__Error::EndReadCalledTwice)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::__Error*), "EndReadCalledTwice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::__Error::EndWriteCalledTwice
// Il2CppName: EndWriteCalledTwice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::IO::__Error::EndWriteCalledTwice)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::__Error*), "EndWriteCalledTwice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::__Error::GetDisplayablePath
// Il2CppName: GetDisplayablePath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, bool)>(&System::IO::__Error::GetDisplayablePath)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* isInvalidPath = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::__Error*), "GetDisplayablePath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, isInvalidPath});
  }
};
// Writing MetadataGetter for method: System::IO::__Error::WinIOError
// Il2CppName: WinIOError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::StringW)>(&System::IO::__Error::WinIOError)> {
  static const MethodInfo* get() {
    static auto* errorCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* maybeFullPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::__Error*), "WinIOError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{errorCode, maybeFullPath});
  }
};
// Writing MetadataGetter for method: System::IO::__Error::WriteNotSupported
// Il2CppName: WriteNotSupported
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::IO::__Error::WriteNotSupported)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::__Error*), "WriteNotSupported", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::__Error::WriterClosed
// Il2CppName: WriterClosed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::IO::__Error::WriterClosed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::__Error*), "WriterClosed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
