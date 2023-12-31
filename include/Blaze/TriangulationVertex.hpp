// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Blaze
namespace Blaze {
  // Forward declaring type: TriangulationVertex
  class TriangulationVertex;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Blaze::TriangulationVertex);
DEFINE_IL2CPP_ARG_TYPE(::Blaze::TriangulationVertex*, "Blaze", "TriangulationVertex");
// Type namespace: Blaze
namespace Blaze {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Blaze.TriangulationVertex
  // [TokenAttribute] Offset: FFFFFFFF
  class TriangulationVertex : public ::Il2CppObject {
    public:
    public:
    // public System.Single X
    // Size: 0x4
    // Offset: 0x10
    float X;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single Y
    // Size: 0x4
    // Offset: 0x14
    float Y;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 Index
    // Size: 0x4
    // Offset: 0x18
    int Index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: Index and: Next
    char __padding2[0x4] = {};
    // public Blaze.TriangulationVertex Next
    // Size: 0x8
    // Offset: 0x20
    ::Blaze::TriangulationVertex* Next;
    // Field size check
    static_assert(sizeof(::Blaze::TriangulationVertex*) == 0x8);
    // public Blaze.TriangulationVertex Previous
    // Size: 0x8
    // Offset: 0x28
    ::Blaze::TriangulationVertex* Previous;
    // Field size check
    static_assert(sizeof(::Blaze::TriangulationVertex*) == 0x8);
    public:
    // Get instance field reference: public System.Single X
    [[deprecated("Use field access instead!")]] float& dyn_X();
    // Get instance field reference: public System.Single Y
    [[deprecated("Use field access instead!")]] float& dyn_Y();
    // Get instance field reference: public System.Int32 Index
    [[deprecated("Use field access instead!")]] int& dyn_Index();
    // Get instance field reference: public Blaze.TriangulationVertex Next
    [[deprecated("Use field access instead!")]] ::Blaze::TriangulationVertex*& dyn_Next();
    // Get instance field reference: public Blaze.TriangulationVertex Previous
    [[deprecated("Use field access instead!")]] ::Blaze::TriangulationVertex*& dyn_Previous();
    // public System.Void .ctor(UnityEngine.Vector3 vertex, System.Int32 index, System.Boolean z)
    // Offset: 0xDD9B48
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TriangulationVertex* New_ctor(::UnityEngine::Vector3 vertex, int index, bool z) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Blaze::TriangulationVertex::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TriangulationVertex*, creationType>(vertex, index, z)));
    }
    // public System.Void Remove()
    // Offset: 0xDD9BA8
    void Remove();
  }; // Blaze.TriangulationVertex
  #pragma pack(pop)
  static check_size<sizeof(TriangulationVertex), 40 + sizeof(::Blaze::TriangulationVertex*)> __Blaze_TriangulationVertexSizeCheck;
  static_assert(sizeof(TriangulationVertex) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Blaze::TriangulationVertex::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Blaze::TriangulationVertex::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Blaze::TriangulationVertex::*)()>(&Blaze::TriangulationVertex::Remove)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Blaze::TriangulationVertex*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
