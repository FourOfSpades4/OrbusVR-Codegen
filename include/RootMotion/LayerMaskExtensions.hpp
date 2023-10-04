// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: RootMotion
namespace RootMotion {
  // Forward declaring type: LayerMaskExtensions
  class LayerMaskExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::LayerMaskExtensions);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::LayerMaskExtensions*, "RootMotion", "LayerMaskExtensions");
// Type namespace: RootMotion
namespace RootMotion {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.LayerMaskExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class LayerMaskExtensions : public ::Il2CppObject {
    public:
    // static public System.Boolean Contains(UnityEngine.LayerMask mask, System.Int32 layer)
    // Offset: 0x1189FF4
    static bool Contains(::UnityEngine::LayerMask mask, int layer);
    // static public UnityEngine.LayerMask Create(params System.String[] layerNames)
    // Offset: 0x118A050
    static ::UnityEngine::LayerMask Create(::ArrayW<::StringW> layerNames);
    // static public UnityEngine.LayerMask Create(params System.Int32[] layerNumbers)
    // Offset: 0x118A128
    static ::UnityEngine::LayerMask Create(::ArrayW<int> layerNumbers);
    // static public UnityEngine.LayerMask NamesToMask(params System.String[] layerNames)
    // Offset: 0x118A068
    static ::UnityEngine::LayerMask NamesToMask(::ArrayW<::StringW> layerNames);
    // static public UnityEngine.LayerMask LayerNumbersToMask(params System.Int32[] layerNumbers)
    // Offset: 0x118A140
    static ::UnityEngine::LayerMask LayerNumbersToMask(::ArrayW<int> layerNumbers);
    // static public UnityEngine.LayerMask Inverse(UnityEngine.LayerMask original)
    // Offset: 0x118A1F0
    static ::UnityEngine::LayerMask Inverse(::UnityEngine::LayerMask original);
    // static public UnityEngine.LayerMask AddToMask(UnityEngine.LayerMask original, params System.String[] layerNames)
    // Offset: 0x118A21C
    static ::UnityEngine::LayerMask AddToMask(::UnityEngine::LayerMask original, ::ArrayW<::StringW> layerNames);
    // static public UnityEngine.LayerMask RemoveFromMask(UnityEngine.LayerMask original, params System.String[] layerNames)
    // Offset: 0x118A26C
    static ::UnityEngine::LayerMask RemoveFromMask(::UnityEngine::LayerMask original, ::ArrayW<::StringW> layerNames);
    // static public System.String[] MaskToNames(UnityEngine.LayerMask original)
    // Offset: 0x118A2D8
    static ::ArrayW<::StringW> MaskToNames(::UnityEngine::LayerMask original);
    // static public System.Int32[] MaskToNumbers(UnityEngine.LayerMask original)
    // Offset: 0x118A3D8
    static ::ArrayW<int> MaskToNumbers(::UnityEngine::LayerMask original);
    // static public System.String MaskToString(UnityEngine.LayerMask original)
    // Offset: 0x118A4BC
    static ::StringW MaskToString(::UnityEngine::LayerMask original);
    // static public System.String MaskToString(UnityEngine.LayerMask original, System.String delimiter)
    // Offset: 0x118A51C
    static ::StringW MaskToString(::UnityEngine::LayerMask original, ::StringW delimiter);
  }; // RootMotion.LayerMaskExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::LayerMaskExtensions::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::LayerMask, int)>(&RootMotion::LayerMaskExtensions::Contains)> {
  static const MethodInfo* get() {
    static auto* mask = &::il2cpp_utils::GetClassFromName("UnityEngine", "LayerMask")->byval_arg;
    static auto* layer = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::LayerMaskExtensions*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mask, layer});
  }
};
// Writing MetadataGetter for method: RootMotion::LayerMaskExtensions::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LayerMask (*)(::ArrayW<::StringW>)>(&RootMotion::LayerMaskExtensions::Create)> {
  static const MethodInfo* get() {
    static auto* layerNames = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::LayerMaskExtensions*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{layerNames});
  }
};
// Writing MetadataGetter for method: RootMotion::LayerMaskExtensions::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LayerMask (*)(::ArrayW<int>)>(&RootMotion::LayerMaskExtensions::Create)> {
  static const MethodInfo* get() {
    static auto* layerNumbers = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::LayerMaskExtensions*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{layerNumbers});
  }
};
// Writing MetadataGetter for method: RootMotion::LayerMaskExtensions::NamesToMask
// Il2CppName: NamesToMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LayerMask (*)(::ArrayW<::StringW>)>(&RootMotion::LayerMaskExtensions::NamesToMask)> {
  static const MethodInfo* get() {
    static auto* layerNames = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::LayerMaskExtensions*), "NamesToMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{layerNames});
  }
};
// Writing MetadataGetter for method: RootMotion::LayerMaskExtensions::LayerNumbersToMask
// Il2CppName: LayerNumbersToMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LayerMask (*)(::ArrayW<int>)>(&RootMotion::LayerMaskExtensions::LayerNumbersToMask)> {
  static const MethodInfo* get() {
    static auto* layerNumbers = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::LayerMaskExtensions*), "LayerNumbersToMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{layerNumbers});
  }
};
// Writing MetadataGetter for method: RootMotion::LayerMaskExtensions::Inverse
// Il2CppName: Inverse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LayerMask (*)(::UnityEngine::LayerMask)>(&RootMotion::LayerMaskExtensions::Inverse)> {
  static const MethodInfo* get() {
    static auto* original = &::il2cpp_utils::GetClassFromName("UnityEngine", "LayerMask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::LayerMaskExtensions*), "Inverse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{original});
  }
};
// Writing MetadataGetter for method: RootMotion::LayerMaskExtensions::AddToMask
// Il2CppName: AddToMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LayerMask (*)(::UnityEngine::LayerMask, ::ArrayW<::StringW>)>(&RootMotion::LayerMaskExtensions::AddToMask)> {
  static const MethodInfo* get() {
    static auto* original = &::il2cpp_utils::GetClassFromName("UnityEngine", "LayerMask")->byval_arg;
    static auto* layerNames = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::LayerMaskExtensions*), "AddToMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{original, layerNames});
  }
};
// Writing MetadataGetter for method: RootMotion::LayerMaskExtensions::RemoveFromMask
// Il2CppName: RemoveFromMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LayerMask (*)(::UnityEngine::LayerMask, ::ArrayW<::StringW>)>(&RootMotion::LayerMaskExtensions::RemoveFromMask)> {
  static const MethodInfo* get() {
    static auto* original = &::il2cpp_utils::GetClassFromName("UnityEngine", "LayerMask")->byval_arg;
    static auto* layerNames = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::LayerMaskExtensions*), "RemoveFromMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{original, layerNames});
  }
};
// Writing MetadataGetter for method: RootMotion::LayerMaskExtensions::MaskToNames
// Il2CppName: MaskToNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (*)(::UnityEngine::LayerMask)>(&RootMotion::LayerMaskExtensions::MaskToNames)> {
  static const MethodInfo* get() {
    static auto* original = &::il2cpp_utils::GetClassFromName("UnityEngine", "LayerMask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::LayerMaskExtensions*), "MaskToNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{original});
  }
};
// Writing MetadataGetter for method: RootMotion::LayerMaskExtensions::MaskToNumbers
// Il2CppName: MaskToNumbers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int> (*)(::UnityEngine::LayerMask)>(&RootMotion::LayerMaskExtensions::MaskToNumbers)> {
  static const MethodInfo* get() {
    static auto* original = &::il2cpp_utils::GetClassFromName("UnityEngine", "LayerMask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::LayerMaskExtensions*), "MaskToNumbers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{original});
  }
};
// Writing MetadataGetter for method: RootMotion::LayerMaskExtensions::MaskToString
// Il2CppName: MaskToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::LayerMask)>(&RootMotion::LayerMaskExtensions::MaskToString)> {
  static const MethodInfo* get() {
    static auto* original = &::il2cpp_utils::GetClassFromName("UnityEngine", "LayerMask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::LayerMaskExtensions*), "MaskToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{original});
  }
};
// Writing MetadataGetter for method: RootMotion::LayerMaskExtensions::MaskToString
// Il2CppName: MaskToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::LayerMask, ::StringW)>(&RootMotion::LayerMaskExtensions::MaskToString)> {
  static const MethodInfo* get() {
    static auto* original = &::il2cpp_utils::GetClassFromName("UnityEngine", "LayerMask")->byval_arg;
    static auto* delimiter = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::LayerMaskExtensions*), "MaskToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{original, delimiter});
  }
};
