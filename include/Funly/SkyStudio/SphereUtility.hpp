// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Single
#include "System/Single.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Vector4
  struct Vector4;
}
// Completed forward declares
// Type namespace: Funly.SkyStudio
namespace Funly::SkyStudio {
  // Forward declaring type: SphereUtility
  class SphereUtility;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Funly::SkyStudio::SphereUtility);
DEFINE_IL2CPP_ARG_TYPE(::Funly::SkyStudio::SphereUtility*, "Funly.SkyStudio", "SphereUtility");
// Type namespace: Funly.SkyStudio
namespace Funly::SkyStudio {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Funly.SkyStudio.SphereUtility
  // [TokenAttribute] Offset: FFFFFFFF
  class SphereUtility : public ::Il2CppObject {
    public:
    // static field const value: static private System.Single k_HalfPI
    static constexpr const float k_HalfPI = 1.5707964;
    // Get static field: static private System.Single k_HalfPI
    static float _get_k_HalfPI();
    // Set static field: static private System.Single k_HalfPI
    static void _set_k_HalfPI(float value);
    // static public UnityEngine.Vector2 DirectionToSphericalCoordinate(UnityEngine.Vector3 direction)
    // Offset: 0x151BCF8
    static ::UnityEngine::Vector2 DirectionToSphericalCoordinate(::UnityEngine::Vector3 direction);
    // static public UnityEngine.Vector3 SphericalCoordinateToDirection(UnityEngine.Vector2 coord)
    // Offset: 0x151BE2C
    static ::UnityEngine::Vector3 SphericalCoordinateToDirection(::UnityEngine::Vector2 coord);
    // static public System.Single RadiusAtHeight(System.Single yPos)
    // Offset: 0x151C0D4
    static float RadiusAtHeight(float yPos);
    // static public UnityEngine.Vector3 SphericalToPoint(System.Single yPosition, System.Single radAngle)
    // Offset: 0x151C14C
    static ::UnityEngine::Vector3 SphericalToPoint(float yPosition, float radAngle);
    // static public System.Single RadAngleToPercent(System.Single radAngle)
    // Offset: 0x151C214
    static float RadAngleToPercent(float radAngle);
    // static public System.Single PercentToRadAngle(System.Single percent)
    // Offset: 0x151C224
    static float PercentToRadAngle(float percent);
    // static public System.Single HeightToPercent(System.Single yValue)
    // Offset: 0x151C234
    static float HeightToPercent(float yValue);
    // static public System.Single PercentToHeight(System.Single hPercent)
    // Offset: 0x151C244
    static float PercentToHeight(float hPercent);
    // static public System.Single AngleToReachTarget(UnityEngine.Vector2 point, System.Single targetAngle)
    // Offset: 0x151C2BC
    static float AngleToReachTarget(::UnityEngine::Vector2 point, float targetAngle);
    // static public System.Single Atan2Positive(System.Single y, System.Single x)
    // Offset: 0x151C044
    static float Atan2Positive(float y, float x);
    // static public UnityEngine.Vector3 RotateAroundXAxis(UnityEngine.Vector3 point, System.Single angle)
    // Offset: 0x151C2F8
    static ::UnityEngine::Vector3 RotateAroundXAxis(::UnityEngine::Vector3 point, float angle);
    // static public UnityEngine.Vector3 RotateAroundYAxis(UnityEngine.Vector3 point, System.Single angle)
    // Offset: 0x151C44C
    static ::UnityEngine::Vector3 RotateAroundYAxis(::UnityEngine::Vector3 point, float angle);
    // static public UnityEngine.Vector3 RotatePoint(UnityEngine.Vector3 point, System.Single xAxisRotation, System.Single yAxisRotation)
    // Offset: 0x151C4B8
    static ::UnityEngine::Vector3 RotatePoint(::UnityEngine::Vector3 point, float xAxisRotation, float yAxisRotation);
    // static public UnityEngine.Vector2 Rotate2d(UnityEngine.Vector2 pos, System.Single angle)
    // Offset: 0x151C364
    static ::UnityEngine::Vector2 Rotate2d(::UnityEngine::Vector2 pos, float angle);
    // static public UnityEngine.Vector2 Matrix2x2Mult(UnityEngine.Vector4 matrix, UnityEngine.Vector2 pos)
    // Offset: 0x151C4E0
    static ::UnityEngine::Vector2 Matrix2x2Mult(::UnityEngine::Vector4 matrix, ::UnityEngine::Vector2 pos);
    // static public System.Void CalculateStarRotation(UnityEngine.Vector3 star, out System.Single xRotationAngle, out System.Single yRotationAngle)
    // Offset: 0x151C5EC
    static void CalculateStarRotation(::UnityEngine::Vector3 star, ByRef<float> xRotationAngle, ByRef<float> yRotationAngle);
    // static public UnityEngine.Vector2 ConvertUVToSphericalCoordinate(UnityEngine.Vector2 uv)
    // Offset: 0x151C734
    static ::UnityEngine::Vector2 ConvertUVToSphericalCoordinate(::UnityEngine::Vector2 uv);
    // static public UnityEngine.Vector2 ConvertSphericalCoordateToUV(UnityEngine.Vector2 sphereCoord)
    // Offset: 0x151C7F4
    static ::UnityEngine::Vector2 ConvertSphericalCoordateToUV(::UnityEngine::Vector2 sphereCoord);
    // protected System.Void .ctor()
    // Offset: 0x151C844
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SphereUtility* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Funly::SkyStudio::SphereUtility::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SphereUtility*, creationType>()));
    }
  }; // Funly.SkyStudio.SphereUtility
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Funly::SkyStudio::SphereUtility::DirectionToSphericalCoordinate
// Il2CppName: DirectionToSphericalCoordinate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector3)>(&Funly::SkyStudio::SphereUtility::DirectionToSphericalCoordinate)> {
  static const MethodInfo* get() {
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::SphereUtility*), "DirectionToSphericalCoordinate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{direction});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::SphereUtility::SphericalCoordinateToDirection
// Il2CppName: SphericalCoordinateToDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector2)>(&Funly::SkyStudio::SphereUtility::SphericalCoordinateToDirection)> {
  static const MethodInfo* get() {
    static auto* coord = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::SphereUtility*), "SphericalCoordinateToDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{coord});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::SphereUtility::RadiusAtHeight
// Il2CppName: RadiusAtHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&Funly::SkyStudio::SphereUtility::RadiusAtHeight)> {
  static const MethodInfo* get() {
    static auto* yPos = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::SphereUtility*), "RadiusAtHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{yPos});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::SphereUtility::SphericalToPoint
// Il2CppName: SphericalToPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(float, float)>(&Funly::SkyStudio::SphereUtility::SphericalToPoint)> {
  static const MethodInfo* get() {
    static auto* yPosition = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* radAngle = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::SphereUtility*), "SphericalToPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{yPosition, radAngle});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::SphereUtility::RadAngleToPercent
// Il2CppName: RadAngleToPercent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&Funly::SkyStudio::SphereUtility::RadAngleToPercent)> {
  static const MethodInfo* get() {
    static auto* radAngle = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::SphereUtility*), "RadAngleToPercent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{radAngle});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::SphereUtility::PercentToRadAngle
// Il2CppName: PercentToRadAngle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&Funly::SkyStudio::SphereUtility::PercentToRadAngle)> {
  static const MethodInfo* get() {
    static auto* percent = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::SphereUtility*), "PercentToRadAngle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{percent});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::SphereUtility::HeightToPercent
// Il2CppName: HeightToPercent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&Funly::SkyStudio::SphereUtility::HeightToPercent)> {
  static const MethodInfo* get() {
    static auto* yValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::SphereUtility*), "HeightToPercent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{yValue});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::SphereUtility::PercentToHeight
// Il2CppName: PercentToHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&Funly::SkyStudio::SphereUtility::PercentToHeight)> {
  static const MethodInfo* get() {
    static auto* hPercent = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::SphereUtility*), "PercentToHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hPercent});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::SphereUtility::AngleToReachTarget
// Il2CppName: AngleToReachTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::UnityEngine::Vector2, float)>(&Funly::SkyStudio::SphereUtility::AngleToReachTarget)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* targetAngle = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::SphereUtility*), "AngleToReachTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point, targetAngle});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::SphereUtility::Atan2Positive
// Il2CppName: Atan2Positive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float)>(&Funly::SkyStudio::SphereUtility::Atan2Positive)> {
  static const MethodInfo* get() {
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::SphereUtility*), "Atan2Positive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{y, x});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::SphereUtility::RotateAroundXAxis
// Il2CppName: RotateAroundXAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, float)>(&Funly::SkyStudio::SphereUtility::RotateAroundXAxis)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* angle = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::SphereUtility*), "RotateAroundXAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point, angle});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::SphereUtility::RotateAroundYAxis
// Il2CppName: RotateAroundYAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, float)>(&Funly::SkyStudio::SphereUtility::RotateAroundYAxis)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* angle = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::SphereUtility*), "RotateAroundYAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point, angle});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::SphereUtility::RotatePoint
// Il2CppName: RotatePoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, float, float)>(&Funly::SkyStudio::SphereUtility::RotatePoint)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* xAxisRotation = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* yAxisRotation = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::SphereUtility*), "RotatePoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point, xAxisRotation, yAxisRotation});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::SphereUtility::Rotate2d
// Il2CppName: Rotate2d
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, float)>(&Funly::SkyStudio::SphereUtility::Rotate2d)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* angle = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::SphereUtility*), "Rotate2d", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos, angle});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::SphereUtility::Matrix2x2Mult
// Il2CppName: Matrix2x2Mult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector4, ::UnityEngine::Vector2)>(&Funly::SkyStudio::SphereUtility::Matrix2x2Mult)> {
  static const MethodInfo* get() {
    static auto* matrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::SphereUtility*), "Matrix2x2Mult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{matrix, pos});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::SphereUtility::CalculateStarRotation
// Il2CppName: CalculateStarRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Vector3, ByRef<float>, ByRef<float>)>(&Funly::SkyStudio::SphereUtility::CalculateStarRotation)> {
  static const MethodInfo* get() {
    static auto* star = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* xRotationAngle = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* yRotationAngle = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::SphereUtility*), "CalculateStarRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{star, xRotationAngle, yRotationAngle});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::SphereUtility::ConvertUVToSphericalCoordinate
// Il2CppName: ConvertUVToSphericalCoordinate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2)>(&Funly::SkyStudio::SphereUtility::ConvertUVToSphericalCoordinate)> {
  static const MethodInfo* get() {
    static auto* uv = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::SphereUtility*), "ConvertUVToSphericalCoordinate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uv});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::SphereUtility::ConvertSphericalCoordateToUV
// Il2CppName: ConvertSphericalCoordateToUV
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2)>(&Funly::SkyStudio::SphereUtility::ConvertSphericalCoordateToUV)> {
  static const MethodInfo* get() {
    static auto* sphereCoord = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::SphereUtility*), "ConvertSphericalCoordateToUV", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sphereCoord});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::SphereUtility::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!