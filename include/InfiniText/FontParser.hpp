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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: InfiniText
namespace InfiniText {
  // Forward declaring type: FontParser
  class FontParser;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::InfiniText::FontParser);
DEFINE_IL2CPP_ARG_TYPE(::InfiniText::FontParser*, "InfiniText", "FontParser");
// Type namespace: InfiniText
namespace InfiniText {
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: InfiniText.FontParser
  // [TokenAttribute] Offset: FFFFFFFF
  class FontParser : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 GlyfOffset
    // Size: 0x4
    // Offset: 0x10
    int GlyfOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 LocaOffset
    // Size: 0x4
    // Offset: 0x14
    int LocaOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 CffOffset
    // Size: 0x4
    // Offset: 0x18
    int CffOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 HmtxOffset
    // Size: 0x4
    // Offset: 0x1C
    int HmtxOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 KernOffset
    // Size: 0x4
    // Offset: 0x20
    int KernOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 GposOffset
    // Size: 0x4
    // Offset: 0x24
    int GposOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 GlyphCount
    // Size: 0x4
    // Offset: 0x28
    int GlyphCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 CmapOffset
    // Size: 0x4
    // Offset: 0x2C
    int CmapOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 PostOffset
    // Size: 0x4
    // Offset: 0x30
    int PostOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 HheaOffset
    // Size: 0x4
    // Offset: 0x34
    int HheaOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean ReadOS2
    // Size: 0x1
    // Offset: 0x38
    bool ReadOS2;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: ReadOS2 and: IndexToLocFormat
    char __padding10[0x3] = {};
    // public System.Int32 IndexToLocFormat
    // Size: 0x4
    // Offset: 0x3C
    int IndexToLocFormat;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Byte[] Data
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<uint8_t> Data;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.Int32 Position
    // Size: 0x4
    // Offset: 0x48
    int Position;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public System.Int32 GlyfOffset
    [[deprecated("Use field access instead!")]] int& dyn_GlyfOffset();
    // Get instance field reference: public System.Int32 LocaOffset
    [[deprecated("Use field access instead!")]] int& dyn_LocaOffset();
    // Get instance field reference: public System.Int32 CffOffset
    [[deprecated("Use field access instead!")]] int& dyn_CffOffset();
    // Get instance field reference: public System.Int32 HmtxOffset
    [[deprecated("Use field access instead!")]] int& dyn_HmtxOffset();
    // Get instance field reference: public System.Int32 KernOffset
    [[deprecated("Use field access instead!")]] int& dyn_KernOffset();
    // Get instance field reference: public System.Int32 GposOffset
    [[deprecated("Use field access instead!")]] int& dyn_GposOffset();
    // Get instance field reference: public System.Int32 GlyphCount
    [[deprecated("Use field access instead!")]] int& dyn_GlyphCount();
    // Get instance field reference: public System.Int32 CmapOffset
    [[deprecated("Use field access instead!")]] int& dyn_CmapOffset();
    // Get instance field reference: public System.Int32 PostOffset
    [[deprecated("Use field access instead!")]] int& dyn_PostOffset();
    // Get instance field reference: public System.Int32 HheaOffset
    [[deprecated("Use field access instead!")]] int& dyn_HheaOffset();
    // Get instance field reference: public System.Boolean ReadOS2
    [[deprecated("Use field access instead!")]] bool& dyn_ReadOS2();
    // Get instance field reference: public System.Int32 IndexToLocFormat
    [[deprecated("Use field access instead!")]] int& dyn_IndexToLocFormat();
    // Get instance field reference: public System.Byte[] Data
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_Data();
    // Get instance field reference: public System.Int32 Position
    [[deprecated("Use field access instead!")]] int& dyn_Position();
    // public System.Void .ctor(System.Byte[] data)
    // Offset: 0x14A9450
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FontParser* New_ctor(::ArrayW<uint8_t> data) {
      static auto ___internal__logger = ::Logger::get().WithContext("::InfiniText::FontParser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FontParser*, creationType>(data)));
    }
    // public System.Byte ReadByte()
    // Offset: 0x14A4E70
    uint8_t ReadByte();
    // public System.Int32 ReadOffset(System.Int32 offSize)
    // Offset: 0x14A55B4
    int ReadOffset(int offSize);
    // public System.Int16 ReadInt16()
    // Offset: 0x14A4F30
    int16_t ReadInt16();
    // public System.UInt16 ReadUInt16()
    // Offset: 0x14A550C
    uint16_t ReadUInt16();
    // public System.UInt16 ReadUInt16(ref System.Int32 index)
    // Offset: 0x14A6E90
    uint16_t ReadUInt16(ByRef<int> index);
    // public System.Int16 ReadInt16(ref System.Int32 index)
    // Offset: 0x14A6F40
    int16_t ReadInt16(ByRef<int> index);
    // public System.Int32 ReadInt32()
    // Offset: 0x14A4FE0
    int ReadInt32();
    // public System.UInt32 ReadUInt32()
    // Offset: 0x14A6384
    uint ReadUInt32();
    // public System.Int32 ReadInt24()
    // Offset: 0x14AAD64
    int ReadInt24();
    // public System.UInt32 ReadUInt24()
    // Offset: 0x14AAE5C
    uint ReadUInt24();
    // public System.Single ReadRevision()
    // Offset: 0x14AAF54
    float ReadRevision();
    // public System.Single ReadVersion()
    // Offset: 0x14AAF98
    float ReadVersion();
    // public System.UInt64 ReadTime()
    // Offset: 0x14AAFC8
    uint64_t ReadTime();
    // public System.String ReadString(System.Int32 length)
    // Offset: 0x14AAFDC
    ::StringW ReadString(int length);
    // public System.String ReadTag()
    // Offset: 0x14A9B08
    ::StringW ReadTag();
    // public System.Single ReadF2Dot14()
    // Offset: 0x14AB0E8
    float ReadF2Dot14();
    // public System.Int32 ReadFixed(out System.Int32 frac)
    // Offset: 0x14A9AC4
    int ReadFixed(ByRef<int> frac);
  }; // InfiniText.FontParser
  #pragma pack(pop)
  static check_size<sizeof(FontParser), 72 + sizeof(int)> __InfiniText_FontParserSizeCheck;
  static_assert(sizeof(FontParser) == 0x4C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: InfiniText::FontParser::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: InfiniText::FontParser::ReadByte
// Il2CppName: ReadByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (InfiniText::FontParser::*)()>(&InfiniText::FontParser::ReadByte)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(InfiniText::FontParser*), "ReadByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: InfiniText::FontParser::ReadOffset
// Il2CppName: ReadOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (InfiniText::FontParser::*)(int)>(&InfiniText::FontParser::ReadOffset)> {
  static const MethodInfo* get() {
    static auto* offSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(InfiniText::FontParser*), "ReadOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offSize});
  }
};
// Writing MetadataGetter for method: InfiniText::FontParser::ReadInt16
// Il2CppName: ReadInt16
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (InfiniText::FontParser::*)()>(&InfiniText::FontParser::ReadInt16)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(InfiniText::FontParser*), "ReadInt16", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: InfiniText::FontParser::ReadUInt16
// Il2CppName: ReadUInt16
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (InfiniText::FontParser::*)()>(&InfiniText::FontParser::ReadUInt16)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(InfiniText::FontParser*), "ReadUInt16", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: InfiniText::FontParser::ReadUInt16
// Il2CppName: ReadUInt16
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (InfiniText::FontParser::*)(ByRef<int>)>(&InfiniText::FontParser::ReadUInt16)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(InfiniText::FontParser*), "ReadUInt16", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: InfiniText::FontParser::ReadInt16
// Il2CppName: ReadInt16
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (InfiniText::FontParser::*)(ByRef<int>)>(&InfiniText::FontParser::ReadInt16)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(InfiniText::FontParser*), "ReadInt16", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: InfiniText::FontParser::ReadInt32
// Il2CppName: ReadInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (InfiniText::FontParser::*)()>(&InfiniText::FontParser::ReadInt32)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(InfiniText::FontParser*), "ReadInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: InfiniText::FontParser::ReadUInt32
// Il2CppName: ReadUInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (InfiniText::FontParser::*)()>(&InfiniText::FontParser::ReadUInt32)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(InfiniText::FontParser*), "ReadUInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: InfiniText::FontParser::ReadInt24
// Il2CppName: ReadInt24
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (InfiniText::FontParser::*)()>(&InfiniText::FontParser::ReadInt24)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(InfiniText::FontParser*), "ReadInt24", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: InfiniText::FontParser::ReadUInt24
// Il2CppName: ReadUInt24
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (InfiniText::FontParser::*)()>(&InfiniText::FontParser::ReadUInt24)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(InfiniText::FontParser*), "ReadUInt24", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: InfiniText::FontParser::ReadRevision
// Il2CppName: ReadRevision
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (InfiniText::FontParser::*)()>(&InfiniText::FontParser::ReadRevision)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(InfiniText::FontParser*), "ReadRevision", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: InfiniText::FontParser::ReadVersion
// Il2CppName: ReadVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (InfiniText::FontParser::*)()>(&InfiniText::FontParser::ReadVersion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(InfiniText::FontParser*), "ReadVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: InfiniText::FontParser::ReadTime
// Il2CppName: ReadTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (InfiniText::FontParser::*)()>(&InfiniText::FontParser::ReadTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(InfiniText::FontParser*), "ReadTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: InfiniText::FontParser::ReadString
// Il2CppName: ReadString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (InfiniText::FontParser::*)(int)>(&InfiniText::FontParser::ReadString)> {
  static const MethodInfo* get() {
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(InfiniText::FontParser*), "ReadString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{length});
  }
};
// Writing MetadataGetter for method: InfiniText::FontParser::ReadTag
// Il2CppName: ReadTag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (InfiniText::FontParser::*)()>(&InfiniText::FontParser::ReadTag)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(InfiniText::FontParser*), "ReadTag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: InfiniText::FontParser::ReadF2Dot14
// Il2CppName: ReadF2Dot14
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (InfiniText::FontParser::*)()>(&InfiniText::FontParser::ReadF2Dot14)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(InfiniText::FontParser*), "ReadF2Dot14", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: InfiniText::FontParser::ReadFixed
// Il2CppName: ReadFixed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (InfiniText::FontParser::*)(ByRef<int>)>(&InfiniText::FontParser::ReadFixed)> {
  static const MethodInfo* get() {
    static auto* frac = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(InfiniText::FontParser*), "ReadFixed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frac});
  }
};
