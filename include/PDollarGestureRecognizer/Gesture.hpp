// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
  // Forward declaring type: Gesture
  class Gesture;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PDollarGestureRecognizer::Gesture);
DEFINE_IL2CPP_ARG_TYPE(::PDollarGestureRecognizer::Gesture*, "PDollarGestureRecognizer", "Gesture");
// Type namespace: PDollarGestureRecognizer
namespace PDollarGestureRecognizer {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: PDollarGestureRecognizer.Gesture
  // [TokenAttribute] Offset: FFFFFFFF
  class Gesture : public ::Il2CppObject {
    public:
    public:
    // public PDollarGestureRecognizer.Point[] Points
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::PDollarGestureRecognizer::Point*> Points;
    // Field size check
    static_assert(sizeof(::ArrayW<::PDollarGestureRecognizer::Point*>) == 0x8);
    // public System.String Name
    // Size: 0x8
    // Offset: 0x18
    ::StringW Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 numStrokes
    // Size: 0x4
    // Offset: 0x20
    int numStrokes;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // static field const value: static private System.Int32 SAMPLING_RESOLUTION
    static constexpr const int SAMPLING_RESOLUTION = 32;
    // Get static field: static private System.Int32 SAMPLING_RESOLUTION
    static int _get_SAMPLING_RESOLUTION();
    // Set static field: static private System.Int32 SAMPLING_RESOLUTION
    static void _set_SAMPLING_RESOLUTION(int value);
    // Get instance field reference: public PDollarGestureRecognizer.Point[] Points
    [[deprecated("Use field access instead!")]] ::ArrayW<::PDollarGestureRecognizer::Point*>& dyn_Points();
    // Get instance field reference: public System.String Name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Name();
    // Get instance field reference: public System.Int32 numStrokes
    [[deprecated("Use field access instead!")]] int& dyn_numStrokes();
    // public System.Void .ctor(PDollarGestureRecognizer.Point[] points, System.String gestureName, System.Int32 numStrokes)
    // Offset: 0x102D1BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Gesture* New_ctor(::ArrayW<::PDollarGestureRecognizer::Point*> points, ::StringW gestureName, int numStrokes) {
      static auto ___internal__logger = ::Logger::get().WithContext("::PDollarGestureRecognizer::Gesture::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Gesture*, creationType>(points, gestureName, numStrokes)));
    }
    // private PDollarGestureRecognizer.Point[] Scale(PDollarGestureRecognizer.Point[] points)
    // Offset: 0x102D27C
    ::ArrayW<::PDollarGestureRecognizer::Point*> Scale(::ArrayW<::PDollarGestureRecognizer::Point*> points);
    // private PDollarGestureRecognizer.Point[] TranslateTo(PDollarGestureRecognizer.Point[] points, PDollarGestureRecognizer.Point p)
    // Offset: 0x102D948
    ::ArrayW<::PDollarGestureRecognizer::Point*> TranslateTo(::ArrayW<::PDollarGestureRecognizer::Point*> points, ::PDollarGestureRecognizer::Point* p);
    // private PDollarGestureRecognizer.Point Centroid(PDollarGestureRecognizer.Point[] points)
    // Offset: 0x102D7AC
    ::PDollarGestureRecognizer::Point* Centroid(::ArrayW<::PDollarGestureRecognizer::Point*> points);
    // public PDollarGestureRecognizer.Point[] Resample(PDollarGestureRecognizer.Point[] points, System.Int32 n)
    // Offset: 0x102DB74
    ::ArrayW<::PDollarGestureRecognizer::Point*> Resample(::ArrayW<::PDollarGestureRecognizer::Point*> points, int n);
    // private System.Single PathLength(PDollarGestureRecognizer.Point[] points)
    // Offset: 0x102E28C
    float PathLength(::ArrayW<::PDollarGestureRecognizer::Point*> points);
  }; // PDollarGestureRecognizer.Gesture
  #pragma pack(pop)
  static check_size<sizeof(Gesture), 32 + sizeof(int)> __PDollarGestureRecognizer_GestureSizeCheck;
  static_assert(sizeof(Gesture) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PDollarGestureRecognizer::Gesture::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: PDollarGestureRecognizer::Gesture::Scale
// Il2CppName: Scale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::PDollarGestureRecognizer::Point*> (PDollarGestureRecognizer::Gesture::*)(::ArrayW<::PDollarGestureRecognizer::Point*>)>(&PDollarGestureRecognizer::Gesture::Scale)> {
  static const MethodInfo* get() {
    static auto* points = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("PDollarGestureRecognizer", "Point"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PDollarGestureRecognizer::Gesture*), "Scale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{points});
  }
};
// Writing MetadataGetter for method: PDollarGestureRecognizer::Gesture::TranslateTo
// Il2CppName: TranslateTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::PDollarGestureRecognizer::Point*> (PDollarGestureRecognizer::Gesture::*)(::ArrayW<::PDollarGestureRecognizer::Point*>, ::PDollarGestureRecognizer::Point*)>(&PDollarGestureRecognizer::Gesture::TranslateTo)> {
  static const MethodInfo* get() {
    static auto* points = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("PDollarGestureRecognizer", "Point"), 1)->byval_arg;
    static auto* p = &::il2cpp_utils::GetClassFromName("PDollarGestureRecognizer", "Point")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PDollarGestureRecognizer::Gesture*), "TranslateTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{points, p});
  }
};
// Writing MetadataGetter for method: PDollarGestureRecognizer::Gesture::Centroid
// Il2CppName: Centroid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::PDollarGestureRecognizer::Point* (PDollarGestureRecognizer::Gesture::*)(::ArrayW<::PDollarGestureRecognizer::Point*>)>(&PDollarGestureRecognizer::Gesture::Centroid)> {
  static const MethodInfo* get() {
    static auto* points = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("PDollarGestureRecognizer", "Point"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PDollarGestureRecognizer::Gesture*), "Centroid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{points});
  }
};
// Writing MetadataGetter for method: PDollarGestureRecognizer::Gesture::Resample
// Il2CppName: Resample
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::PDollarGestureRecognizer::Point*> (PDollarGestureRecognizer::Gesture::*)(::ArrayW<::PDollarGestureRecognizer::Point*>, int)>(&PDollarGestureRecognizer::Gesture::Resample)> {
  static const MethodInfo* get() {
    static auto* points = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("PDollarGestureRecognizer", "Point"), 1)->byval_arg;
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PDollarGestureRecognizer::Gesture*), "Resample", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{points, n});
  }
};
// Writing MetadataGetter for method: PDollarGestureRecognizer::Gesture::PathLength
// Il2CppName: PathLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (PDollarGestureRecognizer::Gesture::*)(::ArrayW<::PDollarGestureRecognizer::Point*>)>(&PDollarGestureRecognizer::Gesture::PathLength)> {
  static const MethodInfo* get() {
    static auto* points = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("PDollarGestureRecognizer", "Point"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PDollarGestureRecognizer::Gesture*), "PathLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{points});
  }
};
