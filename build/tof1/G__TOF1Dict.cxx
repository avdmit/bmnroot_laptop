// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIalexdIbmnroot_devdIbmnrootdIbuilddItof1dIG__TOF1Dict

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
#include "BmnTOF1.h"
#include "BmnTOF1Point.h"
#include "BmnTOF1ContFact.h"
#include "BmnTOF1Geo.h"
#include "BmnTOF1GeoPar.h"
#include "BmnTof1HitProducer.h"
#include "BmnTof1HitProducerIdeal.h"
#include "BmnTof1GeoUtils.h"
#include "BmnTOF1TDC.h"
#include "BmnTOF1Detector.h"
#include "BmnTOF1Conteiner.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_BmnTOF1GeoPar(void *p = 0);
   static void *newArray_BmnTOF1GeoPar(Long_t size, void *p);
   static void delete_BmnTOF1GeoPar(void *p);
   static void deleteArray_BmnTOF1GeoPar(void *p);
   static void destruct_BmnTOF1GeoPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTOF1GeoPar*)
   {
      ::BmnTOF1GeoPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTOF1GeoPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTOF1GeoPar", ::BmnTOF1GeoPar::Class_Version(), "BmnTOF1GeoPar.h", 10,
                  typeid(::BmnTOF1GeoPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTOF1GeoPar::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTOF1GeoPar) );
      instance.SetNew(&new_BmnTOF1GeoPar);
      instance.SetNewArray(&newArray_BmnTOF1GeoPar);
      instance.SetDelete(&delete_BmnTOF1GeoPar);
      instance.SetDeleteArray(&deleteArray_BmnTOF1GeoPar);
      instance.SetDestructor(&destruct_BmnTOF1GeoPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTOF1GeoPar*)
   {
      return GenerateInitInstanceLocal((::BmnTOF1GeoPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTOF1GeoPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTOF1(void *p = 0);
   static void *newArray_BmnTOF1(Long_t size, void *p);
   static void delete_BmnTOF1(void *p);
   static void deleteArray_BmnTOF1(void *p);
   static void destruct_BmnTOF1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTOF1*)
   {
      ::BmnTOF1 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTOF1 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTOF1", ::BmnTOF1::Class_Version(), "", 25,
                  typeid(::BmnTOF1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTOF1::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTOF1) );
      instance.SetNew(&new_BmnTOF1);
      instance.SetNewArray(&newArray_BmnTOF1);
      instance.SetDelete(&delete_BmnTOF1);
      instance.SetDeleteArray(&deleteArray_BmnTOF1);
      instance.SetDestructor(&destruct_BmnTOF1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTOF1*)
   {
      return GenerateInitInstanceLocal((::BmnTOF1*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTOF1*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTOF1Point(void *p = 0);
   static void *newArray_BmnTOF1Point(Long_t size, void *p);
   static void delete_BmnTOF1Point(void *p);
   static void deleteArray_BmnTOF1Point(void *p);
   static void destruct_BmnTOF1Point(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTOF1Point*)
   {
      ::BmnTOF1Point *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTOF1Point >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTOF1Point", ::BmnTOF1Point::Class_Version(), "", 86,
                  typeid(::BmnTOF1Point), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTOF1Point::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTOF1Point) );
      instance.SetNew(&new_BmnTOF1Point);
      instance.SetNewArray(&newArray_BmnTOF1Point);
      instance.SetDelete(&delete_BmnTOF1Point);
      instance.SetDeleteArray(&deleteArray_BmnTOF1Point);
      instance.SetDestructor(&destruct_BmnTOF1Point);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTOF1Point*)
   {
      return GenerateInitInstanceLocal((::BmnTOF1Point*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTOF1Point*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTOF1ContFact(void *p = 0);
   static void *newArray_BmnTOF1ContFact(Long_t size, void *p);
   static void delete_BmnTOF1ContFact(void *p);
   static void deleteArray_BmnTOF1ContFact(void *p);
   static void destruct_BmnTOF1ContFact(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTOF1ContFact*)
   {
      ::BmnTOF1ContFact *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTOF1ContFact >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTOF1ContFact", ::BmnTOF1ContFact::Class_Version(), "", 145,
                  typeid(::BmnTOF1ContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTOF1ContFact::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTOF1ContFact) );
      instance.SetNew(&new_BmnTOF1ContFact);
      instance.SetNewArray(&newArray_BmnTOF1ContFact);
      instance.SetDelete(&delete_BmnTOF1ContFact);
      instance.SetDeleteArray(&deleteArray_BmnTOF1ContFact);
      instance.SetDestructor(&destruct_BmnTOF1ContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTOF1ContFact*)
   {
      return GenerateInitInstanceLocal((::BmnTOF1ContFact*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTOF1ContFact*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTOF1Geo(void *p = 0);
   static void *newArray_BmnTOF1Geo(Long_t size, void *p);
   static void delete_BmnTOF1Geo(void *p);
   static void deleteArray_BmnTOF1Geo(void *p);
   static void destruct_BmnTOF1Geo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTOF1Geo*)
   {
      ::BmnTOF1Geo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTOF1Geo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTOF1Geo", ::BmnTOF1Geo::Class_Version(), "", 170,
                  typeid(::BmnTOF1Geo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTOF1Geo::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTOF1Geo) );
      instance.SetNew(&new_BmnTOF1Geo);
      instance.SetNewArray(&newArray_BmnTOF1Geo);
      instance.SetDelete(&delete_BmnTOF1Geo);
      instance.SetDeleteArray(&deleteArray_BmnTOF1Geo);
      instance.SetDestructor(&destruct_BmnTOF1Geo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTOF1Geo*)
   {
      return GenerateInitInstanceLocal((::BmnTOF1Geo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTOF1Geo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTof1HitProducerIdeal(void *p = 0);
   static void *newArray_BmnTof1HitProducerIdeal(Long_t size, void *p);
   static void delete_BmnTof1HitProducerIdeal(void *p);
   static void deleteArray_BmnTof1HitProducerIdeal(void *p);
   static void destruct_BmnTof1HitProducerIdeal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTof1HitProducerIdeal*)
   {
      ::BmnTof1HitProducerIdeal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTof1HitProducerIdeal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTof1HitProducerIdeal", ::BmnTof1HitProducerIdeal::Class_Version(), "BmnTof1HitProducerIdeal.h", 14,
                  typeid(::BmnTof1HitProducerIdeal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTof1HitProducerIdeal::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTof1HitProducerIdeal) );
      instance.SetNew(&new_BmnTof1HitProducerIdeal);
      instance.SetNewArray(&newArray_BmnTof1HitProducerIdeal);
      instance.SetDelete(&delete_BmnTof1HitProducerIdeal);
      instance.SetDeleteArray(&deleteArray_BmnTof1HitProducerIdeal);
      instance.SetDestructor(&destruct_BmnTof1HitProducerIdeal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTof1HitProducerIdeal*)
   {
      return GenerateInitInstanceLocal((::BmnTof1HitProducerIdeal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTof1HitProducerIdeal*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTOF1Conteiner(void *p = 0);
   static void *newArray_BmnTOF1Conteiner(Long_t size, void *p);
   static void delete_BmnTOF1Conteiner(void *p);
   static void deleteArray_BmnTOF1Conteiner(void *p);
   static void destruct_BmnTOF1Conteiner(void *p);
   static void streamer_BmnTOF1Conteiner(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTOF1Conteiner*)
   {
      ::BmnTOF1Conteiner *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTOF1Conteiner >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTOF1Conteiner", ::BmnTOF1Conteiner::Class_Version(), "BmnTOF1Conteiner.h", 20,
                  typeid(::BmnTOF1Conteiner), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTOF1Conteiner::Dictionary, isa_proxy, 16,
                  sizeof(::BmnTOF1Conteiner) );
      instance.SetNew(&new_BmnTOF1Conteiner);
      instance.SetNewArray(&newArray_BmnTOF1Conteiner);
      instance.SetDelete(&delete_BmnTOF1Conteiner);
      instance.SetDeleteArray(&deleteArray_BmnTOF1Conteiner);
      instance.SetDestructor(&destruct_BmnTOF1Conteiner);
      instance.SetStreamerFunc(&streamer_BmnTOF1Conteiner);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTOF1Conteiner*)
   {
      return GenerateInitInstanceLocal((::BmnTOF1Conteiner*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTOF1Conteiner*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTOF1Detector(void *p = 0);
   static void *newArray_BmnTOF1Detector(Long_t size, void *p);
   static void delete_BmnTOF1Detector(void *p);
   static void deleteArray_BmnTOF1Detector(void *p);
   static void destruct_BmnTOF1Detector(void *p);
   static void streamer_BmnTOF1Detector(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTOF1Detector*)
   {
      ::BmnTOF1Detector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTOF1Detector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTOF1Detector", ::BmnTOF1Detector::Class_Version(), "BmnTOF1Detector.h", 52,
                  typeid(::BmnTOF1Detector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTOF1Detector::Dictionary, isa_proxy, 16,
                  sizeof(::BmnTOF1Detector) );
      instance.SetNew(&new_BmnTOF1Detector);
      instance.SetNewArray(&newArray_BmnTOF1Detector);
      instance.SetDelete(&delete_BmnTOF1Detector);
      instance.SetDeleteArray(&deleteArray_BmnTOF1Detector);
      instance.SetDestructor(&destruct_BmnTOF1Detector);
      instance.SetStreamerFunc(&streamer_BmnTOF1Detector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTOF1Detector*)
   {
      return GenerateInitInstanceLocal((::BmnTOF1Detector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTOF1Detector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTof1HitProducer(void *p = 0);
   static void *newArray_BmnTof1HitProducer(Long_t size, void *p);
   static void delete_BmnTof1HitProducer(void *p);
   static void deleteArray_BmnTof1HitProducer(void *p);
   static void destruct_BmnTof1HitProducer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTof1HitProducer*)
   {
      ::BmnTof1HitProducer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTof1HitProducer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTof1HitProducer", ::BmnTof1HitProducer::Class_Version(), "", 245,
                  typeid(::BmnTof1HitProducer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTof1HitProducer::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTof1HitProducer) );
      instance.SetNew(&new_BmnTof1HitProducer);
      instance.SetNewArray(&newArray_BmnTof1HitProducer);
      instance.SetDelete(&delete_BmnTof1HitProducer);
      instance.SetDeleteArray(&deleteArray_BmnTof1HitProducer);
      instance.SetDestructor(&destruct_BmnTof1HitProducer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTof1HitProducer*)
   {
      return GenerateInitInstanceLocal((::BmnTof1HitProducer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTof1HitProducer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnTof1TDC(void *p);
   static void deleteArray_BmnTof1TDC(void *p);
   static void destruct_BmnTof1TDC(void *p);
   static void streamer_BmnTof1TDC(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTof1TDC*)
   {
      ::BmnTof1TDC *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTof1TDC >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTof1TDC", ::BmnTof1TDC::Class_Version(), "", 504,
                  typeid(::BmnTof1TDC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTof1TDC::Dictionary, isa_proxy, 16,
                  sizeof(::BmnTof1TDC) );
      instance.SetDelete(&delete_BmnTof1TDC);
      instance.SetDeleteArray(&deleteArray_BmnTof1TDC);
      instance.SetDestructor(&destruct_BmnTof1TDC);
      instance.SetStreamerFunc(&streamer_BmnTof1TDC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTof1TDC*)
   {
      return GenerateInitInstanceLocal((::BmnTof1TDC*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTof1TDC*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *BmnTof1Configure_Dictionary();
   static void BmnTof1Configure_TClassManip(TClass*);
   static void delete_BmnTof1Configure(void *p);
   static void deleteArray_BmnTof1Configure(void *p);
   static void destruct_BmnTof1Configure(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTof1Configure*)
   {
      ::BmnTof1Configure *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BmnTof1Configure));
      static ::ROOT::TGenericClassInfo 
         instance("BmnTof1Configure", "", 551,
                  typeid(::BmnTof1Configure), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BmnTof1Configure_Dictionary, isa_proxy, 0,
                  sizeof(::BmnTof1Configure) );
      instance.SetDelete(&delete_BmnTof1Configure);
      instance.SetDeleteArray(&deleteArray_BmnTof1Configure);
      instance.SetDestructor(&destruct_BmnTof1Configure);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTof1Configure*)
   {
      return GenerateInitInstanceLocal((::BmnTof1Configure*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTof1Configure*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BmnTof1Configure_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BmnTof1Configure*)0x0)->GetClass();
      BmnTof1Configure_TClassManip(theClass);
   return theClass;
   }

   static void BmnTof1Configure_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BmnTof1TDCMapping_Dictionary();
   static void BmnTof1TDCMapping_TClassManip(TClass*);
   static void delete_BmnTof1TDCMapping(void *p);
   static void deleteArray_BmnTof1TDCMapping(void *p);
   static void destruct_BmnTof1TDCMapping(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTof1TDCMapping*)
   {
      ::BmnTof1TDCMapping *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BmnTof1TDCMapping));
      static ::ROOT::TGenericClassInfo 
         instance("BmnTof1TDCMapping", "", 638,
                  typeid(::BmnTof1TDCMapping), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BmnTof1TDCMapping_Dictionary, isa_proxy, 0,
                  sizeof(::BmnTof1TDCMapping) );
      instance.SetDelete(&delete_BmnTof1TDCMapping);
      instance.SetDeleteArray(&deleteArray_BmnTof1TDCMapping);
      instance.SetDestructor(&destruct_BmnTof1TDCMapping);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTof1TDCMapping*)
   {
      return GenerateInitInstanceLocal((::BmnTof1TDCMapping*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTof1TDCMapping*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BmnTof1TDCMapping_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BmnTof1TDCMapping*)0x0)->GetClass();
      BmnTof1TDCMapping_TClassManip(theClass);
   return theClass;
   }

   static void BmnTof1TDCMapping_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BmnTof1DigitConvertor_Dictionary();
   static void BmnTof1DigitConvertor_TClassManip(TClass*);
   static void *new_BmnTof1DigitConvertor(void *p = 0);
   static void *newArray_BmnTof1DigitConvertor(Long_t size, void *p);
   static void delete_BmnTof1DigitConvertor(void *p);
   static void deleteArray_BmnTof1DigitConvertor(void *p);
   static void destruct_BmnTof1DigitConvertor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTof1DigitConvertor*)
   {
      ::BmnTof1DigitConvertor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BmnTof1DigitConvertor));
      static ::ROOT::TGenericClassInfo 
         instance("BmnTof1DigitConvertor", "", 662,
                  typeid(::BmnTof1DigitConvertor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BmnTof1DigitConvertor_Dictionary, isa_proxy, 0,
                  sizeof(::BmnTof1DigitConvertor) );
      instance.SetNew(&new_BmnTof1DigitConvertor);
      instance.SetNewArray(&newArray_BmnTof1DigitConvertor);
      instance.SetDelete(&delete_BmnTof1DigitConvertor);
      instance.SetDeleteArray(&deleteArray_BmnTof1DigitConvertor);
      instance.SetDestructor(&destruct_BmnTof1DigitConvertor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTof1DigitConvertor*)
   {
      return GenerateInitInstanceLocal((::BmnTof1DigitConvertor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTof1DigitConvertor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BmnTof1DigitConvertor_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BmnTof1DigitConvertor*)0x0)->GetClass();
      BmnTof1DigitConvertor_TClassManip(theClass);
   return theClass;
   }

   static void BmnTof1DigitConvertor_TClassManip(TClass* ){
   }

} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnTOF1GeoPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTOF1GeoPar::Class_Name()
{
   return "BmnTOF1GeoPar";
}

//______________________________________________________________________________
const char *BmnTOF1GeoPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1GeoPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTOF1GeoPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1GeoPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTOF1GeoPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1GeoPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTOF1GeoPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1GeoPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTOF1::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTOF1::Class_Name()
{
   return "BmnTOF1";
}

//______________________________________________________________________________
const char *BmnTOF1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTOF1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTOF1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTOF1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTOF1Point::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTOF1Point::Class_Name()
{
   return "BmnTOF1Point";
}

//______________________________________________________________________________
const char *BmnTOF1Point::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1Point*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTOF1Point::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1Point*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTOF1Point::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1Point*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTOF1Point::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1Point*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTOF1ContFact::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTOF1ContFact::Class_Name()
{
   return "BmnTOF1ContFact";
}

//______________________________________________________________________________
const char *BmnTOF1ContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1ContFact*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTOF1ContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1ContFact*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTOF1ContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1ContFact*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTOF1ContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1ContFact*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTOF1Geo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTOF1Geo::Class_Name()
{
   return "BmnTOF1Geo";
}

//______________________________________________________________________________
const char *BmnTOF1Geo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1Geo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTOF1Geo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1Geo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTOF1Geo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1Geo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTOF1Geo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1Geo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTof1HitProducerIdeal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTof1HitProducerIdeal::Class_Name()
{
   return "BmnTof1HitProducerIdeal";
}

//______________________________________________________________________________
const char *BmnTof1HitProducerIdeal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTof1HitProducerIdeal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTof1HitProducerIdeal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTof1HitProducerIdeal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTof1HitProducerIdeal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTof1HitProducerIdeal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTof1HitProducerIdeal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTof1HitProducerIdeal*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTOF1Conteiner::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTOF1Conteiner::Class_Name()
{
   return "BmnTOF1Conteiner";
}

//______________________________________________________________________________
const char *BmnTOF1Conteiner::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1Conteiner*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTOF1Conteiner::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1Conteiner*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTOF1Conteiner::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1Conteiner*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTOF1Conteiner::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1Conteiner*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTOF1Detector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTOF1Detector::Class_Name()
{
   return "BmnTOF1Detector";
}

//______________________________________________________________________________
const char *BmnTOF1Detector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1Detector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTOF1Detector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1Detector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTOF1Detector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1Detector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTOF1Detector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF1Detector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTof1HitProducer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTof1HitProducer::Class_Name()
{
   return "BmnTof1HitProducer";
}

//______________________________________________________________________________
const char *BmnTof1HitProducer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTof1HitProducer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTof1HitProducer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTof1HitProducer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTof1HitProducer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTof1HitProducer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTof1HitProducer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTof1HitProducer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTof1TDC::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTof1TDC::Class_Name()
{
   return "BmnTof1TDC";
}

//______________________________________________________________________________
const char *BmnTof1TDC::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTof1TDC*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTof1TDC::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTof1TDC*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTof1TDC::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTof1TDC*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTof1TDC::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTof1TDC*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnTOF1GeoPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTOF1GeoPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTOF1GeoPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTOF1GeoPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTOF1GeoPar(void *p) {
      return  p ? new(p) ::BmnTOF1GeoPar : new ::BmnTOF1GeoPar;
   }
   static void *newArray_BmnTOF1GeoPar(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTOF1GeoPar[nElements] : new ::BmnTOF1GeoPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTOF1GeoPar(void *p) {
      delete ((::BmnTOF1GeoPar*)p);
   }
   static void deleteArray_BmnTOF1GeoPar(void *p) {
      delete [] ((::BmnTOF1GeoPar*)p);
   }
   static void destruct_BmnTOF1GeoPar(void *p) {
      typedef ::BmnTOF1GeoPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTOF1GeoPar

//______________________________________________________________________________
void BmnTOF1::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTOF1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTOF1::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTOF1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTOF1(void *p) {
      return  p ? new(p) ::BmnTOF1 : new ::BmnTOF1;
   }
   static void *newArray_BmnTOF1(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTOF1[nElements] : new ::BmnTOF1[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTOF1(void *p) {
      delete ((::BmnTOF1*)p);
   }
   static void deleteArray_BmnTOF1(void *p) {
      delete [] ((::BmnTOF1*)p);
   }
   static void destruct_BmnTOF1(void *p) {
      typedef ::BmnTOF1 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTOF1

//______________________________________________________________________________
void BmnTOF1Point::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTOF1Point.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTOF1Point::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTOF1Point::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTOF1Point(void *p) {
      return  p ? new(p) ::BmnTOF1Point : new ::BmnTOF1Point;
   }
   static void *newArray_BmnTOF1Point(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTOF1Point[nElements] : new ::BmnTOF1Point[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTOF1Point(void *p) {
      delete ((::BmnTOF1Point*)p);
   }
   static void deleteArray_BmnTOF1Point(void *p) {
      delete [] ((::BmnTOF1Point*)p);
   }
   static void destruct_BmnTOF1Point(void *p) {
      typedef ::BmnTOF1Point current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTOF1Point

//______________________________________________________________________________
void BmnTOF1ContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTOF1ContFact.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTOF1ContFact::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTOF1ContFact::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTOF1ContFact(void *p) {
      return  p ? new(p) ::BmnTOF1ContFact : new ::BmnTOF1ContFact;
   }
   static void *newArray_BmnTOF1ContFact(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTOF1ContFact[nElements] : new ::BmnTOF1ContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTOF1ContFact(void *p) {
      delete ((::BmnTOF1ContFact*)p);
   }
   static void deleteArray_BmnTOF1ContFact(void *p) {
      delete [] ((::BmnTOF1ContFact*)p);
   }
   static void destruct_BmnTOF1ContFact(void *p) {
      typedef ::BmnTOF1ContFact current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTOF1ContFact

//______________________________________________________________________________
void BmnTOF1Geo::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTOF1Geo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTOF1Geo::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTOF1Geo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTOF1Geo(void *p) {
      return  p ? new(p) ::BmnTOF1Geo : new ::BmnTOF1Geo;
   }
   static void *newArray_BmnTOF1Geo(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTOF1Geo[nElements] : new ::BmnTOF1Geo[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTOF1Geo(void *p) {
      delete ((::BmnTOF1Geo*)p);
   }
   static void deleteArray_BmnTOF1Geo(void *p) {
      delete [] ((::BmnTOF1Geo*)p);
   }
   static void destruct_BmnTOF1Geo(void *p) {
      typedef ::BmnTOF1Geo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTOF1Geo

//______________________________________________________________________________
void BmnTof1HitProducerIdeal::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTof1HitProducerIdeal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTof1HitProducerIdeal::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTof1HitProducerIdeal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTof1HitProducerIdeal(void *p) {
      return  p ? new(p) ::BmnTof1HitProducerIdeal : new ::BmnTof1HitProducerIdeal;
   }
   static void *newArray_BmnTof1HitProducerIdeal(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTof1HitProducerIdeal[nElements] : new ::BmnTof1HitProducerIdeal[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTof1HitProducerIdeal(void *p) {
      delete ((::BmnTof1HitProducerIdeal*)p);
   }
   static void deleteArray_BmnTof1HitProducerIdeal(void *p) {
      delete [] ((::BmnTof1HitProducerIdeal*)p);
   }
   static void destruct_BmnTof1HitProducerIdeal(void *p) {
      typedef ::BmnTof1HitProducerIdeal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTof1HitProducerIdeal

//______________________________________________________________________________
void BmnTOF1Conteiner::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTOF1Conteiner.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTOF1Conteiner(void *p) {
      return  p ? new(p) ::BmnTOF1Conteiner : new ::BmnTOF1Conteiner;
   }
   static void *newArray_BmnTOF1Conteiner(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTOF1Conteiner[nElements] : new ::BmnTOF1Conteiner[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTOF1Conteiner(void *p) {
      delete ((::BmnTOF1Conteiner*)p);
   }
   static void deleteArray_BmnTOF1Conteiner(void *p) {
      delete [] ((::BmnTOF1Conteiner*)p);
   }
   static void destruct_BmnTOF1Conteiner(void *p) {
      typedef ::BmnTOF1Conteiner current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_BmnTOF1Conteiner(TBuffer &buf, void *obj) {
      ((::BmnTOF1Conteiner*)obj)->::BmnTOF1Conteiner::Streamer(buf);
   }
} // end of namespace ROOT for class ::BmnTOF1Conteiner

//______________________________________________________________________________
void BmnTOF1Detector::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTOF1Detector.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b >> fStripLength;
      R__b >> fSignalVelosity;
      fName.Streamer(R__b);
      R__b >> fNPlane;
      R__b >> fMaxL;
      R__b >> fMaxR;
      R__b >> fMax;
      R__b >> fFillHist;
      R__b.ReadStaticArray((double*)fTimeL);
      R__b.ReadStaticArray((double*)fTimeR);
      R__b.ReadStaticArray((double*)fTimeLtemp);
      R__b.ReadStaticArray((double*)fTimeRtemp);
      R__b.ReadStaticArray((double*)fTime);
      R__b.ReadStaticArray((double*)fWidthL);
      R__b.ReadStaticArray((double*)fWidthR);
      R__b.ReadStaticArray((double*)fWidthLtemp);
      R__b.ReadStaticArray((double*)fWidthRtemp);
      R__b.ReadStaticArray((double*)fWidth);
      R__b.ReadStaticArray((double*)fTof);
      R__b >> fDoubleTemp;
      R__b >> fMaxDelta;
      R__b >> fHit_Per_Ev;
      R__b >> fNEvents;
      R__b >> fStrip;
      R__b.ReadStaticArray((bool*)fFlagHit);
      R__b.ReadStaticArray((bool*)fKilled);
      R__b.ReadStaticArray((double*)fCorrLR);
      R__b.ReadStaticArray((double*)fCorrTimeShift);
      R__b.ReadStaticArray((double*)fDigitL);
      R__b.ReadStaticArray((double*)fDigitR);
      R__b.ReadStaticArray((double*)fHit);
      int R__i;
      for (R__i = 0; R__i < 48; R__i++)
         fCentrStrip[R__i].Streamer(R__b);
      for (R__i = 0; R__i < 48; R__i++)
         fCrossPoint[R__i].Streamer(R__b);
      fVectorTemp.Streamer(R__b);
      R__b >> fT0;
      R__b >> fHistListStat;
      R__b >> hHitByCh;
      R__b >> hHitPerEv;
      R__b >> hHitLR;
      R__b >> hXY;
      R__b >> hDy_near;
      R__b >> hDtime_near;
      R__b >> hDWidth_near;
      R__b >> hDy_acros;
      R__b >> hDtime_acros;
      R__b >> hDWidth_acros;
      R__b >> hTempDtimeDy_near;
      R__b >> hTempDtimeDy_acros;
      for (R__i = 0; R__i < 48; R__i++)
         R__b >> gSlew[R__i];
      R__b >> fTree4Save;
      fArrayConteiner->Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, BmnTOF1Detector::IsA());
   } else {
      R__c = R__b.WriteVersion(BmnTOF1Detector::IsA(), kTRUE);
      R__b << fStripLength;
      R__b << fSignalVelosity;
      fName.Streamer(R__b);
      R__b << fNPlane;
      R__b << fMaxL;
      R__b << fMaxR;
      R__b << fMax;
      R__b << fFillHist;
      R__b.WriteArray(fTimeL, 48);
      R__b.WriteArray(fTimeR, 48);
      R__b.WriteArray(fTimeLtemp, 48);
      R__b.WriteArray(fTimeRtemp, 48);
      R__b.WriteArray(fTime, 48);
      R__b.WriteArray(fWidthL, 48);
      R__b.WriteArray(fWidthR, 48);
      R__b.WriteArray(fWidthLtemp, 48);
      R__b.WriteArray(fWidthRtemp, 48);
      R__b.WriteArray(fWidth, 48);
      R__b.WriteArray(fTof, 48);
      R__b << fDoubleTemp;
      R__b << fMaxDelta;
      R__b << fHit_Per_Ev;
      R__b << fNEvents;
      R__b << fStrip;
      R__b.WriteArray(fFlagHit, 48);
      R__b.WriteArray(fKilled, 48);
      R__b.WriteArray(fCorrLR, 48);
      R__b.WriteArray(fCorrTimeShift, 48);
      R__b.WriteArray(fDigitL, 48);
      R__b.WriteArray(fDigitR, 48);
      R__b.WriteArray(fHit, 48);
      int R__i;
      for (R__i = 0; R__i < 48; R__i++)
         fCentrStrip[R__i].Streamer(R__b);
      for (R__i = 0; R__i < 48; R__i++)
         fCrossPoint[R__i].Streamer(R__b);
      fVectorTemp.Streamer(R__b);
      R__b << fT0;
      R__b << fHistListStat;
      R__b << (TObject*)hHitByCh;
      R__b << (TObject*)hHitPerEv;
      R__b << (TObject*)hHitLR;
      R__b << (TObject*)hXY;
      R__b << (TObject*)hDy_near;
      R__b << (TObject*)hDtime_near;
      R__b << (TObject*)hDWidth_near;
      R__b << (TObject*)hDy_acros;
      R__b << (TObject*)hDtime_acros;
      R__b << (TObject*)hDWidth_acros;
      R__b << (TObject*)hTempDtimeDy_near;
      R__b << (TObject*)hTempDtimeDy_acros;
      for (R__i = 0; R__i < 48; R__i++)
         R__b << gSlew[R__i];
      R__b << fTree4Save;
      fArrayConteiner->Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTOF1Detector(void *p) {
      return  p ? new(p) ::BmnTOF1Detector : new ::BmnTOF1Detector;
   }
   static void *newArray_BmnTOF1Detector(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTOF1Detector[nElements] : new ::BmnTOF1Detector[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTOF1Detector(void *p) {
      delete ((::BmnTOF1Detector*)p);
   }
   static void deleteArray_BmnTOF1Detector(void *p) {
      delete [] ((::BmnTOF1Detector*)p);
   }
   static void destruct_BmnTOF1Detector(void *p) {
      typedef ::BmnTOF1Detector current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_BmnTOF1Detector(TBuffer &buf, void *obj) {
      ((::BmnTOF1Detector*)obj)->::BmnTOF1Detector::Streamer(buf);
   }
} // end of namespace ROOT for class ::BmnTOF1Detector

//______________________________________________________________________________
void BmnTof1HitProducer::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTof1HitProducer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTof1HitProducer::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTof1HitProducer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTof1HitProducer(void *p) {
      return  p ? new(p) ::BmnTof1HitProducer : new ::BmnTof1HitProducer;
   }
   static void *newArray_BmnTof1HitProducer(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTof1HitProducer[nElements] : new ::BmnTof1HitProducer[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTof1HitProducer(void *p) {
      delete ((::BmnTof1HitProducer*)p);
   }
   static void deleteArray_BmnTof1HitProducer(void *p) {
      delete [] ((::BmnTof1HitProducer*)p);
   }
   static void destruct_BmnTof1HitProducer(void *p) {
      typedef ::BmnTof1HitProducer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTof1HitProducer

//______________________________________________________________________________
void BmnTof1TDC::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTof1TDC.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TNamed::Streamer(R__b);
      R__b >> const_cast< size_t &>( fTDCSerial );
      R__b >> const_cast< size_t &>( fTDCtype );
      R__b >> fUseINL;
      R__b >> const_cast< double &>( fINLWidth );
      R__b >> const_cast< size_t &>( fINLBins );
      R__b.CheckByteCount(R__s, R__c, BmnTof1TDC::IsA());
   } else {
      R__c = R__b.WriteVersion(BmnTof1TDC::IsA(), kTRUE);
      TNamed::Streamer(R__b);
      R__b << const_cast< size_t &>( fTDCSerial );
      R__b << const_cast< size_t &>( fTDCtype );
      R__b << fUseINL;
      R__b << const_cast< double &>( fINLWidth );
      R__b << const_cast< size_t &>( fINLBins );
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnTof1TDC(void *p) {
      delete ((::BmnTof1TDC*)p);
   }
   static void deleteArray_BmnTof1TDC(void *p) {
      delete [] ((::BmnTof1TDC*)p);
   }
   static void destruct_BmnTof1TDC(void *p) {
      typedef ::BmnTof1TDC current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_BmnTof1TDC(TBuffer &buf, void *obj) {
      ((::BmnTof1TDC*)obj)->::BmnTof1TDC::Streamer(buf);
   }
} // end of namespace ROOT for class ::BmnTof1TDC

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnTof1Configure(void *p) {
      delete ((::BmnTof1Configure*)p);
   }
   static void deleteArray_BmnTof1Configure(void *p) {
      delete [] ((::BmnTof1Configure*)p);
   }
   static void destruct_BmnTof1Configure(void *p) {
      typedef ::BmnTof1Configure current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTof1Configure

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnTof1TDCMapping(void *p) {
      delete ((::BmnTof1TDCMapping*)p);
   }
   static void deleteArray_BmnTof1TDCMapping(void *p) {
      delete [] ((::BmnTof1TDCMapping*)p);
   }
   static void destruct_BmnTof1TDCMapping(void *p) {
      typedef ::BmnTof1TDCMapping current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTof1TDCMapping

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTof1DigitConvertor(void *p) {
      return  p ? new(p) ::BmnTof1DigitConvertor : new ::BmnTof1DigitConvertor;
   }
   static void *newArray_BmnTof1DigitConvertor(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTof1DigitConvertor[nElements] : new ::BmnTof1DigitConvertor[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTof1DigitConvertor(void *p) {
      delete ((::BmnTof1DigitConvertor*)p);
   }
   static void deleteArray_BmnTof1DigitConvertor(void *p) {
      delete [] ((::BmnTof1DigitConvertor*)p);
   }
   static void destruct_BmnTof1DigitConvertor(void *p) {
      typedef ::BmnTof1DigitConvertor current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTof1DigitConvertor

namespace {
  void TriggerDictionaryInitialization_G__TOF1Dict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/opt/fairroot/install/include",
"/home/alex/bmnroot_dev/bmnroot/mcstack",
"/home/alex/bmnroot_dev/bmnroot/bmndata",
"/home/alex/bmnroot_dev/bmnroot/tof1",
"/opt/fairsoft/install/include",
"/opt/fairsoft/install/include/root",
"/opt/fairsoft/install/include/root",
"/home/alex/bmnroot_dev/bmnroot/build/tof1/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__TOF1Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$BmnTOF1GeoPar.h")))  BmnTOF1GeoPar;
class BmnTOF1;
class BmnTOF1Point;
class BmnTOF1ContFact;
class __attribute__((annotate(R"ATTRDUMP(Class for Hyp)ATTRDUMP"))) BmnTOF1Geo;
class __attribute__((annotate("$clingAutoload$BmnTof1HitProducerIdeal.h")))  BmnTof1HitProducerIdeal;
class __attribute__((annotate("$clingAutoload$BmnTOF1Conteiner.h")))  __attribute__((annotate("$clingAutoload$BmnTOF1Detector.h")))  BmnTOF1Conteiner;
class __attribute__((annotate("$clingAutoload$BmnTOF1Detector.h")))  BmnTOF1Detector;
class BmnTof1HitProducer;
class BmnTof1TDC;
class BmnTof1Configure;
class BmnTof1TDCMapping;
class BmnTof1DigitConvertor;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__TOF1Dict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
//--------------------------------------------------------------------------------------------------------------------------------------
#ifndef __BMNTOF1_H
#define __BMNTOF1_H 1


#include "TClonesArray.h"
#include "TVector3.h"
#include "TLorentzVector.h"
#include "FairDetector.h"
#include "BmnTOF1GeoPar.h"

using namespace std;


class TClonesArray;
class BmnTOF1Point;
class FairVolume;

//--------------------------------------------------------------------------------------------------------------------------------------
class BmnTOF1 : public FairDetector
{
public:
	BmnTOF1();
	BmnTOF1(const char* name, Bool_t active);
	virtual ~BmnTOF1();

	virtual void Initialize();
	virtual Bool_t ProcessHits(FairVolume* vol = nullptr);
	virtual void EndOfEvent();
	virtual void BeginEvent();
	virtual void Register();
	virtual TClonesArray* GetCollection(Int_t iColl) const;
	virtual void Print() const;    
	virtual void Reset();
	virtual void CopyClones(TClonesArray* cl1, TClonesArray* cl2, Int_t offset);
	virtual void ConstructGeometry();
	virtual void ConstructAsciiGeometry();
 	virtual Bool_t CheckIfSensitive(std::string name);

	BmnTOF1Point* AddPoint(Int_t trackID, Int_t detID, TVector3 pos, TVector3 mom, Double_t tof, Double_t length, Double_t eLoss);

private:
	TLorentzVector 	fPos;               //!  position
	TLorentzVector 	fMom;               //!  momentum
	Double32_t     	fTime;              //!  time
	Double32_t     	fLength;            //!  length
	Double32_t     	fELoss;             //!  energy loss
	Int_t 		fPosIndex;		//! 
  	const double	nan;			//!
  	
  	TClonesArray	*fTofCollection;	//! Hit collection
  
	// reset all parameters   
	void ResetParameters();

ClassDef(BmnTOF1, 3)
}; 
//--------------------------------------------------------------------------------------------------------------------------------------
inline void BmnTOF1::ResetParameters() 
{
	fPos.SetXYZM(nan, nan, nan, nan);
	fMom.SetXYZM(nan, nan, nan, nan);
	fTime = fLength = fELoss = nan;
	fPosIndex = 0;
};


#endif
//--------------------------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------------------------------
#ifndef __BMNTOF1POINT_H
#define __BMNTOF1POINT_H 1

#include<TVector3.h>

#include "FairMCPoint.h"

//--------------------------------------------------------------------------------------------------------------------------------------
class BmnTOF1Point : public FairMCPoint
{
public:
	BmnTOF1Point();
	virtual ~BmnTOF1Point();

  /** Constructor with arguments
   *@param trackID  Index of MCTrack
   *@param detID    Detector ID
   *@param pos      Ccoordinates at entrance to active volume [cm]
   *@param mom      Momentum of track at entrance [GeV]
   *@param tof      Time since event start [ns]
   *@param length   Track length since creation [cm]
   *@param eLoss    Energy deposit [GeV]
   **/ 
  	BmnTOF1Point(Int_t trackID, Int_t detID, TVector3 pos, TVector3 mom, Double_t tof, Double_t length, Double_t eLoss);
  
	virtual void 	Print(const Option_t* opt) const;

	// CATION: stripID MAX_VALUE = 255, moduleID MAX_VALUE = 255, regionID MAX_VALUE = 255 
  	Int_t 		GetStrip() const  {return (fDetectorID & 0x000000FF);};
  	Int_t 		GetModule() const {return (fDetectorID & 0x0000FF00) >> 8; };
   	Int_t 		GetRegion() const {return (fDetectorID & 0x00FF0000) >> 16;}; 	
   	Int_t 		GetVolumeUID() const {return fDetectorID;};

	static Int_t 	GetStrip(Int_t uid){  return (uid & 0x000000FF); };
   	static Int_t 	GetModule(Int_t uid){ return (uid & 0x0000FF00) >> 8; };
   	static Int_t 	GetRegion(Int_t uid){ return (uid & 0x00FF0000) >> 16; };  	
  	static Int_t 	GetVolumeUID(Int_t regID, Int_t modID, Int_t stripID) 
  	{ 
#ifdef DEBUG
 	Int_t uid = (regID << 16) | (modID << 8) | stripID; 
 	Int_t region =	GetRegion(uid);
 	Int_t module =	GetModule(uid);
  	Int_t strip =	GetStrip(uid);	
assert(region == regID);  
assert(module == modID); 
assert(strip == stripID); 	
	return uid;
#else  	
  	return (regID << 16) | (modID << 8) | stripID; 
#endif  	
  	};
 
ClassDef(BmnTOF1Point, 1)
};

#endif
//--------------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------------
#ifndef __BMNTOF1CONTFACT_H
#define __BMNTOF1CONTFACT_H 1

#include "FairContFact.h"

class FairContainer;

//--------------------------------------------------------------------------------------------------------------------------------------
class BmnTOF1ContFact : public FairContFact 
{
private:
	void setAllContainers();

public:
	BmnTOF1ContFact();
	~BmnTOF1ContFact() {}

	FairParSet* 	createContainer(FairContainer*);

ClassDef(BmnTOF1ContFact, 0) 
};

#endif  
//--------------------------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------------------------------
#ifndef __BMNGEOTOF1_H
#define __BMNGEOTOF1_H 1

#include "FairGeoSet.h"

//--------------------------------------------------------------------------------------------------------------------------------------
class  BmnTOF1Geo : public FairGeoSet 
{
protected:
	char modName[20];  // name of module
	char eleName[20];  // substring for elements in module
  
public:
	BmnTOF1Geo();
	~BmnTOF1Geo() {}

	const char* getModuleName(Int_t);
	const char* getEleName(Int_t);
  
ClassDef(BmnTOF1Geo, 0) // Class for Hyp
};

#endif
//--------------------------------------------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------------------------------------------
#ifndef __BMNGEOTOF1PAR_H
#define __BMNGEOTOF1PAR_H 1

#include<TObjArray.h>

#include "FairParGenericSet.h"

//--------------------------------------------------------------------------------------------------------------------------------------
class BmnTOF1GeoPar : public FairParGenericSet 
{
public:
	TObjArray      *fGeoSensNodes; /** List of FairGeoNodes for sensitive  volumes */
	TObjArray      *fGeoPassNodes; /** List of FairGeoNodes for passive  volumes */
  
	BmnTOF1GeoPar(const char* name="BmnTOF1GeoPar", const char* title="TOF1 Geometry Parameters", const char* context="TOF1DefaultContext");
	~BmnTOF1GeoPar(void);

	void 		clear(void);
	void 		putParams(FairParamList*);
	Bool_t 		getParams(FairParamList*);

	TObjArray*	GetGeoSensitiveNodes(){ return fGeoSensNodes; }
	TObjArray*	GetGeoPassiveNodes(){ return fGeoPassNodes; } 
  
 ClassDef(BmnTOF1GeoPar,1)
};

#endif 
//--------------------------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------------------------------
#ifndef __BmnTof1HitProducer_H
#define __BmnTof1HitProducer_H 1

#include <TClonesArray.h>
#include <FairTask.h>

#include <map>
#include <math.h>

#include "BmnTof1HitProducerIdeal.h"
#include "BmnTof1GeoUtils.h"
#include "BmnTof1Digit.h"
#include "BmnTrigDigit.h"
#include "BmnTOF1Detector.h"

class TRandom2;
class TEfficiency;
class TH1D;
class TH2D;
class BmnTof1GeoUtils;
//--------------------------------------------------------------------------------------------------------------------------------------
class BmnTof1HitProducer : public BmnTof1HitProducerIdeal 
{
        Double_t 		fTimeSigma;     // Uncertainties of time, gaus sigma [ns],  default: 100 ps
   	Double_t		fErrX, fErrY; 	// Uncertainties of coordinates, gaus sigma [cm], dX= 10./sqrt(12.) mm, default: dY= 5 mm.
        TRandom2 		*pRandom;    
   
   	Bool_t			fDoINL;
   	Bool_t			fDoSlewing;   	
        
        Int_t                   NPeriod;
   
	// QA test histos
	TEfficiency			*effTestEfficiencySingleHit, *effTestEfficiencyDoubleHit; //!		
        TH1D                		*htR, *h1TestDistance;
        TH2D   				*h2TestNeighborPair, *h2TestXYSmeared, *h2TestXYSmeared2,*h2TestXYSmearedDouble, *h2TestXYSmearedDouble2, *h2TestEtaPhi, *h2TestStrips, *h2TestRZ, *h2TdetIdStripId;
						
	Bool_t 				HitExist(Double_t val); 
	Bool_t 				DoubleHitExist(Double_t val);

	BmnTof1GeoUtils			*pGeoUtils;
        
        BmnTOF1Detector                 **pDetector;
        Int_t                           fNDetectors;
	
	const 	double		fSignalVelosity; // [ns/cm]

	// input- strip edge position & signal times; output- strip crosspoint; return false, if crosspoint outside strip 
	bool			GetCrossPoint(const TVector3& p1, double time1, const TVector3& p2, double time2, TVector3& crossPoint);
	bool                    GetCrossPoint(const LStrip1 *pStrip, double time1, double time2, TVector3& crossPoint);
        Double_t                CalculateToF (BmnTof1Digit *d1, BmnTof1Digit *d2, BmnTrigDigit *t0);
public:
	BmnTof1HitProducer(const char *name = "TOF1 HitProducer", Bool_t useMCdata = true, Int_t verbose = 1, Bool_t DoTest = false);
	virtual ~BmnTof1HitProducer();

	virtual InitStatus 	Init();
	virtual void 		Exec(Option_t* opt);
	virtual void 		Finish();

	void			SetTimeResolution(Double_t sigma){ fTimeSigma = sigma; };
	void			SetAlongStripResolution(Double_t Xerr){ fErrX = Xerr;};	
	void 			SetSeed(UInt_t seed = 0);	
	
	void 			SetDoINL(bool val){ fDoINL = val;}
	void 			SetDoSlewing(bool val){ fDoSlewing = val;}		
	
	TString			GetParameters()
	{ 
		char s[32];
		TString buf = "\n Run parameters: fTimeSigma="; sprintf(s, "%.5g", fTimeSigma); buf+=(s);  
		buf+=" ns, fErrX="; sprintf(s, "%.4g", fErrX); buf+=(s); 
		buf+=" cm, fErrY="; sprintf(s, "%.4g", fErrY); buf+=(s); 
		buf+=" cm, fDoTest="; buf+=fDoTest; buf+=", fDoMergeHits="; buf+=fDoMergeHits;
		buf+=", fDoINL="; buf+=fDoINL; buf+=", fDoSlewing="; buf+=fDoSlewing;		
		return buf;
	}
        
        void                    SetPeriod (Int_t p)
        {
                NPeriod = p;
        }
	
ClassDef(BmnTof1HitProducer, 2);
};

#endif
//--------------------------------------------------------------------------------------------------------------------------------------

//------------------------------------------------------------------------------------------------------------------------
#ifndef __BMN_TOF1_HIT_PRODUCER_IDEAL_H
#define __BMN_TOF1_HIT_PRODUCER_IDEAL_H 1

#include <TVector3.h>
#include <TList.h>

#include "FairTask.h"
//------------------------------------------------------------------------------------------------------------------------
class TH1D;
class TH2D;
class TClonesArray;
//------------------------------------------------------------------------------------------------------------------------
class BmnTof1HitProducerIdeal : public FairTask
{
protected:

        TClonesArray 			*aMcPoints;	//! <--- MC input
        TClonesArray 			*aMcTracks;	//! <--- MC input
        TClonesArray 			*aExpDigits;	//! <--- Exp input
        TClonesArray 			*aExpDigitsT0;	//! <--- Exp input
        TClonesArray 			*aTofHits;	//! ---> output

	Bool_t				fDoTest;
	Bool_t				fDoMergeHits;
	Bool_t				fUseMCData;	
	Bool_t				fOnlyPrimary;	  
	TString				fTestFlnm;

	// QA test histos
        TList				fList;			//!
	TH1D   				*h1TestOccup;		//!
	TH2D 				*h2TestMergedTimes;	//!
  
  	void 				AddHit(Int_t detUID, const TVector3& posHit, const TVector3& posHitErr, Int_t pointIndex, Int_t trackIndex, Double_t time);	
 	Int_t 				CompressHits();
	Int_t 				MergeHitsOnStrip(); // save only the fastest hit in the strip 
	       
public:
	BmnTof1HitProducerIdeal(const char *name = "TOF1 Ideal HitProducer", Bool_t useMCdata = true, Int_t verbose = 1, Bool_t DoTest = false, Bool_t DoMergeHits = false);
	virtual ~BmnTof1HitProducerIdeal();

	virtual InitStatus	Init();
	virtual void		Exec(Option_t * option);
	virtual void		Finish();	
	
	void 			SetOnlyPrimary(Bool_t opt) { fOnlyPrimary = opt; }
	void			Dump(const char* comment = nullptr, ostream& out = std::cout) const;
	void 			SetTestFlnm(const char* flnm){ fTestFlnm = flnm; };

ClassDef(BmnTof1HitProducerIdeal, 1);
};
//------------------------------------------------------------------------------------------------------------------------
#endif
//------------------------------------------------------------------------------------------------------------------------
#ifndef __BMN_TOF1_HIT_GEOUTILS_H
#define __BMN_TOF1_HIT_GEOUTILS_H 1

#include <TVector3.h>
#include <TList.h>


//------------------------------------------------------------------------------------------------------------------------
class TH1D;
class TH2D;
class TClonesArray;

//------------------------------------------------------------------------------------------------------------------------
class LRectangle1	// convex quadrangle
{ 
	bool		IsInvalid;
public:
	enum Side_t { kRight=0,  kLeft=1, kInvalid= -1 }; 
	
	Int_t 		volumeUID;
	TVector3 	A, B, C, D, center, perp;  // [cm] 
	
	LRectangle1() : IsInvalid(true), volumeUID(kInvalid){};
	LRectangle1(Int_t uid, const TVector3& a, const TVector3& b, const TVector3& c, const TVector3& d, bool check = false);
	
    void	 	GetInteriorAngle(int vertexIndex) const {;} // FIXME
	TVector3	GetCenter() const{ return (A+B+C+D) * 0.25;}
	bool		isInvalid() const{ return IsInvalid;}

	Double_t 	DistanceFromPointToLineSegment(const TVector3* pos, const TVector3& P1,const TVector3& P2)const;
	Double_t 	DistanceFromPointToLine(const TVector3* pos, const TVector3& P1,const TVector3& P2)const;	
	Double_t	MinDistanceToEdge(const TVector3* pos, Side_t& side) const;
		
	void 		Print(ostream &out, const TVector3 &point, const char* comment = nullptr)const;	
	void 		Dump(const char* comment, ostream& out = std::cout) const;

	void		Shift(const TVector3& shift){ A +=shift; B +=shift; C +=shift; D +=shift; }; 

	inline void 	InitCenterPerp()
	{	
		center = (A+B+C+D) * 0.25;
		perp = (B-A).Cross(D-A).Unit();
	}
	
	inline void 	CheckInValid()
	{
		IsInvalid = false;

		// Convex Polygon Definition: A polygon that has all interior angles less than 180°
		;
		// Sum of Interior Angles, sum = 180*(n-2) degree, where n is the number of sides 
		// A square has 4 sides, 	so interior angles sum = 360°
		;
		// Rectangle check - all angles == 90 degree	
		TVector3 ab = A-B, bc = B-C, cd = C-D, da = D-A;
		if( ab.Dot(bc) != 0. || bc.Dot(cd) != 0. || cd.Dot(da) != 0. || da.Dot(ab) != 0.) 
		{
			std::cerr<<"\n ---> ERROR: invalid Rectangle."; Dump("", std::cerr);
			IsInvalid = true;
		}	
	}
};
//------------------------------------------------------------------------------------------------------------------------
class LStrip1 : public LRectangle1
{
public:
 	Int_t 		sectorID, boxID, detectorID, stripID; 
 	Int_t 		neighboring[2]; // dim same as  Side_t enum
 	
 	LStrip1();
  	LStrip1(Int_t uid, Int_t sector, Int_t box, Int_t detector, Int_t strip);
 	
	void 		SetIDs(Int_t uid, Int_t sector, Int_t box, Int_t  detector, Int_t  strip){ volumeUID = uid; sectorID = sector; boxID = box; detectorID = detector; stripID = strip;}	
	
	inline bool	IsSameDetector(const LStrip1& strip)const{ return ( sectorID == strip.sectorID && boxID == strip.boxID && detectorID == strip.detectorID);}
	inline bool 	operator==(const LStrip1& rhs){ return ( sectorID == rhs.sectorID && boxID == rhs.boxID && detectorID == rhs.detectorID && stripID == rhs.stripID);}
	inline bool 	operator!=(const LStrip1& rhs){ return !((*this) == rhs);}
	

	void		Dump(const char* comment = nullptr, ostream& out = std::cout) const;
	Double_t 	Distance(Side_t side, const LStrip1& strip);
};
//------------------------------------------------------------------------------------------------------------------------
class BmnTof1GeoUtils 
{
typedef std::map<Int_t, LStrip1> 	MStripType; // pair<detectorUID, Strip parameters>
typedef MStripType::const_iterator	MStripCIT;
typedef MStripType::iterator		MStripIT;

	MStripType			mStrips; //!  indexing strips by detectorUID
public:
	BmnTof1GeoUtils();
	
	void			FindNeighborStrips(TH1D* h1 = nullptr, TH2D* h2 = nullptr, bool doTest = false);
	Int_t			ParseTGeoManager(bool useMCinput, TH2D* h1 = nullptr, bool forced = false);
	const LStrip1*		FindStrip(Int_t UID);


};
//------------------------------------------------------------------------------------------------------------------------
#endif
//------------------------------------------------------------------------------------------------------------------------
#ifndef __BMNTOF1TDC_H
#define	__BMNTOF1TDC_H 1

#include <assert.h>
#include <map>
#include <iostream>

#include "TROOT.h"
#include "TString.h"
#include "TVector3.h"
#include "TList.h"

#include "BmnTDCDigit.h"
#include "BmnTof1Digit.h"
class BmnTof1TDC;
class TH2D;
//------------------------------------------------------------------------------------------------------------------------
class TDCChannel
{
	std::vector<double> 	inlData;
	bool			inlReady;
	const BmnTof1TDC*	fTDC;

public:
	TDCChannel(BmnTof1TDC*);

	void LoadInl(double* array, size_t size);	
	bool IsInlReady() const { return inlReady; }	
	
	double Convert(int iTime) const; // return [ns]
};
//------------------------------------------------------------------------------------------------------------------------
class BmnTof1TDC : public TNamed
{
typedef std::vector<TDCChannel>		TChannal;
	TChannal 		*fChannels; //!
	const size_t		fTDCSerial, fTDCtype;
	
	static size_t		fVerbose;

	bool			fUseINL;
	const double		fINLWidth;
	const size_t		fINLBins;
			
public:
typedef std::map<int, BmnTof1TDC*> 	TmTdcList;

	friend class TDCChannel;

private:
static 	TmTdcList			gTDC;	

public:

	BmnTof1TDC( size_t serial, size_t tdcType, size_t nChannels, double inlWidth, size_t inlBins);
	~BmnTof1TDC();

	size_t			GetSerial()const { return fTDCSerial;}
	void			LoadChannelInl(int channel, double* arrayD, size_t size);
	void 			Status(ostream& out) const;	
	void 			SetUseINL(bool val) { fUseINL = val; }
	const 	TDCChannel*	GetTDCChannel(size_t tdcChannel)const;	
	
	static	bool			CheckTdcType(int tdcSerial, size_t tdcType);
	static	BmnTof1TDC* 		find(int serial);
	static	BmnTof1TDC* 		find(const char* tdcName);
		
	static 	bool 			LoadInl(int* tdcSerial, int* tdcChannel, double* arrayD, size_t size);
	static	const TDCChannel*	GetTDCChannel(int tdcSerial, size_t tdcChannel);
	
	static 	void			dump(const char* comment = nullptr, ostream& out = std::cout);
	static	void			setNameTitle(int serial, const char* name, const char* title = nullptr); 
	static	void			SetVerboselevel(size_t level){	fVerbose = level;}
	
	static size_t			GetChannel(UChar_t iChannel, UChar_t iHptdcId); // return  tdc channel [0,71]
	
ClassDef(BmnTof1TDC, 2);
};
//------------------------------------------------------------------------------------------------------------------------
class BmnTof1Configure
{

public:
	enum  kDetSlote { kDetSlote_1 = 0, kDetSlote_2, kDetSlote_3, kDetSlote_4 };
	enum  kTdcSlote { kTdcSlote_1 = 0, kTdcSlote_2, kTdcSlote_3};
private:

	const size_t fNDets, fNdetSlots;

typedef std::map<long, size_t> 	Tlink;			// pairs<Hash(CRATEserial, CRATEslote), TDCserial>
Tlink					mTDC;

typedef std::pair<size_t, size_t> 	Tpair;		// pairs<TDCserial, TDCslote>
Tpair**					fDetOutputs;	// fDetOutputs[fNDets][fNdetSlots]

	int 				isReady; // -1 == unknown state, 0 == Not Ready, 1 == Ready

	inline const Tpair* GetOutput(size_t detId, size_t detSlote) const // getter
	{
	assert(detId < fNDets);
	assert(detSlote < fNdetSlots);
	
	return *(fDetOutputs + detId * fNdetSlots + detSlote);
	}

	inline void SetOutput(size_t detId, size_t detSlote, Tpair* pair)  // setter
	{
	assert(detId < fNDets);
	assert(detSlote < fNdetSlots);
	
	 *(fDetOutputs + detId * fNdetSlots + detSlote) = pair;
	}

	inline void ResetOutput(size_t detId, size_t detSlote)  // resetter
	{
	assert(detId < fNDets);
	assert(detSlote < fNdetSlots);
	
	delete (*(fDetOutputs + detId * fNDets + detSlote));
	*(fDetOutputs + detId * fNdetSlots + detSlote) = nullptr;
	}

	inline kTdcSlote GetTDCSlote(size_t tdcChannel, size_t& tslotChannel) const    // tdcChannel [0,71] - tcd channel,  tslotChannel [0, 23] - tdc slote channel
	{ 
		if(tdcChannel < 24){ 	tslotChannel = tdcChannel; 	return kTdcSlote_1;} 
		if(tdcChannel < 48){ 	tslotChannel = tdcChannel - 24; return kTdcSlote_2;} 
					tslotChannel = tdcChannel - 48; return kTdcSlote_3;
	}
		
	inline long Hash(long crateSerial, long crateSlote) // MUSTBE: crateSerial < 0xFFFFFFFF (32 bits)
	{
		return (crateSlote << 32) | crateSerial; 
	}
	
	void CheckReady();

	bool 	_addConnection(size_t detectorID, kDetSlote dSlote, size_t TDCserial, kTdcSlote tSlote);

public:
	BmnTof1Configure(size_t detNmb);
	
	void 	Reset();
	bool 	IsReady(){ CheckReady(); return (isReady == 1);}
	bool 	InstallTDC(size_t tdcSerial, int crateSerial, int crateSlote); // return true, if new unique TDC position inserted
	bool 	GetTDCserial(int crateSerial, int crateSlote, size_t& tdcSerial);
	bool 	Find(size_t tdcSerial, size_t tdcChannel, int& detID, kDetSlote& dSlote, size_t& normChannel);
	bool 	LoadFromDB();
	bool 	CheckIntegrity();
	void 	Status(bool doPrint = true);
	
	
	bool 	AddConnection(size_t detID, kDetSlote dSlote, size_t TDCserial, kTdcSlote tSlote);
	bool 	AddConnection(size_t detectorID, kDetSlote dSlote, const char* tdcName, kTdcSlote tSlote);	
	bool 	RemoveConnection(size_t detID, kDetSlote detSlote);
	bool 	RemoveConnection(size_t tdcSerial, kTdcSlote tdcSlote);	
};

#define slote_D1 BmnTof1Configure::kDetSlote_1
#define slote_D2 BmnTof1Configure::kDetSlote_2
#define slote_D3 BmnTof1Configure::kDetSlote_3
#define slote_D4 BmnTof1Configure::kDetSlote_4

#define slote_T1 BmnTof1Configure::kTdcSlote_1
#define slote_T2 BmnTof1Configure::kTdcSlote_2
#define slote_T3 BmnTof1Configure::kTdcSlote_3
//------------------------------------------------------------------------------------------------------------------------
class BmnTof1TDCMapping
{
	BmnTof1Configure* 	fConfig;
	size_t			fVerbose;
	
// LEFT			RIGHT 
// UP
//	kDetSlote_1	kDetSlote_2
//    	-----------------
//	|		|
//	|		|
//	-----------------
//	kDetSlote_3	kDetSlote_4 
// DOWN

typedef	std::map<long, BmnTof1Digit> 	TmMapping;
	TmMapping			fMapping;

public:
	BmnTof1TDCMapping(BmnTof1Configure* config, size_t verbose = 1);
	bool Convert(UInt_t TDCserial, size_t tdcChannel, const BmnTof1Digit**);  // dUpDown:  <0, Up> <1, Down>

};
//------------------------------------------------------------------------------------------------------------------------
class  BmnTof1DigitConvertor // looking for pair leading-trailing TDC digit and convert to Tof digit 
{

struct digitData
{
	const BmnTDCDigit	*pTdcDigit;
	const TDCChannel	*pTdcChannel;
	const BmnTof1Digit	*pTofDigit;	

	digitData(BmnTDCDigit* pTdc, const TDCChannel* pChan, const BmnTof1Digit* pTof)
	: pTdcDigit(pTdc), pTdcChannel(pChan), pTofDigit(pTof) {}
};

typedef std::multimap<Int_t, digitData> 	MMpairType; // pair< Hash(detID, stripID, stripSideID), digitData >
MMpairType					mmDigits; //!

	size_t				fVerbose;

typedef std::multimap<size_t, size_t> 	TmmCorr;	
	TmmCorr				mmCorrelations; //! pair<tdcSerial, tdcChannel>
typedef std::map<size_t, TH2D*>		mHistos;	
	mHistos				fHistos;
	
public:
 	BmnTof1DigitConvertor(size_t verbose = 1) : fVerbose(verbose){}

	void	Reset(){ mmDigits.clear(); }
	void	AddDigit(BmnTDCDigit *pTdcDigit, const TDCChannel*, const BmnTof1Digit*);
	size_t	Convert(TClonesArray *aTofDigits); 

	void	AddSample(size_t tdcSerial, size_t tdcChannel);
	void	CalcCorrelationMatrix();
	void	Write(const char* flnm);
};

//------------------------------------------------------------------------------------------------------------------------
#endif
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BmnTOF1Detector.h
 * Author: mikhail
 *
 * Created on March 13, 2017, 4:52 PM
 */

#ifndef BMNTOF1DETECTOR_H
#define BMNTOF1DETECTOR_H 1

#include "TString.h"
#include "TSystem.h"
#include "BmnEnums.h"
#include "BmnTof1Digit.h"
#include "BmnEventHeader.h"
#include "BmnTrigDigit.h"
#include "BmnRunHeader.h"
#include "BmnTOF1Point.h"
#include "BmnTof1GeoUtils.h"
#include "BmnTofHit.h"
#include "BmnTOF1Conteiner.h"
#include "TH1I.h"
#include "TH2I.h"
#include "TFile.h"
#include "TTree.h"
#include "TList.h"
#include "TClonesArray.h"
#include "TGraphErrors.h"
#include "TVector3.h"
#include "TDirectory.h"
#include <TGeoManager.h>
#include <TKey.h>
#include <iostream>
#include <vector>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <cstdio>
#include <list>
#include <map>
#include <deque>

using namespace std;

class BmnTOF1Detector {
private:

    static const Int_t fNStr = 48;
    Double_t fStripLength, fSignalVelosity;
    TString fName;
    Int_t fNPlane;
    Int_t fMaxL, fMaxR, fMax;
    Int_t fFillHist;
    Double_t fTimeL[fNStr], fTimeR[fNStr], fTimeLtemp[fNStr], fTimeRtemp[fNStr], fTime[fNStr];
    Double_t fWidthL[fNStr], fWidthR[fNStr], fWidthLtemp[fNStr], fWidthRtemp[fNStr], fWidth[fNStr];
    Double_t fTof[fNStr];
    Double_t fDoubleTemp, fMaxDelta;
    Int_t fHit_Per_Ev, fNEvents, fStrip;
    Bool_t fFlagHit[fNStr], fKilled[fNStr];
    Double_t fCorrLR[fNStr], fCorrTimeShift[fNStr];
    Double_t fDigitL[fNStr], fDigitR[fNStr], fHit[fNStr];
    TVector3 fCentrStrip[fNStr], fCrossPoint[fNStr], fVectorTemp;
    BmnTrigDigit *fT0;

    TList *fHistListStat;
    
    TH1I *hHitByCh, *hHitPerEv;
    TH2I *hHitLR, *hXY;
    TH1S *hDy_near, *hDtime_near, *hDWidth_near;
    TH1S *hDy_acros, *hDtime_acros, *hDWidth_acros;
    TH2S *hTempDtimeDy_near, *hTempDtimeDy_acros;

    TGraphErrors *gSlew[fNStr];
    
    TTree *fTree4Save;
    TClonesArray *fArrayConteiner;
            
    void FillHist();
    Double_t CalculateDt(Int_t Str);
    Bool_t GetCrossPoint(Int_t NStrip);
    void AddHit(Int_t Str, TClonesArray *TofHit);


public:
    BmnTOF1Detector();

    BmnTOF1Detector(Int_t NPlane, Int_t FillHistLevel, TTree *tree); // FillHistLevel=0-don"t fill, FillHistLevel=1-fill statistic, FillHistLevel>1-fill all

    virtual ~BmnTOF1Detector() {
    };

    void Clear();
    Bool_t SetDigit(BmnTof1Digit *TofDigit);
    void KillStrip(Int_t NumberOfStrip);
    Int_t FindHits(BmnTrigDigit *T0);
    Int_t FindHits(BmnTrigDigit *T0, TClonesArray *TofHit);
    TList* GetList(Int_t n);
    TString GetName();
    Bool_t SetCorrLR(Double_t *Mass);
    Bool_t SetCorrLR(TString NameFile);
    Bool_t SetCorrSlewing(TString NameFile);
    Bool_t SetCorrTimeShift (TString NameFile); //FIXME
    Bool_t SetGeoFile(TString NameFile);
    Bool_t SetGeo(BmnTof1GeoUtils *pGeoUtils);
    Bool_t GetXYZTime(Int_t Str, TVector3 *XYZ, Double_t *ToF);
    Double_t GetWidth(Int_t Str);
    Bool_t SaveHistToFile(TString NameFile);
    Bool_t SetTree (TTree *tree);
    Int_t GetFillHistLevel () {return fFillHist;};
    
    ClassDef(BmnTOF1Detector, 3);

};

#endif
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BmnTOF1Conteiner.h
 * Author: mikhailr
 *
 * Created on May 3, 2018, 3:46 PM
 */

#ifndef BMNTOF1CONTEINER_H
#define BMNTOF1CONTEINER_H 1

#include "TObject.h"
#include <iostream>
//------------------------------------------------------------------------------------------------------------------------
class BmnTOF1Conteiner : public TObject {
    
private: 

    Short_t fPlane;
    Short_t fStrip;
    Float_t fTimeL;
    Float_t fTimeR;
    Float_t fTime;
    Float_t fWidthL;
    Float_t fWidthR;
    Float_t fWidth;
    Float_t fX;
    Float_t fY;
    Float_t fZ;
    Float_t fTimeT0;
    Float_t fWidthT0;

public:
    BmnTOF1Conteiner();
    BmnTOF1Conteiner(Short_t plane, Short_t strip, Float_t timeL, Float_t timeR, Float_t time, Float_t widthL, Float_t widthR, Float_t width, Float_t x, Float_t y, Float_t z, Float_t timeT0, Float_t widthT0);
    virtual ~BmnTOF1Conteiner() {};

    Short_t GetStrip()      const { return fStrip; }
    Float_t GetTimeL()     const { return fTimeL; }
    Float_t GetTimeR()     const { return fTimeR; }
    Float_t GetTime()       const { return fTime; }
    Float_t GetWidthL()     const { return fWidthL; }
    Float_t GetWidthR()     const { return fWidthR; }
    Float_t GetWidth()      const { return fWidth; }
    Float_t GetX()       const { return fX; }
    Float_t GetY()       const { return fY; }
    Float_t GetZ()       const { return fZ; }
    Float_t GetTimeT0()       const { return fTimeT0; }
    Float_t GetWidthT0()     const { return fWidthT0; }
    
    void SetParameters(Short_t plane, Short_t strip, Float_t timeL, Float_t timeR, Float_t time, Float_t widthL, Float_t widthR, Float_t width, Float_t x, Float_t y, Float_t z, Float_t timeT0, Float_t widthT0);
    void SetStrip(Short_t v)      { fStrip = v; }
    void SetTimeL(Float_t v)      { fTimeL = v; }
    void SetTimeR(Float_t v)      { fTimeR = v; }
    void SetTime(Float_t v)       { fTime = v; }
    void SetWidthL(Float_t v)     { fWidthL = v; }
    void SetWidthR(Float_t v)     { fWidthR = v; }
    void SetWidth(Float_t v)      { fWidth = v; }
    void SetX(Float_t v)          { fX = v; }
    void SetY(Float_t v)          { fY = v; }
    void SetZ(Float_t v)          { fZ = v; }
    void SetTimeT0(Float_t v)     { fTimeT0 = v; }
    void SetWidthT0(Float_t v)    { fWidthT0 = v; }
    
    void Clear();

    void	print(std::ostream& os = std::cout, const char* comment = nullptr)const;

    ClassDef(BmnTOF1Conteiner, 0);
};


#endif /* BMNTOF1CONTEINER_H */


#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"BmnTOF1", payloadCode, "@",
"BmnTOF1ContFact", payloadCode, "@",
"BmnTOF1Conteiner", payloadCode, "@",
"BmnTOF1Detector", payloadCode, "@",
"BmnTOF1Geo", payloadCode, "@",
"BmnTOF1GeoPar", payloadCode, "@",
"BmnTOF1Point", payloadCode, "@",
"BmnTof1Configure", payloadCode, "@",
"BmnTof1DigitConvertor", payloadCode, "@",
"BmnTof1HitProducer", payloadCode, "@",
"BmnTof1HitProducerIdeal", payloadCode, "@",
"BmnTof1TDC", payloadCode, "@",
"BmnTof1TDCMapping", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__TOF1Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__TOF1Dict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__TOF1Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__TOF1Dict() {
  TriggerDictionaryInitialization_G__TOF1Dict_Impl();
}
