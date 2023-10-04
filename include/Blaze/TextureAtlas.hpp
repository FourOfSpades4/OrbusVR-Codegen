// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Color32
#include "UnityEngine/Color32.hpp"
// Including type: Blaze.AtlasingMode
#include "Blaze/AtlasingMode.hpp"
// Including type: UnityEngine.FilterMode
#include "UnityEngine/FilterMode.hpp"
// Including type: UnityEngine.TextureFormat
#include "UnityEngine/TextureFormat.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Blaze
namespace Blaze {
  // Forward declaring type: AtlasStack
  class AtlasStack;
  // Forward declaring type: AtlasLocation
  class AtlasLocation;
  // Forward declaring type: AtlasEntity
  class AtlasEntity;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
}
// Completed forward declares
// Type namespace: Blaze
namespace Blaze {
  // Forward declaring type: TextureAtlas
  class TextureAtlas;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Blaze::TextureAtlas);
DEFINE_IL2CPP_ARG_TYPE(::Blaze::TextureAtlas*, "Blaze", "TextureAtlas");
// Type namespace: Blaze
namespace Blaze {
  // Size: 0x7C
  #pragma pack(push, 1)
  // Autogenerated type: Blaze.TextureAtlas
  // [TokenAttribute] Offset: FFFFFFFF
  class TextureAtlas : public ::Il2CppObject {
    public:
    public:
    // private System.Int32 RawSpacing
    // Size: 0x4
    // Offset: 0x10
    int RawSpacing;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: RawSpacing and: Stack
    char __padding0[0x4] = {};
    // public Blaze.AtlasStack Stack
    // Size: 0x8
    // Offset: 0x18
    ::Blaze::AtlasStack* Stack;
    // Field size check
    static_assert(sizeof(::Blaze::AtlasStack*) == 0x8);
    // public Blaze.TextureAtlas Next
    // Size: 0x8
    // Offset: 0x20
    ::Blaze::TextureAtlas* Next;
    // Field size check
    static_assert(sizeof(::Blaze::TextureAtlas*) == 0x8);
    // public Blaze.TextureAtlas Previous
    // Size: 0x8
    // Offset: 0x28
    ::Blaze::TextureAtlas* Previous;
    // Field size check
    static_assert(sizeof(::Blaze::TextureAtlas*) == 0x8);
    // public System.Int32 Dimension
    // Size: 0x4
    // Offset: 0x30
    int Dimension;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single DimensionF
    // Size: 0x4
    // Offset: 0x34
    float DimensionF;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single InvertedSize
    // Size: 0x4
    // Offset: 0x38
    float InvertedSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: InvertedSize and: Pixels
    char __padding6[0x4] = {};
    // public UnityEngine.Color32[] Pixels
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::UnityEngine::Color32> Pixels;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Color32>) == 0x8);
    // public System.Boolean PixelChange
    // Size: 0x1
    // Offset: 0x48
    bool PixelChange;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean CanOptimize
    // Size: 0x1
    // Offset: 0x49
    bool CanOptimize;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: CanOptimize and: Texture
    char __padding9[0x6] = {};
    // public UnityEngine.Texture2D Texture
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::Texture2D* Texture;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture2D*) == 0x8);
    // private System.Int32 ColumnProgressX
    // Size: 0x4
    // Offset: 0x58
    int ColumnProgressX;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 ColumnProgressY
    // Size: 0x4
    // Offset: 0x5C
    int ColumnProgressY;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 ColumnWidth
    // Size: 0x4
    // Offset: 0x60
    int ColumnWidth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean OptimizeRequested
    // Size: 0x1
    // Offset: 0x64
    bool OptimizeRequested;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: OptimizeRequested and: LastEmpty
    char __padding14[0x3] = {};
    // public Blaze.AtlasLocation LastEmpty
    // Size: 0x8
    // Offset: 0x68
    ::Blaze::AtlasLocation* LastEmpty;
    // Field size check
    static_assert(sizeof(::Blaze::AtlasLocation*) == 0x8);
    // public Blaze.AtlasLocation FirstEmpty
    // Size: 0x8
    // Offset: 0x70
    ::Blaze::AtlasLocation* FirstEmpty;
    // Field size check
    static_assert(sizeof(::Blaze::AtlasLocation*) == 0x8);
    // public Blaze.AtlasingMode Mode
    // Size: 0x4
    // Offset: 0x78
    ::Blaze::AtlasingMode Mode;
    // Field size check
    static_assert(sizeof(::Blaze::AtlasingMode) == 0x4);
    public:
    // Get instance field reference: private System.Int32 RawSpacing
    [[deprecated("Use field access instead!")]] int& dyn_RawSpacing();
    // Get instance field reference: public Blaze.AtlasStack Stack
    [[deprecated("Use field access instead!")]] ::Blaze::AtlasStack*& dyn_Stack();
    // Get instance field reference: public Blaze.TextureAtlas Next
    [[deprecated("Use field access instead!")]] ::Blaze::TextureAtlas*& dyn_Next();
    // Get instance field reference: public Blaze.TextureAtlas Previous
    [[deprecated("Use field access instead!")]] ::Blaze::TextureAtlas*& dyn_Previous();
    // Get instance field reference: public System.Int32 Dimension
    [[deprecated("Use field access instead!")]] int& dyn_Dimension();
    // Get instance field reference: public System.Single DimensionF
    [[deprecated("Use field access instead!")]] float& dyn_DimensionF();
    // Get instance field reference: public System.Single InvertedSize
    [[deprecated("Use field access instead!")]] float& dyn_InvertedSize();
    // Get instance field reference: public UnityEngine.Color32[] Pixels
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Color32>& dyn_Pixels();
    // Get instance field reference: public System.Boolean PixelChange
    [[deprecated("Use field access instead!")]] bool& dyn_PixelChange();
    // Get instance field reference: public System.Boolean CanOptimize
    [[deprecated("Use field access instead!")]] bool& dyn_CanOptimize();
    // Get instance field reference: public UnityEngine.Texture2D Texture
    [[deprecated("Use field access instead!")]] ::UnityEngine::Texture2D*& dyn_Texture();
    // Get instance field reference: private System.Int32 ColumnProgressX
    [[deprecated("Use field access instead!")]] int& dyn_ColumnProgressX();
    // Get instance field reference: private System.Int32 ColumnProgressY
    [[deprecated("Use field access instead!")]] int& dyn_ColumnProgressY();
    // Get instance field reference: private System.Int32 ColumnWidth
    [[deprecated("Use field access instead!")]] int& dyn_ColumnWidth();
    // Get instance field reference: public System.Boolean OptimizeRequested
    [[deprecated("Use field access instead!")]] bool& dyn_OptimizeRequested();
    // Get instance field reference: public Blaze.AtlasLocation LastEmpty
    [[deprecated("Use field access instead!")]] ::Blaze::AtlasLocation*& dyn_LastEmpty();
    // Get instance field reference: public Blaze.AtlasLocation FirstEmpty
    [[deprecated("Use field access instead!")]] ::Blaze::AtlasLocation*& dyn_FirstEmpty();
    // Get instance field reference: public Blaze.AtlasingMode Mode
    [[deprecated("Use field access instead!")]] ::Blaze::AtlasingMode& dyn_Mode();
    // public System.Void .ctor()
    // Offset: 0xDD910C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextureAtlas* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Blaze::TextureAtlas::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextureAtlas*, creationType>()));
    }
    // public System.Void .ctor(System.Int32 dimension)
    // Offset: 0xDD922C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextureAtlas* New_ctor(int dimension) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Blaze::TextureAtlas::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextureAtlas*, creationType>(dimension)));
    }
    // public System.Void .ctor(System.Int32 dimension, UnityEngine.FilterMode filter, UnityEngine.TextureFormat format, System.Boolean pixels)
    // Offset: 0xDD9120
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextureAtlas* New_ctor(int dimension, ::UnityEngine::FilterMode filter, ::UnityEngine::TextureFormat format, bool pixels) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Blaze::TextureAtlas::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextureAtlas*, creationType>(dimension, filter, format, pixels)));
    }
    // public System.Void .ctor(UnityEngine.Texture2D image)
    // Offset: 0xDD92D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextureAtlas* New_ctor(::UnityEngine::Texture2D* image) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Blaze::TextureAtlas::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextureAtlas*, creationType>(image)));
    }
    // public System.Int32 get_Spacing()
    // Offset: 0xDD9334
    int get_Spacing();
    // public System.Void set_Spacing(System.Int32 value)
    // Offset: 0xDD933C
    void set_Spacing(int value);
    // public System.Void RemoveFromStack()
    // Offset: 0xDD9344
    void RemoveFromStack();
    // public UnityEngine.FilterMode get_FilterMode()
    // Offset: 0xDD93D0
    ::UnityEngine::FilterMode get_FilterMode();
    // public System.Void set_FilterMode(UnityEngine.FilterMode value)
    // Offset: 0xDD9400
    void set_FilterMode(::UnityEngine::FilterMode value);
    // System.Void Reset()
    // Offset: 0xDD923C
    void Reset();
    // public System.Void Flush()
    // Offset: 0xDD9438
    void Flush();
    // System.Boolean OptimiseAdd(Blaze.AtlasLocation location)
    // Offset: 0xDD94BC
    bool OptimiseAdd(::Blaze::AtlasLocation* location);
    // Blaze.AtlasLocation Add(Blaze.AtlasEntity texture, System.Int32 entityID, System.Int32 width, System.Int32 height)
    // Offset: 0xDD9578
    ::Blaze::AtlasLocation* Add(::Blaze::AtlasEntity* texture, int entityID, int width, int height);
    // public System.Boolean Optimize()
    // Offset: 0xDD97D4
    bool Optimize();
    // public System.Void Destroy()
    // Offset: 0xDD9A98
    void Destroy();
  }; // Blaze.TextureAtlas
  #pragma pack(pop)
  static check_size<sizeof(TextureAtlas), 120 + sizeof(::Blaze::AtlasingMode)> __Blaze_TextureAtlasSizeCheck;
  static_assert(sizeof(TextureAtlas) == 0x7C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Blaze::TextureAtlas::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Blaze::TextureAtlas::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Blaze::TextureAtlas::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Blaze::TextureAtlas::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Blaze::TextureAtlas::get_Spacing
// Il2CppName: get_Spacing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Blaze::TextureAtlas::*)()>(&Blaze::TextureAtlas::get_Spacing)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Blaze::TextureAtlas*), "get_Spacing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Blaze::TextureAtlas::set_Spacing
// Il2CppName: set_Spacing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Blaze::TextureAtlas::*)(int)>(&Blaze::TextureAtlas::set_Spacing)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Blaze::TextureAtlas*), "set_Spacing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Blaze::TextureAtlas::RemoveFromStack
// Il2CppName: RemoveFromStack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Blaze::TextureAtlas::*)()>(&Blaze::TextureAtlas::RemoveFromStack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Blaze::TextureAtlas*), "RemoveFromStack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Blaze::TextureAtlas::get_FilterMode
// Il2CppName: get_FilterMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::FilterMode (Blaze::TextureAtlas::*)()>(&Blaze::TextureAtlas::get_FilterMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Blaze::TextureAtlas*), "get_FilterMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Blaze::TextureAtlas::set_FilterMode
// Il2CppName: set_FilterMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Blaze::TextureAtlas::*)(::UnityEngine::FilterMode)>(&Blaze::TextureAtlas::set_FilterMode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "FilterMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Blaze::TextureAtlas*), "set_FilterMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Blaze::TextureAtlas::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Blaze::TextureAtlas::*)()>(&Blaze::TextureAtlas::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Blaze::TextureAtlas*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Blaze::TextureAtlas::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Blaze::TextureAtlas::*)()>(&Blaze::TextureAtlas::Flush)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Blaze::TextureAtlas*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Blaze::TextureAtlas::OptimiseAdd
// Il2CppName: OptimiseAdd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Blaze::TextureAtlas::*)(::Blaze::AtlasLocation*)>(&Blaze::TextureAtlas::OptimiseAdd)> {
  static const MethodInfo* get() {
    static auto* location = &::il2cpp_utils::GetClassFromName("Blaze", "AtlasLocation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Blaze::TextureAtlas*), "OptimiseAdd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{location});
  }
};
// Writing MetadataGetter for method: Blaze::TextureAtlas::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Blaze::AtlasLocation* (Blaze::TextureAtlas::*)(::Blaze::AtlasEntity*, int, int, int)>(&Blaze::TextureAtlas::Add)> {
  static const MethodInfo* get() {
    static auto* texture = &::il2cpp_utils::GetClassFromName("Blaze", "AtlasEntity")->byval_arg;
    static auto* entityID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Blaze::TextureAtlas*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{texture, entityID, width, height});
  }
};
// Writing MetadataGetter for method: Blaze::TextureAtlas::Optimize
// Il2CppName: Optimize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Blaze::TextureAtlas::*)()>(&Blaze::TextureAtlas::Optimize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Blaze::TextureAtlas*), "Optimize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Blaze::TextureAtlas::Destroy
// Il2CppName: Destroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Blaze::TextureAtlas::*)()>(&Blaze::TextureAtlas::Destroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Blaze::TextureAtlas*), "Destroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};