// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: InfiniText.FontFaceFlags
#include "InfiniText/FontFaceFlags.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: InfiniText
namespace InfiniText {
  // Forward declaring type: Glyph
  class Glyph;
  // Forward declaring type: FontFamily
  class FontFamily;
  // Forward declaring type: CffGlyphParser
  class CffGlyphParser;
  // Forward declaring type: FontParser
  class FontParser;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: SPA
  class SPA;
}
// Completed forward declares
// Type namespace: InfiniText
namespace InfiniText {
  // Forward declaring type: FontFace
  class FontFace;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::InfiniText::FontFace);
DEFINE_IL2CPP_ARG_TYPE(::InfiniText::FontFace*, "InfiniText", "FontFace");
// Type namespace: InfiniText
namespace InfiniText {
  // Size: 0xC0
  #pragma pack(push, 1)
  // Autogenerated type: InfiniText.FontFace
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: AD1258
  class FontFace : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 Weight
    // Size: 0x4
    // Offset: 0x10
    int Weight;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: Weight and: Name
    char __padding0[0x4] = {};
    // public System.String Name
    // Size: 0x8
    // Offset: 0x18
    ::StringW Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean Clockness
    // Size: 0x1
    // Offset: 0x20
    bool Clockness;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: Clockness and: NotDefined
    char __padding2[0x7] = {};
    // public InfiniText.Glyph NotDefined
    // Size: 0x8
    // Offset: 0x28
    ::InfiniText::Glyph* NotDefined;
    // Field size check
    static_assert(sizeof(::InfiniText::Glyph*) == 0x8);
    // public System.Boolean WindingUnknown
    // Size: 0x1
    // Offset: 0x30
    bool WindingUnknown;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean RequiresLoad
    // Size: 0x1
    // Offset: 0x31
    bool RequiresLoad;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: RequiresLoad and: LineGap
    char __padding5[0x2] = {};
    // public System.Single LineGap
    // Size: 0x4
    // Offset: 0x34
    float LineGap;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single ItalicAngle
    // Size: 0x4
    // Offset: 0x38
    float ItalicAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single Ascender
    // Size: 0x4
    // Offset: 0x3C
    float Ascender;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single Descender
    // Size: 0x4
    // Offset: 0x40
    float Descender;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: Descender and: Family
    char __padding9[0x4] = {};
    // public InfiniText.FontFamily Family
    // Size: 0x8
    // Offset: 0x48
    ::InfiniText::FontFamily* Family;
    // Field size check
    static_assert(sizeof(::InfiniText::FontFamily*) == 0x8);
    // public System.Int32 CharacterCount
    // Size: 0x4
    // Offset: 0x50
    int CharacterCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single MaxAdvanceWidth
    // Size: 0x4
    // Offset: 0x54
    float MaxAdvanceWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single MinLeftSideBearing
    // Size: 0x4
    // Offset: 0x58
    float MinLeftSideBearing;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single MinRightSideBearing
    // Size: 0x4
    // Offset: 0x5C
    float MinRightSideBearing;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single MaxXExtent
    // Size: 0x4
    // Offset: 0x60
    float MaxXExtent;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single CaretAngle
    // Size: 0x4
    // Offset: 0x64
    float CaretAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single CaretOffset
    // Size: 0x4
    // Offset: 0x68
    float CaretOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 NumberOfHMetrics
    // Size: 0x4
    // Offset: 0x6C
    int NumberOfHMetrics;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 UnitsPerEm
    // Size: 0x4
    // Offset: 0x70
    int UnitsPerEm;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single UnitsPerEmF
    // Size: 0x4
    // Offset: 0x74
    float UnitsPerEmF;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single StrikeSize
    // Size: 0x4
    // Offset: 0x78
    float StrikeSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single StrikeOffset
    // Size: 0x4
    // Offset: 0x7C
    float StrikeOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public InfiniText.FontFace SyntheticDerivative
    // Size: 0x8
    // Offset: 0x80
    ::InfiniText::FontFace* SyntheticDerivative;
    // Field size check
    static_assert(sizeof(::InfiniText::FontFace*) == 0x8);
    // public InfiniText.FontFaceFlags StyleFlags
    // Size: 0x4
    // Offset: 0x88
    ::InfiniText::FontFaceFlags StyleFlags;
    // Field size check
    static_assert(sizeof(::InfiniText::FontFaceFlags) == 0x4);
    // Padding between fields: StyleFlags and: Glyphs
    char __padding24[0x4] = {};
    // public System.Collections.Generic.Dictionary`2<System.Int32,InfiniText.Glyph> Glyphs
    // Size: 0x8
    // Offset: 0x90
    ::System::Collections::Generic::Dictionary_2<int, ::InfiniText::Glyph*>* Glyphs;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<int, ::InfiniText::Glyph*>*) == 0x8);
    // public InfiniText.CffGlyphParser CffParser
    // Size: 0x8
    // Offset: 0x98
    ::InfiniText::CffGlyphParser* CffParser;
    // Field size check
    static_assert(sizeof(::InfiniText::CffGlyphParser*) == 0x8);
    // public InfiniText.FontParser Parser
    // Size: 0x8
    // Offset: 0xA0
    ::InfiniText::FontParser* Parser;
    // Field size check
    static_assert(sizeof(::InfiniText::FontParser*) == 0x8);
    // InfiniText.Glyph[] ParserGlyphs
    // Size: 0x8
    // Offset: 0xA8
    ::ArrayW<::InfiniText::Glyph*> ParserGlyphs;
    // Field size check
    static_assert(sizeof(::ArrayW<::InfiniText::Glyph*>) == 0x8);
    // public System.Int32 UnloadedGlyphs
    // Size: 0x4
    // Offset: 0xB0
    int UnloadedGlyphs;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: UnloadedGlyphs and: BitmapFontData
    char __padding29[0x4] = {};
    // public PowerUI.SPA BitmapFontData
    // Size: 0x8
    // Offset: 0xB8
    ::PowerUI::SPA* BitmapFontData;
    // Field size check
    static_assert(sizeof(::PowerUI::SPA*) == 0x8);
    public:
    // Get instance field reference: public System.Int32 Weight
    [[deprecated("Use field access instead!")]] int& dyn_Weight();
    // Get instance field reference: public System.String Name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Name();
    // Get instance field reference: public System.Boolean Clockness
    [[deprecated("Use field access instead!")]] bool& dyn_Clockness();
    // Get instance field reference: public InfiniText.Glyph NotDefined
    [[deprecated("Use field access instead!")]] ::InfiniText::Glyph*& dyn_NotDefined();
    // Get instance field reference: public System.Boolean WindingUnknown
    [[deprecated("Use field access instead!")]] bool& dyn_WindingUnknown();
    // Get instance field reference: public System.Boolean RequiresLoad
    [[deprecated("Use field access instead!")]] bool& dyn_RequiresLoad();
    // Get instance field reference: public System.Single LineGap
    [[deprecated("Use field access instead!")]] float& dyn_LineGap();
    // Get instance field reference: public System.Single ItalicAngle
    [[deprecated("Use field access instead!")]] float& dyn_ItalicAngle();
    // Get instance field reference: public System.Single Ascender
    [[deprecated("Use field access instead!")]] float& dyn_Ascender();
    // Get instance field reference: public System.Single Descender
    [[deprecated("Use field access instead!")]] float& dyn_Descender();
    // Get instance field reference: public InfiniText.FontFamily Family
    [[deprecated("Use field access instead!")]] ::InfiniText::FontFamily*& dyn_Family();
    // Get instance field reference: public System.Int32 CharacterCount
    [[deprecated("Use field access instead!")]] int& dyn_CharacterCount();
    // Get instance field reference: public System.Single MaxAdvanceWidth
    [[deprecated("Use field access instead!")]] float& dyn_MaxAdvanceWidth();
    // Get instance field reference: public System.Single MinLeftSideBearing
    [[deprecated("Use field access instead!")]] float& dyn_MinLeftSideBearing();
    // Get instance field reference: public System.Single MinRightSideBearing
    [[deprecated("Use field access instead!")]] float& dyn_MinRightSideBearing();
    // Get instance field reference: public System.Single MaxXExtent
    [[deprecated("Use field access instead!")]] float& dyn_MaxXExtent();
    // Get instance field reference: public System.Single CaretAngle
    [[deprecated("Use field access instead!")]] float& dyn_CaretAngle();
    // Get instance field reference: public System.Single CaretOffset
    [[deprecated("Use field access instead!")]] float& dyn_CaretOffset();
    // Get instance field reference: public System.Int32 NumberOfHMetrics
    [[deprecated("Use field access instead!")]] int& dyn_NumberOfHMetrics();
    // Get instance field reference: public System.Int32 UnitsPerEm
    [[deprecated("Use field access instead!")]] int& dyn_UnitsPerEm();
    // Get instance field reference: public System.Single UnitsPerEmF
    [[deprecated("Use field access instead!")]] float& dyn_UnitsPerEmF();
    // Get instance field reference: public System.Single StrikeSize
    [[deprecated("Use field access instead!")]] float& dyn_StrikeSize();
    // Get instance field reference: public System.Single StrikeOffset
    [[deprecated("Use field access instead!")]] float& dyn_StrikeOffset();
    // Get instance field reference: public InfiniText.FontFace SyntheticDerivative
    [[deprecated("Use field access instead!")]] ::InfiniText::FontFace*& dyn_SyntheticDerivative();
    // Get instance field reference: public InfiniText.FontFaceFlags StyleFlags
    [[deprecated("Use field access instead!")]] ::InfiniText::FontFaceFlags& dyn_StyleFlags();
    // Get instance field reference: public System.Collections.Generic.Dictionary`2<System.Int32,InfiniText.Glyph> Glyphs
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<int, ::InfiniText::Glyph*>*& dyn_Glyphs();
    // Get instance field reference: public InfiniText.CffGlyphParser CffParser
    [[deprecated("Use field access instead!")]] ::InfiniText::CffGlyphParser*& dyn_CffParser();
    // Get instance field reference: public InfiniText.FontParser Parser
    [[deprecated("Use field access instead!")]] ::InfiniText::FontParser*& dyn_Parser();
    // Get instance field reference: InfiniText.Glyph[] ParserGlyphs
    [[deprecated("Use field access instead!")]] ::ArrayW<::InfiniText::Glyph*>& dyn_ParserGlyphs();
    // Get instance field reference: public System.Int32 UnloadedGlyphs
    [[deprecated("Use field access instead!")]] int& dyn_UnloadedGlyphs();
    // Get instance field reference: public PowerUI.SPA BitmapFontData
    [[deprecated("Use field access instead!")]] ::PowerUI::SPA*& dyn_BitmapFontData();
    // public System.Void SetupBitmapFont(PowerUI.SPA spa)
    // Offset: 0x14A8058
    void SetupBitmapFont(::PowerUI::SPA* spa);
    // public System.Void AllGlyphsLoaded()
    // Offset: 0x14A7294
    void AllGlyphsLoaded();
    // System.Void FindWinding(InfiniText.Glyph glyph)
    // Offset: 0x14A4AEC
    void FindWinding(::InfiniText::Glyph* glyph);
    // public System.Void Load()
    // Offset: 0x14A8064
    void Load();
    // public System.Void Derive(InfiniText.FontFace from, System.Boolean italic, System.Int32 weight)
    // Offset: 0x14A8278
    void Derive(::InfiniText::FontFace* from, bool italic, int weight);
    // public System.Void SetItalicAngle(System.Single angle)
    // Offset: 0x14A838C
    void SetItalicAngle(float angle);
    // public System.Void SetFlags(System.Boolean italic, System.Int32 weight)
    // Offset: 0x14A8360
    void SetFlags(bool italic, int weight);
    // public System.Boolean get_Synthetic()
    // Offset: 0x14A8420
    bool get_Synthetic();
    // public System.Boolean get_Regular()
    // Offset: 0x14A8430
    bool get_Regular();
    // public System.Boolean get_Italic()
    // Offset: 0x14A8440
    bool get_Italic();
    // public System.Boolean get_Bold()
    // Offset: 0x14A844C
    bool get_Bold();
    // public InfiniText.FontFace CreateSynthetic(System.Boolean italic, System.Int32 weight)
    // Offset: 0x14A8460
    ::InfiniText::FontFace* CreateSynthetic(bool italic, int weight);
    // public InfiniText.Glyph Synthesize(System.Int32 charCode)
    // Offset: 0x14A8598
    ::InfiniText::Glyph* Synthesize(int charCode);
    // public InfiniText.Glyph get_Item(System.Int32 charCode)
    // Offset: 0x14A87D0
    ::InfiniText::Glyph* get_Item(int charCode);
    // public System.Void set_Item(System.Int32 charCode, InfiniText.Glyph value)
    // Offset: 0x14A8850
    void set_Item(int charCode, ::InfiniText::Glyph* value);
    // public InfiniText.Glyph GetGlyphDirect(System.Int32 charCode)
    // Offset: 0x14A88C8
    ::InfiniText::Glyph* GetGlyphDirect(int charCode);
    // public InfiniText.Glyph GetGlyph(System.Int32 charCode)
    // Offset: 0x14A8948
    ::InfiniText::Glyph* GetGlyph(int charCode);
    // public InfiniText.Glyph GetGlyph(System.Int32 charCode, out System.Boolean firstTime)
    // Offset: 0x14A896C
    ::InfiniText::Glyph* GetGlyph(int charCode, ByRef<bool> firstTime);
    // public System.String get_FamilyName()
    // Offset: 0x14A8374
    ::StringW get_FamilyName();
    // public System.Void set_FamilyName(System.String value)
    // Offset: 0x14A8AA8
    void set_FamilyName(::StringW value);
    // public System.Void .ctor()
    // Offset: 0x14A84EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FontFace* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::InfiniText::FontFace::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FontFace*, creationType>()));
    }
  }; // InfiniText.FontFace
  #pragma pack(pop)
  static check_size<sizeof(FontFace), 184 + sizeof(::PowerUI::SPA*)> __InfiniText_FontFaceSizeCheck;
  static_assert(sizeof(FontFace) == 0xC0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: InfiniText::FontFace::SetupBitmapFont
// Il2CppName: SetupBitmapFont
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (InfiniText::FontFace::*)(::PowerUI::SPA*)>(&InfiniText::FontFace::SetupBitmapFont)> {
  static const MethodInfo* get() {
    static auto* spa = &::il2cpp_utils::GetClassFromName("PowerUI", "SPA")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(InfiniText::FontFace*), "SetupBitmapFont", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{spa});
  }
};
// Writing MetadataGetter for method: InfiniText::FontFace::AllGlyphsLoaded
// Il2CppName: AllGlyphsLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (InfiniText::FontFace::*)()>(&InfiniText::FontFace::AllGlyphsLoaded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(InfiniText::FontFace*), "AllGlyphsLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: InfiniText::FontFace::FindWinding
// Il2CppName: FindWinding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (InfiniText::FontFace::*)(::InfiniText::Glyph*)>(&InfiniText::FontFace::FindWinding)> {
  static const MethodInfo* get() {
    static auto* glyph = &::il2cpp_utils::GetClassFromName("InfiniText", "Glyph")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(InfiniText::FontFace*), "FindWinding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{glyph});
  }
};
// Writing MetadataGetter for method: InfiniText::FontFace::Load
// Il2CppName: Load
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (InfiniText::FontFace::*)()>(&InfiniText::FontFace::Load)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(InfiniText::FontFace*), "Load", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: InfiniText::FontFace::Derive
// Il2CppName: Derive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (InfiniText::FontFace::*)(::InfiniText::FontFace*, bool, int)>(&InfiniText::FontFace::Derive)> {
  static const MethodInfo* get() {
    static auto* from = &::il2cpp_utils::GetClassFromName("InfiniText", "FontFace")->byval_arg;
    static auto* italic = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(InfiniText::FontFace*), "Derive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{from, italic, weight});
  }
};
// Writing MetadataGetter for method: InfiniText::FontFace::SetItalicAngle
// Il2CppName: SetItalicAngle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (InfiniText::FontFace::*)(float)>(&InfiniText::FontFace::SetItalicAngle)> {
  static const MethodInfo* get() {
    static auto* angle = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(InfiniText::FontFace*), "SetItalicAngle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{angle});
  }
};
// Writing MetadataGetter for method: InfiniText::FontFace::SetFlags
// Il2CppName: SetFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (InfiniText::FontFace::*)(bool, int)>(&InfiniText::FontFace::SetFlags)> {
  static const MethodInfo* get() {
    static auto* italic = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(InfiniText::FontFace*), "SetFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{italic, weight});
  }
};
// Writing MetadataGetter for method: InfiniText::FontFace::get_Synthetic
// Il2CppName: get_Synthetic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (InfiniText::FontFace::*)()>(&InfiniText::FontFace::get_Synthetic)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(InfiniText::FontFace*), "get_Synthetic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: InfiniText::FontFace::get_Regular
// Il2CppName: get_Regular
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (InfiniText::FontFace::*)()>(&InfiniText::FontFace::get_Regular)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(InfiniText::FontFace*), "get_Regular", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: InfiniText::FontFace::get_Italic
// Il2CppName: get_Italic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (InfiniText::FontFace::*)()>(&InfiniText::FontFace::get_Italic)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(InfiniText::FontFace*), "get_Italic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: InfiniText::FontFace::get_Bold
// Il2CppName: get_Bold
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (InfiniText::FontFace::*)()>(&InfiniText::FontFace::get_Bold)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(InfiniText::FontFace*), "get_Bold", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: InfiniText::FontFace::CreateSynthetic
// Il2CppName: CreateSynthetic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::InfiniText::FontFace* (InfiniText::FontFace::*)(bool, int)>(&InfiniText::FontFace::CreateSynthetic)> {
  static const MethodInfo* get() {
    static auto* italic = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(InfiniText::FontFace*), "CreateSynthetic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{italic, weight});
  }
};
// Writing MetadataGetter for method: InfiniText::FontFace::Synthesize
// Il2CppName: Synthesize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::InfiniText::Glyph* (InfiniText::FontFace::*)(int)>(&InfiniText::FontFace::Synthesize)> {
  static const MethodInfo* get() {
    static auto* charCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(InfiniText::FontFace*), "Synthesize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{charCode});
  }
};
// Writing MetadataGetter for method: InfiniText::FontFace::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::InfiniText::Glyph* (InfiniText::FontFace::*)(int)>(&InfiniText::FontFace::get_Item)> {
  static const MethodInfo* get() {
    static auto* charCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(InfiniText::FontFace*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{charCode});
  }
};
// Writing MetadataGetter for method: InfiniText::FontFace::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (InfiniText::FontFace::*)(int, ::InfiniText::Glyph*)>(&InfiniText::FontFace::set_Item)> {
  static const MethodInfo* get() {
    static auto* charCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("InfiniText", "Glyph")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(InfiniText::FontFace*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{charCode, value});
  }
};
// Writing MetadataGetter for method: InfiniText::FontFace::GetGlyphDirect
// Il2CppName: GetGlyphDirect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::InfiniText::Glyph* (InfiniText::FontFace::*)(int)>(&InfiniText::FontFace::GetGlyphDirect)> {
  static const MethodInfo* get() {
    static auto* charCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(InfiniText::FontFace*), "GetGlyphDirect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{charCode});
  }
};
// Writing MetadataGetter for method: InfiniText::FontFace::GetGlyph
// Il2CppName: GetGlyph
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::InfiniText::Glyph* (InfiniText::FontFace::*)(int)>(&InfiniText::FontFace::GetGlyph)> {
  static const MethodInfo* get() {
    static auto* charCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(InfiniText::FontFace*), "GetGlyph", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{charCode});
  }
};
// Writing MetadataGetter for method: InfiniText::FontFace::GetGlyph
// Il2CppName: GetGlyph
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::InfiniText::Glyph* (InfiniText::FontFace::*)(int, ByRef<bool>)>(&InfiniText::FontFace::GetGlyph)> {
  static const MethodInfo* get() {
    static auto* charCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* firstTime = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(InfiniText::FontFace*), "GetGlyph", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{charCode, firstTime});
  }
};
// Writing MetadataGetter for method: InfiniText::FontFace::get_FamilyName
// Il2CppName: get_FamilyName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (InfiniText::FontFace::*)()>(&InfiniText::FontFace::get_FamilyName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(InfiniText::FontFace*), "get_FamilyName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: InfiniText::FontFace::set_FamilyName
// Il2CppName: set_FamilyName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (InfiniText::FontFace::*)(::StringW)>(&InfiniText::FontFace::set_FamilyName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(InfiniText::FontFace*), "set_FamilyName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: InfiniText::FontFace::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
