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
// Forward declaring namespace: PDollarGestureRecognizer
namespace PDollarGestureRecognizer {
  // Forward declaring type: Point
  class Point;
}
// Completed forward declares
// Type namespace: PDollarGestureRecognizer
namespace PDollarGestureRecognizer {
  // Forward declaring type: Geometry
  class Geometry;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PDollarGestureRecognizer::Geometry);
DEFINE_IL2CPP_ARG_TYPE(::PDollarGestureRecognizer::Geometry*, "PDollarGestureRecognizer", "Geometry");
// Type namespace: PDollarGestureRecognizer
namespace PDollarGestureRecognizer {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: PDollarGestureRecognizer.Geometry
  // [TokenAttribute] Offset: FFFFFFFF
  class Geometry : public ::Il2CppObject {
    public:
    // static public System.Single SqrEuclideanDistance(PDollarGestureRecognizer.Point a, PDollarGestureRecognizer.Point b)
    // Offset: 0x102CFE4
    static float SqrEuclideanDistance(::PDollarGestureRecognizer::Point* a, ::PDollarGestureRecognizer::Point* b);
    // static public System.Single EuclideanDistance(PDollarGestureRecognizer.Point a, PDollarGestureRecognizer.Point b)
    // Offset: 0x102D10C
    static float EuclideanDistance(::PDollarGestureRecognizer::Point* a, ::PDollarGestureRecognizer::Point* b);
    // public System.Void .ctor()
    // Offset: 0x102D1B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Geometry* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PDollarGestureRecognizer::Geometry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Geometry*, creationType>()));
    }
  }; // PDollarGestureRecognizer.Geometry
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PDollarGestureRecognizer::Geometry::SqrEuclideanDistance
// Il2CppName: SqrEuclideanDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::PDollarGestureRecognizer::Point*, ::PDollarGestureRecognizer::Point*)>(&PDollarGestureRecognizer::Geometry::SqrEuclideanDistance)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("PDollarGestureRecognizer", "Point")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("PDollarGestureRecognizer", "Point")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PDollarGestureRecognizer::Geometry*), "SqrEuclideanDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: PDollarGestureRecognizer::Geometry::EuclideanDistance
// Il2CppName: EuclideanDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::PDollarGestureRecognizer::Point*, ::PDollarGestureRecognizer::Point*)>(&PDollarGestureRecognizer::Geometry::EuclideanDistance)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("PDollarGestureRecognizer", "Point")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("PDollarGestureRecognizer", "Point")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PDollarGestureRecognizer::Geometry*), "EuclideanDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: PDollarGestureRecognizer::Geometry::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!