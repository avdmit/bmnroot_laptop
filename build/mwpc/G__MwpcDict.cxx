// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIalexdIbmnroot_devdIbmnrootdIbuilddImwpcdIG__MwpcDict

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
#include "BmnMwpcHitProducer.h"
#include "BmnMwpcHitFinder.h"
#include "BmnMwpcGeometry.h"
#include "BmnMwpcGeometrySRC.h"
#include "BmnMwpcTrack.h"
#include "BmnMwpcTrackFinder.h"
#include "BmnMwpc.h"
#include "BmnMwpcContFact.h"
#include "BmnMwpcGeo.h"
#include "BmnMwpcGeoPar.h"
#include "BmnMwpcPoint.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_BmnMwpcHitProducer(void *p);
   static void deleteArray_BmnMwpcHitProducer(void *p);
   static void destruct_BmnMwpcHitProducer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMwpcHitProducer*)
   {
      ::BmnMwpcHitProducer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnMwpcHitProducer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnMwpcHitProducer", ::BmnMwpcHitProducer::Class_Version(), "", 25,
                  typeid(::BmnMwpcHitProducer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnMwpcHitProducer::Dictionary, isa_proxy, 4,
                  sizeof(::BmnMwpcHitProducer) );
      instance.SetDelete(&delete_BmnMwpcHitProducer);
      instance.SetDeleteArray(&deleteArray_BmnMwpcHitProducer);
      instance.SetDestructor(&destruct_BmnMwpcHitProducer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMwpcHitProducer*)
   {
      return GenerateInitInstanceLocal((::BmnMwpcHitProducer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMwpcHitProducer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnMwpcGeometry(void *p = 0);
   static void *newArray_BmnMwpcGeometry(Long_t size, void *p);
   static void delete_BmnMwpcGeometry(void *p);
   static void deleteArray_BmnMwpcGeometry(void *p);
   static void destruct_BmnMwpcGeometry(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMwpcGeometry*)
   {
      ::BmnMwpcGeometry *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnMwpcGeometry >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnMwpcGeometry", ::BmnMwpcGeometry::Class_Version(), "BmnMwpcGeometry.h", 24,
                  typeid(::BmnMwpcGeometry), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnMwpcGeometry::Dictionary, isa_proxy, 4,
                  sizeof(::BmnMwpcGeometry) );
      instance.SetNew(&new_BmnMwpcGeometry);
      instance.SetNewArray(&newArray_BmnMwpcGeometry);
      instance.SetDelete(&delete_BmnMwpcGeometry);
      instance.SetDeleteArray(&deleteArray_BmnMwpcGeometry);
      instance.SetDestructor(&destruct_BmnMwpcGeometry);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMwpcGeometry*)
   {
      return GenerateInitInstanceLocal((::BmnMwpcGeometry*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMwpcGeometry*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnMwpcHitFinder(void *p = 0);
   static void *newArray_BmnMwpcHitFinder(Long_t size, void *p);
   static void delete_BmnMwpcHitFinder(void *p);
   static void deleteArray_BmnMwpcHitFinder(void *p);
   static void destruct_BmnMwpcHitFinder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMwpcHitFinder*)
   {
      ::BmnMwpcHitFinder *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnMwpcHitFinder >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnMwpcHitFinder", ::BmnMwpcHitFinder::Class_Version(), "", 120,
                  typeid(::BmnMwpcHitFinder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnMwpcHitFinder::Dictionary, isa_proxy, 4,
                  sizeof(::BmnMwpcHitFinder) );
      instance.SetNew(&new_BmnMwpcHitFinder);
      instance.SetNewArray(&newArray_BmnMwpcHitFinder);
      instance.SetDelete(&delete_BmnMwpcHitFinder);
      instance.SetDeleteArray(&deleteArray_BmnMwpcHitFinder);
      instance.SetDestructor(&destruct_BmnMwpcHitFinder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMwpcHitFinder*)
   {
      return GenerateInitInstanceLocal((::BmnMwpcHitFinder*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMwpcHitFinder*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnMwpcGeometrySRC(void *p = 0);
   static void *newArray_BmnMwpcGeometrySRC(Long_t size, void *p);
   static void delete_BmnMwpcGeometrySRC(void *p);
   static void deleteArray_BmnMwpcGeometrySRC(void *p);
   static void destruct_BmnMwpcGeometrySRC(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMwpcGeometrySRC*)
   {
      ::BmnMwpcGeometrySRC *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnMwpcGeometrySRC >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnMwpcGeometrySRC", ::BmnMwpcGeometrySRC::Class_Version(), "", 440,
                  typeid(::BmnMwpcGeometrySRC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnMwpcGeometrySRC::Dictionary, isa_proxy, 4,
                  sizeof(::BmnMwpcGeometrySRC) );
      instance.SetNew(&new_BmnMwpcGeometrySRC);
      instance.SetNewArray(&newArray_BmnMwpcGeometrySRC);
      instance.SetDelete(&delete_BmnMwpcGeometrySRC);
      instance.SetDeleteArray(&deleteArray_BmnMwpcGeometrySRC);
      instance.SetDestructor(&destruct_BmnMwpcGeometrySRC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMwpcGeometrySRC*)
   {
      return GenerateInitInstanceLocal((::BmnMwpcGeometrySRC*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMwpcGeometrySRC*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnMwpcTrack(void *p = 0);
   static void *newArray_BmnMwpcTrack(Long_t size, void *p);
   static void delete_BmnMwpcTrack(void *p);
   static void deleteArray_BmnMwpcTrack(void *p);
   static void destruct_BmnMwpcTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMwpcTrack*)
   {
      ::BmnMwpcTrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnMwpcTrack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnMwpcTrack", ::BmnMwpcTrack::Class_Version(), "", 533,
                  typeid(::BmnMwpcTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnMwpcTrack::Dictionary, isa_proxy, 4,
                  sizeof(::BmnMwpcTrack) );
      instance.SetNew(&new_BmnMwpcTrack);
      instance.SetNewArray(&newArray_BmnMwpcTrack);
      instance.SetDelete(&delete_BmnMwpcTrack);
      instance.SetDeleteArray(&deleteArray_BmnMwpcTrack);
      instance.SetDestructor(&destruct_BmnMwpcTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMwpcTrack*)
   {
      return GenerateInitInstanceLocal((::BmnMwpcTrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMwpcTrack*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnMwpcTrackFinder(void *p = 0);
   static void *newArray_BmnMwpcTrackFinder(Long_t size, void *p);
   static void delete_BmnMwpcTrackFinder(void *p);
   static void deleteArray_BmnMwpcTrackFinder(void *p);
   static void destruct_BmnMwpcTrackFinder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMwpcTrackFinder*)
   {
      ::BmnMwpcTrackFinder *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnMwpcTrackFinder >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnMwpcTrackFinder", ::BmnMwpcTrackFinder::Class_Version(), "", 581,
                  typeid(::BmnMwpcTrackFinder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnMwpcTrackFinder::Dictionary, isa_proxy, 4,
                  sizeof(::BmnMwpcTrackFinder) );
      instance.SetNew(&new_BmnMwpcTrackFinder);
      instance.SetNewArray(&newArray_BmnMwpcTrackFinder);
      instance.SetDelete(&delete_BmnMwpcTrackFinder);
      instance.SetDeleteArray(&deleteArray_BmnMwpcTrackFinder);
      instance.SetDestructor(&destruct_BmnMwpcTrackFinder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMwpcTrackFinder*)
   {
      return GenerateInitInstanceLocal((::BmnMwpcTrackFinder*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMwpcTrackFinder*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnMwpc(void *p = 0);
   static void *newArray_BmnMwpc(Long_t size, void *p);
   static void delete_BmnMwpc(void *p);
   static void deleteArray_BmnMwpc(void *p);
   static void destruct_BmnMwpc(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMwpc*)
   {
      ::BmnMwpc *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnMwpc >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnMwpc", ::BmnMwpc::Class_Version(), "", 649,
                  typeid(::BmnMwpc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnMwpc::Dictionary, isa_proxy, 4,
                  sizeof(::BmnMwpc) );
      instance.SetNew(&new_BmnMwpc);
      instance.SetNewArray(&newArray_BmnMwpc);
      instance.SetDelete(&delete_BmnMwpc);
      instance.SetDeleteArray(&deleteArray_BmnMwpc);
      instance.SetDestructor(&destruct_BmnMwpc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMwpc*)
   {
      return GenerateInitInstanceLocal((::BmnMwpc*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMwpc*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnMwpcContFact(void *p = 0);
   static void *newArray_BmnMwpcContFact(Long_t size, void *p);
   static void delete_BmnMwpcContFact(void *p);
   static void deleteArray_BmnMwpcContFact(void *p);
   static void destruct_BmnMwpcContFact(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMwpcContFact*)
   {
      ::BmnMwpcContFact *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnMwpcContFact >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnMwpcContFact", ::BmnMwpcContFact::Class_Version(), "", 774,
                  typeid(::BmnMwpcContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnMwpcContFact::Dictionary, isa_proxy, 4,
                  sizeof(::BmnMwpcContFact) );
      instance.SetNew(&new_BmnMwpcContFact);
      instance.SetNewArray(&newArray_BmnMwpcContFact);
      instance.SetDelete(&delete_BmnMwpcContFact);
      instance.SetDeleteArray(&deleteArray_BmnMwpcContFact);
      instance.SetDestructor(&destruct_BmnMwpcContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMwpcContFact*)
   {
      return GenerateInitInstanceLocal((::BmnMwpcContFact*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMwpcContFact*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnMwpcGeo(void *p = 0);
   static void *newArray_BmnMwpcGeo(Long_t size, void *p);
   static void delete_BmnMwpcGeo(void *p);
   static void deleteArray_BmnMwpcGeo(void *p);
   static void destruct_BmnMwpcGeo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMwpcGeo*)
   {
      ::BmnMwpcGeo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnMwpcGeo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnMwpcGeo", ::BmnMwpcGeo::Class_Version(), "", 791,
                  typeid(::BmnMwpcGeo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnMwpcGeo::Dictionary, isa_proxy, 4,
                  sizeof(::BmnMwpcGeo) );
      instance.SetNew(&new_BmnMwpcGeo);
      instance.SetNewArray(&newArray_BmnMwpcGeo);
      instance.SetDelete(&delete_BmnMwpcGeo);
      instance.SetDeleteArray(&deleteArray_BmnMwpcGeo);
      instance.SetDestructor(&destruct_BmnMwpcGeo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMwpcGeo*)
   {
      return GenerateInitInstanceLocal((::BmnMwpcGeo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMwpcGeo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnMwpcGeoPar(void *p = 0);
   static void *newArray_BmnMwpcGeoPar(Long_t size, void *p);
   static void delete_BmnMwpcGeoPar(void *p);
   static void deleteArray_BmnMwpcGeoPar(void *p);
   static void destruct_BmnMwpcGeoPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMwpcGeoPar*)
   {
      ::BmnMwpcGeoPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnMwpcGeoPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnMwpcGeoPar", ::BmnMwpcGeoPar::Class_Version(), "", 815,
                  typeid(::BmnMwpcGeoPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnMwpcGeoPar::Dictionary, isa_proxy, 4,
                  sizeof(::BmnMwpcGeoPar) );
      instance.SetNew(&new_BmnMwpcGeoPar);
      instance.SetNewArray(&newArray_BmnMwpcGeoPar);
      instance.SetDelete(&delete_BmnMwpcGeoPar);
      instance.SetDeleteArray(&deleteArray_BmnMwpcGeoPar);
      instance.SetDestructor(&destruct_BmnMwpcGeoPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMwpcGeoPar*)
   {
      return GenerateInitInstanceLocal((::BmnMwpcGeoPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMwpcGeoPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnMwpcPoint(void *p = 0);
   static void *newArray_BmnMwpcPoint(Long_t size, void *p);
   static void delete_BmnMwpcPoint(void *p);
   static void deleteArray_BmnMwpcPoint(void *p);
   static void destruct_BmnMwpcPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMwpcPoint*)
   {
      ::BmnMwpcPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnMwpcPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnMwpcPoint", ::BmnMwpcPoint::Class_Version(), "", 851,
                  typeid(::BmnMwpcPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnMwpcPoint::Dictionary, isa_proxy, 4,
                  sizeof(::BmnMwpcPoint) );
      instance.SetNew(&new_BmnMwpcPoint);
      instance.SetNewArray(&newArray_BmnMwpcPoint);
      instance.SetDelete(&delete_BmnMwpcPoint);
      instance.SetDeleteArray(&deleteArray_BmnMwpcPoint);
      instance.SetDestructor(&destruct_BmnMwpcPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMwpcPoint*)
   {
      return GenerateInitInstanceLocal((::BmnMwpcPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMwpcPoint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnMwpcHitProducer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnMwpcHitProducer::Class_Name()
{
   return "BmnMwpcHitProducer";
}

//______________________________________________________________________________
const char *BmnMwpcHitProducer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcHitProducer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnMwpcHitProducer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcHitProducer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnMwpcHitProducer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcHitProducer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnMwpcHitProducer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcHitProducer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnMwpcGeometry::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnMwpcGeometry::Class_Name()
{
   return "BmnMwpcGeometry";
}

//______________________________________________________________________________
const char *BmnMwpcGeometry::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcGeometry*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnMwpcGeometry::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcGeometry*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnMwpcGeometry::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcGeometry*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnMwpcGeometry::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcGeometry*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnMwpcHitFinder::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnMwpcHitFinder::Class_Name()
{
   return "BmnMwpcHitFinder";
}

//______________________________________________________________________________
const char *BmnMwpcHitFinder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcHitFinder*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnMwpcHitFinder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcHitFinder*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnMwpcHitFinder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcHitFinder*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnMwpcHitFinder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcHitFinder*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnMwpcGeometrySRC::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnMwpcGeometrySRC::Class_Name()
{
   return "BmnMwpcGeometrySRC";
}

//______________________________________________________________________________
const char *BmnMwpcGeometrySRC::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcGeometrySRC*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnMwpcGeometrySRC::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcGeometrySRC*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnMwpcGeometrySRC::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcGeometrySRC*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnMwpcGeometrySRC::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcGeometrySRC*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnMwpcTrack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnMwpcTrack::Class_Name()
{
   return "BmnMwpcTrack";
}

//______________________________________________________________________________
const char *BmnMwpcTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcTrack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnMwpcTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcTrack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnMwpcTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcTrack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnMwpcTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcTrack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnMwpcTrackFinder::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnMwpcTrackFinder::Class_Name()
{
   return "BmnMwpcTrackFinder";
}

//______________________________________________________________________________
const char *BmnMwpcTrackFinder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcTrackFinder*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnMwpcTrackFinder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcTrackFinder*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnMwpcTrackFinder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcTrackFinder*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnMwpcTrackFinder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcTrackFinder*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnMwpc::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnMwpc::Class_Name()
{
   return "BmnMwpc";
}

//______________________________________________________________________________
const char *BmnMwpc::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpc*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnMwpc::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpc*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnMwpc::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpc*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnMwpc::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpc*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnMwpcContFact::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnMwpcContFact::Class_Name()
{
   return "BmnMwpcContFact";
}

//______________________________________________________________________________
const char *BmnMwpcContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcContFact*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnMwpcContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcContFact*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnMwpcContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcContFact*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnMwpcContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcContFact*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnMwpcGeo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnMwpcGeo::Class_Name()
{
   return "BmnMwpcGeo";
}

//______________________________________________________________________________
const char *BmnMwpcGeo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcGeo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnMwpcGeo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcGeo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnMwpcGeo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcGeo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnMwpcGeo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcGeo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnMwpcGeoPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnMwpcGeoPar::Class_Name()
{
   return "BmnMwpcGeoPar";
}

//______________________________________________________________________________
const char *BmnMwpcGeoPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcGeoPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnMwpcGeoPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcGeoPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnMwpcGeoPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcGeoPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnMwpcGeoPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcGeoPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnMwpcPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnMwpcPoint::Class_Name()
{
   return "BmnMwpcPoint";
}

//______________________________________________________________________________
const char *BmnMwpcPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnMwpcPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnMwpcPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnMwpcPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnMwpcHitProducer::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnMwpcHitProducer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnMwpcHitProducer::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnMwpcHitProducer::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnMwpcHitProducer(void *p) {
      delete ((::BmnMwpcHitProducer*)p);
   }
   static void deleteArray_BmnMwpcHitProducer(void *p) {
      delete [] ((::BmnMwpcHitProducer*)p);
   }
   static void destruct_BmnMwpcHitProducer(void *p) {
      typedef ::BmnMwpcHitProducer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMwpcHitProducer

//______________________________________________________________________________
void BmnMwpcGeometry::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnMwpcGeometry.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnMwpcGeometry::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnMwpcGeometry::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnMwpcGeometry(void *p) {
      return  p ? new(p) ::BmnMwpcGeometry : new ::BmnMwpcGeometry;
   }
   static void *newArray_BmnMwpcGeometry(Long_t nElements, void *p) {
      return p ? new(p) ::BmnMwpcGeometry[nElements] : new ::BmnMwpcGeometry[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnMwpcGeometry(void *p) {
      delete ((::BmnMwpcGeometry*)p);
   }
   static void deleteArray_BmnMwpcGeometry(void *p) {
      delete [] ((::BmnMwpcGeometry*)p);
   }
   static void destruct_BmnMwpcGeometry(void *p) {
      typedef ::BmnMwpcGeometry current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMwpcGeometry

//______________________________________________________________________________
void BmnMwpcHitFinder::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnMwpcHitFinder.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnMwpcHitFinder::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnMwpcHitFinder::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnMwpcHitFinder(void *p) {
      return  p ? new(p) ::BmnMwpcHitFinder : new ::BmnMwpcHitFinder;
   }
   static void *newArray_BmnMwpcHitFinder(Long_t nElements, void *p) {
      return p ? new(p) ::BmnMwpcHitFinder[nElements] : new ::BmnMwpcHitFinder[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnMwpcHitFinder(void *p) {
      delete ((::BmnMwpcHitFinder*)p);
   }
   static void deleteArray_BmnMwpcHitFinder(void *p) {
      delete [] ((::BmnMwpcHitFinder*)p);
   }
   static void destruct_BmnMwpcHitFinder(void *p) {
      typedef ::BmnMwpcHitFinder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMwpcHitFinder

//______________________________________________________________________________
void BmnMwpcGeometrySRC::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnMwpcGeometrySRC.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnMwpcGeometrySRC::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnMwpcGeometrySRC::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnMwpcGeometrySRC(void *p) {
      return  p ? new(p) ::BmnMwpcGeometrySRC : new ::BmnMwpcGeometrySRC;
   }
   static void *newArray_BmnMwpcGeometrySRC(Long_t nElements, void *p) {
      return p ? new(p) ::BmnMwpcGeometrySRC[nElements] : new ::BmnMwpcGeometrySRC[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnMwpcGeometrySRC(void *p) {
      delete ((::BmnMwpcGeometrySRC*)p);
   }
   static void deleteArray_BmnMwpcGeometrySRC(void *p) {
      delete [] ((::BmnMwpcGeometrySRC*)p);
   }
   static void destruct_BmnMwpcGeometrySRC(void *p) {
      typedef ::BmnMwpcGeometrySRC current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMwpcGeometrySRC

//______________________________________________________________________________
void BmnMwpcTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnMwpcTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnMwpcTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnMwpcTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnMwpcTrack(void *p) {
      return  p ? new(p) ::BmnMwpcTrack : new ::BmnMwpcTrack;
   }
   static void *newArray_BmnMwpcTrack(Long_t nElements, void *p) {
      return p ? new(p) ::BmnMwpcTrack[nElements] : new ::BmnMwpcTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnMwpcTrack(void *p) {
      delete ((::BmnMwpcTrack*)p);
   }
   static void deleteArray_BmnMwpcTrack(void *p) {
      delete [] ((::BmnMwpcTrack*)p);
   }
   static void destruct_BmnMwpcTrack(void *p) {
      typedef ::BmnMwpcTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMwpcTrack

//______________________________________________________________________________
void BmnMwpcTrackFinder::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnMwpcTrackFinder.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnMwpcTrackFinder::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnMwpcTrackFinder::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnMwpcTrackFinder(void *p) {
      return  p ? new(p) ::BmnMwpcTrackFinder : new ::BmnMwpcTrackFinder;
   }
   static void *newArray_BmnMwpcTrackFinder(Long_t nElements, void *p) {
      return p ? new(p) ::BmnMwpcTrackFinder[nElements] : new ::BmnMwpcTrackFinder[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnMwpcTrackFinder(void *p) {
      delete ((::BmnMwpcTrackFinder*)p);
   }
   static void deleteArray_BmnMwpcTrackFinder(void *p) {
      delete [] ((::BmnMwpcTrackFinder*)p);
   }
   static void destruct_BmnMwpcTrackFinder(void *p) {
      typedef ::BmnMwpcTrackFinder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMwpcTrackFinder

//______________________________________________________________________________
void BmnMwpc::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnMwpc.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnMwpc::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnMwpc::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnMwpc(void *p) {
      return  p ? new(p) ::BmnMwpc : new ::BmnMwpc;
   }
   static void *newArray_BmnMwpc(Long_t nElements, void *p) {
      return p ? new(p) ::BmnMwpc[nElements] : new ::BmnMwpc[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnMwpc(void *p) {
      delete ((::BmnMwpc*)p);
   }
   static void deleteArray_BmnMwpc(void *p) {
      delete [] ((::BmnMwpc*)p);
   }
   static void destruct_BmnMwpc(void *p) {
      typedef ::BmnMwpc current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMwpc

//______________________________________________________________________________
void BmnMwpcContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnMwpcContFact.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnMwpcContFact::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnMwpcContFact::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnMwpcContFact(void *p) {
      return  p ? new(p) ::BmnMwpcContFact : new ::BmnMwpcContFact;
   }
   static void *newArray_BmnMwpcContFact(Long_t nElements, void *p) {
      return p ? new(p) ::BmnMwpcContFact[nElements] : new ::BmnMwpcContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnMwpcContFact(void *p) {
      delete ((::BmnMwpcContFact*)p);
   }
   static void deleteArray_BmnMwpcContFact(void *p) {
      delete [] ((::BmnMwpcContFact*)p);
   }
   static void destruct_BmnMwpcContFact(void *p) {
      typedef ::BmnMwpcContFact current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMwpcContFact

//______________________________________________________________________________
void BmnMwpcGeo::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnMwpcGeo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnMwpcGeo::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnMwpcGeo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnMwpcGeo(void *p) {
      return  p ? new(p) ::BmnMwpcGeo : new ::BmnMwpcGeo;
   }
   static void *newArray_BmnMwpcGeo(Long_t nElements, void *p) {
      return p ? new(p) ::BmnMwpcGeo[nElements] : new ::BmnMwpcGeo[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnMwpcGeo(void *p) {
      delete ((::BmnMwpcGeo*)p);
   }
   static void deleteArray_BmnMwpcGeo(void *p) {
      delete [] ((::BmnMwpcGeo*)p);
   }
   static void destruct_BmnMwpcGeo(void *p) {
      typedef ::BmnMwpcGeo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMwpcGeo

//______________________________________________________________________________
void BmnMwpcGeoPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnMwpcGeoPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnMwpcGeoPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnMwpcGeoPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnMwpcGeoPar(void *p) {
      return  p ? new(p) ::BmnMwpcGeoPar : new ::BmnMwpcGeoPar;
   }
   static void *newArray_BmnMwpcGeoPar(Long_t nElements, void *p) {
      return p ? new(p) ::BmnMwpcGeoPar[nElements] : new ::BmnMwpcGeoPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnMwpcGeoPar(void *p) {
      delete ((::BmnMwpcGeoPar*)p);
   }
   static void deleteArray_BmnMwpcGeoPar(void *p) {
      delete [] ((::BmnMwpcGeoPar*)p);
   }
   static void destruct_BmnMwpcGeoPar(void *p) {
      typedef ::BmnMwpcGeoPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMwpcGeoPar

//______________________________________________________________________________
void BmnMwpcPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnMwpcPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnMwpcPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnMwpcPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnMwpcPoint(void *p) {
      return  p ? new(p) ::BmnMwpcPoint : new ::BmnMwpcPoint;
   }
   static void *newArray_BmnMwpcPoint(Long_t nElements, void *p) {
      return p ? new(p) ::BmnMwpcPoint[nElements] : new ::BmnMwpcPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnMwpcPoint(void *p) {
      delete ((::BmnMwpcPoint*)p);
   }
   static void deleteArray_BmnMwpcPoint(void *p) {
      delete [] ((::BmnMwpcPoint*)p);
   }
   static void destruct_BmnMwpcPoint(void *p) {
      typedef ::BmnMwpcPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMwpcPoint

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
  void TriggerDictionaryInitialization_G__MwpcDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/opt/fairroot/install/include",
"/home/alex/bmnroot_dev/bmnroot/mcstack",
"/home/alex/bmnroot_dev/bmnroot/bmndata",
"/home/alex/bmnroot_dev/bmnroot/bmndata/math",
"/home/alex/bmnroot_dev/bmnroot/gem",
"/home/alex/bmnroot_dev/bmnroot/mwpc",
"/opt/fairsoft/install/include",
"/opt/fairsoft/install/include/root",
"/opt/fairsoft/install/include/root",
"/home/alex/bmnroot_dev/bmnroot/build/mwpc/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__MwpcDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class BmnMwpcHitProducer;
class __attribute__((annotate("$clingAutoload$BmnMwpcGeometry.h")))  BmnMwpcGeometry;
class BmnMwpcHitFinder;
class BmnMwpcGeometrySRC;
class BmnMwpcTrack;
class BmnMwpcTrackFinder;
class BmnMwpc;
class __attribute__((annotate(R"ATTRDUMP(Factory for all MWPC1 parameter containers)ATTRDUMP"))) BmnMwpcContFact;
class __attribute__((annotate(R"ATTRDUMP(Class for MWPC)ATTRDUMP"))) BmnMwpcGeo;
class BmnMwpcGeoPar;
class BmnMwpcPoint;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__MwpcDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Preliminary version of BmnMwpcHitProducer

#ifndef BmnMwpcHitProducer_H
#define BmnMwpcHitProducer_H 1

#include <math.h>
#include <iostream>
#include <vector>
#include "TString.h"
#include "FairTask.h"
#include "CbmTofPoint.h"
#include "TClonesArray.h"
#include "BmnEnums.h"
#include "BmnMwpcDigit.h"

#include "CbmTofHit.h"

using namespace std;

class BmnMwpcHitProducer : public FairTask {
public:

    /** Default constructor **/
    BmnMwpcHitProducer(Int_t num);

    /** Destructor **/
    virtual ~BmnMwpcHitProducer();

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

    /** Input array of MWPC Points **/
    TClonesArray* fBmnMwpcPointsArray;
    /** Input array of MWPC Digits **/
    TClonesArray* fBmnMwpcDigitsArray;

    /** Input array of MC Tracks **/
    TClonesArray* fMCTracksArray;

    /** Output array of MWPC Hits **/
    TClonesArray* fBmnMwpcHitsArray;

    Bool_t fOnlyPrimary;
    TString fRunType; //"points" or "digits"
    Int_t fMwpcNum;

    ClassDef(BmnMwpcHitProducer, 1);

};

#endif
// @(#)bmnroot/mwpc:$Id$
// Author: Pavel Batyuk (VBLHEP) <pavel.batyuk@jinr.ru> 2017-02-10

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
// BmnMwpcHitFinder                                                          //
//                                                                            //
// Implementation of an algorithm developed by                                // 
// S. Merts and P. Batyuk                                                     //
// to the BmnRoot software                                                    //
//                                                                            //
// The algorithm serves for searching for hits                                //
// in the Multi Wire Prop. Chambers of the BM@N experiment                    //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

#ifndef BMNMWPCHITFINDER_H
#define	BMNMWPCHITFINDER_H

#include <map>
#include <algorithm>
#include <Rtypes.h>
#include <TClonesArray.h>
#include <TVector3.h>
#include <TMath.h>
#include <TString.h>
#include  "FairTask.h"
#include  "BmnMwpcHit.h"
#include  "BmnMwpcDigit.h"
#include  "BmnMwpcGeometry.h"
#include  "FairTask.h"
#include "TList.h"

#include "TH1D.h"
#include "TH2D.h"

class TH1D;
class TH2D;

using namespace std;

class BmnMwpcHitFinder : public FairTask {
public:
	

    /** Default constructor **/
    BmnMwpcHitFinder() {};
    
    /** Constructor to be used **/
    BmnMwpcHitFinder(Bool_t);

    /** Destructor **/
    virtual ~BmnMwpcHitFinder();

    /** Virtual method Init **/
    virtual InitStatus Init();

    /** Virtual method Exec **/
    virtual void Exec(Option_t* opt);

    /** Virtual method Finish **/
    virtual void Finish();
    
    void SetUseDigitsInTimeBin(Bool_t flag) {
        fUseDigitsInTimeBin = flag;
    }

private:
    Bool_t expData;
    UInt_t fEventNo; // event counter
    
    TString fInputBranchName;
    TString fOutputBranchName;
    
    /** Input array of MWPC digits **/
    TClonesArray* fBmnMwpcDigitArray;
    
    /** Output array of MWPC hits **/
    // TClonesArray* fBmnMwpcHitArray; 
     TClonesArray* fBmnMwpcTracksArray; 
    
    vector <BmnMwpcDigit*> CheckDigits(vector <BmnMwpcDigit*>);
    void FindNeighbour(BmnMwpcDigit*, vector <BmnMwpcDigit*>, vector<BmnMwpcDigit*>);
    vector <TVector3> CreateHitsBy3Planes(vector <BmnMwpcDigit*>, vector <BmnMwpcDigit*>, vector <BmnMwpcDigit*>, Float_t);
    TVector3 CalcHitPosByTwoDigits(BmnMwpcDigit*, BmnMwpcDigit*);
    void CreateMwpcHits(vector <TVector3>, TClonesArray*, Short_t);
    void DefineCoordinateAngle(Short_t, Double_t&, Double_t&);
    void FindPairs(vector <BmnMwpcDigit*>, vector <BmnMwpcDigit*>, vector <TVector3>&);
    
    Float_t thDist;      // distance between found hits [cm]
    Int_t nInputDigits;  // max. number of found digits per plane
    Int_t nTimeSamples;  // 
      
    Bool_t fUseDigitsInTimeBin; // use digits found in a time bin of width = kTimeBin (8 ns).
    
    BmnMwpcGeometry* fMwpcGeometry;

    TList fList,gList,tList;

    TH1D  *hNp_best_ch1, *hNp_best_ch2,  *hNbest_Ch1,  *hNbest_Ch2;

    Short_t kNChambers;
    Short_t kNPlanes;
    Short_t kNWires;
    
    Float_t kZmid1;
    Float_t kZmid2;
    Int_t kMinHits;
    Double_t kChi2_Max;

    Float_t kX1_sh;
    Float_t kY1_sh;
    Float_t kX1_slope_sh;
    Float_t kY1_slope_sh;

    Float_t kX2_sh;
    Float_t kY2_sh;
    Float_t kX2_slope_sh;
    Float_t kY2_slope_sh;

    Float_t dw;
    Float_t dw_half;
    Double_t sq3;
    Double_t sq12;
    Double_t sigma;

    Int_t Nbest_Ch1;
    Int_t Nbest_Ch2;
    Int_t Nseg_Ch1;
    Int_t Nseg_Ch2;
    Int_t Nbest_Ch12_gl;
    
    Int_t kBig;

    Int_t *kPln;
    Float_t *kZ1_loc;
    Float_t *kZ2_loc;
    Float_t *z_gl1;
    Float_t *z_gl2;

    Int_t *iw;
    Int_t *iw_Ch1;
    Int_t *iw_Ch2;

    Int_t **wire_Ch1;
    Int_t **wire_Ch2;
    Float_t **xuv_Ch1;
    Float_t **xuv_Ch2;

    Int_t *ind_best_Ch1;
    Int_t *ind_best_Ch2; 
    Int_t *best_Ch1_gl;
    Int_t *best_Ch2_gl;
   
    Int_t **Wires_Ch1;
    Int_t **Wires_Ch2;    
    Int_t **clust_Ch1;
    Int_t **clust_Ch2;
    Float_t **XVU_Ch1;
    Float_t **XVU_Ch2;    
    Int_t *Nhits_Ch1;
    Int_t *Nhits_Ch2;    

    Double_t *Chi2_ndf_Ch1;
    Double_t **par_ab_Ch1;
    Double_t *Chi2_ndf_Ch2;
    Double_t **par_ab_Ch2;
    Double_t **par_ab_Ch1_2;
    Double_t *Chi2_ndf_best_Ch1;
    Double_t *Chi2_ndf_best_Ch2; 
    Double_t *Chi2_match;
    Double_t *Chi2_ndf_Ch1_2;

    
    Float_t *sigm2;
    Int_t *h;
    Int_t *h6;
    Int_t *ipl;
    Double_t **matrA;
    Double_t **matrb;
    //  Double_t **A1;
    //  Double_t **b1;
    // Double_t **A2;
    // Double_t **b2;
    
    Float_t *XVU1;
    Float_t *XVU2;
    Float_t *XVU_cl1;
    Float_t *XVU_cl2;
    Float_t *dX_i1;
    Float_t *dX_i2;
    Float_t *z2;

    //functions for Vasilisa method:
    void PrepareArraysToProcessEvent();

    void SegmentFinder(Int_t, Int_t**, Int_t**, Float_t**, Int_t*, Int_t* , Int_t &, Int_t **, Float_t **, Int_t, Short_t , Int_t);

    void ProcessSegments(Int_t,Double_t ,Float_t , Float_t *,Int_t ,Int_t & ,Int_t *,Int_t **,Int_t **,Float_t **,Int_t & ,Int_t *,  Double_t *, Double_t *, Double_t **, Double_t **,Double_t **, Int_t ,Int_t* , Float_t*,  Float_t* , Double_t ,Float_t *);

    void SegmentParamAlignment();

    void SegmentMatching(Int_t &, Int_t &, Double_t **, Double_t **, Float_t, Float_t, Int_t *, Int_t *,   Int_t *,  Int_t *, Int_t &, Double_t *);

    void SegmentFit(Float_t *, Float_t *, 
		    Float_t*, 
		    Int_t &,
		    Int_t *, Int_t *, Int_t *, Int_t *, 
		    Double_t **, Double_t *, 
		    Int_t *, Int_t *, Int_t **, Int_t **,
		    Double_t **, Double_t **,
		    Float_t *, Float_t *
		    );



    void FillFitMatrix(Double_t**, Float_t*, Float_t*, Int_t*, Int_t, Float_t*);
    void FillFreeCoefVector(Double_t*, Float_t*, Float_t*, Float_t*, Int_t*, Int_t);
    void InverseMatrix(Double_t**, Double_t**);
    
    ClassDef(BmnMwpcHitFinder, 1);

};

#endif	

// @(#)bmnroot/mwpc:$Id$
// Author: Pavel Batyuk (VBLHEP) <pavel.batyuk@jinr.ru> 2017-02-10

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
// BmnMwpcGeometry                                                            //
//                                                                            //
// A class containing geometry params. of                                     //
// the Multi Wire Prop. Chambers of the BM@N experiment                       //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

#ifndef BMNMWPCGEOMETRY_H
#define BMNMWPCGEOMETRY_H

#include <iostream>
#include <TNamed.h>
#include <TMath.h>
#include <TVector3.h>

using namespace std;
using namespace TMath;

class BmnMwpcGeometry : public TNamed {
public:

    /** Default constructor **/
    BmnMwpcGeometry();

    /** Destructor **/
    virtual ~BmnMwpcGeometry();
    
    Short_t GetNChambers() {
        return fNChambers;
    }

    Short_t GetNPlanes() {
        return fNPlanes;
    }
    
    Short_t GetTimeBin() {
        return fTimeBin;
    }
    
    Short_t GetNWires() {
        return fNWires;
    }
    
    Double_t GetAngleStep() {
        return fAngleStep;
    }
    
    Double_t GetWireStep() {
        return fWireStep;
    }
    
    Double_t GetPlaneStep() {
        return fPlaneStep;
    }
    
    Double_t GetPlaneHeight() {
        return fPlaneHeight;
    }
    
    Double_t GetPlaneWidth() {
        return fPlaneWidth;
    }
    
    Double_t GetZPlanePos(Int_t chamber, Int_t plane) {
        return zPlanePos[chamber][plane];
    }
    
    TVector3 GetChamberCenter(Int_t chamber);
    
    Double_t GetZRight(Int_t chamber) {
        return zRight[chamber];
    }
    
    Double_t GetZLeft(Int_t chamber) {
        return zLeft[chamber];
    }
 
private:

    Short_t fNChambers;
    Short_t fNPlanes;
    Short_t fTimeBin;  // in ns
    Short_t fNWires;   //in one plane
    Double_t fAngleStep;
    Double_t fWireStep; // in cm
    Double_t fPlaneStep; // in cm
    Double_t fPlaneHeight; // in cm
    Double_t fPlaneWidth; //in cm
    Double_t fSpaceLeft; //in cm
    Double_t fSpaceRight; //in cm
    
    Double_t zPlanePos[2][6];
    Double_t zRight[2];
    Double_t zLeft[2];
    
    Double_t fChamberWidth;
    Double_t fDistanceBetweenMWPC;
    Double_t fZofMWPC[4];
    
    Bool_t fDebug;
    
    ClassDef(BmnMwpcGeometry, 1);
};

#endif
// @(#)bmnroot/mwpc:$Id$
// Author: Maria Patsyuk <mpatsyuk@mit.edu> 2018-02-10

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
// BmnMwpcGeometrySRC                                                         //
//                                                                            //
// A class containing geometry params. of                                     //
// the Multi Wire Prop. Chambers of the SRC at BM@N experiment                //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

#ifndef BMNMWPCGEOMETRYSRC_H
#define BMNMWPCGEOMETRYSRC_H

#include <iostream>
#include <TNamed.h>
#include <TMath.h>
#include <TVector3.h>

using namespace std;
using namespace TMath;

class BmnMwpcGeometrySRC : public TNamed {
public:

    /** Default constructor **/
    BmnMwpcGeometrySRC();

    /** Destructor **/
    virtual ~BmnMwpcGeometrySRC();
    
    Short_t GetNChambers() {
        return fNChambers;
    }

    Short_t GetNPlanes() {
        return fNPlanes;
    }
    
    Short_t GetTimeBin() {
        return fTimeBin;
    }
    
    Short_t GetNWires() {
        return fNWires;
    }
    
    Double_t GetAngleStep() {
        return fAngleStep;
    }
    
    Double_t GetWireStep() {
        return fWireStep;
    }
    
    Double_t GetPlaneStep() {
        return fPlaneStep;
    }
    
    Double_t GetPlaneHeight() {
        return fPlaneHeight;
    }
    
    Double_t GetPlaneWidth() {
        return fPlaneWidth;
    }
    
    Double_t GetZPlanePos(Int_t chamber, Int_t plane) {
        return zPlanePos[chamber][plane];
    }
    
    TVector3 GetChamberCenter(Int_t chamber);
    
    Double_t GetZRight(Int_t chamber) {
        return zRight[chamber];
    }
    
    Double_t GetZLeft(Int_t chamber) {
        return zLeft[chamber];
    }
 
private:

    Short_t fNChambers;
    Short_t fNPlanes;
    Short_t fTimeBin;  // in ns
    Short_t fNWires;   //in one plane
    Double_t fAngleStep;
    Double_t fWireStep; // in cm
    Double_t fPlaneStep; // in cm
    Double_t fPlaneHeight; // in cm
    Double_t fPlaneWidth; //in cm
    Double_t fSpaceLeft; //in cm
    Double_t fSpaceRight; //in cm
    
    Double_t zPlanePos[4][6];
    Double_t zRight[4];
    Double_t zLeft[4];
    
    Double_t fChamberWidth;
    //    Double_t fDistanceBetweenMWPC;
    Double_t fGlobalZdiff;
    
    Bool_t fDebug;
    
    ClassDef(BmnMwpcGeometrySRC, 1);
};

#endif
#ifndef BMNMWPCTRACK_H
#define BMNMWPCTRACK_H

#include "BmnTrack.h"

class BmnMwpcTrack : public BmnTrack {
public:

    /** Default constructor **/
    BmnMwpcTrack();

    /** Destructor **/
    virtual ~BmnMwpcTrack();

private:


    ClassDef(BmnMwpcTrack, 1);

};

#endif
// @(#)bmnroot/mwpc:$Id$
// Author: Pavel Batyuk (VBLHEP) <pavel.batyuk@jinr.ru> 2017-02-12

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
// BmnMwpcTrackFinder                                                         //
//                                                                            //
//                                                                            //
// The algorithm serves for searching for track segments                      //
// in the MWPC of the BM@N experiment                                         //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

#ifndef BMNMWPCTRACKFINDER_H
#define BMNMWPCTRACKFINDER_H 1

#include <TMath.h>
#include <TNamed.h>
#include <TClonesArray.h>
#include <TString.h>
#include "FairTask.h"
#include "BmnMwpcTrack.h"
#include "BmnMwpcHit.h"
#include "BmnMwpcGeometry.h"
#include "BmnEnums.h"
#include "BmnMath.h"

using namespace std;
using namespace TMath;

class BmnMwpcTrackFinder : public FairTask {
public:

    BmnMwpcTrackFinder() {};
    BmnMwpcTrackFinder(Bool_t);
    virtual ~BmnMwpcTrackFinder();
    
    virtual InitStatus Init();

    virtual void Exec(Option_t* opt);

    virtual void Finish();
    
    Int_t FindSeeds(vector <BmnMwpcTrack>& cand, Int_t);
    BmnStatus FitFoundTracks(vector <BmnMwpcTrack> cand);
    BmnStatus CalculateTrackParamsLine(BmnMwpcTrack* tr);
    
    void SingleHitInChamber(vector <BmnMwpcTrack>&, Int_t, vector <BmnMwpcTrack>&);
    
     
private:
    Bool_t expData;
    UInt_t fEventNo; // event counter
    
    TString fInputBranchName;
    TString fOutputBranchName;
    
    /** Input array of MWPC hits **/
    TClonesArray* fBmnMwpcHitsArray;
    
    /** Output array of MWPC tracks **/
    TClonesArray* fBmnMwpcTracksArray; 
    
    BmnMwpcGeometry* fMwpcGeo;
         
    ClassDef(BmnMwpcTrackFinder, 1)
};

#endif
//------------------------------------------------------------------------------------------------------------------------
// -------------------------------------------------------------------------
// -----                         BmnMWPC header file                    -----
// -------------------------------------------------------------------------

/*
 ** Defines the active detector MWPC. Constructs the geometry and
 ** registeres MCPoints.
**/



#ifndef BMNMWPC_H
#define BMNMWPC_H

#include "TClonesArray.h"
#include "TLorentzVector.h"
#include "TVector3.h"
#include "FairDetector.h"
#include "TGeoMedium.h"
#include "TString.h"
#include <map>
using namespace std;

class BmnMwpcPoint;
class FairVolume;

//------------------------------------------------------------------------------------------------------------------------
class BmnMwpc : public FairDetector
{

public:

   	// *@param name    detector name
   	// *@param active  sensitivity flag
  	BmnMwpc(const char* name, Bool_t active);

	BmnMwpc();
	virtual ~BmnMwpc();

	// Defines the action to be taken when a step is inside the
	// active volume. Creates BmnMWPC1Points and adds them to the collection.
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

	// Constructs the MWPC1 geometry
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
 
    static Int_t GetWheel(Int_t uid){ return ((uid-1) >>3); };  //lsp  [0-1] == [inner,outer]
   	static Int_t GetProj(Int_t uid){ return ((uid-1) & 6)>>1; }; //lsp [0-3] == [x,y,u,v] 
 	static Int_t GetGasGap(Int_t uid){ return ((uid-1) & 0x0001); }; //lsp [0-1] == [inner,outer] 
  
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
        
	// Adds a BmnMWPC1Point to the HitCollection
  	BmnMwpcPoint* AddHit(Int_t trackID, Int_t detID, TVector3 pos, Double_t radius, TVector3 mom, Double_t time, 
  	Double_t length, Double_t eLoss, Int_t isPrimary, Double_t charge, Int_t fPdgId, TVector3 trackPos); 
 
	// Resets the private members for the track parameters
  	void ResetParameters();


  ClassDef(BmnMwpc,1) 

};

//------------------------------------------------------------------------------------------------------------------------
inline void BmnMwpc::ResetParameters() 
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

}
//------------------------------------------------------------------------------------------------------------------------
#endif
#ifndef BMNMWPCCONTFACT_H
#define BMNMWPCCONTFACT_H

#include "FairContFact.h"

class FairContainer;

class BmnMwpcContFact : public FairContFact {
private:
  void setAllContainers();
public:
  BmnMwpcContFact();
  ~BmnMwpcContFact() {}
  FairParSet* createContainer(FairContainer*);
  ClassDef( BmnMwpcContFact,0) // Factory for all MWPC1 parameter containers
};

#endif  /* !BMNMWPC1CONTFACT_H */
#ifndef BMNMWPCGEO_H
#define BMNMWPCGEO_H

#include "FairGeoSet.h"

class  BmnMwpcGeo : public FairGeoSet {

protected:
  char modName[20];  // name of module
  char eleName[20];  // substring for elements in module

public:
  BmnMwpcGeo();
  ~BmnMwpcGeo() {}
  const char* getModuleName(Int_t);
  const char* getEleName(Int_t);

  ClassDef(BmnMwpcGeo,0) // Class for MWPC
};

#endif  /* !BMNMWPC1GEO_H */
#ifndef BMNMWPCGEOPAR_H
#define BMNMWPCGEOPAR_H

#include "FairParGenericSet.h"
#include "TH1F.h"
#include "TObjArray.h"

class BmnMwpcGeoPar : public FairParGenericSet {
public:
  TObjArray            *fGeoSensNodes; // List of FairGeoNodes for sensitive volumes
  TObjArray            *fGeoPassNodes; // List of FairGeoNodes for sensitive volumes

  BmnMwpcGeoPar(const char* name="BmnMwpcGeoPar",
             const char* title="MWPC Geometry Parameters",
             const char* context="TestDefaultContext");
  ~BmnMwpcGeoPar(void);
  void clear(void);
  void putParams(FairParamList*);
  Bool_t getParams(FairParamList*);
  TObjArray             *GetGeoSensitiveNodes(){return fGeoSensNodes;}
  TObjArray             *GetGeoPassiveNodes(){return fGeoPassNodes;}

  ClassDef(BmnMwpcGeoPar,1)
};

#endif /* !BMNMWPC1GEOPAR_H */
//------------------------------------------------------------------------------------------------------------------------
// -------------------------------------------------------------------------
// -----                     BmnMWPCPoint header file                   -----
// -------------------------------------------------------------------------

#ifndef BMNMWPCPOINT_H
#define BMNMWPCPOINT_H


#include "TObject.h"
#include "TVector3.h"
#include "FairMCPoint.h"

using namespace std;

//------------------------------------------------------------------------------------------------------------------------
class BmnMwpcPoint : public FairMCPoint
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
  	BmnMwpcPoint(Int_t trackID, Int_t detID, TVector3 pos, Double_t radius, TVector3 mom, Double_t tof, 
  	    Double_t length, Double_t eLoss, Int_t isPrimary, Double_t charge, Int_t pdgId, TVector3 trackPos);
  	BmnMwpcPoint(const BmnMwpcPoint& point) { *this = point; };

  	BmnMwpcPoint();	
  	virtual ~BmnMwpcPoint();

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

  ClassDef(BmnMwpcPoint,2)

};

//------------------------------------------------------------------------------------------------------------------------
#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"BmnMwpc", payloadCode, "@",
"BmnMwpcContFact", payloadCode, "@",
"BmnMwpcGeo", payloadCode, "@",
"BmnMwpcGeoPar", payloadCode, "@",
"BmnMwpcGeometry", payloadCode, "@",
"BmnMwpcGeometrySRC", payloadCode, "@",
"BmnMwpcHitFinder", payloadCode, "@",
"BmnMwpcHitProducer", payloadCode, "@",
"BmnMwpcPoint", payloadCode, "@",
"BmnMwpcTrack", payloadCode, "@",
"BmnMwpcTrackFinder", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__MwpcDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__MwpcDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__MwpcDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__MwpcDict() {
  TriggerDictionaryInitialization_G__MwpcDict_Impl();
}
