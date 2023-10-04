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
  // Forward declaring type: BadCrcException
  class BadCrcException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::Ionic::Zip::BadCrcException);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Ionic::Zip::BadCrcException*, "Pathfinding.Ionic.Zip", "BadCrcException");
// Type namespace: Pathfinding.Ionic.Zip
namespace Pathfinding::Ionic::Zip {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Ionic.Zip.BadCrcException
  // [TokenAttribute] Offset: FFFFFFFF
  // [GuidAttribute] Offset: ABBC34
  class BadCrcException : public ::Pathfinding::Ionic::Zip::ZipException {
    public:
    // public System.Void .ctor(System.String message)
    // Offset: 0x1F475D8
    // Implemented from: Pathfinding.Ionic.Zip.ZipException
    // Base method: System.Void ZipException::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BadCrcException* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Ionic::Zip::BadCrcException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BadCrcException*, creationType>(message)));
    }
  }; // Pathfinding.Ionic.Zip.BadCrcException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::Ionic::Zip::BadCrcException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!