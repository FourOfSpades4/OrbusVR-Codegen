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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: PowerUI
namespace PowerUI {
  // Forward declaring type: BoxRegion
  class BoxRegion;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PowerUI::BoxRegion);
DEFINE_IL2CPP_ARG_TYPE(::PowerUI::BoxRegion*, "PowerUI", "BoxRegion");
// Type namespace: PowerUI
namespace PowerUI {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PowerUI.BoxRegion
  // [TokenAttribute] Offset: FFFFFFFF
  class BoxRegion : public ::Il2CppObject {
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
    // public System.Single MaxX
    // Size: 0x4
    // Offset: 0x18
    float MaxX;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single MaxY
    // Size: 0x4
    // Offset: 0x1C
    float MaxY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single Width
    // Size: 0x4
    // Offset: 0x20
    float Width;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single Height
    // Size: 0x4
    // Offset: 0x24
    float Height;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.Single X
    [[deprecated("Use field access instead!")]] float& dyn_X();
    // Get instance field reference: public System.Single Y
    [[deprecated("Use field access instead!")]] float& dyn_Y();
    // Get instance field reference: public System.Single MaxX
    [[deprecated("Use field access instead!")]] float& dyn_MaxX();
    // Get instance field reference: public System.Single MaxY
    [[deprecated("Use field access instead!")]] float& dyn_MaxY();
    // Get instance field reference: public System.Single Width
    [[deprecated("Use field access instead!")]] float& dyn_Width();
    // Get instance field reference: public System.Single Height
    [[deprecated("Use field access instead!")]] float& dyn_Height();
    // public System.Void .ctor()
    // Offset: 0xEBA0DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BoxRegion* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PowerUI::BoxRegion::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BoxRegion*, creationType>()));
    }
    // public System.Void .ctor(System.Single x, System.Single y, System.Single width, System.Single height)
    // Offset: 0xEBA0E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BoxRegion* New_ctor(float x, float y, float width, float height) {
      static auto ___internal__logger = ::Logger::get().WithContext("::PowerUI::BoxRegion::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BoxRegion*, creationType>(x, y, width, height)));
    }
    // public System.Void Set(System.Single x, System.Single y, System.Single width, System.Single height)
    // Offset: 0xEBA13C
    void Set(float x, float y, float width, float height);
    // public System.Boolean Overlaps(PowerUI.BoxRegion box)
    // Offset: 0xEBA154
    bool Overlaps(::PowerUI::BoxRegion* box);
    // public System.Void ClipByAffecting(PowerUI.BoxRegion bound, PowerUI.BoxRegion affect)
    // Offset: 0xEBA1C8
    void ClipByAffecting(::PowerUI::BoxRegion* bound, ::PowerUI::BoxRegion* affect);
    // public System.Void ClipBy(PowerUI.BoxRegion box)
    // Offset: 0xEBA3B4
    void ClipBy(::PowerUI::BoxRegion* box);
    // public System.Boolean ClipByChecked(PowerUI.BoxRegion box)
    // Offset: 0xEBA688
    bool ClipByChecked(::PowerUI::BoxRegion* box);
    // public System.Single ClipLeft(System.Single line)
    // Offset: 0xEBA4B0
    float ClipLeft(float line);
    // public System.Single ClipRight(System.Single line)
    // Offset: 0xEBA528
    float ClipRight(float line);
    // public System.Single ClipTop(System.Single line)
    // Offset: 0xEBA59C
    float ClipTop(float line);
    // public System.Single ClipBottom(System.Single line)
    // Offset: 0xEBA614
    float ClipBottom(float line);
    // public System.Void RemoveFromLeft(System.Single px)
    // Offset: 0xEBA4F8
    void RemoveFromLeft(float px);
    // public System.Void RemoveFromRight(System.Single px)
    // Offset: 0xEBA56C
    void RemoveFromRight(float px);
    // public System.Void RemoveFromTop(System.Single px)
    // Offset: 0xEBA658
    void RemoveFromTop(float px);
    // public System.Void RemoveFromBottom(System.Single px)
    // Offset: 0xEBA5E4
    void RemoveFromBottom(float px);
    // public override System.String ToString()
    // Offset: 0xEBA7E8
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // PowerUI.BoxRegion
  #pragma pack(pop)
  static check_size<sizeof(BoxRegion), 36 + sizeof(float)> __PowerUI_BoxRegionSizeCheck;
  static_assert(sizeof(BoxRegion) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PowerUI::BoxRegion::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: PowerUI::BoxRegion::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: PowerUI::BoxRegion::Set
// Il2CppName: Set
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::BoxRegion::*)(float, float, float, float)>(&PowerUI::BoxRegion::Set)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::BoxRegion*), "Set", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, width, height});
  }
};
// Writing MetadataGetter for method: PowerUI::BoxRegion::Overlaps
// Il2CppName: Overlaps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (PowerUI::BoxRegion::*)(::PowerUI::BoxRegion*)>(&PowerUI::BoxRegion::Overlaps)> {
  static const MethodInfo* get() {
    static auto* box = &::il2cpp_utils::GetClassFromName("PowerUI", "BoxRegion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::BoxRegion*), "Overlaps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{box});
  }
};
// Writing MetadataGetter for method: PowerUI::BoxRegion::ClipByAffecting
// Il2CppName: ClipByAffecting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::BoxRegion::*)(::PowerUI::BoxRegion*, ::PowerUI::BoxRegion*)>(&PowerUI::BoxRegion::ClipByAffecting)> {
  static const MethodInfo* get() {
    static auto* bound = &::il2cpp_utils::GetClassFromName("PowerUI", "BoxRegion")->byval_arg;
    static auto* affect = &::il2cpp_utils::GetClassFromName("PowerUI", "BoxRegion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::BoxRegion*), "ClipByAffecting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bound, affect});
  }
};
// Writing MetadataGetter for method: PowerUI::BoxRegion::ClipBy
// Il2CppName: ClipBy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::BoxRegion::*)(::PowerUI::BoxRegion*)>(&PowerUI::BoxRegion::ClipBy)> {
  static const MethodInfo* get() {
    static auto* box = &::il2cpp_utils::GetClassFromName("PowerUI", "BoxRegion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::BoxRegion*), "ClipBy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{box});
  }
};
// Writing MetadataGetter for method: PowerUI::BoxRegion::ClipByChecked
// Il2CppName: ClipByChecked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (PowerUI::BoxRegion::*)(::PowerUI::BoxRegion*)>(&PowerUI::BoxRegion::ClipByChecked)> {
  static const MethodInfo* get() {
    static auto* box = &::il2cpp_utils::GetClassFromName("PowerUI", "BoxRegion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::BoxRegion*), "ClipByChecked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{box});
  }
};
// Writing MetadataGetter for method: PowerUI::BoxRegion::ClipLeft
// Il2CppName: ClipLeft
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (PowerUI::BoxRegion::*)(float)>(&PowerUI::BoxRegion::ClipLeft)> {
  static const MethodInfo* get() {
    static auto* line = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::BoxRegion*), "ClipLeft", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{line});
  }
};
// Writing MetadataGetter for method: PowerUI::BoxRegion::ClipRight
// Il2CppName: ClipRight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (PowerUI::BoxRegion::*)(float)>(&PowerUI::BoxRegion::ClipRight)> {
  static const MethodInfo* get() {
    static auto* line = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::BoxRegion*), "ClipRight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{line});
  }
};
// Writing MetadataGetter for method: PowerUI::BoxRegion::ClipTop
// Il2CppName: ClipTop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (PowerUI::BoxRegion::*)(float)>(&PowerUI::BoxRegion::ClipTop)> {
  static const MethodInfo* get() {
    static auto* line = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::BoxRegion*), "ClipTop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{line});
  }
};
// Writing MetadataGetter for method: PowerUI::BoxRegion::ClipBottom
// Il2CppName: ClipBottom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (PowerUI::BoxRegion::*)(float)>(&PowerUI::BoxRegion::ClipBottom)> {
  static const MethodInfo* get() {
    static auto* line = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::BoxRegion*), "ClipBottom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{line});
  }
};
// Writing MetadataGetter for method: PowerUI::BoxRegion::RemoveFromLeft
// Il2CppName: RemoveFromLeft
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::BoxRegion::*)(float)>(&PowerUI::BoxRegion::RemoveFromLeft)> {
  static const MethodInfo* get() {
    static auto* px = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::BoxRegion*), "RemoveFromLeft", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{px});
  }
};
// Writing MetadataGetter for method: PowerUI::BoxRegion::RemoveFromRight
// Il2CppName: RemoveFromRight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::BoxRegion::*)(float)>(&PowerUI::BoxRegion::RemoveFromRight)> {
  static const MethodInfo* get() {
    static auto* px = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::BoxRegion*), "RemoveFromRight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{px});
  }
};
// Writing MetadataGetter for method: PowerUI::BoxRegion::RemoveFromTop
// Il2CppName: RemoveFromTop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::BoxRegion::*)(float)>(&PowerUI::BoxRegion::RemoveFromTop)> {
  static const MethodInfo* get() {
    static auto* px = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::BoxRegion*), "RemoveFromTop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{px});
  }
};
// Writing MetadataGetter for method: PowerUI::BoxRegion::RemoveFromBottom
// Il2CppName: RemoveFromBottom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PowerUI::BoxRegion::*)(float)>(&PowerUI::BoxRegion::RemoveFromBottom)> {
  static const MethodInfo* get() {
    static auto* px = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PowerUI::BoxRegion*), "RemoveFromBottom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{px});
  }
};
// Writing MetadataGetter for method: PowerUI::BoxRegion::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (PowerUI::BoxRegion::*)()>(&PowerUI::BoxRegion::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PowerUI::BoxRegion*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
