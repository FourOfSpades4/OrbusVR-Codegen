// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Blaze.VectorLine
#include "Blaze/VectorLine.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Blaze
namespace Blaze {
  // Forward declaring type: VectorPath
  class VectorPath;
  // Forward declaring type: PointReceiver
  class PointReceiver;
}
// Completed forward declares
// Type namespace: Blaze
namespace Blaze {
  // Forward declaring type: StraightLinePoint
  class StraightLinePoint;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Blaze::StraightLinePoint);
DEFINE_IL2CPP_ARG_TYPE(::Blaze::StraightLinePoint*, "Blaze", "StraightLinePoint");
// Type namespace: Blaze
namespace Blaze {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Blaze.StraightLinePoint
  // [TokenAttribute] Offset: FFFFFFFF
  class StraightLinePoint : public ::Blaze::VectorLine {
    public:
    // public System.Void .ctor(System.Single x, System.Single y)
    // Offset: 0x12BA3D4
    // Implemented from: Blaze.VectorLine
    // Base method: System.Void VectorLine::.ctor(System.Single x, System.Single y)
    // Base method: System.Void VectorPoint::.ctor(System.Single x, System.Single y)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StraightLinePoint* New_ctor(float x, float y) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Blaze::StraightLinePoint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StraightLinePoint*, creationType>(x, y)));
    }
    // public override Blaze.VectorPoint Split(System.Single t, Blaze.VectorPath path)
    // Offset: 0x12BA3DC
    // Implemented from: Blaze.VectorPoint
    // Base method: Blaze.VectorPoint VectorPoint::Split(System.Single t, Blaze.VectorPath path)
    ::Blaze::VectorPoint* Split(float t, ::Blaze::VectorPath* path);
    // public override System.Void SampleAt(System.Single t, out System.Single x, out System.Single y)
    // Offset: 0x12BA540
    // Implemented from: Blaze.VectorLine
    // Base method: System.Void VectorLine::SampleAt(System.Single t, out System.Single x, out System.Single y)
    void SampleAt(float t, ByRef<float> x, ByRef<float> y);
    // public override System.Void RecalculateBounds(Blaze.VectorPath path)
    // Offset: 0x12BA5C8
    // Implemented from: Blaze.VectorPoint
    // Base method: System.Void VectorPoint::RecalculateBounds(Blaze.VectorPath path)
    void RecalculateBounds(::Blaze::VectorPath* path);
    // public override System.Void ComputeLinePoints(Blaze.PointReceiver output)
    // Offset: 0x12BA6A8
    // Implemented from: Blaze.VectorPoint
    // Base method: System.Void VectorPoint::ComputeLinePoints(Blaze.PointReceiver output)
    void ComputeLinePoints(::Blaze::PointReceiver* output);
    // public override System.Void StartNormal(out System.Single x, out System.Single y)
    // Offset: 0x12BA87C
    // Implemented from: Blaze.VectorPoint
    // Base method: System.Void VectorPoint::StartNormal(out System.Single x, out System.Single y)
    void StartNormal(ByRef<float> x, ByRef<float> y);
    // public override System.Void EndNormal(out System.Single x, out System.Single y)
    // Offset: 0x12BA98C
    // Implemented from: Blaze.VectorPoint
    // Base method: System.Void VectorPoint::EndNormal(out System.Single x, out System.Single y)
    void EndNormal(ByRef<float> x, ByRef<float> y);
    // public override Blaze.VectorPoint Copy()
    // Offset: 0x12BA998
    // Implemented from: Blaze.VectorPoint
    // Base method: Blaze.VectorPoint VectorPoint::Copy()
    ::Blaze::VectorPoint* Copy();
    // public override System.String ToString()
    // Offset: 0x12BAA20
    // Implemented from: Blaze.VectorPoint
    // Base method: System.String VectorPoint::ToString()
    ::StringW ToString();
  }; // Blaze.StraightLinePoint
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Blaze::StraightLinePoint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Blaze::StraightLinePoint::Split
// Il2CppName: Split
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Blaze::VectorPoint* (Blaze::StraightLinePoint::*)(float, ::Blaze::VectorPath*)>(&Blaze::StraightLinePoint::Split)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* path = &::il2cpp_utils::GetClassFromName("Blaze", "VectorPath")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Blaze::StraightLinePoint*), "Split", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, path});
  }
};
// Writing MetadataGetter for method: Blaze::StraightLinePoint::SampleAt
// Il2CppName: SampleAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Blaze::StraightLinePoint::*)(float, ByRef<float>, ByRef<float>)>(&Blaze::StraightLinePoint::SampleAt)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Blaze::StraightLinePoint*), "SampleAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, x, y});
  }
};
// Writing MetadataGetter for method: Blaze::StraightLinePoint::RecalculateBounds
// Il2CppName: RecalculateBounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Blaze::StraightLinePoint::*)(::Blaze::VectorPath*)>(&Blaze::StraightLinePoint::RecalculateBounds)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("Blaze", "VectorPath")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Blaze::StraightLinePoint*), "RecalculateBounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: Blaze::StraightLinePoint::ComputeLinePoints
// Il2CppName: ComputeLinePoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Blaze::StraightLinePoint::*)(::Blaze::PointReceiver*)>(&Blaze::StraightLinePoint::ComputeLinePoints)> {
  static const MethodInfo* get() {
    static auto* output = &::il2cpp_utils::GetClassFromName("Blaze", "PointReceiver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Blaze::StraightLinePoint*), "ComputeLinePoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output});
  }
};
// Writing MetadataGetter for method: Blaze::StraightLinePoint::StartNormal
// Il2CppName: StartNormal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Blaze::StraightLinePoint::*)(ByRef<float>, ByRef<float>)>(&Blaze::StraightLinePoint::StartNormal)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Blaze::StraightLinePoint*), "StartNormal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: Blaze::StraightLinePoint::EndNormal
// Il2CppName: EndNormal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Blaze::StraightLinePoint::*)(ByRef<float>, ByRef<float>)>(&Blaze::StraightLinePoint::EndNormal)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Blaze::StraightLinePoint*), "EndNormal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: Blaze::StraightLinePoint::Copy
// Il2CppName: Copy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Blaze::VectorPoint* (Blaze::StraightLinePoint::*)()>(&Blaze::StraightLinePoint::Copy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Blaze::StraightLinePoint*), "Copy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Blaze::StraightLinePoint::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Blaze::StraightLinePoint::*)()>(&Blaze::StraightLinePoint::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Blaze::StraightLinePoint*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};