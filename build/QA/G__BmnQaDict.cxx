// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIalexdIbmnroot_devdIbmnrootdIbuilddIQAdIG__BmnQaDict

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
#include "BmnTrackingQa.h"
#include "BmnClusteringQa.h"
#include "BmnUtils.h"
#include "BmnTrackingQaReport.h"
#include "BmnClusteringQaReport.h"
#include "BmnMCTrack.h"
#include "BmnMCTrackCreator.h"
#include "BmnAcceptanceFunction.h"
#include "report/BmnSimulationReport.h"
#include "report/BmnStudyReport.h"
#include "report/BmnHtmlReportElement.h"
#include "report/BmnReport.h"
#include "report/BmnDrawHist.h"
#include "report/BmnHistManager.h"
#include "BmnMatchRecoToMC.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_BmnTrackingQa(void *p = 0);
   static void *newArray_BmnTrackingQa(Long_t size, void *p);
   static void delete_BmnTrackingQa(void *p);
   static void deleteArray_BmnTrackingQa(void *p);
   static void destruct_BmnTrackingQa(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTrackingQa*)
   {
      ::BmnTrackingQa *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTrackingQa >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTrackingQa", ::BmnTrackingQa::Class_Version(), "", 29,
                  typeid(::BmnTrackingQa), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTrackingQa::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTrackingQa) );
      instance.SetNew(&new_BmnTrackingQa);
      instance.SetNewArray(&newArray_BmnTrackingQa);
      instance.SetDelete(&delete_BmnTrackingQa);
      instance.SetDeleteArray(&deleteArray_BmnTrackingQa);
      instance.SetDestructor(&destruct_BmnTrackingQa);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTrackingQa*)
   {
      return GenerateInitInstanceLocal((::BmnTrackingQa*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTrackingQa*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnClusteringQa(void *p = 0);
   static void *newArray_BmnClusteringQa(Long_t size, void *p);
   static void delete_BmnClusteringQa(void *p);
   static void deleteArray_BmnClusteringQa(void *p);
   static void destruct_BmnClusteringQa(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnClusteringQa*)
   {
      ::BmnClusteringQa *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnClusteringQa >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnClusteringQa", ::BmnClusteringQa::Class_Version(), "", 257,
                  typeid(::BmnClusteringQa), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnClusteringQa::Dictionary, isa_proxy, 4,
                  sizeof(::BmnClusteringQa) );
      instance.SetNew(&new_BmnClusteringQa);
      instance.SetNewArray(&newArray_BmnClusteringQa);
      instance.SetDelete(&delete_BmnClusteringQa);
      instance.SetDeleteArray(&deleteArray_BmnClusteringQa);
      instance.SetDestructor(&destruct_BmnClusteringQa);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnClusteringQa*)
   {
      return GenerateInitInstanceLocal((::BmnClusteringQa*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnClusteringQa*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnReport(void *p);
   static void deleteArray_BmnReport(void *p);
   static void destruct_BmnReport(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnReport*)
   {
      ::BmnReport *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnReport >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnReport", ::BmnReport::Class_Version(), "BmnReport.h", 27,
                  typeid(::BmnReport), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnReport::Dictionary, isa_proxy, 4,
                  sizeof(::BmnReport) );
      instance.SetDelete(&delete_BmnReport);
      instance.SetDeleteArray(&deleteArray_BmnReport);
      instance.SetDestructor(&destruct_BmnReport);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnReport*)
   {
      return GenerateInitInstanceLocal((::BmnReport*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnReport*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnSimulationReport(void *p);
   static void deleteArray_BmnSimulationReport(void *p);
   static void destruct_BmnSimulationReport(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSimulationReport*)
   {
      ::BmnSimulationReport *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSimulationReport >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSimulationReport", ::BmnSimulationReport::Class_Version(), "BmnSimulationReport.h", 25,
                  typeid(::BmnSimulationReport), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSimulationReport::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSimulationReport) );
      instance.SetDelete(&delete_BmnSimulationReport);
      instance.SetDeleteArray(&deleteArray_BmnSimulationReport);
      instance.SetDestructor(&destruct_BmnSimulationReport);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSimulationReport*)
   {
      return GenerateInitInstanceLocal((::BmnSimulationReport*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSimulationReport*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTrackingQaReport(void *p = 0);
   static void *newArray_BmnTrackingQaReport(Long_t size, void *p);
   static void delete_BmnTrackingQaReport(void *p);
   static void deleteArray_BmnTrackingQaReport(void *p);
   static void destruct_BmnTrackingQaReport(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTrackingQaReport*)
   {
      ::BmnTrackingQaReport *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTrackingQaReport >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTrackingQaReport", ::BmnTrackingQaReport::Class_Version(), "", 540,
                  typeid(::BmnTrackingQaReport), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTrackingQaReport::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTrackingQaReport) );
      instance.SetNew(&new_BmnTrackingQaReport);
      instance.SetNewArray(&newArray_BmnTrackingQaReport);
      instance.SetDelete(&delete_BmnTrackingQaReport);
      instance.SetDeleteArray(&deleteArray_BmnTrackingQaReport);
      instance.SetDestructor(&destruct_BmnTrackingQaReport);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTrackingQaReport*)
   {
      return GenerateInitInstanceLocal((::BmnTrackingQaReport*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTrackingQaReport*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnClusteringQaReport(void *p = 0);
   static void *newArray_BmnClusteringQaReport(Long_t size, void *p);
   static void delete_BmnClusteringQaReport(void *p);
   static void deleteArray_BmnClusteringQaReport(void *p);
   static void destruct_BmnClusteringQaReport(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnClusteringQaReport*)
   {
      ::BmnClusteringQaReport *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnClusteringQaReport >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnClusteringQaReport", ::BmnClusteringQaReport::Class_Version(), "", 624,
                  typeid(::BmnClusteringQaReport), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnClusteringQaReport::Dictionary, isa_proxy, 4,
                  sizeof(::BmnClusteringQaReport) );
      instance.SetNew(&new_BmnClusteringQaReport);
      instance.SetNewArray(&newArray_BmnClusteringQaReport);
      instance.SetDelete(&delete_BmnClusteringQaReport);
      instance.SetDeleteArray(&deleteArray_BmnClusteringQaReport);
      instance.SetDestructor(&destruct_BmnClusteringQaReport);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnClusteringQaReport*)
   {
      return GenerateInitInstanceLocal((::BmnClusteringQaReport*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnClusteringQaReport*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *BmnMCPoint_Dictionary();
   static void BmnMCPoint_TClassManip(TClass*);
   static void *new_BmnMCPoint(void *p = 0);
   static void *newArray_BmnMCPoint(Long_t size, void *p);
   static void delete_BmnMCPoint(void *p);
   static void deleteArray_BmnMCPoint(void *p);
   static void destruct_BmnMCPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMCPoint*)
   {
      ::BmnMCPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BmnMCPoint));
      static ::ROOT::TGenericClassInfo 
         instance("BmnMCPoint", "BmnMCPoint.h", 21,
                  typeid(::BmnMCPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BmnMCPoint_Dictionary, isa_proxy, 4,
                  sizeof(::BmnMCPoint) );
      instance.SetNew(&new_BmnMCPoint);
      instance.SetNewArray(&newArray_BmnMCPoint);
      instance.SetDelete(&delete_BmnMCPoint);
      instance.SetDeleteArray(&deleteArray_BmnMCPoint);
      instance.SetDestructor(&destruct_BmnMCPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMCPoint*)
   {
      return GenerateInitInstanceLocal((::BmnMCPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMCPoint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BmnMCPoint_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BmnMCPoint*)0x0)->GetClass();
      BmnMCPoint_TClassManip(theClass);
   return theClass;
   }

   static void BmnMCPoint_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BmnMCTrack_Dictionary();
   static void BmnMCTrack_TClassManip(TClass*);
   static void *new_BmnMCTrack(void *p = 0);
   static void *newArray_BmnMCTrack(Long_t size, void *p);
   static void delete_BmnMCTrack(void *p);
   static void deleteArray_BmnMCTrack(void *p);
   static void destruct_BmnMCTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMCTrack*)
   {
      ::BmnMCTrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BmnMCTrack));
      static ::ROOT::TGenericClassInfo 
         instance("BmnMCTrack", "", 723,
                  typeid(::BmnMCTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BmnMCTrack_Dictionary, isa_proxy, 4,
                  sizeof(::BmnMCTrack) );
      instance.SetNew(&new_BmnMCTrack);
      instance.SetNewArray(&newArray_BmnMCTrack);
      instance.SetDelete(&delete_BmnMCTrack);
      instance.SetDeleteArray(&deleteArray_BmnMCTrack);
      instance.SetDestructor(&destruct_BmnMCTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMCTrack*)
   {
      return GenerateInitInstanceLocal((::BmnMCTrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMCTrack*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BmnMCTrack_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BmnMCTrack*)0x0)->GetClass();
      BmnMCTrack_TClassManip(theClass);
   return theClass;
   }

   static void BmnMCTrack_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BmnMCTrackCreator_Dictionary();
   static void BmnMCTrackCreator_TClassManip(TClass*);
   static void delete_BmnMCTrackCreator(void *p);
   static void deleteArray_BmnMCTrackCreator(void *p);
   static void destruct_BmnMCTrackCreator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMCTrackCreator*)
   {
      ::BmnMCTrackCreator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BmnMCTrackCreator));
      static ::ROOT::TGenericClassInfo 
         instance("BmnMCTrackCreator", "", 973,
                  typeid(::BmnMCTrackCreator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BmnMCTrackCreator_Dictionary, isa_proxy, 4,
                  sizeof(::BmnMCTrackCreator) );
      instance.SetDelete(&delete_BmnMCTrackCreator);
      instance.SetDeleteArray(&deleteArray_BmnMCTrackCreator);
      instance.SetDestructor(&destruct_BmnMCTrackCreator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMCTrackCreator*)
   {
      return GenerateInitInstanceLocal((::BmnMCTrackCreator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMCTrackCreator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BmnMCTrackCreator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BmnMCTrackCreator*)0x0)->GetClass();
      BmnMCTrackCreator_TClassManip(theClass);
   return theClass;
   }

   static void BmnMCTrackCreator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BmnAcceptanceFunction_Dictionary();
   static void BmnAcceptanceFunction_TClassManip(TClass*);
   static void *new_BmnAcceptanceFunction(void *p = 0);
   static void *newArray_BmnAcceptanceFunction(Long_t size, void *p);
   static void delete_BmnAcceptanceFunction(void *p);
   static void deleteArray_BmnAcceptanceFunction(void *p);
   static void destruct_BmnAcceptanceFunction(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnAcceptanceFunction*)
   {
      ::BmnAcceptanceFunction *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BmnAcceptanceFunction));
      static ::ROOT::TGenericClassInfo 
         instance("BmnAcceptanceFunction", "", 1121,
                  typeid(::BmnAcceptanceFunction), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BmnAcceptanceFunction_Dictionary, isa_proxy, 0,
                  sizeof(::BmnAcceptanceFunction) );
      instance.SetNew(&new_BmnAcceptanceFunction);
      instance.SetNewArray(&newArray_BmnAcceptanceFunction);
      instance.SetDelete(&delete_BmnAcceptanceFunction);
      instance.SetDeleteArray(&deleteArray_BmnAcceptanceFunction);
      instance.SetDestructor(&destruct_BmnAcceptanceFunction);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnAcceptanceFunction*)
   {
      return GenerateInitInstanceLocal((::BmnAcceptanceFunction*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnAcceptanceFunction*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BmnAcceptanceFunction_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BmnAcceptanceFunction*)0x0)->GetClass();
      BmnAcceptanceFunction_TClassManip(theClass);
   return theClass;
   }

   static void BmnAcceptanceFunction_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnStudyReport(void *p);
   static void deleteArray_BmnStudyReport(void *p);
   static void destruct_BmnStudyReport(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnStudyReport*)
   {
      ::BmnStudyReport *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnStudyReport >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnStudyReport", ::BmnStudyReport::Class_Version(), "", 1532,
                  typeid(::BmnStudyReport), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnStudyReport::Dictionary, isa_proxy, 4,
                  sizeof(::BmnStudyReport) );
      instance.SetDelete(&delete_BmnStudyReport);
      instance.SetDeleteArray(&deleteArray_BmnStudyReport);
      instance.SetDestructor(&destruct_BmnStudyReport);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnStudyReport*)
   {
      return GenerateInitInstanceLocal((::BmnStudyReport*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnStudyReport*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnReportElement(void *p);
   static void deleteArray_BmnReportElement(void *p);
   static void destruct_BmnReportElement(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnReportElement*)
   {
      ::BmnReportElement *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnReportElement >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnReportElement", ::BmnReportElement::Class_Version(), "BmnReportElement.h", 32,
                  typeid(::BmnReportElement), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnReportElement::Dictionary, isa_proxy, 4,
                  sizeof(::BmnReportElement) );
      instance.SetDelete(&delete_BmnReportElement);
      instance.SetDeleteArray(&deleteArray_BmnReportElement);
      instance.SetDestructor(&destruct_BmnReportElement);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnReportElement*)
   {
      return GenerateInitInstanceLocal((::BmnReportElement*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnReportElement*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnHtmlReportElement(void *p = 0);
   static void *newArray_BmnHtmlReportElement(Long_t size, void *p);
   static void delete_BmnHtmlReportElement(void *p);
   static void deleteArray_BmnHtmlReportElement(void *p);
   static void destruct_BmnHtmlReportElement(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnHtmlReportElement*)
   {
      ::BmnHtmlReportElement *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnHtmlReportElement >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnHtmlReportElement", ::BmnHtmlReportElement::Class_Version(), "", 1613,
                  typeid(::BmnHtmlReportElement), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnHtmlReportElement::Dictionary, isa_proxy, 4,
                  sizeof(::BmnHtmlReportElement) );
      instance.SetNew(&new_BmnHtmlReportElement);
      instance.SetNewArray(&newArray_BmnHtmlReportElement);
      instance.SetDelete(&delete_BmnHtmlReportElement);
      instance.SetDeleteArray(&deleteArray_BmnHtmlReportElement);
      instance.SetDestructor(&destruct_BmnHtmlReportElement);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnHtmlReportElement*)
   {
      return GenerateInitInstanceLocal((::BmnHtmlReportElement*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnHtmlReportElement*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnHistManager(void *p = 0);
   static void *newArray_BmnHistManager(Long_t size, void *p);
   static void delete_BmnHistManager(void *p);
   static void deleteArray_BmnHistManager(void *p);
   static void destruct_BmnHistManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnHistManager*)
   {
      ::BmnHistManager *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnHistManager >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnHistManager", ::BmnHistManager::Class_Version(), "", 2071,
                  typeid(::BmnHistManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnHistManager::Dictionary, isa_proxy, 4,
                  sizeof(::BmnHistManager) );
      instance.SetNew(&new_BmnHistManager);
      instance.SetNewArray(&newArray_BmnHistManager);
      instance.SetDelete(&delete_BmnHistManager);
      instance.SetDeleteArray(&deleteArray_BmnHistManager);
      instance.SetDestructor(&destruct_BmnHistManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnHistManager*)
   {
      return GenerateInitInstanceLocal((::BmnHistManager*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnHistManager*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnMatchRecoToMC(void *p = 0);
   static void *newArray_BmnMatchRecoToMC(Long_t size, void *p);
   static void delete_BmnMatchRecoToMC(void *p);
   static void deleteArray_BmnMatchRecoToMC(void *p);
   static void destruct_BmnMatchRecoToMC(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMatchRecoToMC*)
   {
      ::BmnMatchRecoToMC *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnMatchRecoToMC >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnMatchRecoToMC", ::BmnMatchRecoToMC::Class_Version(), "", 2279,
                  typeid(::BmnMatchRecoToMC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnMatchRecoToMC::Dictionary, isa_proxy, 4,
                  sizeof(::BmnMatchRecoToMC) );
      instance.SetNew(&new_BmnMatchRecoToMC);
      instance.SetNewArray(&newArray_BmnMatchRecoToMC);
      instance.SetDelete(&delete_BmnMatchRecoToMC);
      instance.SetDeleteArray(&deleteArray_BmnMatchRecoToMC);
      instance.SetDestructor(&destruct_BmnMatchRecoToMC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMatchRecoToMC*)
   {
      return GenerateInitInstanceLocal((::BmnMatchRecoToMC*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMatchRecoToMC*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnTrackingQa::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTrackingQa::Class_Name()
{
   return "BmnTrackingQa";
}

//______________________________________________________________________________
const char *BmnTrackingQa::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackingQa*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTrackingQa::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackingQa*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTrackingQa::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackingQa*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTrackingQa::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackingQa*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnClusteringQa::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnClusteringQa::Class_Name()
{
   return "BmnClusteringQa";
}

//______________________________________________________________________________
const char *BmnClusteringQa::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnClusteringQa*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnClusteringQa::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnClusteringQa*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnClusteringQa::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnClusteringQa*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnClusteringQa::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnClusteringQa*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnReport::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnReport::Class_Name()
{
   return "BmnReport";
}

//______________________________________________________________________________
const char *BmnReport::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnReport*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnReport::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnReport*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnReport::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnReport*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnReport::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnReport*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnSimulationReport::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSimulationReport::Class_Name()
{
   return "BmnSimulationReport";
}

//______________________________________________________________________________
const char *BmnSimulationReport::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSimulationReport*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSimulationReport::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSimulationReport*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSimulationReport::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSimulationReport*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSimulationReport::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSimulationReport*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTrackingQaReport::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTrackingQaReport::Class_Name()
{
   return "BmnTrackingQaReport";
}

//______________________________________________________________________________
const char *BmnTrackingQaReport::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackingQaReport*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTrackingQaReport::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackingQaReport*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTrackingQaReport::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackingQaReport*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTrackingQaReport::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackingQaReport*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnClusteringQaReport::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnClusteringQaReport::Class_Name()
{
   return "BmnClusteringQaReport";
}

//______________________________________________________________________________
const char *BmnClusteringQaReport::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnClusteringQaReport*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnClusteringQaReport::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnClusteringQaReport*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnClusteringQaReport::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnClusteringQaReport*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnClusteringQaReport::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnClusteringQaReport*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnStudyReport::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnStudyReport::Class_Name()
{
   return "BmnStudyReport";
}

//______________________________________________________________________________
const char *BmnStudyReport::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnStudyReport*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnStudyReport::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnStudyReport*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnStudyReport::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnStudyReport*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnStudyReport::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnStudyReport*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnReportElement::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnReportElement::Class_Name()
{
   return "BmnReportElement";
}

//______________________________________________________________________________
const char *BmnReportElement::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnReportElement*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnReportElement::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnReportElement*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnReportElement::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnReportElement*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnReportElement::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnReportElement*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnHtmlReportElement::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnHtmlReportElement::Class_Name()
{
   return "BmnHtmlReportElement";
}

//______________________________________________________________________________
const char *BmnHtmlReportElement::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHtmlReportElement*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnHtmlReportElement::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHtmlReportElement*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnHtmlReportElement::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHtmlReportElement*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnHtmlReportElement::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHtmlReportElement*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnHistManager::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnHistManager::Class_Name()
{
   return "BmnHistManager";
}

//______________________________________________________________________________
const char *BmnHistManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistManager*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnHistManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistManager*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnHistManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistManager*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnHistManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistManager*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnMatchRecoToMC::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnMatchRecoToMC::Class_Name()
{
   return "BmnMatchRecoToMC";
}

//______________________________________________________________________________
const char *BmnMatchRecoToMC::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMatchRecoToMC*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnMatchRecoToMC::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMatchRecoToMC*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnMatchRecoToMC::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMatchRecoToMC*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnMatchRecoToMC::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMatchRecoToMC*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnTrackingQa::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTrackingQa.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTrackingQa::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTrackingQa::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTrackingQa(void *p) {
      return  p ? new(p) ::BmnTrackingQa : new ::BmnTrackingQa;
   }
   static void *newArray_BmnTrackingQa(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTrackingQa[nElements] : new ::BmnTrackingQa[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTrackingQa(void *p) {
      delete ((::BmnTrackingQa*)p);
   }
   static void deleteArray_BmnTrackingQa(void *p) {
      delete [] ((::BmnTrackingQa*)p);
   }
   static void destruct_BmnTrackingQa(void *p) {
      typedef ::BmnTrackingQa current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTrackingQa

//______________________________________________________________________________
void BmnClusteringQa::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnClusteringQa.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnClusteringQa::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnClusteringQa::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnClusteringQa(void *p) {
      return  p ? new(p) ::BmnClusteringQa : new ::BmnClusteringQa;
   }
   static void *newArray_BmnClusteringQa(Long_t nElements, void *p) {
      return p ? new(p) ::BmnClusteringQa[nElements] : new ::BmnClusteringQa[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnClusteringQa(void *p) {
      delete ((::BmnClusteringQa*)p);
   }
   static void deleteArray_BmnClusteringQa(void *p) {
      delete [] ((::BmnClusteringQa*)p);
   }
   static void destruct_BmnClusteringQa(void *p) {
      typedef ::BmnClusteringQa current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnClusteringQa

//______________________________________________________________________________
void BmnReport::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnReport.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnReport::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnReport::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnReport(void *p) {
      delete ((::BmnReport*)p);
   }
   static void deleteArray_BmnReport(void *p) {
      delete [] ((::BmnReport*)p);
   }
   static void destruct_BmnReport(void *p) {
      typedef ::BmnReport current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnReport

//______________________________________________________________________________
void BmnSimulationReport::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSimulationReport.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSimulationReport::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSimulationReport::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnSimulationReport(void *p) {
      delete ((::BmnSimulationReport*)p);
   }
   static void deleteArray_BmnSimulationReport(void *p) {
      delete [] ((::BmnSimulationReport*)p);
   }
   static void destruct_BmnSimulationReport(void *p) {
      typedef ::BmnSimulationReport current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSimulationReport

//______________________________________________________________________________
void BmnTrackingQaReport::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTrackingQaReport.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTrackingQaReport::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTrackingQaReport::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTrackingQaReport(void *p) {
      return  p ? new(p) ::BmnTrackingQaReport : new ::BmnTrackingQaReport;
   }
   static void *newArray_BmnTrackingQaReport(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTrackingQaReport[nElements] : new ::BmnTrackingQaReport[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTrackingQaReport(void *p) {
      delete ((::BmnTrackingQaReport*)p);
   }
   static void deleteArray_BmnTrackingQaReport(void *p) {
      delete [] ((::BmnTrackingQaReport*)p);
   }
   static void destruct_BmnTrackingQaReport(void *p) {
      typedef ::BmnTrackingQaReport current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTrackingQaReport

//______________________________________________________________________________
void BmnClusteringQaReport::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnClusteringQaReport.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnClusteringQaReport::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnClusteringQaReport::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnClusteringQaReport(void *p) {
      return  p ? new(p) ::BmnClusteringQaReport : new ::BmnClusteringQaReport;
   }
   static void *newArray_BmnClusteringQaReport(Long_t nElements, void *p) {
      return p ? new(p) ::BmnClusteringQaReport[nElements] : new ::BmnClusteringQaReport[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnClusteringQaReport(void *p) {
      delete ((::BmnClusteringQaReport*)p);
   }
   static void deleteArray_BmnClusteringQaReport(void *p) {
      delete [] ((::BmnClusteringQaReport*)p);
   }
   static void destruct_BmnClusteringQaReport(void *p) {
      typedef ::BmnClusteringQaReport current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnClusteringQaReport

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnMCPoint(void *p) {
      return  p ? new(p) ::BmnMCPoint : new ::BmnMCPoint;
   }
   static void *newArray_BmnMCPoint(Long_t nElements, void *p) {
      return p ? new(p) ::BmnMCPoint[nElements] : new ::BmnMCPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnMCPoint(void *p) {
      delete ((::BmnMCPoint*)p);
   }
   static void deleteArray_BmnMCPoint(void *p) {
      delete [] ((::BmnMCPoint*)p);
   }
   static void destruct_BmnMCPoint(void *p) {
      typedef ::BmnMCPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMCPoint

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnMCTrack(void *p) {
      return  p ? new(p) ::BmnMCTrack : new ::BmnMCTrack;
   }
   static void *newArray_BmnMCTrack(Long_t nElements, void *p) {
      return p ? new(p) ::BmnMCTrack[nElements] : new ::BmnMCTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnMCTrack(void *p) {
      delete ((::BmnMCTrack*)p);
   }
   static void deleteArray_BmnMCTrack(void *p) {
      delete [] ((::BmnMCTrack*)p);
   }
   static void destruct_BmnMCTrack(void *p) {
      typedef ::BmnMCTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMCTrack

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnMCTrackCreator(void *p) {
      delete ((::BmnMCTrackCreator*)p);
   }
   static void deleteArray_BmnMCTrackCreator(void *p) {
      delete [] ((::BmnMCTrackCreator*)p);
   }
   static void destruct_BmnMCTrackCreator(void *p) {
      typedef ::BmnMCTrackCreator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMCTrackCreator

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnAcceptanceFunction(void *p) {
      return  p ? new(p) ::BmnAcceptanceFunction : new ::BmnAcceptanceFunction;
   }
   static void *newArray_BmnAcceptanceFunction(Long_t nElements, void *p) {
      return p ? new(p) ::BmnAcceptanceFunction[nElements] : new ::BmnAcceptanceFunction[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnAcceptanceFunction(void *p) {
      delete ((::BmnAcceptanceFunction*)p);
   }
   static void deleteArray_BmnAcceptanceFunction(void *p) {
      delete [] ((::BmnAcceptanceFunction*)p);
   }
   static void destruct_BmnAcceptanceFunction(void *p) {
      typedef ::BmnAcceptanceFunction current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnAcceptanceFunction

//______________________________________________________________________________
void BmnStudyReport::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnStudyReport.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnStudyReport::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnStudyReport::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnStudyReport(void *p) {
      delete ((::BmnStudyReport*)p);
   }
   static void deleteArray_BmnStudyReport(void *p) {
      delete [] ((::BmnStudyReport*)p);
   }
   static void destruct_BmnStudyReport(void *p) {
      typedef ::BmnStudyReport current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnStudyReport

//______________________________________________________________________________
void BmnReportElement::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnReportElement.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnReportElement::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnReportElement::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnReportElement(void *p) {
      delete ((::BmnReportElement*)p);
   }
   static void deleteArray_BmnReportElement(void *p) {
      delete [] ((::BmnReportElement*)p);
   }
   static void destruct_BmnReportElement(void *p) {
      typedef ::BmnReportElement current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnReportElement

//______________________________________________________________________________
void BmnHtmlReportElement::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnHtmlReportElement.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnHtmlReportElement::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnHtmlReportElement::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnHtmlReportElement(void *p) {
      return  p ? new(p) ::BmnHtmlReportElement : new ::BmnHtmlReportElement;
   }
   static void *newArray_BmnHtmlReportElement(Long_t nElements, void *p) {
      return p ? new(p) ::BmnHtmlReportElement[nElements] : new ::BmnHtmlReportElement[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnHtmlReportElement(void *p) {
      delete ((::BmnHtmlReportElement*)p);
   }
   static void deleteArray_BmnHtmlReportElement(void *p) {
      delete [] ((::BmnHtmlReportElement*)p);
   }
   static void destruct_BmnHtmlReportElement(void *p) {
      typedef ::BmnHtmlReportElement current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnHtmlReportElement

//______________________________________________________________________________
void BmnHistManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnHistManager.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnHistManager::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnHistManager::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnHistManager(void *p) {
      return  p ? new(p) ::BmnHistManager : new ::BmnHistManager;
   }
   static void *newArray_BmnHistManager(Long_t nElements, void *p) {
      return p ? new(p) ::BmnHistManager[nElements] : new ::BmnHistManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnHistManager(void *p) {
      delete ((::BmnHistManager*)p);
   }
   static void deleteArray_BmnHistManager(void *p) {
      delete [] ((::BmnHistManager*)p);
   }
   static void destruct_BmnHistManager(void *p) {
      typedef ::BmnHistManager current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnHistManager

//______________________________________________________________________________
void BmnMatchRecoToMC::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnMatchRecoToMC.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnMatchRecoToMC::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnMatchRecoToMC::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnMatchRecoToMC(void *p) {
      return  p ? new(p) ::BmnMatchRecoToMC : new ::BmnMatchRecoToMC;
   }
   static void *newArray_BmnMatchRecoToMC(Long_t nElements, void *p) {
      return p ? new(p) ::BmnMatchRecoToMC[nElements] : new ::BmnMatchRecoToMC[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnMatchRecoToMC(void *p) {
      delete ((::BmnMatchRecoToMC*)p);
   }
   static void deleteArray_BmnMatchRecoToMC(void *p) {
      delete [] ((::BmnMatchRecoToMC*)p);
   }
   static void destruct_BmnMatchRecoToMC(void *p) {
      typedef ::BmnMatchRecoToMC current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMatchRecoToMC

namespace ROOT {
   static TClass *vectorlEstringgR_Dictionary();
   static void vectorlEstringgR_TClassManip(TClass*);
   static void *new_vectorlEstringgR(void *p = 0);
   static void *newArray_vectorlEstringgR(Long_t size, void *p);
   static void delete_vectorlEstringgR(void *p);
   static void deleteArray_vectorlEstringgR(void *p);
   static void destruct_vectorlEstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<string>*)
   {
      vector<string> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<string>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<string>", -2, "vector", 216,
                  typeid(vector<string>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEstringgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<string>) );
      instance.SetNew(&new_vectorlEstringgR);
      instance.SetNewArray(&newArray_vectorlEstringgR);
      instance.SetDelete(&delete_vectorlEstringgR);
      instance.SetDeleteArray(&deleteArray_vectorlEstringgR);
      instance.SetDestructor(&destruct_vectorlEstringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<string> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<string>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<string>*)0x0)->GetClass();
      vectorlEstringgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEstringgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<string> : new vector<string>;
   }
   static void *newArray_vectorlEstringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<string>[nElements] : new vector<string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEstringgR(void *p) {
      delete ((vector<string>*)p);
   }
   static void deleteArray_vectorlEstringgR(void *p) {
      delete [] ((vector<string>*)p);
   }
   static void destruct_vectorlEstringgR(void *p) {
      typedef vector<string> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<string>

namespace ROOT {
   static TClass *vectorlETCanvasmUgR_Dictionary();
   static void vectorlETCanvasmUgR_TClassManip(TClass*);
   static void *new_vectorlETCanvasmUgR(void *p = 0);
   static void *newArray_vectorlETCanvasmUgR(Long_t size, void *p);
   static void delete_vectorlETCanvasmUgR(void *p);
   static void deleteArray_vectorlETCanvasmUgR(void *p);
   static void destruct_vectorlETCanvasmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TCanvas*>*)
   {
      vector<TCanvas*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TCanvas*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TCanvas*>", -2, "vector", 216,
                  typeid(vector<TCanvas*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETCanvasmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TCanvas*>) );
      instance.SetNew(&new_vectorlETCanvasmUgR);
      instance.SetNewArray(&newArray_vectorlETCanvasmUgR);
      instance.SetDelete(&delete_vectorlETCanvasmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETCanvasmUgR);
      instance.SetDestructor(&destruct_vectorlETCanvasmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TCanvas*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TCanvas*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETCanvasmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TCanvas*>*)0x0)->GetClass();
      vectorlETCanvasmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETCanvasmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETCanvasmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TCanvas*> : new vector<TCanvas*>;
   }
   static void *newArray_vectorlETCanvasmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TCanvas*>[nElements] : new vector<TCanvas*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETCanvasmUgR(void *p) {
      delete ((vector<TCanvas*>*)p);
   }
   static void deleteArray_vectorlETCanvasmUgR(void *p) {
      delete [] ((vector<TCanvas*>*)p);
   }
   static void destruct_vectorlETCanvasmUgR(void *p) {
      typedef vector<TCanvas*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TCanvas*>

namespace ROOT {
   static TClass *vectorlEBmnMCPointgR_Dictionary();
   static void vectorlEBmnMCPointgR_TClassManip(TClass*);
   static void *new_vectorlEBmnMCPointgR(void *p = 0);
   static void *newArray_vectorlEBmnMCPointgR(Long_t size, void *p);
   static void delete_vectorlEBmnMCPointgR(void *p);
   static void deleteArray_vectorlEBmnMCPointgR(void *p);
   static void destruct_vectorlEBmnMCPointgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnMCPoint>*)
   {
      vector<BmnMCPoint> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnMCPoint>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnMCPoint>", -2, "vector", 216,
                  typeid(vector<BmnMCPoint>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnMCPointgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnMCPoint>) );
      instance.SetNew(&new_vectorlEBmnMCPointgR);
      instance.SetNewArray(&newArray_vectorlEBmnMCPointgR);
      instance.SetDelete(&delete_vectorlEBmnMCPointgR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnMCPointgR);
      instance.SetDestructor(&destruct_vectorlEBmnMCPointgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnMCPoint> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnMCPoint>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnMCPointgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnMCPoint>*)0x0)->GetClass();
      vectorlEBmnMCPointgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnMCPointgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnMCPointgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnMCPoint> : new vector<BmnMCPoint>;
   }
   static void *newArray_vectorlEBmnMCPointgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnMCPoint>[nElements] : new vector<BmnMCPoint>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnMCPointgR(void *p) {
      delete ((vector<BmnMCPoint>*)p);
   }
   static void deleteArray_vectorlEBmnMCPointgR(void *p) {
      delete [] ((vector<BmnMCPoint>*)p);
   }
   static void destruct_vectorlEBmnMCPointgR(void *p) {
      typedef vector<BmnMCPoint> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnMCPoint>

namespace ROOT {
   static TClass *vectorlEBmnHistManagermUgR_Dictionary();
   static void vectorlEBmnHistManagermUgR_TClassManip(TClass*);
   static void *new_vectorlEBmnHistManagermUgR(void *p = 0);
   static void *newArray_vectorlEBmnHistManagermUgR(Long_t size, void *p);
   static void delete_vectorlEBmnHistManagermUgR(void *p);
   static void deleteArray_vectorlEBmnHistManagermUgR(void *p);
   static void destruct_vectorlEBmnHistManagermUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnHistManager*>*)
   {
      vector<BmnHistManager*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnHistManager*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnHistManager*>", -2, "vector", 216,
                  typeid(vector<BmnHistManager*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnHistManagermUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnHistManager*>) );
      instance.SetNew(&new_vectorlEBmnHistManagermUgR);
      instance.SetNewArray(&newArray_vectorlEBmnHistManagermUgR);
      instance.SetDelete(&delete_vectorlEBmnHistManagermUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnHistManagermUgR);
      instance.SetDestructor(&destruct_vectorlEBmnHistManagermUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnHistManager*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnHistManager*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnHistManagermUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnHistManager*>*)0x0)->GetClass();
      vectorlEBmnHistManagermUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnHistManagermUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnHistManagermUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnHistManager*> : new vector<BmnHistManager*>;
   }
   static void *newArray_vectorlEBmnHistManagermUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnHistManager*>[nElements] : new vector<BmnHistManager*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnHistManagermUgR(void *p) {
      delete ((vector<BmnHistManager*>*)p);
   }
   static void deleteArray_vectorlEBmnHistManagermUgR(void *p) {
      delete [] ((vector<BmnHistManager*>*)p);
   }
   static void destruct_vectorlEBmnHistManagermUgR(void *p) {
      typedef vector<BmnHistManager*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnHistManager*>

namespace ROOT {
   static TClass *maplEintcOvectorlEBmnMCPointgRsPgR_Dictionary();
   static void maplEintcOvectorlEBmnMCPointgRsPgR_TClassManip(TClass*);
   static void *new_maplEintcOvectorlEBmnMCPointgRsPgR(void *p = 0);
   static void *newArray_maplEintcOvectorlEBmnMCPointgRsPgR(Long_t size, void *p);
   static void delete_maplEintcOvectorlEBmnMCPointgRsPgR(void *p);
   static void deleteArray_maplEintcOvectorlEBmnMCPointgRsPgR(void *p);
   static void destruct_maplEintcOvectorlEBmnMCPointgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,vector<BmnMCPoint> >*)
   {
      map<int,vector<BmnMCPoint> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,vector<BmnMCPoint> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,vector<BmnMCPoint> >", -2, "map", 99,
                  typeid(map<int,vector<BmnMCPoint> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOvectorlEBmnMCPointgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,vector<BmnMCPoint> >) );
      instance.SetNew(&new_maplEintcOvectorlEBmnMCPointgRsPgR);
      instance.SetNewArray(&newArray_maplEintcOvectorlEBmnMCPointgRsPgR);
      instance.SetDelete(&delete_maplEintcOvectorlEBmnMCPointgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOvectorlEBmnMCPointgRsPgR);
      instance.SetDestructor(&destruct_maplEintcOvectorlEBmnMCPointgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,vector<BmnMCPoint> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,vector<BmnMCPoint> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOvectorlEBmnMCPointgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,vector<BmnMCPoint> >*)0x0)->GetClass();
      maplEintcOvectorlEBmnMCPointgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOvectorlEBmnMCPointgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOvectorlEBmnMCPointgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,vector<BmnMCPoint> > : new map<int,vector<BmnMCPoint> >;
   }
   static void *newArray_maplEintcOvectorlEBmnMCPointgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,vector<BmnMCPoint> >[nElements] : new map<int,vector<BmnMCPoint> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOvectorlEBmnMCPointgRsPgR(void *p) {
      delete ((map<int,vector<BmnMCPoint> >*)p);
   }
   static void deleteArray_maplEintcOvectorlEBmnMCPointgRsPgR(void *p) {
      delete [] ((map<int,vector<BmnMCPoint> >*)p);
   }
   static void destruct_maplEintcOvectorlEBmnMCPointgRsPgR(void *p) {
      typedef map<int,vector<BmnMCPoint> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,vector<BmnMCPoint> >

namespace ROOT {
   static TClass *maplEintcOintgR_Dictionary();
   static void maplEintcOintgR_TClassManip(TClass*);
   static void *new_maplEintcOintgR(void *p = 0);
   static void *newArray_maplEintcOintgR(Long_t size, void *p);
   static void delete_maplEintcOintgR(void *p);
   static void deleteArray_maplEintcOintgR(void *p);
   static void destruct_maplEintcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,int>*)
   {
      map<int,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,int>", -2, "map", 99,
                  typeid(map<int,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,int>) );
      instance.SetNew(&new_maplEintcOintgR);
      instance.SetNewArray(&newArray_maplEintcOintgR);
      instance.SetDelete(&delete_maplEintcOintgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOintgR);
      instance.SetDestructor(&destruct_maplEintcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,int>*)0x0)->GetClass();
      maplEintcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,int> : new map<int,int>;
   }
   static void *newArray_maplEintcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,int>[nElements] : new map<int,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOintgR(void *p) {
      delete ((map<int,int>*)p);
   }
   static void deleteArray_maplEintcOintgR(void *p) {
      delete [] ((map<int,int>*)p);
   }
   static void destruct_maplEintcOintgR(void *p) {
      typedef map<int,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,int>

namespace ROOT {
   static TClass *maplEintcOBmnMCTrackgR_Dictionary();
   static void maplEintcOBmnMCTrackgR_TClassManip(TClass*);
   static void *new_maplEintcOBmnMCTrackgR(void *p = 0);
   static void *newArray_maplEintcOBmnMCTrackgR(Long_t size, void *p);
   static void delete_maplEintcOBmnMCTrackgR(void *p);
   static void deleteArray_maplEintcOBmnMCTrackgR(void *p);
   static void destruct_maplEintcOBmnMCTrackgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,BmnMCTrack>*)
   {
      map<int,BmnMCTrack> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,BmnMCTrack>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,BmnMCTrack>", -2, "map", 99,
                  typeid(map<int,BmnMCTrack>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOBmnMCTrackgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,BmnMCTrack>) );
      instance.SetNew(&new_maplEintcOBmnMCTrackgR);
      instance.SetNewArray(&newArray_maplEintcOBmnMCTrackgR);
      instance.SetDelete(&delete_maplEintcOBmnMCTrackgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOBmnMCTrackgR);
      instance.SetDestructor(&destruct_maplEintcOBmnMCTrackgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,BmnMCTrack> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,BmnMCTrack>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOBmnMCTrackgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,BmnMCTrack>*)0x0)->GetClass();
      maplEintcOBmnMCTrackgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOBmnMCTrackgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOBmnMCTrackgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,BmnMCTrack> : new map<int,BmnMCTrack>;
   }
   static void *newArray_maplEintcOBmnMCTrackgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,BmnMCTrack>[nElements] : new map<int,BmnMCTrack>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOBmnMCTrackgR(void *p) {
      delete ((map<int,BmnMCTrack>*)p);
   }
   static void deleteArray_maplEintcOBmnMCTrackgR(void *p) {
      delete [] ((map<int,BmnMCTrack>*)p);
   }
   static void destruct_maplEintcOBmnMCTrackgR(void *p) {
      typedef map<int,BmnMCTrack> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,BmnMCTrack>

namespace ROOT {
   static TClass *maplETStringcOTNamedmUgR_Dictionary();
   static void maplETStringcOTNamedmUgR_TClassManip(TClass*);
   static void *new_maplETStringcOTNamedmUgR(void *p = 0);
   static void *newArray_maplETStringcOTNamedmUgR(Long_t size, void *p);
   static void delete_maplETStringcOTNamedmUgR(void *p);
   static void deleteArray_maplETStringcOTNamedmUgR(void *p);
   static void destruct_maplETStringcOTNamedmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TString,TNamed*>*)
   {
      map<TString,TNamed*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TString,TNamed*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TString,TNamed*>", -2, "map", 99,
                  typeid(map<TString,TNamed*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETStringcOTNamedmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TString,TNamed*>) );
      instance.SetNew(&new_maplETStringcOTNamedmUgR);
      instance.SetNewArray(&newArray_maplETStringcOTNamedmUgR);
      instance.SetDelete(&delete_maplETStringcOTNamedmUgR);
      instance.SetDeleteArray(&deleteArray_maplETStringcOTNamedmUgR);
      instance.SetDestructor(&destruct_maplETStringcOTNamedmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TString,TNamed*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TString,TNamed*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETStringcOTNamedmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TString,TNamed*>*)0x0)->GetClass();
      maplETStringcOTNamedmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETStringcOTNamedmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETStringcOTNamedmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,TNamed*> : new map<TString,TNamed*>;
   }
   static void *newArray_maplETStringcOTNamedmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,TNamed*>[nElements] : new map<TString,TNamed*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETStringcOTNamedmUgR(void *p) {
      delete ((map<TString,TNamed*>*)p);
   }
   static void deleteArray_maplETStringcOTNamedmUgR(void *p) {
      delete [] ((map<TString,TNamed*>*)p);
   }
   static void destruct_maplETStringcOTNamedmUgR(void *p) {
      typedef map<TString,TNamed*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TString,TNamed*>

namespace {
  void TriggerDictionaryInitialization_G__BmnQaDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/opt/fairroot/install/include",
"/home/alex/bmnroot_dev/bmnroot/bmndata",
"/home/alex/bmnroot_dev/bmnroot/bmndata/cbm",
"/home/alex/bmnroot_dev/bmnroot/bmndata/math",
"/home/alex/bmnroot_dev/bmnroot/gem",
"/home/alex/bmnroot_dev/bmnroot/silicon",
"/home/alex/bmnroot_dev/bmnroot/sts",
"/home/alex/bmnroot_dev/bmnroot/globaltracking",
"/home/alex/bmnroot_dev/bmnroot/QA",
"/home/alex/bmnroot_dev/bmnroot/QA/report",
"/opt/fairsoft/install/include",
"/opt/fairsoft/install/include/root",
"/opt/fairsoft/install/include/root",
"/home/alex/bmnroot_dev/bmnroot/build/QA/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__BmnQaDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class BmnTrackingQa;
class BmnClusteringQa;
class __attribute__((annotate("$clingAutoload$BmnReport.h")))  __attribute__((annotate("$clingAutoload$report/BmnSimulationReport.h")))  BmnReport;
class __attribute__((annotate("$clingAutoload$report/BmnSimulationReport.h")))  BmnSimulationReport;
class BmnTrackingQaReport;
class BmnClusteringQaReport;
class __attribute__((annotate("$clingAutoload$BmnMCPoint.h")))  BmnMCPoint;
class BmnMCTrack;
class BmnMCTrackCreator;
class BmnAcceptanceFunction;
class BmnStudyReport;
class __attribute__((annotate("$clingAutoload$BmnReportElement.h")))  BmnReportElement;
class BmnHtmlReportElement;
class BmnHistManager;
class BmnMatchRecoToMC;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__BmnQaDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
/**
 * \file BmnTrackingQa.h
 * \brief FairTask for tracking performance calculation.
 * \author Andrey Lebedev <andrey.lebedev@gsi.de> - original author for CBM experiment
 * \author Sergey Merts <sergey.merts@gmail.com> - modifications for BMN experiment
 * \date 2007-2014
 */

#ifndef BMNTRACKINGQA_H_
#define BMNTRACKINGQA_H_

#include "FairTask.h"
#include "BmnDetectorSetup.h"

class BmnHistManager;
class BmnTrackMatch;
class BmnMCTrackCreator;
class BmnGlobalElectronId;

using std::string;
using std::vector;
using std::multimap;

class BmnTrackingQa : public FairTask {
public:

    /**
     * \brief Constructor.
     */
    BmnTrackingQa();
    
    /**
     * \brief Constructor.
     */
    BmnTrackingQa(Short_t ch, TString name);

    /**
     * \brief Destructor.
     */
    virtual ~BmnTrackingQa();

    /**
     * \brief Derived from FairTask.
     */
    virtual InitStatus Init();

    /**
     * \brief Derived from FairTask.
     */
    virtual void Exec(
            Option_t* opt);

    /**
     * \brief Derived from FairTask.
     */
    virtual void Finish();

    /** Setters **/
    void SetMinNofPointsSts(Int_t minNofPointsSts) {
        fMinNofPointsGem = minNofPointsSts;
    }

    void SetMinNofPointsTof(Int_t minNofPointsTof) {
        fMinNofPointsTof = minNofPointsTof;
    }

    void SetQuota(Double_t quota) {
        fQuota = quota;
    }

    void SetUseConsecutivePointsInSts(Bool_t useConsecutivePointsInSts) {
        fUseConsecutivePointsInGem = useConsecutivePointsInSts;
    }

    void SetOutputDir(const std::string& dir) {
        fOutputDir = dir;
    }

    void SetPRange(Int_t bins, Int_t min, Int_t max) {
        fPRangeBins = bins;
        fPRangeMin = min;
        fPRangeMax = max;
    }

    void SetYRange(Int_t bins, Int_t min, Int_t max) {
        fYRangeBins = bins;
        fYRangeMin = min;
        fYRangeMax = max;
    }

    void SetPtRange(Int_t bins, Int_t min, Int_t max) {
        fPtRangeBins = bins;
        fPtRangeMin = min;
        fPtRangeMax = max;
    }

    void SetThetaRange(
            Double_t min,
            Double_t max,
            Int_t nofBins) {
        fThetaRangeMin = min;
        fThetaRangeMax = max;
        fThetaRangeBins = nofBins;
    }

    void SetTrackCategories(const vector<string>& trackCategories) {
        fTrackCategories = trackCategories;
    }

    void SetOnlyPrimes(const Bool_t prime) {
        fPrimes = prime;
    }

    Bool_t GetOnlyPrimes() const {
        return fPrimes;
    }

private:
    /**
     * \brief Read data branches from input data files.
     */
    void ReadDataBranches();

    void CreateH1(
            const string& name,
            const string& xTitle,
            const string& yTitle,
            Int_t nofBins,
            Double_t minBin,
            Double_t maxBin);

    void CreateH2(
            const string& name,
            const string& xTitle,
            const string& yTitle,
            const string& zTitle,
            Int_t nofBinsX,
            Double_t minBinX,
            Double_t maxBinX,
            Int_t nofBinsY,
            Double_t minBinY,
            Double_t maxBinY);

    void CreateTrackHitsHistogram(const string& detName);

    void ReadEventHeader();


    void CreateHistograms();
    void ProcessGem();
    void ProcessGlobal();

    TString fOutName;

    BmnHistManager* fHM; // Histogram manager
    string fOutputDir; // Output directory for results
    BmnMCTrackCreator* fMCTrackCreator; // MC track creator tool

    // Acceptance defined by MC points
    Int_t fMinNofPointsGem; // Minimal number of MCPoints in STS
    Int_t fMinNofPointsTof; // Minimal number of MCPoints in TOF
    Int_t fMinNofPointsDch; // Minimal number of MCPoints in TOF

    Double_t fQuota; // True/all hits for track to be considered correctly reconstructed
    Double_t fEtaCut; // threshold for pseudorapidity (cat for spectators)
    Double_t fPCut; // threshold for momentum

    Bool_t fUseConsecutivePointsInGem; // Use consecutive MC points for STS normalization
    Bool_t fPrimes; //calculate efficiency only for primaries or for all particles

    // Minimal number of hits in track to be considered as accepted.
    // This is needed because the definition of the correctly reconstructed track
    // is 60% of hits in the reconstructed track are from the same MC track.
    // But this can lead to the situation when a reconstructed track has 4 hits,
    // all of them from the same MC track, which means that the track is correctly
    // reconstructed. BUT the real MC track has 12 points(hits). This is especially
    // important for the MUCH detector. To avoid such situations one has to put
    // such cut.

    Double_t fPRangeMin; // Minimum momentum for tracks for efficiency calculation [GeV/c]
    Double_t fPRangeMax; // Maximum momentum for tracks for efficiency calculation [GeV/c]
    Int_t fPRangeBins; // Number of bins for efficiency vs. momentum histogram
    Double_t fPtRangeMin; // Minimum Pt for tracks for efficiency calculation [GeV/c]
    Double_t fPtRangeMax; // Maximum Pt for tracks for efficiency calculation [GeV/c]
    Int_t fPtRangeBins; // Number of bins for efficiency vs. Pt histogram
    Double_t fYRangeMin; // Minimum rapidity for tracks for efficiency calculation
    Double_t fYRangeMax; // Maximum rapidity for tracks for efficiency calculation
    Int_t fYRangeBins; // Number of bins for efficiency vs. rapidity histogram
    Double_t fEtaRangeMin; // Minimum pseudorapidity for tracks for efficiency calculation
    Double_t fEtaRangeMax; // Maximum pseudorapidity for tracks for efficiency calculation    
    Int_t fEtaRangeBins; // Number of bins for efficiency vs. pseudorapidity histogram
    Double_t fThetaRangeMin; // Minimum polar angle [grad]
    Double_t fThetaRangeMax; // Maximum polar angle [grad]
    Int_t fThetaRangeBins; // Number of bins for efficiency vs. polar angle histogram
    
    UInt_t fNHitsCut; //cut to exclude overflowed events 

    // Pointers to data arrays
    TClonesArray* fMCTracks; // CbmMCTrack array
    TClonesArray* fGlobalTracks; // BmnGlobalTrack array
    TClonesArray* fGlobalTrackMatches; // BmnGemTrackMatch array
    TClonesArray* fGemTracks; // BmnGemTrack array
    TClonesArray* fGemMatches; // BmnGemTrackMatch array
    TClonesArray* fGemHitMatches;
    TClonesArray* fSilHitMatches;

    TClonesArray* fGemPoints;
    TClonesArray* fGemHits;
    TClonesArray* fSilPoints;
    TClonesArray* fSilHits;
    TClonesArray* fTof1Points;
    TClonesArray* fTof1Hits;
    TClonesArray* fTof2Points;
    TClonesArray* fTof2Hits;
    TClonesArray* fDchPoints;
    TClonesArray* fDchHits;
    
    TClonesArray* fVertex;
    
    Short_t fChargeCut; //(-1, 0, +1) do QA for negative, all or positive particles

    vector<string> fTrackCategories; // Vector of track category names

    BmnTrackingQa(const BmnTrackingQa&);
    BmnTrackingQa& operator=(const BmnTrackingQa&);

    ClassDef(BmnTrackingQa, 1);
};

#endif /* BMNTRACKINGQA_H_ */
/**
 * \file BmnClusteringQa.h
 * \brief FairTask for clustering performance calculation.
 * \author Andrey Lebedev <andrey.lebedev@gsi.de>
 * \date 2011
 */

#ifndef BMNCLUSTERINGQA_H_
#define BMNCLUSTERINGQA_H_

#include "FairTask.h"
#include "BmnDetectorSetup.h"
#include <string>
#include <vector>
using std::string;
using std::vector;
using std::map;
class BmnHistManager;
class TClonesArray;

class BmnClusteringQa : public FairTask {
public:
    /**
     * \brief Constructor.
     */
    BmnClusteringQa();

    /**
     * \brief Destructor.
     */
    virtual ~BmnClusteringQa();

    /**
     * \brief Derived from FairTask.
     */
    virtual InitStatus Init();

    /**
     * \brief Derived from FairTask.
     */
    virtual void Exec(
            Option_t* opt);

    /**
     * \brief Derived from FairTask.
     */
    virtual void Finish();

    /** Setters */
    void SetOutputDir(const string& outputDir) {
        fOutputDir = outputDir;
    }

    void SetOnlyPrimes(const Bool_t prime) {
        fPrimes = prime;
    }

    Bool_t GetOnlyPrimes() const {
        return fPrimes;
    }

private:

    Int_t GetStationId(
            Int_t address,
            DetectorId detId);

    /**
     * \brief Read data branches.
     */
    void ReadDataBranches();

    void ProcessPoints(
            const TClonesArray* points,
            const string& detName,
            DetectorId detId);

    void ProcessDigis(
            const TClonesArray* digis,
            const TClonesArray* digiMatches,
            const string& detName,
            DetectorId detId);

    void ProcessClusters(
            const TClonesArray* clusters,
            const TClonesArray* clusterMatches,
            const string& detName,
            DetectorId detId);

    void ProcessHits(
            const TClonesArray* hits,
            const TClonesArray* hitMatches,
            const string& detName,
            DetectorId detId);


    void ReadEventHeader();

    /**
     *
     */
    void FillEventCounterHistograms();

    /**
     *
     */
    void CreateHistograms();

    /**
     *
     */
    void CreateNofObjectsHistograms(
            DetectorId detId,
            const string& detName);

    /**
     *
     */
    void CreateNofObjectsHistograms(
            DetectorId detId,
            const string& detName,
            const string& parameter,
            const string& xTitle);

    void CreateClusterParametersHistograms(
            DetectorId detId,
            const string& detName);

    void FillResidualAndPullHistograms(
            const TClonesArray* points,
            const TClonesArray* hits,
            const TClonesArray* hitMatches,
            const string& detName,
            DetectorId detId);

    void FillHitEfficiencyHistograms(
            const TClonesArray* points,
            const TClonesArray* hits,
            const TClonesArray* hitMatches,
            const string& detName,
            DetectorId detId);

    void CreateHitEfficiencyHistograms(
            DetectorId detId,
            const string& detName,
            const string& parameter,
            const string& xTitle,
            Int_t nofBins,
            Double_t minBin,
            Double_t maxBin);

    void CreateH1(
            const string& name,
            const string& xTitle,
            const string& yTitle,
            Int_t nofBins,
            Double_t minBin,
            Double_t maxBin);

    void CreateH2(
            const string& name,
            const string& xTitle,
            const string& yTitle,
            const string& zTitle,
            Int_t nofBinsX,
            Double_t minBinX,
            Double_t maxBinX,
            Int_t nofBinsY,
            Double_t minBinY,
            Double_t maxBinY);

    BmnHistManager* fHM; // Histogram manager
    string fOutputDir; // Output directory for results
    BmnDetectorSetup fDet; // For detector setup determination

    // Pointers to data arrays
    TClonesArray* fMCTracks;

    //    TClonesArray* fMvdPoints; // CbmMvdPoint array
    //    TClonesArray* fMvdDigis; // CbmMvdDigi array
    //    TClonesArray* fMvdClusters; // CbmMvdClusters array
    //    TClonesArray* fMvdHits; // CbmMvdHit array

    TClonesArray* fGemPoints;
    TClonesArray* fGemDigits;
    //    TClonesArray* fGemClusters;
    TClonesArray* fGemHits;
    TClonesArray* fGemDigitMatches;
    //    TClonesArray* fGemClusterMatches;
    TClonesArray* fGemHitMatches;

    //    TClonesArray* fTof1Points;
    //    TClonesArray* fTof1Hits;
    //    TClonesArray* fTof1HitMatches;
    //    
    //    TClonesArray* fTof2Points;
    //    TClonesArray* fTof2Hits;
    //    TClonesArray* fTof2HitMatches;
    //    
    //    TClonesArray* fDch1Points;
    //    TClonesArray* fDch1Hits;
    //    TClonesArray* fDch1HitMatches;
    //    
    //    TClonesArray* fDch2Points;
    //    TClonesArray* fDch2Hits;
    //    TClonesArray* fDch2HitMatches;

    Bool_t fPrimes; //calculate efficiency only for primaries or for all particles

    BmnClusteringQa(const BmnClusteringQa&);
    BmnClusteringQa& operator=(const BmnClusteringQa&);

    ClassDef(BmnClusteringQa, 1);
};

#endif /* BMNCLUSTERINGQA_H_ */
#ifndef BMNUTILS_H_
#define BMNUTILS_H_

class TCanvas;

#include <vector>
#include <string>
#include <sstream>
#include <iostream>

using std::string;
using std::vector;

namespace lit
{

template <class T>
string ToString(
   const T& value)
{
   std::stringstream ss;
   ss << (T)value;
   return ss.str();
}

template <class T>
string NumberToString(
   const T& value, int precision = 1)
{
   // First determine number of digits in float
   string digis = ToString<int>(value);
   int ndigis = digis.size();

   std::stringstream ss;
   ss.precision(ndigis + precision);
   ss << value;
   return ss.str();
}

/* Returns -1 if x<0, +1 if x>0, 0 if x==0 */
template <class T>
int Sign(
   const T& x)
{
   static const T ZERO = 0;
   return (x > ZERO) ? 1 : ((x < ZERO) ? -1 : 0);
}

void SaveCanvasAsImage(
   TCanvas* c,
   const std::string& dir);

string FindAndReplace(
		const string& name,
		const string& oldSubstr,
		const string& newSubstr);

vector<string> Split(
		const string& name,
		char delimiter);
}

#endif /* BmnUTILS_H_ */
/**
 * \file BmnTrackingQaReport.h
 * \brief Create report for tracking QA.
 * \author Andrey Lebedev <andrey.lebedev@gsi.de>
 * \date 2011
 */
#ifndef BMNTRACKINGQAREPORT_H_
#define BMNTRACKINGQAREPORT_H_

#include "report/BmnSimulationReport.h"
#include <string>
#include <vector>
using std::string;
using std::vector;
class TH1;

/**
 * \class BmnTrackingQaReport
 * \brief Create report for tracking QA.
 * \author Andrey Lebedev <andrey.lebedev@gsi.de>
 * \date 2011
 */
class BmnTrackingQaReport : public BmnSimulationReport {
public:
    /**
     * \brief Constructor.
     */
    BmnTrackingQaReport();

    /**
     * \brief Constructor with parameters.
     */
    BmnTrackingQaReport(TString name);

    /**
     * \brief Destructor.
     */
    virtual ~BmnTrackingQaReport();

protected:
    /**
     * \brief Inherited from BmnSimulationReport.
     */
    virtual void Create();

    /**
     * \brief Inherited from BmnSimulationReport.
     */
    virtual void Draw();

    void DrawMomResGem(const TString canvasName, TString name2d, TString nameSigma, TString nameMean, TString nameAver);
    void DrawResAndPull(const TString canvasName, TString* inNames);
    void DrawResAndPull_2D(const TString canvasName, TString* inNames);
    void DrawHitRes(TString pref, TString axis);
    void DrawPar(const TString canvasName, TString* inNames);
    void DrawVertResGem(const TString canvasName, TString name1dX, TString name1dY, TString name1dZ);
    void FillAndFitSlice(TString nameSigma, TString nameMean, TString name2d);
    void DrawMuSigma(TVirtualPad* pad, TH1* h);
   
    void DrawOneH1(const TString canvasName, const TString name1, const TString drawOpt);
    void DrawTwoH1(const TString canvasName, const TString name1, const TString name2, const TString drawOpt);
    void DrawOneH2(const TString canvasName, const TString name1);
    void DrawTwoH2(const TString canvasName, const TString name1, const TString name2);
    void DrawThreeH1(const TString canvasName, const TString name1, const TString name2, const TString name3);
    void DrawThreeH2(const TString canvasName, const TString name1, const TString name2, const TString name3);

    void DrawEffGhostGem(const TString canvasName);
    void DrawEffGem(const TString canvasName, TString* inNames, TString* outNames);

    void DrawNhitsGem(const TString canvasName);
    void DrawPtSimPtRec(const TString canvasName);
    void DrawMeanLine(TH1* hist);

    void DrawEventsInfo(const TString canvasName);

    string PrintEventInfo();

    vector<string> fGlobalTrackVariants;

    TString fPrefix;

    ClassDef(BmnTrackingQaReport, 1)
};

#endif /* BMNTRACKINGQAREPORT_H_ */
/**
 * \file BmnClusteringQaReport.h
 * \brief Simulation report for clustering QA.
 * \author Andrey Lebedev <andrey.lebedev@gsi.de>
 * \date 2011
 */

#ifndef BMNCLUSTERINGQAREPORT_H_
#define BMNCLUSTERINGQAREPORT_H_

#include "report/BmnSimulationReport.h"
#include <string>
using std::string;

/**
 * \class BmnClusteringQaReport
 * \brief Simulation report for clustering QA.
 * \author Andrey Lebedev <andrey.lebedev@gsi.de>
 * \date 2011
 */
class BmnClusteringQaReport : public BmnSimulationReport {
public:
    /**
     * \brief Constructor.
     */
    BmnClusteringQaReport();

    /**
     * \brief Destructor.
     */
    virtual ~BmnClusteringQaReport();

    static Double_t CalcEfficiency(
            const TH1* histRec,
            const TH1* histAcc,
            Double_t scale);

private:
    /**
     * \brief Inherited from CbmSimulationReport.
     */
    virtual void Create();

    /**
     * \brief Inherited from CbmSimulationReport.
     */
    virtual void Draw();

    /**
     * \brief Print number of objects table.
     */
    string PrintNofObjects() const;

    void DrawNofObjectsHistograms(const string& detName, const string& parameter);

    void DrawResidualsAndPulls(const string& detName);
    
    void DrawResXbyStation(const string& canvasName);
    void DrawResYbyStation(const string& canvasName);
    void DrawSimXRecXbyStation(const string& canvasName);
    void DrawSimYRecYbyStation(const string& canvasName);
    void DrawOccupancyByStation(const string& canvasName);

    //   void DrawAccAndRec(
    //         const string& canvasName,
    //         const string& histNamePattern);

    //   void DrawEfficiency(
    //         const string& canvasName,
    //         const string& histNamePattern,
    //         string (*labelFormatter)(const string&, const CbmHistManager*));
    
    
    void DrawEventsInfo(const string& canvasName);
    
    string PrintEventInfo();

    void ScaleAndShrinkHistograms();

    void DivideHistos(
            TH1* histo1,
            TH1* histo2,
            TH1* histo3,
            Double_t scale);

    void CalculateEfficiencyHistos(
            const string& acc,
            const string& rec,
            const string& eff);

    ClassDef(BmnClusteringQaReport, 1)
};

#endif /* BMNCLUSTERINGQAREPORT_H_ */
/**
 * \file BmnMCTrack.h
 * \brief Monte-Carlo track.
 * \author Andrey Lebedev <andrey.lebedev@gsi.de>
 * \date 2011
 **/
#ifndef BMNMCTRACK_H_
#define BMNMCTRACK_H_

#include "BmnMCPoint.h"
#include "CbmDetectorList.h"
#include <cassert>
#include <map>
#include <vector>
#include <set>

using namespace std;

/**
 * \class BmnMCTrack
 * \brief Monte-Carlo track.
 * \author Andrey Lebedev <andrey.lebedev@gsi.de>
 * \date 2011
 **/
class BmnMCTrack
{
public:
   /**
    * \brief Constructor.
    */
   BmnMCTrack() {
      // Initialize all maps
      fPoints[kMVD];
      fPoints[kSILICON];
      fPoints[kGEM];
      fPoints[kTOF1];
      fPoints[kDCH];
      fPoints[kTOF];
//      fStationPoints[kMVD];
//      fStationPoints[kGEM];
//      fStationPoints[kTOF1];
//      fStationPoints[kDCH1];
//      fStationPoints[kDCH2];
//      fStationPoints[kTOF];
//      fStationIds[kMVD];
//      fStationIds[kGEM];
//      fStationIds[kTOF1];
//      fStationIds[kDCH1];
//      fStationIds[kDCH2];
//      fStationIds[kTOF];
//      fMaxConsecutivePoints[kGEM] = -1;
   }

   /**
    * \brief Destructor.
    */
   virtual ~BmnMCTrack() {};

   /**
    * \brief Add point to track.
    * \param[in] detId Detector identificator.
    * \param[in] point MC point to be added.
    */
   void AddPoint(DetectorId detId, const BmnMCPoint& point) {
      fPoints[detId].push_back(point);
//      fStationPoints[detId][point.GetStationId()].push_back(point);
//      fStationIds[detId].insert(point.GetStationId());

   }

   /**
    * \brief Return vector of MC point for specified detector id.
    * \param[in] detId Detector identificator.
    * \return Array of MC points.
    */
   const vector<BmnMCPoint>& GetPoints(DetectorId detId) const {
      return fPoints.find(detId)->second;
   }

   /**
    * \brief Return MC point for specified detector id and point index.
    * \param[in] detId Detector identificator.
    * \param[in] index Index of MC point.
    * \return MC point.
    */
   const BmnMCPoint& GetPoint(DetectorId detId, Int_t index) const {
      assert(GetNofPoints(detId) != 0);
      return fPoints.find(detId)->second[index];
   }

   /**
    * \brief Return number of MC points for specified detector id.
    * \param[in] detId Detector identificator.
    * \return Number of MC points.
    */
   UInt_t GetNofPoints(DetectorId detId) const {
      return fPoints.find(detId)->second.size();
   }

   /**
    * \brief Return number of MC points in different stations for specified detector id.
    * \param[in] detId Detector identificator.
    * \return Number of MC points.
    */
//   UInt_t GetNofPointsInDifferentStations(DetectorId detId) const {
//      return fStationPoints.find(detId)->second.size();
//   }

   /**
    * \brief Return number of consecutive MC points for specified detector id. Currently works only for STS.
    * \param[in] detId Detector identificator.
    * \return Number of MC points.
    */
//   Int_t GetNofConsecutivePoints(DetectorId detId) const {
//	  //assert(detId == kSTS);
////      return fMaxConsecutivePoints.find(detId)->second;
//	   return (detId == kGEM) ? fMaxConsecutivePoints.find(detId)->second : -1;
//   }

   /**
    * \brief Calculates number of consecutive MC points for specified detector id. Currently works only for STS.
    * \param[in] detId Detector identificator.
    * \return Number of MC points.
    */
//   void CalculateNofConsecutivePoints() {
//	  fMaxConsecutivePoints[kGEM] = MaxConsecutiveNumbers(fStationIds.find(kGEM)->second);
//   }

   /**
    * \brief Return MC point for specified detector id and point index.
    *
    * Before accessing points with this function one has to check
    * the number of points on this station!
    *
    * \param[in] detId Detector identificator.
    * \param[in] stationId Station id.
    * \param[in] index Index of MC point.
    * \return MC point.
    */
//   const BmnMCPoint& GetPointAtStation(
//         DetectorId detId,
//         Int_t stationId,
//         Int_t index) const {
//      assert(GetNofPointsAtStation(detId, stationId) != 0);
//      return fStationPoints.find(detId)->second.find(stationId)->second[index];
//   }

   /**
    * \brief Return number of MC points for specified detector ID and station ID.
    * \param[in] detId Detector identificator.
    *  \param[in] stationId Station id.
    * \return Number of MC points.
    */
//   UInt_t GetNofPointsAtStation(
//         DetectorId detId,
//         Int_t stationId) const {
//      if (fStationPoints.find(detId)->second.count(stationId) > 0) {
//         return fStationPoints.find(detId)->second.find(stationId)->second.size();
//      } else return 0;
//   }

private:
   // map<detector id, vector of MC points>
   map<Int_t, vector<BmnMCPoint> > fPoints;

   // map<detector id, map<station id, vector of MC points> >
 //  map<Int_t, map<Int_t, vector<BmnMCPoint> > > fStationPoints;

   // Temporary set to store unique station indices for fast access
   // map<detector id, set<station index>>
  // map<Int_t, set<Int_t> > fStationIds;

   // temporary storage for maximum number of consecutive MC points
   // map<detector id, number of MC points>
  // map<Int_t, Int_t> fMaxConsecutivePoints;

private:

   Int_t MaxConsecutiveNumbers(
         const set<Int_t>& numbers) const {
      if (numbers.size() == 0) return 0;
      if (numbers.size() == 1) return 1;

      vector<Int_t> a(numbers.begin(), numbers.end());

      int maxCnt = 0;
      int cnt = 1;
      for (Int_t i = 0; i < a.size() - 1; i++) {
         if (a[i] == (a[i + 1] - 1)) {
            cnt++;
         } else {
            maxCnt = std::max(cnt, maxCnt);
            cnt = 1;
         }
      }
      maxCnt = std::max(cnt, maxCnt);
      return maxCnt;
   }

   string PointsToString(
         DetectorId detId,
         const string& detName) const {
      stringstream ss;
//      ss << detName << " np=" << GetNofPoints(detId) << " npds=" << GetNofPointsInDifferentStations(detId)
//    		  << " ncp=" << GetNofConsecutivePoints(detId) << " points=(";
//      for (Int_t i = 0; i < GetNofPoints(detId); i++) {
//         ss << ":" << GetPoint(detId, i).GetRefId() << ":" << GetPoint(detId, i).GetStationId() << ",";
//         //ss << GetPoint(detId, i);
//      }
//      ss << ") ";
      return ss.str();
   }

public:

   /**
    * \brief Returns string representation of the class.
    * \return Class representation as string.
    */
   virtual string ToString() const {
      stringstream ss;
      ss << "MCTrack: ";
      ss << PointsToString(kMVD, "MVD") << "|";
      ss << PointsToString(kGEM, "STS") << "|";
      ss << PointsToString(kTOF1, "TOF1") << "|";
      ss << PointsToString(kDCH, "DCH1") << "|";
      ss << PointsToString(kTOF, "TOF") << "|";
      ss << endl;
      return ss.str();
   }

   /**
    * \brief Operator << for convenient output to ostream.
    * \return Insertion stream in order to be able to call a succession of insertion operations.
    */
   friend ostream& operator<<(ostream& strm, const BmnMCTrack& track) {
      strm << track.ToString();
      return strm;
   }
};

#endif /* BmnMCTRACK_H_ */
/**
 * \file CbmLitMCTrackCreator.h
 * \brief Creates CbmLitMCTrack objects.
 * \author Andrey Lebedev <andrey.lebedev@gsi.de>
 * \author Sergey Merts <sergey.merts@gmail.com> - modifications for BMN experiment
 * \date 2011-2014
 **/
#ifndef BMNMCTRACKCREATOR_H_
#define BMNMCTRACKCREATOR_H_

#include "BmnMCTrack.h"
#include <map>
#include <iostream>
#include <assert.h>
#include "BmnGemStripStationSet.h"
#include "BmnSiliconStationSet.h"
#include "BmnGemStripStationSet_RunSpring2017.h"

class TClonesArray;
class FairMCPoint;
class CbmStsPoint;
class CbmGeoStsPar;
class CbmStsDigiPar;
class CbmStsDigiScheme;

/**
 * \class CbmLitMCTrackCreator
 * \brief Creates CbmLitMCTrack objects.
 * \author Andrey Lebedev <andrey.lebedev@gsi.de>
 * \date 2011
 **/
class BmnMCTrackCreator {
private:
    /**
     * \brief Constructor.
     */
    BmnMCTrackCreator();

public:
    /**
     * \brief Destructor.
     */
    virtual ~BmnMCTrackCreator();

    /**
     * \brief Singleton instance.
     */
    static BmnMCTrackCreator* Instance();

    /**
     * \brief Creates array of BmnMCTracks for current event.
     * Has to be executed in Exec() function of the task.
     */
    void Create();

    /**
     * \brief Check whether a track exists in the array.
     * \param[in] mcId MC index of track.
     * \return true if track exists in array.
     */
    Bool_t TrackExists(Int_t mcId) const {
        return (fBmnMCTracks.count(mcId) > 0) ? kTRUE : kFALSE;
    }

    /**
     * \brief Return BmnMCTrack by its index.
     * \param[in] mcId MC index of track.
     * \return MC track.
     */
    const BmnMCTrack& GetTrack(int mcId) const {
        assert(TrackExists(mcId));
        return fBmnMCTracks.find(mcId)->second;
    }

    /**
     * \brief Return number of tracks.
     * \return Number of tracks.
     */
    Int_t GetNofTracks() const {
        return fBmnMCTracks.size();
    }

private:

    /**
     * \brief Read data branches.
     */
    void ReadDataBranches();

    /**
     * \brief Add MC points from a certain detector.
     * \param[in] detId Detector identificator.
     * \param[in] array Array of FairMCPoint.
     */
    void AddPoints(DetectorId detId, const TClonesArray* array);

    /**
     * \brief Calculate and set number of RICH hits for MC track.
     */
    void AddRichHits();

    /**
     * \brief Fit Rich MC points using ellipse fitter and fill ellipse parameters.
     */
    void AddRingParameters();

    /**
     * \brief Convert FairMCPoint to CbmLitMCPoint.
     * \param[in] fairPoint Pointer to FairMCPoint to be converted.
     * \param[out] litPoint Pointer to output CbmLitMCPoint.
     * \param[in] refId Reference index of the MC point.
     */
    void FairMCPointToBmnMCPoint(
            const FairMCPoint* fairPoint,
            BmnMCPoint* bmnPoint,
            int refId,
            int stationId);

    /**
     * \brief Fill maps for MC points to station id.
     */
    void FillStationMaps();


    void FairMCPointCoordinatesAndMomentumToBmnMCPoint(// for DCH1, DCH2, TOF1 points
            const FairMCPoint* fairPoint,
            BmnMCPoint* bmnPoint);

    void GemPointCoordinatesAndMomentumToBmnMCPoint(
            const CbmStsPoint* gemPoint,
            BmnMCPoint* bmnPoint);

    TClonesArray* fMCTracks;
    TClonesArray* fMvdPoints;
    TClonesArray* fSilPoints;
    TClonesArray* fGemPoints;
    TClonesArray* fTof1Points;
    TClonesArray* fDchPoints;
    TClonesArray* fTof2Points;

    // Stores created CbmLitMCTrack objects.
    // std::map<MC track index, BmnMCTrack object>.
    std::map<Int_t, BmnMCTrack> fBmnMCTracks;

    // Map <MC point index, station index>
    //   std::map<int, int>fMvdStationsMap; // for MVD
    std::map<Int_t, Int_t>fGemStationsMap; // for GEM
    
    BmnGemStripStationSet* fGemDetector;
    BmnSiliconStationSet* fSilDetector;

    CbmGeoStsPar* fStsGeoPar; // Geometry parameter container
    CbmStsDigiPar* fStsDigiPar; // Digitisation parameter container
    CbmStsDigiScheme* fStsDigiScheme; // Digitisation scheme
};

#endif /* BMNMCTRACKCREATOR_H_ */
/**
 * \file BmnAcceptanceFunction.h
 * \author Andrey Lebedev <andrey.lebedev@gsi.de> - original author for CBM experiment
 * \author Sergey Merts <sergey.merts@gmail.com> - modifications for BMN experiment
 * \date 2014
 * \brief Global function to define the track acceptance. Used in QA.
 */

#ifndef BMNACCEPTANCEFUNCTION_H_
#define BMNACCEPTANCEFUNCTION_H_

#include "CbmMCTrack.h"
#include "BmnGlobalTrack.h"
#include "BmnTrackMatch.h"
#include "TClonesArray.h"
#include "TMath.h"
#include "TDatabasePDG.h"
//#include <cmath>
//using std::abs;


class BmnAcceptanceFunction
{
public:

   static Bool_t AllTrackAcceptanceFunction(
         const TClonesArray* mcTracks,
         Int_t index)
   {
      return true;
   }

   static Bool_t NegativeTrackAcceptanceFunction(
         const TClonesArray* mcTracks,
         Int_t index)
   {
      if (index < 0) return false;
      const CbmMCTrack* mcTrack = static_cast<const CbmMCTrack*>(mcTracks->At(index));
      const TParticlePDG* particle = TDatabasePDG::Instance()->GetParticle(mcTrack->GetPdgCode());
      if (particle == NULL) return false;
      return particle->Charge() < 0;
   }

   static Bool_t PositiveTrackAcceptanceFunction(
         const TClonesArray* mcTracks,
         Int_t index)
   {
      if (index < 0) return false;
      const CbmMCTrack* mcTrack = static_cast<const CbmMCTrack*>(mcTracks->At(index));
      const TParticlePDG* particle = TDatabasePDG::Instance()->GetParticle(mcTrack->GetPdgCode());
      if (particle == NULL) return false;
      return particle->Charge() > 0;
   }

   static Bool_t PrimaryTrackAcceptanceFunction(
         const TClonesArray* mcTracks,
         Int_t index)
   {
      if (index < 0) return false;
      const CbmMCTrack* mcTrack = static_cast<const CbmMCTrack*>(mcTracks->At(index));
      return (mcTrack->GetMotherId() == -1);
   }

   static Bool_t ReferenceTrackAcceptanceFunction(
         const TClonesArray* mcTracks,
         Int_t index)
   {
      if (index < 0) return false;
      const CbmMCTrack* mcTrack = static_cast<const CbmMCTrack*>(mcTracks->At(index));
      return (mcTrack->GetMotherId() == -1) && (mcTrack->GetP() > 1.);
   }

   static Bool_t SecondaryTrackAcceptanceFunction(
         const TClonesArray* mcTracks,
         Int_t index)
   {
      if (index < 0) return false;
      const CbmMCTrack* mcTrack = static_cast<const CbmMCTrack*>(mcTracks->At(index));
      return (mcTrack->GetMotherId() != -1);
   }

   static Bool_t PrimaryElectronTrackAcceptanceFunction(
         const TClonesArray* mcTracks,
         Int_t index)
   {
      if (index < 0) return false;
      const CbmMCTrack* mcTrack = static_cast<const CbmMCTrack*>(mcTracks->At(index));
      return (TMath::Abs(mcTrack->GetPdgCode()) == 11) && (mcTrack->GetMotherId() == -1);
   }

   static Bool_t PrimaryMuonTrackAcceptanceFunction(
         const TClonesArray* mcTracks,
         Int_t index)
   {
      if (index < 0) return false;
      const CbmMCTrack* mcTrack = static_cast<const CbmMCTrack*>(mcTracks->At(index));
      return (TMath::Abs(mcTrack->GetPdgCode()) == 13) && (mcTrack->GetMotherId() == -1);
   }

   static Bool_t ElectronTrackAcceptanceFunction(
         const TClonesArray* mcTracks,
         Int_t index)
   {
      if (index < 0) return false;
      const CbmMCTrack* mcTrack = static_cast<const CbmMCTrack*>(mcTracks->At(index));
      return TMath::Abs(mcTrack->GetPdgCode()) == 11;
   }

   static Bool_t MuonTrackAcceptanceFunction(
         const TClonesArray* mcTracks,
         Int_t index)
   {
      if (index < 0) return false;
      const CbmMCTrack* mcTrack = static_cast<const CbmMCTrack*>(mcTracks->At(index));
      return TMath::Abs(mcTrack->GetPdgCode()) == 13;
   }

   static Bool_t ProtonTrackAcceptanceFunction(
         const TClonesArray* mcTracks,
         Int_t index)
   {
      if (index < 0) return false;
      const CbmMCTrack* mcTrack = static_cast<const CbmMCTrack*>(mcTracks->At(index));
      return (TMath::Abs(mcTrack->GetPdgCode()) == 2212);
   }

   static Bool_t AntiProtonTrackAcceptanceFunction(
         const TClonesArray* mcTracks,
         Int_t index)
   {
      if (index < 0) return false;
      const CbmMCTrack* mcTrack = static_cast<const CbmMCTrack*>(mcTracks->At(index));
      return mcTrack->GetPdgCode() == -2212;
   }

   static Bool_t PionTrackAcceptanceFunction(
         const TClonesArray* mcTracks,
         Int_t index)
   {
      if (index < 0) return false;
      const CbmMCTrack* mcTrack = static_cast<const CbmMCTrack*>(mcTracks->At(index));
      return (TMath::Abs(mcTrack->GetPdgCode()) == 211);
   }

   static Bool_t PionPlusTrackAcceptanceFunction(
         const TClonesArray* mcTracks,
         Int_t index)
   {
      if (index < 0) return false;
      const CbmMCTrack* mcTrack = static_cast<const CbmMCTrack*>(mcTracks->At(index));
      return (mcTrack->GetPdgCode() == 211);
   }

   static Bool_t PionMinusTrackAcceptanceFunction(
         const TClonesArray* mcTracks,
         Int_t index)
   {
      if (index < 0) return false;
      const CbmMCTrack* mcTrack = static_cast<const CbmMCTrack*>(mcTracks->At(index));
      return (mcTrack->GetPdgCode() == -211);
   }

   static Bool_t KaonTrackAcceptanceFunction(
         const TClonesArray* mcTracks,
         Int_t index)
   {
      if (index < 0) return false;
      const CbmMCTrack* mcTrack = static_cast<const CbmMCTrack*>(mcTracks->At(index));
      return (TMath::Abs(mcTrack->GetPdgCode()) == 321);
   }

   static Bool_t KaonPlusTrackAcceptanceFunction(
         const TClonesArray* mcTracks,
         Int_t index)
   {
      if (index < 0) return false;
      const CbmMCTrack* mcTrack = static_cast<const CbmMCTrack*>(mcTracks->At(index));
      return (mcTrack->GetPdgCode() == 321);
   }

   static Bool_t KaonMinusTrackAcceptanceFunction(
         const TClonesArray* mcTracks,
         Int_t index)
   {
      if (index < 0) return false;
      const CbmMCTrack* mcTrack = static_cast<const CbmMCTrack*>(mcTracks->At(index));
      return (mcTrack->GetPdgCode() == -321);
   }

   static Bool_t AllRingAcceptanceFunction(
         const TClonesArray* mcTracks,
         Int_t index,
         Int_t nofHitsInRing)
   {
      return true;
   }

   static Bool_t AllReferenceRingAcceptanceFunction(
         const TClonesArray* mcTracks,
         Int_t index,
         Int_t nofHitsInRing)
   {
      if (index < 0) return false;
      const CbmMCTrack* mcTrack = static_cast<const CbmMCTrack*>(mcTracks->At(index));
      return (mcTrack->GetMotherId() == -1) && (mcTrack->GetP() > 1.) && (nofHitsInRing >= 15);
   }

   static Bool_t PrimaryElectronRingAcceptanceFunction(
         const TClonesArray* mcTracks,
         Int_t index,
         Int_t nofHitsInRing)
   {
      if (index < 0) return false;
      const CbmMCTrack* mcTrack = static_cast<const CbmMCTrack*>(mcTracks->At(index));
      return (mcTrack->GetMotherId() == -1) && (TMath::Abs(mcTrack->GetPdgCode()) == 11);
   }

   static Bool_t PrimaryElectronReferenceRingAcceptanceFunction(
         const TClonesArray* mcTracks,
         Int_t index,
         Int_t nofHitsInRing)
   {
      if (index < 0) return false;
      const CbmMCTrack* mcTrack = static_cast<const CbmMCTrack*>(mcTracks->At(index));
      return (mcTrack->GetMotherId() == -1) && (TMath::Abs(mcTrack->GetPdgCode()) == 11) && (mcTrack->GetP() > 1.) && (nofHitsInRing >= 15);
   }

   static Bool_t PionRingAcceptanceFunction(
         const TClonesArray* mcTracks,
         Int_t index,
         Int_t nofHitsInRing)
   {
      if (index < 0) return false;
      const CbmMCTrack* mcTrack = static_cast<const CbmMCTrack*>(mcTracks->At(index));
      return (TMath::Abs(mcTrack->GetPdgCode()) == 211);
   }

   static Bool_t PionReferenceRingAcceptanceFunction(
         const TClonesArray* mcTracks,
         Int_t index,
         Int_t nofHitsInRing)
   {
      if (index < 0) return false;
      const CbmMCTrack* mcTrack = static_cast<const CbmMCTrack*>(mcTracks->At(index));
      return (TMath::Abs(mcTrack->GetPdgCode()) == 211) && (mcTrack->GetP() > 1.) && (nofHitsInRing >= 15);
   }

   static Bool_t AllPiSuppAcceptanceFunction(
         const TClonesArray* globalTracks,
         const TClonesArray* stsMatches,
         const TClonesArray* richMatches,
         Int_t index)
   {
      return true;
   }

   static Bool_t TrueMatchPiSuppAcceptanceFunction(
         const TClonesArray* globalTracks,
         const TClonesArray* stsMatches,
         const TClonesArray* richMatches,
         Int_t index)
   {
//      const CbmGlobalTrack* gTrack = static_cast<const CbmGlobalTrack*>(globalTracks->At(index));
//      Int_t stsInd = gTrack->GetStsTrackIndex();
//      Int_t richInd = gTrack->GetRichRingIndex();
//      if (stsInd == -1 || richInd == -1) return false;
//      const BmnTrackMatch* stsMatch = static_cast<const BmnTrackMatch*>(stsMatches->At(stsInd));
//      const BmnTrackMatch* richMatch = static_cast<const BmnTrackMatch*>(richMatches->At(richInd));
//      if (NULL == stsMatch || NULL == richMatch) return false;
//
//      if (stsMatch->GetMatchedLink().GetIndex() == richMatch->GetMatchedLink().GetIndex()) return true;
      return false;
   }

   static Bool_t WrongMatchPiSuppAcceptanceFunction(
         const TClonesArray* globalTracks,
         const TClonesArray* stsMatches,
         const TClonesArray* richMatches,
         Int_t index)
   {
      return !TrueMatchPiSuppAcceptanceFunction(globalTracks, stsMatches, richMatches, index);
   }

};

#endif /* BMNACCEPTANCEFUNCTION_H_ */
/**
 * \file BmnSimulationReport.h
 * \brief Base class for simulation reports.
 * \author Semen Lebedev <s.lebedev@gsi.de>
 * \date 2011
 */
#ifndef BMNSIMULATIONREPORT_H_
#define BMNSIMULATIONREPORT_H_

#include "BmnReport.h"
#include "BmnDrawHist.h"
#include <string>

using std::ostream;
using std::string;

class BmnHistManager;

/**
 * \class BmnSimulationReport
 * \brief Base class for simulation reports.
 * \author Semen Lebedev <s.lebedev@gsi.de>
 * \date 2011
 */
class BmnSimulationReport : public BmnReport {
public:
    /**
     * \brief Constructor.
     */
    BmnSimulationReport();

    /**
     * \brief Destructor.
     */
    virtual ~BmnSimulationReport();

    /**
     * \brief Main function which creates report data.
     *
     * Non virtual interface pattern is used here.
     * User always creates simulation report using this public non virtual method.
     * In order to configure concrete report generation class
     * user has to implement protected Create() method.
     *
     * \param[in] histManager Pointer to histogram manager for which report is created.
     * \param[in] outputDir Path to directory for output results.
     */
    void Create(
            BmnHistManager* histManager,
            const string& outputDir);

    /**
     * \brief Main function which creates report data.
     *
     * Same pattern is used here.
     *
     * \param[in] fileName Name of the file with histograms.
     * \param[in] outputDir Path to directory for output results.
     */
    void Create(
            const string& fileName,
            const string& outputDir);

    /**
     * \brief Return pointer to Histogram manager.
     */
    BmnHistManager* HM() const {
        return fHM;
    }

    /**
     * \brief Select by pattern TH1 histograms and draw each histogram on separate canvas.
     * \param[in] histNamePattern Name pattern for histogram.
     */
    void DrawH1ByPattern(
            const string& histNamePattern);

    /**
     * \brief Select by pattern TH1 histograms and draw all histograms on the same canvas.
     * \param[in] histNamePattern Name pattern for histogram.
     */
    void DrawH1ByPattern(
            const string& histNamePattern,
            string(*labelFormatter)(const string&, const BmnHistManager*));

    /**
     * \brief Select by pattern TH2 histograms and draw each histogram on separate canvas.
     * \param[in] histNamePattern Name pattern for histogram.
     * \param[in] logx Specify logarithmic or linear scale for X axis.
     * \param[in] logy Specify logarithmic or linear scale for Y axis.
     * \param[in] logz Specify logarithmic or linear scale for Z axis.
     * \param[in] drawOpt Other drawing options (see ROOT documentation for details).
     */
    void DrawH2ByPattern(
            const string& histNamePattern,
            HistScale logx = kLinear,
            HistScale logy = kLinear,
            HistScale logz = kLinear,
            const string& drawOpt = "");

    void SetOnlyPrimes(const Bool_t prime) {
        fPrimes = prime;
    }

    Bool_t GetOnlyPrimes() const {
        return fPrimes;
    }

private:
    BmnHistManager* fHM; // Histogram manager
    Bool_t fPrimes;

    BmnSimulationReport(const BmnSimulationReport&);
    BmnSimulationReport& operator=(const BmnSimulationReport&);

    ClassDef(BmnSimulationReport, 1)
};

#endif /* BmnSIMULATIONREPORT_H_ */
/**
 * \file BmnStudyReport.h
 * \brief Base class for study reports.
 * \author Semen Lebedev <s.lebedev@gsi.de>
 * \date 2011
 */
#ifndef BMNSTUDYREPORT_H_
#define BMNSTUDYREPORT_H_

#include "BmnReport.h"
#include <string>
#include <vector>

using std::vector;
using std::string;
using std::ostream;

class BmnHistManager;

/**
 * \class BmnStudyReport
 * \brief Base class for study reports.
 * \author Semen Lebedev <s.lebedev@gsi.de>
 * \date 2011
 */
class BmnStudyReport : public BmnReport
{
public:
   /**
    * \brief Constructor.
    */
   BmnStudyReport();

   /**
    * \brief Destructor.
    */
   virtual ~BmnStudyReport();

   /**
    * \brief Main function which creates report data.
    *
    * Non virtual interface pattern is used here.
    * User always creates simulation report using this public non virtual method.
    * In order to configure concrete report generation class
    * user has to implement protected Create() method
    * and getters for the file names.
    *
    * \param[in] histManagers Array of histogram managers for which report is created.
    * \param[in] studyNames Names of studies.
    * \param[in] outputDir name of the output directory.
    */
   void Create(
         const vector<BmnHistManager*>& histManagers,
         const vector<string>& studyNames,
         const string& outputDir);

   /**
    * \brief Main function which creates report data.
    *
    * Same pattern is used here.
    *
    * \param[in] fileNames Array of file names for which report is created.
    * \param[in] studyNames Names of studies.
    * \param[in] outputDir name of the output directory.
    */
   void Create(
         const vector<string>& fileNames,
         const vector<string>& studyNames,
         const string& outputDir);

   /* Accessors */
   const vector<BmnHistManager*>& HM() const { return fHM; }
   BmnHistManager* HM(Int_t index) const { return fHM[index]; }
   const vector<string>& GetStudyNames() const { return fStudyNames; }
   const string& GetStudyName(Int_t index) const { return fStudyNames[index]; }

private:
   vector<BmnHistManager*> fHM; // Histogram managers for each study
   vector<string> fStudyNames; // Names of studies

   ClassDef(BmnStudyReport, 1)
};

#endif /* BMNSTUDYREPORT_H_ */
/**
 * \file BmnHtmlReportElement.h
 * \brief Implementation of BmnReportElement for HTML output.
 * \author Semen Lebedev <s.lebedev@gsi.de>
 * \date 2011
 */
#ifndef BMNHTMLREPORTELEMENT_H_
#define BMNHTMLREPORTELEMENT_H_

#include "BmnReportElement.h"
#include <string>

using std::string;
using std::vector;

/**
 * \class BmnHtmlReportElement
 * \brief Implementation of BmnReportElement for text output.
 * \author Semen Lebedev <s.lebedev@gsi.de>
 * \date 2011
 */
class BmnHtmlReportElement: public BmnReportElement
{
public:
   /**
    * \brief Constructor.
    */
   BmnHtmlReportElement();

   /**
    * \brief Destructor.
    */
   virtual ~BmnHtmlReportElement();

   /**
    * \brief Inherited from BmnReportElement.
    */
   virtual string TableBegin(
         const string& caption,
         const vector<string>& colNames) const;

   /**
    * \brief Inherited from BmnReportElement.
    */
   virtual string TableEnd() const;

   /**
    * \brief Inherited from BmnReportElement.
    */
   virtual string TableEmptyRow(
         int nofCols,
         const string& name) const;

   /**
    * \brief Inherited from BmnReportElement.
    */
   virtual string TableRow(
         const vector<string>& row) const;

   /**
    * \brief Inherited from BmnReportElement.
    */
   virtual string Image(
         const string& title,
         const string& file) const;

   /**
    * \brief Inherited from BmnReportElement.
    */
   virtual string DocumentBegin() const;

   /**
    * \brief Inherited from BmnReportElement.
    */
   virtual string DocumentEnd() const;

   /**
    * \brief Inherited from BmnReportElement.
    */
   virtual string Title(
         int size,
         const string& title) const;

   ClassDef(BmnHtmlReportElement, 1)
};

#endif /* BmnHTMLREPORTELEMENT_H_ */
/**
 * \file BmnLitReport.h
 * \brief Base class for reports.
 * \author Andrey Lebedev <andrey.lebedev@gsi.de>
 * \date 2011
 */

#ifndef BMNREPORT_H_
#define BMNREPORT_H_

#include "TObject.h"
#include "TCanvas.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class BmnReportElement;

/**
 * \class BmnReport
 * \brief Base class for reports.
 * \author Andrey Lebedev <andrey.lebedev@gsi.de>
 * \date 2011
 */
class BmnReport : public TObject {
public:
   /**
    * \brief Constructor.
    */
   BmnReport();

   /**
    * \brief Destructor.
    */
   virtual ~BmnReport();

   /**
    * \brief Accessor to BmnReportElement object.
    * User has to write the report using available tags from BmnReportElement class.
    */
   const BmnReportElement* R() const { return fR; }

   /**
    * \brief All text output goes to this stream.
    */
   ostream& Out() const { return *fOut; }

   /* Setters */
   void SetReportName(TString name) { fReportName = name.Data(); }
   void SetReportTitle(const string& title) { fReportTitle = title; }
   void SetOutputDir(const string& outputDir) { fOutputDir = outputDir; }

   /* Accessors */
   const string& GetReportName() const { return fReportName; }
   const string& GetReportTitle() const { return fReportTitle; }
   const string& GetOutputDir() const { return fOutputDir; }

protected:
   /**
    * \brief Pure abstract function which is called from public Create() function.
    * This function has to write report using Out() for output stream and
    * R() for report elements. This function is called for each report type.
    */
   virtual void Create() = 0;

   /**
    * \brief Pure abstract function which is called from public Create() function.
    * This function has to draw all necessary histograms and graphs.
    * It is called only once before report creation.
    */
   virtual void Draw() = 0;

   /**
    * \brief Create all available report types.
    */
   void CreateReports();

   /**
    * \brief Create canvas and put it to vector of TCanvases.
    * Canvases created with this function will be automatically saved to image and
    * printed in the report.
    */
   TCanvas* CreateCanvas(
		   const char* name,
		   const char* title,
		   Int_t ww,
		   Int_t wh);

   /**
    * \brief Save all canvases to images.
    */
   void SaveCanvasesAsImages() const;

   /**
    * \brief Write canvases to file.
    */
   void WriteCanvases() const;

   /**
    * \brief Print images created from canvases in the report.
    */
   void PrintCanvases() const;

private:
   /**
    * \brief Create concrete BmnReportElement instance based on report type.
    * \param[in] reportType Type of the report to be produced.
    */
   void CreateReportElement();

   /**
    * \brief Delete report element. Normally should be called at the end of Create function.
    */
   void DeleteReportElement();

   string fReportName; // Name of report
   string fReportTitle; // Title of report
   string fOutputDir; // Output directory for the report files
   BmnReportElement* fR; // Report element tool
   mutable ostream* fOut; // Output stream

   // Storage for TCanvas. All Canvases in this vector will be automatically saved
   // to image and printed in the report.
   // User can use CreateCanvas function which automatically push created canvas in this vector.
   vector<TCanvas*> fCanvases;

//private:

   BmnReport(const BmnReport&);
   BmnReport& operator=(const BmnReport&);

   ClassDef(BmnReport, 1)
};

#endif /* BmnREPORT_H_ */
/**
 * \file BmnDrawHist.h
 * \brief Helper functions for drawing 1D and 2D histograms and graphs.
 * \author Andrey Lebedev <andrey.lebedev@gsi.de>
 * \date 2008
 **/
#ifndef BMNDRAWHIST_H_
#define BMNDRAWHIST_H_

#include "TH1.h"
#include "TH1D.h"
#include "TH2.h"
#include "TPad.h"
#include "TLegend.h"
#include "TGraph.h"
#include "TGraph2D.h"

#include <string>
#include <vector>
using std::string;
using std::vector;

/**
 * \class BmnDrawingOptions
 * \brief Default options for drawing.
 * \author Andrey Lebedev <andrey.lebedev@gsi.de>
 * \date 2012
 */
class BmnDrawingOptions {
public:

    static Int_t Color(Int_t colorIndex) {
        static const Int_t nofColors = 6;
        static Int_t colors[nofColors] = {kRed, kBlue + 1, kGreen + 3, kMagenta + 4, kYellow + 2, kViolet};
        return (colorIndex < nofColors) ? colors[colorIndex] : colorIndex;
    }

    static Int_t LineWidth() {
        return 2;
    }

    static Int_t LineStyle(Int_t lineStyleIndex) {
        return lineStyleIndex + 1;
    }

    static Float_t MarkerSize() {
        return 0.8;
    }

    static Int_t MarkerStyle(Int_t markerIndex) {
        static const Int_t nofMarkers = 4;
//        static Int_t markers[nofMarkers] = {kOpenCircle, kOpenSquare, kOpenTriangleUp, kOpenDiamond,
//            kFullCircle, kFullSquare, kFullTriangleUp};
        static Int_t markers[nofMarkers] = {kFullCircle, kFullSquare, kFullTriangleUp, kFullDiamond};
        return (markerIndex < nofMarkers) ? markers[markerIndex] : markerIndex;
    }

    static Double_t TextSize() {
        return 0.06;
    }
};

/**
 * \enum HistScale
 * \brief Define linear or logarithmic scale for drawing.
 */
enum HistScale {
    kLog = 0, /**> Linear scale. */
    kLinear = 1 /**> Logarithmic scale */
};


/**
 * \fn SetStyles
 * \brief Set default styles for histograms.
 */
void SetDefaultDrawStyle();

/**
 * \fn DrawH1
 * \brief Draw 1D histogram.
 * \param[in] hist Pointer to histogram.
 * \param[in] logx Specify logarithmic or linear scale for X axis.
 * \param[in] logy Specify logarithmic or linear scale for Y axis.
 * \param[in] drawOpt Other drawing options (see ROOT documentation for details).
 * \param[in] color Color.
 * \param[in] lineWidth Line width.
 * \param[in] lineStyle Line style (see ROOT documentation for details).
 * \param[in] markerSize Marker size.
 * \param[in] markerStyle Marker style (see ROOT documentation for details).
 */
void DrawH1(
        TH1* hist,
        HistScale logx = kLinear,
        HistScale logy = kLinear,
        const string& drawOpt = "",
        Int_t color = BmnDrawingOptions::Color(0),
        Int_t lineWidth = BmnDrawingOptions::LineWidth(),
        Int_t lineStyle = BmnDrawingOptions::LineStyle(0),
        Float_t markerSize = BmnDrawingOptions::MarkerSize(),
        Int_t markerStyle = BmnDrawingOptions::MarkerStyle(0),
        Int_t fillColor = -1);


/**
 * \fn DrawH2
 * \brief Draw 2D histogram.
 * \param[in] logx Specify logarithmic or linear scale for X axis.
 * \param[in] logy Specify logarithmic or linear scale for Y axis.
 * \param[in] logz Specify logarithmic or linear scale for Z axis.
 * \param[in] drawOpt Other drawing options (see ROOT documentation for details).
 */
void DrawH2(
        TH2* hist,
        HistScale logx = kLinear,
        HistScale logy = kLinear,
        HistScale logz = kLinear,
        const string& drawOpt = "COLZ");


/**
 * \fn DrawH1
 * \brief Draw several TH1 histograms.
 * \param[in] histos Array of histograms.
 * \param[in] histLabels Array of histogram labels.
 * \param[in] logx Specify logarithmic or linear scale for X axis.
 * \param[in] logy Specify logarithmic or linear scale for Y axis.
 * \param[in] drawLegend If true than legend will be drawn.
 * \param[in] x1 X coordinate of legend in current pad.
 * \param[in] y1 Y coordinate of legend in current pad.
 * \param[in] x2 X coordinate of legend in current pad.
 * \param[in] y2 Y coordinate of legend in current pad.
 * \param[in] drawOpt Draw options for TH1->Draw method.
 */
void DrawH1(
        const vector<TH1*>& histos,
        const vector<string>& histLabels,
        HistScale logx = kLinear,
        HistScale logy = kLinear,
        Bool_t drawLegend = true,
        Double_t x1 = 0.25,
        Double_t y1 = 0.99,
        Double_t x2 = 0.55,
        Double_t y2 = 0.75,
        const string& drawOpt = "", Bool_t drawMeanLine = kTRUE);

/**
 * \fn DrawGraph
 * \brief Draw TGraph.
 * \param[in] graph Pointer to TGraph.
 * \param[in] logx Specify logarithmic or linear scale for X axis.
 * \param[in] logy Specify logarithmic or linear scale for Y axis.
 * \param[in] drawOpt Other drawing options (see ROOT documentation for details).
 * \param[in] color Color.
 * \param[in] lineWidth Line width.
 * \param[in] lineStyle Line style (see ROOT documentation for details).
 * \param[in] markerSize Marker size.
 * \param[in] markerStyle Marker style (see ROOT documentation for details).
 */
void DrawGraph(
        TGraph* graph,
        HistScale logx = kLinear,
        HistScale logy = kLinear,
        const string& drawOpt = "AC",
        Int_t color = BmnDrawingOptions::Color(0),
        Int_t lineWidth = BmnDrawingOptions::LineWidth(),
        Int_t lineStyle = BmnDrawingOptions::LineStyle(0),
        Int_t markerSize = BmnDrawingOptions::MarkerSize(),
        Int_t markerStyle = BmnDrawingOptions::MarkerStyle(0));

/**
 * \fn DrawGraph.
 * \brief Draw upto 3 TGraphs. If graph == NULL than graph will not be drawn.
 * \param[in] graphs Vector of TGraphs.
 * \param[in] graphLabels Vector of graph labels.
 * \param[in] logx Specify logarithmic or linear scale for X axis.
 * \param[in] logy Specify logarithmic or linear scale for Y axis.
 * \param[in] drawLegend If true than legend will be drawn.
 * \param[in] x1 X coordinate of legend in current pad.
 * \param[in] y1 Y coordinate of legend in current pad.
 * \param[in] x2 X coordinate of legend in current pad.
 * \param[in] y2 Y coordinate of legend in current pad.
 */
void DrawGraph(
        const vector<TGraph*>& graphs,
        const vector<string>& graphLabels,
        HistScale logx = kLinear,
        HistScale logy = kLinear,
        Bool_t drawLegend = true,
        Double_t x1 = 0.25,
        Double_t y1 = 0.99,
        Double_t x2 = 0.55,
        Double_t y2 = 0.75);

/**
 * \fn DrawGraph2D
 * \brief Draw 2D graph.
 * \param[in] graph Pointer to TGraph2D.
 * \param[in] logx Specify logarithmic or linear scale for X axis.
 * \param[in] logy Specify logarithmic or linear scale for Y axis.
 * \param[in] logz Specify logarithmic or linear scale for Z axis.
 * \param[in] drawOpt Other drawing options (see ROOT documentation for details).
 */
void DrawGraph2D(
        TGraph2D* graph,
        HistScale logx = kLinear,
        HistScale logy = kLinear,
        HistScale logz = kLinear,
        const string& drawOpt = "colz");

void DrawMeanLine(TH1* hist);

#endif
/**
 * \file BmnHistManager.h
 * \brief Histogram manager.
 * \author Semen Lebedev <s.lebedev@gsi.de>
 * \date 2011
 */

#ifndef BMNHISTMANAGER_H_
#define BMNHISTMANAGER_H_

#include "TObject.h"
#include <iostream>
#include <map>
#include "TString.h"
#include <vector>
#include <cassert>
#include <utility>
#include <functional>

class TFile;
class TNamed;
class TH1;
class TH2;
class TGraph;
class TGraph2D;
class TProfile;
class TProfile2D;

using std::map;
using std::make_pair;
using std::string;
using std::vector;

/**
 * \class BmnHistManager
 * \brief Histogram manager.
 * \author Semen Lebedev <s.lebedev@gsi.de>
 * \date 2011
 */
class BmnHistManager : public TObject
{
public:

   /**
    * \brief Constructor.
    */
   BmnHistManager();

   /**
    * \brief Destructor.
    */
   virtual ~BmnHistManager();

   /**
    * \brief Add new named object to manager.
    * \param[in] name Name of the object.
    * \param[in] object Pointer to object.
    */
   void Add(const TString& name, TNamed* object) {
         std::pair<TString, TNamed*> newpair = std::make_pair(name, object);
      fMap.insert(newpair);
   }

   /**
    * \brief Helper function for creation of 1-dimensional histograms and profiles.
    * Template argument is a real object type that has to be created, for example,
    * Create1<TH1F>("name", "title", 100, 0, 100);
    * \param[in] name Object name.
    * \param[in] title Object title.
    * \param[in] nofBins Number of bins.
    * \param[in] minBin Low axis limit.
    * \param[in] maxBin Upper axis limit.
    */
   template<class T> void Create1(
         const TString& name,
         const TString& title,
         Int_t nofBins,
         Double_t minBin,
         Double_t maxBin) {
		T* h = new T(name.Data(), title.Data(), nofBins, minBin, maxBin);
		Add(name, h);
	}

   /**
    * \brief Helper function for creation of 2-dimensional histograms and profiles.
    * Template argument is a real object type that has to be created, for example,
    * Create2<TH2F>("name", "title", 100, 0, 100, 200, 0, 200);
    * \param[in] name Object name.
    * \param[in] title Object title.
    * \param[in] nofBinsX Number of bins for X axis.
    * \param[in] minBinX Low X axis limit.
    * \param[in] maxBinX Upper X axis limit.
    * \param[in] nofBinsY Number of bins for Y axis.
    * \param[in] minBinY Low Y axis limit.
    * \param[in] maxBinY Upper Y axis limit.
    */
   template<class T> void Create2(
         const TString& name,
         const TString& title,
         Int_t nofBinsX,
         Double_t minBinX,
         Double_t maxBinX,
         Int_t nofBinsY,
         Double_t minBinY,
         Double_t maxBinY) {
   	T* h = new T(name.Data(), title.Data(), nofBinsX, minBinX, maxBinX, nofBinsY, minBinY, maxBinY);
   	Add(name, h);
   }

   /**
    * \brief Return pointer to TH1 histogram.
    * \param[in] name Name of histogram.
    * \return pointer to TH1 histogram.
    */
   TH1* H1(const TString& name) const {
      if (fMap.count(name) == 0) { // Temporarily used for debugging
    	  std::cout << "Error: BmnHistManager::H1(name): name=" << name << std::endl;
      }
      assert(fMap.count(name) != 0);
      return (TH1*) fMap.find(name)->second;
   }

   /**
    * \brief Return pointer to TH2 histogram.
    * \param[in] name Name of histogram.
    * \return pointer to TH1 histogram.
    */
   TH2* H2(const TString& name) const {
      if (fMap.count(name) == 0) { // Temporarily used for debugging
    	  std::cout << "Error: BmnHistManager::H2(name): name=" << name << std::endl;
      }
      assert(fMap.count(name) != 0);
      return (TH2*) fMap.find(name)->second;
   }

   /**
    * \brief Check existence of histogram in manager.
    * \param[in] name Name of histogram.
    * \return True if histogram exists in manager.
    */
   Bool_t Exists(const TString& name) const {
      return (fMap.count(name) == 0) ? false : true;
   }

   /**
    * \brief Write all histograms to current opened file.
    */
   void WriteToFile();

   /**
    * \brief Read histograms from file.
    * \param[in] file Pointer to file with histograms.
    */
   void ReadFromFile(
         TFile* file);

   /**
    * \brief Clear memory. Remove all histograms.
    */
   void Clear();

   /**
    * \brief Shrink empty bins in H1.
    * \param[in] histName Name of histogram.
    */
   void ShrinkEmptyBinsH1(const TString& histName);


   /**
    * \brief Shrink empty bins in H2.
    * \param[in] histName Name of histogram.
    */
   void ShrinkEmptyBinsH2(const TString& histName);

   /**
    * \brief Scale histogram.
    * \param[in] histName Name of histogram.
    * \param[in] scale Scaling factor.
    */
   void Scale(const TString& histName, Double_t scale);
   
   /**
    * \brief Normalize histogram to integral.
    * \param[in] histName Name of histogram.
    */
   void NormalizeToIntegral(const TString& histName);

      /**
    * \brief Rebin histogram.
    * \param[in] histName Name of histogram.
    * \param[in] ngroup Rebining factor.
    */
   void Rebin(const TString& histName, Int_t ngroup);

   /**
    * \brief Return string representation of class.
    * \return string representation of class.
    */
   TString ToString() const;

   /**
    * \brief Operator << for convenient output to std::ostream.
    * \return Insertion stream in order to be able to call a succession of insertion operations.
    */
   friend std::ostream& operator<<(std::ostream& strm, const BmnHistManager& histManager) {
      strm << histManager.ToString();
      return strm;
   }

private:

   // Map of histogram (graph) name to its pointer
   map<TString, TNamed*> fMap;

   ClassDef(BmnHistManager, 1)
};

#endif /* BmnHISTMANAGER_H_ */
/**
 * \file BmnMatchRecoToMC.h
 * \brief FairTask for matching RECO data to MC.
 * \author Andrey Lebedev <andrey.lebedev@gsi.de> - original author for CBM experiment
 * \author Sergey Merts <sergey.merts@gmail.com> - modifications for BMN experiment
 * \date 2013-2014
 *
 */

#ifndef BMNMATCHRECOTOMC_H_
#define BMNMATCHRECOTOMC_H_

#include "FairTask.h"
#include "BmnMatch.h"
#include "BmnTrackMatch.h"
#include "BmnGlobalTrack.h"
#include "BmnGemTrack.h"
#include "BmnGemStripHit.h"
#include "CbmTofHit.h"
#include "BmnDchHit.h"
#include "FairMCPoint.h"
#include "FairLogger.h"
#include "TClonesArray.h"
#include "BmnEnums.h"
#include "BmnLink.h"

class TClonesArray;

class BmnMatchRecoToMC : public FairTask {
public:
    /**
     * \brief Constructor.
     */
    BmnMatchRecoToMC();

    /**
     * \brief Destructor.
     */
    virtual ~BmnMatchRecoToMC();

    /**
     * \brief Derived from FairTask.
     */
    virtual InitStatus Init();

    /**
     * \brief Derived from FairTask.
     */
    virtual void Exec(
            Option_t* opt);

    /**
     * \brief Derived from FairTask.
     */
    virtual void Finish();

private:
    /**
     * \brief Read and create data branches.
     */
    void ReadAndCreateDataBranches();

    //    void MatchClusters(
    //          const TClonesArray* digiMatches,
    //          const TClonesArray* clusters,
    //          TClonesArray* clusterMatches);
    //
    //    void MatchHits(
    //          const TClonesArray* matches,
    //          const TClonesArray* hits,
    //          TClonesArray* hitMatches);
    //
    //    void MatchHitsGem(
    //          const TClonesArray* matches,
    //          const TClonesArray* hits,
    //          TClonesArray* hitMatches);
    //
    //    void MatchHitsToPoints(
    //          const TClonesArray* points,
    //          const TClonesArray* hits,
    //          TClonesArray* hitMatches);
    
    BmnStatus LinkToMC(const TClonesArray* hitMatchArr, const TClonesArray* points, Int_t id, BmnTrackMatch* trackMatch);
    void MatchHitsToPoints(
            const TClonesArray* points,
            const TClonesArray* hits,
            TClonesArray* hitMatches);

    void MatchTofHitsToPoints(
            const TClonesArray* points,
            const TClonesArray* hits,
            TClonesArray* hitMatches);

    void MatchDchHitsToPoints(
            const TClonesArray* points,
            const TClonesArray* hits,
            TClonesArray* hitMatches);

    void MatchGemHitsToDigits(
            const TClonesArray* digitMatches,
            const TClonesArray* hits,
            TClonesArray* hitMatches);

    void MatchGemTracks(
            const TClonesArray* hitMatches,
            const TClonesArray* points,
            const TClonesArray* tracks,
            TClonesArray* trackMatches);
    
    void MatchGlobalTracks(
            const TClonesArray* gemHitMatches,
            const TClonesArray* silHitMatches,
            const TClonesArray* tof1HitMatches,
            const TClonesArray* tof2HitMatches,
            const TClonesArray* dch1HitMatches,
            const TClonesArray* dch2HitMatches,
            const TClonesArray* gemPoints,
            const TClonesArray* silPoints,
            const TClonesArray* tof1Points,
            const TClonesArray* tof2Points,
            const TClonesArray* dch1Points,
            const TClonesArray* dch2Points,
            const TClonesArray* gemTracks,
            const TClonesArray* globTracks,
            TClonesArray* trackMatches);

    // Pointers to data arrays
   
    // GEM
    TClonesArray* fGemPoints; // BmnStsPoint array
    TClonesArray* fGemDigits; // BmnStsDigi array
    TClonesArray* fGemClusters; // BmnStsCluster array
    TClonesArray* fGemHits; // BmnStsHit array
    TClonesArray* fGemTracks; // BmnStsTrack array
    TClonesArray* fGemDigitMatches; // Output BmnMatch array
    TClonesArray* fGemClusterMatches; // Output BmnMatch array
    TClonesArray* fGemHitMatches; // Output BmnMatch array
    TClonesArray* fGemTrackMatches; // Output BmnTrackMatchNew array

    // SILICON
    TClonesArray* fSilPoints;
    TClonesArray* fSilDigits;
    TClonesArray* fSilClusters;
    TClonesArray* fSilHits;
    TClonesArray* fSilDigitMatches;
    TClonesArray* fSilClusterMatches;
    TClonesArray* fSilHitMatches;    
    
    // TOF1
    TClonesArray* fTof1Points; // BmnStsPoint array
    TClonesArray* fTof1Digis; // BmnStsDigi array
    TClonesArray* fTof1Clusters; // BmnStsCluster array
    TClonesArray* fTof1Hits; // BmnStsHit array
    TClonesArray* fTof1DigiMatches; // Output BmnMatch array
    TClonesArray* fTof1ClusterMatches; // Output BmnMatch array
    TClonesArray* fTof1HitMatches; // Output BmnMatch array   

    // TOF2
    TClonesArray* fTof2Points; // BmnStsPoint array
    TClonesArray* fTof2Digis; // BmnStsDigi array
    TClonesArray* fTof2Clusters; // BmnStsCluster array
    TClonesArray* fTof2Hits; // BmnStsHit array
    TClonesArray* fTof2DigiMatches; // Output BmnMatch array
    TClonesArray* fTof2ClusterMatches; // Output BmnMatch array
    TClonesArray* fTof2HitMatches; // Output BmnMatch array   

    // DCH1
    TClonesArray* fDch1Points; // BmnStsPoint array
    TClonesArray* fDch1Digis; // BmnStsDigi array
    TClonesArray* fDch1Clusters; // BmnStsCluster array
    TClonesArray* fDch1Hits; // BmnStsHit array
    TClonesArray* fDch1DigiMatches; // Output BmnMatch array
    TClonesArray* fDch1ClusterMatches; // Output BmnMatch array
    TClonesArray* fDch1HitMatches; // Output BmnMatch array   

    // DCH2
    TClonesArray* fDch2Points; // BmnStsPoint array
    TClonesArray* fDch2Digis; // BmnStsDigi array
    TClonesArray* fDch2Clusters; // BmnStsCluster array
    TClonesArray* fDch2Hits; // BmnStsHit array
    TClonesArray* fDch2DigiMatches; // Output BmnMatch array
    TClonesArray* fDch2ClusterMatches; // Output BmnMatch array
    TClonesArray* fDch2HitMatches; // Output BmnMatch array  

    // GLOBAL
    TClonesArray* fGlobalTracks;
    TClonesArray* fTrackMatches;
    TClonesArray* fMCTracks;

    BmnMatchRecoToMC(const BmnMatchRecoToMC&);
    BmnMatchRecoToMC& operator=(const BmnMatchRecoToMC&);

    ClassDef(BmnMatchRecoToMC, 1);
};

#endif /* BMNMATCHRECOTOMC_H_ */

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"BmnAcceptanceFunction", payloadCode, "@",
"BmnClusteringQa", payloadCode, "@",
"BmnClusteringQaReport", payloadCode, "@",
"BmnHistManager", payloadCode, "@",
"BmnHtmlReportElement", payloadCode, "@",
"BmnMCPoint", payloadCode, "@",
"BmnMCTrack", payloadCode, "@",
"BmnMCTrackCreator", payloadCode, "@",
"BmnMatchRecoToMC", payloadCode, "@",
"BmnReport", payloadCode, "@",
"BmnReportElement", payloadCode, "@",
"BmnSimulationReport", payloadCode, "@",
"BmnStudyReport", payloadCode, "@",
"BmnTrackingQa", payloadCode, "@",
"BmnTrackingQaReport", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__BmnQaDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__BmnQaDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__BmnQaDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__BmnQaDict() {
  TriggerDictionaryInitialization_G__BmnQaDict_Impl();
}
