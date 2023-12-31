// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
  // Forward declaring type: FilePath
  class FilePath;
  // Forward declaring type: DataPackage
  class DataPackage;
  // Forward declaring type: TextPackage
  class TextPackage;
  // Forward declaring type: ImagePackage
  class ImagePackage;
  // Forward declaring type: FormData
  class FormData;
  // Forward declaring type: Element
  class Element;
}
// Completed forward declares
// Type namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: FileProtocol
  class FileProtocol;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PowerUI::FileProtocol);
DEFINE_IL2CPP_ARG_TYPE(::PowerUI::FileProtocol*, "PowerUI", "FileProtocol");
// Type namespace: PowerUI
namespace PowerUI {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: PowerUI.FileProtocol
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  class FileProtocol : public ::Il2CppObject {
    public:
    public:
    // public System.Boolean UseResolution
    // Size: 0x1
    // Offset: 0x10
    bool UseResolution;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return UseResolution;
    }
    // Get instance field reference: public System.Boolean UseResolution
    [[deprecated("Use field access instead!")]] bool& dyn_UseResolution();
    // public System.String[] GetNames()
    // Offset: 0x1A44FF8
    ::ArrayW<::StringW> GetNames();
    // public System.Boolean FullAccess(PowerUI.FilePath path)
    // Offset: 0x1A45000
    bool FullAccess(::PowerUI::FilePath* path);
    // public System.Void OnGetData(PowerUI.DataPackage package, PowerUI.FilePath path)
    // Offset: 0x1A45008
    void OnGetData(::PowerUI::DataPackage* package, ::PowerUI::FilePath* path);
    // public System.Void OnGetText(PowerUI.TextPackage package, PowerUI.FilePath path)
    // Offset: 0x1A4500C
    void OnGetText(::PowerUI::TextPackage* package, ::PowerUI::FilePath* path);
    // public System.Void OnGetGraphic(PowerUI.ImagePackage package, PowerUI.FilePath path)
    // Offset: 0x1A45010
    void OnGetGraphic(::PowerUI::ImagePackage* package, ::PowerUI::FilePath* path);
    // public System.Void OnPostForm(PowerUI.FormData form, PowerUI.Element formElement, PowerUI.FilePath path)
    // Offset: 0x1A45014
    void OnPostForm(::PowerUI::FormData* form, ::PowerUI::Element* formElement, ::PowerUI::FilePath* path);
    // public System.Void OnFollowLink(PowerUI.Element linkElement, PowerUI.FilePath path)
    // Offset: 0x1A45018
    void OnFollowLink(::PowerUI::Element* linkElement, ::PowerUI::FilePath* path);
    // public System.Void .ctor()
    // Offset: 0x1A4501C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileProtocol* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PowerUI::FileProtocol::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileProtocol*, creationType>()));
    }
  }; // PowerUI.FileProtocol
  #pragma pack(pop)
  static check_size<sizeof(FileProtocol), 16 + sizeof(bool)> __PowerUI_FileProtocolSizeCheck;
  static_assert(sizeof(FileProtocol) == 0x11);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PowerUI::FileProtocol::GetNames
// Il2CppName: GetNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (PowerUI::FileProtocol::*)()>(&PowerUI::FileProtocol::GetNames)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::FileProtocol*), "GetNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::FileProtocol::FullAccess
// Il2CppName: FullAccess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (PowerUI::FileProtocol::*)(::PowerUI::FilePath*)>(&PowerUI::FileProtocol::FullAccess)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("PowerUI", "FilePath")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::FileProtocol*), "FullAccess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: PowerUI::FileProtocol::OnGetData
// Il2CppName: OnGetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::FileProtocol::*)(::PowerUI::DataPackage*, ::PowerUI::FilePath*)>(&PowerUI::FileProtocol::OnGetData)> {
  static const MethodInfo* get() {
    static auto* package = &::il2cpp_utils::GetClassFromName("PowerUI", "DataPackage")->byval_arg;
    static auto* path = &::il2cpp_utils::GetClassFromName("PowerUI", "FilePath")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::FileProtocol*), "OnGetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{package, path});
  }
};
// Writing MetadataGetter for method: PowerUI::FileProtocol::OnGetText
// Il2CppName: OnGetText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::FileProtocol::*)(::PowerUI::TextPackage*, ::PowerUI::FilePath*)>(&PowerUI::FileProtocol::OnGetText)> {
  static const MethodInfo* get() {
    static auto* package = &::il2cpp_utils::GetClassFromName("PowerUI", "TextPackage")->byval_arg;
    static auto* path = &::il2cpp_utils::GetClassFromName("PowerUI", "FilePath")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::FileProtocol*), "OnGetText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{package, path});
  }
};
// Writing MetadataGetter for method: PowerUI::FileProtocol::OnGetGraphic
// Il2CppName: OnGetGraphic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::FileProtocol::*)(::PowerUI::ImagePackage*, ::PowerUI::FilePath*)>(&PowerUI::FileProtocol::OnGetGraphic)> {
  static const MethodInfo* get() {
    static auto* package = &::il2cpp_utils::GetClassFromName("PowerUI", "ImagePackage")->byval_arg;
    static auto* path = &::il2cpp_utils::GetClassFromName("PowerUI", "FilePath")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::FileProtocol*), "OnGetGraphic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{package, path});
  }
};
// Writing MetadataGetter for method: PowerUI::FileProtocol::OnPostForm
// Il2CppName: OnPostForm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::FileProtocol::*)(::PowerUI::FormData*, ::PowerUI::Element*, ::PowerUI::FilePath*)>(&PowerUI::FileProtocol::OnPostForm)> {
  static const MethodInfo* get() {
    static auto* form = &::il2cpp_utils::GetClassFromName("PowerUI", "FormData")->byval_arg;
    static auto* formElement = &::il2cpp_utils::GetClassFromName("PowerUI", "Element")->byval_arg;
    static auto* path = &::il2cpp_utils::GetClassFromName("PowerUI", "FilePath")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::FileProtocol*), "OnPostForm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{form, formElement, path});
  }
};
// Writing MetadataGetter for method: PowerUI::FileProtocol::OnFollowLink
// Il2CppName: OnFollowLink
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::FileProtocol::*)(::PowerUI::Element*, ::PowerUI::FilePath*)>(&PowerUI::FileProtocol::OnFollowLink)> {
  static const MethodInfo* get() {
    static auto* linkElement = &::il2cpp_utils::GetClassFromName("PowerUI", "Element")->byval_arg;
    static auto* path = &::il2cpp_utils::GetClassFromName("PowerUI", "FilePath")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::FileProtocol*), "OnFollowLink", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{linkElement, path});
  }
};
// Writing MetadataGetter for method: PowerUI::FileProtocol::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
