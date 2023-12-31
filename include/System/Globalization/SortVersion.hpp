// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
// Completed includes
// Type namespace: System.Globalization
namespace System::Globalization {
  // Forward declaring type: SortVersion
  class SortVersion;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Globalization::SortVersion);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::SortVersion*, "System.Globalization", "SortVersion");
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.SortVersion
  // [TokenAttribute] Offset: FFFFFFFF
  class SortVersion : public ::Il2CppObject/*, public ::System::IEquatable_1<::System::Globalization::SortVersion*>*/ {
    public:
    public:
    // private System.Int32 m_NlsVersion
    // Size: 0x4
    // Offset: 0x10
    int m_NlsVersion;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Guid m_SortId
    // Size: 0x10
    // Offset: 0x14
    ::System::Guid m_SortId;
    // Field size check
    static_assert(sizeof(::System::Guid) == 0x10);
    public:
    // Creating interface conversion operator: operator ::System::IEquatable_1<::System::Globalization::SortVersion*>
    operator ::System::IEquatable_1<::System::Globalization::SortVersion*>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::System::Globalization::SortVersion*>*>(this);
    }
    // Get instance field reference: private System.Int32 m_NlsVersion
    [[deprecated("Use field access instead!")]] int& dyn_m_NlsVersion();
    // Get instance field reference: private System.Guid m_SortId
    [[deprecated("Use field access instead!")]] ::System::Guid& dyn_m_SortId();
    // public System.Boolean Equals(System.Globalization.SortVersion other)
    // Offset: 0x17EA20C
    bool Equals(::System::Globalization::SortVersion* other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x17EA15C
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x17EA3A4
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Globalization.SortVersion
  #pragma pack(pop)
  static check_size<sizeof(SortVersion), 20 + sizeof(::System::Guid)> __System_Globalization_SortVersionSizeCheck;
  static_assert(sizeof(SortVersion) == 0x24);
  // static public System.Boolean op_Equality(System.Globalization.SortVersion left, System.Globalization.SortVersion right)
  // Offset: 0x17EA2D8
  bool operator ==(::System::Globalization::SortVersion* left, ::System::Globalization::SortVersion& right);
  // static public System.Boolean op_Inequality(System.Globalization.SortVersion left, System.Globalization.SortVersion right)
  // Offset: 0x17EA1F0
  bool operator !=(::System::Globalization::SortVersion* left, ::System::Globalization::SortVersion& right);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Globalization::SortVersion::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::SortVersion::*)(::System::Globalization::SortVersion*)>(&System::Globalization::SortVersion::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System.Globalization", "SortVersion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::SortVersion*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: System::Globalization::SortVersion::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::SortVersion::*)(::Il2CppObject*)>(&System::Globalization::SortVersion::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::SortVersion*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Globalization::SortVersion::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Globalization::SortVersion::*)()>(&System::Globalization::SortVersion::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::SortVersion*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::SortVersion::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Globalization::SortVersion::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
