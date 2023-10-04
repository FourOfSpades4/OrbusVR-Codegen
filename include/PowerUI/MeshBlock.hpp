// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Blaze
namespace Blaze {
  // Forward declaring type: UVBlock
  class UVBlock;
  // Forward declaring type: AtlasLocation
  class AtlasLocation;
}
// Forward declaring namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: DynamicMesh
  class DynamicMesh;
  // Forward declaring type: Transformation
  class Transformation;
  // Forward declaring type: BoxRegion
  class BoxRegion;
  // Forward declaring type: Renderman
  class Renderman;
}
// Completed forward declares
// Type namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: MeshBlock
  class MeshBlock;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PowerUI::MeshBlock);
DEFINE_IL2CPP_ARG_TYPE(::PowerUI::MeshBlock*, "PowerUI", "MeshBlock");
// Type namespace: PowerUI
namespace PowerUI {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: PowerUI.MeshBlock
  // [TokenAttribute] Offset: FFFFFFFF
  class MeshBlock : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Color Colour
    // Size: 0x10
    // Offset: 0x10
    ::UnityEngine::Color Colour;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public Blaze.UVBlock TextUV
    // Size: 0x8
    // Offset: 0x20
    ::Blaze::UVBlock* TextUV;
    // Field size check
    static_assert(sizeof(::Blaze::UVBlock*) == 0x8);
    // public Blaze.UVBlock ImageUV
    // Size: 0x8
    // Offset: 0x28
    ::Blaze::UVBlock* ImageUV;
    // Field size check
    static_assert(sizeof(::Blaze::UVBlock*) == 0x8);
    // public UnityEngine.Vector3 VertexTopLeft
    // Size: 0xC
    // Offset: 0x30
    ::UnityEngine::Vector3 VertexTopLeft;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 VertexTopRight
    // Size: 0xC
    // Offset: 0x3C
    ::UnityEngine::Vector3 VertexTopRight;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 VertexBottomLeft
    // Size: 0xC
    // Offset: 0x48
    ::UnityEngine::Vector3 VertexBottomLeft;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 VertexBottomRight
    // Size: 0xC
    // Offset: 0x54
    ::UnityEngine::Vector3 VertexBottomRight;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public System.Int32 VertexIndex
    // Size: 0x4
    // Offset: 0x60
    int VertexIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: VertexIndex and: BlockAfter
    char __padding7[0x4] = {};
    // public PowerUI.MeshBlock BlockAfter
    // Size: 0x8
    // Offset: 0x68
    ::PowerUI::MeshBlock* BlockAfter;
    // Field size check
    static_assert(sizeof(::PowerUI::MeshBlock*) == 0x8);
    // public PowerUI.DynamicMesh ParentMesh
    // Size: 0x8
    // Offset: 0x70
    ::PowerUI::DynamicMesh* ParentMesh;
    // Field size check
    static_assert(sizeof(::PowerUI::DynamicMesh*) == 0x8);
    // public PowerUI.Transformation Transform
    // Size: 0x8
    // Offset: 0x78
    ::PowerUI::Transformation* Transform;
    // Field size check
    static_assert(sizeof(::PowerUI::Transformation*) == 0x8);
    // public PowerUI.MeshBlock LocalBlockAfter
    // Size: 0x8
    // Offset: 0x80
    ::PowerUI::MeshBlock* LocalBlockAfter;
    // Field size check
    static_assert(sizeof(::PowerUI::MeshBlock*) == 0x8);
    public:
    // Get static field: static private Blaze.UVBlock BlankUV
    static ::Blaze::UVBlock* _get_BlankUV();
    // Set static field: static private Blaze.UVBlock BlankUV
    static void _set_BlankUV(::Blaze::UVBlock* value);
    // Get instance field reference: public UnityEngine.Color Colour
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_Colour();
    // Get instance field reference: public Blaze.UVBlock TextUV
    [[deprecated("Use field access instead!")]] ::Blaze::UVBlock*& dyn_TextUV();
    // Get instance field reference: public Blaze.UVBlock ImageUV
    [[deprecated("Use field access instead!")]] ::Blaze::UVBlock*& dyn_ImageUV();
    // Get instance field reference: public UnityEngine.Vector3 VertexTopLeft
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_VertexTopLeft();
    // Get instance field reference: public UnityEngine.Vector3 VertexTopRight
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_VertexTopRight();
    // Get instance field reference: public UnityEngine.Vector3 VertexBottomLeft
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_VertexBottomLeft();
    // Get instance field reference: public UnityEngine.Vector3 VertexBottomRight
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_VertexBottomRight();
    // Get instance field reference: public System.Int32 VertexIndex
    [[deprecated("Use field access instead!")]] int& dyn_VertexIndex();
    // Get instance field reference: public PowerUI.MeshBlock BlockAfter
    [[deprecated("Use field access instead!")]] ::PowerUI::MeshBlock*& dyn_BlockAfter();
    // Get instance field reference: public PowerUI.DynamicMesh ParentMesh
    [[deprecated("Use field access instead!")]] ::PowerUI::DynamicMesh*& dyn_ParentMesh();
    // Get instance field reference: public PowerUI.Transformation Transform
    [[deprecated("Use field access instead!")]] ::PowerUI::Transformation*& dyn_Transform();
    // Get instance field reference: public PowerUI.MeshBlock LocalBlockAfter
    [[deprecated("Use field access instead!")]] ::PowerUI::MeshBlock*& dyn_LocalBlockAfter();
    // public System.Void .ctor(PowerUI.DynamicMesh parentMesh)
    // Offset: 0x1763604
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MeshBlock* New_ctor(::PowerUI::DynamicMesh* parentMesh) {
      static auto ___internal__logger = ::Logger::get().WithContext("::PowerUI::MeshBlock::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MeshBlock*, creationType>(parentMesh)));
    }
    // public System.Boolean Overlaps(PowerUI.MeshBlock block)
    // Offset: 0x1763640
    bool Overlaps(::PowerUI::MeshBlock* block);
    // public System.Void AddToParent()
    // Offset: 0x17638E8
    void AddToParent();
    // public System.Void SetColour(UnityEngine.Color colour)
    // Offset: 0x17639BC
    void SetColour(::UnityEngine::Color colour);
    // public System.Void Layout()
    // Offset: 0x17639C8
    void Layout();
    // public System.Void SetClipped(PowerUI.BoxRegion boundary, PowerUI.BoxRegion block, PowerUI.Renderman renderer, System.Single zIndex)
    // Offset: 0x1763FE8
    void SetClipped(::PowerUI::BoxRegion* boundary, ::PowerUI::BoxRegion* block, ::PowerUI::Renderman* renderer, float zIndex);
    // public Blaze.UVBlock SetClipped(PowerUI.BoxRegion boundary, PowerUI.BoxRegion block, PowerUI.Renderman renderer, System.Single zIndex, Blaze.AtlasLocation imgLocation, Blaze.UVBlock uvBlock)
    // Offset: 0x1764188
    ::Blaze::UVBlock* SetClipped(::PowerUI::BoxRegion* boundary, ::PowerUI::BoxRegion* block, ::PowerUI::Renderman* renderer, float zIndex, ::Blaze::AtlasLocation* imgLocation, ::Blaze::UVBlock* uvBlock);
    // public System.Void ApplyOutline(System.Single location)
    // Offset: 0x17643C8
    void ApplyOutline(float location);
    // private System.Void ApplyVertices(PowerUI.BoxRegion block, PowerUI.Renderman renderer, System.Single zIndex)
    // Offset: 0x1764050
    void ApplyVertices(::PowerUI::BoxRegion* block, ::PowerUI::Renderman* renderer, float zIndex);
    // public System.Void SetSolidColourUV()
    // Offset: 0x17645B8
    void SetSolidColourUV();
    // public System.Void Paint()
    // Offset: 0x17645C0
    void Paint();
    // static private System.Void .cctor()
    // Offset: 0x17647F4
    static void _cctor();
  }; // PowerUI.MeshBlock
  #pragma pack(pop)
  static check_size<sizeof(MeshBlock), 128 + sizeof(::PowerUI::MeshBlock*)> __PowerUI_MeshBlockSizeCheck;
  static_assert(sizeof(MeshBlock) == 0x88);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PowerUI::MeshBlock::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: PowerUI::MeshBlock::Overlaps
// Il2CppName: Overlaps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (PowerUI::MeshBlock::*)(::PowerUI::MeshBlock*)>(&PowerUI::MeshBlock::Overlaps)> {
  static const MethodInfo* get() {
    static auto* block = &::il2cpp_utils::GetClassFromName("PowerUI", "MeshBlock")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::MeshBlock*), "Overlaps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{block});
  }
};
// Writing MetadataGetter for method: PowerUI::MeshBlock::AddToParent
// Il2CppName: AddToParent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::MeshBlock::*)()>(&PowerUI::MeshBlock::AddToParent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::MeshBlock*), "AddToParent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::MeshBlock::SetColour
// Il2CppName: SetColour
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::MeshBlock::*)(::UnityEngine::Color)>(&PowerUI::MeshBlock::SetColour)> {
  static const MethodInfo* get() {
    static auto* colour = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::MeshBlock*), "SetColour", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{colour});
  }
};
// Writing MetadataGetter for method: PowerUI::MeshBlock::Layout
// Il2CppName: Layout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::MeshBlock::*)()>(&PowerUI::MeshBlock::Layout)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::MeshBlock*), "Layout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::MeshBlock::SetClipped
// Il2CppName: SetClipped
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::MeshBlock::*)(::PowerUI::BoxRegion*, ::PowerUI::BoxRegion*, ::PowerUI::Renderman*, float)>(&PowerUI::MeshBlock::SetClipped)> {
  static const MethodInfo* get() {
    static auto* boundary = &::il2cpp_utils::GetClassFromName("PowerUI", "BoxRegion")->byval_arg;
    static auto* block = &::il2cpp_utils::GetClassFromName("PowerUI", "BoxRegion")->byval_arg;
    static auto* renderer = &::il2cpp_utils::GetClassFromName("PowerUI", "Renderman")->byval_arg;
    static auto* zIndex = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::MeshBlock*), "SetClipped", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{boundary, block, renderer, zIndex});
  }
};
// Writing MetadataGetter for method: PowerUI::MeshBlock::SetClipped
// Il2CppName: SetClipped
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Blaze::UVBlock* (PowerUI::MeshBlock::*)(::PowerUI::BoxRegion*, ::PowerUI::BoxRegion*, ::PowerUI::Renderman*, float, ::Blaze::AtlasLocation*, ::Blaze::UVBlock*)>(&PowerUI::MeshBlock::SetClipped)> {
  static const MethodInfo* get() {
    static auto* boundary = &::il2cpp_utils::GetClassFromName("PowerUI", "BoxRegion")->byval_arg;
    static auto* block = &::il2cpp_utils::GetClassFromName("PowerUI", "BoxRegion")->byval_arg;
    static auto* renderer = &::il2cpp_utils::GetClassFromName("PowerUI", "Renderman")->byval_arg;
    static auto* zIndex = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* imgLocation = &::il2cpp_utils::GetClassFromName("Blaze", "AtlasLocation")->byval_arg;
    static auto* uvBlock = &::il2cpp_utils::GetClassFromName("Blaze", "UVBlock")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::MeshBlock*), "SetClipped", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{boundary, block, renderer, zIndex, imgLocation, uvBlock});
  }
};
// Writing MetadataGetter for method: PowerUI::MeshBlock::ApplyOutline
// Il2CppName: ApplyOutline
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::MeshBlock::*)(float)>(&PowerUI::MeshBlock::ApplyOutline)> {
  static const MethodInfo* get() {
    static auto* location = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::MeshBlock*), "ApplyOutline", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{location});
  }
};
// Writing MetadataGetter for method: PowerUI::MeshBlock::ApplyVertices
// Il2CppName: ApplyVertices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::MeshBlock::*)(::PowerUI::BoxRegion*, ::PowerUI::Renderman*, float)>(&PowerUI::MeshBlock::ApplyVertices)> {
  static const MethodInfo* get() {
    static auto* block = &::il2cpp_utils::GetClassFromName("PowerUI", "BoxRegion")->byval_arg;
    static auto* renderer = &::il2cpp_utils::GetClassFromName("PowerUI", "Renderman")->byval_arg;
    static auto* zIndex = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::MeshBlock*), "ApplyVertices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{block, renderer, zIndex});
  }
};
// Writing MetadataGetter for method: PowerUI::MeshBlock::SetSolidColourUV
// Il2CppName: SetSolidColourUV
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::MeshBlock::*)()>(&PowerUI::MeshBlock::SetSolidColourUV)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::MeshBlock*), "SetSolidColourUV", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::MeshBlock::Paint
// Il2CppName: Paint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::MeshBlock::*)()>(&PowerUI::MeshBlock::Paint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::MeshBlock*), "Paint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PowerUI::MeshBlock::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&PowerUI::MeshBlock::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::MeshBlock*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
