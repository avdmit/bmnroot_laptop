// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIalexdIbmnroot_devdIbmnrootdIbuilddIdchdIG__DchDict

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
#include "BmnDch.h"
#include "BmnDchPoint.h"
#include "BmnDchContFact.h"
#include "BmnDchGeo.h"
#include "BmnDchGeoPar.h"
#include "BmnDchHitProducer.h"
#include "BmnDchHitProducerTmp.h"
#include "BmnDchHitProducer_exp.h"
#include "DchTrackCand.h"
#include "DchTrackManager.h"
#include "ScalarD.h"
#include "ScalarI.h"
#include "ScalarUI.h"
#include "DchHitPlane.h"
#include "BmnDchTrackFinder.h"
#include "BmnDchTrack.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_BmnDch(void *p = 0);
   static void *newArray_BmnDch(Long_t size, void *p);
   static void delete_BmnDch(void *p);
   static void deleteArray_BmnDch(void *p);
   static void destruct_BmnDch(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnDch*)
   {
      ::BmnDch *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnDch >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnDch", ::BmnDch::Class_Version(), "", 36,
                  typeid(::BmnDch), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnDch::Dictionary, isa_proxy, 4,
                  sizeof(::BmnDch) );
      instance.SetNew(&new_BmnDch);
      instance.SetNewArray(&newArray_BmnDch);
      instance.SetDelete(&delete_BmnDch);
      instance.SetDeleteArray(&deleteArray_BmnDch);
      instance.SetDestructor(&destruct_BmnDch);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnDch*)
   {
      return GenerateInitInstanceLocal((::BmnDch*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnDch*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnDchPoint(void *p = 0);
   static void *newArray_BmnDchPoint(Long_t size, void *p);
   static void delete_BmnDchPoint(void *p);
   static void deleteArray_BmnDchPoint(void *p);
   static void destruct_BmnDchPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnDchPoint*)
   {
      ::BmnDchPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnDchPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnDchPoint", ::BmnDchPoint::Class_Version(), "", 170,
                  typeid(::BmnDchPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnDchPoint::Dictionary, isa_proxy, 4,
                  sizeof(::BmnDchPoint) );
      instance.SetNew(&new_BmnDchPoint);
      instance.SetNewArray(&newArray_BmnDchPoint);
      instance.SetDelete(&delete_BmnDchPoint);
      instance.SetDeleteArray(&deleteArray_BmnDchPoint);
      instance.SetDestructor(&destruct_BmnDchPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnDchPoint*)
   {
      return GenerateInitInstanceLocal((::BmnDchPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnDchPoint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnDchContFact(void *p = 0);
   static void *newArray_BmnDchContFact(Long_t size, void *p);
   static void delete_BmnDchContFact(void *p);
   static void deleteArray_BmnDchContFact(void *p);
   static void destruct_BmnDchContFact(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnDchContFact*)
   {
      ::BmnDchContFact *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnDchContFact >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnDchContFact", ::BmnDchContFact::Class_Version(), "", 230,
                  typeid(::BmnDchContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnDchContFact::Dictionary, isa_proxy, 4,
                  sizeof(::BmnDchContFact) );
      instance.SetNew(&new_BmnDchContFact);
      instance.SetNewArray(&newArray_BmnDchContFact);
      instance.SetDelete(&delete_BmnDchContFact);
      instance.SetDeleteArray(&deleteArray_BmnDchContFact);
      instance.SetDestructor(&destruct_BmnDchContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnDchContFact*)
   {
      return GenerateInitInstanceLocal((::BmnDchContFact*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnDchContFact*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnDchGeo(void *p = 0);
   static void *newArray_BmnDchGeo(Long_t size, void *p);
   static void delete_BmnDchGeo(void *p);
   static void deleteArray_BmnDchGeo(void *p);
   static void destruct_BmnDchGeo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnDchGeo*)
   {
      ::BmnDchGeo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnDchGeo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnDchGeo", ::BmnDchGeo::Class_Version(), "", 247,
                  typeid(::BmnDchGeo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnDchGeo::Dictionary, isa_proxy, 4,
                  sizeof(::BmnDchGeo) );
      instance.SetNew(&new_BmnDchGeo);
      instance.SetNewArray(&newArray_BmnDchGeo);
      instance.SetDelete(&delete_BmnDchGeo);
      instance.SetDeleteArray(&deleteArray_BmnDchGeo);
      instance.SetDestructor(&destruct_BmnDchGeo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnDchGeo*)
   {
      return GenerateInitInstanceLocal((::BmnDchGeo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnDchGeo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnDchGeoPar(void *p = 0);
   static void *newArray_BmnDchGeoPar(Long_t size, void *p);
   static void delete_BmnDchGeoPar(void *p);
   static void deleteArray_BmnDchGeoPar(void *p);
   static void destruct_BmnDchGeoPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnDchGeoPar*)
   {
      ::BmnDchGeoPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnDchGeoPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnDchGeoPar", ::BmnDchGeoPar::Class_Version(), "", 271,
                  typeid(::BmnDchGeoPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnDchGeoPar::Dictionary, isa_proxy, 4,
                  sizeof(::BmnDchGeoPar) );
      instance.SetNew(&new_BmnDchGeoPar);
      instance.SetNewArray(&newArray_BmnDchGeoPar);
      instance.SetDelete(&delete_BmnDchGeoPar);
      instance.SetDeleteArray(&deleteArray_BmnDchGeoPar);
      instance.SetDestructor(&destruct_BmnDchGeoPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnDchGeoPar*)
   {
      return GenerateInitInstanceLocal((::BmnDchGeoPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnDchGeoPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ScalarD(void *p = 0);
   static void *newArray_ScalarD(Long_t size, void *p);
   static void delete_ScalarD(void *p);
   static void deleteArray_ScalarD(void *p);
   static void destruct_ScalarD(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ScalarD*)
   {
      ::ScalarD *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ScalarD >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ScalarD", ::ScalarD::Class_Version(), "ScalarD.h", 20,
                  typeid(::ScalarD), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ScalarD::Dictionary, isa_proxy, 4,
                  sizeof(::ScalarD) );
      instance.SetNew(&new_ScalarD);
      instance.SetNewArray(&newArray_ScalarD);
      instance.SetDelete(&delete_ScalarD);
      instance.SetDeleteArray(&deleteArray_ScalarD);
      instance.SetDestructor(&destruct_ScalarD);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ScalarD*)
   {
      return GenerateInitInstanceLocal((::ScalarD*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ScalarD*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ScalarI(void *p = 0);
   static void *newArray_ScalarI(Long_t size, void *p);
   static void delete_ScalarI(void *p);
   static void deleteArray_ScalarI(void *p);
   static void destruct_ScalarI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ScalarI*)
   {
      ::ScalarI *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ScalarI >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ScalarI", ::ScalarI::Class_Version(), "ScalarI.h", 20,
                  typeid(::ScalarI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ScalarI::Dictionary, isa_proxy, 4,
                  sizeof(::ScalarI) );
      instance.SetNew(&new_ScalarI);
      instance.SetNewArray(&newArray_ScalarI);
      instance.SetDelete(&delete_ScalarI);
      instance.SetDeleteArray(&deleteArray_ScalarI);
      instance.SetDestructor(&destruct_ScalarI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ScalarI*)
   {
      return GenerateInitInstanceLocal((::ScalarI*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ScalarI*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ScalarUI(void *p = 0);
   static void *newArray_ScalarUI(Long_t size, void *p);
   static void delete_ScalarUI(void *p);
   static void deleteArray_ScalarUI(void *p);
   static void destruct_ScalarUI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ScalarUI*)
   {
      ::ScalarUI *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ScalarUI >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ScalarUI", ::ScalarUI::Class_Version(), "ScalarUI.h", 20,
                  typeid(::ScalarUI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ScalarUI::Dictionary, isa_proxy, 4,
                  sizeof(::ScalarUI) );
      instance.SetNew(&new_ScalarUI);
      instance.SetNewArray(&newArray_ScalarUI);
      instance.SetDelete(&delete_ScalarUI);
      instance.SetDeleteArray(&deleteArray_ScalarUI);
      instance.SetDestructor(&destruct_ScalarUI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ScalarUI*)
   {
      return GenerateInitInstanceLocal((::ScalarUI*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ScalarUI*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DchHitPlane(void *p = 0);
   static void *newArray_DchHitPlane(Long_t size, void *p);
   static void delete_DchHitPlane(void *p);
   static void deleteArray_DchHitPlane(void *p);
   static void destruct_DchHitPlane(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DchHitPlane*)
   {
      ::DchHitPlane *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DchHitPlane >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DchHitPlane", ::DchHitPlane::Class_Version(), "DchHitPlane.h", 25,
                  typeid(::DchHitPlane), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DchHitPlane::Dictionary, isa_proxy, 4,
                  sizeof(::DchHitPlane) );
      instance.SetNew(&new_DchHitPlane);
      instance.SetNewArray(&newArray_DchHitPlane);
      instance.SetDelete(&delete_DchHitPlane);
      instance.SetDeleteArray(&deleteArray_DchHitPlane);
      instance.SetDestructor(&destruct_DchHitPlane);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DchHitPlane*)
   {
      return GenerateInitInstanceLocal((::DchHitPlane*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DchHitPlane*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DchTrackCand(void *p = 0);
   static void *newArray_DchTrackCand(Long_t size, void *p);
   static void delete_DchTrackCand(void *p);
   static void deleteArray_DchTrackCand(void *p);
   static void destruct_DchTrackCand(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DchTrackCand*)
   {
      ::DchTrackCand *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DchTrackCand >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DchTrackCand", ::DchTrackCand::Class_Version(), "DchTrackCand.h", 26,
                  typeid(::DchTrackCand), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DchTrackCand::Dictionary, isa_proxy, 4,
                  sizeof(::DchTrackCand) );
      instance.SetNew(&new_DchTrackCand);
      instance.SetNewArray(&newArray_DchTrackCand);
      instance.SetDelete(&delete_DchTrackCand);
      instance.SetDeleteArray(&deleteArray_DchTrackCand);
      instance.SetDestructor(&destruct_DchTrackCand);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DchTrackCand*)
   {
      return GenerateInitInstanceLocal((::DchTrackCand*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DchTrackCand*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnDchHitProducer(void *p = 0);
   static void *newArray_BmnDchHitProducer(Long_t size, void *p);
   static void delete_BmnDchHitProducer(void *p);
   static void deleteArray_BmnDchHitProducer(void *p);
   static void destruct_BmnDchHitProducer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnDchHitProducer*)
   {
      ::BmnDchHitProducer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnDchHitProducer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnDchHitProducer", ::BmnDchHitProducer::Class_Version(), "", 336,
                  typeid(::BmnDchHitProducer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnDchHitProducer::Dictionary, isa_proxy, 4,
                  sizeof(::BmnDchHitProducer) );
      instance.SetNew(&new_BmnDchHitProducer);
      instance.SetNewArray(&newArray_BmnDchHitProducer);
      instance.SetDelete(&delete_BmnDchHitProducer);
      instance.SetDeleteArray(&deleteArray_BmnDchHitProducer);
      instance.SetDestructor(&destruct_BmnDchHitProducer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnDchHitProducer*)
   {
      return GenerateInitInstanceLocal((::BmnDchHitProducer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnDchHitProducer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnDchHitProducerTmp(void *p);
   static void deleteArray_BmnDchHitProducerTmp(void *p);
   static void destruct_BmnDchHitProducerTmp(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnDchHitProducerTmp*)
   {
      ::BmnDchHitProducerTmp *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnDchHitProducerTmp >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnDchHitProducerTmp", ::BmnDchHitProducerTmp::Class_Version(), "", 498,
                  typeid(::BmnDchHitProducerTmp), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnDchHitProducerTmp::Dictionary, isa_proxy, 4,
                  sizeof(::BmnDchHitProducerTmp) );
      instance.SetDelete(&delete_BmnDchHitProducerTmp);
      instance.SetDeleteArray(&deleteArray_BmnDchHitProducerTmp);
      instance.SetDestructor(&destruct_BmnDchHitProducerTmp);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnDchHitProducerTmp*)
   {
      return GenerateInitInstanceLocal((::BmnDchHitProducerTmp*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnDchHitProducerTmp*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnDchHitProducer_exp(void *p = 0);
   static void *newArray_BmnDchHitProducer_exp(Long_t size, void *p);
   static void delete_BmnDchHitProducer_exp(void *p);
   static void deleteArray_BmnDchHitProducer_exp(void *p);
   static void destruct_BmnDchHitProducer_exp(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnDchHitProducer_exp*)
   {
      ::BmnDchHitProducer_exp *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnDchHitProducer_exp >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnDchHitProducer_exp", ::BmnDchHitProducer_exp::Class_Version(), "", 596,
                  typeid(::BmnDchHitProducer_exp), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnDchHitProducer_exp::Dictionary, isa_proxy, 4,
                  sizeof(::BmnDchHitProducer_exp) );
      instance.SetNew(&new_BmnDchHitProducer_exp);
      instance.SetNewArray(&newArray_BmnDchHitProducer_exp);
      instance.SetDelete(&delete_BmnDchHitProducer_exp);
      instance.SetDeleteArray(&deleteArray_BmnDchHitProducer_exp);
      instance.SetDestructor(&destruct_BmnDchHitProducer_exp);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnDchHitProducer_exp*)
   {
      return GenerateInitInstanceLocal((::BmnDchHitProducer_exp*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnDchHitProducer_exp*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_DchTrackManager(void *p);
   static void deleteArray_DchTrackManager(void *p);
   static void destruct_DchTrackManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DchTrackManager*)
   {
      ::DchTrackManager *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DchTrackManager >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DchTrackManager", ::DchTrackManager::Class_Version(), "", 829,
                  typeid(::DchTrackManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DchTrackManager::Dictionary, isa_proxy, 4,
                  sizeof(::DchTrackManager) );
      instance.SetDelete(&delete_DchTrackManager);
      instance.SetDeleteArray(&deleteArray_DchTrackManager);
      instance.SetDestructor(&destruct_DchTrackManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DchTrackManager*)
   {
      return GenerateInitInstanceLocal((::DchTrackManager*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DchTrackManager*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnDchTrack(void *p = 0);
   static void *newArray_BmnDchTrack(Long_t size, void *p);
   static void delete_BmnDchTrack(void *p);
   static void deleteArray_BmnDchTrack(void *p);
   static void destruct_BmnDchTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnDchTrack*)
   {
      ::BmnDchTrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnDchTrack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnDchTrack", ::BmnDchTrack::Class_Version(), "BmnDchTrack.h", 6,
                  typeid(::BmnDchTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnDchTrack::Dictionary, isa_proxy, 4,
                  sizeof(::BmnDchTrack) );
      instance.SetNew(&new_BmnDchTrack);
      instance.SetNewArray(&newArray_BmnDchTrack);
      instance.SetDelete(&delete_BmnDchTrack);
      instance.SetDeleteArray(&deleteArray_BmnDchTrack);
      instance.SetDestructor(&destruct_BmnDchTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnDchTrack*)
   {
      return GenerateInitInstanceLocal((::BmnDchTrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnDchTrack*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnDchTrackFinder(void *p = 0);
   static void *newArray_BmnDchTrackFinder(Long_t size, void *p);
   static void delete_BmnDchTrackFinder(void *p);
   static void deleteArray_BmnDchTrackFinder(void *p);
   static void destruct_BmnDchTrackFinder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnDchTrackFinder*)
   {
      ::BmnDchTrackFinder *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnDchTrackFinder >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnDchTrackFinder", ::BmnDchTrackFinder::Class_Version(), "", 1124,
                  typeid(::BmnDchTrackFinder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnDchTrackFinder::Dictionary, isa_proxy, 4,
                  sizeof(::BmnDchTrackFinder) );
      instance.SetNew(&new_BmnDchTrackFinder);
      instance.SetNewArray(&newArray_BmnDchTrackFinder);
      instance.SetDelete(&delete_BmnDchTrackFinder);
      instance.SetDeleteArray(&deleteArray_BmnDchTrackFinder);
      instance.SetDestructor(&destruct_BmnDchTrackFinder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnDchTrackFinder*)
   {
      return GenerateInitInstanceLocal((::BmnDchTrackFinder*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnDchTrackFinder*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnDch::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnDch::Class_Name()
{
   return "BmnDch";
}

//______________________________________________________________________________
const char *BmnDch::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDch*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnDch::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDch*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnDch::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDch*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnDch::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDch*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnDchPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnDchPoint::Class_Name()
{
   return "BmnDchPoint";
}

//______________________________________________________________________________
const char *BmnDchPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDchPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnDchPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDchPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnDchPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDchPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnDchPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDchPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnDchContFact::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnDchContFact::Class_Name()
{
   return "BmnDchContFact";
}

//______________________________________________________________________________
const char *BmnDchContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDchContFact*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnDchContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDchContFact*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnDchContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDchContFact*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnDchContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDchContFact*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnDchGeo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnDchGeo::Class_Name()
{
   return "BmnDchGeo";
}

//______________________________________________________________________________
const char *BmnDchGeo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDchGeo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnDchGeo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDchGeo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnDchGeo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDchGeo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnDchGeo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDchGeo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnDchGeoPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnDchGeoPar::Class_Name()
{
   return "BmnDchGeoPar";
}

//______________________________________________________________________________
const char *BmnDchGeoPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDchGeoPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnDchGeoPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDchGeoPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnDchGeoPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDchGeoPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnDchGeoPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDchGeoPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ScalarD::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ScalarD::Class_Name()
{
   return "ScalarD";
}

//______________________________________________________________________________
const char *ScalarD::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ScalarD*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ScalarD::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ScalarD*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ScalarD::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ScalarD*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ScalarD::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ScalarD*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ScalarI::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ScalarI::Class_Name()
{
   return "ScalarI";
}

//______________________________________________________________________________
const char *ScalarI::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ScalarI*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ScalarI::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ScalarI*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ScalarI::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ScalarI*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ScalarI::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ScalarI*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ScalarUI::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ScalarUI::Class_Name()
{
   return "ScalarUI";
}

//______________________________________________________________________________
const char *ScalarUI::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ScalarUI*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ScalarUI::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ScalarUI*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ScalarUI::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ScalarUI*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ScalarUI::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ScalarUI*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr DchHitPlane::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DchHitPlane::Class_Name()
{
   return "DchHitPlane";
}

//______________________________________________________________________________
const char *DchHitPlane::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DchHitPlane*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DchHitPlane::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DchHitPlane*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DchHitPlane::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DchHitPlane*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DchHitPlane::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DchHitPlane*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr DchTrackCand::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DchTrackCand::Class_Name()
{
   return "DchTrackCand";
}

//______________________________________________________________________________
const char *DchTrackCand::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DchTrackCand*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DchTrackCand::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DchTrackCand*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DchTrackCand::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DchTrackCand*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DchTrackCand::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DchTrackCand*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnDchHitProducer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnDchHitProducer::Class_Name()
{
   return "BmnDchHitProducer";
}

//______________________________________________________________________________
const char *BmnDchHitProducer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDchHitProducer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnDchHitProducer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDchHitProducer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnDchHitProducer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDchHitProducer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnDchHitProducer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDchHitProducer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnDchHitProducerTmp::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnDchHitProducerTmp::Class_Name()
{
   return "BmnDchHitProducerTmp";
}

//______________________________________________________________________________
const char *BmnDchHitProducerTmp::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDchHitProducerTmp*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnDchHitProducerTmp::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDchHitProducerTmp*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnDchHitProducerTmp::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDchHitProducerTmp*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnDchHitProducerTmp::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDchHitProducerTmp*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnDchHitProducer_exp::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnDchHitProducer_exp::Class_Name()
{
   return "BmnDchHitProducer_exp";
}

//______________________________________________________________________________
const char *BmnDchHitProducer_exp::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDchHitProducer_exp*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnDchHitProducer_exp::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDchHitProducer_exp*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnDchHitProducer_exp::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDchHitProducer_exp*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnDchHitProducer_exp::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDchHitProducer_exp*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr DchTrackManager::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DchTrackManager::Class_Name()
{
   return "DchTrackManager";
}

//______________________________________________________________________________
const char *DchTrackManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DchTrackManager*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DchTrackManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DchTrackManager*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DchTrackManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DchTrackManager*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DchTrackManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DchTrackManager*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnDchTrack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnDchTrack::Class_Name()
{
   return "BmnDchTrack";
}

//______________________________________________________________________________
const char *BmnDchTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDchTrack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnDchTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDchTrack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnDchTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDchTrack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnDchTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDchTrack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnDchTrackFinder::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnDchTrackFinder::Class_Name()
{
   return "BmnDchTrackFinder";
}

//______________________________________________________________________________
const char *BmnDchTrackFinder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDchTrackFinder*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnDchTrackFinder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDchTrackFinder*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnDchTrackFinder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDchTrackFinder*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnDchTrackFinder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDchTrackFinder*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnDch::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnDch.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnDch::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnDch::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnDch(void *p) {
      return  p ? new(p) ::BmnDch : new ::BmnDch;
   }
   static void *newArray_BmnDch(Long_t nElements, void *p) {
      return p ? new(p) ::BmnDch[nElements] : new ::BmnDch[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnDch(void *p) {
      delete ((::BmnDch*)p);
   }
   static void deleteArray_BmnDch(void *p) {
      delete [] ((::BmnDch*)p);
   }
   static void destruct_BmnDch(void *p) {
      typedef ::BmnDch current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnDch

//______________________________________________________________________________
void BmnDchPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnDchPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnDchPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnDchPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnDchPoint(void *p) {
      return  p ? new(p) ::BmnDchPoint : new ::BmnDchPoint;
   }
   static void *newArray_BmnDchPoint(Long_t nElements, void *p) {
      return p ? new(p) ::BmnDchPoint[nElements] : new ::BmnDchPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnDchPoint(void *p) {
      delete ((::BmnDchPoint*)p);
   }
   static void deleteArray_BmnDchPoint(void *p) {
      delete [] ((::BmnDchPoint*)p);
   }
   static void destruct_BmnDchPoint(void *p) {
      typedef ::BmnDchPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnDchPoint

//______________________________________________________________________________
void BmnDchContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnDchContFact.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnDchContFact::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnDchContFact::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnDchContFact(void *p) {
      return  p ? new(p) ::BmnDchContFact : new ::BmnDchContFact;
   }
   static void *newArray_BmnDchContFact(Long_t nElements, void *p) {
      return p ? new(p) ::BmnDchContFact[nElements] : new ::BmnDchContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnDchContFact(void *p) {
      delete ((::BmnDchContFact*)p);
   }
   static void deleteArray_BmnDchContFact(void *p) {
      delete [] ((::BmnDchContFact*)p);
   }
   static void destruct_BmnDchContFact(void *p) {
      typedef ::BmnDchContFact current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnDchContFact

//______________________________________________________________________________
void BmnDchGeo::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnDchGeo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnDchGeo::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnDchGeo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnDchGeo(void *p) {
      return  p ? new(p) ::BmnDchGeo : new ::BmnDchGeo;
   }
   static void *newArray_BmnDchGeo(Long_t nElements, void *p) {
      return p ? new(p) ::BmnDchGeo[nElements] : new ::BmnDchGeo[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnDchGeo(void *p) {
      delete ((::BmnDchGeo*)p);
   }
   static void deleteArray_BmnDchGeo(void *p) {
      delete [] ((::BmnDchGeo*)p);
   }
   static void destruct_BmnDchGeo(void *p) {
      typedef ::BmnDchGeo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnDchGeo

//______________________________________________________________________________
void BmnDchGeoPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnDchGeoPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnDchGeoPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnDchGeoPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnDchGeoPar(void *p) {
      return  p ? new(p) ::BmnDchGeoPar : new ::BmnDchGeoPar;
   }
   static void *newArray_BmnDchGeoPar(Long_t nElements, void *p) {
      return p ? new(p) ::BmnDchGeoPar[nElements] : new ::BmnDchGeoPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnDchGeoPar(void *p) {
      delete ((::BmnDchGeoPar*)p);
   }
   static void deleteArray_BmnDchGeoPar(void *p) {
      delete [] ((::BmnDchGeoPar*)p);
   }
   static void destruct_BmnDchGeoPar(void *p) {
      typedef ::BmnDchGeoPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnDchGeoPar

//______________________________________________________________________________
void ScalarD::Streamer(TBuffer &R__b)
{
   // Stream an object of class ScalarD.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ScalarD::Class(),this);
   } else {
      R__b.WriteClassBuffer(ScalarD::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ScalarD(void *p) {
      return  p ? new(p) ::ScalarD : new ::ScalarD;
   }
   static void *newArray_ScalarD(Long_t nElements, void *p) {
      return p ? new(p) ::ScalarD[nElements] : new ::ScalarD[nElements];
   }
   // Wrapper around operator delete
   static void delete_ScalarD(void *p) {
      delete ((::ScalarD*)p);
   }
   static void deleteArray_ScalarD(void *p) {
      delete [] ((::ScalarD*)p);
   }
   static void destruct_ScalarD(void *p) {
      typedef ::ScalarD current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ScalarD

//______________________________________________________________________________
void ScalarI::Streamer(TBuffer &R__b)
{
   // Stream an object of class ScalarI.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ScalarI::Class(),this);
   } else {
      R__b.WriteClassBuffer(ScalarI::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ScalarI(void *p) {
      return  p ? new(p) ::ScalarI : new ::ScalarI;
   }
   static void *newArray_ScalarI(Long_t nElements, void *p) {
      return p ? new(p) ::ScalarI[nElements] : new ::ScalarI[nElements];
   }
   // Wrapper around operator delete
   static void delete_ScalarI(void *p) {
      delete ((::ScalarI*)p);
   }
   static void deleteArray_ScalarI(void *p) {
      delete [] ((::ScalarI*)p);
   }
   static void destruct_ScalarI(void *p) {
      typedef ::ScalarI current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ScalarI

//______________________________________________________________________________
void ScalarUI::Streamer(TBuffer &R__b)
{
   // Stream an object of class ScalarUI.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ScalarUI::Class(),this);
   } else {
      R__b.WriteClassBuffer(ScalarUI::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ScalarUI(void *p) {
      return  p ? new(p) ::ScalarUI : new ::ScalarUI;
   }
   static void *newArray_ScalarUI(Long_t nElements, void *p) {
      return p ? new(p) ::ScalarUI[nElements] : new ::ScalarUI[nElements];
   }
   // Wrapper around operator delete
   static void delete_ScalarUI(void *p) {
      delete ((::ScalarUI*)p);
   }
   static void deleteArray_ScalarUI(void *p) {
      delete [] ((::ScalarUI*)p);
   }
   static void destruct_ScalarUI(void *p) {
      typedef ::ScalarUI current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ScalarUI

//______________________________________________________________________________
void DchHitPlane::Streamer(TBuffer &R__b)
{
   // Stream an object of class DchHitPlane.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DchHitPlane::Class(),this);
   } else {
      R__b.WriteClassBuffer(DchHitPlane::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_DchHitPlane(void *p) {
      return  p ? new(p) ::DchHitPlane : new ::DchHitPlane;
   }
   static void *newArray_DchHitPlane(Long_t nElements, void *p) {
      return p ? new(p) ::DchHitPlane[nElements] : new ::DchHitPlane[nElements];
   }
   // Wrapper around operator delete
   static void delete_DchHitPlane(void *p) {
      delete ((::DchHitPlane*)p);
   }
   static void deleteArray_DchHitPlane(void *p) {
      delete [] ((::DchHitPlane*)p);
   }
   static void destruct_DchHitPlane(void *p) {
      typedef ::DchHitPlane current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DchHitPlane

//______________________________________________________________________________
void DchTrackCand::Streamer(TBuffer &R__b)
{
   // Stream an object of class DchTrackCand.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DchTrackCand::Class(),this);
   } else {
      R__b.WriteClassBuffer(DchTrackCand::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_DchTrackCand(void *p) {
      return  p ? new(p) ::DchTrackCand : new ::DchTrackCand;
   }
   static void *newArray_DchTrackCand(Long_t nElements, void *p) {
      return p ? new(p) ::DchTrackCand[nElements] : new ::DchTrackCand[nElements];
   }
   // Wrapper around operator delete
   static void delete_DchTrackCand(void *p) {
      delete ((::DchTrackCand*)p);
   }
   static void deleteArray_DchTrackCand(void *p) {
      delete [] ((::DchTrackCand*)p);
   }
   static void destruct_DchTrackCand(void *p) {
      typedef ::DchTrackCand current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DchTrackCand

//______________________________________________________________________________
void BmnDchHitProducer::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnDchHitProducer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnDchHitProducer::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnDchHitProducer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnDchHitProducer(void *p) {
      return  p ? new(p) ::BmnDchHitProducer : new ::BmnDchHitProducer;
   }
   static void *newArray_BmnDchHitProducer(Long_t nElements, void *p) {
      return p ? new(p) ::BmnDchHitProducer[nElements] : new ::BmnDchHitProducer[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnDchHitProducer(void *p) {
      delete ((::BmnDchHitProducer*)p);
   }
   static void deleteArray_BmnDchHitProducer(void *p) {
      delete [] ((::BmnDchHitProducer*)p);
   }
   static void destruct_BmnDchHitProducer(void *p) {
      typedef ::BmnDchHitProducer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnDchHitProducer

//______________________________________________________________________________
void BmnDchHitProducerTmp::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnDchHitProducerTmp.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnDchHitProducerTmp::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnDchHitProducerTmp::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnDchHitProducerTmp(void *p) {
      delete ((::BmnDchHitProducerTmp*)p);
   }
   static void deleteArray_BmnDchHitProducerTmp(void *p) {
      delete [] ((::BmnDchHitProducerTmp*)p);
   }
   static void destruct_BmnDchHitProducerTmp(void *p) {
      typedef ::BmnDchHitProducerTmp current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnDchHitProducerTmp

//______________________________________________________________________________
void BmnDchHitProducer_exp::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnDchHitProducer_exp.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnDchHitProducer_exp::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnDchHitProducer_exp::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnDchHitProducer_exp(void *p) {
      return  p ? new(p) ::BmnDchHitProducer_exp : new ::BmnDchHitProducer_exp;
   }
   static void *newArray_BmnDchHitProducer_exp(Long_t nElements, void *p) {
      return p ? new(p) ::BmnDchHitProducer_exp[nElements] : new ::BmnDchHitProducer_exp[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnDchHitProducer_exp(void *p) {
      delete ((::BmnDchHitProducer_exp*)p);
   }
   static void deleteArray_BmnDchHitProducer_exp(void *p) {
      delete [] ((::BmnDchHitProducer_exp*)p);
   }
   static void destruct_BmnDchHitProducer_exp(void *p) {
      typedef ::BmnDchHitProducer_exp current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnDchHitProducer_exp

//______________________________________________________________________________
void DchTrackManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class DchTrackManager.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DchTrackManager::Class(),this);
   } else {
      R__b.WriteClassBuffer(DchTrackManager::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_DchTrackManager(void *p) {
      delete ((::DchTrackManager*)p);
   }
   static void deleteArray_DchTrackManager(void *p) {
      delete [] ((::DchTrackManager*)p);
   }
   static void destruct_DchTrackManager(void *p) {
      typedef ::DchTrackManager current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DchTrackManager

//______________________________________________________________________________
void BmnDchTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnDchTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnDchTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnDchTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnDchTrack(void *p) {
      return  p ? new(p) ::BmnDchTrack : new ::BmnDchTrack;
   }
   static void *newArray_BmnDchTrack(Long_t nElements, void *p) {
      return p ? new(p) ::BmnDchTrack[nElements] : new ::BmnDchTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnDchTrack(void *p) {
      delete ((::BmnDchTrack*)p);
   }
   static void deleteArray_BmnDchTrack(void *p) {
      delete [] ((::BmnDchTrack*)p);
   }
   static void destruct_BmnDchTrack(void *p) {
      typedef ::BmnDchTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnDchTrack

//______________________________________________________________________________
void BmnDchTrackFinder::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnDchTrackFinder.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnDchTrackFinder::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnDchTrackFinder::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnDchTrackFinder(void *p) {
      return  p ? new(p) ::BmnDchTrackFinder : new ::BmnDchTrackFinder;
   }
   static void *newArray_BmnDchTrackFinder(Long_t nElements, void *p) {
      return p ? new(p) ::BmnDchTrackFinder[nElements] : new ::BmnDchTrackFinder[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnDchTrackFinder(void *p) {
      delete ((::BmnDchTrackFinder*)p);
   }
   static void deleteArray_BmnDchTrackFinder(void *p) {
      delete [] ((::BmnDchTrackFinder*)p);
   }
   static void destruct_BmnDchTrackFinder(void *p) {
      typedef ::BmnDchTrackFinder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnDchTrackFinder

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
   static TClass *vectorlEBmnDchTrackFindercLcLPointPairmUgR_Dictionary();
   static void vectorlEBmnDchTrackFindercLcLPointPairmUgR_TClassManip(TClass*);
   static void *new_vectorlEBmnDchTrackFindercLcLPointPairmUgR(void *p = 0);
   static void *newArray_vectorlEBmnDchTrackFindercLcLPointPairmUgR(Long_t size, void *p);
   static void delete_vectorlEBmnDchTrackFindercLcLPointPairmUgR(void *p);
   static void deleteArray_vectorlEBmnDchTrackFindercLcLPointPairmUgR(void *p);
   static void destruct_vectorlEBmnDchTrackFindercLcLPointPairmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnDchTrackFinder::PointPair*>*)
   {
      vector<BmnDchTrackFinder::PointPair*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnDchTrackFinder::PointPair*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnDchTrackFinder::PointPair*>", -2, "vector", 216,
                  typeid(vector<BmnDchTrackFinder::PointPair*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnDchTrackFindercLcLPointPairmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnDchTrackFinder::PointPair*>) );
      instance.SetNew(&new_vectorlEBmnDchTrackFindercLcLPointPairmUgR);
      instance.SetNewArray(&newArray_vectorlEBmnDchTrackFindercLcLPointPairmUgR);
      instance.SetDelete(&delete_vectorlEBmnDchTrackFindercLcLPointPairmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnDchTrackFindercLcLPointPairmUgR);
      instance.SetDestructor(&destruct_vectorlEBmnDchTrackFindercLcLPointPairmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnDchTrackFinder::PointPair*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnDchTrackFinder::PointPair*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnDchTrackFindercLcLPointPairmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnDchTrackFinder::PointPair*>*)0x0)->GetClass();
      vectorlEBmnDchTrackFindercLcLPointPairmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnDchTrackFindercLcLPointPairmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnDchTrackFindercLcLPointPairmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnDchTrackFinder::PointPair*> : new vector<BmnDchTrackFinder::PointPair*>;
   }
   static void *newArray_vectorlEBmnDchTrackFindercLcLPointPairmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnDchTrackFinder::PointPair*>[nElements] : new vector<BmnDchTrackFinder::PointPair*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnDchTrackFindercLcLPointPairmUgR(void *p) {
      delete ((vector<BmnDchTrackFinder::PointPair*>*)p);
   }
   static void deleteArray_vectorlEBmnDchTrackFindercLcLPointPairmUgR(void *p) {
      delete [] ((vector<BmnDchTrackFinder::PointPair*>*)p);
   }
   static void destruct_vectorlEBmnDchTrackFindercLcLPointPairmUgR(void *p) {
      typedef vector<BmnDchTrackFinder::PointPair*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnDchTrackFinder::PointPair*>

namespace ROOT {
   static TClass *vectorlEBmnDchTrackFindercLcLClustermUgR_Dictionary();
   static void vectorlEBmnDchTrackFindercLcLClustermUgR_TClassManip(TClass*);
   static void *new_vectorlEBmnDchTrackFindercLcLClustermUgR(void *p = 0);
   static void *newArray_vectorlEBmnDchTrackFindercLcLClustermUgR(Long_t size, void *p);
   static void delete_vectorlEBmnDchTrackFindercLcLClustermUgR(void *p);
   static void deleteArray_vectorlEBmnDchTrackFindercLcLClustermUgR(void *p);
   static void destruct_vectorlEBmnDchTrackFindercLcLClustermUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnDchTrackFinder::Cluster*>*)
   {
      vector<BmnDchTrackFinder::Cluster*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnDchTrackFinder::Cluster*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnDchTrackFinder::Cluster*>", -2, "vector", 216,
                  typeid(vector<BmnDchTrackFinder::Cluster*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnDchTrackFindercLcLClustermUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnDchTrackFinder::Cluster*>) );
      instance.SetNew(&new_vectorlEBmnDchTrackFindercLcLClustermUgR);
      instance.SetNewArray(&newArray_vectorlEBmnDchTrackFindercLcLClustermUgR);
      instance.SetDelete(&delete_vectorlEBmnDchTrackFindercLcLClustermUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnDchTrackFindercLcLClustermUgR);
      instance.SetDestructor(&destruct_vectorlEBmnDchTrackFindercLcLClustermUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnDchTrackFinder::Cluster*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnDchTrackFinder::Cluster*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnDchTrackFindercLcLClustermUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnDchTrackFinder::Cluster*>*)0x0)->GetClass();
      vectorlEBmnDchTrackFindercLcLClustermUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnDchTrackFindercLcLClustermUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnDchTrackFindercLcLClustermUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnDchTrackFinder::Cluster*> : new vector<BmnDchTrackFinder::Cluster*>;
   }
   static void *newArray_vectorlEBmnDchTrackFindercLcLClustermUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnDchTrackFinder::Cluster*>[nElements] : new vector<BmnDchTrackFinder::Cluster*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnDchTrackFindercLcLClustermUgR(void *p) {
      delete ((vector<BmnDchTrackFinder::Cluster*>*)p);
   }
   static void deleteArray_vectorlEBmnDchTrackFindercLcLClustermUgR(void *p) {
      delete [] ((vector<BmnDchTrackFinder::Cluster*>*)p);
   }
   static void destruct_vectorlEBmnDchTrackFindercLcLClustermUgR(void *p) {
      typedef vector<BmnDchTrackFinder::Cluster*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnDchTrackFinder::Cluster*>

namespace ROOT {
   static TClass *vectorlEBmnDchDigitmUgR_Dictionary();
   static void vectorlEBmnDchDigitmUgR_TClassManip(TClass*);
   static void *new_vectorlEBmnDchDigitmUgR(void *p = 0);
   static void *newArray_vectorlEBmnDchDigitmUgR(Long_t size, void *p);
   static void delete_vectorlEBmnDchDigitmUgR(void *p);
   static void deleteArray_vectorlEBmnDchDigitmUgR(void *p);
   static void destruct_vectorlEBmnDchDigitmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnDchDigit*>*)
   {
      vector<BmnDchDigit*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnDchDigit*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnDchDigit*>", -2, "vector", 216,
                  typeid(vector<BmnDchDigit*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnDchDigitmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnDchDigit*>) );
      instance.SetNew(&new_vectorlEBmnDchDigitmUgR);
      instance.SetNewArray(&newArray_vectorlEBmnDchDigitmUgR);
      instance.SetDelete(&delete_vectorlEBmnDchDigitmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnDchDigitmUgR);
      instance.SetDestructor(&destruct_vectorlEBmnDchDigitmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnDchDigit*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnDchDigit*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnDchDigitmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnDchDigit*>*)0x0)->GetClass();
      vectorlEBmnDchDigitmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnDchDigitmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnDchDigitmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnDchDigit*> : new vector<BmnDchDigit*>;
   }
   static void *newArray_vectorlEBmnDchDigitmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnDchDigit*>[nElements] : new vector<BmnDchDigit*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnDchDigitmUgR(void *p) {
      delete ((vector<BmnDchDigit*>*)p);
   }
   static void deleteArray_vectorlEBmnDchDigitmUgR(void *p) {
      delete [] ((vector<BmnDchDigit*>*)p);
   }
   static void destruct_vectorlEBmnDchDigitmUgR(void *p) {
      typedef vector<BmnDchDigit*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnDchDigit*>

namespace ROOT {
   static TClass *multimaplEdoublecOintgR_Dictionary();
   static void multimaplEdoublecOintgR_TClassManip(TClass*);
   static void *new_multimaplEdoublecOintgR(void *p = 0);
   static void *newArray_multimaplEdoublecOintgR(Long_t size, void *p);
   static void delete_multimaplEdoublecOintgR(void *p);
   static void deleteArray_multimaplEdoublecOintgR(void *p);
   static void destruct_multimaplEdoublecOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const multimap<double,int>*)
   {
      multimap<double,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(multimap<double,int>));
      static ::ROOT::TGenericClassInfo 
         instance("multimap<double,int>", -2, "map", 98,
                  typeid(multimap<double,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &multimaplEdoublecOintgR_Dictionary, isa_proxy, 0,
                  sizeof(multimap<double,int>) );
      instance.SetNew(&new_multimaplEdoublecOintgR);
      instance.SetNewArray(&newArray_multimaplEdoublecOintgR);
      instance.SetDelete(&delete_multimaplEdoublecOintgR);
      instance.SetDeleteArray(&deleteArray_multimaplEdoublecOintgR);
      instance.SetDestructor(&destruct_multimaplEdoublecOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< multimap<double,int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const multimap<double,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *multimaplEdoublecOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const multimap<double,int>*)0x0)->GetClass();
      multimaplEdoublecOintgR_TClassManip(theClass);
   return theClass;
   }

   static void multimaplEdoublecOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_multimaplEdoublecOintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) multimap<double,int> : new multimap<double,int>;
   }
   static void *newArray_multimaplEdoublecOintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) multimap<double,int>[nElements] : new multimap<double,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_multimaplEdoublecOintgR(void *p) {
      delete ((multimap<double,int>*)p);
   }
   static void deleteArray_multimaplEdoublecOintgR(void *p) {
      delete [] ((multimap<double,int>*)p);
   }
   static void destruct_multimaplEdoublecOintgR(void *p) {
      typedef multimap<double,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class multimap<double,int>

namespace ROOT {
   static TClass *maplETStringcOTGeoMediummUgR_Dictionary();
   static void maplETStringcOTGeoMediummUgR_TClassManip(TClass*);
   static void *new_maplETStringcOTGeoMediummUgR(void *p = 0);
   static void *newArray_maplETStringcOTGeoMediummUgR(Long_t size, void *p);
   static void delete_maplETStringcOTGeoMediummUgR(void *p);
   static void deleteArray_maplETStringcOTGeoMediummUgR(void *p);
   static void destruct_maplETStringcOTGeoMediummUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TString,TGeoMedium*>*)
   {
      map<TString,TGeoMedium*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TString,TGeoMedium*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TString,TGeoMedium*>", -2, "map", 99,
                  typeid(map<TString,TGeoMedium*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETStringcOTGeoMediummUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TString,TGeoMedium*>) );
      instance.SetNew(&new_maplETStringcOTGeoMediummUgR);
      instance.SetNewArray(&newArray_maplETStringcOTGeoMediummUgR);
      instance.SetDelete(&delete_maplETStringcOTGeoMediummUgR);
      instance.SetDeleteArray(&deleteArray_maplETStringcOTGeoMediummUgR);
      instance.SetDestructor(&destruct_maplETStringcOTGeoMediummUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TString,TGeoMedium*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TString,TGeoMedium*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETStringcOTGeoMediummUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TString,TGeoMedium*>*)0x0)->GetClass();
      maplETStringcOTGeoMediummUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETStringcOTGeoMediummUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETStringcOTGeoMediummUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,TGeoMedium*> : new map<TString,TGeoMedium*>;
   }
   static void *newArray_maplETStringcOTGeoMediummUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,TGeoMedium*>[nElements] : new map<TString,TGeoMedium*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETStringcOTGeoMediummUgR(void *p) {
      delete ((map<TString,TGeoMedium*>*)p);
   }
   static void deleteArray_maplETStringcOTGeoMediummUgR(void *p) {
      delete [] ((map<TString,TGeoMedium*>*)p);
   }
   static void destruct_maplETStringcOTGeoMediummUgR(void *p) {
      typedef map<TString,TGeoMedium*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TString,TGeoMedium*>

namespace {
  void TriggerDictionaryInitialization_G__DchDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/opt/fairroot/install/include",
"/home/alex/bmnroot_dev/bmnroot/mcstack",
"/home/alex/bmnroot_dev/bmnroot/passive",
"/home/alex/bmnroot_dev/bmnroot/bmndata",
"/home/alex/bmnroot_dev/bmnroot/bmndata/math",
"/home/alex/bmnroot_dev/bmnroot/bmnfield",
"/home/alex/bmnroot_dev/bmnroot/gem",
"/home/alex/bmnroot_dev/bmnroot/uni_db",
"/home/alex/bmnroot_dev/bmnroot/uni_db/db_classes",
"/home/alex/bmnroot_dev/bmnroot/dch",
"/opt/fairsoft/install/include",
"/opt/fairsoft/install/include/root",
"/opt/fairsoft/install/include/TGeant3",
"/opt/fairsoft/install/include/root",
"/home/alex/bmnroot_dev/bmnroot/build/dch/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__DchDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class BmnDch;
class BmnDchPoint;
class __attribute__((annotate(R"ATTRDUMP(Factory for all DCH parameter containers)ATTRDUMP"))) BmnDchContFact;
class __attribute__((annotate(R"ATTRDUMP(Class for DCH)ATTRDUMP"))) BmnDchGeo;
class BmnDchGeoPar;
class __attribute__((annotate("$clingAutoload$ScalarD.h")))  ScalarD;
class __attribute__((annotate("$clingAutoload$ScalarI.h")))  ScalarI;
class __attribute__((annotate("$clingAutoload$ScalarUI.h")))  ScalarUI;
class __attribute__((annotate(R"ATTRDUMP(Dch plane of hits)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$DchHitPlane.h")))  DchHitPlane;
class __attribute__((annotate(R"ATTRDUMP(Dch Track Candidate)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$DchTrackCand.h")))  DchTrackCand;
class BmnDchHitProducer;
class BmnDchHitProducerTmp;
class BmnDchHitProducer_exp;
class __attribute__((annotate(R"ATTRDUMP(Dch Track Manager)ATTRDUMP"))) DchTrackManager;
class __attribute__((annotate("$clingAutoload$BmnDchTrack.h")))  BmnDchTrack;
class BmnDchTrackFinder;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__DchDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
//------------------------------------------------------------------------------------------------------------------------
// -------------------------------------------------------------------------
// -----                         BmnDch header file                    -----
// -------------------------------------------------------------------------

/**  DCH.h
 **
 ** Defines the active detector DCH. Constructs the geometry and
 ** registers MCPoints.
 **/



#ifndef BMNDCH_H
#define BMNDCH_H


#include "TClonesArray.h"
#include "TLorentzVector.h"
#include "TVector3.h"
#include "FairDetector.h"
#include "TGeoMedium.h"
#include "TString.h"
#include <map>
using namespace std;

class BmnDchPoint;
class FairVolume;

//------------------------------------------------------------------------------------------------------------------------
class BmnDch : public FairDetector
{

public:

   	// *@param name    detector name
   	// *@param active  sensitivity flag
  	BmnDch(const char* name, Bool_t active);

	BmnDch();
	virtual ~BmnDch();

	// Defines the action to be taken when a step is inside the
	// active volume. Creates BmnDchPoints and adds them to the collection.
	// @param vol  Pointer to the active volume
        virtual Bool_t  ProcessHits(FairVolume* vol = 0);

   	// If verbosity level is set, print hit collection at the
   	// end of the event and resets it afterwards.
  	virtual void EndOfEvent();

   	// Registers the hit collection in the ROOT manager.
  	virtual void Register();

  	// Accessor to the hit collection 
  	virtual TClonesArray* GetCollection(Int_t iColl) const;

   	// Screen output of hit collection.
	virtual void Print() const;

   	// Clears the hit collection
	virtual void Reset();

	// *@param cl1     Origin
	// *@param cl2     Target
	// *@param offset  Index offset
 	virtual void CopyClones(TClonesArray* cl1, TClonesArray* cl2, Int_t offset);

	// Constructs the DCH geometry
 	virtual void ConstructGeometry();
    // Construct the geometry from an ASCII geometry file
    virtual void ConstructAsciiGeometry();
    // Construct the geometry from a GDML geometry file
    virtual void ConstructGDMLGeometry();
    void ExpandNodeForGdml(TGeoNode* node);
    map<TString, TGeoMedium*> fFixedMedia; // List of media "repaired" after importing GMDL
  
    // Check whether a volume is sensitive.
    // The decision is based on the volume name. Only used in case
    // of GDML and ROOT geometry.
    // @param name    Volume name
    // @value         kTRUE if volume is sensitive, else kFALSE
    virtual Bool_t CheckIfSensitive(std::string name);
 
    //static Int_t GetWheel(Int_t uid){ return ((uid-1) >>3); };  //lsp  [0-1] == [inner,outer]
    //static Int_t GetProj(Int_t uid){ return ((uid-1) & 6)>>1; }; //lsp [0-3] == [x,y,u,v] 
    //static Int_t GetGasGap(Int_t uid){ return ((uid-1) & 0x0001); }; //lsp [0-1] == [inner,outer] 
  
private:

	// Track information to be stored until the track leaves the active volume.
  	Int_t          fTrackID;           //!  track index
  	Int_t          fVolumeID;          //!  volume id
  	TVector3       fPos;               //!  position
  	TVector3       fPosLocal;          //!  position local to gas chamber
  	TLorentzVector fMom;               //!  momentum
  	Double32_t     fTime;              //!  time
  	Double32_t     fLength;            //!  length
  	Double32_t     fELoss;             //!  energy loss
  	Int_t	       fIsPrimary; 	   //! is track primary?	
  	Double_t       fCharge;		   //! track charge
  	Double_t       fRadius;		   //! hit radius
  	Int_t          fPdgId;             //! pdg id of particle
  	Int_t          fwheel;
  	TVector3 fPosIn;             //!  entry position in global frame                                                                    
  	TVector3 fPosOut;            //!  exit position in global frame 
	                                                                    
    TVector3 fPosInTmp;             //!  entry position in global frame
	Int_t    fTrackIDTmp;           //!  track index
	Int_t fwheelTmp;

	Int_t fPosIndex;                   //!
  	TClonesArray* fPointCollection;      //! Hit collection

	int DistAndPoints(TVector3 p3, TVector3 p4, TVector3& pa, TVector3& pb);
        TVector3 GlobalToLocal(TVector3& global);
        TVector3 LocalToGlobal(TVector3& local);
        
	// Adds a BmnDchPoint to the HitCollection
  	BmnDchPoint* AddHit(Int_t trackID, Int_t detID, TVector3 pos, Double_t radius, TVector3 mom, Double_t time, 
  	Double_t length, Double_t eLoss, Int_t isPrimary, Double_t charge, Int_t fPdgId, TVector3 trackPos); 
 
	// Resets the private members for the track parameters
  	void ResetParameters();


  ClassDef(BmnDch,1) 

};

//------------------------------------------------------------------------------------------------------------------------
inline void BmnDch::ResetParameters() 
{
	fTrackID = -1;
	fVolumeID = fwheel = 0;
	fPos.SetXYZ(0.0, 0.0, 0.0);
	fMom.SetXYZM(0.0, 0.0, 0.0, 0.0);
	fTime = fLength = fELoss = 0;
	fPosIndex = 0;
       	
	fPosInTmp.SetXYZ(0.0, 0.0, 0.0);
        fTrackIDTmp=-1;
        fwheelTmp=-1;

};
//------------------------------------------------------------------------------------------------------------------------
#endif
//------------------------------------------------------------------------------------------------------------------------
// -------------------------------------------------------------------------
// -----                     BmnDchPoint header file                   -----
// -------------------------------------------------------------------------

#ifndef BMNDCHPOINT_H
#define BMNDCHPOINT_H


#include "TObject.h"
#include "TVector3.h"
#include "FairMCPoint.h"

using namespace std;

//------------------------------------------------------------------------------------------------------------------------
class BmnDchPoint : public FairMCPoint
{

public:

  /** Constructor with arguments
   *@param trackID  Index of MCTrack
   *@param detID    Detector ID
   *@param pos      Ccoordinates at entrance to active volume [cm]
   *@param mom      Momentum of track at entrance [GeV]
   *@param tof      Time since event start [ns]
   *@param length   Track length since creation [cm]
   *@param eLoss    Energy deposit [GeV]
   **/
  	BmnDchPoint(Int_t trackID, Int_t detID, TVector3 pos, Double_t radius, TVector3 mom, Double_t tof, 
  	    Double_t length, Double_t eLoss, Int_t isPrimary, Double_t charge, Int_t pdgId, TVector3 trackPos);
  	BmnDchPoint(const BmnDchPoint& point) { *this = point; };

  	BmnDchPoint();	
  	virtual ~BmnDchPoint();

	Double_t GetDistance(); // DCA between track and straw
	Double_t GetTrackX() { return fTX; }
	Double_t GetTrackY() { return fTY; }
	Double_t GetTrackZ() { return fTZ; }
	Double_t GetPdgId() { return fPdgId; }
	Double_t GetCharge() { return fCharge; }
	Double_t GetPhi() const { return fPhi; } //AZ
        Int_t GetIsPrimary() { return fIsPrimary; } 
	void SetPhi(Double_t phi) { fPhi = phi; } //AZ

	// Output to screen 
  	virtual void Print(const Option_t* opt) const;
protected:
    Int_t fIsPrimary;
    Double_t fCharge; 
    Double_t fRadius;
    Int_t fPdgId;
    Double_t fTX, fTY, fTZ; // track coordinates at DCA to straw
    Double_t fPhi; // tube rotation angle - AZ (interim solution)

  ClassDef(BmnDchPoint,2)

};

//------------------------------------------------------------------------------------------------------------------------
#endif





#ifndef BMNDCHCONTFACT_H
#define BMNDCHCONTFACT_H

#include "FairContFact.h"

class FairContainer;

class BmnDchContFact : public FairContFact {
private:
  void setAllContainers();
public:
  BmnDchContFact();
  ~BmnDchContFact() {}
  FairParSet* createContainer(FairContainer*);
  ClassDef( BmnDchContFact,0) // Factory for all DCH parameter containers
};

#endif  /* !BMNDCHCONTFACT_H */
#ifndef BMNDCHGEO_H
#define BMNDCHGEO_H

#include "FairGeoSet.h"

class  BmnDchGeo : public FairGeoSet {

protected:
  char modName[20];  // name of module
  char eleName[20];  // substring for elements in module

public:
  BmnDchGeo();
  ~BmnDchGeo() {}
  const char* getModuleName(Int_t);
  const char* getEleName(Int_t);

  ClassDef(BmnDchGeo,0) // Class for DCH
};

#endif  /* !BMNDCHGEO_H */
#ifndef BMNDCHGEOPAR_H
#define BMNDCHGEOPAR_H

#include "FairParGenericSet.h"
#include "TH1F.h"
#include "TObjArray.h"

class BmnDchGeoPar : public FairParGenericSet {
public:
  TObjArray            *fGeoSensNodes; // List of FairGeoNodes for sensitive volumes
  TObjArray            *fGeoPassNodes; // List of FairGeoNodes for sensitive volumes

  BmnDchGeoPar(const char* name="BmnDchGeoPar",
             const char* title="DCH Geometry Parameters",
             const char* context="TestDefaultContext");
  ~BmnDchGeoPar(void);
  void clear(void);
  void putParams(FairParamList*);
  Bool_t getParams(FairParamList*);
  TObjArray             *GetGeoSensitiveNodes(){return fGeoSensNodes;}
  TObjArray             *GetGeoPassiveNodes(){return fGeoPassNodes;}

  ClassDef(BmnDchGeoPar,1)
};

#endif /* !BMNDCHGEOPAR_H */
//------------------------------------------------------------------------------------------------------------------------
#ifndef __BMN_DCH_HIT_PRODUCER_H
#define __BMN_DCH_HIT_PRODUCER_H 1

#include <map>
#include <math.h>
#include <iostream>
#include "FairTask.h"
#include "TList.h"
#include "TVector3.h"
#include "TString.h"
#include "TH1D.h"
#include "TH2D.h"
#include <TF1.h>
//#include "TGraph2DErrors.h"
#include "TGraph2D.h"
#include <TGraph.h>
#include <TSpline.h>
#include "ScalarD.h"
#include "ScalarI.h"
#include "ScalarUI.h"
#include "DchHitPlane.h"
#include "DchTrackCand.h"
#include "DchTrackManagerSim.h"
//#include "DCHgeometryconstants_bmn.h"
#include "TMath.h"
#include "Math/Point3D.h"
#include "Math/Vector3D.h"
#include "TMatrixD.h"

using namespace ROOT::Math;

class TClonesArray;
class TObjectArray;
class BmnDchHit;

class TRandom;
class TH1D;
class TH2D;
class ScalarD;
class ScalarI;
class ScalarUI;
class DchHitPlane;

//------------------------------------------------------------------------------------------------------------------------
class BmnDchHitProducer : public FairTask
{

        //TFile *dchtrackcands;
        DchTrackManagerSim *dchTracks;
        DchTrackCand *dchTrCand1;
        DchTrackCand *dchTrCand2;
        TString runType;
        TString fInputBranchName,fInputBranchName2;
        TString fOutputTestFileName;
        TString fOutputHitsBranchName0,fOutputHitsBranchName;
        //TString fOutputHitsBranchName0[numChambers],fOutputHitsBranchName[numChambers];
        /** Input array of Dch Points **/
        TClonesArray* fBmnDchPointsArray;
        TClonesArray* fBmnDchPointsArray2;
        /** Input array of MC Tracks **/
        TClonesArray* fMCTracksArray;
        /** Output array of Dch Hits **/
        //TClonesArray* fBmnDchHitsArray;
        //DchHitPlane *dchhitplane[numChambers][numLayers];
        DchHitPlane *dchhitplane[numLayers];
        //DchTrackCand *trackcand;
        TTree *tree; 
        Bool_t fOnlyPrimary;
        //UShort_t fDchNum;
        Bool_t fDchUsed;
        UShort_t calibMethod;
        UInt_t eventNum; 
        UInt_t trCand; 
        UShort_t Iter;
        //Double_t z3121,z4121,z4131;
        Double_t zCoeff1[2][2][2],zCoeff2[2][2][2];
        Double_t anglepar[numLayers][2];
        Double_t DCH1_ZlayerPos_global[numLayers],DCH2_ZlayerPos_global[numLayers];
        Double_t detXshift[numChambers],detYshift[numChambers];
  	TRandom		 *pRandom;
	TClonesArray	 *pHitCollection0[numChambers];
	TClonesArray	 *pHitCollection[numChambers];
	//TClonesArray			*pDchPoints;
	//TClonesArray			*pMCTracks;
	TList		 fList,gList,tList;	
	Bool_t		 fDoTest;
	//Bool_t		 useCalib;
        Bool_t           checkDch,fAngleCorrectionFill,checkGraphs;
	Double_t	 fRSigma, fRPhiSigma; // [cm] default 2mm in R, 200um in R-Phi

	TH1D		 *htOccup,  *htWireN, *htMCTime, *hX, *hY, *hZ, *hRadiusRange;
	TH2D		 *htXYlocal, *htRvsR, *hXYhit;
        TH2D             *hAngleVsWirepos[numLayers];	
        TH1D             *minDriftTime;
        TH1D             *minDriftTime1,*minDriftTime2;
        TH1D             *hOccup[numChambers];
        //TH1D             *xzAngle[numChambers],*yzAngle[numChambers];
	TH1D		 *htGasDrift,*htGasDriftA, *htTime, *htTimeA, *htPerp, *htPerpA;
	TH1D		 *hResolX, *hResolY, *hResolR, *hResolU, *hResolV, *hMinDriftTime, *hMinDriftTime_read, *hDCA, *hLength;
	TGraph2D	 *hXYZcombhits,*hXYZpoints;
        TF1              *fitrt,*fitdt;
        TH1D             *splinederivsmooth;
        //TGraph           *calib,*splinederiv;
        TGraph           *calib[2],*splinederiv;
        //TSpline5         *spline5,*spline5rt;
        TSpline5         *spline5,*spline5rt[2];
        TVector2         uOrt,vOrt;
        TMatrixD         C,C0;
	
	typedef multimap<Double_t, Int_t> 	occupMap;
	typedef occupMap::iterator 		occupIter;
	occupMap			fMapOccup;
        Bool_t          wireUsed[numLayers][numWiresPerLayer],planeUsed[numLayers];
        Double_t        zLayer[numChambers][numLayers],zLayerExtrap[numChambers][numLayers];
        Double_t        xyTolerance,radialRange;
        Double_t        ranmin[2],ranmax[2];// r-t calibration range
        Double_t        scaleSimExTDC[2];
	void		Rotate(UShort_t proj, Double_t x,Double_t y, Double_t& xRot, Double_t& yRot, Bool_t back=false);	
	Double_t	GetDriftLength(UShort_t proj, UShort_t gasgap, Double_t x, Double_t& wirePos);
        Double_t        GetDriftDist(FairMCPoint *dchPoint, UShort_t idch, UShort_t uidLocal, Double_t x, Double_t &wirePos);
	Double_t	GetTShift(Double_t driftLength, Double_t wirePos, Double_t R, Double_t&);
	Bool_t 		HitExist(Double_t delta);	
	Double_t	GetPhi(UShort_t proj);
	Int_t		WireID(UInt_t uid, Double_t wirePos, Double_t R);
        Double_t        wirePosition(UShort_t gasgap, UInt_t wirenum, UShort_t uidLocalproj);
        Double_t        rtCurve(const Double_t time, const UShort_t idch);
        UShort_t        PlanesTopology(UShort_t idch);
        void            ExtrapToDch(const Double_t x[],const Double_t y[],const Double_t zLayer[][numLayers], const UShort_t idch, const UShort_t ijk[], Int_t &jjgr2);
	
  	BmnDchHit* 	AddHit0(Int_t index, Int_t detID, const TVector3& posHit, const TVector3& posHitErr, Int_t trackIndex, Int_t pointIndex, Int_t flag, UInt_t dchlayer, UShort_t idch);
  	BmnDchHit* 	AddHit(Int_t index, Int_t detID, const TVector3& posHit, const TVector3& posHitErr, Int_t trackIndex, Int_t pointIndex, Int_t flag, UInt_t dchlayer, UShort_t idch);
  	//DchTrackCand* 	AddTrack(Int_t index, Int_t detID, const TVector3& posHit, const TVector3& posHitErr, Int_t trackIndex, Int_t pointIndex, Int_t flag, UInt_t dchlayer);

		
public:

  	//BmnDchHitProducer(UInt_t num, Int_t verbose = 1, Bool_t DoTest = false, TString runtype="run1", UShort_t iter=0);
  	BmnDchHitProducer(Int_t verbose = 1, Bool_t DoTest = false, TString runtype="run1");
  	~BmnDchHitProducer();

 	InitStatus	Init();
  	void 		Exec(Option_t* opt);
	void		Finish();

        void SetOnlyPrimary(Bool_t opt = kFALSE) { fOnlyPrimary = opt; }

	void		SetErrors(Double_t errR, Double_t errRphi){ fRSigma = errR; fRPhiSigma = errRphi; };
        void            InitDchParameters();
        void            BookHistograms();
        void            BookHistsAngleCorr();
        void            FitHistsAngleCorr();
        void            LRambiguity(UInt_t k, Double_t hittmp[2], Double_t hitx, Double_t driftdist, UInt_t hw, UShort_t &nhits);
        Double_t LineLineDCA(const Double_t x1, const Double_t y1, const Double_t z1, const Double_t dircosx1, const Double_t dircosy1, const Double_t dircosz1, const Double_t xst, const Double_t sty, const Double_t stz, const Double_t dircosstx, const Double_t dircossty, const Double_t dircosstz, Double_t &x2, Double_t &y2, Double_t &z2, Double_t &xdchwmin, Double_t  &ydchwmin, Double_t &zdchwmin, Double_t &length, Double_t &mu0, Double_t &lambda0);
        Double_t LineLength(const Double_t x1, const Double_t y1, const Double_t z1, const Double_t x2, const Double_t y2, const Double_t z2);
        Double_t        PointLineDistance(const Double_t x0, const Double_t y0, const Double_t z0, const Double_t x, const Double_t y, const Double_t z, const Double_t dircosx, const Double_t dircosy, const Double_t dircosz);
        void            RadialRange(FairMCPoint* dchPoint);
        void            HitFinder(UShort_t idch);
        void            CoordinateFinder(const Double_t y1,const Double_t x2,const Double_t k3,const Double_t q3,const Double_t k4,const Double_t q4,const UShort_t *ijk, Double_t x[],Double_t y[]);
        void            ReturnPointers(UInt_t ijk,UInt_t i,ScalarD* &hitX,ScalarI* &trackId, ScalarI* &detId,ScalarUI* &hitwire,ScalarD* &driftlen,ScalarD* &drifttim,ScalarI* &pointind);
        //void            rtCalibration();
        void            tdcInflexPoints(Double_t &inflX1,Double_t &inflX2);
        Double_t        SplineIntegral(const Double_t a, const Double_t b, const Int_t n);
        //void            rtCalibRead();
        void            rtCalibCorrection();
        void            MisAlignment(XYZPoint &xyzHit1,XYZPoint &xyzHit2,XYZPoint &xyzHit3,XYZPoint &xyzHit4,XYZPoint &xyzWire1,XYZPoint &xyzWire2,XYZPoint &xyzWire3,XYZPoint &xyzWire4);
        void            DchAlignment(XYZPoint &xyzHit1,XYZPoint &xyzHit2,XYZPoint &xyzHit3,XYZPoint &xyzHit4,XYZPoint &xyzWire1,XYZPoint &xyzWire2,XYZPoint &xyzWire3,XYZPoint &xyzWire4);
        static UShort_t GetProj(UShort_t uid){ return uid/2; }; //lsp [0-3] == [x,y,u,v]
        static UShort_t GetGasGap(UShort_t uid){ return uid%2; }; //lsp [0-1] == [inner,outer]
        UShort_t RunTypeToNumber(TString runType);
        //enum runtypes{run1=0,run2=1,run3=0};
        //runtypes current_run;

        static const Double_t cosPhi_45, sinPhi_45, cosPhi45, sinPhi45;
        static const Double_t Phi_45, Phi45, Phi90;
        static const Double_t sqrt2,tg3,tg4;
        static const Double_t clusdens_Ar,clusdens_CO2,clusmean,meanpath,meanpath_Ar,meanpath_CO2;
        static const Double_t gasDriftSpeed,wireDriftSpeed,driftTimeMax,WheelR_2;
        static const Double_t resolution;
        static const Double_t hitErr[3];
        static const UInt_t nintervals;
        static const TVector2 unitU,unitV;
  
ClassDef(BmnDchHitProducer,1); 
};
//------------------------------------------------------------------------------------------------------------------------
#endif
// Preliminary version of BmnDchHitProducerTmp

#ifndef BmnDchHitProducerTmp_H
#define BmnDchHitProducerTmp_H 1

#include <math.h>
#include <iostream>
#include <vector>
#include "TString.h"
#include "FairTask.h"
#include "CbmTofPoint.h"
#include "TClonesArray.h"
#include "BmnEnums.h"
#include "BmnDchDigit.h"

#include "CbmTofHit.h"

using namespace std;

class BmnDchHitProducerTmp : public FairTask {
public:

    /** Default constructor **/
    BmnDchHitProducerTmp(Int_t num);

    /** Destructor **/
    virtual ~BmnDchHitProducerTmp();

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
    
    BmnStatus ProcessPoints();
    BmnStatus ProcessDigits();


private:

    TString fInputMCBranchName;
    TString fInputDigiBranchName;

    /** Input array of DCH Points **/
    TClonesArray* fBmnDchPointsArray;
    /** Input array of DCH Digits **/
    TClonesArray* fBmnDchDigitsArray;

    /** Input array of MC Tracks **/
    TClonesArray* fMCTracksArray;

    /** Output array of DCH Hits **/
    TClonesArray* fBmnDchHitsArray;

    Bool_t fOnlyPrimary;
    TString fRunType; //"points" or "digits"
    Int_t fDchNum;

    ClassDef(BmnDchHitProducerTmp, 1);

};

#endif
//------------------------------------------------------------------------------------------------------------------------
#ifndef __BMN_DCH_HIT_PRODUCER_EXP_H
#define __BMN_DCH_HIT_PRODUCER_EXP_H 1

#include <map>
#include <math.h>
#include <iostream>
#include "FairTask.h"
#include "TList.h"
#include "TVector3.h"
#include "TString.h"
#include "TH1D.h"
#include "TH2D.h"
#include <TF1.h>
//#include "TGraph2DErrors.h"
#include "TGraph2D.h"
#include <TGraph.h>
#include <TSpline.h>
#include "ScalarD.h"
#include "ScalarI.h"
#include "ScalarUI.h"
#include "DchHitPlane.h"
#include "DchTrackCand.h"
#include "DchTrackManagerSim.h"
//#include "DCHgeometryconstants_bmn.h"
#include "TMath.h"
#include "Math/Point3D.h"
#include "Math/Vector3D.h"
#include "TMatrixD.h"

using namespace ROOT::Math;

class TClonesArray;
class TObjectArray;
class BmnDchHit;
class TRandom;
class TH1D;
class TH2D;
class ScalarD;
class ScalarI;
class ScalarUI;
class DchHitPlane;

//------------------------------------------------------------------------------------------------------------------------
class BmnDchHitProducer_exp : public FairTask
{

        //TFile *dchtrackcands;
        DchTrackManagerSim *dchTracks;
        DchTrackCand *dchTrCand1;
        DchTrackCand *dchTrCand2;
        TString runType;
        TString fInputBranchName,fInputBranchName2;
        TString fOutputTestFileName;
        TString fOutputHitsBranchName0,fOutputHitsBranchName;
        //TString fOutputHitsBranchName0[numChambers],fOutputHitsBranchName[numChambers];
        /** Input array of Dch Points **/
        TClonesArray* fBmnDchPointsArray;
        TClonesArray* fBmnDchPointsArray2;
        /** Input array of MC Tracks **/
        TClonesArray* fMCTracksArray;
        /** Output array of Dch Hits **/
        //TClonesArray* fBmnDchHitsArray;
        //DchHitPlane *dchhitplane[numChambers][numLayers];
        DchHitPlane *dchhitplane[numLayers];
        //DchTrackCand *trackcand;
        TTree *tree; 
        Bool_t fOnlyPrimary;
        //UShort_t fDchNum;
        Bool_t fDchUsed;
        UShort_t calibMethod;
        UInt_t eventNum; 
        UInt_t trCand; 
        UShort_t Iter;
        //Double_t z3121,z4121,z4131;
        Double_t zCoeff1[2][2][2],zCoeff2[2][2][2];
        Double_t anglepar[numLayers][2];
        Double_t DCH1_ZlayerPos_global[numLayers],DCH2_ZlayerPos_global[numLayers];
        Double_t detXshift[numChambers],detYshift[numChambers];
  	TRandom		 *pRandom;
	TClonesArray	 *pHitCollection0[numChambers];
	TClonesArray	 *pHitCollection[numChambers];
	//TClonesArray			*pDchPoints;
	//TClonesArray			*pMCTracks;
	TList		 fList,gList,tList;	
	Bool_t		 fDoTest;
	//Bool_t		 useCalib;
        Bool_t           checkDch,fAngleCorrectionFill,checkGraphs;
	Double_t	 fRSigma, fRPhiSigma; // [cm] default 2mm in R, 200um in R-Phi

	TH1D		 *htOccup,  *htWireN, *htMCTime, *hX, *hY, *hZ, *hRadiusRange;
	TH2D		 *htXYlocal, *htRvsR, *hXYhit;
        TH2D             *hAngleVsWirepos[numLayers];	
        TH1D             *minDriftTime;
        TH1D             *hOccup[numChambers];
        //TH1D             *xzAngle[numChambers],*yzAngle[numChambers];
	TH1D		 *htGasDrift,*htGasDriftA, *htTime, *htTimeA, *htPerp, *htPerpA;
	TH1D		 *hResolX, *hResolY, *hResolR, *hResolU, *hResolV, *hMinDriftTime, *hMinDriftTime_read, *hDCA, *hLength;
	TGraph2D	 *hXYZcombhits,*hXYZpoints;
        BmnDchHit        *dchCombHit;
        TF1              *fitrt,*fitdt;
        TH1D             *splinederivsmooth;
        TGraph           *calib,*splinederiv;
        TSpline5         *spline5,*spline5rt;
        TVector2         uOrt,vOrt;
        TMatrixD         C,C0;
	
	typedef multimap<Double_t, Int_t> 	occupMap;
	typedef occupMap::iterator 		occupIter;
	occupMap			fMapOccup;
        Bool_t          wireUsed[numLayers][numWiresPerLayer],planeUsed[numLayers];
        Double_t        zLayer[numChambers][numLayers],zLayerExtrap[numChambers][numLayers];
        Double_t        xyTolerance,radialRange;
        Double_t        ranmin,ranmax;// r-t calibration range
        Double_t        scaleSimExTDC;
	void		Rotate(UShort_t proj, Double_t x,Double_t y, Double_t& xRot, Double_t& yRot, Bool_t back=false);	
	Double_t	GetDriftLength(UShort_t proj, UShort_t gasgap, Double_t x, Double_t& wirePos);
        Double_t        GetDriftDist(FairMCPoint *dchPoint, UShort_t idch, UShort_t uidLocal, Double_t x, Double_t &wirePos);
	Double_t	GetTShift(Double_t driftLength, Double_t wirePos, Double_t R, Double_t&);
	Bool_t 		HitExist(Double_t delta);	
	Double_t	GetPhi(UShort_t proj);
	Int_t		WireID(UInt_t uid, Double_t wirePos, Double_t R);
        Double_t        wirePosition(UShort_t gasgap, UInt_t wirenum, UShort_t uidLocalproj);
        Double_t        rtCurve(Double_t time);
        UShort_t        PlanesTopology(UShort_t idch);
        void            ExtrapToDch(const Double_t x[],const Double_t y[],const Double_t zLayer[][numLayers], const UShort_t idch, const UShort_t ijk[], Int_t &jjgr2);
	
  	BmnDchHit* 	AddHit0(Int_t index, Int_t detID, const TVector3& posHit, const TVector3& posHitErr, Int_t trackIndex, Int_t pointIndex, Int_t flag, UInt_t dchlayer, UShort_t idch);
  	BmnDchHit* 	AddHit(Int_t index, Int_t detID, const TVector3& posHit, const TVector3& posHitErr, Int_t trackIndex, Int_t pointIndex, Int_t flag, UInt_t dchlayer, UShort_t idch);
  	//DchTrackCand* 	AddTrack(Int_t index, Int_t detID, const TVector3& posHit, const TVector3& posHitErr, Int_t trackIndex, Int_t pointIndex, Int_t flag, UInt_t dchlayer);

		
public:

  	//BmnDchHitProducer_exp(UInt_t num, Int_t verbose = 1, Bool_t DoTest = false, TString runtype="run1", UShort_t iter=0);
  	BmnDchHitProducer_exp(Int_t verbose = 1, Bool_t DoTest = false, TString runtype="run1");
  	~BmnDchHitProducer_exp();

 	InitStatus	InitDch();
  	void 		ExecDch(Option_t* opt);
	void		FinishDch();

        void SetOnlyPrimary(Bool_t opt = kFALSE) { fOnlyPrimary = opt; }

	void		SetErrors(Double_t errR, Double_t errRphi){ fRSigma = errR; fRPhiSigma = errRphi; };
        void            InitDchParameters();
        void            BookHistograms();
        void            BookHistsAngleCorr();
        void            FitHistsAngleCorr();
        void            LRambiguity(UInt_t k, Double_t hittmp[2], Double_t hitx, Double_t driftdist, UInt_t hw, UShort_t &nhits);
        Double_t LineLineDCA(const Double_t x1, const Double_t y1, const Double_t z1, const Double_t dircosx1, const Double_t dircosy1, const Double_t dircosz1, const Double_t xst, const Double_t sty, const Double_t stz, const Double_t dircosstx, const Double_t dircossty, const Double_t dircosstz, Double_t &x2, Double_t &y2, Double_t &z2, Double_t &xdchwmin, Double_t  &ydchwmin, Double_t &zdchwmin, Double_t &length, Double_t &mu0, Double_t &lambda0);
        Double_t LineLength(const Double_t x1, const Double_t y1, const Double_t z1, const Double_t x2, const Double_t y2, const Double_t z2);
        Double_t        PointLineDistance(const Double_t x0, const Double_t y0, const Double_t z0, const Double_t x, const Double_t y, const Double_t z, const Double_t dircosx, const Double_t dircosy, const Double_t dircosz);
        void            RadialRange(FairMCPoint* dchPoint);
        void            HitFinder(UShort_t idch);
        void            CoordinateFinder(const Double_t y1,const Double_t x2,const Double_t k3,const Double_t q3,const Double_t k4,const Double_t q4,const UShort_t *ijk, Double_t x[],Double_t y[]);
        void            ReturnPointers(UInt_t ijk,UInt_t i,ScalarD* &hitX,ScalarI* &trackId, ScalarI* &detId,ScalarUI* &hitwire,ScalarD* &driftlen,ScalarD* &drifttim,ScalarI* &pointind);
        void            rtCalibration();
        void            tdcInflexPoints(Double_t &inflX1,Double_t &inflX2);
        Double_t        SplineIntegral(const Double_t a, const Double_t b, const Int_t n);
        //void            rtCalibRead();
        void            rtCalibCorrection();
        void            MisAlignment(XYZPoint &xyzHit1,XYZPoint &xyzHit2,XYZPoint &xyzHit3,XYZPoint &xyzHit4,XYZPoint &xyzWire1,XYZPoint &xyzWire2,XYZPoint &xyzWire3,XYZPoint &xyzWire4);
        void            DchAlignment(XYZPoint &xyzHit1,XYZPoint &xyzHit2,XYZPoint &xyzHit3,XYZPoint &xyzHit4,XYZPoint &xyzWire1,XYZPoint &xyzWire2,XYZPoint &xyzWire3,XYZPoint &xyzWire4);
        static UShort_t GetProj(UShort_t uid){ return uid/2; }; //lsp [0-3] == [x,y,u,v]
        static UShort_t GetGasGap(UShort_t uid){ return uid%2; }; //lsp [0-1] == [inner,outer]
        UShort_t RunTypeToNumber(TString runType);
        //enum runtypes{run1=0,run2=1,run3=0};
        //runtypes current_run;

        static const Double_t cosPhi_45, sinPhi_45, cosPhi45, sinPhi45;
        static const Double_t Phi_45, Phi45, Phi90;
        static const Double_t sqrt2,tg3,tg4;
        static const Double_t clusdens_Ar,clusdens_CO2,clusmean,meanpath,meanpath_Ar,meanpath_CO2;
        static const Double_t gasDriftSpeed,wireDriftSpeed,driftTimeMax,WheelR_2;
        static const Double_t resolution;
        static const Double_t hitErr[3];
        static const UInt_t nintervals;
        static const TVector2 unitU,unitV;
  
ClassDef(BmnDchHitProducer_exp,1); 
};
//------------------------------------------------------------------------------------------------------------------------
#endif
#ifndef DCH1_TRACK_CAND_H
#define DCH1_TRACK_CAND_H

// *************************************************************************
// Author: Jan Fedorishin  e-mail: fedorisin@jinr.ru
//   
// Dch track candidate creation
//   
//
// Created: 26-05-2015
// Modified:
//
// *************************************************************************

//#include "TObject.h"
#include "TClonesArray.h"

#include "FairTask.h"
#include "Math/Point3D.h"
#include "ScalarD.h"

using namespace ROOT::Math;

//class DchTrackCand : public FairTask {
//class DchTrackCand : public TObject {
class DchTrackCand : public TNamed {


protected:

  UInt_t nEvents;

public:    
  TClonesArray  *fDchTrackCand;           //-> pointer to Dch track candidate
  //TClonesArray  *fDchTrackCand2;          //-> pointer to Dch track candidate event number
  //TClonesArray  *fDchTrackCand3;          //-> pointer to Dch track candidate number
  //TClonesArray  *fDchTrackCand4;          //-> pointer to Dch number of track candidates in event
  DchTrackCand();
  //DchTrackCand(const char *name, const char *title="DCH Task");
  ~DchTrackCand();

  Bool_t checkDTC;
  
  /*void SetDchNumberOfTracksInEvent(UInt_t trcand,UInt_t n); 
  UInt_t GetDchNumberOfTracksInEvent(UInt_t trcand); 
  void SetDchTrackCandNumber(UInt_t trcand, UInt_t n);
  UInt_t GetDchTrackCandNumber(UInt_t trcand);
  void SetDchTrackCandEventNumber(UInt_t trcand, UInt_t n);
  UInt_t GetDchTrackCandEventNumber(UInt_t trcand);
  void SetNumberOfEvents(UInt_t n);
  UInt_t GetNumberOfEvents();*/

//void SetDchTrackHits(UInt_t n, Double_t x0, Double_t y0, Double_t z0, Double_t tdc0, Double_t hitX1, Double_t hitY1, Double_t hitX1_2, Double_t hitY1_2, UShort_t ijk0, Double_t x1, Double_t y1, Double_t z1, Double_t tdc1, Double_t hitX2, Double_t hitY2, Double_t hitX2_2, Double_t hitY2_2, UShort_t ijk1, Double_t x2, Double_t y2, Double_t z2, Double_t tdc2, Double_t hitX3, Double_t hitY3, Double_t hitX3_2, Double_t hitY3_2, UShort_t ijk2, Double_t x3, Double_t y3, Double_t z3, Double_t tdc3, Double_t hitX4, Double_t hitY4, Double_t hitX4_2, Double_t hitY4_2, UShort_t ijk3);
//void SetDchTrackHits(UInt_t n, Double_t x0, Double_t y0, Double_t z0, Double_t tdc0, Double_t hitX1, Double_t hitY1, Double_t hitZ1, Double_t hitX1_2, Double_t hitY1_2, Double_t hitZ1_2, UShort_t ijk0, Double_t x1, Double_t y1, Double_t z1, Double_t tdc1, Double_t hitX2, Double_t hitY2, Double_t hitZ2, Double_t hitX2_2, Double_t hitY2_2, Double_t hitZ2_2, UShort_t ijk1, Double_t x2, Double_t y2, Double_t z2, Double_t tdc2, Double_t hitX3, Double_t hitY3, Double_t hitZ3, Double_t hitX3_2, Double_t hitY3_2, Double_t hitZ3_2, UShort_t ijk2, Double_t x3, Double_t y3, Double_t z3, Double_t tdc3, Double_t hitX4, Double_t hitY4, Double_t hitZ4, Double_t hitX4_2, Double_t hitY4_2, Double_t hitZ4_2, UShort_t ijk3) {
void SetDchTrackHits(const UInt_t n, const XYZPoint xyzHit1, const XYZPoint xyzWire1, const XYZPoint xyzWire1_2, const XYZPoint xyzHit2, const XYZPoint xyzWire2, const XYZPoint xyzWire2_2, const XYZPoint xyzHit3, const XYZPoint xyzWire3, const XYZPoint xyzWire3_2, const XYZPoint xyzHit4, const XYZPoint xyzWire4, const XYZPoint xyzWire4_2, ScalarD* drifttim[], const UShort_t ijk[]);
ClassDef(DchTrackCand,1)      // Dch Track Candidate

};

#endif
#ifndef DCH_TRACK_MANAGER_H
#define DCH_TRACK_MANAGER_H

// *************************************************************************
// Author: Jan Fedorishin  e-mail: fedorisin@jinr.ru
//   
// Dch track manager, creation and fitting of track in both DCH's
//   
//
// Created: 28-09-2015
// Modified:
//
// *************************************************************************

//#include "TObject.h"
#include "TClonesArray.h"
#include "TGraph2DErrors.h"
#include "TGraph.h"
#include "TVector2.h"
#include "TH1F.h"
#include "TH2F.h"
#include "TFile.h"
#include "TMatrix.h"
#include "TMatrixD.h"
#include "Math/Vector3D.h"

//#include "DCHgeometryconstants_bmn.h"
#include "DchTrackCand.h"
#include "FairTask.h"
#include "BmnNewFieldMap.h"

class DchTrackManager : public FairTask {

 BmnNewFieldMap* magfield; 
 //DchTrackCand *dchTrCand1;
 //DchTrackCand *dchTrCand2;
 //TFile *fdstread1;
 //TFile *fdstread2;
 TH1D* chi2linfit;
 TH2D* residVsTDCy;    
 TH2D* residVsTDCx;
 TH2D* residVsTDCu;
 TH2D* residVsTDCv;
 TH2D* residVsTDC;
 TH2D* ResidVsTDCy[2];    
 TH2D* ResidVsTDCx[2];
 TH2D* ResidVsTDCu[2];
 TH2D* ResidVsTDCv[2];
 TH2D* ResidVsTDC[2];
 TH1D* mDCAy[2];
 TH1D* mDCAx[2];
 TH1D* mDCAu[2];
 TH1D* mDCAv[2];
 TH1D* fDCAy[2];
 TH1D* fDCAx[2];
 TH1D* fDCAu[2];
 TH1D* fDCAv[2];
 //TH1D* trackAngleX;TH1D* trackAngleY;
 TH1D* trackAngleXaf;TH1D* trackAngleYaf;
 TH1D* trackAngleXbf1;TH1D* trackAngleYbf1;TH1D* trackAngleXbf2;TH1D* trackAngleYbf2;
 TH2D* trckAngX2vs1; TH2D* trckAngY2vs1; 
 TH1D *hDeltaX[2][4],*hDeltaY[2][4];
 TList vList; 
 //const static UInt_t nintervals; 
 //const Double_t ranmin;
 //const Double_t ranmax;
 Double_t resolution; 
 UInt_t nintervals; 
 UShort_t iter; 
 TString runType;

protected:

  //UInt_t nTrCand;
  //void SetDchTrackManagerNumber(UInt_t n);
  //UInt_t GetDchTrackManagerNumber();
  Double_t meanDeltaPhi;

public:    
  TClonesArray  *fDchTrackManager1;           //-> pointer to Dch1 track candidate
  TClonesArray  *fDchTrackManager2;           //-> pointer to Dch2 track candidate
  //DchTrackManager(const DchTrackCand *dchTrCand1,const DchTrackCand *dchTrCand2);
  DchTrackManager(TString runtype);
  ~DchTrackManager();

  Bool_t checkDTM;
  //static const Double_t resolution;
  static const UInt_t ncols;

  //void SetDchTrackHits(UInt_t n, Double_t x0, Double_t y0, Double_t z0, Double_t x3, Double_t y3, Double_t z3);
  void InitDch(const UShort_t Iter, const Double_t ranmin[], const Double_t ranmax[], const Double_t Resolution, const UInt_t Nintervals, BmnNewFieldMap *magField);
  Double_t MagFieldIntegral(const Double_t *parFitL);
  void HistoBookDch(const Double_t ranmin[], const Double_t ranmax[]);
  //void DchTrackCandReader(DchTrackCand* &dchTrCand1,DchTrackCand* &dchTrCand2);
  //void DchTrackCandReader(const UInt_t numevents);
  void DchTrackMerger(DchTrackCand *dchTrCand1,DchTrackCand *dchTrCand2,const TMatrixD C0, Double_t parFitL[], Int_t &fitErrorcode); 
  double Matrix(float* matArr, const UInt_t k, const UInt_t l);
  void DchLinearTrackFitter(TGraph2DErrors* dchtrgr, Double_t *parFitL, TH1D* &chi2linfit, Int_t &fitErrorcode); 
  //void FinishDch(UShort_t fDchNum,TGraph *calib[fDchNum-1]); 
  //void FinishDch(TGraph* calib,TH1D* &hResidRMSvsIter, UShort_t Iter, TString datatype); 
  void FinishDch(TGraph* calib[],TGraph *calibPlane[][4],TH1D* &hResidRMSvsIter,TH1D* &hResidRMSvsIter0,TH1D* &hResidRMSvsIter1,UShort_t Iter,TString datatype,UShort_t runNumber, TString outDirectory, Double_t &locAngleX, Double_t &locAngleY); 
  Double_t PointLineDistance(const Double_t x0, const Double_t y0, const Double_t z0, const Double_t x, const Double_t y, const Double_t z, const Double_t dircosx, const Double_t dircosy, const Double_t dircosz);
  void DchAlignmentData(const DchTrackCand *dchTrCand1, const DchTrackCand *dchTrCand2, TClonesArray* &fDchTrCand1Align, TClonesArray* &fDchTrCand2Align, UInt_t &eventNum1track, const TMatrixD C0, const UShort_t Iter, const XYZVector XYZ1, Double_t &sumDeltaPhi);  
  Bool_t TracksDirectionTest(const TMatrix dch1Mat,const TMatrix dch2Mat, const TMatrixD C0, const XYZVector XYZ1, Double_t &delPhi);
  UShort_t RunTypeToNumber(TString runType);
  void SetMeanDeltaPhi(Double_t meandelphi) {meanDeltaPhi = meandelphi;}
  void FillAngles(const TGraph2DErrors* dchtrgr, const Double_t *parFitL);
  
  ClassDef(DchTrackManager,1)      // Dch Track Manager 
  

};

#endif
#ifndef SCALARD_H
#define SCALARD_H

// *************************************************************************
// Author: Jan Fedorishin, e-mail: fedorisin@jinr.ru
//   
// scalar Double_t quantity
//   
//
// Created: 18-06-2013
// Modified:
//
// *************************************************************************

#include "TObject.h"

//#include "FairTask.h"

//class Scalar : public FairTask {
class ScalarD : public TObject {

protected:
 
  Double_t scalval; 

public:    

  ScalarD();
  //ScalarD(const char *name, const char *title="CPC Task");
  ~ScalarD();

  void SetSV(Double_t x);
  Double_t GetSV();
  ClassDef(ScalarD,1)     

};

#endif
#ifndef SCALARI_H
#define SCALARI_H

// *************************************************************************
// Author: Jan Fedorishin, e-mail: fedorisin@jinr.ru
//   
// scalar Int_t quantity
//   
//
// Created: 08-11-2013
// Modified:
//
// *************************************************************************

#include "TObject.h"

//#include "FairTask.h"

//class Scalar : public FairTask {
class ScalarI : public TObject {

protected:
 
  Int_t scalval; 

public:    

  ScalarI();
  //ScalarI(const char *name, const char *title="CPC Task");
  ~ScalarI();

  void SetSV(Int_t x);
  Int_t GetSV();
  ClassDef(ScalarI,1)     

};

#endif
#ifndef SCALARUI_H
#define SCALARUI_H

// *************************************************************************
// Author: Jan Fedorishin, e-mail: fedorisin@jinr.ru
//   
// scalar Int_t quantity
//   
//
// Created: 16-12-2013
// Modified:
//
// *************************************************************************

#include "TObject.h"

//#include "FairTask.h"

//class Scalar : public FairTask {
class ScalarUI : public TObject {

protected:
 
  UInt_t scalval; 

public:    

  ScalarUI();
  //ScalarI(const char *name, const char *title="CPC Task");
  ~ScalarUI();

  void SetSV(UInt_t x);
  UInt_t GetSV();
  ClassDef(ScalarUI,1)     

};

#endif
#ifndef DCH_HIT_PLANE_H
#define DCH_HIT_PLANE_H

// *************************************************************************
// Author: Jan Fedorishin, e-mail: fedorisin@jinr.ru
//   
// hit plane creation
//   
//
// Created: 07-11-2014
// Modified: 16-12-2014
//
// *************************************************************************

//#include "FairTask.h"
#include "TObject.h"
#include "ScalarD.h"
#include "ScalarI.h"
#include "ScalarUI.h"
#include "TClonesArray.h"
#include <TMath.h>
#include "DCHgeometryconstants_bmn.h"

//class DchHitPlane : public FairTask {
class DchHitPlane : public TObject {

protected:
  
  //UInt_t ijkl[numChambers][numLayers];  // number of drift chambers, number of planes in dch
  UInt_t ijkl[numLayers];  // numlayers = number of planes in dch

public:    

  TClonesArray  *fDchHitPlane1;      //! pointer to TClonesArray in Dch plane of hits
  TClonesArray  *fDchHitPlane01;      //! pointer to TClonesArray in Dch plane of hits
  TClonesArray  *fDchHitPlane2;      //! pointer to TClonesArray in Dch plane of hits
  TClonesArray  *fDchHitPlane4;      //! pointer to TClonesArray in Dch plane of hits
  TClonesArray  *fDchHitPlane5;      //! pointer to TClonesArray in Dch plane of hits
  TClonesArray  *fDchHitPlane6;      //! pointer to TClonesArray in Dch plane of hits
  TClonesArray  *fDchHitPlane7;      //! pointer to TClonesArray in Dch plane of hits
  TClonesArray  *fDchHitPlane8;      //! pointer to TClonesArray in Dch plane of hits
  DchHitPlane();
  ~DchHitPlane();

  //Bool_t checkxx; 

  void SetDchPlaneHit(Int_t l, Double_t x, Double_t y, Int_t m, Int_t ll, UInt_t kk, Double_t dl, Double_t tdc, Int_t jj);
  void SetDchPlaneHitsNumber(UInt_t lkji, UShort_t k);
  UInt_t GetDchPlaneHitsNumber(UShort_t k);
  ClassDef(DchHitPlane,1)      // Dch plane of hits

};

#endif
// @(#)bmnroot/dch:$Id$
// Author: Pavel Batyuk (VBLHEP) <pavel.batyuk@jinr.ru> 2017-01-21

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
// BmnDchTrackFinder                                                          //
//                                                                            //
// Implementation of an algorithm developed by                                // 
// N.Voytishin and V.Paltchik (LIT)                                           //
// to the BmnRoot software                                                    //
//                                                                            //
// The algorithm serves for searching for track segments                      //
// in the Drift Chambers of the BM@N experiment                               //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

#ifndef BMNDCHTRACKFINDER_H
#define BMNDCHTRACKFINDER_H 1

#include <fstream>

#include <TMath.h>
#include <TNamed.h>
#include <TString.h>
#include <TClonesArray.h>
#include <TVector2.h>
#include <Rtypes.h>
#include "FairTask.h"
#include "FairTrackParam.h"
#include "FairMCPoint.h"

#include "BmnDchDigit.h"
#include "BmnDchHit.h"
#include "BmnDchTrack.h"
#include "BmnMath.h"

using namespace std;
using namespace TMath;

class BmnDchTrackFinder : public FairTask {
public:

    BmnDchTrackFinder() {};
    BmnDchTrackFinder(Bool_t);
    virtual ~BmnDchTrackFinder();
    
    virtual InitStatus Init();

    virtual void Exec(Option_t* opt);

    virtual void Finish();
       
    void SetTransferFunction(TString name) {
        fTransferFunctionName = name;
    }
    
    struct PointPair
    {
    	Int_t idx1;
    	Int_t idx2;
    	PointPair(Int_t i1, Int_t i2){
    		idx1=i1;
    		idx2=i2;
    	}
    };
    struct Point
    {
    	Double_t x;
    	Double_t z;
    	Int_t number;
    	Int_t digiIdx;
    	Point(Double_t xP, Double_t zP, Int_t digiIdxP)
    	{
    		x=xP;
    		z=zP;
    		number=0;
    		digiIdx = digiIdxP;
    	}
    };

    typedef std::vector<Int_t>      Points;
    typedef std::vector<Point*>      Hits;
    struct Cluster
    {
    	vector<Int_t> hits;
    	Double_t xmin;
    	Double_t xmax;
    	Double_t ymin;
    	Double_t ymax;
    	Double_t parx[2];
    	Double_t pary[2];
    };

    struct Point3D
    {
    	Double_t x;
    	Double_t y;
    	Double_t z;
    	Int_t digiIdx;
    	Point3D(Double_t xP, Double_t yP, Double_t zP, Int_t digiIdxP)
    	{
    		x=xP;
    		y=yP;
    		z=zP;
    		digiIdx = digiIdxP;
    	}
    };
    struct RecoPoint3D
    {
    	Double_t x;
    	Double_t y;
    	Double_t z;
    	Int_t digiIdx;
    	Int_t lr;
    	RecoPoint3D(Double_t xP, Double_t yP, Double_t zP, Int_t digiIdxP, Int_t lrP)
    	{
    		x=xP;
    		y=yP;
    		z=zP;
    		digiIdx = digiIdxP;
    		lr = lrP;
    	}
    };
    struct RecoCluster
    {
    	Double_t xoz[2];
    	Double_t yoz[2];
    	Int_t nHits;
    	std::vector<RecoPoint3D*> hits;
    };
    struct Track
    {
    	Double_t xoz[2];
    	Double_t yoz[2];
    	//Int_t nHits;
    	std::vector<Point3D*> hits;
    };
    struct Point3DC
    {
    	Double_t x;
    	Double_t y;
    	Double_t z;
    	Int_t digiIdx1;
    	Int_t digiIdx2;
    	Point3DC(Double_t xP, Double_t yP, Double_t zP, Int_t digiIdxP1, Int_t digiIdxP2)
    	{
    		x=xP;
    		y=yP;
    		z=zP;
    		digiIdx1 = digiIdxP1;
    		digiIdx2 = digiIdxP2;
    	}
     Point3DC(){}
    };
    struct TrackC
    {
    	Double_t xoz[2];
    	Double_t yoz[2];
    	//Int_t nHits;
    	std::vector<Point3DC*> hits;
    };
    struct RecoPoint
    {
    	Double_t x;
    	Double_t y;
    	Double_t z;
    	Double_t driftTime;
    	Int_t plane;
    	Int_t wire;
    	RecoPoint(Double_t xp,Double_t yp,Double_t zp, Int_t planeP, Int_t wireP, Double_t driftTimeP)
    	{
    		x=xp;
    		y=yp;
    		z=zp;
    		plane=planeP;
    		wire=wireP;
    		driftTime=driftTimeP;
    	}
    };
     
private:
    Int_t N;
    Bool_t expData;
    UInt_t fEventNo; // event counter
    
    TString InputDigitsBranchName;
    TString tracksDch;
    
    TString fTransferFunctionName;
    
    TClonesArray* fBmnDchDigitsArray;
    TClonesArray* fDchTracks;    
    TClonesArray* fDchHits;    
    
    Int_t prev_wire;
    Int_t prev_time;
    
    Int_t nChambers; // dch1 or dch2
    Int_t nWires;    // corresponding to the found v(0), u(1), y(2), x(3)-pairs
    Int_t nLayers;   // a(0) or b(1)
    Int_t nSegmentsMax; // Max. number of found segments to store
    
    Double_t t_dc[5][16]; //[time interval][plane number]
    Double_t pol_par_dc[3][5][16]; //[polinom number][param number][plane number]
    Double_t scaling[16]; //[plane number]
    
    Double_t scale;  //scaling for transfer function coeffs
    
    Double_t rtRel[16][400];
    Double_t z_loc[8];   // z local xa->vb (cm)
    Double_t z_glob[16]; // z global dc 1 & dc 2 (cm)
    Double_t Z_dch1; //z coord in the middle of dch1	
    Double_t Z_dch2; //z coord in the middle of dch2
    Double_t Z_dch_mid; //z coord between the two chambers, this z is considered the global z for the matched dch-segment
    Double_t dZ_dch_mid; 
    Double_t dZ_dch;
    
    Double_t x1_sh; 
    Double_t x2_sh; 
    Double_t y1_sh;
    Double_t y2_sh;
    
    Double_t x1_slope_sh;
    Double_t y1_slope_sh; 
    Double_t x2_slope_sh;
    Double_t y2_slope_sh; 
    
    Bool_t* has7DC;
    
    Int_t nSegmentsToBeMatched;
    
    Double_t** x_global;
    Double_t** y_global;
    Double_t** Chi2;
        
    Double_t*** v;
    Double_t*** u;
    Double_t*** y;
    Double_t*** x;
    Double_t*** v_Single;
    Double_t*** u_Single;
    Double_t*** y_Single;
    Double_t*** x_Single;
    Double_t*** sigm_v;
    Double_t*** sigm_u;
    Double_t*** sigm_y;
    Double_t*** sigm_x;
    Double_t*** Sigm_v_single;
    Double_t*** Sigm_u_single;
    Double_t*** Sigm_y_single;
    Double_t*** Sigm_x_single;
    Double_t*** params;
    Double_t*** rh_segment;
    Double_t*** rh_sigm_segment;
    
    Int_t* nSegments;
    Int_t** pairs;
    Int_t** segment_size;
    Int_t*** singles;
    
    Double_t* x_mid; //x glob of matched segment in the z situated between the two DCH chambers
    Double_t* y_mid; //y glob of matched segment in the z situated between the two DCH chambers
    Double_t* aX; //x slope of the matched segment
    Double_t* aY; //y slope of the matched segment
    Double_t* imp; //reconstructed particle trajectory momentum 
    Double_t* leng; //the distance from z = 0 to the global point of the matched segment
    Double_t* Chi2_match; //chi2 of the matched seg

    std::vector<Int_t> planes[16];
    std::vector<BmnDchDigit*> digisDCH;
    std::vector<PointPair*> pairxa;
    std::vector<PointPair*> pairxb;
    std::vector<PointPair*> pairya;
    std::vector<PointPair*> pairyb;
    std::vector<PointPair*> pairua;
    std::vector<PointPair*> pairub;
    std::vector<PointPair*> pairva;
    std::vector<PointPair*> pairvb;
    std::vector<Int_t> excludedDidigs; // перевести на id хитов а не дигитов, тогда будет работать
    TClonesArray* fMCPointArray;
    TClonesArray* fMCTracks;
    TClonesArray* fBmnDchPointsArray;
	vector<Cluster*> aC;
	vector<Cluster*> bC;


    UChar_t  GetPlane(Double_t z);
    Double_t Distance(Double_t x1,Double_t y1,Double_t x2,Double_t y2,Double_t x0,Double_t y0);
    Double_t GetDistance(UChar_t plane, Double_t xD, Double_t yD, Int_t iWire);
    Short_t  GetClosestWireNumber(UChar_t plane, Double_t xD, Double_t yD, Double_t *dist); 
    Double_t  GetTime(Double_t* distance);
    Bool_t CheckPointGEO(Int_t plane, Double_t xD, Double_t yD, Double_t z);
    void ClustersPreparation();
    void ClustersPreparationRT();
    void RecoDCHCluster();
    Double_t  GetDDistance(Double_t time, Int_t plane);
    void GetCoordinatesWirePoint(UChar_t plane, Double_t xT, Double_t yT, Int_t iWire, Double_t* xW, Double_t* yW, Double_t ddist);
    void RotatePoint(Double_t xc, Double_t yc, Double_t x1, Double_t y1, Double_t* xW, Double_t* yW, Int_t angle);
    void GetBEPoints(Int_t idx1, Double_t* x1, Double_t* y1, Double_t* x2, Double_t* y2, Int_t lr);  
    void GetTrWPoints(Int_t idx1, Double_t xTr, Double_t yTr, Double_t* xr, Double_t* yr, Double_t xMC, Double_t yMC);
    void FillLR(Int_t idx1, Double_t xTr, Double_t yTr, Double_t xMC, Double_t yMC, Int_t global);
    void GetClusterHitsArray(Cluster* cluster, Int_t* ret);
    Bool_t FitItera(Int_t* clI, Double_t* parx, Double_t* pary, Double_t* parx1, Double_t* pary1, Double_t *zz11x, Double_t *zz11y, Bool_t fillHisto, FairMCPoint* pnt1, FairMCPoint* pnt2, Int_t sp, Double_t *chi2x, Double_t *chi2y);
    Bool_t FitIteraGlobal(Int_t* clIa, Int_t* clIb, Double_t* parx, Double_t* pary, Double_t* parx1, Double_t* pary1, Double_t *zz11x, Double_t *zz11y, Double_t *zz21x, Double_t *zz21y,Bool_t fillHisto, FairMCPoint* pnt1, FairMCPoint* pnt2, Int_t sp, Double_t *chi2x, Double_t *chi2y);
    void LRQA(Int_t* clI, Double_t* parx, Double_t* pary, Double_t *zz11x, Double_t *zz11y, FairMCPoint* pnt1, FairMCPoint* pnt2, Int_t global);
    Double_t GetCoordinateByTwoPoints(Double_t x1, Double_t x2, Double_t z1, Double_t z2, Double_t zc);
    Bool_t CombInitial(Int_t* clIa, Double_t* zz, Double_t* parx, Double_t *pary);
    void InitialHisto(Int_t* clI, Double_t* parx, Double_t* pary, Double_t *zz11x, Double_t *zz11y, FairMCPoint* pnt1, FairMCPoint* pnt2);
    Int_t  GetRTIndex(Double_t time);
    Double_t LinePropagation(Double_t x1, Double_t y1, Double_t x2, Double_t y2, Double_t xs);
    void GetWirePairBE(Int_t idx1, Int_t idx2, Double_t* x1b, Double_t* x1e, Double_t* y1b, Double_t* y1e, Double_t* x2b, Double_t* x2e, Double_t* y2b, Double_t* y2e, Int_t lr);


    Bool_t PrepareDigitsFromMC();
    void CreateDchTrack();
    void CreateDchTrack(Int_t, Double_t*, Double_t**, Int_t*);

    void SelectLongestAndBestSegments(Int_t, Int_t*, Double_t**, Double_t*);
    void CompareDaDb(Double_t, Double_t&);
    void CompareDaDb(Double_t, Double_t&, Double_t&);
    void PrepareArraysToProcessEvent();
    Bool_t FitDchSegments(Int_t, Int_t*, Double_t**, Double_t**, Double_t**, Double_t*, Double_t*, Double_t*);
    Double_t CalculateResidual(Int_t, Int_t, Double_t**, Double_t**);
    Int_t BuildUVSegments(Int_t, Int_t, Int_t, Int_t, Int_t, Int_t, Int_t, Int_t, Int_t,
        Double_t**, Double_t**, Double_t**, Double_t**,
        Double_t**, Double_t**, Double_t**, Double_t**,
        Double_t**, Double_t**, Double_t**,
        Double_t**, Double_t**, Double_t**);
    Int_t BuildXYSegments(Int_t, Int_t, Int_t, Int_t, Int_t, Int_t, Int_t, Int_t, Int_t,
        Double_t**, Double_t**, Double_t**, Double_t**,
        Double_t**, Double_t**, Double_t**, Double_t**,
        Double_t**, Double_t**, Double_t**,
        Double_t**, Double_t**, Double_t**);
    Int_t Reconstruction(Int_t, TString, Int_t, Int_t, Int_t,
        Double_t*, Double_t*, Double_t*, Double_t*,
        Bool_t*, Bool_t*,
        Double_t**, Double_t**);
    Int_t ReconstructionSingle(Int_t, TString, TString, Int_t, Int_t,
        Double_t*, Double_t*, Bool_t*,
        Double_t**, Double_t**);
    void SegmentsToBeMatched();
         
    ClassDef(BmnDchTrackFinder, 1)
};

#endif
#ifndef BMNDCHTRACK_H
#define BMNDCHTRACK_H

#include "BmnTrack.h"

class BmnDchTrack : public BmnTrack {
public:

    /** Default constructor **/
    BmnDchTrack();

    /** Destructor **/
    virtual ~BmnDchTrack();
    //AM 7.08.2017
    vector<Double_t> xozParameters;
    vector<Double_t> yozParameters;
    double covXOZ[3][3]; // XOZ covariance matrix
    double covYOZ[2][2]; // YOZ covariance matrix
    Double_t xrms;
    Double_t yrms;

private:


    ClassDef(BmnDchTrack, 1);

};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"BmnDch", payloadCode, "@",
"BmnDchContFact", payloadCode, "@",
"BmnDchGeo", payloadCode, "@",
"BmnDchGeoPar", payloadCode, "@",
"BmnDchHitProducer", payloadCode, "@",
"BmnDchHitProducerTmp", payloadCode, "@",
"BmnDchHitProducer_exp", payloadCode, "@",
"BmnDchPoint", payloadCode, "@",
"BmnDchTrack", payloadCode, "@",
"BmnDchTrackFinder", payloadCode, "@",
"DchHitPlane", payloadCode, "@",
"DchTrackCand", payloadCode, "@",
"DchTrackManager", payloadCode, "@",
"ScalarD", payloadCode, "@",
"ScalarI", payloadCode, "@",
"ScalarUI", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__DchDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__DchDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__DchDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__DchDict() {
  TriggerDictionaryInitialization_G__DchDict_Impl();
}
