// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.Ionic.Zip.ZipException
#include "Pathfinding/Ionic/Zip/ZipException.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Pathfinding.Ionic.Zip
namespace Pathfinding::Ionic::Zip {
  // Forward declaring type: BadPasswordException
  class BadPasswordException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::Ionic::Zip::BadPasswordException);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Ionic::Zip::BadPasswordException*, "Pathfinding.Ionic.Zip", "BadPasswordException");
// Type namespace: Pathfinding.Ionic.Zip
namespace Pathfinding::Ionic::Zip {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Ionic.Zip.BadPasswordException
  // [TokenAttribute] Offset: FFFFFFFF
  // [GuidAttribute] Offset: ABBBC4
  class BadPasswordException : public ::Pathfinding::Ionic::Zip::ZipException {
    public:
    // public System.Void .ctor()
    // Offset: 0x1F47654
    // Implemented from: Pathfinding.Ionic.Zip.ZipException
    // Base method: System.Void ZipException::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BadPasswordException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Ionic::Zip::BadPasswordException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BadPasswordException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x1F476C0
    // Implemented from: Pathfinding.Ionic.Zip.ZipException
    // Base method: System.Void ZipException::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BadPasswordException* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Ionic::Zip::BadPasswordException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BadPasswordException*, creationType>(message)));
    }
  }; // Pathfinding.Ionic.Zip.BadPasswordException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::Ionic::Zip::BadPasswordException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::Ionic::Zip::BadPasswordException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
