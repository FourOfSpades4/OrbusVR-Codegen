// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PowerUI.Callback
#include "PowerUI/Callback.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: FilePath
  class FilePath;
  // Forward declaring type: TextPackage
  class TextPackage;
  // Forward declaring type: DataPackage
  class DataPackage;
  // Forward declaring type: ImagePackage
  class ImagePackage;
  // Forward declaring type: FileProtocol
  class FileProtocol;
}
// Completed forward declares
// Type namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: ResourcesProtocolCallback
  class ResourcesProtocolCallback;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PowerUI::ResourcesProtocolCallback);
DEFINE_IL2CPP_ARG_TYPE(::PowerUI::ResourcesProtocolCallback*, "PowerUI", "ResourcesProtocolCallback");
// Type namespace: PowerUI
namespace PowerUI {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: PowerUI.ResourcesProtocolCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class ResourcesProtocolCallback : public ::PowerUI::Callback {
    public:
    public:
    // public PowerUI.FilePath Path
    // Size: 0x8
    // Offset: 0x18
    ::PowerUI::FilePath* Path;
    // Field size check
    static_assert(sizeof(::PowerUI::FilePath*) == 0x8);
    // public PowerUI.TextPackage Text
    // Size: 0x8
    // Offset: 0x20
    ::PowerUI::TextPackage* Text;
    // Field size check
    static_assert(sizeof(::PowerUI::TextPackage*) == 0x8);
    // public PowerUI.DataPackage Data
    // Size: 0x8
    // Offset: 0x28
    ::PowerUI::DataPackage* Data;
    // Field size check
    static_assert(sizeof(::PowerUI::DataPackage*) == 0x8);
    // public PowerUI.ImagePackage Images
    // Size: 0x8
    // Offset: 0x30
    ::PowerUI::ImagePackage* Images;
    // Field size check
    static_assert(sizeof(::PowerUI::ImagePackage*) == 0x8);
    // public PowerUI.FileProtocol Protocol
    // Size: 0x8
    // Offset: 0x38
    ::PowerUI::FileProtocol* Protocol;
    // Field size check
    static_assert(sizeof(::PowerUI::FileProtocol*) == 0x8);
    public:
    // Deleting conversion operator: operator ::PowerUI::Callback*
    constexpr operator ::PowerUI::Callback*() const noexcept = delete;
    // Get instance field reference: public PowerUI.FilePath Path
    [[deprecated("Use field access instead!")]] ::PowerUI::FilePath*& dyn_Path();
    // Get instance field reference: public PowerUI.TextPackage Text
    [[deprecated("Use field access instead!")]] ::PowerUI::TextPackage*& dyn_Text();
    // Get instance field reference: public PowerUI.DataPackage Data
    [[deprecated("Use field access instead!")]] ::PowerUI::DataPackage*& dyn_Data();
    // Get instance field reference: public PowerUI.ImagePackage Images
    [[deprecated("Use field access instead!")]] ::PowerUI::ImagePackage*& dyn_Images();
    // Get instance field reference: public PowerUI.FileProtocol Protocol
    [[deprecated("Use field access instead!")]] ::PowerUI::FileProtocol*& dyn_Protocol();
    // public System.Void .ctor(PowerUI.DataPackage package, PowerUI.FilePath path)
    // Offset: 0x176E368
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResourcesProtocolCallback* New_ctor(::PowerUI::DataPackage* package, ::PowerUI::FilePath* path) {
      static auto ___internal__logger = ::Logger::get().WithContext("::PowerUI::ResourcesProtocolCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResourcesProtocolCallback*, creationType>(package, path)));
    }
    // public System.Void .ctor(PowerUI.TextPackage package, PowerUI.FilePath path)
    // Offset: 0x176EAF4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResourcesProtocolCallback* New_ctor(::PowerUI::TextPackage* package, ::PowerUI::FilePath* path) {
      static auto ___internal__logger = ::Logger::get().WithContext("::PowerUI::ResourcesProtocolCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResourcesProtocolCallback*, creationType>(package, path)));
    }
    // public System.Void .ctor(PowerUI.ImagePackage package, PowerUI.FilePath path)
    // Offset: 0x176CEA4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResourcesProtocolCallback* New_ctor(::PowerUI::ImagePackage* package, ::PowerUI::FilePath* path) {
      static auto ___internal__logger = ::Logger::get().WithContext("::PowerUI::ResourcesProtocolCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResourcesProtocolCallback*, creationType>(package, path)));
    }
    // public override System.Void OnRun()
    // Offset: 0x176EF98
    // Implemented from: PowerUI.Callback
    // Base method: System.Void Callback::OnRun()
    void OnRun();
  }; // PowerUI.ResourcesProtocolCallback
  #pragma pack(pop)
  static check_size<sizeof(ResourcesProtocolCallback), 56 + sizeof(::PowerUI::FileProtocol*)> __PowerUI_ResourcesProtocolCallbackSizeCheck;
  static_assert(sizeof(ResourcesProtocolCallback) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PowerUI::ResourcesProtocolCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: PowerUI::ResourcesProtocolCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: PowerUI::ResourcesProtocolCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: PowerUI::ResourcesProtocolCallback::OnRun
// Il2CppName: OnRun
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::ResourcesProtocolCallback::*)()>(&PowerUI::ResourcesProtocolCallback::OnRun)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::ResourcesProtocolCallback*), "OnRun", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};