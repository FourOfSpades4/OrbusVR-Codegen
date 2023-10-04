// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: UnityEngineInternal.TypeInferenceRules
#include "UnityEngineInternal/TypeInferenceRules.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngineInternal
namespace UnityEngineInternal {
  // Forward declaring type: TypeInferenceRuleAttribute
  class TypeInferenceRuleAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngineInternal::TypeInferenceRuleAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngineInternal::TypeInferenceRuleAttribute*, "UnityEngineInternal", "TypeInferenceRuleAttribute");
// Type namespace: UnityEngineInternal
namespace UnityEngineInternal {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngineInternal.TypeInferenceRuleAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: A720D8
  class TypeInferenceRuleAttribute : public ::System::Attribute {
    public:
    public:
    // private readonly System.String _rule
    // Size: 0x8
    // Offset: 0x10
    ::StringW rule;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return rule;
    }
    // Get instance field reference: private readonly System.String _rule
    [[deprecated("Use field access instead!")]] ::StringW& dyn__rule();
    // public System.Void .ctor(UnityEngineInternal.TypeInferenceRules rule)
    // Offset: 0x283F93C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeInferenceRuleAttribute* New_ctor(::UnityEngineInternal::TypeInferenceRules rule) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngineInternal::TypeInferenceRuleAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeInferenceRuleAttribute*, creationType>(rule)));
    }
    // public System.Void .ctor(System.String rule)
    // Offset: 0x283F9E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeInferenceRuleAttribute* New_ctor(::StringW rule) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngineInternal::TypeInferenceRuleAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeInferenceRuleAttribute*, creationType>(rule)));
    }
    // public override System.String ToString()
    // Offset: 0x283FA14
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // UnityEngineInternal.TypeInferenceRuleAttribute
  #pragma pack(pop)
  static check_size<sizeof(TypeInferenceRuleAttribute), 16 + sizeof(::StringW)> __UnityEngineInternal_TypeInferenceRuleAttributeSizeCheck;
  static_assert(sizeof(TypeInferenceRuleAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngineInternal::TypeInferenceRuleAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngineInternal::TypeInferenceRuleAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngineInternal::TypeInferenceRuleAttribute::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngineInternal::TypeInferenceRuleAttribute::*)()>(&UnityEngineInternal::TypeInferenceRuleAttribute::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngineInternal::TypeInferenceRuleAttribute*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
