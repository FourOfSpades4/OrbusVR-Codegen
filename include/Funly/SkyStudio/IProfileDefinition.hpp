// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Funly::SkyStudio
namespace Funly::SkyStudio {
  // Forward declaring type: ProfileFeatureSection
  class ProfileFeatureSection;
  // Forward declaring type: ProfileGroupSection
  class ProfileGroupSection;
  // Forward declaring type: ProfileFeatureDefinition
  class ProfileFeatureDefinition;
}
// Completed forward declares
// Type namespace: Funly.SkyStudio
namespace Funly::SkyStudio {
  // Forward declaring type: IProfileDefinition
  class IProfileDefinition;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Funly::SkyStudio::IProfileDefinition);
DEFINE_IL2CPP_ARG_TYPE(::Funly::SkyStudio::IProfileDefinition*, "Funly.SkyStudio", "IProfileDefinition");
// Type namespace: Funly.SkyStudio
namespace Funly::SkyStudio {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Funly.SkyStudio.IProfileDefinition
  // [TokenAttribute] Offset: FFFFFFFF
  class IProfileDefinition {
    public:
    // public System.String get_shaderName()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_shaderName();
    // public Funly.SkyStudio.ProfileFeatureSection[] get_features()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<::Funly::SkyStudio::ProfileFeatureSection*> get_features();
    // public Funly.SkyStudio.ProfileGroupSection[] get_groups()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<::Funly::SkyStudio::ProfileGroupSection*> get_groups();
    // public Funly.SkyStudio.ProfileFeatureDefinition GetFeatureDefinition(System.String featureKey)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Funly::SkyStudio::ProfileFeatureDefinition* GetFeatureDefinition(::StringW featureKey);
  }; // Funly.SkyStudio.IProfileDefinition
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Funly::SkyStudio::IProfileDefinition::get_shaderName
// Il2CppName: get_shaderName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Funly::SkyStudio::IProfileDefinition::*)()>(&Funly::SkyStudio::IProfileDefinition::get_shaderName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::IProfileDefinition*), "get_shaderName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::IProfileDefinition::get_features
// Il2CppName: get_features
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Funly::SkyStudio::ProfileFeatureSection*> (Funly::SkyStudio::IProfileDefinition::*)()>(&Funly::SkyStudio::IProfileDefinition::get_features)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::IProfileDefinition*), "get_features", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::IProfileDefinition::get_groups
// Il2CppName: get_groups
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Funly::SkyStudio::ProfileGroupSection*> (Funly::SkyStudio::IProfileDefinition::*)()>(&Funly::SkyStudio::IProfileDefinition::get_groups)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::IProfileDefinition*), "get_groups", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::IProfileDefinition::GetFeatureDefinition
// Il2CppName: GetFeatureDefinition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Funly::SkyStudio::ProfileFeatureDefinition* (Funly::SkyStudio::IProfileDefinition::*)(::StringW)>(&Funly::SkyStudio::IProfileDefinition::GetFeatureDefinition)> {
  static const MethodInfo* get() {
    static auto* featureKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::IProfileDefinition*), "GetFeatureDefinition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{featureKey});
  }
};
