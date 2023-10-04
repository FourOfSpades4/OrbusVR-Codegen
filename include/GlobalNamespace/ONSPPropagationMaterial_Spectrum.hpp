// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ONSPPropagationMaterial
#include "GlobalNamespace/ONSPPropagationMaterial.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ONSPPropagationMaterial::Spectrum);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ONSPPropagationMaterial::Spectrum*, "", "ONSPPropagationMaterial/Spectrum");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: ONSPPropagationMaterial/Spectrum
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: ACE648
  class ONSPPropagationMaterial::Spectrum : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::ONSPPropagationMaterial::Spectrum::$$c
    class $$c;
    public:
    // public System.Int32 selection
    // Size: 0x4
    // Offset: 0x10
    int selection;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: selection and: points
    char __padding0[0x4] = {};
    // public System.Collections.Generic.List`1<ONSPPropagationMaterial/Point> points
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::GlobalNamespace::ONSPPropagationMaterial::Point*>* points;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::ONSPPropagationMaterial::Point*>*) == 0x8);
    public:
    // Get instance field reference: public System.Int32 selection
    [[deprecated("Use field access instead!")]] int& dyn_selection();
    // Get instance field reference: public System.Collections.Generic.List`1<ONSPPropagationMaterial/Point> points
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::ONSPPropagationMaterial::Point*>*& dyn_points();
    // public System.Single get_Item(System.Single f)
    // Offset: 0x13824BC
    float get_Item(float f);
    // public System.Void .ctor()
    // Offset: 0x13828E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ONSPPropagationMaterial::Spectrum* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ONSPPropagationMaterial::Spectrum::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ONSPPropagationMaterial::Spectrum*, creationType>()));
    }
  }; // ONSPPropagationMaterial/Spectrum
  #pragma pack(pop)
  static check_size<sizeof(ONSPPropagationMaterial::Spectrum), 24 + sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::ONSPPropagationMaterial::Point*>*)> __GlobalNamespace_ONSPPropagationMaterial_SpectrumSizeCheck;
  static_assert(sizeof(ONSPPropagationMaterial::Spectrum) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ONSPPropagationMaterial::Spectrum::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::ONSPPropagationMaterial::Spectrum::*)(float)>(&GlobalNamespace::ONSPPropagationMaterial::Spectrum::get_Item)> {
  static const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPPropagationMaterial::Spectrum*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ONSPPropagationMaterial::Spectrum::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!