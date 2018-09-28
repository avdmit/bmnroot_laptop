// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIalexdIbmnroot_devdIbmnrootdIbuilddIgemdIG__GemDict

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
#include "BmnGemHitProducer.h"
#include "BmnGemGeo.h"
#include "BmnGemDigit.h"
#include "BmnGemGas.h"
#include "BmnManageQA.h"
#include "BmnGemDigitizerQAHistograms.h"
#include "BmnGemTracking.h"
#include "BmnGemStripLayer.h"
#include "BmnGemStripModule.h"
#include "BmnGemStripStation.h"
#include "BmnGemStripStationSet.h"
#include "BmnGemStripStation_RunSummer2016.h"
#include "BmnGemStripStationSet_RunSummer2016.h"
#include "BmnGemStripStation_RunWinter2016.h"
#include "BmnGemStripStationSet_RunWinter2016.h"
#include "BmnGemStripStation_RunSpring2017.h"
#include "BmnGemStripStationSet_RunSpring2017.h"
#include "BmnGemStripDigit.h"
#include "BmnGemStripDigitizer.h"
#include "BmnGemStripHitMaker.h"
#include "BmnKalmanFilter.h"
#include "BmnGemStripMedium.h"
#include "BmnMaterialEffects.h"

// Header files passed via #pragma extra_include

namespace BmnGemStripMediumConfiguration {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *BmnGemStripMediumConfiguration_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("BmnGemStripMediumConfiguration", 0 /*version*/, "BmnGemStripMediumConfiguration.h", 4,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &BmnGemStripMediumConfiguration_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *BmnGemStripMediumConfiguration_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace BmnGemStripConfiguration {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *BmnGemStripConfiguration_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("BmnGemStripConfiguration", 0 /*version*/, "BmnGemStripConfiguration.h", 4,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &BmnGemStripConfiguration_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *BmnGemStripConfiguration_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace ROOT {
   static void *new_BmnGemHitProducer(void *p = 0);
   static void *newArray_BmnGemHitProducer(Long_t size, void *p);
   static void delete_BmnGemHitProducer(void *p);
   static void deleteArray_BmnGemHitProducer(void *p);
   static void destruct_BmnGemHitProducer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemHitProducer*)
   {
      ::BmnGemHitProducer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGemHitProducer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemHitProducer", ::BmnGemHitProducer::Class_Version(), "", 28,
                  typeid(::BmnGemHitProducer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGemHitProducer::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemHitProducer) );
      instance.SetNew(&new_BmnGemHitProducer);
      instance.SetNewArray(&newArray_BmnGemHitProducer);
      instance.SetDelete(&delete_BmnGemHitProducer);
      instance.SetDeleteArray(&deleteArray_BmnGemHitProducer);
      instance.SetDestructor(&destruct_BmnGemHitProducer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemHitProducer*)
   {
      return GenerateInitInstanceLocal((::BmnGemHitProducer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemHitProducer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnGemGeo(void *p = 0);
   static void *newArray_BmnGemGeo(Long_t size, void *p);
   static void delete_BmnGemGeo(void *p);
   static void deleteArray_BmnGemGeo(void *p);
   static void destruct_BmnGemGeo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemGeo*)
   {
      ::BmnGemGeo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGemGeo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemGeo", ::BmnGemGeo::Class_Version(), "", 94,
                  typeid(::BmnGemGeo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGemGeo::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemGeo) );
      instance.SetNew(&new_BmnGemGeo);
      instance.SetNewArray(&newArray_BmnGemGeo);
      instance.SetDelete(&delete_BmnGemGeo);
      instance.SetDeleteArray(&deleteArray_BmnGemGeo);
      instance.SetDestructor(&destruct_BmnGemGeo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemGeo*)
   {
      return GenerateInitInstanceLocal((::BmnGemGeo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemGeo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnGemDigit(void *p = 0);
   static void *newArray_BmnGemDigit(Long_t size, void *p);
   static void delete_BmnGemDigit(void *p);
   static void deleteArray_BmnGemDigit(void *p);
   static void destruct_BmnGemDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemDigit*)
   {
      ::BmnGemDigit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGemDigit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemDigit", ::BmnGemDigit::Class_Version(), "", 217,
                  typeid(::BmnGemDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGemDigit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemDigit) );
      instance.SetNew(&new_BmnGemDigit);
      instance.SetNewArray(&newArray_BmnGemDigit);
      instance.SetDelete(&delete_BmnGemDigit);
      instance.SetDeleteArray(&deleteArray_BmnGemDigit);
      instance.SetDestructor(&destruct_BmnGemDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemDigit*)
   {
      return GenerateInitInstanceLocal((::BmnGemDigit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemDigit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *BmnGemGas_Dictionary();
   static void BmnGemGas_TClassManip(TClass*);
   static void *new_BmnGemGas(void *p = 0);
   static void *newArray_BmnGemGas(Long_t size, void *p);
   static void delete_BmnGemGas(void *p);
   static void deleteArray_BmnGemGas(void *p);
   static void destruct_BmnGemGas(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemGas*)
   {
      ::BmnGemGas *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BmnGemGas));
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemGas", "", 258,
                  typeid(::BmnGemGas), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BmnGemGas_Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemGas) );
      instance.SetNew(&new_BmnGemGas);
      instance.SetNewArray(&newArray_BmnGemGas);
      instance.SetDelete(&delete_BmnGemGas);
      instance.SetDeleteArray(&deleteArray_BmnGemGas);
      instance.SetDestructor(&destruct_BmnGemGas);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemGas*)
   {
      return GenerateInitInstanceLocal((::BmnGemGas*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemGas*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BmnGemGas_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BmnGemGas*)0x0)->GetClass();
      BmnGemGas_TClassManip(theClass);
   return theClass;
   }

   static void BmnGemGas_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnGemDigitizerQAHistograms(void *p = 0);
   static void *newArray_BmnGemDigitizerQAHistograms(Long_t size, void *p);
   static void delete_BmnGemDigitizerQAHistograms(void *p);
   static void deleteArray_BmnGemDigitizerQAHistograms(void *p);
   static void destruct_BmnGemDigitizerQAHistograms(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemDigitizerQAHistograms*)
   {
      ::BmnGemDigitizerQAHistograms *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGemDigitizerQAHistograms >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemDigitizerQAHistograms", ::BmnGemDigitizerQAHistograms::Class_Version(), "", 392,
                  typeid(::BmnGemDigitizerQAHistograms), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGemDigitizerQAHistograms::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemDigitizerQAHistograms) );
      instance.SetNew(&new_BmnGemDigitizerQAHistograms);
      instance.SetNewArray(&newArray_BmnGemDigitizerQAHistograms);
      instance.SetDelete(&delete_BmnGemDigitizerQAHistograms);
      instance.SetDeleteArray(&deleteArray_BmnGemDigitizerQAHistograms);
      instance.SetDestructor(&destruct_BmnGemDigitizerQAHistograms);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemDigitizerQAHistograms*)
   {
      return GenerateInitInstanceLocal((::BmnGemDigitizerQAHistograms*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemDigitizerQAHistograms*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *BmnMaterialEffects_Dictionary();
   static void BmnMaterialEffects_TClassManip(TClass*);
   static void *new_BmnMaterialEffects(void *p = 0);
   static void *newArray_BmnMaterialEffects(Long_t size, void *p);
   static void delete_BmnMaterialEffects(void *p);
   static void deleteArray_BmnMaterialEffects(void *p);
   static void destruct_BmnMaterialEffects(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMaterialEffects*)
   {
      ::BmnMaterialEffects *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BmnMaterialEffects));
      static ::ROOT::TGenericClassInfo 
         instance("BmnMaterialEffects", "BmnMaterialEffects.h", 24,
                  typeid(::BmnMaterialEffects), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BmnMaterialEffects_Dictionary, isa_proxy, 4,
                  sizeof(::BmnMaterialEffects) );
      instance.SetNew(&new_BmnMaterialEffects);
      instance.SetNewArray(&newArray_BmnMaterialEffects);
      instance.SetDelete(&delete_BmnMaterialEffects);
      instance.SetDeleteArray(&deleteArray_BmnMaterialEffects);
      instance.SetDestructor(&destruct_BmnMaterialEffects);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMaterialEffects*)
   {
      return GenerateInitInstanceLocal((::BmnMaterialEffects*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMaterialEffects*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BmnMaterialEffects_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BmnMaterialEffects*)0x0)->GetClass();
      BmnMaterialEffects_TClassManip(theClass);
   return theClass;
   }

   static void BmnMaterialEffects_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BmnKalmanFilter_Dictionary();
   static void BmnKalmanFilter_TClassManip(TClass*);
   static void *new_BmnKalmanFilter(void *p = 0);
   static void *newArray_BmnKalmanFilter(Long_t size, void *p);
   static void delete_BmnKalmanFilter(void *p);
   static void deleteArray_BmnKalmanFilter(void *p);
   static void destruct_BmnKalmanFilter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnKalmanFilter*)
   {
      ::BmnKalmanFilter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BmnKalmanFilter));
      static ::ROOT::TGenericClassInfo 
         instance("BmnKalmanFilter", "BmnKalmanFilter.h", 26,
                  typeid(::BmnKalmanFilter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BmnKalmanFilter_Dictionary, isa_proxy, 4,
                  sizeof(::BmnKalmanFilter) );
      instance.SetNew(&new_BmnKalmanFilter);
      instance.SetNewArray(&newArray_BmnKalmanFilter);
      instance.SetDelete(&delete_BmnKalmanFilter);
      instance.SetDeleteArray(&deleteArray_BmnKalmanFilter);
      instance.SetDestructor(&destruct_BmnKalmanFilter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnKalmanFilter*)
   {
      return GenerateInitInstanceLocal((::BmnKalmanFilter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnKalmanFilter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BmnKalmanFilter_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BmnKalmanFilter*)0x0)->GetClass();
      BmnKalmanFilter_TClassManip(theClass);
   return theClass;
   }

   static void BmnKalmanFilter_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BmnGemStripLayer_Dictionary();
   static void BmnGemStripLayer_TClassManip(TClass*);
   static void *new_BmnGemStripLayer(void *p = 0);
   static void *newArray_BmnGemStripLayer(Long_t size, void *p);
   static void delete_BmnGemStripLayer(void *p);
   static void deleteArray_BmnGemStripLayer(void *p);
   static void destruct_BmnGemStripLayer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemStripLayer*)
   {
      ::BmnGemStripLayer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BmnGemStripLayer));
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemStripLayer", "BmnGemStripLayer.h", 15,
                  typeid(::BmnGemStripLayer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BmnGemStripLayer_Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemStripLayer) );
      instance.SetNew(&new_BmnGemStripLayer);
      instance.SetNewArray(&newArray_BmnGemStripLayer);
      instance.SetDelete(&delete_BmnGemStripLayer);
      instance.SetDeleteArray(&deleteArray_BmnGemStripLayer);
      instance.SetDestructor(&destruct_BmnGemStripLayer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemStripLayer*)
   {
      return GenerateInitInstanceLocal((::BmnGemStripLayer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemStripLayer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BmnGemStripLayer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripLayer*)0x0)->GetClass();
      BmnGemStripLayer_TClassManip(theClass);
   return theClass;
   }

   static void BmnGemStripLayer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemStripMedium*)
   {
      ::BmnGemStripMedium *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGemStripMedium >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemStripMedium", ::BmnGemStripMedium::Class_Version(), "BmnGemStripMedium.h", 8,
                  typeid(::BmnGemStripMedium), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGemStripMedium::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemStripMedium) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemStripMedium*)
   {
      return GenerateInitInstanceLocal((::BmnGemStripMedium*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemStripMedium*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *BmnGemStripModule_Dictionary();
   static void BmnGemStripModule_TClassManip(TClass*);
   static void *new_BmnGemStripModule(void *p = 0);
   static void *newArray_BmnGemStripModule(Long_t size, void *p);
   static void delete_BmnGemStripModule(void *p);
   static void deleteArray_BmnGemStripModule(void *p);
   static void destruct_BmnGemStripModule(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemStripModule*)
   {
      ::BmnGemStripModule *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BmnGemStripModule));
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemStripModule", "BmnGemStripModule.h", 20,
                  typeid(::BmnGemStripModule), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BmnGemStripModule_Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemStripModule) );
      instance.SetNew(&new_BmnGemStripModule);
      instance.SetNewArray(&newArray_BmnGemStripModule);
      instance.SetDelete(&delete_BmnGemStripModule);
      instance.SetDeleteArray(&deleteArray_BmnGemStripModule);
      instance.SetDestructor(&destruct_BmnGemStripModule);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemStripModule*)
   {
      return GenerateInitInstanceLocal((::BmnGemStripModule*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemStripModule*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BmnGemStripModule_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripModule*)0x0)->GetClass();
      BmnGemStripModule_TClassManip(theClass);
   return theClass;
   }

   static void BmnGemStripModule_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnGemStripStation(void *p = 0);
   static void *newArray_BmnGemStripStation(Long_t size, void *p);
   static void delete_BmnGemStripStation(void *p);
   static void deleteArray_BmnGemStripStation(void *p);
   static void destruct_BmnGemStripStation(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemStripStation*)
   {
      ::BmnGemStripStation *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGemStripStation >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemStripStation", ::BmnGemStripStation::Class_Version(), "BmnGemStripStation.h", 12,
                  typeid(::BmnGemStripStation), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGemStripStation::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemStripStation) );
      instance.SetNew(&new_BmnGemStripStation);
      instance.SetNewArray(&newArray_BmnGemStripStation);
      instance.SetDelete(&delete_BmnGemStripStation);
      instance.SetDeleteArray(&deleteArray_BmnGemStripStation);
      instance.SetDestructor(&destruct_BmnGemStripStation);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemStripStation*)
   {
      return GenerateInitInstanceLocal((::BmnGemStripStation*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemStripStation*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnGemStripStationSet(void *p = 0);
   static void *newArray_BmnGemStripStationSet(Long_t size, void *p);
   static void delete_BmnGemStripStationSet(void *p);
   static void deleteArray_BmnGemStripStationSet(void *p);
   static void destruct_BmnGemStripStationSet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemStripStationSet*)
   {
      ::BmnGemStripStationSet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGemStripStationSet >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemStripStationSet", ::BmnGemStripStationSet::Class_Version(), "BmnGemStripStationSet.h", 12,
                  typeid(::BmnGemStripStationSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGemStripStationSet::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemStripStationSet) );
      instance.SetNew(&new_BmnGemStripStationSet);
      instance.SetNewArray(&newArray_BmnGemStripStationSet);
      instance.SetDelete(&delete_BmnGemStripStationSet);
      instance.SetDeleteArray(&deleteArray_BmnGemStripStationSet);
      instance.SetDestructor(&destruct_BmnGemStripStationSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemStripStationSet*)
   {
      return GenerateInitInstanceLocal((::BmnGemStripStationSet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemStripStationSet*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnGemStripStationSet_RunSpring2017(void *p);
   static void deleteArray_BmnGemStripStationSet_RunSpring2017(void *p);
   static void destruct_BmnGemStripStationSet_RunSpring2017(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemStripStationSet_RunSpring2017*)
   {
      ::BmnGemStripStationSet_RunSpring2017 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGemStripStationSet_RunSpring2017 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemStripStationSet_RunSpring2017", ::BmnGemStripStationSet_RunSpring2017::Class_Version(), "BmnGemStripStationSet_RunSpring2017.h", 10,
                  typeid(::BmnGemStripStationSet_RunSpring2017), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGemStripStationSet_RunSpring2017::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemStripStationSet_RunSpring2017) );
      instance.SetDelete(&delete_BmnGemStripStationSet_RunSpring2017);
      instance.SetDeleteArray(&deleteArray_BmnGemStripStationSet_RunSpring2017);
      instance.SetDestructor(&destruct_BmnGemStripStationSet_RunSpring2017);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemStripStationSet_RunSpring2017*)
   {
      return GenerateInitInstanceLocal((::BmnGemStripStationSet_RunSpring2017*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemStripStationSet_RunSpring2017*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnGemTracking(void *p = 0);
   static void *newArray_BmnGemTracking(Long_t size, void *p);
   static void delete_BmnGemTracking(void *p);
   static void deleteArray_BmnGemTracking(void *p);
   static void destruct_BmnGemTracking(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemTracking*)
   {
      ::BmnGemTracking *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGemTracking >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemTracking", ::BmnGemTracking::Class_Version(), "", 526,
                  typeid(::BmnGemTracking), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGemTracking::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemTracking) );
      instance.SetNew(&new_BmnGemTracking);
      instance.SetNewArray(&newArray_BmnGemTracking);
      instance.SetDelete(&delete_BmnGemTracking);
      instance.SetDeleteArray(&deleteArray_BmnGemTracking);
      instance.SetDestructor(&destruct_BmnGemTracking);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemTracking*)
   {
      return GenerateInitInstanceLocal((::BmnGemTracking*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemTracking*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnGemStripStation_RunSummer2016(void *p);
   static void deleteArray_BmnGemStripStation_RunSummer2016(void *p);
   static void destruct_BmnGemStripStation_RunSummer2016(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemStripStation_RunSummer2016*)
   {
      ::BmnGemStripStation_RunSummer2016 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGemStripStation_RunSummer2016 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemStripStation_RunSummer2016", ::BmnGemStripStation_RunSummer2016::Class_Version(), "", 1252,
                  typeid(::BmnGemStripStation_RunSummer2016), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGemStripStation_RunSummer2016::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemStripStation_RunSummer2016) );
      instance.SetDelete(&delete_BmnGemStripStation_RunSummer2016);
      instance.SetDeleteArray(&deleteArray_BmnGemStripStation_RunSummer2016);
      instance.SetDestructor(&destruct_BmnGemStripStation_RunSummer2016);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemStripStation_RunSummer2016*)
   {
      return GenerateInitInstanceLocal((::BmnGemStripStation_RunSummer2016*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemStripStation_RunSummer2016*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnGemStripStationSet_RunSummer2016(void *p);
   static void deleteArray_BmnGemStripStationSet_RunSummer2016(void *p);
   static void destruct_BmnGemStripStationSet_RunSummer2016(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemStripStationSet_RunSummer2016*)
   {
      ::BmnGemStripStationSet_RunSummer2016 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGemStripStationSet_RunSummer2016 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemStripStationSet_RunSummer2016", ::BmnGemStripStationSet_RunSummer2016::Class_Version(), "", 1320,
                  typeid(::BmnGemStripStationSet_RunSummer2016), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGemStripStationSet_RunSummer2016::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemStripStationSet_RunSummer2016) );
      instance.SetDelete(&delete_BmnGemStripStationSet_RunSummer2016);
      instance.SetDeleteArray(&deleteArray_BmnGemStripStationSet_RunSummer2016);
      instance.SetDestructor(&destruct_BmnGemStripStationSet_RunSummer2016);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemStripStationSet_RunSummer2016*)
   {
      return GenerateInitInstanceLocal((::BmnGemStripStationSet_RunSummer2016*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemStripStationSet_RunSummer2016*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnGemStripStation_RunWinter2016(void *p);
   static void deleteArray_BmnGemStripStation_RunWinter2016(void *p);
   static void destruct_BmnGemStripStation_RunWinter2016(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemStripStation_RunWinter2016*)
   {
      ::BmnGemStripStation_RunWinter2016 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGemStripStation_RunWinter2016 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemStripStation_RunWinter2016", ::BmnGemStripStation_RunWinter2016::Class_Version(), "", 1350,
                  typeid(::BmnGemStripStation_RunWinter2016), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGemStripStation_RunWinter2016::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemStripStation_RunWinter2016) );
      instance.SetDelete(&delete_BmnGemStripStation_RunWinter2016);
      instance.SetDeleteArray(&deleteArray_BmnGemStripStation_RunWinter2016);
      instance.SetDestructor(&destruct_BmnGemStripStation_RunWinter2016);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemStripStation_RunWinter2016*)
   {
      return GenerateInitInstanceLocal((::BmnGemStripStation_RunWinter2016*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemStripStation_RunWinter2016*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnGemStripStationSet_RunWinter2016(void *p);
   static void deleteArray_BmnGemStripStationSet_RunWinter2016(void *p);
   static void destruct_BmnGemStripStationSet_RunWinter2016(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemStripStationSet_RunWinter2016*)
   {
      ::BmnGemStripStationSet_RunWinter2016 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGemStripStationSet_RunWinter2016 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemStripStationSet_RunWinter2016", ::BmnGemStripStationSet_RunWinter2016::Class_Version(), "", 1420,
                  typeid(::BmnGemStripStationSet_RunWinter2016), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGemStripStationSet_RunWinter2016::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemStripStationSet_RunWinter2016) );
      instance.SetDelete(&delete_BmnGemStripStationSet_RunWinter2016);
      instance.SetDeleteArray(&deleteArray_BmnGemStripStationSet_RunWinter2016);
      instance.SetDestructor(&destruct_BmnGemStripStationSet_RunWinter2016);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemStripStationSet_RunWinter2016*)
   {
      return GenerateInitInstanceLocal((::BmnGemStripStationSet_RunWinter2016*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemStripStationSet_RunWinter2016*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnGemStripStation_RunSpring2017(void *p);
   static void deleteArray_BmnGemStripStation_RunSpring2017(void *p);
   static void destruct_BmnGemStripStation_RunSpring2017(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemStripStation_RunSpring2017*)
   {
      ::BmnGemStripStation_RunSpring2017 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGemStripStation_RunSpring2017 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemStripStation_RunSpring2017", ::BmnGemStripStation_RunSpring2017::Class_Version(), "", 1450,
                  typeid(::BmnGemStripStation_RunSpring2017), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGemStripStation_RunSpring2017::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemStripStation_RunSpring2017) );
      instance.SetDelete(&delete_BmnGemStripStation_RunSpring2017);
      instance.SetDeleteArray(&deleteArray_BmnGemStripStation_RunSpring2017);
      instance.SetDestructor(&destruct_BmnGemStripStation_RunSpring2017);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemStripStation_RunSpring2017*)
   {
      return GenerateInitInstanceLocal((::BmnGemStripStation_RunSpring2017*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemStripStation_RunSpring2017*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnGemStripDigit(void *p = 0);
   static void *newArray_BmnGemStripDigit(Long_t size, void *p);
   static void delete_BmnGemStripDigit(void *p);
   static void deleteArray_BmnGemStripDigit(void *p);
   static void destruct_BmnGemStripDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemStripDigit*)
   {
      ::BmnGemStripDigit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGemStripDigit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemStripDigit", ::BmnGemStripDigit::Class_Version(), "", 1545,
                  typeid(::BmnGemStripDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGemStripDigit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemStripDigit) );
      instance.SetNew(&new_BmnGemStripDigit);
      instance.SetNewArray(&newArray_BmnGemStripDigit);
      instance.SetDelete(&delete_BmnGemStripDigit);
      instance.SetDeleteArray(&deleteArray_BmnGemStripDigit);
      instance.SetDestructor(&destruct_BmnGemStripDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemStripDigit*)
   {
      return GenerateInitInstanceLocal((::BmnGemStripDigit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemStripDigit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnGemStripDigitizer(void *p = 0);
   static void *newArray_BmnGemStripDigitizer(Long_t size, void *p);
   static void delete_BmnGemStripDigitizer(void *p);
   static void deleteArray_BmnGemStripDigitizer(void *p);
   static void destruct_BmnGemStripDigitizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemStripDigitizer*)
   {
      ::BmnGemStripDigitizer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGemStripDigitizer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemStripDigitizer", ::BmnGemStripDigitizer::Class_Version(), "", 1599,
                  typeid(::BmnGemStripDigitizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGemStripDigitizer::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemStripDigitizer) );
      instance.SetNew(&new_BmnGemStripDigitizer);
      instance.SetNewArray(&newArray_BmnGemStripDigitizer);
      instance.SetDelete(&delete_BmnGemStripDigitizer);
      instance.SetDeleteArray(&deleteArray_BmnGemStripDigitizer);
      instance.SetDestructor(&destruct_BmnGemStripDigitizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemStripDigitizer*)
   {
      return GenerateInitInstanceLocal((::BmnGemStripDigitizer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemStripDigitizer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnGemStripHitMaker(void *p = 0);
   static void *newArray_BmnGemStripHitMaker(Long_t size, void *p);
   static void delete_BmnGemStripHitMaker(void *p);
   static void deleteArray_BmnGemStripHitMaker(void *p);
   static void destruct_BmnGemStripHitMaker(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemStripHitMaker*)
   {
      ::BmnGemStripHitMaker *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGemStripHitMaker >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemStripHitMaker", ::BmnGemStripHitMaker::Class_Version(), "", 1686,
                  typeid(::BmnGemStripHitMaker), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGemStripHitMaker::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemStripHitMaker) );
      instance.SetNew(&new_BmnGemStripHitMaker);
      instance.SetNewArray(&newArray_BmnGemStripHitMaker);
      instance.SetDelete(&delete_BmnGemStripHitMaker);
      instance.SetDeleteArray(&deleteArray_BmnGemStripHitMaker);
      instance.SetDestructor(&destruct_BmnGemStripHitMaker);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemStripHitMaker*)
   {
      return GenerateInitInstanceLocal((::BmnGemStripHitMaker*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemStripHitMaker*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnGemHitProducer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGemHitProducer::Class_Name()
{
   return "BmnGemHitProducer";
}

//______________________________________________________________________________
const char *BmnGemHitProducer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemHitProducer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGemHitProducer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemHitProducer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGemHitProducer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemHitProducer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGemHitProducer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemHitProducer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnGemGeo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGemGeo::Class_Name()
{
   return "BmnGemGeo";
}

//______________________________________________________________________________
const char *BmnGemGeo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemGeo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGemGeo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemGeo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGemGeo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemGeo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGemGeo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemGeo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnGemDigit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGemDigit::Class_Name()
{
   return "BmnGemDigit";
}

//______________________________________________________________________________
const char *BmnGemDigit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemDigit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGemDigit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemDigit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGemDigit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemDigit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGemDigit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemDigit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnGemDigitizerQAHistograms::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGemDigitizerQAHistograms::Class_Name()
{
   return "BmnGemDigitizerQAHistograms";
}

//______________________________________________________________________________
const char *BmnGemDigitizerQAHistograms::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemDigitizerQAHistograms*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGemDigitizerQAHistograms::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemDigitizerQAHistograms*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGemDigitizerQAHistograms::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemDigitizerQAHistograms*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGemDigitizerQAHistograms::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemDigitizerQAHistograms*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnGemStripMedium::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGemStripMedium::Class_Name()
{
   return "BmnGemStripMedium";
}

//______________________________________________________________________________
const char *BmnGemStripMedium::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripMedium*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGemStripMedium::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripMedium*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGemStripMedium::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripMedium*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGemStripMedium::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripMedium*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnGemStripStation::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGemStripStation::Class_Name()
{
   return "BmnGemStripStation";
}

//______________________________________________________________________________
const char *BmnGemStripStation::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStation*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGemStripStation::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStation*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGemStripStation::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStation*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGemStripStation::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStation*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnGemStripStationSet::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGemStripStationSet::Class_Name()
{
   return "BmnGemStripStationSet";
}

//______________________________________________________________________________
const char *BmnGemStripStationSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStationSet*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGemStripStationSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStationSet*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGemStripStationSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStationSet*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGemStripStationSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStationSet*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnGemStripStationSet_RunSpring2017::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGemStripStationSet_RunSpring2017::Class_Name()
{
   return "BmnGemStripStationSet_RunSpring2017";
}

//______________________________________________________________________________
const char *BmnGemStripStationSet_RunSpring2017::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStationSet_RunSpring2017*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGemStripStationSet_RunSpring2017::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStationSet_RunSpring2017*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGemStripStationSet_RunSpring2017::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStationSet_RunSpring2017*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGemStripStationSet_RunSpring2017::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStationSet_RunSpring2017*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnGemTracking::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGemTracking::Class_Name()
{
   return "BmnGemTracking";
}

//______________________________________________________________________________
const char *BmnGemTracking::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemTracking*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGemTracking::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemTracking*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGemTracking::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemTracking*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGemTracking::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemTracking*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnGemStripStation_RunSummer2016::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGemStripStation_RunSummer2016::Class_Name()
{
   return "BmnGemStripStation_RunSummer2016";
}

//______________________________________________________________________________
const char *BmnGemStripStation_RunSummer2016::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStation_RunSummer2016*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGemStripStation_RunSummer2016::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStation_RunSummer2016*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGemStripStation_RunSummer2016::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStation_RunSummer2016*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGemStripStation_RunSummer2016::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStation_RunSummer2016*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnGemStripStationSet_RunSummer2016::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGemStripStationSet_RunSummer2016::Class_Name()
{
   return "BmnGemStripStationSet_RunSummer2016";
}

//______________________________________________________________________________
const char *BmnGemStripStationSet_RunSummer2016::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStationSet_RunSummer2016*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGemStripStationSet_RunSummer2016::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStationSet_RunSummer2016*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGemStripStationSet_RunSummer2016::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStationSet_RunSummer2016*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGemStripStationSet_RunSummer2016::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStationSet_RunSummer2016*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnGemStripStation_RunWinter2016::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGemStripStation_RunWinter2016::Class_Name()
{
   return "BmnGemStripStation_RunWinter2016";
}

//______________________________________________________________________________
const char *BmnGemStripStation_RunWinter2016::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStation_RunWinter2016*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGemStripStation_RunWinter2016::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStation_RunWinter2016*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGemStripStation_RunWinter2016::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStation_RunWinter2016*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGemStripStation_RunWinter2016::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStation_RunWinter2016*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnGemStripStationSet_RunWinter2016::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGemStripStationSet_RunWinter2016::Class_Name()
{
   return "BmnGemStripStationSet_RunWinter2016";
}

//______________________________________________________________________________
const char *BmnGemStripStationSet_RunWinter2016::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStationSet_RunWinter2016*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGemStripStationSet_RunWinter2016::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStationSet_RunWinter2016*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGemStripStationSet_RunWinter2016::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStationSet_RunWinter2016*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGemStripStationSet_RunWinter2016::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStationSet_RunWinter2016*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnGemStripStation_RunSpring2017::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGemStripStation_RunSpring2017::Class_Name()
{
   return "BmnGemStripStation_RunSpring2017";
}

//______________________________________________________________________________
const char *BmnGemStripStation_RunSpring2017::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStation_RunSpring2017*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGemStripStation_RunSpring2017::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStation_RunSpring2017*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGemStripStation_RunSpring2017::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStation_RunSpring2017*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGemStripStation_RunSpring2017::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripStation_RunSpring2017*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnGemStripDigit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGemStripDigit::Class_Name()
{
   return "BmnGemStripDigit";
}

//______________________________________________________________________________
const char *BmnGemStripDigit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripDigit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGemStripDigit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripDigit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGemStripDigit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripDigit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGemStripDigit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripDigit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnGemStripDigitizer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGemStripDigitizer::Class_Name()
{
   return "BmnGemStripDigitizer";
}

//______________________________________________________________________________
const char *BmnGemStripDigitizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripDigitizer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGemStripDigitizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripDigitizer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGemStripDigitizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripDigitizer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGemStripDigitizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripDigitizer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnGemStripHitMaker::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGemStripHitMaker::Class_Name()
{
   return "BmnGemStripHitMaker";
}

//______________________________________________________________________________
const char *BmnGemStripHitMaker::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripHitMaker*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGemStripHitMaker::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripHitMaker*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGemStripHitMaker::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripHitMaker*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGemStripHitMaker::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripHitMaker*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnGemHitProducer::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGemHitProducer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGemHitProducer::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGemHitProducer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnGemHitProducer(void *p) {
      return  p ? new(p) ::BmnGemHitProducer : new ::BmnGemHitProducer;
   }
   static void *newArray_BmnGemHitProducer(Long_t nElements, void *p) {
      return p ? new(p) ::BmnGemHitProducer[nElements] : new ::BmnGemHitProducer[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnGemHitProducer(void *p) {
      delete ((::BmnGemHitProducer*)p);
   }
   static void deleteArray_BmnGemHitProducer(void *p) {
      delete [] ((::BmnGemHitProducer*)p);
   }
   static void destruct_BmnGemHitProducer(void *p) {
      typedef ::BmnGemHitProducer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGemHitProducer

//______________________________________________________________________________
void BmnGemGeo::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGemGeo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGemGeo::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGemGeo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnGemGeo(void *p) {
      return  p ? new(p) ::BmnGemGeo : new ::BmnGemGeo;
   }
   static void *newArray_BmnGemGeo(Long_t nElements, void *p) {
      return p ? new(p) ::BmnGemGeo[nElements] : new ::BmnGemGeo[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnGemGeo(void *p) {
      delete ((::BmnGemGeo*)p);
   }
   static void deleteArray_BmnGemGeo(void *p) {
      delete [] ((::BmnGemGeo*)p);
   }
   static void destruct_BmnGemGeo(void *p) {
      typedef ::BmnGemGeo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGemGeo

//______________________________________________________________________________
void BmnGemDigit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGemDigit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGemDigit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGemDigit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnGemDigit(void *p) {
      return  p ? new(p) ::BmnGemDigit : new ::BmnGemDigit;
   }
   static void *newArray_BmnGemDigit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnGemDigit[nElements] : new ::BmnGemDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnGemDigit(void *p) {
      delete ((::BmnGemDigit*)p);
   }
   static void deleteArray_BmnGemDigit(void *p) {
      delete [] ((::BmnGemDigit*)p);
   }
   static void destruct_BmnGemDigit(void *p) {
      typedef ::BmnGemDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGemDigit

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnGemGas(void *p) {
      return  p ? new(p) ::BmnGemGas : new ::BmnGemGas;
   }
   static void *newArray_BmnGemGas(Long_t nElements, void *p) {
      return p ? new(p) ::BmnGemGas[nElements] : new ::BmnGemGas[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnGemGas(void *p) {
      delete ((::BmnGemGas*)p);
   }
   static void deleteArray_BmnGemGas(void *p) {
      delete [] ((::BmnGemGas*)p);
   }
   static void destruct_BmnGemGas(void *p) {
      typedef ::BmnGemGas current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGemGas

//______________________________________________________________________________
void BmnGemDigitizerQAHistograms::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGemDigitizerQAHistograms.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGemDigitizerQAHistograms::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGemDigitizerQAHistograms::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnGemDigitizerQAHistograms(void *p) {
      return  p ? new(p) ::BmnGemDigitizerQAHistograms : new ::BmnGemDigitizerQAHistograms;
   }
   static void *newArray_BmnGemDigitizerQAHistograms(Long_t nElements, void *p) {
      return p ? new(p) ::BmnGemDigitizerQAHistograms[nElements] : new ::BmnGemDigitizerQAHistograms[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnGemDigitizerQAHistograms(void *p) {
      delete ((::BmnGemDigitizerQAHistograms*)p);
   }
   static void deleteArray_BmnGemDigitizerQAHistograms(void *p) {
      delete [] ((::BmnGemDigitizerQAHistograms*)p);
   }
   static void destruct_BmnGemDigitizerQAHistograms(void *p) {
      typedef ::BmnGemDigitizerQAHistograms current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGemDigitizerQAHistograms

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnMaterialEffects(void *p) {
      return  p ? new(p) ::BmnMaterialEffects : new ::BmnMaterialEffects;
   }
   static void *newArray_BmnMaterialEffects(Long_t nElements, void *p) {
      return p ? new(p) ::BmnMaterialEffects[nElements] : new ::BmnMaterialEffects[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnMaterialEffects(void *p) {
      delete ((::BmnMaterialEffects*)p);
   }
   static void deleteArray_BmnMaterialEffects(void *p) {
      delete [] ((::BmnMaterialEffects*)p);
   }
   static void destruct_BmnMaterialEffects(void *p) {
      typedef ::BmnMaterialEffects current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMaterialEffects

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnKalmanFilter(void *p) {
      return  p ? new(p) ::BmnKalmanFilter : new ::BmnKalmanFilter;
   }
   static void *newArray_BmnKalmanFilter(Long_t nElements, void *p) {
      return p ? new(p) ::BmnKalmanFilter[nElements] : new ::BmnKalmanFilter[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnKalmanFilter(void *p) {
      delete ((::BmnKalmanFilter*)p);
   }
   static void deleteArray_BmnKalmanFilter(void *p) {
      delete [] ((::BmnKalmanFilter*)p);
   }
   static void destruct_BmnKalmanFilter(void *p) {
      typedef ::BmnKalmanFilter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnKalmanFilter

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnGemStripLayer(void *p) {
      return  p ? new(p) ::BmnGemStripLayer : new ::BmnGemStripLayer;
   }
   static void *newArray_BmnGemStripLayer(Long_t nElements, void *p) {
      return p ? new(p) ::BmnGemStripLayer[nElements] : new ::BmnGemStripLayer[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnGemStripLayer(void *p) {
      delete ((::BmnGemStripLayer*)p);
   }
   static void deleteArray_BmnGemStripLayer(void *p) {
      delete [] ((::BmnGemStripLayer*)p);
   }
   static void destruct_BmnGemStripLayer(void *p) {
      typedef ::BmnGemStripLayer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGemStripLayer

//______________________________________________________________________________
void BmnGemStripMedium::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGemStripMedium.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGemStripMedium::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGemStripMedium::Class(),this);
   }
}

namespace ROOT {
} // end of namespace ROOT for class ::BmnGemStripMedium

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnGemStripModule(void *p) {
      return  p ? new(p) ::BmnGemStripModule : new ::BmnGemStripModule;
   }
   static void *newArray_BmnGemStripModule(Long_t nElements, void *p) {
      return p ? new(p) ::BmnGemStripModule[nElements] : new ::BmnGemStripModule[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnGemStripModule(void *p) {
      delete ((::BmnGemStripModule*)p);
   }
   static void deleteArray_BmnGemStripModule(void *p) {
      delete [] ((::BmnGemStripModule*)p);
   }
   static void destruct_BmnGemStripModule(void *p) {
      typedef ::BmnGemStripModule current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGemStripModule

//______________________________________________________________________________
void BmnGemStripStation::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGemStripStation.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGemStripStation::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGemStripStation::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnGemStripStation(void *p) {
      return  p ? new(p) ::BmnGemStripStation : new ::BmnGemStripStation;
   }
   static void *newArray_BmnGemStripStation(Long_t nElements, void *p) {
      return p ? new(p) ::BmnGemStripStation[nElements] : new ::BmnGemStripStation[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnGemStripStation(void *p) {
      delete ((::BmnGemStripStation*)p);
   }
   static void deleteArray_BmnGemStripStation(void *p) {
      delete [] ((::BmnGemStripStation*)p);
   }
   static void destruct_BmnGemStripStation(void *p) {
      typedef ::BmnGemStripStation current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGemStripStation

//______________________________________________________________________________
void BmnGemStripStationSet::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGemStripStationSet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGemStripStationSet::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGemStripStationSet::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnGemStripStationSet(void *p) {
      return  p ? new(p) ::BmnGemStripStationSet : new ::BmnGemStripStationSet;
   }
   static void *newArray_BmnGemStripStationSet(Long_t nElements, void *p) {
      return p ? new(p) ::BmnGemStripStationSet[nElements] : new ::BmnGemStripStationSet[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnGemStripStationSet(void *p) {
      delete ((::BmnGemStripStationSet*)p);
   }
   static void deleteArray_BmnGemStripStationSet(void *p) {
      delete [] ((::BmnGemStripStationSet*)p);
   }
   static void destruct_BmnGemStripStationSet(void *p) {
      typedef ::BmnGemStripStationSet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGemStripStationSet

//______________________________________________________________________________
void BmnGemStripStationSet_RunSpring2017::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGemStripStationSet_RunSpring2017.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGemStripStationSet_RunSpring2017::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGemStripStationSet_RunSpring2017::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnGemStripStationSet_RunSpring2017(void *p) {
      delete ((::BmnGemStripStationSet_RunSpring2017*)p);
   }
   static void deleteArray_BmnGemStripStationSet_RunSpring2017(void *p) {
      delete [] ((::BmnGemStripStationSet_RunSpring2017*)p);
   }
   static void destruct_BmnGemStripStationSet_RunSpring2017(void *p) {
      typedef ::BmnGemStripStationSet_RunSpring2017 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGemStripStationSet_RunSpring2017

//______________________________________________________________________________
void BmnGemTracking::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGemTracking.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGemTracking::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGemTracking::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnGemTracking(void *p) {
      return  p ? new(p) ::BmnGemTracking : new ::BmnGemTracking;
   }
   static void *newArray_BmnGemTracking(Long_t nElements, void *p) {
      return p ? new(p) ::BmnGemTracking[nElements] : new ::BmnGemTracking[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnGemTracking(void *p) {
      delete ((::BmnGemTracking*)p);
   }
   static void deleteArray_BmnGemTracking(void *p) {
      delete [] ((::BmnGemTracking*)p);
   }
   static void destruct_BmnGemTracking(void *p) {
      typedef ::BmnGemTracking current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGemTracking

//______________________________________________________________________________
void BmnGemStripStation_RunSummer2016::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGemStripStation_RunSummer2016.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGemStripStation_RunSummer2016::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGemStripStation_RunSummer2016::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnGemStripStation_RunSummer2016(void *p) {
      delete ((::BmnGemStripStation_RunSummer2016*)p);
   }
   static void deleteArray_BmnGemStripStation_RunSummer2016(void *p) {
      delete [] ((::BmnGemStripStation_RunSummer2016*)p);
   }
   static void destruct_BmnGemStripStation_RunSummer2016(void *p) {
      typedef ::BmnGemStripStation_RunSummer2016 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGemStripStation_RunSummer2016

//______________________________________________________________________________
void BmnGemStripStationSet_RunSummer2016::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGemStripStationSet_RunSummer2016.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGemStripStationSet_RunSummer2016::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGemStripStationSet_RunSummer2016::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnGemStripStationSet_RunSummer2016(void *p) {
      delete ((::BmnGemStripStationSet_RunSummer2016*)p);
   }
   static void deleteArray_BmnGemStripStationSet_RunSummer2016(void *p) {
      delete [] ((::BmnGemStripStationSet_RunSummer2016*)p);
   }
   static void destruct_BmnGemStripStationSet_RunSummer2016(void *p) {
      typedef ::BmnGemStripStationSet_RunSummer2016 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGemStripStationSet_RunSummer2016

//______________________________________________________________________________
void BmnGemStripStation_RunWinter2016::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGemStripStation_RunWinter2016.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGemStripStation_RunWinter2016::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGemStripStation_RunWinter2016::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnGemStripStation_RunWinter2016(void *p) {
      delete ((::BmnGemStripStation_RunWinter2016*)p);
   }
   static void deleteArray_BmnGemStripStation_RunWinter2016(void *p) {
      delete [] ((::BmnGemStripStation_RunWinter2016*)p);
   }
   static void destruct_BmnGemStripStation_RunWinter2016(void *p) {
      typedef ::BmnGemStripStation_RunWinter2016 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGemStripStation_RunWinter2016

//______________________________________________________________________________
void BmnGemStripStationSet_RunWinter2016::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGemStripStationSet_RunWinter2016.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGemStripStationSet_RunWinter2016::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGemStripStationSet_RunWinter2016::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnGemStripStationSet_RunWinter2016(void *p) {
      delete ((::BmnGemStripStationSet_RunWinter2016*)p);
   }
   static void deleteArray_BmnGemStripStationSet_RunWinter2016(void *p) {
      delete [] ((::BmnGemStripStationSet_RunWinter2016*)p);
   }
   static void destruct_BmnGemStripStationSet_RunWinter2016(void *p) {
      typedef ::BmnGemStripStationSet_RunWinter2016 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGemStripStationSet_RunWinter2016

//______________________________________________________________________________
void BmnGemStripStation_RunSpring2017::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGemStripStation_RunSpring2017.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGemStripStation_RunSpring2017::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGemStripStation_RunSpring2017::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnGemStripStation_RunSpring2017(void *p) {
      delete ((::BmnGemStripStation_RunSpring2017*)p);
   }
   static void deleteArray_BmnGemStripStation_RunSpring2017(void *p) {
      delete [] ((::BmnGemStripStation_RunSpring2017*)p);
   }
   static void destruct_BmnGemStripStation_RunSpring2017(void *p) {
      typedef ::BmnGemStripStation_RunSpring2017 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGemStripStation_RunSpring2017

//______________________________________________________________________________
void BmnGemStripDigit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGemStripDigit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGemStripDigit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGemStripDigit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnGemStripDigit(void *p) {
      return  p ? new(p) ::BmnGemStripDigit : new ::BmnGemStripDigit;
   }
   static void *newArray_BmnGemStripDigit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnGemStripDigit[nElements] : new ::BmnGemStripDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnGemStripDigit(void *p) {
      delete ((::BmnGemStripDigit*)p);
   }
   static void deleteArray_BmnGemStripDigit(void *p) {
      delete [] ((::BmnGemStripDigit*)p);
   }
   static void destruct_BmnGemStripDigit(void *p) {
      typedef ::BmnGemStripDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGemStripDigit

//______________________________________________________________________________
void BmnGemStripDigitizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGemStripDigitizer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGemStripDigitizer::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGemStripDigitizer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnGemStripDigitizer(void *p) {
      return  p ? new(p) ::BmnGemStripDigitizer : new ::BmnGemStripDigitizer;
   }
   static void *newArray_BmnGemStripDigitizer(Long_t nElements, void *p) {
      return p ? new(p) ::BmnGemStripDigitizer[nElements] : new ::BmnGemStripDigitizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnGemStripDigitizer(void *p) {
      delete ((::BmnGemStripDigitizer*)p);
   }
   static void deleteArray_BmnGemStripDigitizer(void *p) {
      delete [] ((::BmnGemStripDigitizer*)p);
   }
   static void destruct_BmnGemStripDigitizer(void *p) {
      typedef ::BmnGemStripDigitizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGemStripDigitizer

//______________________________________________________________________________
void BmnGemStripHitMaker::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGemStripHitMaker.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGemStripHitMaker::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGemStripHitMaker::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnGemStripHitMaker(void *p) {
      return  p ? new(p) ::BmnGemStripHitMaker : new ::BmnGemStripHitMaker;
   }
   static void *newArray_BmnGemStripHitMaker(Long_t nElements, void *p) {
      return p ? new(p) ::BmnGemStripHitMaker[nElements] : new ::BmnGemStripHitMaker[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnGemStripHitMaker(void *p) {
      delete ((::BmnGemStripHitMaker*)p);
   }
   static void deleteArray_BmnGemStripHitMaker(void *p) {
      delete [] ((::BmnGemStripHitMaker*)p);
   }
   static void destruct_BmnGemStripHitMaker(void *p) {
      typedef ::BmnGemStripHitMaker current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGemStripHitMaker

namespace ROOT {
   static TClass *vectorlEvectorlEStripClustergRsPgR_Dictionary();
   static void vectorlEvectorlEStripClustergRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEStripClustergRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEStripClustergRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEStripClustergRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEStripClustergRsPgR(void *p);
   static void destruct_vectorlEvectorlEStripClustergRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<StripCluster> >*)
   {
      vector<vector<StripCluster> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<StripCluster> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<StripCluster> >", -2, "vector", 216,
                  typeid(vector<vector<StripCluster> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEStripClustergRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<StripCluster> >) );
      instance.SetNew(&new_vectorlEvectorlEStripClustergRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEStripClustergRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEStripClustergRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEStripClustergRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEStripClustergRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<StripCluster> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<StripCluster> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEStripClustergRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<StripCluster> >*)0x0)->GetClass();
      vectorlEvectorlEStripClustergRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEStripClustergRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEStripClustergRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<StripCluster> > : new vector<vector<StripCluster> >;
   }
   static void *newArray_vectorlEvectorlEStripClustergRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<StripCluster> >[nElements] : new vector<vector<StripCluster> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEStripClustergRsPgR(void *p) {
      delete ((vector<vector<StripCluster> >*)p);
   }
   static void deleteArray_vectorlEvectorlEStripClustergRsPgR(void *p) {
      delete [] ((vector<vector<StripCluster> >*)p);
   }
   static void destruct_vectorlEvectorlEStripClustergRsPgR(void *p) {
      typedef vector<vector<StripCluster> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<StripCluster> >

namespace ROOT {
   static TClass *vectorlEshortgR_Dictionary();
   static void vectorlEshortgR_TClassManip(TClass*);
   static void *new_vectorlEshortgR(void *p = 0);
   static void *newArray_vectorlEshortgR(Long_t size, void *p);
   static void delete_vectorlEshortgR(void *p);
   static void deleteArray_vectorlEshortgR(void *p);
   static void destruct_vectorlEshortgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<short>*)
   {
      vector<short> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<short>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<short>", -2, "vector", 216,
                  typeid(vector<short>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEshortgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<short>) );
      instance.SetNew(&new_vectorlEshortgR);
      instance.SetNewArray(&newArray_vectorlEshortgR);
      instance.SetDelete(&delete_vectorlEshortgR);
      instance.SetDeleteArray(&deleteArray_vectorlEshortgR);
      instance.SetDestructor(&destruct_vectorlEshortgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<short> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<short>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEshortgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<short>*)0x0)->GetClass();
      vectorlEshortgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEshortgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEshortgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<short> : new vector<short>;
   }
   static void *newArray_vectorlEshortgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<short>[nElements] : new vector<short>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEshortgR(void *p) {
      delete ((vector<short>*)p);
   }
   static void deleteArray_vectorlEshortgR(void *p) {
      delete [] ((vector<short>*)p);
   }
   static void destruct_vectorlEshortgR(void *p) {
      typedef vector<short> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<short>

namespace ROOT {
   static TClass *vectorlEintgR_Dictionary();
   static void vectorlEintgR_TClassManip(TClass*);
   static void *new_vectorlEintgR(void *p = 0);
   static void *newArray_vectorlEintgR(Long_t size, void *p);
   static void delete_vectorlEintgR(void *p);
   static void deleteArray_vectorlEintgR(void *p);
   static void destruct_vectorlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<int>*)
   {
      vector<int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<int>", -2, "vector", 216,
                  typeid(vector<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<int>) );
      instance.SetNew(&new_vectorlEintgR);
      instance.SetNewArray(&newArray_vectorlEintgR);
      instance.SetDelete(&delete_vectorlEintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEintgR);
      instance.SetDestructor(&destruct_vectorlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<int>*)0x0)->GetClass();
      vectorlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int> : new vector<int>;
   }
   static void *newArray_vectorlEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int>[nElements] : new vector<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEintgR(void *p) {
      delete ((vector<int>*)p);
   }
   static void deleteArray_vectorlEintgR(void *p) {
      delete [] ((vector<int>*)p);
   }
   static void destruct_vectorlEintgR(void *p) {
      typedef vector<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<int>

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
   static TClass *vectorlEStripClustergR_Dictionary();
   static void vectorlEStripClustergR_TClassManip(TClass*);
   static void *new_vectorlEStripClustergR(void *p = 0);
   static void *newArray_vectorlEStripClustergR(Long_t size, void *p);
   static void delete_vectorlEStripClustergR(void *p);
   static void deleteArray_vectorlEStripClustergR(void *p);
   static void destruct_vectorlEStripClustergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<StripCluster>*)
   {
      vector<StripCluster> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<StripCluster>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<StripCluster>", -2, "vector", 216,
                  typeid(vector<StripCluster>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEStripClustergR_Dictionary, isa_proxy, 0,
                  sizeof(vector<StripCluster>) );
      instance.SetNew(&new_vectorlEStripClustergR);
      instance.SetNewArray(&newArray_vectorlEStripClustergR);
      instance.SetDelete(&delete_vectorlEStripClustergR);
      instance.SetDeleteArray(&deleteArray_vectorlEStripClustergR);
      instance.SetDestructor(&destruct_vectorlEStripClustergR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<StripCluster> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<StripCluster>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEStripClustergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<StripCluster>*)0x0)->GetClass();
      vectorlEStripClustergR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEStripClustergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEStripClustergR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<StripCluster> : new vector<StripCluster>;
   }
   static void *newArray_vectorlEStripClustergR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<StripCluster>[nElements] : new vector<StripCluster>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEStripClustergR(void *p) {
      delete ((vector<StripCluster>*)p);
   }
   static void deleteArray_vectorlEStripClustergR(void *p) {
      delete [] ((vector<StripCluster>*)p);
   }
   static void destruct_vectorlEStripClustergR(void *p) {
      typedef vector<StripCluster> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<StripCluster>

namespace ROOT {
   static TClass *vectorlEDeadZoneOfStripLayergR_Dictionary();
   static void vectorlEDeadZoneOfStripLayergR_TClassManip(TClass*);
   static void *new_vectorlEDeadZoneOfStripLayergR(void *p = 0);
   static void *newArray_vectorlEDeadZoneOfStripLayergR(Long_t size, void *p);
   static void delete_vectorlEDeadZoneOfStripLayergR(void *p);
   static void deleteArray_vectorlEDeadZoneOfStripLayergR(void *p);
   static void destruct_vectorlEDeadZoneOfStripLayergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<DeadZoneOfStripLayer>*)
   {
      vector<DeadZoneOfStripLayer> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<DeadZoneOfStripLayer>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<DeadZoneOfStripLayer>", -2, "vector", 216,
                  typeid(vector<DeadZoneOfStripLayer>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEDeadZoneOfStripLayergR_Dictionary, isa_proxy, 0,
                  sizeof(vector<DeadZoneOfStripLayer>) );
      instance.SetNew(&new_vectorlEDeadZoneOfStripLayergR);
      instance.SetNewArray(&newArray_vectorlEDeadZoneOfStripLayergR);
      instance.SetDelete(&delete_vectorlEDeadZoneOfStripLayergR);
      instance.SetDeleteArray(&deleteArray_vectorlEDeadZoneOfStripLayergR);
      instance.SetDestructor(&destruct_vectorlEDeadZoneOfStripLayergR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<DeadZoneOfStripLayer> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<DeadZoneOfStripLayer>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEDeadZoneOfStripLayergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<DeadZoneOfStripLayer>*)0x0)->GetClass();
      vectorlEDeadZoneOfStripLayergR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEDeadZoneOfStripLayergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEDeadZoneOfStripLayergR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<DeadZoneOfStripLayer> : new vector<DeadZoneOfStripLayer>;
   }
   static void *newArray_vectorlEDeadZoneOfStripLayergR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<DeadZoneOfStripLayer>[nElements] : new vector<DeadZoneOfStripLayer>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEDeadZoneOfStripLayergR(void *p) {
      delete ((vector<DeadZoneOfStripLayer>*)p);
   }
   static void deleteArray_vectorlEDeadZoneOfStripLayergR(void *p) {
      delete [] ((vector<DeadZoneOfStripLayer>*)p);
   }
   static void destruct_vectorlEDeadZoneOfStripLayergR(void *p) {
      typedef vector<DeadZoneOfStripLayer> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<DeadZoneOfStripLayer>

namespace ROOT {
   static TClass *vectorlEBmnMatchgR_Dictionary();
   static void vectorlEBmnMatchgR_TClassManip(TClass*);
   static void *new_vectorlEBmnMatchgR(void *p = 0);
   static void *newArray_vectorlEBmnMatchgR(Long_t size, void *p);
   static void delete_vectorlEBmnMatchgR(void *p);
   static void deleteArray_vectorlEBmnMatchgR(void *p);
   static void destruct_vectorlEBmnMatchgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnMatch>*)
   {
      vector<BmnMatch> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnMatch>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnMatch>", -2, "vector", 216,
                  typeid(vector<BmnMatch>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnMatchgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnMatch>) );
      instance.SetNew(&new_vectorlEBmnMatchgR);
      instance.SetNewArray(&newArray_vectorlEBmnMatchgR);
      instance.SetDelete(&delete_vectorlEBmnMatchgR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnMatchgR);
      instance.SetDestructor(&destruct_vectorlEBmnMatchgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnMatch> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnMatch>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnMatchgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnMatch>*)0x0)->GetClass();
      vectorlEBmnMatchgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnMatchgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnMatchgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnMatch> : new vector<BmnMatch>;
   }
   static void *newArray_vectorlEBmnMatchgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnMatch>[nElements] : new vector<BmnMatch>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnMatchgR(void *p) {
      delete ((vector<BmnMatch>*)p);
   }
   static void deleteArray_vectorlEBmnMatchgR(void *p) {
      delete [] ((vector<BmnMatch>*)p);
   }
   static void destruct_vectorlEBmnMatchgR(void *p) {
      typedef vector<BmnMatch> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnMatch>

namespace ROOT {
   static TClass *vectorlEBmnGemStripLayergR_Dictionary();
   static void vectorlEBmnGemStripLayergR_TClassManip(TClass*);
   static void *new_vectorlEBmnGemStripLayergR(void *p = 0);
   static void *newArray_vectorlEBmnGemStripLayergR(Long_t size, void *p);
   static void delete_vectorlEBmnGemStripLayergR(void *p);
   static void deleteArray_vectorlEBmnGemStripLayergR(void *p);
   static void destruct_vectorlEBmnGemStripLayergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnGemStripLayer>*)
   {
      vector<BmnGemStripLayer> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnGemStripLayer>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnGemStripLayer>", -2, "vector", 216,
                  typeid(vector<BmnGemStripLayer>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnGemStripLayergR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnGemStripLayer>) );
      instance.SetNew(&new_vectorlEBmnGemStripLayergR);
      instance.SetNewArray(&newArray_vectorlEBmnGemStripLayergR);
      instance.SetDelete(&delete_vectorlEBmnGemStripLayergR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnGemStripLayergR);
      instance.SetDestructor(&destruct_vectorlEBmnGemStripLayergR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnGemStripLayer> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnGemStripLayer>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnGemStripLayergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnGemStripLayer>*)0x0)->GetClass();
      vectorlEBmnGemStripLayergR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnGemStripLayergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnGemStripLayergR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnGemStripLayer> : new vector<BmnGemStripLayer>;
   }
   static void *newArray_vectorlEBmnGemStripLayergR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnGemStripLayer>[nElements] : new vector<BmnGemStripLayer>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnGemStripLayergR(void *p) {
      delete ((vector<BmnGemStripLayer>*)p);
   }
   static void deleteArray_vectorlEBmnGemStripLayergR(void *p) {
      delete [] ((vector<BmnGemStripLayer>*)p);
   }
   static void destruct_vectorlEBmnGemStripLayergR(void *p) {
      typedef vector<BmnGemStripLayer> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnGemStripLayer>

namespace ROOT {
   static TClass *vectorlEBmnFitNodegR_Dictionary();
   static void vectorlEBmnFitNodegR_TClassManip(TClass*);
   static void *new_vectorlEBmnFitNodegR(void *p = 0);
   static void *newArray_vectorlEBmnFitNodegR(Long_t size, void *p);
   static void delete_vectorlEBmnFitNodegR(void *p);
   static void deleteArray_vectorlEBmnFitNodegR(void *p);
   static void destruct_vectorlEBmnFitNodegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnFitNode>*)
   {
      vector<BmnFitNode> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnFitNode>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnFitNode>", -2, "vector", 216,
                  typeid(vector<BmnFitNode>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnFitNodegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnFitNode>) );
      instance.SetNew(&new_vectorlEBmnFitNodegR);
      instance.SetNewArray(&newArray_vectorlEBmnFitNodegR);
      instance.SetDelete(&delete_vectorlEBmnFitNodegR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnFitNodegR);
      instance.SetDestructor(&destruct_vectorlEBmnFitNodegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnFitNode> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnFitNode>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnFitNodegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnFitNode>*)0x0)->GetClass();
      vectorlEBmnFitNodegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnFitNodegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnFitNodegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnFitNode> : new vector<BmnFitNode>;
   }
   static void *newArray_vectorlEBmnFitNodegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnFitNode>[nElements] : new vector<BmnFitNode>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnFitNodegR(void *p) {
      delete ((vector<BmnFitNode>*)p);
   }
   static void deleteArray_vectorlEBmnFitNodegR(void *p) {
      delete [] ((vector<BmnFitNode>*)p);
   }
   static void destruct_vectorlEBmnFitNodegR(void *p) {
      typedef vector<BmnFitNode> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnFitNode>

namespace {
  void TriggerDictionaryInitialization_G__GemDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/opt/fairroot/install/include",
"/home/alex/bmnroot_dev/bmnroot/bmndata",
"/home/alex/bmnroot_dev/bmnroot/bmndata/cbm",
"/home/alex/bmnroot_dev/bmnroot/bmndata/math",
"/home/alex/bmnroot_dev/bmnroot/bmnfield",
"/home/alex/bmnroot_dev/bmnroot/silicon",
"/home/alex/bmnroot_dev/bmnroot/alignment",
"/home/alex/bmnroot_dev/bmnroot/globaltracking",
"/home/alex/bmnroot_dev/bmnroot/uni_db",
"/home/alex/bmnroot_dev/bmnroot/uni_db/db_classes",
"/home/alex/bmnroot_dev/bmnroot/steering",
"/home/alex/bmnroot_dev/bmnroot/gem",
"/opt/fairsoft/install/include",
"/opt/fairsoft/install/include/root",
"/opt/fairsoft/install/include/root",
"/home/alex/bmnroot_dev/bmnroot/build/gem/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__GemDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class BmnGemHitProducer;
class BmnGemGeo;
class BmnGemDigit;
class BmnGemGas;
class BmnGemDigitizerQAHistograms;
class __attribute__((annotate("$clingAutoload$BmnMaterialEffects.h")))  __attribute__((annotate("$clingAutoload$BmnKalmanFilter.h")))  BmnMaterialEffects;
class __attribute__((annotate("$clingAutoload$BmnKalmanFilter.h")))  BmnKalmanFilter;
class __attribute__((annotate("$clingAutoload$BmnGemStripLayer.h")))  __attribute__((annotate("$clingAutoload$BmnGemStripStationSet.h")))  BmnGemStripLayer;
class __attribute__((annotate("$clingAutoload$BmnGemStripMedium.h")))  __attribute__((annotate("$clingAutoload$BmnGemStripStationSet.h")))  BmnGemStripMedium;
class __attribute__((annotate("$clingAutoload$BmnGemStripModule.h")))  __attribute__((annotate("$clingAutoload$BmnGemStripStationSet.h")))  BmnGemStripModule;
class __attribute__((annotate("$clingAutoload$BmnGemStripStation.h")))  __attribute__((annotate("$clingAutoload$BmnGemStripStationSet.h")))  BmnGemStripStation;
class __attribute__((annotate("$clingAutoload$BmnGemStripStationSet.h")))  BmnGemStripStationSet;
class __attribute__((annotate("$clingAutoload$BmnGemStripStationSet_RunSpring2017.h")))  BmnGemStripStationSet_RunSpring2017;
class BmnGemTracking;
class BmnGemStripStation_RunSummer2016;
class BmnGemStripStationSet_RunSummer2016;
class BmnGemStripStation_RunWinter2016;
class BmnGemStripStationSet_RunWinter2016;
class BmnGemStripStation_RunSpring2017;
class BmnGemStripDigit;
class BmnGemStripDigitizer;
class BmnGemStripHitMaker;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__GemDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif
#ifndef BOOST_FOUND
  #define BOOST_FOUND 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Preliminary version of BmnGemHitProducer

#ifndef BMNGEMHITPRODUCER_H
#define BMNGEMHITPRODUCER_H 1

#include <math.h>
#include <iostream>
#include <vector>
#include "TString.h"
#include "TClonesArray.h"
#include "FairTask.h"

#include "CbmStsPoint.h"
#include "CbmStsTrack.h"

#include "BmnHit.h"

using namespace std;

class BmnGemHitProducer : public FairTask {
public:

    /** Default constructor **/
    BmnGemHitProducer();

    /** Destructor **/
    virtual ~BmnGemHitProducer();

    /** Virtual method Init **/
    virtual InitStatus Init();

    /** Virtual method Exec **/
    virtual void Exec(Option_t* opt);

    /** Virtual method Finish **/
    virtual void Finish();

    // Setters

    void SetOnlyPrimary(Bool_t opt = kFALSE) {
        fOnlyPrimary = opt;
    }


private:

    TString fInputBranchName;
    TString fTracksBranchName;
    TString fOutputHitsBranchName;

    /** Input array of Gem Points **/
    TClonesArray* fBmnPointsArray;

    /** Input array of Gem Tracks **/   // <------------ ???
    TClonesArray* fBmnTracksArray;
    
    /** Input array of MC Tracks **/
    TClonesArray* fMCTracksArray;

    /** Output array of Gem Hits **/
    TClonesArray* fBmnHitsArray;

    // CbmStsHitProducerIdeal(const CbmStsHitProducerIdeal&);
    // CbmStsHitProducerIdeal& operator=(const CbmStsHitProducerIdeal&);

    Bool_t fOnlyPrimary;

    void CheckGaussDistrib(TVector3, TVector3);

    ClassDef(BmnGemHitProducer, 1);

};

#endif
#ifndef MPD_TPC_SECTOR_H
#define MPD_TPC_SECTOR_H

#include <math.h>
#include <iostream>

#include <TObject.h>
#include "TMath.h"
using namespace std;

class BmnGemGeo : public TObject {
public:

    BmnGemGeo();
    virtual ~BmnGemGeo();

    Int_t GetNumOfStations() const {
        return fNumStations;
    }

    Float_t GetDistAlongZ() const {
        return fDistance;
    }

    Float_t GetStationNum(Float_t z) const {
        return (z - fZ0) / fDistance + 0.5;
    }

    /// GEM Characteristics

    Float_t GetDriftArea() const {
        return fDriftArea;
    }

    Float_t GetFirstTransArea() const {
        return fFirstTransArea;
    }

    Float_t GetSecondTransArea() const {
        return fSecondTransArea;
    }

    Float_t GetInductArea() const {
        return fInductArea;
    }

    Float_t GetHoneyCombDist() const {
        return fHoneyCombDist;
    }

    /// Strip Characteristics   

    Float_t GetXstripWidth() const {
        return fStripXWidth;
    }

    Float_t GetYstripWidth() const {
        return fStripYWidth;
    }

    Float_t GetXstripLength() const {
        return fStripXLength;
    }

    Float_t GetYstripLength() const {
        return fStripYLength;
    }

    Int_t GetXstripNum() const {
        return 2 * TMath::Abs(fX0) / fStripXWidth;
    }

    Int_t GetYstripNum() const {
        return 2 * TMath::Abs(fY0) / fStripYWidth;
    }

    Float_t GetXstripPitch() const {
        return fXstripPitch;
    }

    Float_t GetYstripPitch() const {
        return fYstripPitch;
    }

    Float_t GetX0() const {
        return fX0;
    }

    Float_t GetY0() const {
        return fY0;
    }
    
    Float_t GetZ0() const {
        return fZ0;
    }

private:

    /// GEM Characteristics
    Int_t fStation; /// Number of the current GEM-station
      
    Int_t fNumStations; /// Total Number of the GEM-stations 
    Float_t fDistance; /// Distance between the GEM-stations along z-axis

    Float_t fDriftArea;
    Float_t fFirstTransArea;
    Float_t fSecondTransArea;
    Float_t fInductArea;
    Float_t fHoneyCombDist;

    /// Strip Characteristics

    Float_t fX0; /// Minimal coordinate of the strip plane along the X-axis 
    Float_t fY0; /// Minimal coordinate of the strip plane along the Y-axis
    Float_t fZ0; /// Z-coordinate of the first GEM station

    Float_t fXstripPitch; /// X-pitch value of strips  
    Float_t fYstripPitch; /// X-pitch value of strips

    Float_t fStripXWidth; /// Width of X-strips 
    Float_t fStripYWidth; /// Width of Y-strips

    Float_t fStripXLength; /// Length of X-strips 
    Float_t fStripYLength; /// Length of Y-strips

    ClassDef(BmnGemGeo, 1);

};

#endif
#include <TNamed.h>

class BmnGemDigit : public TNamed {
public:

    BmnGemDigit();
    BmnGemDigit(BmnGemDigit* digit);
    BmnGemDigit(Int_t iStrip, Int_t iStat, Float_t Q);
    virtual ~BmnGemDigit();

    Int_t GetLightedStrip() const {
        return fLighted;
    }

    Float_t GetQ() const {
        return fAdc;
    }

    Int_t GetStationNum() const {
        return fNumber;
    }


private:

    Int_t fLighted; // Number of lighted strip 

    Int_t fNumber; // Station number
    Float_t fAdc; // charge on strip

    ClassDef(BmnGemDigit, 1)
};
#ifndef BMNGEMGAS_HH
#define BMNGEMGAS_HH

#include <assert.h>
#include <ostream>
#include <vector>
#include <string>

enum gascomponents {Ne,Ar,CO2,CH4};

class BmnGemGas {
public:
  // constructors
  BmnGemGas();
  ~BmnGemGas();
  
  BmnGemGas(double const E,
	 double const B,
	 double const T,
	 double const p,
	 double const VDrift,
	 double const Dl,
	 double const Dt,
	 double const k,
	 double const W,
	 const std::vector<double>& CSD,
	 double const CSDEpol);

  BmnGemGas(const std::string& Filename,
	 double const E);

  // accessors
  double VDrift() const {return _VDrift;} 
  double Dl() const {return _Dl;}      
  double Dt() const {return _Dt;}  
  double VDrift(double const E, double const B) const {return _VDrift;} 
  double Dl(double const E, double const B) const {return _Dl;}      
  double Dt(double const E, double const B) const {return _Dt;}      
  double k() const {return _k;}       
  double W() const {return _W;}       
  double CSD(int i) const {return _CSD.at(i);}
  const std::vector<double>& CSD() const {return _CSD;}
  int nCSD() const {return _CSD.size();}
  double CSDNorm() const {return _CSDNorm;}
  double CSDEpol() const {return _CSDEpol;} 

  double E() const {return _E;}
  double B() const {return _B;}
  double T() const {return _T;}       
  double p() const {return _p;}
    
  int GetRandomCS(double const r) const;   //has problem with not normalized table
  int GetRandomCSUniform() const;

  void PrintAll(std::ostream& s) const {s<<*this;}

  void operator=(const BmnGemGas& GasToCopy);
  friend std::ostream& operator<< (std::ostream&, const BmnGemGas&);

  // modifiers
  void SetE(double const E){_E=E;}  // later this method should also retrieve
                                    // updated gas values for the new field!
  void SetB(double const B){_B=B;}
  void SetT(double const T){_T=T;}
  void Setp(double const p){_p=p;}
  void SetCSD(const std::vector<double>& CSD);
  void SetCSDEpol(double const CSDEpol){_CSDEpol=CSDEpol;}

private:
  double _E;        // electric field [V/cm](some gas parameters depend on it)
  double _B;        // B field [T] assumption: B || E !!! 
  double _T;        // Temperature [K]
  double _p;        // pressure [mbar]

  double _VDrift;   // electron Drift velocity [cm/ns]
  double _Dl;       // longitudinal diffusion coefficient [sqrt(cm)]
  double _Dt;       // transversal diffusion coefficient [sqrt(cm)]
  double _k;        // attachment coefficient[1/cm]
  double _W;        // effective ionisation energy [eV]
  std::vector<double> _CSD;     // Cluster size distribution
  double _CSDNorm;                 // Intergral of CSD must be 1 but actually not. Used for correction.
  double _CSDEpol;  // Constant used for the inverse quadratic extrapolation
                    // of Cluster Sizes bigger than _nCSD

  const double LinExpolation(double const inTable, const double* const table,
		       int const nTable);
  int ReadGasBegin(std::ifstream* const pinfile);
  int ReadGasArrays(std::ifstream* const pinfile, int const noent,
		    double* const e, double* const vdrift, double* const dt,
		    double* const dl, double* const k); 
  const double GetPositionOfE(int const noent, const double* const e);
 

};

#endif
#ifndef BmnManageQA_HH
#define BmnManageQA_HH

#include <TH1F.h>
#include <TH2F.h>
#include <TH3F.h>
#include <TGeoManager.h>
#include <iostream>

TH1F* CreateHistogram1(const char* name, const char* xtitle, int nbin, Float_t firstBin, Float_t lastBin);
TH2F* CreateHistogram2(const char* name, const char* xtitle, const char* ytitle, 
			int nbinx, Float_t firstBinX, Float_t lastBinX, int nbiny, Float_t firstBinY, Float_t lastBinY);
TH3F* CreateHistogram3(const char* name, const char* xtitle, const char* ytitle, const char* ztitle,
			int nbinx, Float_t firstBinX, Float_t lastBinX, int nbiny, Float_t firstBinY, Float_t lastBinY,
			int nbinz, Float_t firstBinZ, Float_t lastBinZ);

// The same with suffixes
TH1F* CreateHistogram1(const char* name, const std::string&, const char* xtitle, int nbin, Float_t firstBin, Float_t lastBin);
TH2F* CreateHistogram2(const char* name, const std::string&, const char* xtitle, const char* ytitle, 
			int nbinx, Float_t firstBinX, Float_t lastBinX, int nbiny, Float_t firstBinY, Float_t lastBinY);
TH3F* CreateHistogram3(const char* name,const std::string&,  const char* xtitle, const char* ytitle, const char* ztitle,
			int nbinx, Float_t firstBinX, Float_t lastBinX, int nbiny, Float_t firstBinY, Float_t lastBinY,
			int nbinz, Float_t firstBinZ, Float_t lastBinZ);

void toDirectory(const char*);

const TGeoShape* getShape(const TGeoManager *g, const char* name);

#define ENTRY_POINT(x)                                        \
     std::cout << "-=TPC=- " << __FUNCTION__ << ": " << x \
                    << " (" << __FILE__                                \
                    << ", " << __LINE__ << ")" << std::endl

#endif

#ifndef  BMNGEMDIGITIZERQAHISTOGRAMS_H
#define  BMNGEMDIGITIZERQAHISTOGRAMS_H

// Base Class Headers ----------------
#include <TObject.h>
#include <TH1F.h>
#include <TH2F.h>
#include <TH3F.h>
#include "BmnManageQA.h"
#include "BmnGemGeo.h"

class BmnGemDigitizerQAHistograms : public TObject {
private:
 std::string _suffix;
public:

   BmnGemDigitizerQAHistograms();
   BmnGemDigitizerQAHistograms(const std::string& suffix);
  ~BmnGemDigitizerQAHistograms();

  void Initialize();
  void Write();
  
//  TH2F* _hRZ_global;
//  TH2F* _hYZ_local;
//  
//  TH1F *_hY_global;
//  TH1F *_hX_global;
//  TH1F *_hZ_global;
//  TH1F *_hZ_local;
//  TH1F *_hY_local;
//  TH1F *_hX_local;
//  TH2F *_hXY_local;
//  TH2F *_hXY_global;
//  TH1F *_hSect_dig;
//  TH1F *_hADC_dig;
//  TH1F *_hZ_dig;
//  TH1F *_hY_dig;
//  TH1F *_hX_dig;
//  TH2F *_hXY_dig;
//  TH3F *_h3D_dig;
//  TH2F *_hDiffuseXY;
//  TH2F *_hDistortXY;
//  TH3F *_h3D_el;
//  
//  TH2F *_hXT_dig_1;
//  TH2F *_hXT_dig_5;
//  TH2F *_hXT_dig_10;
//  TH2F *_hXT_dig_20;
//  TH2F *_hXT_dig_40;
//  TH2F *_hXT_dig_60;
  
  // All GEM-stations
  TH1F* _hX_local;     // distribution of electrons over X-coordinate
  TH1F* _hY_local;     // distribution of electrons over Y-coordinate
  TH1F* _hZ_local;     // distribution of electrons over Z-coordinate
  
  // distributions of electrons over X-coordinate for each GEM-station
  TH1F* X[8];
  
  // distributions of electrons over Y-coordinate for each GEM-station
  TH1F* Y[8];
     
  // All GEM-stations
  TH2F* _hXY_local;  // distribution of electrons in XY-plane
  TH2F* _hYZ_local;  // distribution of electrons in YZ-plane
  TH2F* _hXZ_local;  // distribution of electrons in XZ-plane
  
  // distributions of electrons in XY-plane for each GEM-station
  TH2F* XY[8];
  
  // distribution of ADCs for all GEM-stations, X-strips
  TH1F* _hADCX;
  
  // distribution of ADCs for all GEM-stations, Y-strips
  TH1F* _hADCY;
  
  // distribution of ADCs for each GEM-station, X-strips
  TH1F* ADCX[8];
  
  // distribution of ADCs for each GEM-station, Y-strips
  TH1F* ADCY[8];
  
  // distribution of digits for all GEM-stations, X-strips
  TH1F* _hDigiX;
  
  // distribution of digits for all GEM-stations, Y-strips
  TH1F* _hDigiY;
  
  // distribution of digits for each GEM-station, X-strips
  TH1F* DIGIX[8];
  
  // distribution of digits for each GEM-station, Y-strips
  TH1F* DIGIY[8];
  
  // distribution of digits for all GEM-stations weighted to ADC, X-strips
  TH1F* _hDigiAdcX;
  
  // distribution of digits for all GEM-stations weighted to ADC, Y-strips
  TH1F* _hDigiAdcY;
  
  // distribution of digits for each GEM-station weighted to ADC, X-strips
  TH1F* DIGIADCX[8];
  
  // distribution of digits for each GEM-station weighted to ADC, Y-strips
  TH1F* DIGIADCY[8];
   
     
public:
  ClassDef(BmnGemDigitizerQAHistograms,1)

};

#endif

//--------------------------------------------------------------
// $Log$
//--------------------------------------------------------------

// Base Class Headers ----------------

#include "FairTask.h"
#include "TClonesArray.h"
#include "TString.h"
#include "BmnGemTrack.h"
#include <iostream>
#include <vector>
#include <map>
#include "TH1F.h"
#include "TH2F.h"
#include "TArc.h"
#include "TMath.h"
#include "TVector3.h"
#include "FairTrackParam.h"
#include "BmnFitNode.h"
#include "BmnKalmanFilter.h"
#include "BmnMath.h"
#include "BmnGemStripStationSet.h"
#include "BmnGemStripStationSet_RunSpring2017.h"
#include "FitWLSQ.h"
#include "BmnSteeringGemTracking.h"

using namespace std;

class BmnGemTracking : public FairTask {
public:

    // Constructors/Destructors ---------
    BmnGemTracking() {};
    BmnGemTracking(Short_t period, Bool_t field, Bool_t target, TString steerFile);
    virtual ~BmnGemTracking();

    virtual InitStatus Init();
    virtual void Exec(Option_t* opt);
    virtual void Finish();

    BmnStatus FindSeedsByCombinatoricsInCoridor(Int_t iCorridor, vector<BmnGemTrack>& cand);
    BmnStatus SeedsByThreeStations(Int_t i0, Int_t i1, Int_t i2, vector<Int_t>* hits, vector<BmnGemTrack>& cand);
    BmnStatus FitSeeds(vector<BmnGemTrack>& cand);
    BmnStatus CalculateTrackParamsLine(BmnGemTrack* tr);
    BmnStatus CalculateTrackParamsCircle(BmnGemTrack* tr);
    BmnStatus CalculateTrackParamsPol2(BmnGemTrack *tr);
    BmnStatus NearestHitMergeGem(UInt_t station, BmnGemTrack* tr, Bool_t& wasSkipped);
    Double_t CalculateLength(BmnGemTrack* tr);
    void SetHitsUsing(BmnGemTrack* tr, Bool_t use);
    void FillAddrWithLorentz();
    Int_t Tracking(vector<BmnGemTrack>& seeds);
    BmnGemStripHit* GetHit(Int_t i);
    BmnStatus RefitTrack(BmnGemTrack* track);
    TVector2 GetTransXY(BmnGemStripHit* hit);
    BmnStatus SortTracks(vector<BmnGemTrack>& inTracks, vector<BmnGemTrack>& sortedTracks);
    BmnStatus CheckSharedHits(vector<BmnGemTrack>& sortedTracks);
    
    void SetLorentzThresh(Double_t trs) {
        fLorentzThresh = trs;
    }

    void SetYstep(Double_t stp) {
        fYstep = stp;
    }

    void SetSigX(Double_t sig) {
        fSigX = sig;
    }

    void SetNbins(Int_t n) {
        fNBins = n;
    }

    void SetField(Bool_t f) {
        fIsField = f;
    }

    void SetDirection(Bool_t dir) {
        fGoForward = dir;
    }

    void SetTarget(Bool_t f) {
        fIsTarget = f;
    }

//    void SetXRange(Double_t xMin, Double_t xMax) {
//        fXmax = xMax;
//        fXmin = xMin;
//    }
//
//    void SetYRange(Double_t yMin, Double_t yMax) {
//        fYmax = yMax;
//        fYmin = yMin;
//    }

    void AddStationToSkip(Short_t st) {
        skipStations.push_back(st);
    }

    void SetRoughVertex(TVector3 v) {
        fRoughVertex = v;
    }

    void SetLineFitCut(Double_t cut) {
        fLineFitCut = cut;
    }

    void SetNHitsCut(Short_t n) {
        fNHitsCut = n;
    }
    
    void SetUseRefit(Bool_t flag) {
        fUseRefit = flag;
    }

private:
    TVector2 CalcMeanSigma(vector <Double_t>); 
      
    BmnGemStripStationSet* fGemDetector;
    TString fGemHitsBranchName;
    TString fTracksBranchName;

    TClonesArray* fGemTracksArray;
    TClonesArray* fGemHitsArray;
    BmnKalmanFilter* fKalman;

    Int_t fPDG; // PDG hypothesis
    Double_t* fGemDistCut;

    Bool_t fIsField; // run with mag.field or not
    Bool_t fIsTarget; // run with target or not
    
    // fGoForward - direction of approximation:
    // fGoForward = 1 - forward (0 --> nStation)
    // fGoForward = 0 - backward (nStation --> 0)
    Bool_t fGoForward;

    Double_t fSigX;
    UInt_t fYstep;
    Double_t fLorentzThresh;
    UInt_t fNHitsCut;
    UInt_t fNHitsInGemCut;
    UInt_t fNSeedsCut;

    UInt_t fNBins; // number of bins in histogram  
    Double_t fMin;
    Double_t fMax;
    Double_t fWidth;

    UInt_t fEventNo; // event counter
    Short_t fPeriodId;

    TVector3 fRoughVertex; // for correct transformation

    //ranges for seed finder
//    Double_t fXmin;
//    Double_t fXmax;
//    Double_t fYmin;
//    Double_t fYmax;

    vector<Short_t> skipStations;

    FairField* fField;

    Int_t** fAddresses;
    Double_t fLineFitCut;
    
    vector<Int_t>* fHitsOnStation;
    
    Bool_t fUseRefit;
    
    TString fSteerFile; 
    BmnSteeringGemTracking* fSteering;
    
    ClassDef(BmnGemTracking, 1);
};
#ifndef BMNGEMSTRIPLAYER_H
#define	BMNGEMSTRIPLAYER_H

#include "BmnMatch.h"
#include "BmnStripData.h"

#include "TMath.h"

#include <iostream>
#include <vector>

using namespace TMath;
using namespace std;

class BmnGemStripLayer {

public:
    //Constructors -------------------------------------------------------------
    BmnGemStripLayer();

    BmnGemStripLayer(Int_t zone_number, StripLayerType layer_type,
                     Double_t xsize, Double_t ysize,
                     Double_t xorig, Double_t yorig,
                     Double_t pitch, Double_t adeg);
    //--------------------------------------------------------------------------

    //Destructor
    virtual ~BmnGemStripLayer();

    void InitializeLayer();
    void ResetLayer(); //clear all data and rebuild the layer in accordance with new parameters

    Int_t GetNStrips();

    void SetVerbosity(Bool_t verb) { Verbosity = verb; }
    void SetPitch(Double_t pitch);
    void SetLayerSizes(Double_t xsize, Double_t ysize, Double_t xorig=0.0, Double_t yorig=0.0);
    void SetAngleDeg(Double_t deg); // plus - clockwise from vertical

    Bool_t GetVerbosity() { return Verbosity; }
    Int_t GetZoneNumber() { return LayerZoneNumber; }
    StripLayerType GetType() { return LayerType; }
    Double_t GetPitch() { return Pitch; }
    Double_t GetAngleDeg() { return AngleDeg; }
    Double_t GetAngleRad() { return AngleRad; }
    Double_t GetXSize() { return XMaxLayer-XMinLayer; }
    Double_t GetYSize() { return YMaxLayer-YMinLayer; }
    Double_t GetXMinLayer() { return XMinLayer; }
    Double_t GetXMaxLayer() { return XMaxLayer; }
    Double_t GetYMinLayer() { return YMinLayer; }
    Double_t GetYMaxLayer() { return YMaxLayer; }

    //Strip numbering methods --------------------------------------------------
    Bool_t SetStripNumberingBorders(Double_t x_left, Double_t y_left, Double_t x_right, Double_t y_right); //or method below
    Bool_t SetStripNumberingBorders(StripBorderPoint left, StripBorderPoint right);
    Bool_t SetStripNumberingOrder(StripNumberingDirection strip_direction);

    StripNumberingDirection GetStripNumberingOrder() { return  StripOrder; }
    Double_t GetXLeftStripBorderPoint() { return XLeftPointOfStripNumbering; }
    Double_t GetYLeftStripBorderPoint() { return YLeftPointOfStripNumbering; }
    Double_t GetXRightStripBorderPoint() { return XRightPointOfStripNumbering; }
    Double_t GetYRightStripBorderPoint() { return YRightPointOfStripNumbering; }
    //--------------------------------------------------------------------------

    //Dead zones methods -------------------------------------------------------
    Bool_t AddDeadZone(Int_t n_points, Double_t *x_points, Double_t *y_points);
    Bool_t AddDeadZone(DeadZoneOfStripLayer dead_zone);
    Bool_t IsPointInsideDeadZones(Double_t x, Double_t y);
    Bool_t IsPointInsideStripLayer(Double_t x, Double_t y);

    vector<DeadZoneOfStripLayer> GetDeadZones() { return DeadZones; }
    void ResetAllDeadZones() { DeadZones.clear(); }
    //--------------------------------------------------------------------------

    //Direct strip signal manipulation -----------------------------------------
    Bool_t SetStripSignal(Int_t strip_num, Double_t signal); //replace signal
    Bool_t AddStripSignal(Int_t strip_num, Double_t signal); //add signal

    Double_t GetStripSignal(Int_t strip_num); //signal of strip_num-strip
    //--------------------------------------------------------------------------

    //Strip matches controls ---------------------------------------------------
    Bool_t SetStripMatch(Int_t strip_num, BmnMatch strip_match);
    Bool_t AddLinkToStripMatch(Int_t strip_num, Double_t weight, Int_t refID);

    BmnMatch GetStripMatch(Int_t strip_num); //match of strip_num-strip
    void ResetStripMatches();
    //--------------------------------------------------------------------------

    //Strip hits ---------------------------------------------------------------
    Int_t GetNStripHits() { return StripHits.size(); } //number of hits at the layer
    Double_t GetStripHitPos(Int_t num); //hit position
    Double_t GetStripHitTotalSignal(Int_t num); //sum signal of the hit
    Double_t GetStripHitError(Int_t num); //hit error
    Int_t GetStripHitClusterSize(Int_t num); //number of strips in the cluster for the num-hit
    void ResetStripHits();
    //--------------------------------------------------------------------------

    //Methods to convert point coordinates into strip system -------------------
    Double_t ConvertNormalPointToStripX(Double_t x, Double_t y);
    Double_t ConvertNormalPointToStripY(Double_t x, Double_t y);

    Double_t ConvertPointToStripPosition(Double_t x, Double_t y);

    Double_t CalculateStripEquationB(Double_t strip_pos);
    //--------------------------------------------------------------------------

    //Clustering and strip-hit finding methods ---------------------------------------
    void FindClustersAndStripHits();
    void MakeStripHit(StripCluster &cluster, vector<Double_t> &AnalyzableStrips, Int_t &curcnt);
    void SmoothStripSignal(vector<Double_t>& AnalyzableStrips, Int_t NIterations, Int_t SmoothWindow, Double_t Weight);

    void SetClusterFindingThreshold(Double_t threshold) { ClusterFindingThreshold = threshold; }
    Double_t GetClusterFindingThreshold() { return ClusterFindingThreshold; }

    vector<Double_t> GetSmoothStrips() { return SmoothStrips; } //for test
    //--------------------------------------------------------------------------

private:
    //BmnGemStripLayer(const BmnGemStripLayer&);
    //BmnGemStripLayer& operator=(const BmnGemStripLayer&);

private:
    Bool_t Verbosity;

    Int_t LayerZoneNumber; //zone number of the strip layer
    StripLayerType LayerType; //type of the strip layer: lower or upper

    Double_t Pitch;
    Double_t AngleDeg; //Angle between two sets of parellel strips: angle from vertical
    Double_t AngleRad;

    Double_t XMinLayer;
    Double_t XMaxLayer;
    Double_t YMinLayer;
    Double_t YMaxLayer;

    vector<DeadZoneOfStripLayer> DeadZones;

    //Strip arrangement
    StripNumberingDirection StripOrder; //strip numbering order (LeftToRight or RightToLeft)
    Double_t XLeftPointOfStripNumbering;
    Double_t XRightPointOfStripNumbering;
    Double_t YLeftPointOfStripNumbering;
    Double_t YRightPointOfStripNumbering;

    //Strip layer implementation
    vector<Double_t> Strips;

    //Strip matches
    vector<BmnMatch> StripMatches; //ID-point matches for all strips

    //Strip hits (It is filled after cluster finding and fitting) --------------
    vector<Double_t> StripHits; //positions of strip hits
    vector<Double_t> StripHitsTotalSignal;
    vector<Double_t> StripHitsErrors;
    vector<Int_t> StripHitsClusterSize; //cluster size (number of strips) for each strip hit
    vector<Double_t> SmoothStrips; //smoothed signal strips (It is filled after smoothing algorithm)
    Double_t ClusterFindingThreshold; //min. threshold cut
    //--------------------------------------------------------------------------
};
//------------------------------------------------------------------------------

#endif	/* BMNGEMSTRIPLAYER_H */

#ifndef BMNGEMSTRIPMODULE_H
#define	BMNGEMSTRIPMODULE_H

#include "BmnMatch.h"
#include "BmnGemStripLayer.h"
#include "BmnGemStripMedium.h"

#include "TMath.h"

#include <iostream>
#include <vector>

using namespace TMath;
using namespace std;

enum ElectronDriftDirectionInModule {ForwardZAxisEDrift, BackwardZAxisEDrift};

struct CollPoint;

class BmnGemStripModule {

public:
    //Constructors -------------------------------------------------------------
    BmnGemStripModule();

    BmnGemStripModule(Double_t z_start_pos,
                      ElectronDriftDirectionInModule edrift_direction,
                      Double_t DriftGap, Double_t FTransferGap, Double_t STransferGap, Double_t InductionGap);
    //--------------------------------------------------------------------------

    //Destructor
    virtual ~BmnGemStripModule();

    void SetVerbosity(Bool_t verb) { Verbosity = verb; }
    Bool_t GetVerbosity() { return Verbosity; }

    //Module parameters --------------------------------------------------------
    Double_t GetXMinModule() { return XMinModule; }
    Double_t GetXMaxModule() { return XMaxModule; }
    Double_t GetYMinModule() { return YMinModule; }
    Double_t GetYMaxModule() { return YMaxModule; }

    Double_t GetXSize() { return XMaxModule-XMinModule; }
    Double_t GetYSize() { return YMaxModule-YMinModule; }

    void SetZStartModulePosition(Double_t zpos_module) { ZStartModulePosition = zpos_module; }
    Double_t GetZStartModulePosition() { return ZStartModulePosition; }

    void SetElectronDriftDirection(ElectronDriftDirectionInModule direction) { ElectronDriftDirection = direction; }
    ElectronDriftDirectionInModule GetElectronDriftDirection() { return ElectronDriftDirection; }

    Double_t GetModuleThickness() { return ModuleThickness; }
    Double_t GetZPositionRegistered(); //position for all registered point (hits)
    //--------------------------------------------------------------------------

    //Strip layers controls ----------------------------------------------------
    void AddStripLayer(BmnGemStripLayer strip_layer);

    Bool_t SetStripSignalInLayer(Int_t layer_num, Int_t strip_num, Double_t signal);
    Bool_t AddStripSignalInLayer(Int_t layer_num, Int_t strip_num, Double_t signal);
    Bool_t SetStripMatchInLayer(Int_t layer_num, Int_t strip_num, BmnMatch strip_match);

    Double_t GetStripSignalInLayer(Int_t layer_num, Int_t strip_num);
    BmnMatch GetStripMatchInLayer(Int_t layer_num, Int_t strip_num);

    Int_t GetNStripLayers() { return StripLayers.size(); }
    BmnGemStripLayer& GetStripLayer(Int_t num) { return StripLayers.at(num); }
    vector<BmnGemStripLayer>& GetStripLayers() { return StripLayers; }

    void ResetModuleData(); //clear all data in the module and all layers (not delete layers!)
    //--------------------------------------------------------------------------

    //Point ownership of the module --------------------------------------------
    Bool_t IsPointInsideModule(Double_t x, Double_t y); //plane ownership
    Bool_t IsPointInsideModule(Double_t x, Double_t y, Double_t z); //volume ownership
    Bool_t IsPointInsideZThickness(Double_t z); // point with z-coord is between z_start and z_end of the module (inside module thickness)?
    //--------------------------------------------------------------------------

    //Methods to add a point to the module -------------------------------------
    Bool_t AddRealPointFull(Double_t x, Double_t y, Double_t z,
                            Double_t px, Double_t py, Double_t pz, Double_t signal, Int_t refID);

    Bool_t AddRealPointFullOne(Double_t x, Double_t y, Double_t z,
                               Double_t px, Double_t py, Double_t pz, Double_t signal, Int_t refID);

    Bool_t AddRealPointSimple(Double_t x, Double_t y, Double_t z,
                              Double_t px, Double_t py, Double_t pz, Double_t signal, Int_t refID); //old

    //make a strip cluster from a single point (with gauss smearing)
    StripCluster MakeCluster(Int_t layer_num, Double_t xcoord, Double_t ycoord, Double_t signal, Double_t radius);

    //seed for the random generator in the full simulation (AddRealPointFull)
    void SetAvalancheGenerationSeed(UInt_t seed) { AvalancheGenerationSeed = seed; }
    UInt_t GetAvalancheGenerationSeed() { return AvalancheGenerationSeed; }

    //controls to set up the avalanche radius in the non-full simulation (AddRealPointFullOne)
    void SetAvalancheRadius(Double_t aval_radius);
    Double_t GetAvalancheRadius();
    //--------------------------------------------------------------------------

    //Methods to calculate intersection points in the module -------------------
    void CalculateStripHitIntersectionPoints();

    //need for a separated test (find x,y intersection coords from strip positions)
    Bool_t SearchIntersectionPoint(Double_t &x, Double_t &y, Double_t strip_pos_layerA, Double_t strip_pos_layerB, Int_t layerA_index, Int_t layerB_index);
    //--------------------------------------------------------------------------

    //Added (real) points ------------------------------------------------------
    Int_t GetNRealPoints() {return RealPointsX.size();} //quantity of added points
    Double_t GetRealPointX(Int_t indx) { return RealPointsX.at(indx); } //X-coord of i-added point
    Double_t GetRealPointY(Int_t indx) { return RealPointsY.at(indx); } //Y-coord of i-added point

    void ResetRealPoints() { RealPointsX.clear(); RealPointsY.clear(); }
    //--------------------------------------------------------------------------

    //Intersection points ------------------------------------------------------
    Int_t GetNIntersectionPoints() {return IntersectionPointsX.size();} //quantity of intersections
    Double_t GetIntersectionPointX(Int_t indx) { return IntersectionPointsX.at(indx); } //X-coord of indx-intersection point
    Double_t GetIntersectionPointY(Int_t indx) { return IntersectionPointsY.at(indx); } //Y-coord of indx-intersection point
    Double_t GetIntersectionPointXError(Int_t indx) { return IntersectionPointsXErrors.at(indx); } //X-coord error of indx-intersection point
    Double_t GetIntersectionPointYError(Int_t indx) { return IntersectionPointsYErrors.at(indx); } //Y-coord error of indx-intersection point
    Int_t GetIntersectionPoint_LowerLayerClusterSize(Int_t indx) { return IntersectionPoints_LowerLayerClusterSize.at(indx); } //cluster size in the lower layer
    Int_t GetIntersectionPoint_UpperLayerClusterSize(Int_t indx) { return IntersectionPoints_UpperLayerClusterSize.at(indx); } //cluster size in the upper layer
    Double_t GetIntersectionPoint_LowerLayerSripPosition(Int_t indx) { return IntersectionPoints_LowerLayerStripPosition.at(indx); } //strip position in the lower layer
    Double_t GetIntersectionPoint_UpperLayerSripPosition(Int_t indx) { return IntersectionPoints_UpperLayerStripPosition.at(indx); } //strip position in the upper layer
    BmnMatch GetIntersectionPointMatch(Int_t indx) { return IntersectionPointMatches.at(indx); } //Intersection point match

    void ResetIntersectionPoints();
    //--------------------------------------------------------------------------

private:
    void DefineModuleBorders(); //calculate min-max coordinates of the module from layers` parameters

private:
    BmnGemStripModule(const BmnGemStripModule&);
    BmnGemStripModule& operator=(const BmnGemStripModule&);

private:
    Bool_t Verbosity;

    Double_t XMinModule;
    Double_t XMaxModule;
    Double_t YMinModule;
    Double_t YMaxModule;

    Double_t ZStartModulePosition;

    Double_t DriftGapThickness;
    Double_t FirstTransferGapThickness;
    Double_t SecondTransferGapThickness;
    Double_t InductionGapThickness;
    Double_t ModuleThickness;

    ElectronDriftDirectionInModule ElectronDriftDirection;

    vector<BmnGemStripLayer> StripLayers;

    UInt_t AvalancheGenerationSeed;
    Double_t AvalancheRadius;
    Double_t MCD; //Mean collision distance
    Double_t Gain;

    vector<Double_t> RealPointsX;
    vector<Double_t> RealPointsY;

    vector<Double_t> IntersectionPointsX;
    vector<Double_t> IntersectionPointsY;
    vector<Double_t> IntersectionPointsXErrors;
    vector<Double_t> IntersectionPointsYErrors;

    vector<Int_t> IntersectionPoints_LowerLayerClusterSize; //cluster size (number of strips) in the lower layer for each intersection point
    vector<Int_t> IntersectionPoints_UpperLayerClusterSize; //cluster size (number of strips) in the upper layer for each intersection point

    vector<Double_t> IntersectionPoints_LowerLayerStripPosition; //strip position in the lower layer for each intersection point
    vector<Double_t> IntersectionPoints_UpperLayerStripPosition; //strip position in the upper layer for each intersection point

    vector<BmnMatch> IntersectionPointMatches;

//testing part -----------------------------------------------------------------
public:
    vector<Double_t> XElectronPos;
    vector<Double_t> YElectronPos;
    vector<Double_t> ElectronSignal;

    vector<vector<StripCluster> > AddedClusters; //test

    void ResetElectronPointsAndClusters() {
        XElectronPos.clear();
        YElectronPos.clear();
        ElectronSignal.clear();
        AddedClusters.clear(); //test
    }
//------------------------------------------------------------------------------

};
//------------------------------------------------------------------------------

//Struct: a collision point position (an ionizing cluster position) ------------
struct CollPoint {
    CollPoint(Double_t _x, Double_t _y, Double_t _z) : x(_x), y(_y), z(_z) {}
    Double_t x;
    Double_t y;
    Double_t z;
};
//------------------------------------------------------------------------------

#endif	/* BMNGEMSTRIPMODULE_H */

#ifndef BMNGEMSTRIPSTATION_H
#define	BMNGEMSTRIPSTATION_H

#include "BmnGemStripModule.h"
#include "BmnStripData.h"

#include "TDOMParser.h"
#include "TXMLNode.h"
#include "TXMLAttr.h"
#include "TList.h"

class BmnGemStripStation {

protected:

    /* station parameters */
    Int_t StationNumber;
    Int_t NModules;

    Double_t XMinStation;
    Double_t XMaxStation;
    Double_t YMinStation;
    Double_t YMaxStation;
    Double_t ZMinStation;
    Double_t ZMaxStation;

    Double_t XSize;
    Double_t YSize;
    Double_t ZSize;

    Double_t XPosition;
    Double_t YPosition;
    Double_t ZPosition;

    /*Shifts of modules in each station*/
    Double_t *XShiftOfModules;
    Double_t *YShiftOfModules;
    Double_t *ZShiftOfModules;

    Double_t *DriftGapThicknessOfModules;
    Double_t *FTransfGapThicknessOfModules;
    Double_t *STransfGapThicknessOfModules;
    Double_t *InductionGapThicknessOfModules;

    Double_t BeamHoleRadius;

    BmnGemStripModule **Modules; //modules in the station [array]

public:

    /* Constructor */
    BmnGemStripStation();

    BmnGemStripStation(TXMLNode *stationNode, Int_t iStation,
                       Double_t xpos_station, Double_t ypos_station, Double_t zpos_station,
                       Double_t beamradius);

    /* Destructor */
    virtual ~BmnGemStripStation();

    //Getters
    Int_t GetStationNumber() { return StationNumber; }
    Int_t GetNModules() { return NModules; }
    Double_t GetXMinStation() { return XMinStation; }
    Double_t GetXMaxStation() { return XMaxStation; }
    Double_t GetYMinStation() { return YMinStation; }
    Double_t GetYMaxStation() { return YMaxStation; }
    Double_t GetZMinStation() { return ZMinStation; }
    Double_t GetZMaxStation() { return ZMaxStation; }
    Double_t GetXSize() { return XSize; }
    Double_t GetYSize() { return YSize; }
    Double_t GetZSize() { return ZSize; }
    Double_t GetXPosition() { return XPosition; }
    Double_t GetYPosition() { return YPosition; }
    Double_t GetZPosition() { return ZPosition; }
    Double_t GetXShiftOfModule(Int_t module_num);
    Double_t GetYShiftOfModule(Int_t module_num);
    Double_t GetZShiftOfModule(Int_t module_num);

    Double_t GetDriftGapThicknessOfModule(Int_t module_num);
    Double_t GetFTransfGapThicknessOfModule(Int_t module_num);
    Double_t GetSTransfGapThicknessOfModule(Int_t module_num);
    Double_t GetInductionGapThicknessOfModule(Int_t module_num);

    Double_t GetBeamHoleRadius() { return BeamHoleRadius; }
    BmnGemStripModule* GetModule(Int_t module_num);

    //Reset all data in modules of the station
    void Reset();

    Int_t AddPointToStation(Double_t xcoord, Double_t ycoord, Double_t zcoord,
                                    Double_t px, Double_t py, Double_t pz,
                                    Double_t dEloss, Int_t refID);

    Int_t CountNAddedToStationPoints();

    void ProcessPointsInStation();
    Int_t CountNProcessedPointInStation();

    //Pure virtual methods (must be defined in derived classes) ---------------

    //which module in the station does a point belong to?
        //zcoord - is unused usually, but if modules in the station are (x,y)-overlapped then zcoord is important
    Int_t GetPointModuleOwnership(Double_t xcoord, Double_t ycoord, Double_t zcoord);

    //--------------------------------------------------------------------------

protected:
    void DefineStationBorders();

private:

    Bool_t CreateConfigurationFromXMLNode(TXMLNode *node);
    Int_t CountNumberOfModules(TXMLNode *node);
    Bool_t ParseModule(TXMLNode *node, Int_t iModule);
    BmnGemStripLayer ParseLayer(TXMLNode *node, Int_t iLayer, Int_t iModule);
    DeadZoneOfStripLayer ParseDeadZone(TXMLNode *node, Int_t iModule);
    Int_t CountDeadZonePoints(TXMLNode *node);

    ClassDef(BmnGemStripStation, 1)
};

#endif
#ifndef BMNGEMSTRIPSTATIONSET_H
#define	BMNGEMSTRIPSTATIONSET_H

#include "BmnGemStripStation.h"
#include "BmnStripData.h"

#include "TDOMParser.h"
#include "TXMLNode.h"
#include "TXMLAttr.h"
#include "TList.h"

class BmnGemStripStationSet {

protected:

    /* station set parameters*/
    Int_t NStations; //number of stations in the GEM detector

    Double_t *XStationPositions; //x-position of each station [array]
    Double_t *YStationPositions; //y-position of each station [array]
    Double_t *ZStationPositions; //z-position of each station [array]

    Double_t *BeamHoleRadiuses; //beam hole radius of each station [array]

    BmnGemStripStation **GemStations; //GEM stations [array]

public:

    /* Constructor */
    BmnGemStripStationSet();

    BmnGemStripStationSet(TString xml_config_file);

    /* Destructor */
    virtual ~BmnGemStripStationSet();

    /* Getters */
    Int_t GetNStations() { return NStations; };
    Double_t GetXStationPosition(Int_t station_num);
    Double_t GetYStationPosition(Int_t station_num);
    Double_t GetZStationPosition(Int_t station_num);
    Double_t GetBeamHoleRadius(Int_t station_num);
    BmnGemStripStation* GetGemStation(Int_t station_num);

    //Reset all data in stations of the station set
    void Reset();

    Bool_t AddPointToDetector(Double_t xcoord, Double_t ycoord, Double_t zcoord,
                                      Double_t px, Double_t py, Double_t pz,
                                      Double_t dEloss, Int_t refID);

    Int_t CountNAddedToDetectorPoints();

    void ProcessPointsInDetector();
    Int_t CountNProcessedPointsInDetector();

    //which station in the GEM detector does a point belong to?
    Int_t GetPointStationOwnership(Double_t zcoord);

private:

    Bool_t CreateConfigurationFromXMLFile(TString xml_config_file);
    Int_t CountNumberOfStations(TXMLNode *node);
    Bool_t ParseStation(TXMLNode *node, Int_t iStation);

    ClassDef(BmnGemStripStationSet, 1);
};

#endif
#ifndef BMNGEMSTRIPSTATION_RUNSUMMER2016_H
#define	BMNGEMSTRIPSTATION_RUNSUMMER2016_H

#include "BmnGemStripStation.h"
#include "BmnGemStripConfiguration.h"

#include <sstream>

class BmnGemStripStation_RunSummer2016 : public BmnGemStripStation {

private:

    BmnGemStripConfiguration::GEM_CONFIG fCurrentConfig;

/* Readout module parameters */
    Double_t ZSizeModuleWithFrames;
    Double_t ZSizeModule;

    Double_t LowerLayerStripAngle; //angle from a vertical line where a plus value - clockwise
    Double_t UpperLayerStripAngle; //angle from a vertical line where a plus value - clockwise
    Double_t LowerLayerPitch; //cm
    Double_t UpperLayerPitch; //cm

    ElectronDriftDirectionInModule EDriftDirection;

/* Station 0 : plane 10x10  */
    Double_t XModuleSize_Plane10x10;
    Double_t YModuleSize_Plane10x10;

/* Station 1-5 : plane 66x41  */
    Double_t XModuleSize_Plane66x41;
    Double_t YModuleSize_Plane66x41;

    Double_t XHotZoneSize_Plane66x41;
    Double_t YHotZoneSize_Plane66x41;

/* Station 6 : plane 163x45 */
    Double_t XModuleSize_Plane163x45; // x size of module that is a half part of the plane
    Double_t YModuleSize_Plane163x45; // y size of module that is a half part of the plane

    Double_t XRectHotZoneSize_Plane163x45; // x size of a rectangle hot zone
    Double_t YRectHotZoneSize_Plane163x45; // y size of a rectangle hot zone

    Double_t XSlopeHotZoneSize_Plane163x45[2]; // x size of a slope hot zone (xmin_size, xmax_size)
    Double_t YSlopeHotZoneSize_Plane163x45;    // y size of a slope hot zone

public:

    BmnGemStripStation_RunSummer2016(Int_t iStation,
                       Double_t xpos_station, Double_t ypos_station, Double_t zpos_station,
                       Double_t beamradius, BmnGemStripConfiguration::GEM_CONFIG config);

    virtual ~BmnGemStripStation_RunSummer2016();

private:
    BmnGemStripStation_RunSummer2016(const BmnGemStripStation&);
    BmnGemStripStation_RunSummer2016& operator=(const BmnGemStripStation&);

    void BuildModules_One10x10Plane();
    void BuildModules_One66x41Plane();
    void BuildModules_One163x45Plane();

    ClassDef(BmnGemStripStation_RunSummer2016, 1);
};

#endif
#ifndef BMNGEMSTRIPSTATIONSET_RUNSUMMER2016_H
#define	BMNGEMSTRIPSTATIONSET_RUNSUMMER2016_H

#include "BmnGemStripStationSet.h"
#include "BmnGemStripStation.h"
#include "BmnGemStripConfiguration.h"

using namespace TMath;

class BmnGemStripStationSet_RunSummer2016 : public BmnGemStripStationSet {

public:

    BmnGemStripStationSet_RunSummer2016(BmnGemStripConfiguration::GEM_CONFIG config);
    virtual ~BmnGemStripStationSet_RunSummer2016();

private:
    BmnGemStripStationSet_RunSummer2016(const BmnGemStripStationSet&);
    BmnGemStripStationSet_RunSummer2016& operator=(const BmnGemStripStationSet&);

    void DefineBeamHoleRadiuses();
    void BuildStations();
    
private:
    BmnGemStripConfiguration::GEM_CONFIG fCurrentConfig;

    ClassDef(BmnGemStripStationSet_RunSummer2016, 1);
};



#endif
#ifndef BMNGEMSTRIPSTATION_RUNWINTER2016_H
#define	BMNGEMSTRIPSTATION_RUNWINTER2016_H

#include "BmnGemStripStation.h"
#include "BmnGemStripConfiguration.h"

class BmnGemStripStation_RunWinter2016 : public BmnGemStripStation {

private:

    BmnGemStripConfiguration::GEM_CONFIG fCurrentConfig;

/* Readout module parameters */
    Double_t ZSizeModuleWithFrames;
    Double_t ZSizeModule;

    Double_t LowerLayerStripAngle; //angle from a vertical line where a plus value - clockwise
    Double_t UpperLayerStripAngle; //angle from a vertical line where a plus value - clockwise
    Double_t LowerLayerPitch; //cm
    Double_t UpperLayerPitch; //cm

    ElectronDriftDirectionInModule EDriftDirection;

/* Station 0 : plane 10x10  */
    Double_t XModuleSize_Plane10x10;
    Double_t YModuleSize_Plane10x10;

/* Station 1-3 : plane 66x41  */
/* Station 4 : two plane 66x41  */
    Double_t XModuleSize_Plane66x41;
    Double_t YModuleSize_Plane66x41;

    Double_t XHotZoneSize_Plane66x41;
    Double_t YHotZoneSize_Plane66x41;

/* Station 5-6 : plane 163x45 */
    Double_t XModuleSize_Plane163x45; // x size of module that is a half part of the plane
    Double_t YModuleSize_Plane163x45; // y size of module that is a half part of the plane

    Double_t XRectHotZoneSize_Plane163x45; // x size of a rectangle hot zone
    Double_t YRectHotZoneSize_Plane163x45; // y size of a rectangle hot zone

    Double_t XSlopeHotZoneSize_Plane163x45[2]; // x size of a slope hot zone (xmin_size, xmax_size)
    Double_t YSlopeHotZoneSize_Plane163x45;    // y size of a slope hot zone

public:

    BmnGemStripStation_RunWinter2016(Int_t iStation,
                       Double_t xpos_station, Double_t ypos_station, Double_t zpos_station,
                       Double_t beamradius, BmnGemStripConfiguration::GEM_CONFIG config);

    virtual ~BmnGemStripStation_RunWinter2016();

private:
    BmnGemStripStation_RunWinter2016(const BmnGemStripStation&);
    BmnGemStripStation_RunWinter2016& operator=(const BmnGemStripStation&);

    void BuildModules_One10x10Plane();
    void BuildModules_One66x41Plane();
    void BuildModules_Two66x41Plane();
    void BuildModules_One163x45Plane();

    ClassDef(BmnGemStripStation_RunWinter2016, 1);
};

#endif
#ifndef BMNGEMSTRIPSTATIONSET_RUNWINTER2016_H
#define	BMNGEMSTRIPSTATIONSET_RUNWINTER2016_H

#include "BmnGemStripStationSet.h"
#include "BmnGemStripStation.h"
#include "BmnGemStripConfiguration.h"

using namespace TMath;

class BmnGemStripStationSet_RunWinter2016 : public BmnGemStripStationSet {

public:

    BmnGemStripStationSet_RunWinter2016(BmnGemStripConfiguration::GEM_CONFIG config);
    virtual ~BmnGemStripStationSet_RunWinter2016();

private:
    BmnGemStripStationSet_RunWinter2016(const BmnGemStripStationSet&);
    BmnGemStripStationSet_RunWinter2016& operator=(const BmnGemStripStationSet&);

    void DefineBeamHoleRadiuses();
    void BuildStations();

private:
    BmnGemStripConfiguration::GEM_CONFIG fCurrentConfig;

    ClassDef(BmnGemStripStationSet_RunWinter2016, 1);
};



#endif
#ifndef BMNGEMSTRIPSTATION_RUNSPRING2017_H
#define	BMNGEMSTRIPSTATION_RUNSPRING2017_H

#include "BmnGemStripStation.h"
#include "BmnGemStripConfiguration.h"

class BmnGemStripStation_RunSpring2017 : public BmnGemStripStation {

private:

    BmnGemStripConfiguration::GEM_CONFIG fCurrentConfig;

/* Readout module parameters */
    Double_t LowerLayerStripAngle; //angle from a vertical line where a plus value - clockwise
    Double_t UpperLayerStripAngle; //angle from a vertical line where a plus value - clockwise
    Double_t LowerLayerPitch; //cm
    Double_t UpperLayerPitch; //cm

    ElectronDriftDirectionInModule EDriftDirection;


/* Station 0-2 : plane 66x41  */
/* Station 3 : two plane 66x41  */
    Double_t XModuleSize_Plane66x41;
    Double_t YModuleSize_Plane66x41;

    Double_t XHotZoneSize_Plane66x41;
    Double_t YHotZoneSize_Plane66x41;

/* Station 4-5 : plane 163x45 */
    Double_t XModuleSize_Plane163x45; // x size of module that is a half part of the plane
    Double_t YModuleSize_Plane163x45; // y size of module that is a half part of the plane

    Double_t XRectHotZoneSize_Plane163x45; // x size of a rectangle hot zone
    Double_t YRectHotZoneSize_Plane163x45; // y size of a rectangle hot zone

    Double_t XSlopeHotZoneSize_Plane163x45[2]; // x size of a slope hot zone (xmin_size, xmax_size)
    Double_t YSlopeHotZoneSize_Plane163x45;    // y size of a slope hot zone

public:

    BmnGemStripStation_RunSpring2017(Int_t iStation,
                       Double_t xpos_station, Double_t ypos_station, Double_t zpos_station,
                       Double_t beamradius, BmnGemStripConfiguration::GEM_CONFIG config);

    virtual ~BmnGemStripStation_RunSpring2017();

private:
    BmnGemStripStation_RunSpring2017(const BmnGemStripStation&);
    BmnGemStripStation_RunSpring2017& operator=(const BmnGemStripStation&);

    void BuildModules_One66x41Plane();
    void BuildModules_Two66x41Plane();
    void BuildModules_One163x45Plane();

    ClassDef(BmnGemStripStation_RunSpring2017, 1);
};

#endif
#ifndef BMNGEMSTRIPSTATIONSET_RUNSPRING2017_H
#define	BMNGEMSTRIPSTATIONSET_RUNSPRING2017_H

#include "BmnGemStripStationSet.h"
#include "BmnGemStripStation.h"
#include "BmnGemStripConfiguration.h"

using namespace TMath;

class BmnGemStripStationSet_RunSpring2017 : public BmnGemStripStationSet {

public:

    BmnGemStripStationSet_RunSpring2017(BmnGemStripConfiguration::GEM_CONFIG config);
    virtual ~BmnGemStripStationSet_RunSpring2017();

private:
    BmnGemStripStationSet_RunSpring2017(const BmnGemStripStationSet&);
    BmnGemStripStationSet_RunSpring2017& operator=(const BmnGemStripStationSet&);

    void DefineBeamHoleRadiuses();
    void BuildStations();

private:
    BmnGemStripConfiguration::GEM_CONFIG fCurrentConfig;

    ClassDef(BmnGemStripStationSet_RunSpring2017, 1);
};

#endif
#ifndef BMNGEMSTRIPDIGIT_H
#define	BMNGEMSTRIPDIGIT_H

#include <iostream>
#include <vector>
#include "Rtypes.h"
#include "TNamed.h"

using namespace std;

class BmnGemStripDigit : public TNamed {
public:
    BmnGemStripDigit();
    BmnGemStripDigit(BmnGemStripDigit* digit);
    BmnGemStripDigit(Int_t iStation, Int_t iModule, Int_t iStripLayer, Int_t iStripNumber, Double_t iStripSignal);

    virtual ~BmnGemStripDigit();

    Int_t GetStation() { return fStation; }
    Int_t GetModule() { return fModule; }
    Int_t GetStripLayer() { return fStripLayer; }
    Int_t GetStripNumber() { return fStripNumber; }
    Double_t GetStripSignal() { return fStripSignal; }
    Bool_t IsGoodDigit() { return fIsGoodDigit; }

    void SetStation(Int_t station) { fStation = station; }
    void SetModule(Int_t module) { fModule = module; }
    void SetStripLayer(Int_t layer) { fStripLayer = layer; }
    void SetStripNumber(Int_t num) { fStripNumber = num; }
    void SetStripSignal(Double_t signal) { fStripSignal = signal; }
    void SetIsGoodDigit(Bool_t tmp) { fIsGoodDigit = tmp; }

private:
    Int_t fStation;
    Int_t fModule;
    Int_t fStripLayer;
    Int_t fStripNumber;
    Double_t fStripSignal;
    Bool_t fIsGoodDigit;

    ClassDef(BmnGemStripDigit,1);
};

#endif

#ifndef BMNGEMSTRIPDIGITIZER_H
#define BMNGEMSTRIPDIGITIZER_H 1

#include <iostream>

#include "Rtypes.h"
#include "TClonesArray.h"

#include "FairTask.h"
#include "FairMCPoint.h"

#include "BmnGemStripDigit.h"
#include "BmnGemStripHit.h"
#include "BmnGemStripStationSet.h"
#include "BmnGemStripConfiguration.h"

using namespace std;

class BmnGemStripDigitizer : public FairTask {
public:

    BmnGemStripDigitizer();

    virtual ~BmnGemStripDigitizer();

    virtual InitStatus Init();

    virtual void Exec(Option_t* opt);

    virtual void Finish();

    void ProcessMCPoints();

    //Setters

    void SetOnlyPrimary(Bool_t opt = kFALSE) {
        fOnlyPrimary = opt;
    }

    void SetStripMatching(Bool_t opt = kTRUE) {
        fStripMatching = opt;
    }

    void SetCurrentConfig(BmnGemStripConfiguration::GEM_CONFIG config) {
        fCurrentConfig = config;
    }

private:

    TString fInputBranchName;
    TString fOutputDigitsBranchName;
    TString fOutputDigitMatchesBranchName;

    /** Input array of Gem Points **/
    TClonesArray* fBmnGemStripPointsArray;

    /** Input array of MC Tracks **/
    TClonesArray* fMCTracksArray;

    /** Output array of Gem Digits **/
    TClonesArray* fBmnGemStripDigitsArray;

    /** Output array of GEM Digit Matches **/
    TClonesArray* fBmnGemStripDigitMatchesArray;

    Bool_t fOnlyPrimary;
    Bool_t fStripMatching;

    BmnGemStripConfiguration::GEM_CONFIG fCurrentConfig;

    BmnGemStripStationSet *StationSet; //Entire GEM detector

    ClassDef(BmnGemStripDigitizer,1);
};

#endif
#ifndef BMNGEMSTRIPHITMAKER_H
#define BMNGEMSTRIPHITMAKER_H 1

#include <iostream>
#include <fstream>
#include <sstream>

#include "Rtypes.h"
#include "TClonesArray.h"
#include "TRegexp.h"
#include "TString.h"

#include "FairTask.h"
#include "FairMCPoint.h"

#include <UniDbDetectorParameter.h>
#include <UniDbRun.h>
#include "FairField.h"
#include "BmnGemStripDigit.h"
#include "BmnGemStripHit.h"
#include "BmnGemStripStationSet.h"
#include "BmnGemStripConfiguration.h"
#include "BmnGemAlignmentCorrections.h"
#include "BmnGemAlignCorrections.h"
#include <BmnEventQuality.h>

using namespace std;

class BmnGemStripHitMaker : public FairTask {
public:

    BmnGemStripHitMaker();
    BmnGemStripHitMaker(Int_t, Bool_t);

    virtual ~BmnGemStripHitMaker();

    //void SetVerbosity(Bool_t verbose);

    virtual InitStatus Init();

    virtual void Exec(Option_t* opt);

    virtual void Finish();

    void ProcessDigits();

    void SetHitMatching(Bool_t opt = kTRUE) {
        fHitMatching = opt;
    }

    void SetCurrentConfig(BmnGemStripConfiguration::GEM_CONFIG config) {
        fCurrentConfig = config;
    }

    void SetAlignmentCorrectionsFileName(TString filename) {
        fAlignCorrFileName = filename;
    }

    void SetAlignmentCorrectionsFileName(Int_t file_number) {
        fRunId = file_number;
        if (fPeriodId == 5)
            fAlignCorrFileName = "$VMCWORKDIR/input/alignCorrsLocal_GEM.root";
        else if (fPeriodId == 6) {
            fAlignCorrFileName = "alignment_GEM.root";
            UniDbDetectorParameter::ReadRootFile(fPeriodId, file_number, "BM@N", "alignment", (Char_t*) fAlignCorrFileName.Data());
        } else {
            fAlignCorrFileName = "";
        }
    }

    inline Double_t GetLorentzByField(Double_t By, Int_t station) {
        // Appropriate Lorentz-corrections to the GEM-hits for RUN5, 6 as a function of voltage and so on
        // have been moved to the UniDb
        return lorCorrsCoeff[station][0] + lorCorrsCoeff[station][1] * By + lorCorrsCoeff[station][2] * By * By;
    }

private:

    TString fInputPointsBranchName;
    TString fInputDigitsBranchName;
    TString fInputDigitMatchesBranchName;

    TString fOutputHitsBranchName;
    TString fOutputHitMatchesBranchName;

    /** Input array of Gem Points **/
    TClonesArray* fBmnGemStripPointsArray;
    TClonesArray* fBmnGemStripDigitsArray;
    TClonesArray* fBmnGemStripDigitMatchesArray;

    /** Output array of Gem Hits **/
    TClonesArray* fBmnGemStripHitsArray;

    /** Output array of GEM Hit Matches **/
    TClonesArray* fBmnGemStripHitMatchesArray;

    Bool_t fHitMatching;
    Int_t fRunId;
    Int_t fPeriodId;
    Bool_t fIsExp; // Specify type of input data (MC or real data)

    BmnGemStripConfiguration::GEM_CONFIG fCurrentConfig;

    BmnGemStripStationSet *StationSet; //Entire GEM detector

    TString fAlignCorrFileName; // a file with geometry corrections
    void ReadAlignCorrFile(TString, Double_t***); // read corrections from the file
    Double_t*** corr; // array to store the corrections

    Double_t*** misAlign; // an array to introduce remain misalignment
    FairField* fField;
    Double_t** lorCorrsCoeff;

    TString fBmnEvQualityBranchName;
    TClonesArray* fBmnEvQuality;

    ClassDef(BmnGemStripHitMaker, 1);
};


#endif
/* 
 * File:   BmnKalmanFilter.h
 *
 * Created on July 29, 2015, 9:48 AM
 */

#ifndef BmnKalmanFilter_H
#define	BmnKalmanFilter_H

#include "BmnEnums.h"
#include "FairTrackParam.h"
#include "BmnHit.h"
#include "TMatrixD.h"
#include "BmnFitNode.h"
#include <vector>
#include "FairRunAna.h"
#include "FairField.h"
#include "TMath.h"
#include "BmnMatrixMath.h"
#include "BmnMath.h"
#include "TClonesArray.h"
#include "BmnGemTrack.h"
#include "BmnGeoNavigator.h"
#include "BmnMaterialEffects.h"

class BmnKalmanFilter {
public:
    /* Constructor */
    BmnKalmanFilter();

    /* Destructor */
    virtual ~BmnKalmanFilter();

    BmnStatus Prediction(FairTrackParam* par, Double_t dZ, BmnFitNode& node);
    BmnStatus Correction(FairTrackParam* par, BmnHit* hit, Double_t &chi2, BmnFitNode& node);
    FairTrackParam Filtration(BmnGemTrack* tr, TClonesArray* hits);
    TMatrixD Transport(FairTrackParam* par, Double_t zOut, Bool_t isField); //transport matrix generation
    BmnStatus AddFitNode(BmnFitNode node);
    vector<BmnFitNode> GetFitNodes() const {return fFitNodes;};
    TMatrixD FillVecFromPar(const FairTrackParam* par);
    TMatrixD FillCovFromPar(const FairTrackParam* par);
    BmnStatus FillParFromVecAndCov(TMatrixD x, TMatrixD c, FairTrackParam* par);
    Int_t GetNnodes() const {return fFitNodes.size();};
    
    void RK4Order(const vector<Double_t>& xIn, Double_t zIn, vector<Double_t>& xOut, Double_t zOut, vector<Double_t>& derivs);
    BmnStatus RK4TrackExtrapolate(FairTrackParam* par, Double_t zOut, vector<Double_t>* F);
    Double_t CalcOut(Double_t in, const Double_t k[4]);
    void TransportC(const vector<Double_t>& cIn, const vector<Double_t>& F, vector<Double_t>& cOut);
    BmnStatus Update(FairTrackParam* par, const BmnHit* hit, Double_t& chiSq);
    void UpdateF(vector<Double_t>& F, const vector<Double_t>& newF);
    
    BmnStatus FitSmooth(BmnGemTrack* track, TClonesArray* hits);
    BmnStatus Smooth(BmnFitNode* thisNode, BmnFitNode* prevNode);
    
    BmnStatus TGeoTrackPropagate(FairTrackParam* par, Double_t zOut, Int_t pdg, vector<Double_t>* F, Double_t* length, Bool_t isField);
    
private:
    vector<BmnFitNode> fFitNodes;
    FairField* fField;
    BmnGeoNavigator* fNavigator;
    BmnMaterialEffects* fMaterial;

};

#endif	/* BmnKalmanFilter_H */

#ifndef BMNGEMSTRIPMEDIUM_H
#define BMNGEMSTRIPMEDIUM_H

#include "BmnGemStripMediumConfiguration.h"

#include "TROOT.h"

class BmnGemStripMedium {

public:

    static BmnGemStripMedium& GetInstance() {
        static BmnGemStripMedium medium;
        return medium;
    }

private:
    BmnGemStripMedium();  //this constructor is not available for explicitly calling
    ~BmnGemStripMedium();
    BmnGemStripMedium(BmnGemStripMedium const&);
    BmnGemStripMedium& operator= (BmnGemStripMedium const&);

public:
    Bool_t SetCurrentConfiguration(BmnGemStripMediumConfiguration::MEDIUM medium);


//private:
public:
    TString NameOfCurrentMedium;
    Double_t MCD; //Mean collision distance

    //Polynomial coefficients for f(x) = (p0 + p1*x + p2*x^2 + p3*x^3) (describing the average shift of cluster centers)
    Double_t p0_xmean;
    Double_t p1_xmean;
    Double_t p2_xmean;
    Double_t p3_xmean;

    //Polynomial coefficients for f(x) = (p0 + p1*x + p2*x^2 + p3*x^3+ p4*x^4 + p5*x^5) (describing the average scattering of cluster centers)
    Double_t p0_sigma;
    Double_t p1_sigma;
    Double_t p2_sigma;
    Double_t p3_sigma;
    Double_t p4_sigma;
    Double_t p5_sigma;

    ClassDef(BmnGemStripMedium, 1);
};

#endif
/**
 * \file BmnMaterialEffects.h
 * \author Andrey Lebedev <andrey.lebedev@gsi.de> - Original author. First version of code for CBM experiment.
 * \author Sergey Merts <Sergey.Merts@gmail.com> - Modification for BMN experiment.
 * \date 2008-2014
 * \brief Interface for material effects calculation algorithm.
 */

#ifndef BmnMaterialEffects_H_
#define BmnMaterialEffects_H_

#include "BmnEnums.h"
#include "FairTrackParam.h"

class BmnMaterialInfo;

/**
 * \class BmnMaterialEffects
 * \author Andrey Lebedev <andrey.lebedev@gsi.de> - Original author. First version of code for CBM experiment.
 * \author Sergey Merts <Sergey.Merts@gmail.com> - Modification for BMN experiment.
 * \date 2008-2014
 * \brief Interface for material effects calculation algorithm.
 */
class BmnMaterialEffects {
public:

    /**
     * \brief Constructor.
     */
    BmnMaterialEffects();

    /**
     * \brief Destructor.
     */
    virtual ~BmnMaterialEffects();

    /**
     * \brief Main function to be implemented for concrete material effects calculation algorithm.
     * \param[in,out] par Input/Output track parameters.
     * \param[in] mat Material information.
     * \param[in] pdg PDG code
     * \param[in] downstream Propagation direction (true for downstream, false for upstream).
     * \return Status code.
     */
    virtual BmnStatus Update(FairTrackParam* par, const BmnMaterialInfo* mat, Int_t pdg, Bool_t downstream);
    void AddEnergyLoss(FairTrackParam* par, const BmnMaterialInfo* mat) const;
    void AddThickScatter(FairTrackParam* par, const BmnMaterialInfo* mat) const;
    void AddThinScatter(FairTrackParam* par, const BmnMaterialInfo* mat) const;
    Float_t CalcThetaSq(const FairTrackParam* par, const BmnMaterialInfo* mat) const;
    Float_t EnergyLoss(const FairTrackParam* par, const BmnMaterialInfo* mat) const;
    Float_t dEdx(const FairTrackParam* par, const BmnMaterialInfo* mat) const;
    Float_t BetheBloch(const FairTrackParam* par, const BmnMaterialInfo* mat) const;
    Float_t BetheBlochElectron( const FairTrackParam* par, const BmnMaterialInfo* mat) const;
    Float_t CalcQpAfterEloss(Float_t qp, Float_t eloss) const;
    Float_t CalcSigmaSqQp(const FairTrackParam* par, const BmnMaterialInfo* mat) const;
    Float_t CalcSigmaSqQpElectron(const FairTrackParam* par, const BmnMaterialInfo* mat) const;
    Float_t CalcI(Float_t Z) const;
    Float_t BetheHeitler(const FairTrackParam* par, const BmnMaterialInfo* mat) const;
    Float_t PairProduction(const FairTrackParam* par, const BmnMaterialInfo* mat) const;
    Float_t BetheBlochSimple(const BmnMaterialInfo* mat) const;
    Float_t MPVEnergyLoss(const FairTrackParam* par, const BmnMaterialInfo* mat) const;

private:
    Bool_t fDownstream; // Propagation direction
    Float_t fMass; // Hypothesis on particle mass
    Bool_t fIsElectron; // True if particle is an electron or positron
    Bool_t fIsMuon; // True if particle is muon
};

#endif /*BmnMaterialEffects_H_*/

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"BmnGemDigit", payloadCode, "@",
"BmnGemDigitizerQAHistograms", payloadCode, "@",
"BmnGemGas", payloadCode, "@",
"BmnGemGeo", payloadCode, "@",
"BmnGemHitProducer", payloadCode, "@",
"BmnGemStripConfiguration::GEM_CONFIG", payloadCode, "@",
"BmnGemStripDigit", payloadCode, "@",
"BmnGemStripDigitizer", payloadCode, "@",
"BmnGemStripHitMaker", payloadCode, "@",
"BmnGemStripLayer", payloadCode, "@",
"BmnGemStripMedium", payloadCode, "@",
"BmnGemStripModule", payloadCode, "@",
"BmnGemStripStation", payloadCode, "@",
"BmnGemStripStationSet", payloadCode, "@",
"BmnGemStripStationSet_RunSpring2017", payloadCode, "@",
"BmnGemStripStationSet_RunSummer2016", payloadCode, "@",
"BmnGemStripStationSet_RunWinter2016", payloadCode, "@",
"BmnGemStripStation_RunSpring2017", payloadCode, "@",
"BmnGemStripStation_RunSummer2016", payloadCode, "@",
"BmnGemStripStation_RunWinter2016", payloadCode, "@",
"BmnGemTracking", payloadCode, "@",
"BmnKalmanFilter", payloadCode, "@",
"BmnMaterialEffects", payloadCode, "@",
"ElectronDriftDirectionInModule", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__GemDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__GemDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__GemDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__GemDict() {
  TriggerDictionaryInitialization_G__GemDict_Impl();
}
