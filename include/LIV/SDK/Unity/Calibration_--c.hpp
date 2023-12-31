// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LIV.SDK.Unity.Calibration
#include "LIV/SDK/Unity/Calibration.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: FileSystemEventArgs
  class FileSystemEventArgs;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::LIV::SDK::Unity::Calibration::$$c);
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::Calibration::$$c*, "LIV.SDK.Unity", "Calibration/<>c");
// Type namespace: LIV.SDK.Unity
namespace LIV::SDK::Unity {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: LIV.SDK.Unity.Calibration/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: AD1CE8
  class Calibration::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly LIV.SDK.Unity.Calibration/<>c <>9
    static ::LIV::SDK::Unity::Calibration::$$c* _get_$$9();
    // Set static field: static public readonly LIV.SDK.Unity.Calibration/<>c <>9
    static void _set_$$9(::LIV::SDK::Unity::Calibration::$$c* value);
    // static private System.Void .cctor()
    // Offset: 0x10671F0
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1067254
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Calibration::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::LIV::SDK::Unity::Calibration::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Calibration::$$c*, creationType>()));
    }
    // System.Void <.cctor>b__20_0(System.Object o, System.IO.FileSystemEventArgs e)
    // Offset: 0x106725C
    void $_cctor$b__20_0(::Il2CppObject* o, ::System::IO::FileSystemEventArgs* e);
  }; // LIV.SDK.Unity.Calibration/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LIV::SDK::Unity::Calibration::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&LIV::SDK::Unity::Calibration::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::Calibration::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::Calibration::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: LIV::SDK::Unity::Calibration::$$c::$_cctor$b__20_0
// Il2CppName: <.cctor>b__20_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::Calibration::$$c::*)(::Il2CppObject*, ::System::IO::FileSystemEventArgs*)>(&LIV::SDK::Unity::Calibration::$$c::$_cctor$b__20_0)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System.IO", "FileSystemEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::Calibration::$$c*), "<.cctor>b__20_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o, e});
  }
};
