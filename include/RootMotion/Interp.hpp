// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion
namespace RootMotion {
  // Forward declaring type: InterpolationMode
  struct InterpolationMode;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: RootMotion
namespace RootMotion {
  // Forward declaring type: Interp
  class Interp;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::Interp);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::Interp*, "RootMotion", "Interp");
// Type namespace: RootMotion
namespace RootMotion {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.Interp
  // [TokenAttribute] Offset: FFFFFFFF
  class Interp : public ::Il2CppObject {
    public:
    // static public System.Single Float(System.Single t, RootMotion.InterpolationMode mode)
    // Offset: 0x116F118
    static float Float(float t, ::RootMotion::InterpolationMode mode);
    // static public UnityEngine.Vector3 V3(UnityEngine.Vector3 v1, UnityEngine.Vector3 v2, System.Single t, RootMotion.InterpolationMode mode)
    // Offset: 0x1189BEC
    static ::UnityEngine::Vector3 V3(::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2, float t, ::RootMotion::InterpolationMode mode);
    // static public System.Single LerpValue(System.Single value, System.Single target, System.Single increaseSpeed, System.Single decreaseSpeed)
    // Offset: 0x1189CF4
    static float LerpValue(float value, float target, float increaseSpeed, float decreaseSpeed);
    // static private System.Single None(System.Single t, System.Single b, System.Single c)
    // Offset: 0x11894EC
    static float None(float t, float b, float c);
    // static private System.Single InOutCubic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x11894F8
    static float InOutCubic(float t, float b, float c);
    // static private System.Single InOutQuintic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1189520
    static float InOutQuintic(float t, float b, float c);
    // static private System.Single InQuintic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x118955C
    static float InQuintic(float t, float b, float c);
    // static private System.Single InQuartic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1189574
    static float InQuartic(float t, float b, float c);
    // static private System.Single InCubic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1189588
    static float InCubic(float t, float b, float c);
    // static private System.Single InQuadratic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x118959C
    static float InQuadratic(float t, float b, float c);
    // static private System.Single OutQuintic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x11895AC
    static float OutQuintic(float t, float b, float c);
    // static private System.Single OutQuartic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x11895F4
    static float OutQuartic(float t, float b, float c);
    // static private System.Single OutCubic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x118962C
    static float OutCubic(float t, float b, float c);
    // static private System.Single OutInCubic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1189654
    static float OutInCubic(float t, float b, float c);
    // static private System.Single OutInQuartic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1189DF0
    static float OutInQuartic(float t, float b, float c);
    // static private System.Single BackInCubic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1189688
    static float BackInCubic(float t, float b, float c);
    // static private System.Single BackInQuartic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x11896B0
    static float BackInQuartic(float t, float b, float c);
    // static private System.Single OutBackCubic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x11896E0
    static float OutBackCubic(float t, float b, float c);
    // static private System.Single OutBackQuartic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1189714
    static float OutBackQuartic(float t, float b, float c);
    // static private System.Single OutElasticSmall(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1189758
    static float OutElasticSmall(float t, float b, float c);
    // static private System.Single OutElasticBig(System.Single t, System.Single b, System.Single c)
    // Offset: 0x11897BC
    static float OutElasticBig(float t, float b, float c);
    // static private System.Single InElasticSmall(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1189820
    static float InElasticSmall(float t, float b, float c);
    // static private System.Single InElasticBig(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1189874
    static float InElasticBig(float t, float b, float c);
    // static private System.Single InSine(System.Single t, System.Single b, System.Single c)
    // Offset: 0x11898C8
    static float InSine(float t, float b, float c);
    // static private System.Single OutSine(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1189960
    static float OutSine(float t, float b, float c);
    // static private System.Single InOutSine(System.Single t, System.Single b, System.Single c)
    // Offset: 0x11899F4
    static float InOutSine(float t, float b, float c);
    // static private System.Single InElastic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1189E24
    static float InElastic(float t, float b, float c);
    // static private System.Single OutElastic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1189A98
    static float OutElastic(float t, float b, float c);
    // static private System.Single InBack(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1189B7C
    static float InBack(float t, float b, float c);
    // static private System.Single OutBack(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1189BAC
    static float OutBack(float t, float b, float c);
    // public System.Void .ctor()
    // Offset: 0x1189F0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Interp* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::Interp::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Interp*, creationType>()));
    }
  }; // RootMotion.Interp
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::Interp::Float
// Il2CppName: Float
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, ::RootMotion::InterpolationMode)>(&RootMotion::Interp::Float)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("RootMotion", "InterpolationMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Interp*), "Float", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, mode});
  }
};
// Writing MetadataGetter for method: RootMotion::Interp::V3
// Il2CppName: V3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float, ::RootMotion::InterpolationMode)>(&RootMotion::Interp::V3)> {
  static const MethodInfo* get() {
    static auto* v1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* v2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("RootMotion", "InterpolationMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Interp*), "V3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v1, v2, t, mode});
  }
};
// Writing MetadataGetter for method: RootMotion::Interp::LerpValue
// Il2CppName: LerpValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float, float)>(&RootMotion::Interp::LerpValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* increaseSpeed = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* decreaseSpeed = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Interp*), "LerpValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, target, increaseSpeed, decreaseSpeed});
  }
};
// Writing MetadataGetter for method: RootMotion::Interp::None
// Il2CppName: None
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float)>(&RootMotion::Interp::None)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Interp*), "None", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, b, c});
  }
};
// Writing MetadataGetter for method: RootMotion::Interp::InOutCubic
// Il2CppName: InOutCubic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float)>(&RootMotion::Interp::InOutCubic)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Interp*), "InOutCubic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, b, c});
  }
};
// Writing MetadataGetter for method: RootMotion::Interp::InOutQuintic
// Il2CppName: InOutQuintic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float)>(&RootMotion::Interp::InOutQuintic)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Interp*), "InOutQuintic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, b, c});
  }
};
// Writing MetadataGetter for method: RootMotion::Interp::InQuintic
// Il2CppName: InQuintic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float)>(&RootMotion::Interp::InQuintic)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Interp*), "InQuintic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, b, c});
  }
};
// Writing MetadataGetter for method: RootMotion::Interp::InQuartic
// Il2CppName: InQuartic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float)>(&RootMotion::Interp::InQuartic)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Interp*), "InQuartic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, b, c});
  }
};
// Writing MetadataGetter for method: RootMotion::Interp::InCubic
// Il2CppName: InCubic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float)>(&RootMotion::Interp::InCubic)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Interp*), "InCubic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, b, c});
  }
};
// Writing MetadataGetter for method: RootMotion::Interp::InQuadratic
// Il2CppName: InQuadratic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float)>(&RootMotion::Interp::InQuadratic)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Interp*), "InQuadratic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, b, c});
  }
};
// Writing MetadataGetter for method: RootMotion::Interp::OutQuintic
// Il2CppName: OutQuintic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float)>(&RootMotion::Interp::OutQuintic)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Interp*), "OutQuintic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, b, c});
  }
};
// Writing MetadataGetter for method: RootMotion::Interp::OutQuartic
// Il2CppName: OutQuartic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float)>(&RootMotion::Interp::OutQuartic)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Interp*), "OutQuartic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, b, c});
  }
};
// Writing MetadataGetter for method: RootMotion::Interp::OutCubic
// Il2CppName: OutCubic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float)>(&RootMotion::Interp::OutCubic)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Interp*), "OutCubic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, b, c});
  }
};
// Writing MetadataGetter for method: RootMotion::Interp::OutInCubic
// Il2CppName: OutInCubic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float)>(&RootMotion::Interp::OutInCubic)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Interp*), "OutInCubic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, b, c});
  }
};
// Writing MetadataGetter for method: RootMotion::Interp::OutInQuartic
// Il2CppName: OutInQuartic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float)>(&RootMotion::Interp::OutInQuartic)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Interp*), "OutInQuartic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, b, c});
  }
};
// Writing MetadataGetter for method: RootMotion::Interp::BackInCubic
// Il2CppName: BackInCubic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float)>(&RootMotion::Interp::BackInCubic)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Interp*), "BackInCubic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, b, c});
  }
};
// Writing MetadataGetter for method: RootMotion::Interp::BackInQuartic
// Il2CppName: BackInQuartic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float)>(&RootMotion::Interp::BackInQuartic)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Interp*), "BackInQuartic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, b, c});
  }
};
// Writing MetadataGetter for method: RootMotion::Interp::OutBackCubic
// Il2CppName: OutBackCubic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float)>(&RootMotion::Interp::OutBackCubic)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Interp*), "OutBackCubic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, b, c});
  }
};
// Writing MetadataGetter for method: RootMotion::Interp::OutBackQuartic
// Il2CppName: OutBackQuartic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float)>(&RootMotion::Interp::OutBackQuartic)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Interp*), "OutBackQuartic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, b, c});
  }
};
// Writing MetadataGetter for method: RootMotion::Interp::OutElasticSmall
// Il2CppName: OutElasticSmall
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float)>(&RootMotion::Interp::OutElasticSmall)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Interp*), "OutElasticSmall", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, b, c});
  }
};
// Writing MetadataGetter for method: RootMotion::Interp::OutElasticBig
// Il2CppName: OutElasticBig
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float)>(&RootMotion::Interp::OutElasticBig)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Interp*), "OutElasticBig", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, b, c});
  }
};
// Writing MetadataGetter for method: RootMotion::Interp::InElasticSmall
// Il2CppName: InElasticSmall
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float)>(&RootMotion::Interp::InElasticSmall)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Interp*), "InElasticSmall", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, b, c});
  }
};
// Writing MetadataGetter for method: RootMotion::Interp::InElasticBig
// Il2CppName: InElasticBig
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float)>(&RootMotion::Interp::InElasticBig)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Interp*), "InElasticBig", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, b, c});
  }
};
// Writing MetadataGetter for method: RootMotion::Interp::InSine
// Il2CppName: InSine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float)>(&RootMotion::Interp::InSine)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Interp*), "InSine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, b, c});
  }
};
// Writing MetadataGetter for method: RootMotion::Interp::OutSine
// Il2CppName: OutSine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float)>(&RootMotion::Interp::OutSine)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Interp*), "OutSine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, b, c});
  }
};
// Writing MetadataGetter for method: RootMotion::Interp::InOutSine
// Il2CppName: InOutSine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float)>(&RootMotion::Interp::InOutSine)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Interp*), "InOutSine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, b, c});
  }
};
// Writing MetadataGetter for method: RootMotion::Interp::InElastic
// Il2CppName: InElastic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float)>(&RootMotion::Interp::InElastic)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Interp*), "InElastic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, b, c});
  }
};
// Writing MetadataGetter for method: RootMotion::Interp::OutElastic
// Il2CppName: OutElastic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float)>(&RootMotion::Interp::OutElastic)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Interp*), "OutElastic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, b, c});
  }
};
// Writing MetadataGetter for method: RootMotion::Interp::InBack
// Il2CppName: InBack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float)>(&RootMotion::Interp::InBack)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Interp*), "InBack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, b, c});
  }
};
// Writing MetadataGetter for method: RootMotion::Interp::OutBack
// Il2CppName: OutBack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float)>(&RootMotion::Interp::OutBack)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Interp*), "OutBack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, b, c});
  }
};
// Writing MetadataGetter for method: RootMotion::Interp::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
