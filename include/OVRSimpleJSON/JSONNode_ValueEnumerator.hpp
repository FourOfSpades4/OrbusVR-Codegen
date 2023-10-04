// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRSimpleJSON.JSONNode
#include "OVRSimpleJSON/JSONNode.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVRSimpleJSON.JSONNode/Enumerator
#include "OVRSimpleJSON/JSONNode_Enumerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVRSimpleJSON::JSONNode::ValueEnumerator, "OVRSimpleJSON", "JSONNode/ValueEnumerator");
// Type namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRSimpleJSON.JSONNode/ValueEnumerator
  // [TokenAttribute] Offset: FFFFFFFF
  struct JSONNode::ValueEnumerator/*, public ::System::ValueType*/ {
    public:
    public:
    // private OVRSimpleJSON.JSONNode/Enumerator m_Enumerator
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    ::OVRSimpleJSON::JSONNode::Enumerator m_Enumerator;
    public:
    // Creating value type constructor for type: ValueEnumerator
    constexpr ValueEnumerator(::OVRSimpleJSON::JSONNode::Enumerator m_Enumerator_ = {}) noexcept : m_Enumerator{m_Enumerator_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::OVRSimpleJSON::JSONNode::Enumerator
    constexpr operator ::OVRSimpleJSON::JSONNode::Enumerator() const noexcept {
      return m_Enumerator;
    }
    // Get instance field reference: private OVRSimpleJSON.JSONNode/Enumerator m_Enumerator
    [[deprecated("Use field access instead!")]] ::OVRSimpleJSON::JSONNode::Enumerator& dyn_m_Enumerator();
    // public System.Void .ctor(System.Collections.Generic.List`1/Enumerator<OVRSimpleJSON.JSONNode> aArrayEnum)
    // Offset: 0xBA04CC
    ValueEnumerator(typename ::System::Collections::Generic::List_1<::OVRSimpleJSON::JSONNode*>::Enumerator aArrayEnum);
    // public System.Void .ctor(System.Collections.Generic.Dictionary`2/Enumerator<System.String,OVRSimpleJSON.JSONNode> aDictEnum)
    // Offset: 0xBA0510
    ValueEnumerator(typename ::System::Collections::Generic::Dictionary_2<::StringW, ::OVRSimpleJSON::JSONNode*>::Enumerator aDictEnum);
    // public System.Void .ctor(OVRSimpleJSON.JSONNode/Enumerator aEnumerator)
    // Offset: 0xBA0558
    // ABORTED: conflicts with another method.  ValueEnumerator(::OVRSimpleJSON::JSONNode::Enumerator aEnumerator);
    // public OVRSimpleJSON.JSONNode get_Current()
    // Offset: 0xBA0574
    ::OVRSimpleJSON::JSONNode* get_Current();
    // public System.Boolean MoveNext()
    // Offset: 0xBA057C
    bool MoveNext();
    // public OVRSimpleJSON.JSONNode/ValueEnumerator GetEnumerator()
    // Offset: 0xBA0584
    ::OVRSimpleJSON::JSONNode::ValueEnumerator GetEnumerator();
  }; // OVRSimpleJSON.JSONNode/ValueEnumerator
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNode::ValueEnumerator::ValueEnumerator
// Il2CppName: .ctor
// Cannot write MetadataGetter for a method that has a nested type with a declaring generic type anywhere within it!
// Talk to sc2ad if this is something you want
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNode::ValueEnumerator::ValueEnumerator
// Il2CppName: .ctor
// Cannot write MetadataGetter for a method that has a nested type with a declaring generic type anywhere within it!
// Talk to sc2ad if this is something you want
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNode::ValueEnumerator::ValueEnumerator
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNode::ValueEnumerator::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (OVRSimpleJSON::JSONNode::ValueEnumerator::*)()>(&OVRSimpleJSON::JSONNode::ValueEnumerator::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNode::ValueEnumerator), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNode::ValueEnumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVRSimpleJSON::JSONNode::ValueEnumerator::*)()>(&OVRSimpleJSON::JSONNode::ValueEnumerator::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNode::ValueEnumerator), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNode::ValueEnumerator::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode::ValueEnumerator (OVRSimpleJSON::JSONNode::ValueEnumerator::*)()>(&OVRSimpleJSON::JSONNode::ValueEnumerator::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNode::ValueEnumerator), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
