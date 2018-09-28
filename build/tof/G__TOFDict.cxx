// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIalexdIbmnroot_devdIbmnrootdIbuilddItofdIG__TOFDict

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
#include "BmnTOF.h"
#include "BmnTOFPoint.h"
#include "BmnTOFContFact.h"
#include "BmnTOFGeo.h"
#include "BmnTOFGeoPar.h"
#include "BmnTofHitProducer.h"
#include "BmnTofHitProducerIdeal.h"
#include "BmnTofGeoUtils.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_BmnTOFGeoPar(void *p = 0);
   static void *newArray_BmnTOFGeoPar(Long_t size, void *p);
   static void delete_BmnTOFGeoPar(void *p);
   static void deleteArray_BmnTOFGeoPar(void *p);
   static void destruct_BmnTOFGeoPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTOFGeoPar*)
   {
      ::BmnTOFGeoPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTOFGeoPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTOFGeoPar", ::BmnTOFGeoPar::Class_Version(), "BmnTOFGeoPar.h", 10,
                  typeid(::BmnTOFGeoPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTOFGeoPar::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTOFGeoPar) );
      instance.SetNew(&new_BmnTOFGeoPar);
      instance.SetNewArray(&newArray_BmnTOFGeoPar);
      instance.SetDelete(&delete_BmnTOFGeoPar);
      instance.SetDeleteArray(&deleteArray_BmnTOFGeoPar);
      instance.SetDestructor(&destruct_BmnTOFGeoPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTOFGeoPar*)
   {
      return GenerateInitInstanceLocal((::BmnTOFGeoPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTOFGeoPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTOF(void *p = 0);
   static void *newArray_BmnTOF(Long_t size, void *p);
   static void delete_BmnTOF(void *p);
   static void deleteArray_BmnTOF(void *p);
   static void destruct_BmnTOF(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTOF*)
   {
      ::BmnTOF *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTOF >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTOF", ::BmnTOF::Class_Version(), "", 25,
                  typeid(::BmnTOF), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTOF::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTOF) );
      instance.SetNew(&new_BmnTOF);
      instance.SetNewArray(&newArray_BmnTOF);
      instance.SetDelete(&delete_BmnTOF);
      instance.SetDeleteArray(&deleteArray_BmnTOF);
      instance.SetDestructor(&destruct_BmnTOF);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTOF*)
   {
      return GenerateInitInstanceLocal((::BmnTOF*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTOF*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTOFPoint(void *p = 0);
   static void *newArray_BmnTOFPoint(Long_t size, void *p);
   static void delete_BmnTOFPoint(void *p);
   static void deleteArray_BmnTOFPoint(void *p);
   static void destruct_BmnTOFPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTOFPoint*)
   {
      ::BmnTOFPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTOFPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTOFPoint", ::BmnTOFPoint::Class_Version(), "", 86,
                  typeid(::BmnTOFPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTOFPoint::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTOFPoint) );
      instance.SetNew(&new_BmnTOFPoint);
      instance.SetNewArray(&newArray_BmnTOFPoint);
      instance.SetDelete(&delete_BmnTOFPoint);
      instance.SetDeleteArray(&deleteArray_BmnTOFPoint);
      instance.SetDestructor(&destruct_BmnTOFPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTOFPoint*)
   {
      return GenerateInitInstanceLocal((::BmnTOFPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTOFPoint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTOFContFact(void *p = 0);
   static void *newArray_BmnTOFContFact(Long_t size, void *p);
   static void delete_BmnTOFContFact(void *p);
   static void deleteArray_BmnTOFContFact(void *p);
   static void destruct_BmnTOFContFact(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTOFContFact*)
   {
      ::BmnTOFContFact *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTOFContFact >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTOFContFact", ::BmnTOFContFact::Class_Version(), "", 145,
                  typeid(::BmnTOFContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTOFContFact::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTOFContFact) );
      instance.SetNew(&new_BmnTOFContFact);
      instance.SetNewArray(&newArray_BmnTOFContFact);
      instance.SetDelete(&delete_BmnTOFContFact);
      instance.SetDeleteArray(&deleteArray_BmnTOFContFact);
      instance.SetDestructor(&destruct_BmnTOFContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTOFContFact*)
   {
      return GenerateInitInstanceLocal((::BmnTOFContFact*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTOFContFact*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTOFGeo(void *p = 0);
   static void *newArray_BmnTOFGeo(Long_t size, void *p);
   static void delete_BmnTOFGeo(void *p);
   static void deleteArray_BmnTOFGeo(void *p);
   static void destruct_BmnTOFGeo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTOFGeo*)
   {
      ::BmnTOFGeo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTOFGeo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTOFGeo", ::BmnTOFGeo::Class_Version(), "", 170,
                  typeid(::BmnTOFGeo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTOFGeo::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTOFGeo) );
      instance.SetNew(&new_BmnTOFGeo);
      instance.SetNewArray(&newArray_BmnTOFGeo);
      instance.SetDelete(&delete_BmnTOFGeo);
      instance.SetDeleteArray(&deleteArray_BmnTOFGeo);
      instance.SetDestructor(&destruct_BmnTOFGeo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTOFGeo*)
   {
      return GenerateInitInstanceLocal((::BmnTOFGeo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTOFGeo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTofHitProducerIdeal(void *p = 0);
   static void *newArray_BmnTofHitProducerIdeal(Long_t size, void *p);
   static void delete_BmnTofHitProducerIdeal(void *p);
   static void deleteArray_BmnTofHitProducerIdeal(void *p);
   static void destruct_BmnTofHitProducerIdeal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTofHitProducerIdeal*)
   {
      ::BmnTofHitProducerIdeal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTofHitProducerIdeal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTofHitProducerIdeal", ::BmnTofHitProducerIdeal::Class_Version(), "BmnTofHitProducerIdeal.h", 14,
                  typeid(::BmnTofHitProducerIdeal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTofHitProducerIdeal::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTofHitProducerIdeal) );
      instance.SetNew(&new_BmnTofHitProducerIdeal);
      instance.SetNewArray(&newArray_BmnTofHitProducerIdeal);
      instance.SetDelete(&delete_BmnTofHitProducerIdeal);
      instance.SetDeleteArray(&deleteArray_BmnTofHitProducerIdeal);
      instance.SetDestructor(&destruct_BmnTofHitProducerIdeal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTofHitProducerIdeal*)
   {
      return GenerateInitInstanceLocal((::BmnTofHitProducerIdeal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTofHitProducerIdeal*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTofHitProducer(void *p = 0);
   static void *newArray_BmnTofHitProducer(Long_t size, void *p);
   static void delete_BmnTofHitProducer(void *p);
   static void deleteArray_BmnTofHitProducer(void *p);
   static void destruct_BmnTofHitProducer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTofHitProducer*)
   {
      ::BmnTofHitProducer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTofHitProducer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTofHitProducer", ::BmnTofHitProducer::Class_Version(), "", 247,
                  typeid(::BmnTofHitProducer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTofHitProducer::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTofHitProducer) );
      instance.SetNew(&new_BmnTofHitProducer);
      instance.SetNewArray(&newArray_BmnTofHitProducer);
      instance.SetDelete(&delete_BmnTofHitProducer);
      instance.SetDeleteArray(&deleteArray_BmnTofHitProducer);
      instance.SetDestructor(&destruct_BmnTofHitProducer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTofHitProducer*)
   {
      return GenerateInitInstanceLocal((::BmnTofHitProducer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTofHitProducer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnTOFGeoPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTOFGeoPar::Class_Name()
{
   return "BmnTOFGeoPar";
}

//______________________________________________________________________________
const char *BmnTOFGeoPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTOFGeoPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTOFGeoPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTOFGeoPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTOFGeoPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTOFGeoPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTOFGeoPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTOFGeoPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTOF::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTOF::Class_Name()
{
   return "BmnTOF";
}

//______________________________________________________________________________
const char *BmnTOF::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTOF::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTOF::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTOF::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTOF*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTOFPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTOFPoint::Class_Name()
{
   return "BmnTOFPoint";
}

//______________________________________________________________________________
const char *BmnTOFPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTOFPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTOFPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTOFPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTOFPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTOFPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTOFPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTOFPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTOFContFact::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTOFContFact::Class_Name()
{
   return "BmnTOFContFact";
}

//______________________________________________________________________________
const char *BmnTOFContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTOFContFact*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTOFContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTOFContFact*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTOFContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTOFContFact*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTOFContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTOFContFact*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTOFGeo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTOFGeo::Class_Name()
{
   return "BmnTOFGeo";
}

//______________________________________________________________________________
const char *BmnTOFGeo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTOFGeo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTOFGeo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTOFGeo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTOFGeo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTOFGeo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTOFGeo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTOFGeo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTofHitProducerIdeal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTofHitProducerIdeal::Class_Name()
{
   return "BmnTofHitProducerIdeal";
}

//______________________________________________________________________________
const char *BmnTofHitProducerIdeal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTofHitProducerIdeal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTofHitProducerIdeal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTofHitProducerIdeal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTofHitProducerIdeal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTofHitProducerIdeal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTofHitProducerIdeal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTofHitProducerIdeal*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTofHitProducer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTofHitProducer::Class_Name()
{
   return "BmnTofHitProducer";
}

//______________________________________________________________________________
const char *BmnTofHitProducer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTofHitProducer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTofHitProducer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTofHitProducer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTofHitProducer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTofHitProducer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTofHitProducer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTofHitProducer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnTOFGeoPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTOFGeoPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTOFGeoPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTOFGeoPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTOFGeoPar(void *p) {
      return  p ? new(p) ::BmnTOFGeoPar : new ::BmnTOFGeoPar;
   }
   static void *newArray_BmnTOFGeoPar(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTOFGeoPar[nElements] : new ::BmnTOFGeoPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTOFGeoPar(void *p) {
      delete ((::BmnTOFGeoPar*)p);
   }
   static void deleteArray_BmnTOFGeoPar(void *p) {
      delete [] ((::BmnTOFGeoPar*)p);
   }
   static void destruct_BmnTOFGeoPar(void *p) {
      typedef ::BmnTOFGeoPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTOFGeoPar

//______________________________________________________________________________
void BmnTOF::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTOF.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTOF::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTOF::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTOF(void *p) {
      return  p ? new(p) ::BmnTOF : new ::BmnTOF;
   }
   static void *newArray_BmnTOF(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTOF[nElements] : new ::BmnTOF[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTOF(void *p) {
      delete ((::BmnTOF*)p);
   }
   static void deleteArray_BmnTOF(void *p) {
      delete [] ((::BmnTOF*)p);
   }
   static void destruct_BmnTOF(void *p) {
      typedef ::BmnTOF current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTOF

//______________________________________________________________________________
void BmnTOFPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTOFPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTOFPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTOFPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTOFPoint(void *p) {
      return  p ? new(p) ::BmnTOFPoint : new ::BmnTOFPoint;
   }
   static void *newArray_BmnTOFPoint(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTOFPoint[nElements] : new ::BmnTOFPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTOFPoint(void *p) {
      delete ((::BmnTOFPoint*)p);
   }
   static void deleteArray_BmnTOFPoint(void *p) {
      delete [] ((::BmnTOFPoint*)p);
   }
   static void destruct_BmnTOFPoint(void *p) {
      typedef ::BmnTOFPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTOFPoint

//______________________________________________________________________________
void BmnTOFContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTOFContFact.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTOFContFact::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTOFContFact::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTOFContFact(void *p) {
      return  p ? new(p) ::BmnTOFContFact : new ::BmnTOFContFact;
   }
   static void *newArray_BmnTOFContFact(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTOFContFact[nElements] : new ::BmnTOFContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTOFContFact(void *p) {
      delete ((::BmnTOFContFact*)p);
   }
   static void deleteArray_BmnTOFContFact(void *p) {
      delete [] ((::BmnTOFContFact*)p);
   }
   static void destruct_BmnTOFContFact(void *p) {
      typedef ::BmnTOFContFact current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTOFContFact

//______________________________________________________________________________
void BmnTOFGeo::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTOFGeo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTOFGeo::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTOFGeo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTOFGeo(void *p) {
      return  p ? new(p) ::BmnTOFGeo : new ::BmnTOFGeo;
   }
   static void *newArray_BmnTOFGeo(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTOFGeo[nElements] : new ::BmnTOFGeo[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTOFGeo(void *p) {
      delete ((::BmnTOFGeo*)p);
   }
   static void deleteArray_BmnTOFGeo(void *p) {
      delete [] ((::BmnTOFGeo*)p);
   }
   static void destruct_BmnTOFGeo(void *p) {
      typedef ::BmnTOFGeo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTOFGeo

//______________________________________________________________________________
void BmnTofHitProducerIdeal::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTofHitProducerIdeal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTofHitProducerIdeal::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTofHitProducerIdeal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTofHitProducerIdeal(void *p) {
      return  p ? new(p) ::BmnTofHitProducerIdeal : new ::BmnTofHitProducerIdeal;
   }
   static void *newArray_BmnTofHitProducerIdeal(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTofHitProducerIdeal[nElements] : new ::BmnTofHitProducerIdeal[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTofHitProducerIdeal(void *p) {
      delete ((::BmnTofHitProducerIdeal*)p);
   }
   static void deleteArray_BmnTofHitProducerIdeal(void *p) {
      delete [] ((::BmnTofHitProducerIdeal*)p);
   }
   static void destruct_BmnTofHitProducerIdeal(void *p) {
      typedef ::BmnTofHitProducerIdeal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTofHitProducerIdeal

//______________________________________________________________________________
void BmnTofHitProducer::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTofHitProducer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTofHitProducer::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTofHitProducer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTofHitProducer(void *p) {
      return  p ? new(p) ::BmnTofHitProducer : new ::BmnTofHitProducer;
   }
   static void *newArray_BmnTofHitProducer(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTofHitProducer[nElements] : new ::BmnTofHitProducer[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTofHitProducer(void *p) {
      delete ((::BmnTofHitProducer*)p);
   }
   static void deleteArray_BmnTofHitProducer(void *p) {
      delete [] ((::BmnTofHitProducer*)p);
   }
   static void destruct_BmnTofHitProducer(void *p) {
      typedef ::BmnTofHitProducer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTofHitProducer

namespace {
  void TriggerDictionaryInitialization_G__TOFDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/opt/fairroot/install/include",
"/home/alex/bmnroot_dev/bmnroot/mcstack",
"/home/alex/bmnroot_dev/bmnroot/bmndata",
"/home/alex/bmnroot_dev/bmnroot/tof",
"/opt/fairsoft/install/include",
"/opt/fairsoft/install/include/root",
"/opt/fairsoft/install/include/root",
"/home/alex/bmnroot_dev/bmnroot/build/tof/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__TOFDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$BmnTOFGeoPar.h")))  BmnTOFGeoPar;
class BmnTOF;
class BmnTOFPoint;
class BmnTOFContFact;
class __attribute__((annotate(R"ATTRDUMP(Class for Hyp)ATTRDUMP"))) BmnTOFGeo;
class __attribute__((annotate("$clingAutoload$BmnTofHitProducerIdeal.h")))  BmnTofHitProducerIdeal;
class BmnTofHitProducer;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__TOFDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
//--------------------------------------------------------------------------------------------------------------------------------------
#ifndef __BMNTOF_H
#define __BMNTOF_H 1


#include "TClonesArray.h"
#include "TVector3.h"
#include "TLorentzVector.h"
#include "FairDetector.h"
#include "BmnTOFGeoPar.h"

using namespace std;


class TClonesArray;
class BmnTOFPoint;
class FairVolume;

//--------------------------------------------------------------------------------------------------------------------------------------
class BmnTOF : public FairDetector
{
public:
	BmnTOF();
	BmnTOF(const char* name, Bool_t active);
	virtual ~BmnTOF();

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

	BmnTOFPoint* AddPoint(Int_t trackID, Int_t detID, TVector3 pos, TVector3 mom, Double_t tof, Double_t length, Double_t eLoss);

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

ClassDef(BmnTOF, 3)
}; 
//--------------------------------------------------------------------------------------------------------------------------------------
inline void BmnTOF::ResetParameters() 
{
	fPos.SetXYZM(nan, nan, nan, nan);
	fMom.SetXYZM(nan, nan, nan, nan);
	fTime = fLength = fELoss = nan;
	fPosIndex = 0;
};


#endif
//--------------------------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------------------------------
#ifndef __BMNTOFPOINT_H
#define __BMNTOFPOINT_H 1

#include<TVector3.h>

#include "FairMCPoint.h"

//--------------------------------------------------------------------------------------------------------------------------------------
class BmnTOFPoint : public FairMCPoint
{
public:
	BmnTOFPoint();
	virtual ~BmnTOFPoint();

  /** Constructor with arguments
   *@param trackID  Index of MCTrack
   *@param detID    Detector ID
   *@param pos      Ccoordinates at entrance to active volume [cm]
   *@param mom      Momentum of track at entrance [GeV]
   *@param tof      Time since event start [ns]
   *@param length   Track length since creation [cm]
   *@param eLoss    Energy deposit [GeV]
   **/ 
  	BmnTOFPoint(Int_t trackID, Int_t detID, TVector3 pos, TVector3 mom, Double_t tof, Double_t length, Double_t eLoss);
  
	virtual void 	Print(const Option_t* opt) const;

	// CATION: stripID MAX_VALUE = 255, moduleID MAX_VALUE = 255, regionID MAX_VALUE = 255 
  	Int_t 		GetStrip() const  {return (fDetectorID & 0x000000FF);};
  	Int_t 		GetChamber() const {return (fDetectorID & 0x0000FF00) >> 8; };
   	Int_t 		GetRegion() const {return (fDetectorID & 0x00FF0000) >> 16;}; 	
   	Int_t 		GetVolumeUID() const {return fDetectorID;};

	static Int_t 	GetStrip(Int_t uid){  return (uid & 0x000000FF); };
   	static Int_t 	GetChamber(Int_t uid){ return (uid & 0x0000FF00) >> 8; };
   	static Int_t 	GetRegion(Int_t uid){ return (uid & 0x00FF0000) >> 16; };  	
  	static Int_t 	GetVolumeUID(Int_t regID, Int_t chamID, Int_t stripID) 
  	{ 
#ifdef DEBUG
 	Int_t uid = (regID << 16) | (chamID << 8) | stripID; 
 	Int_t region =	GetRegion(uid);
 	Int_t chamber =	GetChamber(uid);
  	Int_t strip =	GetStrip(uid);	
assert(region == regID);  
assert(chamber == chamID); 
assert(strip == stripID); 	
	return uid;
#else  	
  	return (regID << 16) | (chamID << 8) | stripID; 
#endif  	
  	};
 
ClassDef(BmnTOFPoint, 1)
};

#endif
//--------------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------------
#ifndef __BMNTOFCONTFACT_H
#define __BMNTOFCONTFACT_H 1

#include "FairContFact.h"

class FairContainer;

//--------------------------------------------------------------------------------------------------------------------------------------
class BmnTOFContFact : public FairContFact 
{
private:
	void setAllContainers();

public:
	BmnTOFContFact();
	~BmnTOFContFact() {}

	FairParSet* 	createContainer(FairContainer*);

ClassDef(BmnTOFContFact, 0) 
};

#endif  
//--------------------------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------------------------------
#ifndef __BMNGEOTOF_H
#define __BMNGEOTOF_H 1

#include "FairGeoSet.h"

//--------------------------------------------------------------------------------------------------------------------------------------
class  BmnTOFGeo : public FairGeoSet 
{
protected:
	char modName[20];  // name of module
	char eleName[20];  // substring for elements in module
  
public:
	BmnTOFGeo();
	~BmnTOFGeo() {}

	const char* getModuleName(Int_t);
	const char* getEleName(Int_t);
  
ClassDef(BmnTOFGeo, 0) // Class for Hyp
};

#endif
//--------------------------------------------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------------------------------------------
#ifndef __BMNGEOTOFPAR_H
#define __BMNGEOTOFPAR_H 1

#include<TObjArray.h>

#include "FairParGenericSet.h"

//--------------------------------------------------------------------------------------------------------------------------------------
class BmnTOFGeoPar : public FairParGenericSet 
{
public:
	TObjArray      *fGeoSensNodes; /** List of FairGeoNodes for sensitive  volumes */
	TObjArray      *fGeoPassNodes; /** List of FairGeoNodes for passive  volumes */
  
	BmnTOFGeoPar(const char* name="BmnTOFGeoPar", const char* title="TOF Geometry Parameters", const char* context="TOFDefaultContext");
	~BmnTOFGeoPar(void);

	void 		clear(void);
	void 		putParams(FairParamList*);
	Bool_t 		getParams(FairParamList*);

	TObjArray*	GetGeoSensitiveNodes(){ return fGeoSensNodes; }
	TObjArray*	GetGeoPassiveNodes(){ return fGeoPassNodes; } 
  
 ClassDef(BmnTOFGeoPar,1)
};

#endif 
//--------------------------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------------------------------
#ifndef __BmnTofHitProducer_H
#define __BmnTofHitProducer_H 1

#include <TClonesArray.h>
#include <FairTask.h>

#include <map>
#include <math.h>

#include "BmnTofHitProducerIdeal.h"
#include "BmnTofGeoUtils.h"
#include "BmnTof2Digit.h"
#include "BmnTrigDigit.h"

#define TOF2_MAX_CHAMBERS 60
#define TOF2_MAX_STRIPS_IN_CHAMBER 32

class TRandom2;
class TEfficiency;
class TH1D;
class TH2D;
class BmnTofGeoUtils;
//--------------------------------------------------------------------------------------------------------------------------------------
class BmnTofHitProducer : public BmnTofHitProducerIdeal 
{
        Double_t 		fTimeSigma;     // Uncertainties of time, gaus sigma [ns],  default: 100 ps
   	Double_t		fErrX, fErrY; 	// Uncertainties of coordinates, gaus sigma [cm], dX= 10./sqrt(12.) mm, default: dY= 5 mm.
        TRandom2 		*pRandom;    
   
   	Bool_t			fDoINL;
   	Bool_t			fDoSlewing;   	
   
	// QA test histos
	TEfficiency			*effTestEfficiencySingleHit, *effTestEfficiencyDoubleHit; //!		
        TH1D                		*htR, *h1TestDistance, *h1TestMass, *h1TestMassLong;
        TH2D   				*h2TestNeighborPair, *h2TestXYSmeared, *h2TestXYSmeared2,*h2TestXYSmearedDouble, *h2TestXYSmearedDouble2, *h2TestEtaPhi, *h2TestStrips, *h2TestRZ, *h2TdetIdStripId;
						
	Bool_t 				HitExist(Double_t val); 
	Bool_t 				DoubleHitExist(Double_t val);

	BmnTofGeoUtils			*pGeoUtils;
	
	const char *fgeomFile;

	const 	double		fSignalVelosity; // [ns/cm]

	// input- strip edge position & signal times; output- strip crosspoint; return false, if crosspoint outside strip 
	bool			GetCrossPoint(const TVector3& p1, double time1, const TVector3& p2, double time2, TVector3& crossPoint);
	bool                    GetCrossPoint(const LStrip *pStrip, double dtime, TVector3& crossPoint);
        Double_t                CalculateToF (BmnTof2Digit *d1, BmnTof2Digit *d2, BmnTrigDigit *t0);

public:
	BmnTofHitProducer(const char *name = "TOF HitProducer", const char *geomFile = "", Bool_t useMCdata = true, Int_t verbose = 1, Bool_t DoTest = false);
	virtual ~BmnTofHitProducer();

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
	
ClassDef(BmnTofHitProducer, 2);
};

#endif
//--------------------------------------------------------------------------------------------------------------------------------------

//------------------------------------------------------------------------------------------------------------------------
#ifndef __BMN_TOF_HIT_PRODUCER_IDEAL_H
#define __BMN_TOF_HIT_PRODUCER_IDEAL_H 1

#include <TVector3.h>
#include <TList.h>

#include "FairTask.h"
//------------------------------------------------------------------------------------------------------------------------
class TH1D;
class TH2D;
class TClonesArray;
//------------------------------------------------------------------------------------------------------------------------
class BmnTofHitProducerIdeal : public FairTask
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
	BmnTofHitProducerIdeal(const char *name = "TOF Ideal HitProducer", Bool_t useMCdata = true, Int_t verbose = 1, Bool_t DoTest = false, Bool_t DoMergeHits = false);
	virtual ~BmnTofHitProducerIdeal();

	virtual InitStatus	Init();
	virtual void		Exec(Option_t * option);
	virtual void		Finish();	
	
	void 			SetOnlyPrimary(Bool_t opt) { fOnlyPrimary = opt; }
	void			Dump(const char* comment = nullptr, ostream& out = std::cout) const;
	void 			SetTestFlnm(const char* flnm){ fTestFlnm = flnm; };

ClassDef(BmnTofHitProducerIdeal, 1);
};
//------------------------------------------------------------------------------------------------------------------------
#endif
//------------------------------------------------------------------------------------------------------------------------
#ifndef __BMN_TOF_HIT_GEOUTILS_H
#define __BMN_TOF_HIT_GEOUTILS_H 1

#include <TVector3.h>
#include <TList.h>

#define TOF2_MAX_CHAMBERS 60
#define TOF2_MAX_STRIPS_IN_CHAMBER 32

//------------------------------------------------------------------------------------------------------------------------
class TH1D;
class TH2D;
class TClonesArray;

//------------------------------------------------------------------------------------------------------------------------
class LRectangle	// convex quadrangle
{ 
	bool		IsInvalid;
public:
	enum Side_t { kUpper=0,  kLower=1, kInvalid= -1 }; 
	
	Int_t 		volumeUID;
	TVector3 	A, B, C, D, center, perp;  // [cm] 
	
	LRectangle() : IsInvalid(true), volumeUID(kInvalid){};
	LRectangle(Int_t uid, const TVector3& a, const TVector3& b, const TVector3& c, const TVector3& d, bool check = false);
	
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
class LStrip : public LRectangle
{
public:
 	Int_t 		sectorID, boxID, detectorID, stripID; 
 	Int_t 		neighboring[2]; // dim same as  Side_t enum
 	
 	LStrip();
  	LStrip(Int_t uid, Int_t sector, Int_t box, Int_t detector, Int_t strip);
 	
	void 		SetIDs(Int_t uid, Int_t sector, Int_t box, Int_t  detector, Int_t  strip){ volumeUID = uid; sectorID = sector; boxID = box; detectorID = detector; stripID = strip;}	
	
	inline bool	IsSameDetector(const LStrip& strip)const{ return ( sectorID == strip.sectorID && boxID == strip.boxID && detectorID == strip.detectorID);}
	inline bool 	operator==(const LStrip& rhs){ return ( sectorID == rhs.sectorID && boxID == rhs.boxID && detectorID == rhs.detectorID && stripID == rhs.stripID);}
	inline bool 	operator!=(const LStrip& rhs){ return !((*this) == rhs);}
	

	void		Dump(const char* comment = nullptr, ostream& out = std::cout) const;
	Double_t 	Distance(Side_t side, const LStrip& strip);
};
//------------------------------------------------------------------------------------------------------------------------
class BmnTofGeoUtils 
{
typedef std::map<Int_t, LStrip> 	MStripType; // pair<detectorUID, Strip parameters>
typedef MStripType::const_iterator	MStripCIT;
typedef MStripType::iterator		MStripIT;

	Int_t nchambers;
	Double_t halfxwidth[TOF2_MAX_CHAMBERS];
	Double_t halfywidth[TOF2_MAX_CHAMBERS];
	Int_t chtype[TOF2_MAX_CHAMBERS];
	Int_t nstrips[TOF2_MAX_CHAMBERS];
	Double_t zchamb[TOF2_MAX_CHAMBERS];
	Double_t xcens[TOF2_MAX_CHAMBERS][TOF2_MAX_STRIPS_IN_CHAMBER];
	Double_t ycens[TOF2_MAX_CHAMBERS][TOF2_MAX_STRIPS_IN_CHAMBER];
	Double_t xmins[TOF2_MAX_CHAMBERS][TOF2_MAX_STRIPS_IN_CHAMBER];
	Double_t xmaxs[TOF2_MAX_CHAMBERS][TOF2_MAX_STRIPS_IN_CHAMBER];
	Double_t ymins[TOF2_MAX_CHAMBERS][TOF2_MAX_STRIPS_IN_CHAMBER];
	Double_t ymaxs[TOF2_MAX_CHAMBERS][TOF2_MAX_STRIPS_IN_CHAMBER];

	MStripType			mStrips; //!  indexing strips by detectorUID
public:
	BmnTofGeoUtils();
	
	void			FindNeighborStrips(TH1D* h1 = nullptr, TH2D* h2 = nullptr, bool doTest = false);
	void			ParseTGeoManager(bool useMCinput, TH2D* h1 = nullptr, bool forced = false);
	void			ParseStripsGeometry(const char *geomFile);
	const LStrip*		FindStrip(Int_t UID);
	const LStrip*		FindStrip(Int_t UID, TVector3& p);
	int			readGeom(const char *);

};
//------------------------------------------------------------------------------------------------------------------------
#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"BmnTOF", payloadCode, "@",
"BmnTOFContFact", payloadCode, "@",
"BmnTOFGeo", payloadCode, "@",
"BmnTOFGeoPar", payloadCode, "@",
"BmnTOFPoint", payloadCode, "@",
"BmnTofHitProducer", payloadCode, "@",
"BmnTofHitProducerIdeal", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__TOFDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__TOFDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__TOFDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__TOFDict() {
  TriggerDictionaryInitialization_G__TOFDict_Impl();
}
