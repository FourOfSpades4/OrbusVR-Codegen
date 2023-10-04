// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PowerUI.FileProtocol
#include "PowerUI/FileProtocol.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: ImagePackage
  class ImagePackage;
  // Forward declaring type: FilePath
  class FilePath;
  // Forward declaring type: TextPackage
  class TextPackage;
  // Forward declaring type: DataPackage
  class DataPackage;
}
// Completed forward declares
// Type namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: DriveProtocol
  class DriveProtocol;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PowerUI::DriveProtocol);
DEFINE_IL2CPP_ARG_TYPE(::PowerUI::DriveProtocol*, "PowerUI", "DriveProtocol");
// Type namespace: PowerUI
namespace PowerUI {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: PowerUI.DriveProtocol
  // [TokenAttribute] Offset: FFFFFFFF
  class DriveProtocol : public ::PowerUI::FileProtocol {
    public:
    // public override System.String[] GetNames()
    // Offset: 0x1858560
    // Implemented from: PowerUI.FileProtocol
    // Base method: System.String[] FileProtocol::GetNames()
    ::ArrayW<::StringW> GetNames();
    // public override System.Void OnGetGraphic(PowerUI.ImagePackage package, PowerUI.FilePath path)
    // Offset: 0x1858610
    // Implemented from: PowerUI.FileProtocol
    // Base method: System.Void FileProtocol::OnGetGraphic(PowerUI.ImagePackage package, PowerUI.FilePath path)
    void OnGetGraphic(::PowerUI::ImagePackage* package, ::PowerUI::FilePath* path);
    // public override System.Void OnGetText(PowerUI.TextPackage package, PowerUI.FilePath path)
    // Offset: 0x18586C8
    // Implemented from: PowerUI.FileProtocol
    // Base method: System.Void FileProtocol::OnGetText(PowerUI.TextPackage package, PowerUI.FilePath path)
    void OnGetText(::PowerUI::TextPackage* package, ::PowerUI::FilePath* path);
    // public override System.Void OnGetData(PowerUI.DataPackage package, PowerUI.FilePath path)
    // Offset: 0x1858764
    // Implemented from: PowerUI.FileProtocol
    // Base method: System.Void FileProtocol::OnGetData(PowerUI.DataPackage package, PowerUI.FilePath path)
    void OnGetData(::PowerUI::DataPackage* package, ::PowerUI::FilePath* path);
    // public System.Void .ctor()
    // Offset: 0x18587D4
    // Implemented from: PowerUI.FileProtocol
    // Base method: System.Void FileProtocol::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DriveProtocol* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PowerUI::DriveProtocol::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DriveProtocol*, creationType>()));
    }
  }; // PowerUI.DriveProtocol
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PowerUI::DriveProtocol::GetNames
// Il2CppName: GetNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (PowerUI::DriveProtocol::*)()>(&PowerUI::DriveProtocol::GetNames)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::DriveProtocol*), "GetNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::DriveProtocol::OnGetGraphic
// Il2CppName: OnGetGraphic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::DriveProtocol::*)(::PowerUI::ImagePackage*, ::PowerUI::FilePath*)>(&PowerUI::DriveProtocol::OnGetGraphic)> {
  static const MethodInfo* get() {
    static auto* package = &::il2cpp_utils::GetClassFromName("PowerUI", "ImagePackage")->byval_arg;
    static auto* path = &::il2cpp_utils::GetClassFromName("PowerUI", "FilePath")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::DriveProtocol*), "OnGetGraphic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{package, path});
  }
};
// Writing MetadataGetter for method: PowerUI::DriveProtocol::OnGetText
// Il2CppName: OnGetText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::DriveProtocol::*)(::PowerUI::TextPackage*, ::PowerUI::FilePath*)>(&PowerUI::DriveProtocol::OnGetText)> {
  static const MethodInfo* get() {
    static auto* package = &::il2cpp_utils::GetClassFromName("PowerUI", "TextPackage")->byval_arg;
    static auto* path = &::il2cpp_utils::GetClassFromName("PowerUI", "FilePath")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::DriveProtocol*), "OnGetText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{package, path});
  }
};
// Writing MetadataGetter for method: PowerUI::DriveProtocol::OnGetData
// Il2CppName: OnGetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::DriveProtocol::*)(::PowerUI::DataPackage*, ::PowerUI::FilePath*)>(&PowerUI::DriveProtocol::OnGetData)> {
  static const MethodInfo* get() {
    static auto* package = &::il2cpp_utils::GetClassFromName("PowerUI", "DataPackage")->byval_arg;
    static auto* path = &::il2cpp_utils::GetClassFromName("PowerUI", "FilePath")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::DriveProtocol*), "OnGetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{package, path});
  }
};
// Writing MetadataGetter for method: PowerUI::DriveProtocol::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!