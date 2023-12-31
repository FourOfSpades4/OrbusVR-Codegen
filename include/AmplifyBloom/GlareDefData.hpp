// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: AmplifyBloom.StarLibType
#include "AmplifyBloom/StarLibType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: AmplifyBloom
namespace AmplifyBloom {
  // Forward declaring type: StarDefData
  class StarDefData;
}
// Completed forward declares
// Type namespace: AmplifyBloom
namespace AmplifyBloom {
  // Forward declaring type: GlareDefData
  class GlareDefData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::AmplifyBloom::GlareDefData);
DEFINE_IL2CPP_ARG_TYPE(::AmplifyBloom::GlareDefData*, "AmplifyBloom", "GlareDefData");
// Type namespace: AmplifyBloom
namespace AmplifyBloom {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: AmplifyBloom.GlareDefData
  // [TokenAttribute] Offset: FFFFFFFF
  class GlareDefData : public ::Il2CppObject {
    public:
    public:
    // public System.Boolean FoldoutValue
    // Size: 0x1
    // Offset: 0x10
    bool FoldoutValue;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: FoldoutValue and: m_starType
    char __padding0[0x3] = {};
    // private AmplifyBloom.StarLibType m_starType
    // Size: 0x4
    // Offset: 0x14
    ::AmplifyBloom::StarLibType m_starType;
    // Field size check
    static_assert(sizeof(::AmplifyBloom::StarLibType) == 0x4);
    // private System.Single m_starInclination
    // Size: 0x4
    // Offset: 0x18
    float m_starInclination;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_chromaticAberration
    // Size: 0x4
    // Offset: 0x1C
    float m_chromaticAberration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private AmplifyBloom.StarDefData m_customStarData
    // Size: 0x8
    // Offset: 0x20
    ::AmplifyBloom::StarDefData* m_customStarData;
    // Field size check
    static_assert(sizeof(::AmplifyBloom::StarDefData*) == 0x8);
    public:
    // Get instance field reference: public System.Boolean FoldoutValue
    [[deprecated("Use field access instead!")]] bool& dyn_FoldoutValue();
    // Get instance field reference: private AmplifyBloom.StarLibType m_starType
    [[deprecated("Use field access instead!")]] ::AmplifyBloom::StarLibType& dyn_m_starType();
    // Get instance field reference: private System.Single m_starInclination
    [[deprecated("Use field access instead!")]] float& dyn_m_starInclination();
    // Get instance field reference: private System.Single m_chromaticAberration
    [[deprecated("Use field access instead!")]] float& dyn_m_chromaticAberration();
    // Get instance field reference: private AmplifyBloom.StarDefData m_customStarData
    [[deprecated("Use field access instead!")]] ::AmplifyBloom::StarDefData*& dyn_m_customStarData();
    // public System.Void .ctor()
    // Offset: 0xEFF530
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GlareDefData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::AmplifyBloom::GlareDefData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GlareDefData*, creationType>()));
    }
    // public System.Void .ctor(AmplifyBloom.StarLibType starType, System.Single starInclination, System.Single chromaticAberration)
    // Offset: 0xEFE4A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GlareDefData* New_ctor(::AmplifyBloom::StarLibType starType, float starInclination, float chromaticAberration) {
      static auto ___internal__logger = ::Logger::get().WithContext("::AmplifyBloom::GlareDefData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GlareDefData*, creationType>(starType, starInclination, chromaticAberration)));
    }
    // public AmplifyBloom.StarLibType get_StarType()
    // Offset: 0xEFF230
    ::AmplifyBloom::StarLibType get_StarType();
    // public System.Void set_StarType(AmplifyBloom.StarLibType value)
    // Offset: 0xEFFC30
    void set_StarType(::AmplifyBloom::StarLibType value);
    // public System.Single get_StarInclination()
    // Offset: 0xEFF248
    float get_StarInclination();
    // public System.Void set_StarInclination(System.Single value)
    // Offset: 0xEFFC38
    void set_StarInclination(float value);
    // public System.Single get_StarInclinationDeg()
    // Offset: 0xEFFC40
    float get_StarInclinationDeg();
    // public System.Void set_StarInclinationDeg(System.Single value)
    // Offset: 0xEFFC54
    void set_StarInclinationDeg(float value);
    // public System.Single get_ChromaticAberration()
    // Offset: 0xEFF258
    float get_ChromaticAberration();
    // public System.Void set_ChromaticAberration(System.Single value)
    // Offset: 0xEFFC68
    void set_ChromaticAberration(float value);
    // public AmplifyBloom.StarDefData get_CustomStarData()
    // Offset: 0xEFF238
    ::AmplifyBloom::StarDefData* get_CustomStarData();
    // public System.Void set_CustomStarData(AmplifyBloom.StarDefData value)
    // Offset: 0xEFFC70
    void set_CustomStarData(::AmplifyBloom::StarDefData* value);
  }; // AmplifyBloom.GlareDefData
  #pragma pack(pop)
  static check_size<sizeof(GlareDefData), 32 + sizeof(::AmplifyBloom::StarDefData*)> __AmplifyBloom_GlareDefDataSizeCheck;
  static_assert(sizeof(GlareDefData) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: AmplifyBloom::GlareDefData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: AmplifyBloom::GlareDefData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: AmplifyBloom::GlareDefData::get_StarType
// Il2CppName: get_StarType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::AmplifyBloom::StarLibType (AmplifyBloom::GlareDefData::*)()>(&AmplifyBloom::GlareDefData::get_StarType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AmplifyBloom::GlareDefData*), "get_StarType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AmplifyBloom::GlareDefData::set_StarType
// Il2CppName: set_StarType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AmplifyBloom::GlareDefData::*)(::AmplifyBloom::StarLibType)>(&AmplifyBloom::GlareDefData::set_StarType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("AmplifyBloom", "StarLibType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AmplifyBloom::GlareDefData*), "set_StarType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: AmplifyBloom::GlareDefData::get_StarInclination
// Il2CppName: get_StarInclination
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (AmplifyBloom::GlareDefData::*)()>(&AmplifyBloom::GlareDefData::get_StarInclination)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AmplifyBloom::GlareDefData*), "get_StarInclination", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AmplifyBloom::GlareDefData::set_StarInclination
// Il2CppName: set_StarInclination
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AmplifyBloom::GlareDefData::*)(float)>(&AmplifyBloom::GlareDefData::set_StarInclination)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AmplifyBloom::GlareDefData*), "set_StarInclination", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: AmplifyBloom::GlareDefData::get_StarInclinationDeg
// Il2CppName: get_StarInclinationDeg
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (AmplifyBloom::GlareDefData::*)()>(&AmplifyBloom::GlareDefData::get_StarInclinationDeg)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AmplifyBloom::GlareDefData*), "get_StarInclinationDeg", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AmplifyBloom::GlareDefData::set_StarInclinationDeg
// Il2CppName: set_StarInclinationDeg
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AmplifyBloom::GlareDefData::*)(float)>(&AmplifyBloom::GlareDefData::set_StarInclinationDeg)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AmplifyBloom::GlareDefData*), "set_StarInclinationDeg", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: AmplifyBloom::GlareDefData::get_ChromaticAberration
// Il2CppName: get_ChromaticAberration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (AmplifyBloom::GlareDefData::*)()>(&AmplifyBloom::GlareDefData::get_ChromaticAberration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AmplifyBloom::GlareDefData*), "get_ChromaticAberration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AmplifyBloom::GlareDefData::set_ChromaticAberration
// Il2CppName: set_ChromaticAberration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AmplifyBloom::GlareDefData::*)(float)>(&AmplifyBloom::GlareDefData::set_ChromaticAberration)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AmplifyBloom::GlareDefData*), "set_ChromaticAberration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: AmplifyBloom::GlareDefData::get_CustomStarData
// Il2CppName: get_CustomStarData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::AmplifyBloom::StarDefData* (AmplifyBloom::GlareDefData::*)()>(&AmplifyBloom::GlareDefData::get_CustomStarData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AmplifyBloom::GlareDefData*), "get_CustomStarData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AmplifyBloom::GlareDefData::set_CustomStarData
// Il2CppName: set_CustomStarData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AmplifyBloom::GlareDefData::*)(::AmplifyBloom::StarDefData*)>(&AmplifyBloom::GlareDefData::set_CustomStarData)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("AmplifyBloom", "StarDefData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AmplifyBloom::GlareDefData*), "set_CustomStarData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
