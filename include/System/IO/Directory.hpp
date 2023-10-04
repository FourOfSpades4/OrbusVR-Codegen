// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: SearchOption
  struct SearchOption;
  // Forward declaring type: DirectoryInfo
  class DirectoryInfo;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Forward declaring type: Directory
  class Directory;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::Directory);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Directory*, "System.IO", "Directory");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.Directory
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: A59958
  class Directory : public ::Il2CppObject {
    public:
    // Nested type: ::System::IO::Directory::SearchData
    class SearchData;
    // static public System.String[] GetFiles(System.String path)
    // Offset: 0x17FC33C
    static ::ArrayW<::StringW> GetFiles(::StringW path);
    // static public System.String[] GetFiles(System.String path, System.String searchPattern)
    // Offset: 0x17FC40C
    static ::ArrayW<::StringW> GetFiles(::StringW path, ::StringW searchPattern);
    // static public System.String[] GetFiles(System.String path, System.String searchPattern, System.IO.SearchOption searchOption)
    // Offset: 0x17FC4DC
    static ::ArrayW<::StringW> GetFiles(::StringW path, ::StringW searchPattern, ::System::IO::SearchOption searchOption);
    // static private System.String[] InternalGetFiles(System.String path, System.String searchPattern, System.IO.SearchOption searchOption)
    // Offset: 0x17FC3E8
    static ::ArrayW<::StringW> InternalGetFiles(::StringW path, ::StringW searchPattern, ::System::IO::SearchOption searchOption);
    // static public System.String[] GetDirectories(System.String path)
    // Offset: 0x17FC6F0
    static ::ArrayW<::StringW> GetDirectories(::StringW path);
    // static public System.String[] GetDirectories(System.String path, System.String searchPattern)
    // Offset: 0x17FC7C0
    static ::ArrayW<::StringW> GetDirectories(::StringW path, ::StringW searchPattern);
    // static private System.String[] InternalGetDirectories(System.String path, System.String searchPattern, System.IO.SearchOption searchOption)
    // Offset: 0x17FC79C
    static ::ArrayW<::StringW> InternalGetDirectories(::StringW path, ::StringW searchPattern, ::System::IO::SearchOption searchOption);
    // static public System.String[] GetFileSystemEntries(System.String path, System.String searchPattern)
    // Offset: 0x17FC890
    static ::ArrayW<::StringW> GetFileSystemEntries(::StringW path, ::StringW searchPattern);
    // static private System.String[] InternalGetFileSystemEntries(System.String path, System.String searchPattern, System.IO.SearchOption searchOption)
    // Offset: 0x17FC960
    static ::ArrayW<::StringW> InternalGetFileSystemEntries(::StringW path, ::StringW searchPattern, ::System::IO::SearchOption searchOption);
    // static System.String[] InternalGetFileDirectoryNames(System.String path, System.String userPathOriginal, System.String searchPattern, System.Boolean includeFiles, System.Boolean includeDirs, System.IO.SearchOption searchOption, System.Boolean checkHost)
    // Offset: 0x17FC610
    static ::ArrayW<::StringW> InternalGetFileDirectoryNames(::StringW path, ::StringW userPathOriginal, ::StringW searchPattern, bool includeFiles, bool includeDirs, ::System::IO::SearchOption searchOption, bool checkHost);
    // static public System.IO.DirectoryInfo CreateDirectory(System.String path)
    // Offset: 0x17FC984
    static ::System::IO::DirectoryInfo* CreateDirectory(::StringW path);
    // static private System.IO.DirectoryInfo CreateDirectoriesInternal(System.String path)
    // Offset: 0x17FCC98
    static ::System::IO::DirectoryInfo* CreateDirectoriesInternal(::StringW path);
    // static public System.Void Delete(System.String path)
    // Offset: 0x17FCF9C
    static void Delete(::StringW path);
    // static private System.Void RecursiveDelete(System.String path)
    // Offset: 0x17FD1EC
    static void RecursiveDelete(::StringW path);
    // static public System.Void Delete(System.String path, System.Boolean recursive)
    // Offset: 0x17FD5C8
    static void Delete(::StringW path, bool recursive);
    // static public System.Boolean Exists(System.String path)
    // Offset: 0x17FD660
    static bool Exists(::StringW path);
    // static public System.String GetCurrentDirectory()
    // Offset: 0x17FD794
    static ::StringW GetCurrentDirectory();
    // static System.String InsecureGetCurrentDirectory()
    // Offset: 0x17FD7AC
    static ::StringW InsecureGetCurrentDirectory();
    // static public System.Void SetCurrentDirectory(System.String path)
    // Offset: 0x17FD860
    static void SetCurrentDirectory(::StringW path);
    // static System.String GetDemandDir(System.String fullPath, System.Boolean thisDirOnly)
    // Offset: 0x17FDA1C
    static ::StringW GetDemandDir(::StringW fullPath, bool thisDirOnly);
  }; // System.IO.Directory
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::Directory::GetFiles
// Il2CppName: GetFiles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (*)(::StringW)>(&System::IO::Directory::GetFiles)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Directory*), "GetFiles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::Directory::GetFiles
// Il2CppName: GetFiles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (*)(::StringW, ::StringW)>(&System::IO::Directory::GetFiles)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* searchPattern = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Directory*), "GetFiles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, searchPattern});
  }
};
// Writing MetadataGetter for method: System::IO::Directory::GetFiles
// Il2CppName: GetFiles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (*)(::StringW, ::StringW, ::System::IO::SearchOption)>(&System::IO::Directory::GetFiles)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* searchPattern = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* searchOption = &::il2cpp_utils::GetClassFromName("System.IO", "SearchOption")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Directory*), "GetFiles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, searchPattern, searchOption});
  }
};
// Writing MetadataGetter for method: System::IO::Directory::InternalGetFiles
// Il2CppName: InternalGetFiles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (*)(::StringW, ::StringW, ::System::IO::SearchOption)>(&System::IO::Directory::InternalGetFiles)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* searchPattern = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* searchOption = &::il2cpp_utils::GetClassFromName("System.IO", "SearchOption")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Directory*), "InternalGetFiles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, searchPattern, searchOption});
  }
};
// Writing MetadataGetter for method: System::IO::Directory::GetDirectories
// Il2CppName: GetDirectories
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (*)(::StringW)>(&System::IO::Directory::GetDirectories)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Directory*), "GetDirectories", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::Directory::GetDirectories
// Il2CppName: GetDirectories
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (*)(::StringW, ::StringW)>(&System::IO::Directory::GetDirectories)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* searchPattern = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Directory*), "GetDirectories", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, searchPattern});
  }
};
// Writing MetadataGetter for method: System::IO::Directory::InternalGetDirectories
// Il2CppName: InternalGetDirectories
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (*)(::StringW, ::StringW, ::System::IO::SearchOption)>(&System::IO::Directory::InternalGetDirectories)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* searchPattern = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* searchOption = &::il2cpp_utils::GetClassFromName("System.IO", "SearchOption")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Directory*), "InternalGetDirectories", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, searchPattern, searchOption});
  }
};
// Writing MetadataGetter for method: System::IO::Directory::GetFileSystemEntries
// Il2CppName: GetFileSystemEntries
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (*)(::StringW, ::StringW)>(&System::IO::Directory::GetFileSystemEntries)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* searchPattern = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Directory*), "GetFileSystemEntries", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, searchPattern});
  }
};
// Writing MetadataGetter for method: System::IO::Directory::InternalGetFileSystemEntries
// Il2CppName: InternalGetFileSystemEntries
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (*)(::StringW, ::StringW, ::System::IO::SearchOption)>(&System::IO::Directory::InternalGetFileSystemEntries)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* searchPattern = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* searchOption = &::il2cpp_utils::GetClassFromName("System.IO", "SearchOption")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Directory*), "InternalGetFileSystemEntries", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, searchPattern, searchOption});
  }
};
// Writing MetadataGetter for method: System::IO::Directory::InternalGetFileDirectoryNames
// Il2CppName: InternalGetFileDirectoryNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (*)(::StringW, ::StringW, ::StringW, bool, bool, ::System::IO::SearchOption, bool)>(&System::IO::Directory::InternalGetFileDirectoryNames)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* userPathOriginal = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* searchPattern = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* includeFiles = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* includeDirs = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* searchOption = &::il2cpp_utils::GetClassFromName("System.IO", "SearchOption")->byval_arg;
    static auto* checkHost = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Directory*), "InternalGetFileDirectoryNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, userPathOriginal, searchPattern, includeFiles, includeDirs, searchOption, checkHost});
  }
};
// Writing MetadataGetter for method: System::IO::Directory::CreateDirectory
// Il2CppName: CreateDirectory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::DirectoryInfo* (*)(::StringW)>(&System::IO::Directory::CreateDirectory)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Directory*), "CreateDirectory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::Directory::CreateDirectoriesInternal
// Il2CppName: CreateDirectoriesInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::DirectoryInfo* (*)(::StringW)>(&System::IO::Directory::CreateDirectoriesInternal)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Directory*), "CreateDirectoriesInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::Directory::Delete
// Il2CppName: Delete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&System::IO::Directory::Delete)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Directory*), "Delete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::Directory::RecursiveDelete
// Il2CppName: RecursiveDelete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&System::IO::Directory::RecursiveDelete)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Directory*), "RecursiveDelete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::Directory::Delete
// Il2CppName: Delete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, bool)>(&System::IO::Directory::Delete)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* recursive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Directory*), "Delete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, recursive});
  }
};
// Writing MetadataGetter for method: System::IO::Directory::Exists
// Il2CppName: Exists
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&System::IO::Directory::Exists)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Directory*), "Exists", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::Directory::GetCurrentDirectory
// Il2CppName: GetCurrentDirectory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&System::IO::Directory::GetCurrentDirectory)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Directory*), "GetCurrentDirectory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Directory::InsecureGetCurrentDirectory
// Il2CppName: InsecureGetCurrentDirectory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&System::IO::Directory::InsecureGetCurrentDirectory)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Directory*), "InsecureGetCurrentDirectory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Directory::SetCurrentDirectory
// Il2CppName: SetCurrentDirectory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&System::IO::Directory::SetCurrentDirectory)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Directory*), "SetCurrentDirectory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::Directory::GetDemandDir
// Il2CppName: GetDemandDir
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, bool)>(&System::IO::Directory::GetDemandDir)> {
  static const MethodInfo* get() {
    static auto* fullPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* thisDirOnly = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Directory*), "GetDemandDir", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fullPath, thisDirOnly});
  }
};