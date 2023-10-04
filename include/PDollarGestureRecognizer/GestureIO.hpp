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
// Begin forward declares
// Forward declaring namespace: PDollarGestureRecognizer
namespace PDollarGestureRecognizer {
  // Forward declaring type: Gesture
  class Gesture;
  // Forward declaring type: Point
  class Point;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlTextReader
  class XmlTextReader;
}
// Completed forward declares
// Type namespace: PDollarGestureRecognizer
namespace PDollarGestureRecognizer {
  // Forward declaring type: GestureIO
  class GestureIO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PDollarGestureRecognizer::GestureIO);
DEFINE_IL2CPP_ARG_TYPE(::PDollarGestureRecognizer::GestureIO*, "PDollarGestureRecognizer", "GestureIO");
// Type namespace: PDollarGestureRecognizer
namespace PDollarGestureRecognizer {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: PDollarGestureRecognizer.GestureIO
  // [TokenAttribute] Offset: FFFFFFFF
  class GestureIO : public ::Il2CppObject {
    public:
    // static public PDollarGestureRecognizer.Gesture ReadGestureFromXML(System.String xml)
    // Offset: 0x102E3B8
    static ::PDollarGestureRecognizer::Gesture* ReadGestureFromXML(::StringW xml);
    // static public PDollarGestureRecognizer.Gesture ReadGestureFromFile(System.String fileName)
    // Offset: 0x102E8E4
    static ::PDollarGestureRecognizer::Gesture* ReadGestureFromFile(::StringW fileName);
    // static private PDollarGestureRecognizer.Gesture ReadGesture(System.Xml.XmlTextReader xmlReader)
    // Offset: 0x102E4B8
    static ::PDollarGestureRecognizer::Gesture* ReadGesture(::System::Xml::XmlTextReader* xmlReader);
    // static public System.Void WriteGesture(PDollarGestureRecognizer.Point[] points, System.String gestureName, System.String fileName)
    // Offset: 0x102E9D0
    static void WriteGesture(::ArrayW<::PDollarGestureRecognizer::Point*> points, ::StringW gestureName, ::StringW fileName);
    // public System.Void .ctor()
    // Offset: 0x102EDC0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GestureIO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PDollarGestureRecognizer::GestureIO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GestureIO*, creationType>()));
    }
  }; // PDollarGestureRecognizer.GestureIO
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PDollarGestureRecognizer::GestureIO::ReadGestureFromXML
// Il2CppName: ReadGestureFromXML
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::PDollarGestureRecognizer::Gesture* (*)(::StringW)>(&PDollarGestureRecognizer::GestureIO::ReadGestureFromXML)> {
  static const MethodInfo* get() {
    static auto* xml = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PDollarGestureRecognizer::GestureIO*), "ReadGestureFromXML", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xml});
  }
};
// Writing MetadataGetter for method: PDollarGestureRecognizer::GestureIO::ReadGestureFromFile
// Il2CppName: ReadGestureFromFile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::PDollarGestureRecognizer::Gesture* (*)(::StringW)>(&PDollarGestureRecognizer::GestureIO::ReadGestureFromFile)> {
  static const MethodInfo* get() {
    static auto* fileName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PDollarGestureRecognizer::GestureIO*), "ReadGestureFromFile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fileName});
  }
};
// Writing MetadataGetter for method: PDollarGestureRecognizer::GestureIO::ReadGesture
// Il2CppName: ReadGesture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::PDollarGestureRecognizer::Gesture* (*)(::System::Xml::XmlTextReader*)>(&PDollarGestureRecognizer::GestureIO::ReadGesture)> {
  static const MethodInfo* get() {
    static auto* xmlReader = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlTextReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PDollarGestureRecognizer::GestureIO*), "ReadGesture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xmlReader});
  }
};
// Writing MetadataGetter for method: PDollarGestureRecognizer::GestureIO::WriteGesture
// Il2CppName: WriteGesture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<::PDollarGestureRecognizer::Point*>, ::StringW, ::StringW)>(&PDollarGestureRecognizer::GestureIO::WriteGesture)> {
  static const MethodInfo* get() {
    static auto* points = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("PDollarGestureRecognizer", "Point"), 1)->byval_arg;
    static auto* gestureName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* fileName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PDollarGestureRecognizer::GestureIO*), "WriteGesture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{points, gestureName, fileName});
  }
};
// Writing MetadataGetter for method: PDollarGestureRecognizer::GestureIO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!