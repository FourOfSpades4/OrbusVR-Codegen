// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.CultureInfoConverter
#include "System/ComponentModel/CultureInfoConverter.hpp"
// Including type: System.Collections.IComparer
#include "System/Collections/IComparer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::CultureInfoConverter::CultureComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::CultureInfoConverter::CultureComparer*, "System.ComponentModel", "CultureInfoConverter/CultureComparer");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.CultureInfoConverter/CultureComparer
  // [TokenAttribute] Offset: FFFFFFFF
  class CultureInfoConverter::CultureComparer : public ::Il2CppObject/*, public ::System::Collections::IComparer*/ {
    public:
    public:
    // private System.ComponentModel.CultureInfoConverter converter
    // Size: 0x8
    // Offset: 0x10
    ::System::ComponentModel::CultureInfoConverter* converter;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::CultureInfoConverter*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::IComparer
    operator ::System::Collections::IComparer() noexcept {
      return *reinterpret_cast<::System::Collections::IComparer*>(this);
    }
    // Creating conversion operator: operator ::System::ComponentModel::CultureInfoConverter*
    constexpr operator ::System::ComponentModel::CultureInfoConverter*() const noexcept {
      return converter;
    }
    // Get instance field reference: private System.ComponentModel.CultureInfoConverter converter
    [[deprecated("Use field access instead!")]] ::System::ComponentModel::CultureInfoConverter*& dyn_converter();
    // public System.Void .ctor(System.ComponentModel.CultureInfoConverter cultureConverter)
    // Offset: 0x1C37FAC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CultureInfoConverter::CultureComparer* New_ctor(::System::ComponentModel::CultureInfoConverter* cultureConverter) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::CultureInfoConverter::CultureComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CultureInfoConverter::CultureComparer*, creationType>(cultureConverter)));
    }
    // public System.Int32 Compare(System.Object item1, System.Object item2)
    // Offset: 0x1C37FE8
    int Compare(::Il2CppObject* item1, ::Il2CppObject* item2);
  }; // System.ComponentModel.CultureInfoConverter/CultureComparer
  #pragma pack(pop)
  static check_size<sizeof(CultureInfoConverter::CultureComparer), 16 + sizeof(::System::ComponentModel::CultureInfoConverter*)> __System_ComponentModel_CultureInfoConverter_CultureComparerSizeCheck;
  static_assert(sizeof(CultureInfoConverter::CultureComparer) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::CultureInfoConverter::CultureComparer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::CultureInfoConverter::CultureComparer::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ComponentModel::CultureInfoConverter::CultureComparer::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::ComponentModel::CultureInfoConverter::CultureComparer::Compare)> {
  static const MethodInfo* get() {
    static auto* item1 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* item2 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::CultureInfoConverter::CultureComparer*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item1, item2});
  }
};
