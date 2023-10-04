// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ONSPPropagationMaterial/Spectrum
#include "GlobalNamespace/ONSPPropagationMaterial_Spectrum.hpp"
// Including type: ONSPPropagationMaterial
#include "GlobalNamespace/ONSPPropagationMaterial.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ONSPPropagationMaterial::Spectrum::$$c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ONSPPropagationMaterial::Spectrum::$$c*, "", "ONSPPropagationMaterial/Spectrum/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ONSPPropagationMaterial/Spectrum/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: ACE680
  class ONSPPropagationMaterial::Spectrum::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly ONSPPropagationMaterial/Spectrum/<>c <>9
    static ::GlobalNamespace::ONSPPropagationMaterial::Spectrum::$$c* _get_$$9();
    // Set static field: static public readonly ONSPPropagationMaterial/Spectrum/<>c <>9
    static void _set_$$9(::GlobalNamespace::ONSPPropagationMaterial::Spectrum::$$c* value);
    // Get static field: static public System.Func`2<ONSPPropagationMaterial/Point,System.Single> <>9__3_0
    static ::System::Func_2<::GlobalNamespace::ONSPPropagationMaterial::Point*, float>* _get_$$9__3_0();
    // Set static field: static public System.Func`2<ONSPPropagationMaterial/Point,System.Single> <>9__3_0
    static void _set_$$9__3_0(::System::Func_2<::GlobalNamespace::ONSPPropagationMaterial::Point*, float>* value);
    // Get static field: static public System.Func`2<ONSPPropagationMaterial/Point,System.Single> <>9__3_1
    static ::System::Func_2<::GlobalNamespace::ONSPPropagationMaterial::Point*, float>* _get_$$9__3_1();
    // Set static field: static public System.Func`2<ONSPPropagationMaterial/Point,System.Single> <>9__3_1
    static void _set_$$9__3_1(::System::Func_2<::GlobalNamespace::ONSPPropagationMaterial::Point*, float>* value);
    // static private System.Void .cctor()
    // Offset: 0x1382958
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x13829BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ONSPPropagationMaterial::Spectrum::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ONSPPropagationMaterial::Spectrum::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ONSPPropagationMaterial::Spectrum::$$c*, creationType>()));
    }
    // System.Single <get_Item>b__3_0(ONSPPropagationMaterial/Point p)
    // Offset: 0x13829C4
    float $get_Item$b__3_0(::GlobalNamespace::ONSPPropagationMaterial::Point* p);
    // System.Single <get_Item>b__3_1(ONSPPropagationMaterial/Point p)
    // Offset: 0x13829F0
    float $get_Item$b__3_1(::GlobalNamespace::ONSPPropagationMaterial::Point* p);
  }; // ONSPPropagationMaterial/Spectrum/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ONSPPropagationMaterial::Spectrum::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::ONSPPropagationMaterial::Spectrum::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPPropagationMaterial::Spectrum::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ONSPPropagationMaterial::Spectrum::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ONSPPropagationMaterial::Spectrum::$$c::$get_Item$b__3_0
// Il2CppName: <get_Item>b__3_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::ONSPPropagationMaterial::Spectrum::$$c::*)(::GlobalNamespace::ONSPPropagationMaterial::Point*)>(&GlobalNamespace::ONSPPropagationMaterial::Spectrum::$$c::$get_Item$b__3_0)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("", "ONSPPropagationMaterial/Point")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPPropagationMaterial::Spectrum::$$c*), "<get_Item>b__3_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ONSPPropagationMaterial::Spectrum::$$c::$get_Item$b__3_1
// Il2CppName: <get_Item>b__3_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::ONSPPropagationMaterial::Spectrum::$$c::*)(::GlobalNamespace::ONSPPropagationMaterial::Point*)>(&GlobalNamespace::ONSPPropagationMaterial::Spectrum::$$c::$get_Item$b__3_1)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("", "ONSPPropagationMaterial/Point")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPPropagationMaterial::Spectrum::$$c*), "<get_Item>b__3_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
