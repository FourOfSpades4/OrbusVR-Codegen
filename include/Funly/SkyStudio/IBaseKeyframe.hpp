// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Funly::SkyStudio
namespace Funly::SkyStudio {
  // Forward declaring type: InterpolationCurve
  struct InterpolationCurve;
  // Forward declaring type: InterpolationDirection
  struct InterpolationDirection;
}
// Completed forward declares
// Type namespace: Funly.SkyStudio
namespace Funly::SkyStudio {
  // Forward declaring type: IBaseKeyframe
  class IBaseKeyframe;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Funly::SkyStudio::IBaseKeyframe);
DEFINE_IL2CPP_ARG_TYPE(::Funly::SkyStudio::IBaseKeyframe*, "Funly.SkyStudio", "IBaseKeyframe");
// Type namespace: Funly.SkyStudio
namespace Funly::SkyStudio {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Funly.SkyStudio.IBaseKeyframe
  // [TokenAttribute] Offset: FFFFFFFF
  class IBaseKeyframe {
    public:
    // public System.String get_id()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_id();
    // public System.Single get_time()
    // Offset: 0xFFFFFFFFFFFFFFFF
    float get_time();
    // public System.Void set_time(System.Single value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_time(float value);
    // public Funly.SkyStudio.InterpolationCurve get_interpolationCurve()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Funly::SkyStudio::InterpolationCurve get_interpolationCurve();
    // public System.Void set_interpolationCurve(Funly.SkyStudio.InterpolationCurve value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_interpolationCurve(::Funly::SkyStudio::InterpolationCurve value);
    // public Funly.SkyStudio.InterpolationDirection get_interpolationDirection()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Funly::SkyStudio::InterpolationDirection get_interpolationDirection();
    // public System.Void set_interpolationDirection(Funly.SkyStudio.InterpolationDirection value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_interpolationDirection(::Funly::SkyStudio::InterpolationDirection value);
  }; // Funly.SkyStudio.IBaseKeyframe
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Funly::SkyStudio::IBaseKeyframe::get_id
// Il2CppName: get_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Funly::SkyStudio::IBaseKeyframe::*)()>(&Funly::SkyStudio::IBaseKeyframe::get_id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::IBaseKeyframe*), "get_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::IBaseKeyframe::get_time
// Il2CppName: get_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Funly::SkyStudio::IBaseKeyframe::*)()>(&Funly::SkyStudio::IBaseKeyframe::get_time)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::IBaseKeyframe*), "get_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::IBaseKeyframe::set_time
// Il2CppName: set_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Funly::SkyStudio::IBaseKeyframe::*)(float)>(&Funly::SkyStudio::IBaseKeyframe::set_time)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::IBaseKeyframe*), "set_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::IBaseKeyframe::get_interpolationCurve
// Il2CppName: get_interpolationCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Funly::SkyStudio::InterpolationCurve (Funly::SkyStudio::IBaseKeyframe::*)()>(&Funly::SkyStudio::IBaseKeyframe::get_interpolationCurve)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::IBaseKeyframe*), "get_interpolationCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::IBaseKeyframe::set_interpolationCurve
// Il2CppName: set_interpolationCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Funly::SkyStudio::IBaseKeyframe::*)(::Funly::SkyStudio::InterpolationCurve)>(&Funly::SkyStudio::IBaseKeyframe::set_interpolationCurve)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Funly.SkyStudio", "InterpolationCurve")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::IBaseKeyframe*), "set_interpolationCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::IBaseKeyframe::get_interpolationDirection
// Il2CppName: get_interpolationDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Funly::SkyStudio::InterpolationDirection (Funly::SkyStudio::IBaseKeyframe::*)()>(&Funly::SkyStudio::IBaseKeyframe::get_interpolationDirection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::IBaseKeyframe*), "get_interpolationDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Funly::SkyStudio::IBaseKeyframe::set_interpolationDirection
// Il2CppName: set_interpolationDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Funly::SkyStudio::IBaseKeyframe::*)(::Funly::SkyStudio::InterpolationDirection)>(&Funly::SkyStudio::IBaseKeyframe::set_interpolationDirection)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Funly.SkyStudio", "InterpolationDirection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Funly::SkyStudio::IBaseKeyframe*), "set_interpolationDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
