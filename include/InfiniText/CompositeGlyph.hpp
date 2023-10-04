// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: InfiniText.Glyph
#include "InfiniText/Glyph.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Blaze
namespace Blaze {
  // Forward declaring type: VectorTransform
  class VectorTransform;
}
// Forward declaring namespace: InfiniText
namespace InfiniText {
  // Forward declaring type: FontFace
  class FontFace;
}
// Completed forward declares
// Type namespace: InfiniText
namespace InfiniText {
  // Forward declaring type: CompositeGlyph
  class CompositeGlyph;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::InfiniText::CompositeGlyph);
DEFINE_IL2CPP_ARG_TYPE(::InfiniText::CompositeGlyph*, "InfiniText", "CompositeGlyph");
// Type namespace: InfiniText
namespace InfiniText {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: InfiniText.CompositeGlyph
  // [TokenAttribute] Offset: FFFFFFFF
  class CompositeGlyph : public ::InfiniText::Glyph {
    public:
    public:
    // public Blaze.VectorTransform LastComponent
    // Size: 0x8
    // Offset: 0x80
    ::Blaze::VectorTransform* LastComponent;
    // Field size check
    static_assert(sizeof(::Blaze::VectorTransform*) == 0x8);
    // public Blaze.VectorTransform FirstComponent
    // Size: 0x8
    // Offset: 0x88
    ::Blaze::VectorTransform* FirstComponent;
    // Field size check
    static_assert(sizeof(::Blaze::VectorTransform*) == 0x8);
    public:
    // Get instance field reference: public Blaze.VectorTransform LastComponent
    [[deprecated("Use field access instead!")]] ::Blaze::VectorTransform*& dyn_LastComponent();
    // Get instance field reference: public Blaze.VectorTransform FirstComponent
    [[deprecated("Use field access instead!")]] ::Blaze::VectorTransform*& dyn_FirstComponent();
    // public System.Void AddComponent(Blaze.VectorTransform component)
    // Offset: 0x14A72A4
    void AddComponent(::Blaze::VectorTransform* component);
    // private System.Void TransformPoints(InfiniText.Glyph fromGlyph, Blaze.VectorTransform transform)
    // Offset: 0x14A7380
    void TransformPoints(::InfiniText::Glyph* fromGlyph, ::Blaze::VectorTransform* transform);
    // public System.Void .ctor(InfiniText.FontFace parent)
    // Offset: 0x14A70A8
    // Implemented from: InfiniText.Glyph
    // Base method: System.Void Glyph::.ctor(InfiniText.FontFace parent)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CompositeGlyph* New_ctor(::InfiniText::FontFace* parent) {
      static auto ___internal__logger = ::Logger::get().WithContext("::InfiniText::CompositeGlyph::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CompositeGlyph*, creationType>(parent)));
    }
    // public override System.Boolean get_RequiresLoad()
    // Offset: 0x14A7120
    // Implemented from: InfiniText.Glyph
    // Base method: System.Boolean Glyph::get_RequiresLoad()
    bool get_RequiresLoad();
    // public override System.Void LoadNow()
    // Offset: 0x14A7140
    // Implemented from: InfiniText.Glyph
    // Base method: System.Void Glyph::LoadNow()
    void LoadNow();
    // public override System.Boolean get_IsComposite()
    // Offset: 0x14A72FC
    // Implemented from: InfiniText.Glyph
    // Base method: System.Boolean Glyph::get_IsComposite()
    bool get_IsComposite();
    // public override System.Void LoadFully(InfiniText.Glyph[] glyphs)
    // Offset: 0x14A7304
    // Implemented from: InfiniText.Glyph
    // Base method: System.Void Glyph::LoadFully(InfiniText.Glyph[] glyphs)
    void LoadFully(::ArrayW<::InfiniText::Glyph*> glyphs);
  }; // InfiniText.CompositeGlyph
  #pragma pack(pop)
  static check_size<sizeof(CompositeGlyph), 136 + sizeof(::Blaze::VectorTransform*)> __InfiniText_CompositeGlyphSizeCheck;
  static_assert(sizeof(CompositeGlyph) == 0x90);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: InfiniText::CompositeGlyph::AddComponent
// Il2CppName: AddComponent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (InfiniText::CompositeGlyph::*)(::Blaze::VectorTransform*)>(&InfiniText::CompositeGlyph::AddComponent)> {
  static const MethodInfo* get() {
    static auto* component = &::il2cpp_utils::GetClassFromName("Blaze", "VectorTransform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(InfiniText::CompositeGlyph*), "AddComponent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{component});
  }
};
// Writing MetadataGetter for method: InfiniText::CompositeGlyph::TransformPoints
// Il2CppName: TransformPoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (InfiniText::CompositeGlyph::*)(::InfiniText::Glyph*, ::Blaze::VectorTransform*)>(&InfiniText::CompositeGlyph::TransformPoints)> {
  static const MethodInfo* get() {
    static auto* fromGlyph = &::il2cpp_utils::GetClassFromName("InfiniText", "Glyph")->byval_arg;
    static auto* transform = &::il2cpp_utils::GetClassFromName("Blaze", "VectorTransform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(InfiniText::CompositeGlyph*), "TransformPoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fromGlyph, transform});
  }
};
// Writing MetadataGetter for method: InfiniText::CompositeGlyph::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: InfiniText::CompositeGlyph::get_RequiresLoad
// Il2CppName: get_RequiresLoad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (InfiniText::CompositeGlyph::*)()>(&InfiniText::CompositeGlyph::get_RequiresLoad)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(InfiniText::CompositeGlyph*), "get_RequiresLoad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: InfiniText::CompositeGlyph::LoadNow
// Il2CppName: LoadNow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (InfiniText::CompositeGlyph::*)()>(&InfiniText::CompositeGlyph::LoadNow)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(InfiniText::CompositeGlyph*), "LoadNow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: InfiniText::CompositeGlyph::get_IsComposite
// Il2CppName: get_IsComposite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (InfiniText::CompositeGlyph::*)()>(&InfiniText::CompositeGlyph::get_IsComposite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(InfiniText::CompositeGlyph*), "get_IsComposite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: InfiniText::CompositeGlyph::LoadFully
// Il2CppName: LoadFully
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (InfiniText::CompositeGlyph::*)(::ArrayW<::InfiniText::Glyph*>)>(&InfiniText::CompositeGlyph::LoadFully)> {
  static const MethodInfo* get() {
    static auto* glyphs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("InfiniText", "Glyph"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(InfiniText::CompositeGlyph*), "LoadFully", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{glyphs});
  }
};
