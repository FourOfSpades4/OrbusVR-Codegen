// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PowerUI.ImageFormat
#include "PowerUI/ImageFormat.hpp"
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
  // Forward declaring type: SPA
  class SPA;
  // Forward declaring type: SPAInstance
  class SPAInstance;
}
// Completed forward declares
// Type namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: SpaFormat
  class SpaFormat;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PowerUI::SpaFormat);
DEFINE_IL2CPP_ARG_TYPE(::PowerUI::SpaFormat*, "PowerUI", "SpaFormat");
// Type namespace: PowerUI
namespace PowerUI {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PowerUI.SpaFormat
  // [TokenAttribute] Offset: FFFFFFFF
  class SpaFormat : public ::PowerUI::ImageFormat {
    public:
    public:
    // public PowerUI.SPA SPAFile
    // Size: 0x8
    // Offset: 0x10
    ::PowerUI::SPA* SPAFile;
    // Field size check
    static_assert(sizeof(::PowerUI::SPA*) == 0x8);
    // public PowerUI.SPAInstance Animation
    // Size: 0x8
    // Offset: 0x18
    ::PowerUI::SPAInstance* Animation;
    // Field size check
    static_assert(sizeof(::PowerUI::SPAInstance*) == 0x8);
    public:
    // Get instance field reference: public PowerUI.SPA SPAFile
    [[deprecated("Use field access instead!")]] ::PowerUI::SPA*& dyn_SPAFile();
    // Get instance field reference: public PowerUI.SPAInstance Animation
    [[deprecated("Use field access instead!")]] ::PowerUI::SPAInstance*& dyn_Animation();
    // public override System.String[] GetNames()
    // Offset: 0x1774C20
    // Implemented from: PowerUI.ImageFormat
    // Base method: System.String[] ImageFormat::GetNames()
    ::ArrayW<::StringW> GetNames();
    // public override System.Int32 get_Height()
    // Offset: 0x1774CD0
    // Implemented from: PowerUI.ImageFormat
    // Base method: System.Int32 ImageFormat::get_Height()
    int get_Height();
    // public override System.Int32 get_Width()
    // Offset: 0x1774CFC
    // Implemented from: PowerUI.ImageFormat
    // Base method: System.Int32 ImageFormat::get_Width()
    int get_Width();
    // public override System.Void Clear()
    // Offset: 0x1774D28
    // Implemented from: PowerUI.ImageFormat
    // Base method: System.Void ImageFormat::Clear()
    void Clear();
    // public override System.Void GoingOnDisplay()
    // Offset: 0x1774D30
    // Implemented from: PowerUI.ImageFormat
    // Base method: System.Void ImageFormat::GoingOnDisplay()
    void GoingOnDisplay();
    // public override System.Void GoingOffDisplay()
    // Offset: 0x1774D64
    // Implemented from: PowerUI.ImageFormat
    // Base method: System.Void ImageFormat::GoingOffDisplay()
    void GoingOffDisplay();
    // public System.Void .ctor()
    // Offset: 0x1774D90
    // Implemented from: PowerUI.ImageFormat
    // Base method: System.Void ImageFormat::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SpaFormat* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PowerUI::SpaFormat::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SpaFormat*, creationType>()));
    }
  }; // PowerUI.SpaFormat
  #pragma pack(pop)
  static check_size<sizeof(SpaFormat), 24 + sizeof(::PowerUI::SPAInstance*)> __PowerUI_SpaFormatSizeCheck;
  static_assert(sizeof(SpaFormat) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PowerUI::SpaFormat::GetNames
// Il2CppName: GetNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (PowerUI::SpaFormat::*)()>(&PowerUI::SpaFormat::GetNames)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::SpaFormat*), "GetNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::SpaFormat::get_Height
// Il2CppName: get_Height
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (PowerUI::SpaFormat::*)()>(&PowerUI::SpaFormat::get_Height)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::SpaFormat*), "get_Height", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::SpaFormat::get_Width
// Il2CppName: get_Width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (PowerUI::SpaFormat::*)()>(&PowerUI::SpaFormat::get_Width)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::SpaFormat*), "get_Width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::SpaFormat::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::SpaFormat::*)()>(&PowerUI::SpaFormat::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::SpaFormat*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::SpaFormat::GoingOnDisplay
// Il2CppName: GoingOnDisplay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::SpaFormat::*)()>(&PowerUI::SpaFormat::GoingOnDisplay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::SpaFormat*), "GoingOnDisplay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::SpaFormat::GoingOffDisplay
// Il2CppName: GoingOffDisplay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::SpaFormat::*)()>(&PowerUI::SpaFormat::GoingOffDisplay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::SpaFormat*), "GoingOffDisplay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::SpaFormat::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
