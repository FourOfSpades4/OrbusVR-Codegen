// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.Ionic.Zip.ZipProgressEventArgs
#include "Pathfinding/Ionic/Zip/ZipProgressEventArgs.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding::Ionic::Zip
namespace Pathfinding::Ionic::Zip {
  // Forward declaring type: ZipEntry
  class ZipEntry;
}
// Completed forward declares
// Type namespace: Pathfinding.Ionic.Zip
namespace Pathfinding::Ionic::Zip {
  // Forward declaring type: ReadProgressEventArgs
  class ReadProgressEventArgs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::Ionic::Zip::ReadProgressEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Ionic::Zip::ReadProgressEventArgs*, "Pathfinding.Ionic.Zip", "ReadProgressEventArgs");
// Type namespace: Pathfinding.Ionic.Zip
namespace Pathfinding::Ionic::Zip {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Ionic.Zip.ReadProgressEventArgs
  // [TokenAttribute] Offset: FFFFFFFF
  class ReadProgressEventArgs : public ::Pathfinding::Ionic::Zip::ZipProgressEventArgs {
    public:
    // static Pathfinding.Ionic.Zip.ReadProgressEventArgs Before(System.String archiveName, System.Int32 entriesTotal)
    // Offset: 0x1F493A0
    static ::Pathfinding::Ionic::Zip::ReadProgressEventArgs* Before(::StringW archiveName, int entriesTotal);
    // static Pathfinding.Ionic.Zip.ReadProgressEventArgs After(System.String archiveName, Pathfinding.Ionic.Zip.ZipEntry entry, System.Int32 entriesTotal)
    // Offset: 0x1F49430
    static ::Pathfinding::Ionic::Zip::ReadProgressEventArgs* After(::StringW archiveName, ::Pathfinding::Ionic::Zip::ZipEntry* entry, int entriesTotal);
    // static Pathfinding.Ionic.Zip.ReadProgressEventArgs Started(System.String archiveName)
    // Offset: 0x1F494F4
    static ::Pathfinding::Ionic::Zip::ReadProgressEventArgs* Started(::StringW archiveName);
    // static Pathfinding.Ionic.Zip.ReadProgressEventArgs ByteUpdate(System.String archiveName, Pathfinding.Ionic.Zip.ZipEntry entry, System.Int64 bytesXferred, System.Int64 totalBytes)
    // Offset: 0x1F4955C
    static ::Pathfinding::Ionic::Zip::ReadProgressEventArgs* ByteUpdate(::StringW archiveName, ::Pathfinding::Ionic::Zip::ZipEntry* entry, int64_t bytesXferred, int64_t totalBytes);
    // static Pathfinding.Ionic.Zip.ReadProgressEventArgs Completed(System.String archiveName)
    // Offset: 0x1F49654
    static ::Pathfinding::Ionic::Zip::ReadProgressEventArgs* Completed(::StringW archiveName);
    // private System.Void .ctor(System.String archiveName, Pathfinding.Ionic.Zip.ZipProgressEventType flavor)
    // Offset: 0x1F49398
    // Implemented from: Pathfinding.Ionic.Zip.ZipProgressEventArgs
    // Base method: System.Void ZipProgressEventArgs::.ctor(System.String archiveName, Pathfinding.Ionic.Zip.ZipProgressEventType flavor)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReadProgressEventArgs* New_ctor(::StringW archiveName, ::Pathfinding::Ionic::Zip::ZipProgressEventType flavor) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Ionic::Zip::ReadProgressEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReadProgressEventArgs*, creationType>(archiveName, flavor)));
    }
  }; // Pathfinding.Ionic.Zip.ReadProgressEventArgs
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::Ionic::Zip::ReadProgressEventArgs::Before
// Il2CppName: Before
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::Ionic::Zip::ReadProgressEventArgs* (*)(::StringW, int)>(&Pathfinding::Ionic::Zip::ReadProgressEventArgs::Before)> {
  static const MethodInfo* get() {
    static auto* archiveName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* entriesTotal = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zip::ReadProgressEventArgs*), "Before", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{archiveName, entriesTotal});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zip::ReadProgressEventArgs::After
// Il2CppName: After
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::Ionic::Zip::ReadProgressEventArgs* (*)(::StringW, ::Pathfinding::Ionic::Zip::ZipEntry*, int)>(&Pathfinding::Ionic::Zip::ReadProgressEventArgs::After)> {
  static const MethodInfo* get() {
    static auto* archiveName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* entry = &::il2cpp_utils::GetClassFromName("Pathfinding.Ionic.Zip", "ZipEntry")->byval_arg;
    static auto* entriesTotal = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zip::ReadProgressEventArgs*), "After", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{archiveName, entry, entriesTotal});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zip::ReadProgressEventArgs::Started
// Il2CppName: Started
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::Ionic::Zip::ReadProgressEventArgs* (*)(::StringW)>(&Pathfinding::Ionic::Zip::ReadProgressEventArgs::Started)> {
  static const MethodInfo* get() {
    static auto* archiveName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zip::ReadProgressEventArgs*), "Started", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{archiveName});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zip::ReadProgressEventArgs::ByteUpdate
// Il2CppName: ByteUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::Ionic::Zip::ReadProgressEventArgs* (*)(::StringW, ::Pathfinding::Ionic::Zip::ZipEntry*, int64_t, int64_t)>(&Pathfinding::Ionic::Zip::ReadProgressEventArgs::ByteUpdate)> {
  static const MethodInfo* get() {
    static auto* archiveName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* entry = &::il2cpp_utils::GetClassFromName("Pathfinding.Ionic.Zip", "ZipEntry")->byval_arg;
    static auto* bytesXferred = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* totalBytes = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zip::ReadProgressEventArgs*), "ByteUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{archiveName, entry, bytesXferred, totalBytes});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zip::ReadProgressEventArgs::Completed
// Il2CppName: Completed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::Ionic::Zip::ReadProgressEventArgs* (*)(::StringW)>(&Pathfinding::Ionic::Zip::ReadProgressEventArgs::Completed)> {
  static const MethodInfo* get() {
    static auto* archiveName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zip::ReadProgressEventArgs*), "Completed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{archiveName});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zip::ReadProgressEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
