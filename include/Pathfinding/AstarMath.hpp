// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Color
  struct Color;
}
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: Int3
  struct Int3;
  // Forward declaring type: Int2
  struct Int2;
}
// Completed forward declares
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: AstarMath
  class AstarMath;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::AstarMath);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::AstarMath*, "Pathfinding", "AstarMath");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.AstarMath
  // [TokenAttribute] Offset: FFFFFFFF
  class AstarMath : public ::Il2CppObject {
    public:
    // static public UnityEngine.Vector3 NearestPoint(UnityEngine.Vector3 lineStart, UnityEngine.Vector3 lineEnd, UnityEngine.Vector3 point)
    // Offset: 0x1036C0C
    static ::UnityEngine::Vector3 NearestPoint(::UnityEngine::Vector3 lineStart, ::UnityEngine::Vector3 lineEnd, ::UnityEngine::Vector3 point);
    // static public System.Single NearestPointFactor(UnityEngine.Vector3 lineStart, UnityEngine.Vector3 lineEnd, UnityEngine.Vector3 point)
    // Offset: 0x1036C24
    static float NearestPointFactor(::UnityEngine::Vector3 lineStart, ::UnityEngine::Vector3 lineEnd, ::UnityEngine::Vector3 point);
    // static public System.Single NearestPointFactor(Pathfinding.Int3 lineStart, Pathfinding.Int3 lineEnd, Pathfinding.Int3 point)
    // Offset: 0x1036C3C
    static float NearestPointFactor(::Pathfinding::Int3 lineStart, ::Pathfinding::Int3 lineEnd, ::Pathfinding::Int3 point);
    // static public System.Single NearestPointFactor(Pathfinding.Int2 lineStart, Pathfinding.Int2 lineEnd, Pathfinding.Int2 point)
    // Offset: 0x1036C50
    static float NearestPointFactor(::Pathfinding::Int2 lineStart, ::Pathfinding::Int2 lineEnd, ::Pathfinding::Int2 point);
    // static public UnityEngine.Vector3 NearestPointStrict(UnityEngine.Vector3 lineStart, UnityEngine.Vector3 lineEnd, UnityEngine.Vector3 point)
    // Offset: 0x1036C58
    static ::UnityEngine::Vector3 NearestPointStrict(::UnityEngine::Vector3 lineStart, ::UnityEngine::Vector3 lineEnd, ::UnityEngine::Vector3 point);
    // static public UnityEngine.Vector3 NearestPointStrictXZ(UnityEngine.Vector3 lineStart, UnityEngine.Vector3 lineEnd, UnityEngine.Vector3 point)
    // Offset: 0x1036C70
    static ::UnityEngine::Vector3 NearestPointStrictXZ(::UnityEngine::Vector3 lineStart, ::UnityEngine::Vector3 lineEnd, ::UnityEngine::Vector3 point);
    // static public System.Single DistancePointSegment(System.Int32 x, System.Int32 z, System.Int32 px, System.Int32 pz, System.Int32 qx, System.Int32 qz)
    // Offset: 0x1036C88
    static float DistancePointSegment(int x, int z, int px, int pz, int qx, int qz);
    // static public System.Single DistancePointSegment(Pathfinding.Int3 a, Pathfinding.Int3 b, Pathfinding.Int3 p)
    // Offset: 0x1036C90
    static float DistancePointSegment(::Pathfinding::Int3 a, ::Pathfinding::Int3 b, ::Pathfinding::Int3 p);
    // static public System.Single DistancePointSegmentStrict(UnityEngine.Vector3 a, UnityEngine.Vector3 b, UnityEngine.Vector3 p)
    // Offset: 0x1036CA4
    static float DistancePointSegmentStrict(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::UnityEngine::Vector3 p);
    // static public UnityEngine.Vector3 CubicBezier(UnityEngine.Vector3 p0, UnityEngine.Vector3 p1, UnityEngine.Vector3 p2, UnityEngine.Vector3 p3, System.Single t)
    // Offset: 0x1036CBC
    static ::UnityEngine::Vector3 CubicBezier(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2, ::UnityEngine::Vector3 p3, float t);
    // static public System.Single MapTo(System.Single startMin, System.Single startMax, System.Single value)
    // Offset: 0x1036CEC
    static float MapTo(float startMin, float startMax, float value);
    // static public System.Single MapTo(System.Single startMin, System.Single startMax, System.Single targetMin, System.Single targetMax, System.Single value)
    // Offset: 0x1036D78
    static float MapTo(float startMin, float startMax, float targetMin, float targetMax, float value);
    // static public System.String FormatBytesBinary(System.Int32 bytes)
    // Offset: 0x1036E24
    static ::StringW FormatBytesBinary(int bytes);
    // static private System.Int32 Bit(System.Int32 a, System.Int32 b)
    // Offset: 0x1036F90
    static int Bit(int a, int b);
    // static public UnityEngine.Color IntToColor(System.Int32 i, System.Single a)
    // Offset: 0x10336AC
    static ::UnityEngine::Color IntToColor(int i, float a);
    // static public System.Single SqrMagnitudeXZ(UnityEngine.Vector3 a, UnityEngine.Vector3 b)
    // Offset: 0x1036FA0
    static float SqrMagnitudeXZ(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b);
    // static public System.Single DistancePointSegment2(System.Int32 x, System.Int32 z, System.Int32 px, System.Int32 pz, System.Int32 qx, System.Int32 qz)
    // Offset: 0x1036FA8
    static float DistancePointSegment2(int x, int z, int px, int pz, int qx, int qz);
    // static public System.Single DistancePointSegment2(UnityEngine.Vector3 a, UnityEngine.Vector3 b, UnityEngine.Vector3 p)
    // Offset: 0x103701C
    static float DistancePointSegment2(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::UnityEngine::Vector3 p);
    // static public System.Int32 ComputeVertexHash(System.Int32 x, System.Int32 y, System.Int32 z)
    // Offset: 0x1037090
    static int ComputeVertexHash(int x, int y, int z);
    // static public System.Single Hermite(System.Single start, System.Single end, System.Single value)
    // Offset: 0x1037104
    static float Hermite(float start, float end, float value);
    // static public System.Single MapToRange(System.Single targetMin, System.Single targetMax, System.Single value)
    // Offset: 0x1037178
    static float MapToRange(float targetMin, float targetMax, float value);
    // static public System.String FormatBytes(System.Int32 bytes)
    // Offset: 0x10371EC
    static ::StringW FormatBytes(int bytes);
    // static public System.Single MagnitudeXZ(UnityEngine.Vector3 a, UnityEngine.Vector3 b)
    // Offset: 0x1037260
    static float MagnitudeXZ(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b);
    // static public System.Int32 Repeat(System.Int32 i, System.Int32 n)
    // Offset: 0x10372D4
    static int Repeat(int i, int n);
    // static public System.Single Abs(System.Single a)
    // Offset: 0x1037348
    static float Abs(float a);
    // static public System.Int32 Abs(System.Int32 a)
    // Offset: 0x10373BC
    static int Abs(int a);
    // static public System.Single Min(System.Single a, System.Single b)
    // Offset: 0x1037430
    static float Min(float a, float b);
    // static public System.Int32 Min(System.Int32 a, System.Int32 b)
    // Offset: 0x10374A4
    static int Min(int a, int b);
    // static public System.UInt32 Min(System.UInt32 a, System.UInt32 b)
    // Offset: 0x1037518
    static uint Min(uint a, uint b);
    // static public System.Single Max(System.Single a, System.Single b)
    // Offset: 0x103758C
    static float Max(float a, float b);
    // static public System.Int32 Max(System.Int32 a, System.Int32 b)
    // Offset: 0x1037600
    static int Max(int a, int b);
    // static public System.UInt32 Max(System.UInt32 a, System.UInt32 b)
    // Offset: 0x1037674
    static uint Max(uint a, uint b);
    // static public System.UInt16 Max(System.UInt16 a, System.UInt16 b)
    // Offset: 0x10376E8
    static uint16_t Max(uint16_t a, uint16_t b);
    // static public System.Single Sign(System.Single a)
    // Offset: 0x103775C
    static float Sign(float a);
    // static public System.Int32 Sign(System.Int32 a)
    // Offset: 0x10377D0
    static int Sign(int a);
    // static public System.Single Clamp(System.Single a, System.Single b, System.Single c)
    // Offset: 0x1037844
    static float Clamp(float a, float b, float c);
    // static public System.Int32 Clamp(System.Int32 a, System.Int32 b, System.Int32 c)
    // Offset: 0x10378B8
    static int Clamp(int a, int b, int c);
    // static public System.Single Clamp01(System.Single a)
    // Offset: 0x103792C
    static float Clamp01(float a);
    // static public System.Int32 Clamp01(System.Int32 a)
    // Offset: 0x10379A0
    static int Clamp01(int a);
    // static public System.Single Lerp(System.Single a, System.Single b, System.Single t)
    // Offset: 0x1037A14
    static float Lerp(float a, float b, float t);
    // static public System.Int32 RoundToInt(System.Single v)
    // Offset: 0x1037A88
    static int RoundToInt(float v);
    // static public System.Int32 RoundToInt(System.Double v)
    // Offset: 0x1037AFC
    static int RoundToInt(double v);
  }; // Pathfinding.AstarMath
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::AstarMath::NearestPoint
// Il2CppName: NearestPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&Pathfinding::AstarMath::NearestPoint)> {
  static const MethodInfo* get() {
    static auto* lineStart = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* lineEnd = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AstarMath*), "NearestPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lineStart, lineEnd, point});
  }
};
// Writing MetadataGetter for method: Pathfinding::AstarMath::NearestPointFactor
// Il2CppName: NearestPointFactor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&Pathfinding::AstarMath::NearestPointFactor)> {
  static const MethodInfo* get() {
    static auto* lineStart = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* lineEnd = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AstarMath*), "NearestPointFactor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lineStart, lineEnd, point});
  }
};
// Writing MetadataGetter for method: Pathfinding::AstarMath::NearestPointFactor
// Il2CppName: NearestPointFactor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::Pathfinding::Int3, ::Pathfinding::Int3, ::Pathfinding::Int3)>(&Pathfinding::AstarMath::NearestPointFactor)> {
  static const MethodInfo* get() {
    static auto* lineStart = &::il2cpp_utils::GetClassFromName("Pathfinding", "Int3")->byval_arg;
    static auto* lineEnd = &::il2cpp_utils::GetClassFromName("Pathfinding", "Int3")->byval_arg;
    static auto* point = &::il2cpp_utils::GetClassFromName("Pathfinding", "Int3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AstarMath*), "NearestPointFactor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lineStart, lineEnd, point});
  }
};
// Writing MetadataGetter for method: Pathfinding::AstarMath::NearestPointFactor
// Il2CppName: NearestPointFactor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::Pathfinding::Int2, ::Pathfinding::Int2, ::Pathfinding::Int2)>(&Pathfinding::AstarMath::NearestPointFactor)> {
  static const MethodInfo* get() {
    static auto* lineStart = &::il2cpp_utils::GetClassFromName("Pathfinding", "Int2")->byval_arg;
    static auto* lineEnd = &::il2cpp_utils::GetClassFromName("Pathfinding", "Int2")->byval_arg;
    static auto* point = &::il2cpp_utils::GetClassFromName("Pathfinding", "Int2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AstarMath*), "NearestPointFactor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lineStart, lineEnd, point});
  }
};
// Writing MetadataGetter for method: Pathfinding::AstarMath::NearestPointStrict
// Il2CppName: NearestPointStrict
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&Pathfinding::AstarMath::NearestPointStrict)> {
  static const MethodInfo* get() {
    static auto* lineStart = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* lineEnd = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AstarMath*), "NearestPointStrict", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lineStart, lineEnd, point});
  }
};
// Writing MetadataGetter for method: Pathfinding::AstarMath::NearestPointStrictXZ
// Il2CppName: NearestPointStrictXZ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&Pathfinding::AstarMath::NearestPointStrictXZ)> {
  static const MethodInfo* get() {
    static auto* lineStart = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* lineEnd = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AstarMath*), "NearestPointStrictXZ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lineStart, lineEnd, point});
  }
};
// Writing MetadataGetter for method: Pathfinding::AstarMath::DistancePointSegment
// Il2CppName: DistancePointSegment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(int, int, int, int, int, int)>(&Pathfinding::AstarMath::DistancePointSegment)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* px = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* pz = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* qx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* qz = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AstarMath*), "DistancePointSegment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, z, px, pz, qx, qz});
  }
};
// Writing MetadataGetter for method: Pathfinding::AstarMath::DistancePointSegment
// Il2CppName: DistancePointSegment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::Pathfinding::Int3, ::Pathfinding::Int3, ::Pathfinding::Int3)>(&Pathfinding::AstarMath::DistancePointSegment)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("Pathfinding", "Int3")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("Pathfinding", "Int3")->byval_arg;
    static auto* p = &::il2cpp_utils::GetClassFromName("Pathfinding", "Int3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AstarMath*), "DistancePointSegment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, p});
  }
};
// Writing MetadataGetter for method: Pathfinding::AstarMath::DistancePointSegmentStrict
// Il2CppName: DistancePointSegmentStrict
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&Pathfinding::AstarMath::DistancePointSegmentStrict)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* p = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AstarMath*), "DistancePointSegmentStrict", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, p});
  }
};
// Writing MetadataGetter for method: Pathfinding::AstarMath::CubicBezier
// Il2CppName: CubicBezier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float)>(&Pathfinding::AstarMath::CubicBezier)> {
  static const MethodInfo* get() {
    static auto* p0 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* p1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* p2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* p3 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AstarMath*), "CubicBezier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p0, p1, p2, p3, t});
  }
};
// Writing MetadataGetter for method: Pathfinding::AstarMath::MapTo
// Il2CppName: MapTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float)>(&Pathfinding::AstarMath::MapTo)> {
  static const MethodInfo* get() {
    static auto* startMin = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* startMax = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AstarMath*), "MapTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{startMin, startMax, value});
  }
};
// Writing MetadataGetter for method: Pathfinding::AstarMath::MapTo
// Il2CppName: MapTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float, float, float)>(&Pathfinding::AstarMath::MapTo)> {
  static const MethodInfo* get() {
    static auto* startMin = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* startMax = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* targetMin = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* targetMax = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AstarMath*), "MapTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{startMin, startMax, targetMin, targetMax, value});
  }
};
// Writing MetadataGetter for method: Pathfinding::AstarMath::FormatBytesBinary
// Il2CppName: FormatBytesBinary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int)>(&Pathfinding::AstarMath::FormatBytesBinary)> {
  static const MethodInfo* get() {
    static auto* bytes = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AstarMath*), "FormatBytesBinary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes});
  }
};
// Writing MetadataGetter for method: Pathfinding::AstarMath::Bit
// Il2CppName: Bit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int)>(&Pathfinding::AstarMath::Bit)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AstarMath*), "Bit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: Pathfinding::AstarMath::IntToColor
// Il2CppName: IntToColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (*)(int, float)>(&Pathfinding::AstarMath::IntToColor)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AstarMath*), "IntToColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i, a});
  }
};
// Writing MetadataGetter for method: Pathfinding::AstarMath::SqrMagnitudeXZ
// Il2CppName: SqrMagnitudeXZ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&Pathfinding::AstarMath::SqrMagnitudeXZ)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AstarMath*), "SqrMagnitudeXZ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: Pathfinding::AstarMath::DistancePointSegment2
// Il2CppName: DistancePointSegment2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(int, int, int, int, int, int)>(&Pathfinding::AstarMath::DistancePointSegment2)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* px = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* pz = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* qx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* qz = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AstarMath*), "DistancePointSegment2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, z, px, pz, qx, qz});
  }
};
// Writing MetadataGetter for method: Pathfinding::AstarMath::DistancePointSegment2
// Il2CppName: DistancePointSegment2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&Pathfinding::AstarMath::DistancePointSegment2)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* p = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AstarMath*), "DistancePointSegment2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, p});
  }
};
// Writing MetadataGetter for method: Pathfinding::AstarMath::ComputeVertexHash
// Il2CppName: ComputeVertexHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int, int)>(&Pathfinding::AstarMath::ComputeVertexHash)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AstarMath*), "ComputeVertexHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: Pathfinding::AstarMath::Hermite
// Il2CppName: Hermite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float)>(&Pathfinding::AstarMath::Hermite)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AstarMath*), "Hermite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, end, value});
  }
};
// Writing MetadataGetter for method: Pathfinding::AstarMath::MapToRange
// Il2CppName: MapToRange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float)>(&Pathfinding::AstarMath::MapToRange)> {
  static const MethodInfo* get() {
    static auto* targetMin = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* targetMax = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AstarMath*), "MapToRange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetMin, targetMax, value});
  }
};
// Writing MetadataGetter for method: Pathfinding::AstarMath::FormatBytes
// Il2CppName: FormatBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int)>(&Pathfinding::AstarMath::FormatBytes)> {
  static const MethodInfo* get() {
    static auto* bytes = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AstarMath*), "FormatBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes});
  }
};
// Writing MetadataGetter for method: Pathfinding::AstarMath::MagnitudeXZ
// Il2CppName: MagnitudeXZ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&Pathfinding::AstarMath::MagnitudeXZ)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AstarMath*), "MagnitudeXZ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: Pathfinding::AstarMath::Repeat
// Il2CppName: Repeat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int)>(&Pathfinding::AstarMath::Repeat)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AstarMath*), "Repeat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i, n});
  }
};
// Writing MetadataGetter for method: Pathfinding::AstarMath::Abs
// Il2CppName: Abs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&Pathfinding::AstarMath::Abs)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AstarMath*), "Abs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a});
  }
};
// Writing MetadataGetter for method: Pathfinding::AstarMath::Abs
// Il2CppName: Abs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&Pathfinding::AstarMath::Abs)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AstarMath*), "Abs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a});
  }
};
// Writing MetadataGetter for method: Pathfinding::AstarMath::Min
// Il2CppName: Min
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float)>(&Pathfinding::AstarMath::Min)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AstarMath*), "Min", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: Pathfinding::AstarMath::Min
// Il2CppName: Min
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int)>(&Pathfinding::AstarMath::Min)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AstarMath*), "Min", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: Pathfinding::AstarMath::Min
// Il2CppName: Min
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint, uint)>(&Pathfinding::AstarMath::Min)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AstarMath*), "Min", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: Pathfinding::AstarMath::Max
// Il2CppName: Max
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float)>(&Pathfinding::AstarMath::Max)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AstarMath*), "Max", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: Pathfinding::AstarMath::Max
// Il2CppName: Max
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int)>(&Pathfinding::AstarMath::Max)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AstarMath*), "Max", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: Pathfinding::AstarMath::Max
// Il2CppName: Max
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint, uint)>(&Pathfinding::AstarMath::Max)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AstarMath*), "Max", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: Pathfinding::AstarMath::Max
// Il2CppName: Max
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (*)(uint16_t, uint16_t)>(&Pathfinding::AstarMath::Max)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AstarMath*), "Max", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: Pathfinding::AstarMath::Sign
// Il2CppName: Sign
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&Pathfinding::AstarMath::Sign)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AstarMath*), "Sign", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a});
  }
};
// Writing MetadataGetter for method: Pathfinding::AstarMath::Sign
// Il2CppName: Sign
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&Pathfinding::AstarMath::Sign)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AstarMath*), "Sign", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a});
  }
};
// Writing MetadataGetter for method: Pathfinding::AstarMath::Clamp
// Il2CppName: Clamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float)>(&Pathfinding::AstarMath::Clamp)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AstarMath*), "Clamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, c});
  }
};
// Writing MetadataGetter for method: Pathfinding::AstarMath::Clamp
// Il2CppName: Clamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int, int)>(&Pathfinding::AstarMath::Clamp)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AstarMath*), "Clamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, c});
  }
};
// Writing MetadataGetter for method: Pathfinding::AstarMath::Clamp01
// Il2CppName: Clamp01
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&Pathfinding::AstarMath::Clamp01)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AstarMath*), "Clamp01", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a});
  }
};
// Writing MetadataGetter for method: Pathfinding::AstarMath::Clamp01
// Il2CppName: Clamp01
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&Pathfinding::AstarMath::Clamp01)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AstarMath*), "Clamp01", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a});
  }
};
// Writing MetadataGetter for method: Pathfinding::AstarMath::Lerp
// Il2CppName: Lerp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float)>(&Pathfinding::AstarMath::Lerp)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AstarMath*), "Lerp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, t});
  }
};
// Writing MetadataGetter for method: Pathfinding::AstarMath::RoundToInt
// Il2CppName: RoundToInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(float)>(&Pathfinding::AstarMath::RoundToInt)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AstarMath*), "RoundToInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v});
  }
};
// Writing MetadataGetter for method: Pathfinding::AstarMath::RoundToInt
// Il2CppName: RoundToInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(double)>(&Pathfinding::AstarMath::RoundToInt)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AstarMath*), "RoundToInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v});
  }
};
