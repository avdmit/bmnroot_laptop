// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIalexdIbmnroot_devdIbmnrootdIbuilddIuni_dbdIG__UniDbDict

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "UniDbConnection.h"
#include "UniDbGeoConverter.h"
#include "UniDbGenerateClasses.h"
#include "UniDbTangoData.h"
#include "UniDbSearchCondition.h"
#include "db_structures.h"
#include "db_classes/UniDbRunPeriod.h"
#include "db_classes/UniDbRun.h"
#include "db_classes/UniDbRunGeometry.h"
#include "db_classes/UniDbDetector.h"
#include "db_classes/UniDbParameter.h"
#include "db_classes/UniDbDetectorParameter.h"
#include "db_classes/UniDbSimulationFile.h"
#include "elog_classes/ElogDbPerson.h"
#include "elog_classes/ElogDbType.h"
#include "elog_classes/ElogDbTrigger.h"
#include "elog_classes/ElogDbBeam.h"
#include "elog_classes/ElogDbTarget.h"
#include "elog_classes/ElogDbRecord.h"
#include "elog_classes/ElogDbAttachment.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_UniDbConnection(void *p);
   static void deleteArray_UniDbConnection(void *p);
   static void destruct_UniDbConnection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UniDbConnection*)
   {
      ::UniDbConnection *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::UniDbConnection >(0);
      static ::ROOT::TGenericClassInfo 
         instance("UniDbConnection", ::UniDbConnection::Class_Version(), "", 35,
                  typeid(::UniDbConnection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::UniDbConnection::Dictionary, isa_proxy, 4,
                  sizeof(::UniDbConnection) );
      instance.SetDelete(&delete_UniDbConnection);
      instance.SetDeleteArray(&deleteArray_UniDbConnection);
      instance.SetDestructor(&destruct_UniDbConnection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UniDbConnection*)
   {
      return GenerateInitInstanceLocal((::UniDbConnection*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UniDbConnection*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_UniDbGeoConverter(void *p);
   static void deleteArray_UniDbGeoConverter(void *p);
   static void destruct_UniDbGeoConverter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UniDbGeoConverter*)
   {
      ::UniDbGeoConverter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::UniDbGeoConverter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("UniDbGeoConverter", ::UniDbGeoConverter::Class_Version(), "", 100,
                  typeid(::UniDbGeoConverter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::UniDbGeoConverter::Dictionary, isa_proxy, 4,
                  sizeof(::UniDbGeoConverter) );
      instance.SetDelete(&delete_UniDbGeoConverter);
      instance.SetDeleteArray(&deleteArray_UniDbGeoConverter);
      instance.SetDestructor(&destruct_UniDbGeoConverter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UniDbGeoConverter*)
   {
      return GenerateInitInstanceLocal((::UniDbGeoConverter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UniDbGeoConverter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_UniDbGenerateClasses(void *p = 0);
   static void *newArray_UniDbGenerateClasses(Long_t size, void *p);
   static void delete_UniDbGenerateClasses(void *p);
   static void deleteArray_UniDbGenerateClasses(void *p);
   static void destruct_UniDbGenerateClasses(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UniDbGenerateClasses*)
   {
      ::UniDbGenerateClasses *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::UniDbGenerateClasses >(0);
      static ::ROOT::TGenericClassInfo 
         instance("UniDbGenerateClasses", ::UniDbGenerateClasses::Class_Version(), "", 179,
                  typeid(::UniDbGenerateClasses), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::UniDbGenerateClasses::Dictionary, isa_proxy, 4,
                  sizeof(::UniDbGenerateClasses) );
      instance.SetNew(&new_UniDbGenerateClasses);
      instance.SetNewArray(&newArray_UniDbGenerateClasses);
      instance.SetDelete(&delete_UniDbGenerateClasses);
      instance.SetDeleteArray(&deleteArray_UniDbGenerateClasses);
      instance.SetDestructor(&destruct_UniDbGenerateClasses);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UniDbGenerateClasses*)
   {
      return GenerateInitInstanceLocal((::UniDbGenerateClasses*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UniDbGenerateClasses*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *UniqueRunNumber_Dictionary();
   static void UniqueRunNumber_TClassManip(TClass*);
   static void *new_UniqueRunNumber(void *p = 0);
   static void *newArray_UniqueRunNumber(Long_t size, void *p);
   static void delete_UniqueRunNumber(void *p);
   static void deleteArray_UniqueRunNumber(void *p);
   static void destruct_UniqueRunNumber(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UniqueRunNumber*)
   {
      ::UniqueRunNumber *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::UniqueRunNumber));
      static ::ROOT::TGenericClassInfo 
         instance("UniqueRunNumber", "db_structures.h", 8,
                  typeid(::UniqueRunNumber), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &UniqueRunNumber_Dictionary, isa_proxy, 4,
                  sizeof(::UniqueRunNumber) );
      instance.SetNew(&new_UniqueRunNumber);
      instance.SetNewArray(&newArray_UniqueRunNumber);
      instance.SetDelete(&delete_UniqueRunNumber);
      instance.SetDeleteArray(&deleteArray_UniqueRunNumber);
      instance.SetDestructor(&destruct_UniqueRunNumber);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UniqueRunNumber*)
   {
      return GenerateInitInstanceLocal((::UniqueRunNumber*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UniqueRunNumber*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *UniqueRunNumber_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::UniqueRunNumber*)0x0)->GetClass();
      UniqueRunNumber_TClassManip(theClass);
   return theClass;
   }

   static void UniqueRunNumber_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *IIStructure_Dictionary();
   static void IIStructure_TClassManip(TClass*);
   static void *new_IIStructure(void *p = 0);
   static void *newArray_IIStructure(Long_t size, void *p);
   static void delete_IIStructure(void *p);
   static void deleteArray_IIStructure(void *p);
   static void destruct_IIStructure(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::IIStructure*)
   {
      ::IIStructure *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::IIStructure));
      static ::ROOT::TGenericClassInfo 
         instance("IIStructure", "db_structures.h", 31,
                  typeid(::IIStructure), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &IIStructure_Dictionary, isa_proxy, 4,
                  sizeof(::IIStructure) );
      instance.SetNew(&new_IIStructure);
      instance.SetNewArray(&newArray_IIStructure);
      instance.SetDelete(&delete_IIStructure);
      instance.SetDeleteArray(&deleteArray_IIStructure);
      instance.SetDestructor(&destruct_IIStructure);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::IIStructure*)
   {
      return GenerateInitInstanceLocal((::IIStructure*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::IIStructure*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *IIStructure_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::IIStructure*)0x0)->GetClass();
      IIStructure_TClassManip(theClass);
   return theClass;
   }

   static void IIStructure_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *DchMapStructure_Dictionary();
   static void DchMapStructure_TClassManip(TClass*);
   static void *new_DchMapStructure(void *p = 0);
   static void *newArray_DchMapStructure(Long_t size, void *p);
   static void delete_DchMapStructure(void *p);
   static void deleteArray_DchMapStructure(void *p);
   static void destruct_DchMapStructure(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DchMapStructure*)
   {
      ::DchMapStructure *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::DchMapStructure));
      static ::ROOT::TGenericClassInfo 
         instance("DchMapStructure", "db_structures.h", 37,
                  typeid(::DchMapStructure), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &DchMapStructure_Dictionary, isa_proxy, 4,
                  sizeof(::DchMapStructure) );
      instance.SetNew(&new_DchMapStructure);
      instance.SetNewArray(&newArray_DchMapStructure);
      instance.SetDelete(&delete_DchMapStructure);
      instance.SetDeleteArray(&deleteArray_DchMapStructure);
      instance.SetDestructor(&destruct_DchMapStructure);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DchMapStructure*)
   {
      return GenerateInitInstanceLocal((::DchMapStructure*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DchMapStructure*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *DchMapStructure_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::DchMapStructure*)0x0)->GetClass();
      DchMapStructure_TClassManip(theClass);
   return theClass;
   }

   static void DchMapStructure_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *GemMapStructure_Dictionary();
   static void GemMapStructure_TClassManip(TClass*);
   static void *new_GemMapStructure(void *p = 0);
   static void *newArray_GemMapStructure(Long_t size, void *p);
   static void delete_GemMapStructure(void *p);
   static void deleteArray_GemMapStructure(void *p);
   static void destruct_GemMapStructure(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::GemMapStructure*)
   {
      ::GemMapStructure *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::GemMapStructure));
      static ::ROOT::TGenericClassInfo 
         instance("GemMapStructure", "db_structures.h", 47,
                  typeid(::GemMapStructure), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &GemMapStructure_Dictionary, isa_proxy, 4,
                  sizeof(::GemMapStructure) );
      instance.SetNew(&new_GemMapStructure);
      instance.SetNewArray(&newArray_GemMapStructure);
      instance.SetDelete(&delete_GemMapStructure);
      instance.SetDeleteArray(&deleteArray_GemMapStructure);
      instance.SetDestructor(&destruct_GemMapStructure);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::GemMapStructure*)
   {
      return GenerateInitInstanceLocal((::GemMapStructure*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::GemMapStructure*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *GemMapStructure_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::GemMapStructure*)0x0)->GetClass();
      GemMapStructure_TClassManip(theClass);
   return theClass;
   }

   static void GemMapStructure_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *GemPedestalStructure_Dictionary();
   static void GemPedestalStructure_TClassManip(TClass*);
   static void *new_GemPedestalStructure(void *p = 0);
   static void *newArray_GemPedestalStructure(Long_t size, void *p);
   static void delete_GemPedestalStructure(void *p);
   static void deleteArray_GemPedestalStructure(void *p);
   static void destruct_GemPedestalStructure(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::GemPedestalStructure*)
   {
      ::GemPedestalStructure *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::GemPedestalStructure));
      static ::ROOT::TGenericClassInfo 
         instance("GemPedestalStructure", "db_structures.h", 57,
                  typeid(::GemPedestalStructure), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &GemPedestalStructure_Dictionary, isa_proxy, 4,
                  sizeof(::GemPedestalStructure) );
      instance.SetNew(&new_GemPedestalStructure);
      instance.SetNewArray(&newArray_GemPedestalStructure);
      instance.SetDelete(&delete_GemPedestalStructure);
      instance.SetDeleteArray(&deleteArray_GemPedestalStructure);
      instance.SetDestructor(&destruct_GemPedestalStructure);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::GemPedestalStructure*)
   {
      return GenerateInitInstanceLocal((::GemPedestalStructure*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::GemPedestalStructure*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *GemPedestalStructure_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::GemPedestalStructure*)0x0)->GetClass();
      GemPedestalStructure_TClassManip(theClass);
   return theClass;
   }

   static void GemPedestalStructure_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TriggerMapStructure_Dictionary();
   static void TriggerMapStructure_TClassManip(TClass*);
   static void *new_TriggerMapStructure(void *p = 0);
   static void *newArray_TriggerMapStructure(Long_t size, void *p);
   static void delete_TriggerMapStructure(void *p);
   static void deleteArray_TriggerMapStructure(void *p);
   static void destruct_TriggerMapStructure(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TriggerMapStructure*)
   {
      ::TriggerMapStructure *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TriggerMapStructure));
      static ::ROOT::TGenericClassInfo 
         instance("TriggerMapStructure", "db_structures.h", 65,
                  typeid(::TriggerMapStructure), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TriggerMapStructure_Dictionary, isa_proxy, 4,
                  sizeof(::TriggerMapStructure) );
      instance.SetNew(&new_TriggerMapStructure);
      instance.SetNewArray(&newArray_TriggerMapStructure);
      instance.SetDelete(&delete_TriggerMapStructure);
      instance.SetDeleteArray(&deleteArray_TriggerMapStructure);
      instance.SetDestructor(&destruct_TriggerMapStructure);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TriggerMapStructure*)
   {
      return GenerateInitInstanceLocal((::TriggerMapStructure*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TriggerMapStructure*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TriggerMapStructure_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TriggerMapStructure*)0x0)->GetClass();
      TriggerMapStructure_TClassManip(theClass);
   return theClass;
   }

   static void TriggerMapStructure_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *LorentzShiftStructure_Dictionary();
   static void LorentzShiftStructure_TClassManip(TClass*);
   static void *new_LorentzShiftStructure(void *p = 0);
   static void *newArray_LorentzShiftStructure(Long_t size, void *p);
   static void delete_LorentzShiftStructure(void *p);
   static void deleteArray_LorentzShiftStructure(void *p);
   static void destruct_LorentzShiftStructure(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LorentzShiftStructure*)
   {
      ::LorentzShiftStructure *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::LorentzShiftStructure));
      static ::ROOT::TGenericClassInfo 
         instance("LorentzShiftStructure", "db_structures.h", 72,
                  typeid(::LorentzShiftStructure), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &LorentzShiftStructure_Dictionary, isa_proxy, 4,
                  sizeof(::LorentzShiftStructure) );
      instance.SetNew(&new_LorentzShiftStructure);
      instance.SetNewArray(&newArray_LorentzShiftStructure);
      instance.SetDelete(&delete_LorentzShiftStructure);
      instance.SetDeleteArray(&deleteArray_LorentzShiftStructure);
      instance.SetDestructor(&destruct_LorentzShiftStructure);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LorentzShiftStructure*)
   {
      return GenerateInitInstanceLocal((::LorentzShiftStructure*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LorentzShiftStructure*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *LorentzShiftStructure_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::LorentzShiftStructure*)0x0)->GetClass();
      LorentzShiftStructure_TClassManip(theClass);
   return theClass;
   }

   static void LorentzShiftStructure_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TangoTimeParameter(void *p = 0);
   static void *newArray_TangoTimeParameter(Long_t size, void *p);
   static void delete_TangoTimeParameter(void *p);
   static void deleteArray_TangoTimeParameter(void *p);
   static void destruct_TangoTimeParameter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TangoTimeParameter*)
   {
      ::TangoTimeParameter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TangoTimeParameter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TangoTimeParameter", ::TangoTimeParameter::Class_Version(), "", 226,
                  typeid(::TangoTimeParameter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TangoTimeParameter::Dictionary, isa_proxy, 4,
                  sizeof(::TangoTimeParameter) );
      instance.SetNew(&new_TangoTimeParameter);
      instance.SetNewArray(&newArray_TangoTimeParameter);
      instance.SetDelete(&delete_TangoTimeParameter);
      instance.SetDeleteArray(&deleteArray_TangoTimeParameter);
      instance.SetDestructor(&destruct_TangoTimeParameter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TangoTimeParameter*)
   {
      return GenerateInitInstanceLocal((::TangoTimeParameter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TangoTimeParameter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TangoTimeInterval(void *p = 0);
   static void *newArray_TangoTimeInterval(Long_t size, void *p);
   static void delete_TangoTimeInterval(void *p);
   static void deleteArray_TangoTimeInterval(void *p);
   static void destruct_TangoTimeInterval(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TangoTimeInterval*)
   {
      ::TangoTimeInterval *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TangoTimeInterval >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TangoTimeInterval", ::TangoTimeInterval::Class_Version(), "", 248,
                  typeid(::TangoTimeInterval), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TangoTimeInterval::Dictionary, isa_proxy, 4,
                  sizeof(::TangoTimeInterval) );
      instance.SetNew(&new_TangoTimeInterval);
      instance.SetNewArray(&newArray_TangoTimeInterval);
      instance.SetDelete(&delete_TangoTimeInterval);
      instance.SetDeleteArray(&deleteArray_TangoTimeInterval);
      instance.SetDestructor(&destruct_TangoTimeInterval);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TangoTimeInterval*)
   {
      return GenerateInitInstanceLocal((::TangoTimeInterval*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TangoTimeInterval*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_UniDbTangoData(void *p = 0);
   static void *newArray_UniDbTangoData(Long_t size, void *p);
   static void delete_UniDbTangoData(void *p);
   static void deleteArray_UniDbTangoData(void *p);
   static void destruct_UniDbTangoData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UniDbTangoData*)
   {
      ::UniDbTangoData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::UniDbTangoData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("UniDbTangoData", ::UniDbTangoData::Class_Version(), "", 267,
                  typeid(::UniDbTangoData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::UniDbTangoData::Dictionary, isa_proxy, 4,
                  sizeof(::UniDbTangoData) );
      instance.SetNew(&new_UniDbTangoData);
      instance.SetNewArray(&newArray_UniDbTangoData);
      instance.SetDelete(&delete_UniDbTangoData);
      instance.SetDeleteArray(&deleteArray_UniDbTangoData);
      instance.SetDestructor(&destruct_UniDbTangoData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UniDbTangoData*)
   {
      return GenerateInitInstanceLocal((::UniDbTangoData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UniDbTangoData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_UniDbSearchCondition(void *p);
   static void deleteArray_UniDbSearchCondition(void *p);
   static void destruct_UniDbSearchCondition(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UniDbSearchCondition*)
   {
      ::UniDbSearchCondition *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::UniDbSearchCondition >(0);
      static ::ROOT::TGenericClassInfo 
         instance("UniDbSearchCondition", ::UniDbSearchCondition::Class_Version(), "", 335,
                  typeid(::UniDbSearchCondition), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::UniDbSearchCondition::Dictionary, isa_proxy, 4,
                  sizeof(::UniDbSearchCondition) );
      instance.SetDelete(&delete_UniDbSearchCondition);
      instance.SetDeleteArray(&deleteArray_UniDbSearchCondition);
      instance.SetDestructor(&destruct_UniDbSearchCondition);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UniDbSearchCondition*)
   {
      return GenerateInitInstanceLocal((::UniDbSearchCondition*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UniDbSearchCondition*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_UniDbRunPeriod(void *p);
   static void deleteArray_UniDbRunPeriod(void *p);
   static void destruct_UniDbRunPeriod(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UniDbRunPeriod*)
   {
      ::UniDbRunPeriod *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::UniDbRunPeriod >(0);
      static ::ROOT::TGenericClassInfo 
         instance("UniDbRunPeriod", ::UniDbRunPeriod::Class_Version(), "", 473,
                  typeid(::UniDbRunPeriod), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::UniDbRunPeriod::Dictionary, isa_proxy, 4,
                  sizeof(::UniDbRunPeriod) );
      instance.SetDelete(&delete_UniDbRunPeriod);
      instance.SetDeleteArray(&deleteArray_UniDbRunPeriod);
      instance.SetDestructor(&destruct_UniDbRunPeriod);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UniDbRunPeriod*)
   {
      return GenerateInitInstanceLocal((::UniDbRunPeriod*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UniDbRunPeriod*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_UniDbRun(void *p);
   static void deleteArray_UniDbRun(void *p);
   static void destruct_UniDbRun(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UniDbRun*)
   {
      ::UniDbRun *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::UniDbRun >(0);
      static ::ROOT::TGenericClassInfo 
         instance("UniDbRun", ::UniDbRun::Class_Version(), "", 560,
                  typeid(::UniDbRun), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::UniDbRun::Dictionary, isa_proxy, 4,
                  sizeof(::UniDbRun) );
      instance.SetDelete(&delete_UniDbRun);
      instance.SetDeleteArray(&deleteArray_UniDbRun);
      instance.SetDestructor(&destruct_UniDbRun);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UniDbRun*)
   {
      return GenerateInitInstanceLocal((::UniDbRun*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UniDbRun*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_UniDbRunGeometry(void *p);
   static void deleteArray_UniDbRunGeometry(void *p);
   static void destruct_UniDbRunGeometry(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UniDbRunGeometry*)
   {
      ::UniDbRunGeometry *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::UniDbRunGeometry >(0);
      static ::ROOT::TGenericClassInfo 
         instance("UniDbRunGeometry", ::UniDbRunGeometry::Class_Version(), "", 723,
                  typeid(::UniDbRunGeometry), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::UniDbRunGeometry::Dictionary, isa_proxy, 4,
                  sizeof(::UniDbRunGeometry) );
      instance.SetDelete(&delete_UniDbRunGeometry);
      instance.SetDeleteArray(&deleteArray_UniDbRunGeometry);
      instance.SetDestructor(&destruct_UniDbRunGeometry);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UniDbRunGeometry*)
   {
      return GenerateInitInstanceLocal((::UniDbRunGeometry*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UniDbRunGeometry*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_UniDbDetector(void *p);
   static void deleteArray_UniDbDetector(void *p);
   static void destruct_UniDbDetector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UniDbDetector*)
   {
      ::UniDbDetector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::UniDbDetector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("UniDbDetector", ::UniDbDetector::Class_Version(), "", 794,
                  typeid(::UniDbDetector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::UniDbDetector::Dictionary, isa_proxy, 4,
                  sizeof(::UniDbDetector) );
      instance.SetDelete(&delete_UniDbDetector);
      instance.SetDeleteArray(&deleteArray_UniDbDetector);
      instance.SetDestructor(&destruct_UniDbDetector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UniDbDetector*)
   {
      return GenerateInitInstanceLocal((::UniDbDetector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UniDbDetector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_UniDbParameter(void *p);
   static void deleteArray_UniDbParameter(void *p);
   static void destruct_UniDbParameter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UniDbParameter*)
   {
      ::UniDbParameter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::UniDbParameter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("UniDbParameter", ::UniDbParameter::Class_Version(), "", 867,
                  typeid(::UniDbParameter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::UniDbParameter::Dictionary, isa_proxy, 4,
                  sizeof(::UniDbParameter) );
      instance.SetDelete(&delete_UniDbParameter);
      instance.SetDeleteArray(&deleteArray_UniDbParameter);
      instance.SetDestructor(&destruct_UniDbParameter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UniDbParameter*)
   {
      return GenerateInitInstanceLocal((::UniDbParameter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UniDbParameter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_UniDbDetectorParameter(void *p);
   static void deleteArray_UniDbDetectorParameter(void *p);
   static void destruct_UniDbDetectorParameter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UniDbDetectorParameter*)
   {
      ::UniDbDetectorParameter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::UniDbDetectorParameter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("UniDbDetectorParameter", ::UniDbDetectorParameter::Class_Version(), "", 961,
                  typeid(::UniDbDetectorParameter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::UniDbDetectorParameter::Dictionary, isa_proxy, 4,
                  sizeof(::UniDbDetectorParameter) );
      instance.SetDelete(&delete_UniDbDetectorParameter);
      instance.SetDeleteArray(&deleteArray_UniDbDetectorParameter);
      instance.SetDestructor(&destruct_UniDbDetectorParameter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UniDbDetectorParameter*)
   {
      return GenerateInitInstanceLocal((::UniDbDetectorParameter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UniDbDetectorParameter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_UniDbSimulationFile(void *p);
   static void deleteArray_UniDbSimulationFile(void *p);
   static void destruct_UniDbSimulationFile(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UniDbSimulationFile*)
   {
      ::UniDbSimulationFile *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::UniDbSimulationFile >(0);
      static ::ROOT::TGenericClassInfo 
         instance("UniDbSimulationFile", ::UniDbSimulationFile::Class_Version(), "", 1369,
                  typeid(::UniDbSimulationFile), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::UniDbSimulationFile::Dictionary, isa_proxy, 4,
                  sizeof(::UniDbSimulationFile) );
      instance.SetDelete(&delete_UniDbSimulationFile);
      instance.SetDeleteArray(&deleteArray_UniDbSimulationFile);
      instance.SetDestructor(&destruct_UniDbSimulationFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UniDbSimulationFile*)
   {
      return GenerateInitInstanceLocal((::UniDbSimulationFile*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UniDbSimulationFile*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_ElogDbPerson(void *p);
   static void deleteArray_ElogDbPerson(void *p);
   static void destruct_ElogDbPerson(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ElogDbPerson*)
   {
      ::ElogDbPerson *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ElogDbPerson >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ElogDbPerson", ::ElogDbPerson::Class_Version(), "", 1490,
                  typeid(::ElogDbPerson), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ElogDbPerson::Dictionary, isa_proxy, 4,
                  sizeof(::ElogDbPerson) );
      instance.SetDelete(&delete_ElogDbPerson);
      instance.SetDeleteArray(&deleteArray_ElogDbPerson);
      instance.SetDestructor(&destruct_ElogDbPerson);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ElogDbPerson*)
   {
      return GenerateInitInstanceLocal((::ElogDbPerson*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ElogDbPerson*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_ElogDbType(void *p);
   static void deleteArray_ElogDbType(void *p);
   static void destruct_ElogDbType(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ElogDbType*)
   {
      ::ElogDbType *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ElogDbType >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ElogDbType", ::ElogDbType::Class_Version(), "", 1570,
                  typeid(::ElogDbType), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ElogDbType::Dictionary, isa_proxy, 4,
                  sizeof(::ElogDbType) );
      instance.SetDelete(&delete_ElogDbType);
      instance.SetDeleteArray(&deleteArray_ElogDbType);
      instance.SetDestructor(&destruct_ElogDbType);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ElogDbType*)
   {
      return GenerateInitInstanceLocal((::ElogDbType*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ElogDbType*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_ElogDbTrigger(void *p);
   static void deleteArray_ElogDbTrigger(void *p);
   static void destruct_ElogDbTrigger(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ElogDbTrigger*)
   {
      ::ElogDbTrigger *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ElogDbTrigger >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ElogDbTrigger", ::ElogDbTrigger::Class_Version(), "", 1644,
                  typeid(::ElogDbTrigger), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ElogDbTrigger::Dictionary, isa_proxy, 4,
                  sizeof(::ElogDbTrigger) );
      instance.SetDelete(&delete_ElogDbTrigger);
      instance.SetDeleteArray(&deleteArray_ElogDbTrigger);
      instance.SetDestructor(&destruct_ElogDbTrigger);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ElogDbTrigger*)
   {
      return GenerateInitInstanceLocal((::ElogDbTrigger*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ElogDbTrigger*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_ElogDbBeam(void *p);
   static void deleteArray_ElogDbBeam(void *p);
   static void destruct_ElogDbBeam(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ElogDbBeam*)
   {
      ::ElogDbBeam *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ElogDbBeam >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ElogDbBeam", ::ElogDbBeam::Class_Version(), "", 1718,
                  typeid(::ElogDbBeam), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ElogDbBeam::Dictionary, isa_proxy, 4,
                  sizeof(::ElogDbBeam) );
      instance.SetDelete(&delete_ElogDbBeam);
      instance.SetDeleteArray(&deleteArray_ElogDbBeam);
      instance.SetDestructor(&destruct_ElogDbBeam);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ElogDbBeam*)
   {
      return GenerateInitInstanceLocal((::ElogDbBeam*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ElogDbBeam*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_ElogDbTarget(void *p);
   static void deleteArray_ElogDbTarget(void *p);
   static void destruct_ElogDbTarget(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ElogDbTarget*)
   {
      ::ElogDbTarget *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ElogDbTarget >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ElogDbTarget", ::ElogDbTarget::Class_Version(), "", 1782,
                  typeid(::ElogDbTarget), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ElogDbTarget::Dictionary, isa_proxy, 4,
                  sizeof(::ElogDbTarget) );
      instance.SetDelete(&delete_ElogDbTarget);
      instance.SetDeleteArray(&deleteArray_ElogDbTarget);
      instance.SetDestructor(&destruct_ElogDbTarget);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ElogDbTarget*)
   {
      return GenerateInitInstanceLocal((::ElogDbTarget*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ElogDbTarget*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_ElogDbRecord(void *p);
   static void deleteArray_ElogDbRecord(void *p);
   static void destruct_ElogDbRecord(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ElogDbRecord*)
   {
      ::ElogDbRecord *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ElogDbRecord >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ElogDbRecord", ::ElogDbRecord::Class_Version(), "", 1848,
                  typeid(::ElogDbRecord), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ElogDbRecord::Dictionary, isa_proxy, 4,
                  sizeof(::ElogDbRecord) );
      instance.SetDelete(&delete_ElogDbRecord);
      instance.SetDeleteArray(&deleteArray_ElogDbRecord);
      instance.SetDestructor(&destruct_ElogDbRecord);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ElogDbRecord*)
   {
      return GenerateInitInstanceLocal((::ElogDbRecord*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ElogDbRecord*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_ElogDbAttachment(void *p);
   static void deleteArray_ElogDbAttachment(void *p);
   static void destruct_ElogDbAttachment(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ElogDbAttachment*)
   {
      ::ElogDbAttachment *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ElogDbAttachment >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ElogDbAttachment", ::ElogDbAttachment::Class_Version(), "", 2014,
                  typeid(::ElogDbAttachment), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ElogDbAttachment::Dictionary, isa_proxy, 4,
                  sizeof(::ElogDbAttachment) );
      instance.SetDelete(&delete_ElogDbAttachment);
      instance.SetDeleteArray(&deleteArray_ElogDbAttachment);
      instance.SetDestructor(&destruct_ElogDbAttachment);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ElogDbAttachment*)
   {
      return GenerateInitInstanceLocal((::ElogDbAttachment*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ElogDbAttachment*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr UniDbConnection::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *UniDbConnection::Class_Name()
{
   return "UniDbConnection";
}

//______________________________________________________________________________
const char *UniDbConnection::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UniDbConnection*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int UniDbConnection::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UniDbConnection*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UniDbConnection::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UniDbConnection*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UniDbConnection::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UniDbConnection*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr UniDbGeoConverter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *UniDbGeoConverter::Class_Name()
{
   return "UniDbGeoConverter";
}

//______________________________________________________________________________
const char *UniDbGeoConverter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UniDbGeoConverter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int UniDbGeoConverter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UniDbGeoConverter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UniDbGeoConverter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UniDbGeoConverter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UniDbGeoConverter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UniDbGeoConverter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr UniDbGenerateClasses::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *UniDbGenerateClasses::Class_Name()
{
   return "UniDbGenerateClasses";
}

//______________________________________________________________________________
const char *UniDbGenerateClasses::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UniDbGenerateClasses*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int UniDbGenerateClasses::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UniDbGenerateClasses*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UniDbGenerateClasses::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UniDbGenerateClasses*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UniDbGenerateClasses::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UniDbGenerateClasses*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TangoTimeParameter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TangoTimeParameter::Class_Name()
{
   return "TangoTimeParameter";
}

//______________________________________________________________________________
const char *TangoTimeParameter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TangoTimeParameter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TangoTimeParameter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TangoTimeParameter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TangoTimeParameter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TangoTimeParameter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TangoTimeParameter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TangoTimeParameter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TangoTimeInterval::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TangoTimeInterval::Class_Name()
{
   return "TangoTimeInterval";
}

//______________________________________________________________________________
const char *TangoTimeInterval::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TangoTimeInterval*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TangoTimeInterval::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TangoTimeInterval*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TangoTimeInterval::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TangoTimeInterval*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TangoTimeInterval::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TangoTimeInterval*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr UniDbTangoData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *UniDbTangoData::Class_Name()
{
   return "UniDbTangoData";
}

//______________________________________________________________________________
const char *UniDbTangoData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UniDbTangoData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int UniDbTangoData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UniDbTangoData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UniDbTangoData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UniDbTangoData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UniDbTangoData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UniDbTangoData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr UniDbSearchCondition::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *UniDbSearchCondition::Class_Name()
{
   return "UniDbSearchCondition";
}

//______________________________________________________________________________
const char *UniDbSearchCondition::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UniDbSearchCondition*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int UniDbSearchCondition::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UniDbSearchCondition*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UniDbSearchCondition::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UniDbSearchCondition*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UniDbSearchCondition::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UniDbSearchCondition*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr UniDbRunPeriod::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *UniDbRunPeriod::Class_Name()
{
   return "UniDbRunPeriod";
}

//______________________________________________________________________________
const char *UniDbRunPeriod::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UniDbRunPeriod*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int UniDbRunPeriod::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UniDbRunPeriod*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UniDbRunPeriod::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UniDbRunPeriod*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UniDbRunPeriod::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UniDbRunPeriod*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr UniDbRun::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *UniDbRun::Class_Name()
{
   return "UniDbRun";
}

//______________________________________________________________________________
const char *UniDbRun::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UniDbRun*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int UniDbRun::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UniDbRun*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UniDbRun::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UniDbRun*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UniDbRun::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UniDbRun*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr UniDbRunGeometry::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *UniDbRunGeometry::Class_Name()
{
   return "UniDbRunGeometry";
}

//______________________________________________________________________________
const char *UniDbRunGeometry::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UniDbRunGeometry*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int UniDbRunGeometry::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UniDbRunGeometry*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UniDbRunGeometry::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UniDbRunGeometry*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UniDbRunGeometry::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UniDbRunGeometry*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr UniDbDetector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *UniDbDetector::Class_Name()
{
   return "UniDbDetector";
}

//______________________________________________________________________________
const char *UniDbDetector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UniDbDetector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int UniDbDetector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UniDbDetector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UniDbDetector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UniDbDetector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UniDbDetector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UniDbDetector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr UniDbParameter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *UniDbParameter::Class_Name()
{
   return "UniDbParameter";
}

//______________________________________________________________________________
const char *UniDbParameter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UniDbParameter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int UniDbParameter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UniDbParameter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UniDbParameter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UniDbParameter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UniDbParameter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UniDbParameter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr UniDbDetectorParameter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *UniDbDetectorParameter::Class_Name()
{
   return "UniDbDetectorParameter";
}

//______________________________________________________________________________
const char *UniDbDetectorParameter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UniDbDetectorParameter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int UniDbDetectorParameter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UniDbDetectorParameter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UniDbDetectorParameter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UniDbDetectorParameter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UniDbDetectorParameter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UniDbDetectorParameter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr UniDbSimulationFile::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *UniDbSimulationFile::Class_Name()
{
   return "UniDbSimulationFile";
}

//______________________________________________________________________________
const char *UniDbSimulationFile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UniDbSimulationFile*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int UniDbSimulationFile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UniDbSimulationFile*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UniDbSimulationFile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UniDbSimulationFile*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UniDbSimulationFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UniDbSimulationFile*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ElogDbPerson::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ElogDbPerson::Class_Name()
{
   return "ElogDbPerson";
}

//______________________________________________________________________________
const char *ElogDbPerson::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ElogDbPerson*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ElogDbPerson::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ElogDbPerson*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ElogDbPerson::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ElogDbPerson*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ElogDbPerson::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ElogDbPerson*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ElogDbType::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ElogDbType::Class_Name()
{
   return "ElogDbType";
}

//______________________________________________________________________________
const char *ElogDbType::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ElogDbType*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ElogDbType::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ElogDbType*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ElogDbType::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ElogDbType*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ElogDbType::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ElogDbType*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ElogDbTrigger::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ElogDbTrigger::Class_Name()
{
   return "ElogDbTrigger";
}

//______________________________________________________________________________
const char *ElogDbTrigger::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ElogDbTrigger*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ElogDbTrigger::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ElogDbTrigger*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ElogDbTrigger::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ElogDbTrigger*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ElogDbTrigger::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ElogDbTrigger*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ElogDbBeam::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ElogDbBeam::Class_Name()
{
   return "ElogDbBeam";
}

//______________________________________________________________________________
const char *ElogDbBeam::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ElogDbBeam*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ElogDbBeam::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ElogDbBeam*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ElogDbBeam::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ElogDbBeam*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ElogDbBeam::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ElogDbBeam*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ElogDbTarget::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ElogDbTarget::Class_Name()
{
   return "ElogDbTarget";
}

//______________________________________________________________________________
const char *ElogDbTarget::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ElogDbTarget*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ElogDbTarget::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ElogDbTarget*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ElogDbTarget::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ElogDbTarget*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ElogDbTarget::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ElogDbTarget*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ElogDbRecord::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ElogDbRecord::Class_Name()
{
   return "ElogDbRecord";
}

//______________________________________________________________________________
const char *ElogDbRecord::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ElogDbRecord*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ElogDbRecord::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ElogDbRecord*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ElogDbRecord::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ElogDbRecord*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ElogDbRecord::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ElogDbRecord*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ElogDbAttachment::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ElogDbAttachment::Class_Name()
{
   return "ElogDbAttachment";
}

//______________________________________________________________________________
const char *ElogDbAttachment::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ElogDbAttachment*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ElogDbAttachment::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ElogDbAttachment*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ElogDbAttachment::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ElogDbAttachment*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ElogDbAttachment::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ElogDbAttachment*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void UniDbConnection::Streamer(TBuffer &R__b)
{
   // Stream an object of class UniDbConnection.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(UniDbConnection::Class(),this);
   } else {
      R__b.WriteClassBuffer(UniDbConnection::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_UniDbConnection(void *p) {
      delete ((::UniDbConnection*)p);
   }
   static void deleteArray_UniDbConnection(void *p) {
      delete [] ((::UniDbConnection*)p);
   }
   static void destruct_UniDbConnection(void *p) {
      typedef ::UniDbConnection current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UniDbConnection

//______________________________________________________________________________
void UniDbGeoConverter::Streamer(TBuffer &R__b)
{
   // Stream an object of class UniDbGeoConverter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(UniDbGeoConverter::Class(),this);
   } else {
      R__b.WriteClassBuffer(UniDbGeoConverter::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_UniDbGeoConverter(void *p) {
      delete ((::UniDbGeoConverter*)p);
   }
   static void deleteArray_UniDbGeoConverter(void *p) {
      delete [] ((::UniDbGeoConverter*)p);
   }
   static void destruct_UniDbGeoConverter(void *p) {
      typedef ::UniDbGeoConverter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UniDbGeoConverter

//______________________________________________________________________________
void UniDbGenerateClasses::Streamer(TBuffer &R__b)
{
   // Stream an object of class UniDbGenerateClasses.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(UniDbGenerateClasses::Class(),this);
   } else {
      R__b.WriteClassBuffer(UniDbGenerateClasses::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_UniDbGenerateClasses(void *p) {
      return  p ? new(p) ::UniDbGenerateClasses : new ::UniDbGenerateClasses;
   }
   static void *newArray_UniDbGenerateClasses(Long_t nElements, void *p) {
      return p ? new(p) ::UniDbGenerateClasses[nElements] : new ::UniDbGenerateClasses[nElements];
   }
   // Wrapper around operator delete
   static void delete_UniDbGenerateClasses(void *p) {
      delete ((::UniDbGenerateClasses*)p);
   }
   static void deleteArray_UniDbGenerateClasses(void *p) {
      delete [] ((::UniDbGenerateClasses*)p);
   }
   static void destruct_UniDbGenerateClasses(void *p) {
      typedef ::UniDbGenerateClasses current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UniDbGenerateClasses

namespace ROOT {
   // Wrappers around operator new
   static void *new_UniqueRunNumber(void *p) {
      return  p ? new(p) ::UniqueRunNumber : new ::UniqueRunNumber;
   }
   static void *newArray_UniqueRunNumber(Long_t nElements, void *p) {
      return p ? new(p) ::UniqueRunNumber[nElements] : new ::UniqueRunNumber[nElements];
   }
   // Wrapper around operator delete
   static void delete_UniqueRunNumber(void *p) {
      delete ((::UniqueRunNumber*)p);
   }
   static void deleteArray_UniqueRunNumber(void *p) {
      delete [] ((::UniqueRunNumber*)p);
   }
   static void destruct_UniqueRunNumber(void *p) {
      typedef ::UniqueRunNumber current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UniqueRunNumber

namespace ROOT {
   // Wrappers around operator new
   static void *new_IIStructure(void *p) {
      return  p ? new(p) ::IIStructure : new ::IIStructure;
   }
   static void *newArray_IIStructure(Long_t nElements, void *p) {
      return p ? new(p) ::IIStructure[nElements] : new ::IIStructure[nElements];
   }
   // Wrapper around operator delete
   static void delete_IIStructure(void *p) {
      delete ((::IIStructure*)p);
   }
   static void deleteArray_IIStructure(void *p) {
      delete [] ((::IIStructure*)p);
   }
   static void destruct_IIStructure(void *p) {
      typedef ::IIStructure current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::IIStructure

namespace ROOT {
   // Wrappers around operator new
   static void *new_DchMapStructure(void *p) {
      return  p ? new(p) ::DchMapStructure : new ::DchMapStructure;
   }
   static void *newArray_DchMapStructure(Long_t nElements, void *p) {
      return p ? new(p) ::DchMapStructure[nElements] : new ::DchMapStructure[nElements];
   }
   // Wrapper around operator delete
   static void delete_DchMapStructure(void *p) {
      delete ((::DchMapStructure*)p);
   }
   static void deleteArray_DchMapStructure(void *p) {
      delete [] ((::DchMapStructure*)p);
   }
   static void destruct_DchMapStructure(void *p) {
      typedef ::DchMapStructure current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DchMapStructure

namespace ROOT {
   // Wrappers around operator new
   static void *new_GemMapStructure(void *p) {
      return  p ? new(p) ::GemMapStructure : new ::GemMapStructure;
   }
   static void *newArray_GemMapStructure(Long_t nElements, void *p) {
      return p ? new(p) ::GemMapStructure[nElements] : new ::GemMapStructure[nElements];
   }
   // Wrapper around operator delete
   static void delete_GemMapStructure(void *p) {
      delete ((::GemMapStructure*)p);
   }
   static void deleteArray_GemMapStructure(void *p) {
      delete [] ((::GemMapStructure*)p);
   }
   static void destruct_GemMapStructure(void *p) {
      typedef ::GemMapStructure current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::GemMapStructure

namespace ROOT {
   // Wrappers around operator new
   static void *new_GemPedestalStructure(void *p) {
      return  p ? new(p) ::GemPedestalStructure : new ::GemPedestalStructure;
   }
   static void *newArray_GemPedestalStructure(Long_t nElements, void *p) {
      return p ? new(p) ::GemPedestalStructure[nElements] : new ::GemPedestalStructure[nElements];
   }
   // Wrapper around operator delete
   static void delete_GemPedestalStructure(void *p) {
      delete ((::GemPedestalStructure*)p);
   }
   static void deleteArray_GemPedestalStructure(void *p) {
      delete [] ((::GemPedestalStructure*)p);
   }
   static void destruct_GemPedestalStructure(void *p) {
      typedef ::GemPedestalStructure current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::GemPedestalStructure

namespace ROOT {
   // Wrappers around operator new
   static void *new_TriggerMapStructure(void *p) {
      return  p ? new(p) ::TriggerMapStructure : new ::TriggerMapStructure;
   }
   static void *newArray_TriggerMapStructure(Long_t nElements, void *p) {
      return p ? new(p) ::TriggerMapStructure[nElements] : new ::TriggerMapStructure[nElements];
   }
   // Wrapper around operator delete
   static void delete_TriggerMapStructure(void *p) {
      delete ((::TriggerMapStructure*)p);
   }
   static void deleteArray_TriggerMapStructure(void *p) {
      delete [] ((::TriggerMapStructure*)p);
   }
   static void destruct_TriggerMapStructure(void *p) {
      typedef ::TriggerMapStructure current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TriggerMapStructure

namespace ROOT {
   // Wrappers around operator new
   static void *new_LorentzShiftStructure(void *p) {
      return  p ? new(p) ::LorentzShiftStructure : new ::LorentzShiftStructure;
   }
   static void *newArray_LorentzShiftStructure(Long_t nElements, void *p) {
      return p ? new(p) ::LorentzShiftStructure[nElements] : new ::LorentzShiftStructure[nElements];
   }
   // Wrapper around operator delete
   static void delete_LorentzShiftStructure(void *p) {
      delete ((::LorentzShiftStructure*)p);
   }
   static void deleteArray_LorentzShiftStructure(void *p) {
      delete [] ((::LorentzShiftStructure*)p);
   }
   static void destruct_LorentzShiftStructure(void *p) {
      typedef ::LorentzShiftStructure current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LorentzShiftStructure

//______________________________________________________________________________
void TangoTimeParameter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TangoTimeParameter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TangoTimeParameter::Class(),this);
   } else {
      R__b.WriteClassBuffer(TangoTimeParameter::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TangoTimeParameter(void *p) {
      return  p ? new(p) ::TangoTimeParameter : new ::TangoTimeParameter;
   }
   static void *newArray_TangoTimeParameter(Long_t nElements, void *p) {
      return p ? new(p) ::TangoTimeParameter[nElements] : new ::TangoTimeParameter[nElements];
   }
   // Wrapper around operator delete
   static void delete_TangoTimeParameter(void *p) {
      delete ((::TangoTimeParameter*)p);
   }
   static void deleteArray_TangoTimeParameter(void *p) {
      delete [] ((::TangoTimeParameter*)p);
   }
   static void destruct_TangoTimeParameter(void *p) {
      typedef ::TangoTimeParameter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TangoTimeParameter

//______________________________________________________________________________
void TangoTimeInterval::Streamer(TBuffer &R__b)
{
   // Stream an object of class TangoTimeInterval.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TangoTimeInterval::Class(),this);
   } else {
      R__b.WriteClassBuffer(TangoTimeInterval::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TangoTimeInterval(void *p) {
      return  p ? new(p) ::TangoTimeInterval : new ::TangoTimeInterval;
   }
   static void *newArray_TangoTimeInterval(Long_t nElements, void *p) {
      return p ? new(p) ::TangoTimeInterval[nElements] : new ::TangoTimeInterval[nElements];
   }
   // Wrapper around operator delete
   static void delete_TangoTimeInterval(void *p) {
      delete ((::TangoTimeInterval*)p);
   }
   static void deleteArray_TangoTimeInterval(void *p) {
      delete [] ((::TangoTimeInterval*)p);
   }
   static void destruct_TangoTimeInterval(void *p) {
      typedef ::TangoTimeInterval current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TangoTimeInterval

//______________________________________________________________________________
void UniDbTangoData::Streamer(TBuffer &R__b)
{
   // Stream an object of class UniDbTangoData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(UniDbTangoData::Class(),this);
   } else {
      R__b.WriteClassBuffer(UniDbTangoData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_UniDbTangoData(void *p) {
      return  p ? new(p) ::UniDbTangoData : new ::UniDbTangoData;
   }
   static void *newArray_UniDbTangoData(Long_t nElements, void *p) {
      return p ? new(p) ::UniDbTangoData[nElements] : new ::UniDbTangoData[nElements];
   }
   // Wrapper around operator delete
   static void delete_UniDbTangoData(void *p) {
      delete ((::UniDbTangoData*)p);
   }
   static void deleteArray_UniDbTangoData(void *p) {
      delete [] ((::UniDbTangoData*)p);
   }
   static void destruct_UniDbTangoData(void *p) {
      typedef ::UniDbTangoData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UniDbTangoData

//______________________________________________________________________________
void UniDbSearchCondition::Streamer(TBuffer &R__b)
{
   // Stream an object of class UniDbSearchCondition.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(UniDbSearchCondition::Class(),this);
   } else {
      R__b.WriteClassBuffer(UniDbSearchCondition::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_UniDbSearchCondition(void *p) {
      delete ((::UniDbSearchCondition*)p);
   }
   static void deleteArray_UniDbSearchCondition(void *p) {
      delete [] ((::UniDbSearchCondition*)p);
   }
   static void destruct_UniDbSearchCondition(void *p) {
      typedef ::UniDbSearchCondition current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UniDbSearchCondition

//______________________________________________________________________________
void UniDbRunPeriod::Streamer(TBuffer &R__b)
{
   // Stream an object of class UniDbRunPeriod.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(UniDbRunPeriod::Class(),this);
   } else {
      R__b.WriteClassBuffer(UniDbRunPeriod::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_UniDbRunPeriod(void *p) {
      delete ((::UniDbRunPeriod*)p);
   }
   static void deleteArray_UniDbRunPeriod(void *p) {
      delete [] ((::UniDbRunPeriod*)p);
   }
   static void destruct_UniDbRunPeriod(void *p) {
      typedef ::UniDbRunPeriod current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UniDbRunPeriod

//______________________________________________________________________________
void UniDbRun::Streamer(TBuffer &R__b)
{
   // Stream an object of class UniDbRun.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(UniDbRun::Class(),this);
   } else {
      R__b.WriteClassBuffer(UniDbRun::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_UniDbRun(void *p) {
      delete ((::UniDbRun*)p);
   }
   static void deleteArray_UniDbRun(void *p) {
      delete [] ((::UniDbRun*)p);
   }
   static void destruct_UniDbRun(void *p) {
      typedef ::UniDbRun current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UniDbRun

//______________________________________________________________________________
void UniDbRunGeometry::Streamer(TBuffer &R__b)
{
   // Stream an object of class UniDbRunGeometry.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(UniDbRunGeometry::Class(),this);
   } else {
      R__b.WriteClassBuffer(UniDbRunGeometry::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_UniDbRunGeometry(void *p) {
      delete ((::UniDbRunGeometry*)p);
   }
   static void deleteArray_UniDbRunGeometry(void *p) {
      delete [] ((::UniDbRunGeometry*)p);
   }
   static void destruct_UniDbRunGeometry(void *p) {
      typedef ::UniDbRunGeometry current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UniDbRunGeometry

//______________________________________________________________________________
void UniDbDetector::Streamer(TBuffer &R__b)
{
   // Stream an object of class UniDbDetector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(UniDbDetector::Class(),this);
   } else {
      R__b.WriteClassBuffer(UniDbDetector::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_UniDbDetector(void *p) {
      delete ((::UniDbDetector*)p);
   }
   static void deleteArray_UniDbDetector(void *p) {
      delete [] ((::UniDbDetector*)p);
   }
   static void destruct_UniDbDetector(void *p) {
      typedef ::UniDbDetector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UniDbDetector

//______________________________________________________________________________
void UniDbParameter::Streamer(TBuffer &R__b)
{
   // Stream an object of class UniDbParameter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(UniDbParameter::Class(),this);
   } else {
      R__b.WriteClassBuffer(UniDbParameter::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_UniDbParameter(void *p) {
      delete ((::UniDbParameter*)p);
   }
   static void deleteArray_UniDbParameter(void *p) {
      delete [] ((::UniDbParameter*)p);
   }
   static void destruct_UniDbParameter(void *p) {
      typedef ::UniDbParameter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UniDbParameter

//______________________________________________________________________________
void UniDbDetectorParameter::Streamer(TBuffer &R__b)
{
   // Stream an object of class UniDbDetectorParameter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(UniDbDetectorParameter::Class(),this);
   } else {
      R__b.WriteClassBuffer(UniDbDetectorParameter::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_UniDbDetectorParameter(void *p) {
      delete ((::UniDbDetectorParameter*)p);
   }
   static void deleteArray_UniDbDetectorParameter(void *p) {
      delete [] ((::UniDbDetectorParameter*)p);
   }
   static void destruct_UniDbDetectorParameter(void *p) {
      typedef ::UniDbDetectorParameter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UniDbDetectorParameter

//______________________________________________________________________________
void UniDbSimulationFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class UniDbSimulationFile.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(UniDbSimulationFile::Class(),this);
   } else {
      R__b.WriteClassBuffer(UniDbSimulationFile::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_UniDbSimulationFile(void *p) {
      delete ((::UniDbSimulationFile*)p);
   }
   static void deleteArray_UniDbSimulationFile(void *p) {
      delete [] ((::UniDbSimulationFile*)p);
   }
   static void destruct_UniDbSimulationFile(void *p) {
      typedef ::UniDbSimulationFile current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UniDbSimulationFile

//______________________________________________________________________________
void ElogDbPerson::Streamer(TBuffer &R__b)
{
   // Stream an object of class ElogDbPerson.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ElogDbPerson::Class(),this);
   } else {
      R__b.WriteClassBuffer(ElogDbPerson::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ElogDbPerson(void *p) {
      delete ((::ElogDbPerson*)p);
   }
   static void deleteArray_ElogDbPerson(void *p) {
      delete [] ((::ElogDbPerson*)p);
   }
   static void destruct_ElogDbPerson(void *p) {
      typedef ::ElogDbPerson current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ElogDbPerson

//______________________________________________________________________________
void ElogDbType::Streamer(TBuffer &R__b)
{
   // Stream an object of class ElogDbType.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ElogDbType::Class(),this);
   } else {
      R__b.WriteClassBuffer(ElogDbType::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ElogDbType(void *p) {
      delete ((::ElogDbType*)p);
   }
   static void deleteArray_ElogDbType(void *p) {
      delete [] ((::ElogDbType*)p);
   }
   static void destruct_ElogDbType(void *p) {
      typedef ::ElogDbType current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ElogDbType

//______________________________________________________________________________
void ElogDbTrigger::Streamer(TBuffer &R__b)
{
   // Stream an object of class ElogDbTrigger.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ElogDbTrigger::Class(),this);
   } else {
      R__b.WriteClassBuffer(ElogDbTrigger::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ElogDbTrigger(void *p) {
      delete ((::ElogDbTrigger*)p);
   }
   static void deleteArray_ElogDbTrigger(void *p) {
      delete [] ((::ElogDbTrigger*)p);
   }
   static void destruct_ElogDbTrigger(void *p) {
      typedef ::ElogDbTrigger current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ElogDbTrigger

//______________________________________________________________________________
void ElogDbBeam::Streamer(TBuffer &R__b)
{
   // Stream an object of class ElogDbBeam.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ElogDbBeam::Class(),this);
   } else {
      R__b.WriteClassBuffer(ElogDbBeam::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ElogDbBeam(void *p) {
      delete ((::ElogDbBeam*)p);
   }
   static void deleteArray_ElogDbBeam(void *p) {
      delete [] ((::ElogDbBeam*)p);
   }
   static void destruct_ElogDbBeam(void *p) {
      typedef ::ElogDbBeam current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ElogDbBeam

//______________________________________________________________________________
void ElogDbTarget::Streamer(TBuffer &R__b)
{
   // Stream an object of class ElogDbTarget.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ElogDbTarget::Class(),this);
   } else {
      R__b.WriteClassBuffer(ElogDbTarget::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ElogDbTarget(void *p) {
      delete ((::ElogDbTarget*)p);
   }
   static void deleteArray_ElogDbTarget(void *p) {
      delete [] ((::ElogDbTarget*)p);
   }
   static void destruct_ElogDbTarget(void *p) {
      typedef ::ElogDbTarget current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ElogDbTarget

//______________________________________________________________________________
void ElogDbRecord::Streamer(TBuffer &R__b)
{
   // Stream an object of class ElogDbRecord.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ElogDbRecord::Class(),this);
   } else {
      R__b.WriteClassBuffer(ElogDbRecord::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ElogDbRecord(void *p) {
      delete ((::ElogDbRecord*)p);
   }
   static void deleteArray_ElogDbRecord(void *p) {
      delete [] ((::ElogDbRecord*)p);
   }
   static void destruct_ElogDbRecord(void *p) {
      typedef ::ElogDbRecord current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ElogDbRecord

//______________________________________________________________________________
void ElogDbAttachment::Streamer(TBuffer &R__b)
{
   // Stream an object of class ElogDbAttachment.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ElogDbAttachment::Class(),this);
   } else {
      R__b.WriteClassBuffer(ElogDbAttachment::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ElogDbAttachment(void *p) {
      delete ((::ElogDbAttachment*)p);
   }
   static void deleteArray_ElogDbAttachment(void *p) {
      delete [] ((::ElogDbAttachment*)p);
   }
   static void destruct_ElogDbAttachment(void *p) {
      typedef ::ElogDbAttachment current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ElogDbAttachment

namespace ROOT {
   static TClass *vectorlEdoublegR_Dictionary();
   static void vectorlEdoublegR_TClassManip(TClass*);
   static void *new_vectorlEdoublegR(void *p = 0);
   static void *newArray_vectorlEdoublegR(Long_t size, void *p);
   static void delete_vectorlEdoublegR(void *p);
   static void deleteArray_vectorlEdoublegR(void *p);
   static void destruct_vectorlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<double>*)
   {
      vector<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<double>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<double>", -2, "vector", 216,
                  typeid(vector<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<double>) );
      instance.SetNew(&new_vectorlEdoublegR);
      instance.SetNewArray(&newArray_vectorlEdoublegR);
      instance.SetDelete(&delete_vectorlEdoublegR);
      instance.SetDeleteArray(&deleteArray_vectorlEdoublegR);
      instance.SetDestructor(&destruct_vectorlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<double> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<double>*)0x0)->GetClass();
      vectorlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double> : new vector<double>;
   }
   static void *newArray_vectorlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double>[nElements] : new vector<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdoublegR(void *p) {
      delete ((vector<double>*)p);
   }
   static void deleteArray_vectorlEdoublegR(void *p) {
      delete [] ((vector<double>*)p);
   }
   static void destruct_vectorlEdoublegR(void *p) {
      typedef vector<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<double>

namespace ROOT {
   static TClass *vectorlEboolgR_Dictionary();
   static void vectorlEboolgR_TClassManip(TClass*);
   static void *new_vectorlEboolgR(void *p = 0);
   static void *newArray_vectorlEboolgR(Long_t size, void *p);
   static void delete_vectorlEboolgR(void *p);
   static void deleteArray_vectorlEboolgR(void *p);
   static void destruct_vectorlEboolgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bool>*)
   {
      vector<bool> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bool>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bool>", -2, "vector", 543,
                  typeid(vector<bool>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEboolgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<bool>) );
      instance.SetNew(&new_vectorlEboolgR);
      instance.SetNewArray(&newArray_vectorlEboolgR);
      instance.SetDelete(&delete_vectorlEboolgR);
      instance.SetDeleteArray(&deleteArray_vectorlEboolgR);
      instance.SetDestructor(&destruct_vectorlEboolgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bool> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<bool>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<bool>*)0x0)->GetClass();
      vectorlEboolgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEboolgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bool> : new vector<bool>;
   }
   static void *newArray_vectorlEboolgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bool>[nElements] : new vector<bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEboolgR(void *p) {
      delete ((vector<bool>*)p);
   }
   static void deleteArray_vectorlEboolgR(void *p) {
      delete [] ((vector<bool>*)p);
   }
   static void destruct_vectorlEboolgR(void *p) {
      typedef vector<bool> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<bool>

namespace {
  void TriggerDictionaryInitialization_G__UniDbDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/opt/fairsoft/install/include/root",
"/usr/include/libxml2",
"/home/alex/bmnroot_dev/bmnroot/uni_db",
"/home/alex/bmnroot_dev/bmnroot/uni_db/db_classes",
"/home/alex/bmnroot_dev/bmnroot/uni_db/elog_classes",
"/opt/fairsoft/install/include/root",
"/usr/include/libxml2",
"/opt/fairsoft/install/include/root",
"/home/alex/bmnroot_dev/bmnroot/build/uni_db/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__UniDbDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class UniDbConnection;
class UniDbGeoConverter;
class UniDbGenerateClasses;
struct __attribute__((annotate("$clingAutoload$db_structures.h")))  UniqueRunNumber;
struct __attribute__((annotate("$clingAutoload$db_structures.h")))  IIStructure;
struct __attribute__((annotate("$clingAutoload$db_structures.h")))  DchMapStructure;
struct __attribute__((annotate("$clingAutoload$db_structures.h")))  GemMapStructure;
struct __attribute__((annotate("$clingAutoload$db_structures.h")))  GemPedestalStructure;
struct __attribute__((annotate("$clingAutoload$db_structures.h")))  TriggerMapStructure;
struct __attribute__((annotate("$clingAutoload$db_structures.h")))  LorentzShiftStructure;
class TangoTimeParameter;
class TangoTimeInterval;
class UniDbTangoData;
class UniDbSearchCondition;
class UniDbRunPeriod;
class UniDbRun;
class UniDbRunGeometry;
class UniDbDetector;
class UniDbParameter;
class UniDbDetectorParameter;
class UniDbSimulationFile;
class ElogDbPerson;
class ElogDbType;
class ElogDbTrigger;
class ElogDbBeam;
class ElogDbTarget;
class ElogDbRecord;
class ElogDbAttachment;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__UniDbDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// -------------------------------------------------------------------------
// -----                      UniDbConnection header file              -----
// -----                  Created 28/01/13 by K. Gertsenberger         -----
// -------------------------------------------------------------------------

/** UniDbConnection.h
 *@author K.Gertsenberger <gertsen@jinr.ru>
 **
 ** Class for connection to BM@N and MPD databases
 **/

#ifndef UNIDBCONNECTION_H
#define UNIDBCONNECTION_H 1

#include <TSQLServer.h>
#include "db_settings.h"

#include <map>
#include <string>
#include <iostream>
using namespace std;

enum enumDBMS{MySQL, PgSQL};
enum UniConnectionType{UNIFIED_DB, TANGO_DB, ELOG_DB};

typedef map<string, TSQLServer*> mapSQLServer;
typedef pair<string, TSQLServer*> pairSQLServer;
typedef map<string, TSQLServer*>::iterator itSQLServer;

class UniDbConnection
{
 private:
    TSQLServer* server_db;

    UniDbConnection(TSQLServer* pSQLServer);

 protected:
    static mapSQLServer* mapConnection;

 public:
    virtual ~UniDbConnection(); // Destructor

    static UniDbConnection* Open(UniConnectionType connection_type);
    static UniDbConnection* Open(enumDBMS database_type, const char* strDBHost, const char* strDBName, const char* strUID, const char* strPassword);

    TSQLServer* GetSQLServer() {return server_db;}

    static const char* DbToString(UniConnectionType v)
    {
        switch (v)
        {
            case UNIFIED_DB:    return "UNIFIED_DB";
            case TANGO_DB:      return "TANGO_DB";
            case ELOG_DB:       return "ELOG_DB";
            default:            return "[Unknown DB type]";
        }
    }

 ClassDef(UniDbConnection,1)
};

#endif
// -------------------------------------------------------------------------
// -----                      UniDbGeoConverter header file            -----
// -----                  Created 04/08/15  by K. Gertsenberger        -----
// -------------------------------------------------------------------------

/** UniDbGeoConverter.h
 *@author K.Gertsenberger <gertsen@jinr.ru>
 **
 ** Class for convertion from detector geometry to DB data
 **/

#ifndef UNIDBGEOCONVERTER_H
#define UNIDBGEOCONVERTER_H 1

#include "TString.h"
#include "TGeoNode.h"
#include "TSQLServer.h"

#include "UniDbConnection.h"

enum dbShapeName{dbGeoBox, dbGeoPgon, dbGeoPcon, dbGeoTube, dbGeoTubeSeg, dbGeoSphere, dbGeoTorus, dbGeoCone, dbGeoConeSeg,
                 dbGeoTrd1, dbGeoTrd2, dbGeoTrap, dbGeoComb, dbGeoPara, dbGeoArb8, dbGeoEltu, dbGeoXtru, dbGeoShapeAssembly};

// 100 and next values - dynamic arrays or a set of vertices
enum dbParameterType{dbParameterCenterX, dbParameterCenterY, dbParameterCenterZ, dbParameterDXhalf, dbParameterDYhalf, dbParameterDZhalf,
                     dbParameterRmin, dbParameterRmax, dbParameterPhi1, dbParameterPhi2, dbParameterDphi, dbParameterNedges, dbParameterNz,
                     dbParameterTheta1, dbParameterTheta2, dbParameterRmin2, dbParameterRmax2, dbParameterDXhalf2, dbParameterDYhalf2,
                     dbParameterAlpha1, dbParameterAlpha2, dbParameterR, dbParameterBl1, dbParameterBl2, dbParameterTl1, dbParameterTl2,
                     dbParameterH1, dbParameterH2};


class UniDbGeoConverter
{
 private:
    UniDbGeoConverter();

    static int RecursiveNodeChanging(TSQLServer* uni_db, TGeoNode* node, int parent_node_id);

 public:
    virtual ~UniDbGeoConverter(); // Destructor

    // static methods
    static int WriteRootGeoToDB(TString geo_file_path);

  ClassDef(UniDbGeoConverter,1);
};

#endif
// -------------------------------------------------------------------------
// -----                    UniDbGenerateClasses header file           -----
// -----                  Created 18/08/15  by K. Gertsenberger        -----
// -------------------------------------------------------------------------

/** UniDbGenerateClasses.h
 *@author K.Gertsenberger <gertsen@jinr.ru>
 **
 ** Class for generating DB classes
 **/

#ifndef UNIDBGENERATECLASSES_H
#define UNIDBGENERATECLASSES_H 1

#include "UniDbConnection.h"

#include "TString.h"
#include "TObjArray.h"

struct structColumnInfo
{
    // column name (e.g. run_number)
    TString strColumnName;
    // <column name> for 'not null' (e.g. run_number),  *<column_name> for null (e.g. *run_number)
    TString strColumnPointer;
    // column name with spaces instead of '_' (e.g. run number)
    TString strColumnNameSpace;
    // C++/ROOT variable type corresponding column (e.g. int and int*)
    TString strVariableType;
    // <variable type> for 'not null', <variable type> without '*' at the end for null (e.g. int and int)
    TString strVariableTypePointer;
    TString strStatementType;
    // symbol corresponding variable type as it presented in printf (or TString::Format)
    TString strPrintfType;
    // member class variable name corresponding table column
    TString strVariableName;
    // temp variable name for tempopary copy this variable
    TString strTempVariableName;
    // short variable name (e.g. ComponentName for 'component_name' column
    TString strShortVariableName;
    bool isIdentity;
    bool isPrimary;
    bool isCompositeKey;
    bool isUnique;
    bool isNullable;
    bool isBinary;
    bool isDateTime;
};

// structure to join another table's fields (for read-only) - NOT IMPLEMENTED YET
struct structTableJoin
{
    TString strSourceTableName;
    TString strJoinTableName;
    structColumnInfo strJoinField;
    TObjArray* arrManualFieldNames;

    structTableJoin() { arrManualFieldNames = NULL; }
    ~structTableJoin() { if (arrManualFieldNames) delete arrManualFieldNames; }
};

class UniDbGenerateClasses
{
 public:
    UniDbGenerateClasses();             // Constructor
    virtual ~UniDbGenerateClasses();    // Destructor

    // Generate C++ classess - wrappers for DB tables
    // Parameters:
    //      connection_type - database from enumeration;
    //      class_prefix - prefix with directory name and prefix of classes' names
    //      isOnlyUpdate - whether only update of the existing classes or create new ones
    int GenerateClasses(UniConnectionType connection_type, TString class_prefix = "db_classes/UniDb", bool isOnlyUpdate = true);

    TObjArray* arrTableJoin;

  ClassDef(UniDbGenerateClasses,1);
};

#endif
/****************************************************************************
           This interface can be used to get hardware detector data
             from Tango (Slow Control System) database
****************************************************************************/

#ifndef UNIDBTANGODATA_H
#define UNIDBTANGODATA_H 1

#include "db_structures.h"

#include "TDatime.h"
#include "TObjArray.h"
#include "TString.h"

#include <vector>
#include <string>
using namespace std;

struct CSVElement
{
    TString varName;	// variable name (e.g. ZDC_X or ZDC_Y)
    TDatime runTime;	// corresponding time
    int varValue;		// value of the parameter
};

enum Tango_Parameter_Type {Tango_Bool = 1, Tango_Double = 2, Tango_Bool_Array = 11, Tango_Double_Array = 12};

class TangoTimeParameter : public TObject
{
  public:
    // parameter time
    TDatime parameter_time;
    // parameter type
    Tango_Parameter_Type parameter_type;
    // parameter values of one of the corresponding parameter_type
    vector<bool> bool_parameter_value;
    vector<double> double_parameter_value;

    /** Default constructor **/
    TangoTimeParameter();
    /** Initialization constructor **/
    TangoTimeParameter(TDatime par_time, Tango_Parameter_Type par_type);

    /** Destructor **/
    virtual ~TangoTimeParameter();

  ClassDef(TangoTimeParameter,1);
};

class TangoTimeInterval : public TObject
{
  public:
    TDatime start_time;
    TDatime end_time;

    /** Default constructor **/
    TangoTimeInterval();

    /** Initialization constructor **/
    TangoTimeInterval(TDatime start_time_interval, TDatime end_time_interval);

    /** Destructor **/
    virtual ~TangoTimeInterval();

  ClassDef(TangoTimeInterval,1);
};

// class used to get hardware detector data from Tango database and to display results in console or graphs
class UniDbTangoData
{
 public:
    // empty constructor
    UniDbTangoData();
    // empty destructor
    ~UniDbTangoData();

    // Function GetTangoParameter gets hardware data from the Tango database (MySQL connection defined in 'uni_db/db_settings.h' file).
    // Parameters:
    //	detector_name - name of the detector (e.g. "zdc" or "gem")
    //	parameter_name - name of physical parameter stored in Tango (e.g. "uset" for ZDC or "u" for GEM)
    //	date_start - time from which to start reading the parameter, format: "YYYY-MM-DD HH:MM:SS" (e.g. "2015-03-13 23:00:00")
    //	date_end - end time of parameter reading, the same format (e.g. "2015-03-13 24:00:00")
    // Returns TObjArray with TangoTimeParameter objects (i.e. conditionally TObjArray<TangoTimeParameter*>), or NULL in case errors.
    TObjArray* GetTangoParameter(const char* detector_name, const char* parameter_name, const char* date_start, const char* date_end);

    // Function SearchTangoIntervals gets time intervals for defined condition on parameter, from the Tango database (MySQL connection defined in 'uni_db/db_settings.h' file).
    // NOTE: now it works only if channel count is constant during given time period
    // Parameters:
    //  detector_name - name of the detector (e.g. "zdc" or "gem")
    //  parameter_name - name of physical parameter stored in Tango (e.g. "uset" for ZDC or "u" for GEM)
    //  date_start - time from which to start searching for time intervals satisfied the condition, format: "YYYY-MM-DD HH:MM:SS" (e.g. "2015-03-13 23:00:00")
    //	date_end - end time of searching time intervals, the same format (e.g. "2015-03-13 24:00:00")
    //  condition - condition of time interval sampling, default: conditionEqual (the possible list in 'uni_db/db_structures.h')
    //  value - boolean value for the condition with which the comparison is performed, default: true
    //  mapChannel - array of integer values (map) to change the order of result TObjArray-s in the common result array, if, for example, channels go in a different sequence; NULL - if not used
    // Returns common TObjArray with TObjArray objects containing TangoTimeInterval (i.e. conditionally TObjArray<TObjArray<TangoTimeInterval*>>),
    // if no intervals found - returns the common TObjArray with zero TObjArray elements; in case of errors - returns NULL
    TObjArray* SearchTangoIntervals(char* detector_name, char* parameter_name, char* date_start, char* date_end,  enumConditions condition = conditionEqual, bool value = true, int* mapChannel = NULL);

    // Function PrintTangoDataConsole displays hardware data obtained from Tango, e.g. ZDC voltage in time interval, in console
    // Parameter: tango_data - TObjArray with TangoTimeParameter objects obtained from 'GetTangoParameter' function
    void PrintTangoDataConsole(TObjArray* tango_data);
    // Function PrintTangoDataSurface displays hardware vector data obtained from Tango, e.g. ZDC voltage in time interval, graphically as 2D Surface Graph
    // Parameters:
    //  tango_data - TObjArray with TangoTimeParameter objects obtained from 'GetTangoParameter' function
    //  y_axis - label of Y axis
    void PrintTangoDataSurface(TObjArray* tango_data, const char* y_axis = "parameter");
    // Function PrintTangoDataMulti3D displays hardware vector data obtained from Tango, e.g. ZDC voltage in time interval, graphically as a set of Line Graphs
    // Parameter: tango_data - TObjArray with TangoTimeParameter objects obtained from 'GetTangoParameter' function
    void PrintTangoDataMultiGraph(TObjArray* tango_data, const char* y_axis = "parameter", bool is3D = false);

    // Function PrintTangoIntervalConsole displays in console time intervals obtained from Tango for defined condition
    // Parameters:
    //  tango_intervals - TObjArray with TObjArray objects containing TangoTimeInterval objects obtained from 'SearchTangoIntervals' function
    //  channel_name - name of the dimension to display on the screen, default: Channel
    void PrintTangoIntervalConsole(TObjArray* tango_intervals, TString channel_name = "Channel");

    // return average value for Tango data array (result vector with size greater than 1 is used in case of many channels)
    vector<double> GetAverageTangoData(TObjArray* tango_data);

 ClassDef(UniDbTangoData,1)
};

#endif
#ifndef UNIDBSEARCHCONDITION_H
#define UNIDBSEARCHCONDITION_H 1

#include "db_structures.h"

#include "TString.h"
#include "TDatime.h"

#include <vector>
using namespace std;

class UniDbSearchCondition
{
 public:
    UniDbSearchCondition(enumColumns column, enumConditions condition);
    UniDbSearchCondition(enumColumns column, enumConditions condition, int value);
    UniDbSearchCondition(enumColumns column, enumConditions condition, unsigned int value);
    UniDbSearchCondition(enumColumns column, enumConditions condition, double value);
    UniDbSearchCondition(enumColumns column, enumConditions condition, TString value);
    UniDbSearchCondition(enumColumns column, enumConditions condition, TDatime value);
    virtual ~UniDbSearchCondition(){}

    // getters
    enumColumns GetColumn() {return eColumn;}
    enumConditions GetCondition() {return eCondition;}
    int GetValueType() {return iValueType;}
    int GetIntValue() {return iValue;}
    unsigned int GetUIntValue() {return uiValue;}
    double GetDoubleValue() {return dValue;}
    TString GetStringValue() {return tstrValue;}
    TDatime GetDatimeValue() {return dtValue;}

 private:
    UniDbSearchCondition();

    enumColumns eColumn;
    enumConditions eCondition;

    // 1 - int, 2 - unsigned int, 3 - double, 4 - TString, 5 - TDatime
    int iValueType;
    int iValue;
    unsigned int uiValue;
    double dValue;
    TString tstrValue;
    TDatime dtValue;

 ClassDef(UniDbSearchCondition,1)
};

#endif
#ifndef DB_STRUCTURES_H
#define DB_STRUCTURES_H

/* TO DO: make an abstract class ParameterValue with virtual functions: GetLength(), GetType(), mb.: Write(), Read()
 * and inherited classes, such as: BoolValue, IntValue, etc. instead of below structures
 */

struct UniqueRunNumber
{
    UniqueRunNumber() {}
    UniqueRunNumber(int period_num, int run_num) { period_number = period_num; run_number = run_num; }
    int period_number;
    int run_number;
};

// enumeration of table columns for Search Conditions (UniDbRun::Search, UniDbDetectorParameters::Search function). *Begin and *End show the column range
enum enumColumns{columnPeriodNumber, columnRunNumber, columnFilePath, columnBeamParticle, columnTargetParticle, columnEnergy,   // UniDbRun
                 columnStartDatetime, columnEndDateTime, columnEventCount, columnFieldVoltage, columnFileSize,                  // UniDbRun
                 columnDetectorName, columnParameterName, columnStartPeriod, columnStartRun, columnEndPeriod, columnEndRun, columnDCSerial, columnChannel,  // UniDbDetectorParameter
                 columnRecordDate, columnShiftLeader, columnType, columnTrigger, columnDaqStatus, columnSp41, columnSp57, columnVkm2, columnError};         // ElogDbRecord

// enumeration of comparison operators for Search Conditions
enum enumConditions{conditionLess, conditionLessOrEqual, conditionEqual, conditionNotEqual, conditionGreater, conditionGreaterOrEqual, conditionLike, conditionNull};

// enumeration 'enumParameterType' is corresponding parameter_type member UniDbParameter
// 0 - boolean, 1 - integer, 2 - double, 3 - string, 4 - int+int array, 5 - int array, 6 - double array, 7 - any binary array, 8 - unsigned int array
// 9 - array with DCH mapping, 10 - array with GEM mapping, 11 - array with GEM pedestal map, 12 - array with Trigger mapping, 13 - array with Lorentz shift
enum enumParameterType{BoolType, IntType, DoubleType, StringType, IIArrayType, IntArrayType, DoubleArrayType, BinaryArrayType, UIntArrayType,   // base types
                       DchMapArrayType, GemMapArrayType, GemPedestalArrayType, TriggerMapArrayType, LorentzShiftArrayType, ErrorType = 999};                           // detector-dependent types

struct IIStructure
{
    int int_1;
    int int_2;
};//__attribute__((packed));

struct DchMapStructure
{
    int plane;
    int group;
    unsigned int crate;
    int slot;
    int channel_low;
    int channel_high;
};

struct GemMapStructure
{
    unsigned int serial;
    int id;
    int station;
    int channel_low;
    int channel_high;
    int hotZone;
};

struct GemPedestalStructure
{
    unsigned int serial;
    int channel;
    int pedestal;
    int noise;
};

struct TriggerMapStructure
{
    unsigned int serial;
    unsigned int slot;
    int channel;
};

struct LorentzShiftStructure
{
    int number;
    double ls[3];
};


#endif // DB_STRUCTURES_H
// ----------------------------------------------------------------------
//                    UniDbRunPeriod header file 
//                      Generated 05-11-2015 
// ----------------------------------------------------------------------

/** db_classes/UniDbRunPeriod.h 
 ** Class for the table: run_period 
 **/ 

#ifndef UNIDBRUNPERIOD_H 
#define UNIDBRUNPERIOD_H 1 

#include "TString.h"
#include "TDatime.h"

#include "UniDbConnection.h"
#include "db_structures.h"

class UniDbRunPeriod
{
 private:
	/* GENERATED PRIVATE MEMBERS (SHOULDN'T BE CHANGED MANUALLY) */
	/// connection to the database
	UniDbConnection* connectionUniDb;

	/// period number
	int i_period_number;
	/// start datetime
	TDatime dt_start_datetime;
	/// end datetime
	TDatime* dt_end_datetime;

	//Constructor
	UniDbRunPeriod(UniDbConnection* connUniDb, int period_number, TDatime start_datetime, TDatime* end_datetime);
	/* END OF PRIVATE GENERATED PART (SHOULDN'T BE CHANGED MANUALLY) */

 public:
	/* GENERATED PUBLIC MEMBERS (SHOULDN'T BE CHANGED MANUALLY) */
	virtual ~UniDbRunPeriod(); // Destructor

	// static class functions
	/// add new run period to the database
	static UniDbRunPeriod* CreateRunPeriod(int period_number, TDatime start_datetime, TDatime* end_datetime);
	/// get run period from the database
	static UniDbRunPeriod* GetRunPeriod(int period_number);
	/// check run period exists in the database
	static bool CheckRunPeriodExists(int period_number);
	/// delete run period from the database
	static int DeleteRunPeriod(int period_number);
	/// print all run periods
	static int PrintAll();

	// Getters
	/// get period number of the current run period
	int GetPeriodNumber() {return i_period_number;}
	/// get start datetime of the current run period
	TDatime GetStartDatetime() {return dt_start_datetime;}
	/// get end datetime of the current run period
	TDatime* GetEndDatetime() {if (dt_end_datetime == NULL) return NULL; else return new TDatime(*dt_end_datetime);}

	// Setters
	/// set period number of the current run period
	int SetPeriodNumber(int period_number);
	/// set start datetime of the current run period
	int SetStartDatetime(TDatime start_datetime);
	/// set end datetime of the current run period
	int SetEndDatetime(TDatime* end_datetime);
	/// print information about current run period
	void Print();
	/* END OF PUBLIC GENERATED PART (SHOULDN'T BE CHANGED MANUALLY) */

    /// get numbers of runs existing in the Database for a selected period
    /// \param[in] start_period start period number for selected run numbers' range
    /// \param[in] start_run start run number for selected run numbers' range
    /// \param[in] end_period end period number for selected run numbers' range
    /// \param[in] end_run end run number for selected run numbers' range
    /// \param[out] run pairs (period number+run numbers) of the really existing runs for a selected range (from start to end)
    /// \return size of 'run_numbers' array. if size < 0, return value corresponds to error number
    static int GetRunNumbers(int period_number, UniqueRunNumber*& run_numbers);

 ClassDef(UniDbRunPeriod,1);
};

#endif
// ----------------------------------------------------------------------
//                    UniDbRun header file 
//                      Generated 05-11-2015 
// ----------------------------------------------------------------------

/** db_classes/UniDbRun.h 
 ** Class for the table: run_
 **/

#ifndef UNIDBRUN_H 
#define UNIDBRUN_H 1 

#include "TString.h"
#include "TDatime.h"
#include "TObjArray.h"

#include "UniDbConnection.h"
#include "UniDbSearchCondition.h"
#include "db_structures.h"

class UniDbRun
{
 private:
	/* GENERATED PRIVATE MEMBERS (SHOULDN'T BE CHANGED MANUALLY) */
	/// connection to the database
	UniDbConnection* connectionUniDb;

	/// period number
	int i_period_number;
	/// run number
	int i_run_number;
	/// file path
	TString str_file_path;
	/// beam particle
	TString str_beam_particle;
	/// target particle
	TString* str_target_particle;
	/// energy
	double* d_energy;
	/// start datetime
	TDatime dt_start_datetime;
	/// end datetime
	TDatime* dt_end_datetime;
	/// event count
	int* i_event_count;
	/// field voltage
	double* d_field_voltage;
	/// file size
	double* d_file_size;
	/// geometry id
	int* i_geometry_id;

	//Constructor
	UniDbRun(UniDbConnection* connUniDb, int period_number, int run_number, TString file_path, TString beam_particle, TString* target_particle, double* energy, TDatime start_datetime, TDatime* end_datetime, int* event_count, double* field_voltage, double* file_size, int* geometry_id);
	/* END OF PRIVATE GENERATED PART (SHOULDN'T BE CHANGED MANUALLY) */

 public:
	/* GENERATED PUBLIC MEMBERS (SHOULDN'T BE CHANGED MANUALLY) */
	virtual ~UniDbRun(); // Destructor

	// static class functions
	/// add new run to the database
	static UniDbRun* CreateRun(int period_number, int run_number, TString file_path, TString beam_particle, TString* target_particle, double* energy, TDatime start_datetime, TDatime* end_datetime, int* event_count, double* field_voltage, double* file_size, int* geometry_id);
	/// get run from the database
	static UniDbRun* GetRun(int period_number, int run_number);
	/// get run from the database
	static UniDbRun* GetRun(TString file_path);
	/// check run exists in the database
	static bool CheckRunExists(int period_number, int run_number);
	/// check run exists in the database
	static bool CheckRunExists(TString file_path);
	/// delete run from the database
	static int DeleteRun(int period_number, int run_number);
	/// delete run from the database
	static int DeleteRun(TString file_path);
	/// print all runs
	static int PrintAll();

	// Getters
	/// get period number of the current run
	int GetPeriodNumber() {return i_period_number;}
	/// get run number of the current run
	int GetRunNumber() {return i_run_number;}
	/// get file path of the current run
	TString GetFilePath() {return str_file_path;}
	/// get beam particle of the current run
	TString GetBeamParticle() {return str_beam_particle;}
	/// get target particle of the current run
	TString* GetTargetParticle() {if (str_target_particle == NULL) return NULL; else return new TString(*str_target_particle);}
	/// get energy of the current run
	double* GetEnergy() {if (d_energy == NULL) return NULL; else return new double(*d_energy);}
	/// get start datetime of the current run
	TDatime GetStartDatetime() {return dt_start_datetime;}
	/// get end datetime of the current run
	TDatime* GetEndDatetime() {if (dt_end_datetime == NULL) return NULL; else return new TDatime(*dt_end_datetime);}
	/// get event count of the current run
	int* GetEventCount() {if (i_event_count == NULL) return NULL; else return new int(*i_event_count);}
	/// get field voltage of the current run
	double* GetFieldVoltage() {if (d_field_voltage == NULL) return NULL; else return new double(*d_field_voltage);}
	/// get file size of the current run
	double* GetFileSize() {if (d_file_size == NULL) return NULL; else return new double(*d_file_size);}
	/// get geometry id of the current run
	int* GetGeometryId() {if (i_geometry_id == NULL) return NULL; else return new int(*i_geometry_id);}

	// Setters
	/// set period number of the current run
	int SetPeriodNumber(int period_number);
	/// set run number of the current run
	int SetRunNumber(int run_number);
	/// set file path of the current run
	int SetFilePath(TString file_path);
	/// set beam particle of the current run
	int SetBeamParticle(TString beam_particle);
	/// set target particle of the current run
	int SetTargetParticle(TString* target_particle);
	/// set energy of the current run
	int SetEnergy(double* energy);
	/// set start datetime of the current run
	int SetStartDatetime(TDatime start_datetime);
	/// set end datetime of the current run
	int SetEndDatetime(TDatime* end_datetime);
	/// set event count of the current run
	int SetEventCount(int* event_count);
	/// set field voltage of the current run
	int SetFieldVoltage(double* field_voltage);
	/// set file size of the current run
	int SetFileSize(double* file_size);
	/// set geometry id of the current run
	int SetGeometryId(int* geometry_id);
	/// print information about current run
	void Print();
	/* END OF PUBLIC GENERATED PART (SHOULDN'T BE CHANGED MANUALLY) */

	// static class functions (added by user request)
	/// get numbers of runs existing in the Database for a selected range
    /// \param[in] start_period start period number for selected run numbers' range
    /// \param[in] start_run start run number for selected run numbers' range
    /// \param[in] end_period end period number for selected run numbers' range
    /// \param[in] end_run end run number for selected run numbers' range
    /// \param[out] run pairs (period number+run numbers) of the really existing runs for a selected range (from start to end)
	/// \return size of 'run_numbers' array. if size < 0, return value corresponds to error number
    static int GetRunNumbers(int start_period, int start_run, int end_period, int end_run, UniqueRunNumber*& run_numbers);
	/// get all numbers of existing runs in the Database
    /// \param[out] run_numbers pairs (period number+run numbers) of the really existing runs for a selected range (from start to end)
	/// \return size of 'run_numbers' array. if size < 0, return value corresponds to error number
    static int GetRunNumbers(UniqueRunNumber*& run_numbers);
	/// set geometry binary data (geometry file's data) for runs from start_run_number to end_run_number
    static int SetRootGeometry(int start_period, int start_run, int end_period, int end_run, unsigned char* root_geometry, Long_t size_root_geometry);
	/// get geometry binary data (geometry file's data) for selected run number
    static int GetRootGeometry(int period_number, int run_number, unsigned char*& root_geometry, Long_t& size_root_geometry);
	/// write geometry file for runs from start_run_number to end_run_number to the database
    static int WriteGeometryFile(int start_period, int start_run, int end_period, int end_run, const char* geo_file_path);
	/// read geometry file for selected run number from the database
    static int ReadGeometryFile(int period_number, int run_number, char* geo_file_path);
	/// get runs corresponding to the specified single condition
	static TObjArray* Search(const UniDbSearchCondition& search_condition);
	/// get runs corresponding to the specified (vector) conditions
	static TObjArray* Search(const TObjArray& search_conditions);
    /// get number of the closest run below the given one
    static UniqueRunNumber* FindPreviousRun(int run_period, int run_number);

	ClassDef(UniDbRun,1);
};

#endif
// ----------------------------------------------------------------------
//                    UniDbRunGeometry header file 
//                      Generated 05-11-2015 
// ----------------------------------------------------------------------

/** db_classes/UniDbRunGeometry.h 
 ** Class for the table: run_geometry 
 **/ 

#ifndef UNIDBRUNGEOMETRY_H 
#define UNIDBRUNGEOMETRY_H 1 

#include "TString.h"
#include "TDatime.h"

#include "UniDbConnection.h"

class UniDbRunGeometry
{
 private:
	/* GENERATED PRIVATE MEMBERS (SHOULDN'T BE CHANGED MANUALLY) */
	/// connection to the database
	UniDbConnection* connectionUniDb;

	/// geometry id
	int i_geometry_id;
	/// root geometry
	unsigned char* blob_root_geometry;
	/// size of root geometry
	Long_t sz_root_geometry;

	//Constructor
	UniDbRunGeometry(UniDbConnection* connUniDb, int geometry_id, unsigned char* root_geometry, Long_t size_root_geometry);
	/* END OF PRIVATE GENERATED PART (SHOULDN'T BE CHANGED MANUALLY) */

 public:
	/* GENERATED PUBLIC MEMBERS (SHOULDN'T BE CHANGED MANUALLY) */
	virtual ~UniDbRunGeometry(); // Destructor

	// static class functions
	/// add new run geometry to the database
	static UniDbRunGeometry* CreateRunGeometry(unsigned char* root_geometry, Long_t size_root_geometry);
	/// get run geometry from the database
	static UniDbRunGeometry* GetRunGeometry(int geometry_id);
	/// check run geometry exists in the database
	static bool CheckRunGeometryExists(int geometry_id);
	/// delete run geometry from the database
	static int DeleteRunGeometry(int geometry_id);
	/// print all run geometrys
	static int PrintAll();

	// Getters
	/// get geometry id of the current run geometry
	int GetGeometryId() {return i_geometry_id;}
	/// get root geometry of the current run geometry
	unsigned char* GetRootGeometry() {unsigned char* tmp_root_geometry = new unsigned char[sz_root_geometry]; memcpy(tmp_root_geometry, blob_root_geometry, sz_root_geometry); return tmp_root_geometry;}
	/// get size of root geometry of the current run geometry
	Long_t GetRootGeometrySize() {return sz_root_geometry;}

	// Setters
	/// set root geometry of the current run geometry
	int SetRootGeometry(unsigned char* root_geometry, Long_t size_root_geometry);
	/// print information about current run geometry
	void Print();
	/* END OF PUBLIC GENERATED PART (SHOULDN'T BE CHANGED MANUALLY) */

 ClassDef(UniDbRunGeometry,1);
};

#endif
// ----------------------------------------------------------------------
//                    UniDbDetector header file 
//                      Generated 05-11-2015 
// ----------------------------------------------------------------------

/** db_classes/UniDbDetector.h 
 ** Class for the table: detector_ 
 **/ 

#ifndef UNIDBDETECTOR_H 
#define UNIDBDETECTOR_H 1 

#include "TString.h"
#include "TDatime.h"

#include "UniDbConnection.h"

class UniDbDetector
{
 private:
	/* GENERATED PRIVATE MEMBERS (SHOULDN'T BE CHANGED MANUALLY) */
	/// connection to the database
	UniDbConnection* connectionUniDb;

	/// detector name
	TString str_detector_name;
	/// description
	TString* str_description;

	//Constructor
	UniDbDetector(UniDbConnection* connUniDb, TString detector_name, TString* description);
	/* END OF PRIVATE GENERATED PART (SHOULDN'T BE CHANGED MANUALLY) */

 public:
	/* GENERATED PUBLIC MEMBERS (SHOULDN'T BE CHANGED MANUALLY) */
	virtual ~UniDbDetector(); // Destructor

	// static class functions
	/// add new detector to the database
	static UniDbDetector* CreateDetector(TString detector_name, TString* description);
	/// get detector from the database
	static UniDbDetector* GetDetector(TString detector_name);
	/// check detector exists in the database
	static bool CheckDetectorExists(TString detector_name);
	/// delete detector from the database
	static int DeleteDetector(TString detector_name);
	/// print all detectors
	static int PrintAll();

	// Getters
	/// get detector name of the current detector
	TString GetDetectorName() {return str_detector_name;}
	/// get description of the current detector
	TString* GetDescription() {if (str_description == NULL) return NULL; else return new TString(*str_description);}

	// Setters
	/// set detector name of the current detector
	int SetDetectorName(TString detector_name);
	/// set description of the current detector
	int SetDescription(TString* description);
	/// print information about current detector
	void Print();
	/* END OF PUBLIC GENERATED PART (SHOULDN'T BE CHANGED MANUALLY) */

 ClassDef(UniDbDetector,1);
};

#endif
// ----------------------------------------------------------------------
//                    UniDbParameter header file 
//                      Generated 05-11-2015 
// ----------------------------------------------------------------------

/** db_classes/UniDbParameter.h 
 ** Class for the table: parameter_ 
 **/ 

#ifndef UNIDBPARAMETER_H 
#define UNIDBPARAMETER_H 1 

#include "TString.h"
#include "TDatime.h"

#include "UniDbConnection.h"
#include "db_structures.h"

#include <iostream>
using namespace std;

class UniDbParameter
{
 private:
	/* GENERATED PRIVATE MEMBERS (SHOULDN'T BE CHANGED MANUALLY) */
	/// connection to the database
	UniDbConnection* connectionUniDb;

	/// parameter id
	int i_parameter_id;
	/// parameter name
	TString str_parameter_name;
	/// parameter type
	int i_parameter_type;

	//Constructor
	UniDbParameter(UniDbConnection* connUniDb, int parameter_id, TString parameter_name, int parameter_type);
	/* END OF PRIVATE GENERATED PART (SHOULDN'T BE CHANGED MANUALLY) */

 public:
	/* GENERATED PUBLIC MEMBERS (SHOULDN'T BE CHANGED MANUALLY) */
	virtual ~UniDbParameter(); // Destructor

	// static class functions
	/// add new parameter to the database
	static UniDbParameter* CreateParameter(TString parameter_name, int parameter_type);
	/// get parameter from the database
	static UniDbParameter* GetParameter(int parameter_id);
	/// get parameter from the database
	static UniDbParameter* GetParameter(TString parameter_name);
	/// check parameter exists in the database
	static bool CheckParameterExists(int parameter_id);
	/// check parameter exists in the database
	static bool CheckParameterExists(TString parameter_name);
	/// delete parameter from the database
	static int DeleteParameter(int parameter_id);
	/// delete parameter from the database
	static int DeleteParameter(TString parameter_name);
	/// print all parameters
	static int PrintAll();

	// Getters
	/// get parameter id of the current parameter
	int GetParameterId() {return i_parameter_id;}
	/// get parameter name of the current parameter
	TString GetParameterName() {return str_parameter_name;}
	/// get parameter type of the current parameter
	int GetParameterType() {return i_parameter_type;}

	// Setters
	/// set parameter name of the current parameter
	int SetParameterName(TString parameter_name);
	/// set parameter type of the current parameter
	int SetParameterType(int parameter_type);
	/// print information about current parameter
	void Print();
	/* END OF PUBLIC GENERATED PART (SHOULDN'T BE CHANGED MANUALLY) */

    // enumeration 'enumParameterType' is corresponding parameter_type member UniDbParameter, you can see it in db_structures
    // enum enumParameterType{BoolType, IntType, DoubleType, StringType, IIArrayType, IntArrayType, DoubleArrayType, BinaryArrayType, ErrorType}
    static bool CheckAndGetParameterID(TSQLServer* uni_db, TString parameter_name, enumParameterType enum_parameter_type, int& parameter_id);

 ClassDef(UniDbParameter,1);
};

#endif
// ----------------------------------------------------------------------
//                    UniDbDetectorParameter header file 
//                      Generated 05-11-2015 
// ----------------------------------------------------------------------

/** db_classes/UniDbDetectorParameter.h 
 ** Class for the table: detector_parameter
 **/

#ifndef UNIDBDETECTORPARAMETER_H 
#define UNIDBDETECTORPARAMETER_H 1 

#include "TString.h"
#include "TDatime.h"
#include "TObjArray.h"

#include "UniDbConnection.h"
#include "UniDbSearchCondition.h"
#include "UniDbParameter.h"

// for templates
//#include <string>
//#include <cstdlib>
//#include <cxxabi.h>

#include <iostream>
using namespace std;

class UniDbDetectorParameter
{
 private:
	/* GENERATED PRIVATE MEMBERS (SHOULDN'T BE CHANGED MANUALLY) */
	/// connection to the database
	UniDbConnection* connectionUniDb;

	/// value id
	int i_value_id;
	/// detector name
	TString str_detector_name;
	/// parameter id
	int i_parameter_id;
	/// start period
	int i_start_period;
	/// start run
	int i_start_run;
	/// end period
	int i_end_period;
	/// end run
	int i_end_run;
	/// dc serial
	unsigned int* ui_dc_serial;
	/// channel
	int* i_channel;
	/// parameter value
	unsigned char* blob_parameter_value;
	/// size of parameter value
	Long_t sz_parameter_value;

	//Constructor
	UniDbDetectorParameter(UniDbConnection* connUniDb, int value_id, TString detector_name, int parameter_id, int start_period, int start_run, int end_period, int end_run, unsigned int* dc_serial, int* channel, unsigned char* parameter_value, Long_t size_parameter_value);
	/* END OF PRIVATE GENERATED PART (SHOULDN'T BE CHANGED MANUALLY) */

	// for templates
	enumParameterType GetParameterTypeByString(string type_name, bool is_array);

 public:
	/* GENERATED PUBLIC MEMBERS (SHOULDN'T BE CHANGED MANUALLY) */
	virtual ~UniDbDetectorParameter(); // Destructor

	// static class functions
	/// add new detector parameter to the database
	static UniDbDetectorParameter* CreateDetectorParameter(TString detector_name, int parameter_id, int start_period, int start_run, int end_period, int end_run, unsigned int* dc_serial, int* channel, unsigned char* parameter_value, Long_t size_parameter_value);
	/// get detector parameter from the database
	static UniDbDetectorParameter* GetDetectorParameter(int value_id);
	/// check detector parameter exists in the database
	static bool CheckDetectorParameterExists(int value_id);
	/// delete detector parameter from the database
	static int DeleteDetectorParameter(int value_id);
	/// print all detector parameters
	static int PrintAll();

	// Getters
	/// get value id of the current detector parameter
	int GetValueId() {return i_value_id;}
	/// get detector name of the current detector parameter
	TString GetDetectorName() {return str_detector_name;}
	/// get parameter id of the current detector parameter
	int GetParameterId() {return i_parameter_id;}
	/// get start period of the current detector parameter
	int GetStartPeriod() {return i_start_period;}
	/// get start run of the current detector parameter
	int GetStartRun() {return i_start_run;}
	/// get end period of the current detector parameter
	int GetEndPeriod() {return i_end_period;}
	/// get end run of the current detector parameter
	int GetEndRun() {return i_end_run;}
	/// get dc serial of the current detector parameter
	unsigned int* GetDcSerial() {if (ui_dc_serial == NULL) return NULL; else return new unsigned int(*ui_dc_serial);}
	/// get channel of the current detector parameter
	int* GetChannel() {if (i_channel == NULL) return NULL; else return new int(*i_channel);}
	/// get parameter value of the current detector parameter
	unsigned char* GetParameterValue() {unsigned char* tmp_parameter_value = new unsigned char[sz_parameter_value]; memcpy(tmp_parameter_value, blob_parameter_value, sz_parameter_value); return tmp_parameter_value;}
	/// get size of parameter value of the current detector parameter
	Long_t GetParameterValueSize() {return sz_parameter_value;}

	// Setters
	/// set detector name of the current detector parameter
	int SetDetectorName(TString detector_name);
	/// set parameter id of the current detector parameter
	int SetParameterId(int parameter_id);
	/// set start period of the current detector parameter
	int SetStartPeriod(int start_period);
	/// set start run of the current detector parameter
	int SetStartRun(int start_run);
	/// set end period of the current detector parameter
	int SetEndPeriod(int end_period);
	/// set end run of the current detector parameter
	int SetEndRun(int end_run);
	/// set dc serial of the current detector parameter
	int SetDcSerial(unsigned int* dc_serial);
	/// set channel of the current detector parameter
	int SetChannel(int* channel);
	/// set parameter value of the current detector parameter
	int SetParameterValue(unsigned char* parameter_value, Long_t size_parameter_value);
	/// print information about current detector parameter
	void Print();
	/* END OF PUBLIC GENERATED PART (SHOULDN'T BE CHANGED MANUALLY) */

    /// get common detector parameter value
    static UniDbDetectorParameter* GetDetectorParameter(TString detector_name, TString parameter_name, int period_number, int run_number);
	/// get TDC/ADC parameter value
    static UniDbDetectorParameter* GetDetectorParameter(TString detector_name, TString parameter_name, int period_number, int run_number, unsigned int dc_serial, int channel);

    /// delete common detector parameter value
    static int DeleteDetectorParameter(TString detector_name, TString parameter_name, int start_period, int start_run, int end_period, int end_run);
    /// delete TDC/ADC parameter value
    static int DeleteDetectorParameter(TString detector_name, TString parameter_name, int start_period, int start_run, int end_period, int end_run, unsigned int dc_serial, int channel);

	/// get channel count for TDC/ADC parameter value
    static int GetChannelCount(TString detector_name, TString parameter_name, int period_number, int run_number, unsigned int dc_serial);

    /// get parameter name of the current detector parameter
    TString GetParameterName();

    /// get start period and run of the current detector parameter
    void GetStart(int& start_period, int& start_run);
    /// get end period and run of the current detector parameter
    void GetEnd(int& end_period, int& end_run);
    /// set start period and run of the current detector parameter
    int SetStart(int start_period, int start_run);
    /// set end period and run of the current detector parameter
    int SetEnd(int end_period, int end_run);

    /// write ROOT file with binary detector parameter (with given detector and parameter names)
    /// to the database from start run_number to end run_number
    static int WriteRootFile(int start_period, int start_run, int end_period, int end_run, const char* detector_name, const char* parameter_name, const char* root_file_path);
    /// read ROOT file with binary detector parameter (with given detector and parameter names)
    /// from the database for a selected run number
    static int ReadRootFile(int period_number, int run_number, const char* detector_name, const char* parameter_name, const char* root_file_path);

	// common function for adding common parameter value
    static UniDbDetectorParameter* CreateDetectorParameter(TString detector_name, TString parameter_name, int start_period, int start_run, int end_period, int end_run,
                                                               unsigned char* parameter_value, Long_t size_parameter_value, enumParameterType enum_parameter_type);
	// common function for adding TDC/ADC parameter value
    static UniDbDetectorParameter* CreateDetectorParameter(TString detector_name, TString parameter_name, int start_period, int start_run, int end_period, int end_run,
                                                               unsigned int dc_serial, int channel, unsigned char* parameter_value, Long_t size_parameter_value, enumParameterType enum_parameter_type);

	/* template function for adding common parameter value as single value
		template<class T>
                static UniDbDetectorParameter* CreateDetectorParameter(TString detector_name, TString parameter_name, int start_period, int start_run, int end_period, int end_run, T parameter_value)
		{
			// define string name of T class type
			int status;
			string tname = typeid(T).name();
			char* demangled_name = abi::__cxa_demangle(tname.c_str(), NULL, NULL, &status);
			if (status == 0)
			{
				tname = demangled_name;
				free(demangled_name);
			}
			enumParameterType enum_parameter_type = GetParameterTypeByString(tname, false);

			// copy parameter value to new binary array
			Long_t size_parameter_value = sizeof(T);
			T* p_parameter_value = new T[1];
			p_parameter_value[0] = parameter_value;

			UniDbDetectorParameter* pDetectorParameter = UniDbDetectorParameter::CreateDetectorParameter(detector_name, parameter_name, start_run, end_run,
																										 (unsigned char*)p_parameter_value, size_parameter_value, enum_parameter_type);
			if (pDetectorParameter == 0x00)
				delete [] p_parameter_value;

			return pDetectorParameter;
		}*/

	/* template function for adding common parameter value presented as array (common)
		template<class T>
                static UniDbDetectorParameter* CreateDetectorParameter(TString detector_name, TString parameter_name, int start_period, int start_run, int end_period, int end_run, T* parameter_value, Long_t element_count, enumParameterType enum_parameter_type)
		{
			// define string name of T class type
			int status;
			string tname = typeid(T).name();
			char* demangled_name = abi::__cxa_demangle(tname.c_str(), NULL, NULL, &status);
			if (status == 0)
			{
				tname = demangled_name;
				free(demangled_name);
			}
			enumParameterType enum_parameter_type = GetParameterTypeByString(tname, true);

			Long_t size_parameter_value = element_count * sizeof(T);
			unsigned char* p_parameter_value = new unsigned char[size_parameter_value];
			memcpy(p_parameter_value, parameter_value, size_parameter_value);

			UniDbDetectorParameter* pDetectorParameter = UniDbDetectorParameter::CreateDetectorParameter(detector_name, parameter_name, start_run, end_run,
																										 p_parameter_value, size_parameter_value, enum_parameter_type);
			if (pDetectorParameter == 0x00)
				delete [] p_parameter_value;

			return pDetectorParameter;
		}*/

	// common function for getting parameter value
    unsigned char* GetUNC(enumParameterType enum_parameter_type, bool isCheckType = false);

	// common function for setting parameter value
	int SetUNC(unsigned char* p_parameter_value, Long_t size_parameter_value);

	// function set with different types
    /// add new record - detector parameter value as BOOL
    static UniDbDetectorParameter* CreateDetectorParameter(TString detector_name, TString parameter_name, int start_period, int start_run, int end_period, int end_run,
                                                               bool parameter_value);
    /// add new record - TDC/ADC parameter value as BOOL
    static UniDbDetectorParameter* CreateDetectorParameter(TString detector_name, TString parameter_name, int start_period, int start_run, int end_period, int end_run,
                                                               unsigned int dc_serial, int channel, bool parameter_value);
	/// get boolean value of parameter
	bool GetBool();
	/// set boolean value to parameter
	int SetBool(bool parameter_value);

    /// add new record - detector parameter value as INTEGER
    static UniDbDetectorParameter* CreateDetectorParameter(TString detector_name, TString parameter_name, int start_period, int start_run, int end_period, int end_run,
                                                               int parameter_value);
    /// add new record - TDC/ADC parameter value as INTEGER
    static UniDbDetectorParameter* CreateDetectorParameter(TString detector_name, TString parameter_name, int start_period, int start_run, int end_period, int end_run,
                                                               unsigned int dc_serial, int channel, int parameter_value);
	/// get integer value of parameter
	int GetInt();
	/// set integer value to parameter
	int SetInt(int parameter_value);

	/// add new record - detector parameter value as DOUBLE
    static UniDbDetectorParameter* CreateDetectorParameter(TString detector_name, TString parameter_name, int start_period, int start_run, int end_period, int end_run,
                                                               double parameter_value);
	/// add new record - TDC/ADC parameter value as DOUBLE
    static UniDbDetectorParameter* CreateDetectorParameter(TString detector_name, TString parameter_name, int start_period, int start_run, int end_period, int end_run,
                                                               unsigned int dc_serial, int channel, double parameter_value);
	/// get double value of parameter
	double GetDouble();
	/// set double value to parameter
	int SetDouble(double parameter_value);

	/// add new record - detector parameter value as STRING
    static UniDbDetectorParameter* CreateDetectorParameter(TString detector_name, TString parameter_name, int start_period, int start_run, int end_period, int end_run,
                                                               TString parameter_value);
	/// add new record - detector parameter value as STRING
    static UniDbDetectorParameter* CreateDetectorParameter(TString detector_name, TString parameter_name, int start_period, int start_run, int end_period, int end_run,
                                                               unsigned int dc_serial, int channel, TString parameter_value);
	/// get string value of parameter
	TString GetString();
	/// set string value to parameter
	int SetString(TString parameter_value);

	/// add new record - detector parameter value as Integer Array
    static UniDbDetectorParameter* CreateDetectorParameter(TString detector_name, TString parameter_name, int start_period, int start_run, int end_period, int end_run,
                                                               int* parameter_value, int element_count);
	/// add new record - detector parameter value as Integer Array
    static UniDbDetectorParameter* CreateDetectorParameter(TString detector_name, TString parameter_name, int start_period, int start_run, int end_period, int end_run,
                                                               unsigned int dc_serial, int channel, int* parameter_value, int element_count);
	/// get Integer Array for parameter
	int GetIntArray(int*& parameter_value, int& element_count);
	/// set Integer Array array for parameter
	int SetIntArray(int* parameter_value, int element_count);

	/// add new record - detector parameter value as Double Array
    static UniDbDetectorParameter* CreateDetectorParameter(TString detector_name, TString parameter_name, int start_period, int start_run, int end_period, int end_run,
                                                               double* parameter_value, int element_count);
	/// add new record - detector parameter value as Double Array
    static UniDbDetectorParameter* CreateDetectorParameter(TString detector_name, TString parameter_name, int start_period, int start_run, int end_period, int end_run,
                                                               unsigned int dc_serial, int channel, double* parameter_value, int element_count);
	/// get Double Array for parameter
	int GetDoubleArray(double*& parameter_value, int& element_count);
	/// set Double Array array for parameter
	int SetDoubleArray(double* parameter_value, int element_count);

    /// add new record - detector parameter value as Binary Array
    static UniDbDetectorParameter* CreateDetectorParameter(TString detector_name, TString parameter_name, int start_period, int start_run, int end_period, int end_run,
                                                               unsigned char* parameter_value, int byte_count);
    /// add new record - detector parameter value as Binary Array
    static UniDbDetectorParameter* CreateDetectorParameter(TString detector_name, TString parameter_name, int start_period, int start_run, int end_period, int end_run,
                                                               unsigned int dc_serial, int channel, unsigned char* parameter_value, int byte_count);
    /// get Binary Array for parameter
    int GetBinaryArray(unsigned char*& parameter_value, size_t& byte_count);
    /// set Binary Array array for parameter
    int SetBinaryArray(unsigned char* parameter_value, size_t byte_count);

	/// add new record - detector parameter value as Int+Int Array
    static UniDbDetectorParameter* CreateDetectorParameter(TString detector_name, TString parameter_name, int start_period, int start_run, int end_period, int end_run,
                                                               IIStructure* parameter_value, int element_count);
	/// add new record - detector parameter value as Int+Int Array
    static UniDbDetectorParameter* CreateDetectorParameter(TString detector_name, TString parameter_name, int start_period, int start_run, int end_period, int end_run,
                                                               unsigned int dc_serial, int channel, IIStructure* parameter_value, int element_count);
	/// get Int+Int array for parameter
	int GetIIArray(IIStructure*& parameter_value, int& element_count);
	/// set Int+Int array for parameter
	int SetIIArray(IIStructure* parameter_value, int element_count);

    /// add new record - detector parameter value as Unsigned Integer Array
    static UniDbDetectorParameter* CreateDetectorParameter(TString detector_name, TString parameter_name, int start_period, int start_run, int end_period, int end_run,
                                                               unsigned int* parameter_value, int element_count);
    /// add new record - detector parameter value as Unsigned Integer Array
    static UniDbDetectorParameter* CreateDetectorParameter(TString detector_name, TString parameter_name, int start_period, int start_run, int end_period, int end_run,
                                                               unsigned int dc_serial, int channel, unsigned int* parameter_value, int element_count);
    /// get Unsigned Integer Array for parameter
    int GetUIntArray(unsigned int*& parameter_value, int& element_count);
    /// set Unsigned Integer Array array for parameter
    int SetUIntArray(unsigned int* parameter_value, int element_count);

    /// add new record - detector parameter value as DCH mapping Array
    static UniDbDetectorParameter* CreateDetectorParameter(TString detector_name, TString parameter_name, int start_period, int start_run, int end_period, int end_run,
                                                               DchMapStructure* parameter_value, int element_count);
    /// add new record - detector parameter value as DCH mapping Array
    static UniDbDetectorParameter* CreateDetectorParameter(TString detector_name, TString parameter_name, int start_period, int start_run, int end_period, int end_run,
                                                               unsigned int dc_serial, int channel, DchMapStructure* parameter_value, int element_count);
    /// get DCH mapping Array for parameter
    int GetDchMapArray(DchMapStructure*& parameter_value, int& element_count);
    /// set DCH mapping Array for parameter
    int SetDchMapArray(DchMapStructure* parameter_value, int element_count);

    /// add new record - detector parameter value as GEM mapping Array
    static UniDbDetectorParameter* CreateDetectorParameter(TString detector_name, TString parameter_name, int start_period, int start_run, int end_period, int end_run,
                                                               GemMapStructure* parameter_value, int element_count);
    /// add new record - detector parameter value as GEM mapping Array
    static UniDbDetectorParameter* CreateDetectorParameter(TString detector_name, TString parameter_name, int start_period, int start_run, int end_period, int end_run,
                                                               unsigned int dc_serial, int channel, GemMapStructure* parameter_value, int element_count);
    /// get GEM mapping Array for parameter
    int GetGemMapArray(GemMapStructure*& parameter_value, int& element_count);
    /// set GEM mapping Array for parameter
    int SetGemMapArray(GemMapStructure* parameter_value, int element_count);

    /// add new record - detector parameter value as GEM pedestal map Array
    static UniDbDetectorParameter* CreateDetectorParameter(TString detector_name, TString parameter_name, int start_period, int start_run, int end_period, int end_run,
                                                           GemPedestalStructure* parameter_value, int element_count);
    /// add new record - detector parameter value as GEM pedestal map Array
    static UniDbDetectorParameter* CreateDetectorParameter(TString detector_name, TString parameter_name, int start_period, int start_run, int end_period, int end_run,
                                                           unsigned int dc_serial, int channel, GemPedestalStructure* parameter_value, int element_count);
    /// get GEM pedestal map Array for parameter
    int GetGemPedestalArray(GemPedestalStructure*& parameter_value, int& element_count);
    /// set GEM pedestal map Array for parameter
    int SetGemPedestalArray(GemPedestalStructure* parameter_value, int element_count);

    /// add new record - detector parameter value as Trigger mapping Array
    static UniDbDetectorParameter* CreateDetectorParameter(TString detector_name, TString parameter_name, int start_period, int start_run, int end_period, int end_run,
                                                           TriggerMapStructure* parameter_value, int element_count);
    /// add new record - detector parameter value as Trigger mapping Array
    static UniDbDetectorParameter* CreateDetectorParameter(TString detector_name, TString parameter_name, int start_period, int start_run, int end_period, int end_run,
                                                           unsigned int dc_serial, int channel, TriggerMapStructure* parameter_value, int element_count);
    /// get Trigger mapping Array for parameter
    int GetTriggerMapArray(TriggerMapStructure*& parameter_value, int& element_count);
    /// set Trigger mapping Array for parameter
    int SetTriggerMapArray(TriggerMapStructure* parameter_value, int element_count);

    /// add new record - detector parameter value as Lorents Shift Array
    static UniDbDetectorParameter* CreateDetectorParameter(TString detector_name, TString parameter_name, int start_period, int start_run, int end_period, int end_run,
                                                           LorentzShiftStructure* parameter_value, int element_count);
    /// add new record - detector parameter value as Lorents Shift Array
    static UniDbDetectorParameter* CreateDetectorParameter(TString detector_name, TString parameter_name, int start_period, int start_run, int end_period, int end_run,
                                                           unsigned int dc_serial, int channel, LorentzShiftStructure* parameter_value, int element_count);
    /// get Lorents Shift Array for parameter
    int GetLorentzShiftArray(LorentzShiftStructure*& parameter_value, int& element_count);
    /// set Lorents Shift Array for parameter
    int SetLorentzShiftArray(LorentzShiftStructure* parameter_value, int element_count);

	/// get parameters' values corresponding to the specified single condition
	static TObjArray* Search(const UniDbSearchCondition& search_condition);
	/// get parameters' values corresponding to the specified (vector) conditions
	static TObjArray* Search(const TObjArray& search_conditions);

    /// parse detector parameter's values and write them to the database:
    /// txtFile - path to the text file with parameter values separated by spaces or tabs, e.g.: "value1 value2..."
    ///           if line is started with '#' symbol - it will be skipped (as comments)
    /// detector_name - detector corresponding to the parameter values
    /// parameter name - parameter filled by values
    /// start_period - start period of validity range for the parameter values
    /// start_run - start run of validity range for the parameter values
    /// end_period - end period of validity range for the parameter values
    /// end_run - end run of validity range for the parameter values
    /// function returns row count added to the database
    static int ParseTxt(TString text_file, TString detector_name, TString parameter_name, int start_period, int start_run, int end_period, int end_run, bool isSerialChannel = false);

	ClassDef(UniDbDetectorParameter,1);
};

/*// for template
//template<class T>
//static void template_example(T a)
//{
//    std::cout<<a<<std::endl;
//    return;
//}

#ifdef __CINT__
  #pragma link C++ function UniDbDetectorParameter::CreateDetectorParameter(TString, TString, int, int, bool);
#else
  template UniDbDetectorParameter* UniDbDetectorParameter::CreateDetectorParameter(TString, TString, int, int, bool);
#endif*/

#endif
// ----------------------------------------------------------------------
//                    UniDbSimulationFile header file 
//                      Generated 05-11-2015 
// ----------------------------------------------------------------------

/** db_classes/UniDbSimulationFile.h 
 ** Class for the table: simulation_file 
 **/ 

#ifndef UNIDBSIMULATIONFILE_H 
#define UNIDBSIMULATIONFILE_H 1 

#include "TString.h"
#include "TDatime.h"

#include "UniDbConnection.h"

class UniDbSimulationFile
{
 private:
	/* GENERATED PRIVATE MEMBERS (SHOULDN'T BE CHANGED MANUALLY) */
	/// connection to the database
	UniDbConnection* connectionUniDb;

	/// file id
	int i_file_id;
	/// file path
	TString str_file_path;
	/// generator name
	TString str_generator_name;
	/// beam particle
	TString str_beam_particle;
	/// target particle
	TString* str_target_particle;
	/// energy
	double* d_energy;
	/// centrality
	TString str_centrality;
	/// event count
	int* i_event_count;
	/// file desc
	TString* str_file_desc;
	/// file size
	double* d_file_size;

	//Constructor
	UniDbSimulationFile(UniDbConnection* connUniDb, int file_id, TString file_path, TString generator_name, TString beam_particle, TString* target_particle, double* energy, TString centrality, int* event_count, TString* file_desc, double* file_size);
	/* END OF PRIVATE GENERATED PART (SHOULDN'T BE CHANGED MANUALLY) */

 public:
	/* GENERATED PUBLIC MEMBERS (SHOULDN'T BE CHANGED MANUALLY) */
	virtual ~UniDbSimulationFile(); // Destructor

	// static class functions
	/// add new simulation file to the database
	static UniDbSimulationFile* CreateSimulationFile(TString file_path, TString generator_name, TString beam_particle, TString* target_particle, double* energy, TString centrality, int* event_count, TString* file_desc, double* file_size);
	/// get simulation file from the database
	static UniDbSimulationFile* GetSimulationFile(int file_id);
	/// get simulation file from the database
	static UniDbSimulationFile* GetSimulationFile(TString file_path);
	/// check simulation file exists in the database
	static bool CheckSimulationFileExists(int file_id);
	/// check simulation file exists in the database
	static bool CheckSimulationFileExists(TString file_path);
	/// delete simulation file from the database
	static int DeleteSimulationFile(int file_id);
	/// delete simulation file from the database
	static int DeleteSimulationFile(TString file_path);
	/// print all simulation files
	static int PrintAll();

	// Getters
	/// get file id of the current simulation file
	int GetFileId() {return i_file_id;}
	/// get file path of the current simulation file
	TString GetFilePath() {return str_file_path;}
	/// get generator name of the current simulation file
	TString GetGeneratorName() {return str_generator_name;}
	/// get beam particle of the current simulation file
	TString GetBeamParticle() {return str_beam_particle;}
	/// get target particle of the current simulation file
	TString* GetTargetParticle() {if (str_target_particle == NULL) return NULL; else return new TString(*str_target_particle);}
	/// get energy of the current simulation file
	double* GetEnergy() {if (d_energy == NULL) return NULL; else return new double(*d_energy);}
	/// get centrality of the current simulation file
	TString GetCentrality() {return str_centrality;}
	/// get event count of the current simulation file
	int* GetEventCount() {if (i_event_count == NULL) return NULL; else return new int(*i_event_count);}
	/// get file desc of the current simulation file
	TString* GetFileDesc() {if (str_file_desc == NULL) return NULL; else return new TString(*str_file_desc);}
	/// get file size of the current simulation file
	double* GetFileSize() {if (d_file_size == NULL) return NULL; else return new double(*d_file_size);}

	// Setters
	/// set file path of the current simulation file
	int SetFilePath(TString file_path);
	/// set generator name of the current simulation file
	int SetGeneratorName(TString generator_name);
	/// set beam particle of the current simulation file
	int SetBeamParticle(TString beam_particle);
	/// set target particle of the current simulation file
	int SetTargetParticle(TString* target_particle);
	/// set energy of the current simulation file
	int SetEnergy(double* energy);
	/// set centrality of the current simulation file
	int SetCentrality(TString centrality);
	/// set event count of the current simulation file
	int SetEventCount(int* event_count);
	/// set file desc of the current simulation file
	int SetFileDesc(TString* file_desc);
	/// set file size of the current simulation file
	int SetFileSize(double* file_size);
	/// print information about current simulation file
	void Print();
	/* END OF PUBLIC GENERATED PART (SHOULDN'T BE CHANGED MANUALLY) */

 ClassDef(UniDbSimulationFile,1);
};

#endif
// ----------------------------------------------------------------------
//                    ElogDbPerson header file 
//                      Generated 27-11-2017 
// ----------------------------------------------------------------------

/** elog_classes/ElogDbPerson.h 
 ** Class for the table: person_ 
 **/ 

#ifndef ELOGDBPERSON_H 
#define ELOGDBPERSON_H 1 

#include "TString.h"
#include "TDatime.h"

#include "UniDbConnection.h"

class ElogDbPerson
{
 private:
	/* GENERATED PRIVATE MEMBERS (SHOULDN'T BE CHANGED MANUALLY) */
	/// connection to the database
	UniDbConnection* connectionUniDb;

	/// person id
	int i_person_id;
	/// person name
	TString str_person_name;
	/// is active
	int i_is_active;

	//Constructor
	ElogDbPerson(UniDbConnection* connUniDb, int person_id, TString person_name, int is_active);
	/* END OF PRIVATE GENERATED PART (SHOULDN'T BE CHANGED MANUALLY) */

 public:
	/* GENERATED PUBLIC MEMBERS (SHOULDN'T BE CHANGED MANUALLY) */
	virtual ~ElogDbPerson(); // Destructor

	// static class functions
	/// add new person to the database
	static ElogDbPerson* CreatePerson(TString person_name, int is_active);
	/// get person from the database
	static ElogDbPerson* GetPerson(int person_id);
	/// get person from the database
	static ElogDbPerson* GetPerson(TString person_name);
	/// check person exists in the database
	static bool CheckPersonExists(int person_id);
	/// check person exists in the database
	static bool CheckPersonExists(TString person_name);
	/// delete person from the database
	static int DeletePerson(int person_id);
	/// delete person from the database
	static int DeletePerson(TString person_name);
	/// print all persons
	static int PrintAll();

	// Getters
	/// get person id of the current person
	int GetPersonId() {return i_person_id;}
	/// get person name of the current person
	TString GetPersonName() {return str_person_name;}
	/// get is active of the current person
	int GetIsActive() {return i_is_active;}

	// Setters
	/// set person name of the current person
	int SetPersonName(TString person_name);
	/// set is active of the current person
	int SetIsActive(int is_active);

	/// print information about current person
	void Print();
	/* END OF PUBLIC GENERATED PART (SHOULDN'T BE CHANGED MANUALLY) */

 ClassDef(ElogDbPerson,1);
};

#endif
// ----------------------------------------------------------------------
//                    ElogDbType header file 
//                      Generated 27-11-2017 
// ----------------------------------------------------------------------

/** elog_classes/ElogDbType.h 
 ** Class for the table: type_ 
 **/ 

#ifndef ELOGDBTYPE_H 
#define ELOGDBTYPE_H 1 

#include "TString.h"
#include "TDatime.h"

#include "UniDbConnection.h"

class ElogDbType
{
 private:
	/* GENERATED PRIVATE MEMBERS (SHOULDN'T BE CHANGED MANUALLY) */
	/// connection to the database
	UniDbConnection* connectionUniDb;

	/// type id
	int i_type_id;
	/// type text
	TString str_type_text;

	//Constructor
	ElogDbType(UniDbConnection* connUniDb, int type_id, TString type_text);
	/* END OF PRIVATE GENERATED PART (SHOULDN'T BE CHANGED MANUALLY) */

 public:
	/* GENERATED PUBLIC MEMBERS (SHOULDN'T BE CHANGED MANUALLY) */
	virtual ~ElogDbType(); // Destructor

	// static class functions
	/// add new type to the database
	static ElogDbType* CreateType(TString type_text);
	/// get type from the database
	static ElogDbType* GetType(int type_id);
	/// get type from the database
	static ElogDbType* GetType(TString type_text);
	/// check type exists in the database
	static bool CheckTypeExists(int type_id);
	/// check type exists in the database
	static bool CheckTypeExists(TString type_text);
	/// delete type from the database
	static int DeleteType(int type_id);
	/// delete type from the database
	static int DeleteType(TString type_text);
	/// print all types
	static int PrintAll();

	// Getters
	/// get type id of the current type
	int GetTypeId() {return i_type_id;}
	/// get type text of the current type
	TString GetTypeText() {return str_type_text;}

	// Setters
	/// set type text of the current type
	int SetTypeText(TString type_text);

	/// print information about current type
	void Print();
	/* END OF PUBLIC GENERATED PART (SHOULDN'T BE CHANGED MANUALLY) */

 ClassDef(ElogDbType,1);
};

#endif
// ----------------------------------------------------------------------
//                    ElogDbTrigger header file 
//                      Generated 27-11-2017 
// ----------------------------------------------------------------------

/** elog_classes/ElogDbTrigger.h 
 ** Class for the table: trigger_ 
 **/ 

#ifndef ELOGDBTRIGGER_H 
#define ELOGDBTRIGGER_H 1 

#include "TString.h"
#include "TDatime.h"

#include "UniDbConnection.h"

class ElogDbTrigger
{
 private:
	/* GENERATED PRIVATE MEMBERS (SHOULDN'T BE CHANGED MANUALLY) */
	/// connection to the database
	UniDbConnection* connectionUniDb;

	/// trigger id
	int i_trigger_id;
	/// trigger info
	TString str_trigger_info;

	//Constructor
	ElogDbTrigger(UniDbConnection* connUniDb, int trigger_id, TString trigger_info);
	/* END OF PRIVATE GENERATED PART (SHOULDN'T BE CHANGED MANUALLY) */

 public:
	/* GENERATED PUBLIC MEMBERS (SHOULDN'T BE CHANGED MANUALLY) */
	virtual ~ElogDbTrigger(); // Destructor

	// static class functions
	/// add new trigger to the database
	static ElogDbTrigger* CreateTrigger(TString trigger_info);
	/// get trigger from the database
	static ElogDbTrigger* GetTrigger(int trigger_id);
	/// get trigger from the database
	static ElogDbTrigger* GetTrigger(TString trigger_info);
	/// check trigger exists in the database
	static bool CheckTriggerExists(int trigger_id);
	/// check trigger exists in the database
	static bool CheckTriggerExists(TString trigger_info);
	/// delete trigger from the database
	static int DeleteTrigger(int trigger_id);
	/// delete trigger from the database
	static int DeleteTrigger(TString trigger_info);
	/// print all triggers
	static int PrintAll();

	// Getters
	/// get trigger id of the current trigger
	int GetTriggerId() {return i_trigger_id;}
	/// get trigger info of the current trigger
	TString GetTriggerInfo() {return str_trigger_info;}

	// Setters
	/// set trigger info of the current trigger
	int SetTriggerInfo(TString trigger_info);

	/// print information about current trigger
	void Print();
	/* END OF PUBLIC GENERATED PART (SHOULDN'T BE CHANGED MANUALLY) */

 ClassDef(ElogDbTrigger,1);
};

#endif
// ----------------------------------------------------------------------
//                    ElogDbBeam header file 
//                      Generated 27-11-2017 
// ----------------------------------------------------------------------

/** elog_classes/ElogDbBeam.h 
 ** Class for the table: beam_ 
 **/ 

#ifndef ELOGDBBEAM_H 
#define ELOGDBBEAM_H 1 

#include "TString.h"
#include "TDatime.h"

#include "UniDbConnection.h"

class ElogDbBeam
{
 private:
	/* GENERATED PRIVATE MEMBERS (SHOULDN'T BE CHANGED MANUALLY) */
	/// connection to the database
	UniDbConnection* connectionUniDb;

	/// beam
	TString str_beam;

	//Constructor
	ElogDbBeam(UniDbConnection* connUniDb, TString beam);
	/* END OF PRIVATE GENERATED PART (SHOULDN'T BE CHANGED MANUALLY) */

 public:
	/* GENERATED PUBLIC MEMBERS (SHOULDN'T BE CHANGED MANUALLY) */
	virtual ~ElogDbBeam(); // Destructor

	// static class functions
	/// add new beam to the database
	static ElogDbBeam* CreateBeam(TString beam);
	/// get beam from the database
	static ElogDbBeam* GetBeam(TString beam);
	/// check beam exists in the database
	static bool CheckBeamExists(TString beam);
	/// delete beam from the database
	static int DeleteBeam(TString beam);
	/// print all beams
	static int PrintAll();

	// Getters
	/// get beam of the current beam
	TString GetBeam() {return str_beam;}

	// Setters
	/// set beam of the current beam
	int SetBeam(TString beam);

	/// print information about current beam
	void Print();
	/* END OF PUBLIC GENERATED PART (SHOULDN'T BE CHANGED MANUALLY) */

 ClassDef(ElogDbBeam,1);
};

#endif
// ----------------------------------------------------------------------
//                    ElogDbTarget header file 
//                      Generated 27-11-2017 
// ----------------------------------------------------------------------

/** elog_classes/ElogDbTarget.h 
 ** Class for the table: target_ 
 **/ 

#ifndef ELOGDBTARGET_H 
#define ELOGDBTARGET_H 1 

#include "TString.h"
#include "TDatime.h"

#include "UniDbConnection.h"

class ElogDbTarget
{
 private:
	/* GENERATED PRIVATE MEMBERS (SHOULDN'T BE CHANGED MANUALLY) */
	/// connection to the database
	UniDbConnection* connectionUniDb;

	/// target
	TString str_target;

	//Constructor
	ElogDbTarget(UniDbConnection* connUniDb, TString target);
	/* END OF PRIVATE GENERATED PART (SHOULDN'T BE CHANGED MANUALLY) */

 public:
	/* GENERATED PUBLIC MEMBERS (SHOULDN'T BE CHANGED MANUALLY) */
	virtual ~ElogDbTarget(); // Destructor

	// static class functions
	/// add new target to the database
	static ElogDbTarget* CreateTarget(TString target);
	/// get target from the database
	static ElogDbTarget* GetTarget(TString target);
	/// check target exists in the database
	static bool CheckTargetExists(TString target);
	/// delete target from the database
	static int DeleteTarget(TString target);
	/// print all targets
	static int PrintAll();

	// Getters
	/// get target of the current target
	TString GetTarget() {return str_target;}

	// Setters
	/// set target of the current target
	int SetTarget(TString target);

	/// print information about current target
	void Print();
	/* END OF PUBLIC GENERATED PART (SHOULDN'T BE CHANGED MANUALLY) */

 ClassDef(ElogDbTarget,1);
};

#endif
// ----------------------------------------------------------------------
//                    ElogDbRecord header file 
//                      Generated 27-11-2017 
// ----------------------------------------------------------------------

/** elog_classes/ElogDbRecord.h 
 ** Class for the table: record_ 
 **/ 

#ifndef ELOGDBRECORD_H 
#define ELOGDBRECORD_H 1 

#include "TString.h"
#include "TDatime.h"
#include "TObjArray.h"

#include "UniDbConnection.h"
#include "UniDbSearchCondition.h"

class ElogDbRecord
{
 private:
	/* GENERATED PRIVATE MEMBERS (SHOULDN'T BE CHANGED MANUALLY) */
	/// connection to the database
	UniDbConnection* connectionUniDb;

	/// record id
	int i_record_id;
	/// record date
	TDatime dt_record_date;
	/// shift leader id
	int* i_shift_leader_id;
	/// type id
	int i_type_id;
	/// period number
	int* i_period_number;
	/// run number
	int* i_run_number;
	/// trigger id
	int* i_trigger_id;
	/// daq status
	TString* str_daq_status;
	/// sp 41
	int* i_sp_41;
	/// sp 57
	int* i_sp_57;
	/// vkm2
	int* i_vkm2;
	/// field comment
	TString* str_field_comment;
	/// beam
	TString* str_beam;
	/// energy
	double* d_energy;
	/// target
	TString* str_target;
	/// target width
	double* d_target_width;
	/// record comment
	TString* str_record_comment;

	//Constructor
	ElogDbRecord(UniDbConnection* connUniDb, int record_id, TDatime record_date, int* shift_leader_id, int type_id, int* period_number, int* run_number, int* trigger_id, TString* daq_status, int* sp_41, int* sp_57, int* vkm2, TString* field_comment, TString* beam, double* energy, TString* target, double* target_width, TString* record_comment);
	/* END OF PRIVATE GENERATED PART (SHOULDN'T BE CHANGED MANUALLY) */

 public:
	/* GENERATED PUBLIC MEMBERS (SHOULDN'T BE CHANGED MANUALLY) */
	virtual ~ElogDbRecord(); // Destructor

	// static class functions
	/// add new record to the database
	static ElogDbRecord* CreateRecord(TDatime record_date, int* shift_leader_id, int type_id, int* period_number, int* run_number, int* trigger_id, TString* daq_status, int* sp_41, int* sp_57, int* vkm2, TString* field_comment, TString* beam, double* energy, TString* target, double* target_width, TString* record_comment);
	/// get record from the database
	static ElogDbRecord* GetRecord(int record_id);
	/// check record exists in the database
	static bool CheckRecordExists(int record_id);
	/// delete record from the database
	static int DeleteRecord(int record_id);
	/// print all records
	static int PrintAll();

	// Getters
	/// get record id of the current record
	int GetRecordId() {return i_record_id;}
	/// get record date of the current record
	TDatime GetRecordDate() {return dt_record_date;}
	/// get shift leader id of the current record
	int* GetShiftLeaderId() {if (i_shift_leader_id == NULL) return NULL; else return new int(*i_shift_leader_id);}
	/// get type id of the current record
	int GetTypeId() {return i_type_id;}
	/// get period number of the current record
	int* GetPeriodNumber() {if (i_period_number == NULL) return NULL; else return new int(*i_period_number);}
	/// get run number of the current record
	int* GetRunNumber() {if (i_run_number == NULL) return NULL; else return new int(*i_run_number);}
	/// get trigger id of the current record
	int* GetTriggerId() {if (i_trigger_id == NULL) return NULL; else return new int(*i_trigger_id);}
	/// get daq status of the current record
	TString* GetDaqStatus() {if (str_daq_status == NULL) return NULL; else return new TString(*str_daq_status);}
	/// get sp 41 of the current record
	int* GetSp41() {if (i_sp_41 == NULL) return NULL; else return new int(*i_sp_41);}
	/// get sp 57 of the current record
	int* GetSp57() {if (i_sp_57 == NULL) return NULL; else return new int(*i_sp_57);}
	/// get vkm2 of the current record
	int* GetVkm2() {if (i_vkm2 == NULL) return NULL; else return new int(*i_vkm2);}
	/// get field comment of the current record
	TString* GetFieldComment() {if (str_field_comment == NULL) return NULL; else return new TString(*str_field_comment);}
	/// get beam of the current record
	TString* GetBeam() {if (str_beam == NULL) return NULL; else return new TString(*str_beam);}
	/// get energy of the current record
	double* GetEnergy() {if (d_energy == NULL) return NULL; else return new double(*d_energy);}
	/// get target of the current record
	TString* GetTarget() {if (str_target == NULL) return NULL; else return new TString(*str_target);}
	/// get target width of the current record
	double* GetTargetWidth() {if (d_target_width == NULL) return NULL; else return new double(*d_target_width);}
	/// get record comment of the current record
	TString* GetRecordComment() {if (str_record_comment == NULL) return NULL; else return new TString(*str_record_comment);}

	// Setters
	/// set record date of the current record
	int SetRecordDate(TDatime record_date);
	/// set shift leader id of the current record
	int SetShiftLeaderId(int* shift_leader_id);
	/// set type id of the current record
	int SetTypeId(int type_id);
	/// set period number of the current record
	int SetPeriodNumber(int* period_number);
	/// set run number of the current record
	int SetRunNumber(int* run_number);
	/// set trigger id of the current record
	int SetTriggerId(int* trigger_id);
	/// set daq status of the current record
	int SetDaqStatus(TString* daq_status);
	/// set sp 41 of the current record
	int SetSp41(int* sp_41);
	/// set sp 57 of the current record
	int SetSp57(int* sp_57);
	/// set vkm2 of the current record
	int SetVkm2(int* vkm2);
	/// set field comment of the current record
	int SetFieldComment(TString* field_comment);
	/// set beam of the current record
	int SetBeam(TString* beam);
	/// set energy of the current record
	int SetEnergy(double* energy);
	/// set target of the current record
	int SetTarget(TString* target);
	/// set target width of the current record
	int SetTargetWidth(double* target_width);
	/// set record comment of the current record
	int SetRecordComment(TString* record_comment);

	/// print information about current record
	void Print();
	/* END OF PUBLIC GENERATED PART (SHOULDN'T BE CHANGED MANUALLY) */

    /// get array of ElogDbRecord-s for a given run from the database
    static TObjArray* GetRecords(int period_number, int run_number);

    /// get ELOG records corresponding to the specified single condition
    static TObjArray* Search(const UniDbSearchCondition& search_condition);
    /// get ELOG records corresponding to the specified (vector) conditions
    static TObjArray* Search(const TObjArray& search_conditions);

 ClassDef(ElogDbRecord,1);
};

#endif
// ----------------------------------------------------------------------
//                    ElogDbAttachment header file 
//                      Generated 27-11-2017 
// ----------------------------------------------------------------------

/** elog_classes/ElogDbAttachment.h 
 ** Class for the table: attachment_ 
 **/ 

#ifndef ELOGDBATTACHMENT_H 
#define ELOGDBATTACHMENT_H 1 

#include "TString.h"
#include "TDatime.h"

#include "UniDbConnection.h"

class ElogDbAttachment
{
 private:
	/* GENERATED PRIVATE MEMBERS (SHOULDN'T BE CHANGED MANUALLY) */
	/// connection to the database
	UniDbConnection* connectionUniDb;

	/// record id
	int i_record_id;
	/// attachment number
	int i_attachment_number;
	/// file name
	TString str_file_name;
	/// file data
	unsigned char* blob_file_data;
	/// size of file data
	Long_t sz_file_data;

	//Constructor
	ElogDbAttachment(UniDbConnection* connUniDb, int record_id, int attachment_number, TString file_name, unsigned char* file_data, Long_t size_file_data);
	/* END OF PRIVATE GENERATED PART (SHOULDN'T BE CHANGED MANUALLY) */

 public:
	/* GENERATED PUBLIC MEMBERS (SHOULDN'T BE CHANGED MANUALLY) */
	virtual ~ElogDbAttachment(); // Destructor

	// static class functions
	/// add new attachment to the database
	static ElogDbAttachment* CreateAttachment(int record_id, int attachment_number, TString file_name, unsigned char* file_data, Long_t size_file_data);
	/// get attachment from the database
	static ElogDbAttachment* GetAttachment(int record_id, int attachment_number);
	/// check attachment exists in the database
	static bool CheckAttachmentExists(int record_id, int attachment_number);
	/// delete attachment from the database
	static int DeleteAttachment(int record_id, int attachment_number);
	/// print all attachments
	static int PrintAll();

	// Getters
	/// get record id of the current attachment
	int GetRecordId() {return i_record_id;}
	/// get attachment number of the current attachment
	int GetAttachmentNumber() {return i_attachment_number;}
	/// get file name of the current attachment
	TString GetFileName() {return str_file_name;}
	/// get file data of the current attachment
	unsigned char* GetFileData() {unsigned char* tmp_file_data = new unsigned char[sz_file_data]; memcpy(tmp_file_data, blob_file_data, sz_file_data); return tmp_file_data;}
	/// get size of file data of the current attachment
	Long_t GetFileDataSize() {return sz_file_data;}

	// Setters
	/// set record id of the current attachment
	int SetRecordId(int record_id);
	/// set attachment number of the current attachment
	int SetAttachmentNumber(int attachment_number);
	/// set file name of the current attachment
	int SetFileName(TString file_name);
	/// set file data of the current attachment
	int SetFileData(unsigned char* file_data, Long_t size_file_data);

	/// print information about current attachment
	void Print();
	/* END OF PUBLIC GENERATED PART (SHOULDN'T BE CHANGED MANUALLY) */

 ClassDef(ElogDbAttachment,1);
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"DchMapStructure", payloadCode, "@",
"ElogDbAttachment", payloadCode, "@",
"ElogDbBeam", payloadCode, "@",
"ElogDbPerson", payloadCode, "@",
"ElogDbRecord", payloadCode, "@",
"ElogDbTarget", payloadCode, "@",
"ElogDbTrigger", payloadCode, "@",
"ElogDbType", payloadCode, "@",
"GemMapStructure", payloadCode, "@",
"GemPedestalStructure", payloadCode, "@",
"IIStructure", payloadCode, "@",
"LorentzShiftStructure", payloadCode, "@",
"TangoTimeInterval", payloadCode, "@",
"TangoTimeParameter", payloadCode, "@",
"TriggerMapStructure", payloadCode, "@",
"UniDbConnection", payloadCode, "@",
"UniDbDetector", payloadCode, "@",
"UniDbDetectorParameter", payloadCode, "@",
"UniDbGenerateClasses", payloadCode, "@",
"UniDbGeoConverter", payloadCode, "@",
"UniDbParameter", payloadCode, "@",
"UniDbRun", payloadCode, "@",
"UniDbRunGeometry", payloadCode, "@",
"UniDbRunPeriod", payloadCode, "@",
"UniDbSearchCondition", payloadCode, "@",
"UniDbSimulationFile", payloadCode, "@",
"UniDbTangoData", payloadCode, "@",
"UniqueRunNumber", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__UniDbDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__UniDbDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__UniDbDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__UniDbDict() {
  TriggerDictionaryInitialization_G__UniDbDict_Impl();
}
