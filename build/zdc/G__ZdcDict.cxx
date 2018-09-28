// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIalexdIbmnroot_devdIbmnrootdIbuilddIzdcdIG__ZdcDict

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
#include "BmnZdc.h"
#include "BmnZdcPoint.h"
#include "BmnZdcContFact.h"
#include "BmnZdcGeo.h"
#include "BmnZdcGeoPar.h"
#include "BmnZdcDigi.h"
#include "BmnZdcDigiPar.h"
#include "BmnZdcDigiScheme.h"
#include "BmnZdcDigiProducer.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_BmnZdcGeoPar(void *p = 0);
   static void *newArray_BmnZdcGeoPar(Long_t size, void *p);
   static void delete_BmnZdcGeoPar(void *p);
   static void deleteArray_BmnZdcGeoPar(void *p);
   static void destruct_BmnZdcGeoPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnZdcGeoPar*)
   {
      ::BmnZdcGeoPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnZdcGeoPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnZdcGeoPar", ::BmnZdcGeoPar::Class_Version(), "BmnZdcGeoPar.h", 17,
                  typeid(::BmnZdcGeoPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnZdcGeoPar::Dictionary, isa_proxy, 4,
                  sizeof(::BmnZdcGeoPar) );
      instance.SetNew(&new_BmnZdcGeoPar);
      instance.SetNewArray(&newArray_BmnZdcGeoPar);
      instance.SetDelete(&delete_BmnZdcGeoPar);
      instance.SetDeleteArray(&deleteArray_BmnZdcGeoPar);
      instance.SetDestructor(&destruct_BmnZdcGeoPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnZdcGeoPar*)
   {
      return GenerateInitInstanceLocal((::BmnZdcGeoPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnZdcGeoPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnZdc(void *p = 0);
   static void *newArray_BmnZdc(Long_t size, void *p);
   static void delete_BmnZdc(void *p);
   static void deleteArray_BmnZdc(void *p);
   static void destruct_BmnZdc(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnZdc*)
   {
      ::BmnZdc *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnZdc >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnZdc", ::BmnZdc::Class_Version(), "", 33,
                  typeid(::BmnZdc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnZdc::Dictionary, isa_proxy, 4,
                  sizeof(::BmnZdc) );
      instance.SetNew(&new_BmnZdc);
      instance.SetNewArray(&newArray_BmnZdc);
      instance.SetDelete(&delete_BmnZdc);
      instance.SetDeleteArray(&deleteArray_BmnZdc);
      instance.SetDestructor(&destruct_BmnZdc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnZdc*)
   {
      return GenerateInitInstanceLocal((::BmnZdc*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnZdc*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnZdcPoint(void *p = 0);
   static void *newArray_BmnZdcPoint(Long_t size, void *p);
   static void delete_BmnZdcPoint(void *p);
   static void deleteArray_BmnZdcPoint(void *p);
   static void destruct_BmnZdcPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnZdcPoint*)
   {
      ::BmnZdcPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnZdcPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnZdcPoint", ::BmnZdcPoint::Class_Version(), "", 174,
                  typeid(::BmnZdcPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnZdcPoint::Dictionary, isa_proxy, 4,
                  sizeof(::BmnZdcPoint) );
      instance.SetNew(&new_BmnZdcPoint);
      instance.SetNewArray(&newArray_BmnZdcPoint);
      instance.SetDelete(&delete_BmnZdcPoint);
      instance.SetDeleteArray(&deleteArray_BmnZdcPoint);
      instance.SetDestructor(&destruct_BmnZdcPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnZdcPoint*)
   {
      return GenerateInitInstanceLocal((::BmnZdcPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnZdcPoint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnZdcContFact(void *p = 0);
   static void *newArray_BmnZdcContFact(Long_t size, void *p);
   static void delete_BmnZdcContFact(void *p);
   static void deleteArray_BmnZdcContFact(void *p);
   static void destruct_BmnZdcContFact(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnZdcContFact*)
   {
      ::BmnZdcContFact *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnZdcContFact >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnZdcContFact", ::BmnZdcContFact::Class_Version(), "", 244,
                  typeid(::BmnZdcContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnZdcContFact::Dictionary, isa_proxy, 4,
                  sizeof(::BmnZdcContFact) );
      instance.SetNew(&new_BmnZdcContFact);
      instance.SetNewArray(&newArray_BmnZdcContFact);
      instance.SetDelete(&delete_BmnZdcContFact);
      instance.SetDeleteArray(&deleteArray_BmnZdcContFact);
      instance.SetDestructor(&destruct_BmnZdcContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnZdcContFact*)
   {
      return GenerateInitInstanceLocal((::BmnZdcContFact*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnZdcContFact*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnZdcGeo(void *p = 0);
   static void *newArray_BmnZdcGeo(Long_t size, void *p);
   static void delete_BmnZdcGeo(void *p);
   static void deleteArray_BmnZdcGeo(void *p);
   static void destruct_BmnZdcGeo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnZdcGeo*)
   {
      ::BmnZdcGeo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnZdcGeo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnZdcGeo", ::BmnZdcGeo::Class_Version(), "", 272,
                  typeid(::BmnZdcGeo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnZdcGeo::Dictionary, isa_proxy, 4,
                  sizeof(::BmnZdcGeo) );
      instance.SetNew(&new_BmnZdcGeo);
      instance.SetNewArray(&newArray_BmnZdcGeo);
      instance.SetDelete(&delete_BmnZdcGeo);
      instance.SetDeleteArray(&deleteArray_BmnZdcGeo);
      instance.SetDestructor(&destruct_BmnZdcGeo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnZdcGeo*)
   {
      return GenerateInitInstanceLocal((::BmnZdcGeo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnZdcGeo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnZdcDigi(void *p = 0);
   static void *newArray_BmnZdcDigi(Long_t size, void *p);
   static void delete_BmnZdcDigi(void *p);
   static void deleteArray_BmnZdcDigi(void *p);
   static void destruct_BmnZdcDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnZdcDigi*)
   {
      ::BmnZdcDigi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnZdcDigi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnZdcDigi", ::BmnZdcDigi::Class_Version(), "", 345,
                  typeid(::BmnZdcDigi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnZdcDigi::Dictionary, isa_proxy, 4,
                  sizeof(::BmnZdcDigi) );
      instance.SetNew(&new_BmnZdcDigi);
      instance.SetNewArray(&newArray_BmnZdcDigi);
      instance.SetDelete(&delete_BmnZdcDigi);
      instance.SetDeleteArray(&deleteArray_BmnZdcDigi);
      instance.SetDestructor(&destruct_BmnZdcDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnZdcDigi*)
   {
      return GenerateInitInstanceLocal((::BmnZdcDigi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnZdcDigi*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnZdcDigiPar(void *p = 0);
   static void *newArray_BmnZdcDigiPar(Long_t size, void *p);
   static void delete_BmnZdcDigiPar(void *p);
   static void deleteArray_BmnZdcDigiPar(void *p);
   static void destruct_BmnZdcDigiPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnZdcDigiPar*)
   {
      ::BmnZdcDigiPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnZdcDigiPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnZdcDigiPar", ::BmnZdcDigiPar::Class_Version(), "", 405,
                  typeid(::BmnZdcDigiPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnZdcDigiPar::Dictionary, isa_proxy, 4,
                  sizeof(::BmnZdcDigiPar) );
      instance.SetNew(&new_BmnZdcDigiPar);
      instance.SetNewArray(&newArray_BmnZdcDigiPar);
      instance.SetDelete(&delete_BmnZdcDigiPar);
      instance.SetDeleteArray(&deleteArray_BmnZdcDigiPar);
      instance.SetDestructor(&destruct_BmnZdcDigiPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnZdcDigiPar*)
   {
      return GenerateInitInstanceLocal((::BmnZdcDigiPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnZdcDigiPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnZdcDigiScheme(void *p = 0);
   static void *newArray_BmnZdcDigiScheme(Long_t size, void *p);
   static void delete_BmnZdcDigiScheme(void *p);
   static void deleteArray_BmnZdcDigiScheme(void *p);
   static void destruct_BmnZdcDigiScheme(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnZdcDigiScheme*)
   {
      ::BmnZdcDigiScheme *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnZdcDigiScheme >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnZdcDigiScheme", ::BmnZdcDigiScheme::Class_Version(), "", 453,
                  typeid(::BmnZdcDigiScheme), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnZdcDigiScheme::Dictionary, isa_proxy, 4,
                  sizeof(::BmnZdcDigiScheme) );
      instance.SetNew(&new_BmnZdcDigiScheme);
      instance.SetNewArray(&newArray_BmnZdcDigiScheme);
      instance.SetDelete(&delete_BmnZdcDigiScheme);
      instance.SetDeleteArray(&deleteArray_BmnZdcDigiScheme);
      instance.SetDestructor(&destruct_BmnZdcDigiScheme);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnZdcDigiScheme*)
   {
      return GenerateInitInstanceLocal((::BmnZdcDigiScheme*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnZdcDigiScheme*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnZdcDigiProducer(void *p = 0);
   static void *newArray_BmnZdcDigiProducer(Long_t size, void *p);
   static void delete_BmnZdcDigiProducer(void *p);
   static void deleteArray_BmnZdcDigiProducer(void *p);
   static void destruct_BmnZdcDigiProducer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnZdcDigiProducer*)
   {
      ::BmnZdcDigiProducer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnZdcDigiProducer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnZdcDigiProducer", ::BmnZdcDigiProducer::Class_Version(), "", 538,
                  typeid(::BmnZdcDigiProducer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnZdcDigiProducer::Dictionary, isa_proxy, 4,
                  sizeof(::BmnZdcDigiProducer) );
      instance.SetNew(&new_BmnZdcDigiProducer);
      instance.SetNewArray(&newArray_BmnZdcDigiProducer);
      instance.SetDelete(&delete_BmnZdcDigiProducer);
      instance.SetDeleteArray(&deleteArray_BmnZdcDigiProducer);
      instance.SetDestructor(&destruct_BmnZdcDigiProducer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnZdcDigiProducer*)
   {
      return GenerateInitInstanceLocal((::BmnZdcDigiProducer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnZdcDigiProducer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnZdcGeoPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnZdcGeoPar::Class_Name()
{
   return "BmnZdcGeoPar";
}

//______________________________________________________________________________
const char *BmnZdcGeoPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcGeoPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnZdcGeoPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcGeoPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnZdcGeoPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcGeoPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnZdcGeoPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcGeoPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnZdc::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnZdc::Class_Name()
{
   return "BmnZdc";
}

//______________________________________________________________________________
const char *BmnZdc::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZdc*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnZdc::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZdc*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnZdc::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZdc*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnZdc::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZdc*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnZdcPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnZdcPoint::Class_Name()
{
   return "BmnZdcPoint";
}

//______________________________________________________________________________
const char *BmnZdcPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnZdcPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnZdcPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnZdcPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnZdcContFact::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnZdcContFact::Class_Name()
{
   return "BmnZdcContFact";
}

//______________________________________________________________________________
const char *BmnZdcContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcContFact*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnZdcContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcContFact*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnZdcContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcContFact*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnZdcContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcContFact*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnZdcGeo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnZdcGeo::Class_Name()
{
   return "BmnZdcGeo";
}

//______________________________________________________________________________
const char *BmnZdcGeo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcGeo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnZdcGeo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcGeo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnZdcGeo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcGeo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnZdcGeo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcGeo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnZdcDigi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnZdcDigi::Class_Name()
{
   return "BmnZdcDigi";
}

//______________________________________________________________________________
const char *BmnZdcDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcDigi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnZdcDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcDigi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnZdcDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcDigi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnZdcDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcDigi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnZdcDigiPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnZdcDigiPar::Class_Name()
{
   return "BmnZdcDigiPar";
}

//______________________________________________________________________________
const char *BmnZdcDigiPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcDigiPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnZdcDigiPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcDigiPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnZdcDigiPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcDigiPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnZdcDigiPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcDigiPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnZdcDigiScheme::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnZdcDigiScheme::Class_Name()
{
   return "BmnZdcDigiScheme";
}

//______________________________________________________________________________
const char *BmnZdcDigiScheme::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcDigiScheme*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnZdcDigiScheme::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcDigiScheme*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnZdcDigiScheme::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcDigiScheme*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnZdcDigiScheme::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcDigiScheme*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnZdcDigiProducer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnZdcDigiProducer::Class_Name()
{
   return "BmnZdcDigiProducer";
}

//______________________________________________________________________________
const char *BmnZdcDigiProducer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcDigiProducer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnZdcDigiProducer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcDigiProducer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnZdcDigiProducer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcDigiProducer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnZdcDigiProducer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZdcDigiProducer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnZdcGeoPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnZdcGeoPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnZdcGeoPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnZdcGeoPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnZdcGeoPar(void *p) {
      return  p ? new(p) ::BmnZdcGeoPar : new ::BmnZdcGeoPar;
   }
   static void *newArray_BmnZdcGeoPar(Long_t nElements, void *p) {
      return p ? new(p) ::BmnZdcGeoPar[nElements] : new ::BmnZdcGeoPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnZdcGeoPar(void *p) {
      delete ((::BmnZdcGeoPar*)p);
   }
   static void deleteArray_BmnZdcGeoPar(void *p) {
      delete [] ((::BmnZdcGeoPar*)p);
   }
   static void destruct_BmnZdcGeoPar(void *p) {
      typedef ::BmnZdcGeoPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnZdcGeoPar

//______________________________________________________________________________
void BmnZdc::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnZdc.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnZdc::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnZdc::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnZdc(void *p) {
      return  p ? new(p) ::BmnZdc : new ::BmnZdc;
   }
   static void *newArray_BmnZdc(Long_t nElements, void *p) {
      return p ? new(p) ::BmnZdc[nElements] : new ::BmnZdc[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnZdc(void *p) {
      delete ((::BmnZdc*)p);
   }
   static void deleteArray_BmnZdc(void *p) {
      delete [] ((::BmnZdc*)p);
   }
   static void destruct_BmnZdc(void *p) {
      typedef ::BmnZdc current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnZdc

//______________________________________________________________________________
void BmnZdcPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnZdcPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnZdcPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnZdcPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnZdcPoint(void *p) {
      return  p ? new(p) ::BmnZdcPoint : new ::BmnZdcPoint;
   }
   static void *newArray_BmnZdcPoint(Long_t nElements, void *p) {
      return p ? new(p) ::BmnZdcPoint[nElements] : new ::BmnZdcPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnZdcPoint(void *p) {
      delete ((::BmnZdcPoint*)p);
   }
   static void deleteArray_BmnZdcPoint(void *p) {
      delete [] ((::BmnZdcPoint*)p);
   }
   static void destruct_BmnZdcPoint(void *p) {
      typedef ::BmnZdcPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnZdcPoint

//______________________________________________________________________________
void BmnZdcContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnZdcContFact.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnZdcContFact::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnZdcContFact::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnZdcContFact(void *p) {
      return  p ? new(p) ::BmnZdcContFact : new ::BmnZdcContFact;
   }
   static void *newArray_BmnZdcContFact(Long_t nElements, void *p) {
      return p ? new(p) ::BmnZdcContFact[nElements] : new ::BmnZdcContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnZdcContFact(void *p) {
      delete ((::BmnZdcContFact*)p);
   }
   static void deleteArray_BmnZdcContFact(void *p) {
      delete [] ((::BmnZdcContFact*)p);
   }
   static void destruct_BmnZdcContFact(void *p) {
      typedef ::BmnZdcContFact current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnZdcContFact

//______________________________________________________________________________
void BmnZdcGeo::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnZdcGeo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnZdcGeo::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnZdcGeo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnZdcGeo(void *p) {
      return  p ? new(p) ::BmnZdcGeo : new ::BmnZdcGeo;
   }
   static void *newArray_BmnZdcGeo(Long_t nElements, void *p) {
      return p ? new(p) ::BmnZdcGeo[nElements] : new ::BmnZdcGeo[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnZdcGeo(void *p) {
      delete ((::BmnZdcGeo*)p);
   }
   static void deleteArray_BmnZdcGeo(void *p) {
      delete [] ((::BmnZdcGeo*)p);
   }
   static void destruct_BmnZdcGeo(void *p) {
      typedef ::BmnZdcGeo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnZdcGeo

//______________________________________________________________________________
void BmnZdcDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnZdcDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnZdcDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnZdcDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnZdcDigi(void *p) {
      return  p ? new(p) ::BmnZdcDigi : new ::BmnZdcDigi;
   }
   static void *newArray_BmnZdcDigi(Long_t nElements, void *p) {
      return p ? new(p) ::BmnZdcDigi[nElements] : new ::BmnZdcDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnZdcDigi(void *p) {
      delete ((::BmnZdcDigi*)p);
   }
   static void deleteArray_BmnZdcDigi(void *p) {
      delete [] ((::BmnZdcDigi*)p);
   }
   static void destruct_BmnZdcDigi(void *p) {
      typedef ::BmnZdcDigi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnZdcDigi

//______________________________________________________________________________
void BmnZdcDigiPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnZdcDigiPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnZdcDigiPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnZdcDigiPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnZdcDigiPar(void *p) {
      return  p ? new(p) ::BmnZdcDigiPar : new ::BmnZdcDigiPar;
   }
   static void *newArray_BmnZdcDigiPar(Long_t nElements, void *p) {
      return p ? new(p) ::BmnZdcDigiPar[nElements] : new ::BmnZdcDigiPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnZdcDigiPar(void *p) {
      delete ((::BmnZdcDigiPar*)p);
   }
   static void deleteArray_BmnZdcDigiPar(void *p) {
      delete [] ((::BmnZdcDigiPar*)p);
   }
   static void destruct_BmnZdcDigiPar(void *p) {
      typedef ::BmnZdcDigiPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnZdcDigiPar

//______________________________________________________________________________
void BmnZdcDigiScheme::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnZdcDigiScheme.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnZdcDigiScheme::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnZdcDigiScheme::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnZdcDigiScheme(void *p) {
      return  p ? new(p) ::BmnZdcDigiScheme : new ::BmnZdcDigiScheme;
   }
   static void *newArray_BmnZdcDigiScheme(Long_t nElements, void *p) {
      return p ? new(p) ::BmnZdcDigiScheme[nElements] : new ::BmnZdcDigiScheme[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnZdcDigiScheme(void *p) {
      delete ((::BmnZdcDigiScheme*)p);
   }
   static void deleteArray_BmnZdcDigiScheme(void *p) {
      delete [] ((::BmnZdcDigiScheme*)p);
   }
   static void destruct_BmnZdcDigiScheme(void *p) {
      typedef ::BmnZdcDigiScheme current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnZdcDigiScheme

//______________________________________________________________________________
void BmnZdcDigiProducer::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnZdcDigiProducer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnZdcDigiProducer::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnZdcDigiProducer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnZdcDigiProducer(void *p) {
      return  p ? new(p) ::BmnZdcDigiProducer : new ::BmnZdcDigiProducer;
   }
   static void *newArray_BmnZdcDigiProducer(Long_t nElements, void *p) {
      return p ? new(p) ::BmnZdcDigiProducer[nElements] : new ::BmnZdcDigiProducer[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnZdcDigiProducer(void *p) {
      delete ((::BmnZdcDigiProducer*)p);
   }
   static void deleteArray_BmnZdcDigiProducer(void *p) {
      delete [] ((::BmnZdcDigiProducer*)p);
   }
   static void destruct_BmnZdcDigiProducer(void *p) {
      typedef ::BmnZdcDigiProducer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnZdcDigiProducer

namespace {
  void TriggerDictionaryInitialization_G__ZdcDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/opt/fairroot/install/include",
"/home/alex/bmnroot_dev/bmnroot/mcstack",
"/home/alex/bmnroot_dev/bmnroot/bmndata",
"/home/alex/bmnroot_dev/bmnroot/zdc",
"/opt/fairsoft/install/include",
"/opt/fairsoft/install/include/root",
"/opt/fairsoft/install/include/root",
"/home/alex/bmnroot_dev/bmnroot/build/zdc/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__ZdcDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$BmnZdcGeoPar.h")))  BmnZdcGeoPar;
class BmnZdc;
class BmnZdcPoint;
class __attribute__((annotate(R"ATTRDUMP(Factory for all HYP parameter containers)ATTRDUMP"))) BmnZdcContFact;
class __attribute__((annotate(R"ATTRDUMP(Class for Hyp)ATTRDUMP"))) BmnZdcGeo;
class BmnZdcDigi;
class BmnZdcDigiPar;
class BmnZdcDigiScheme;
class BmnZdcDigiProducer;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__ZdcDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
/*************************************************************************************
 *
 *         Class BmnZdc
 *         
 *  Adopted for BMN by:   Elena Litvinenko
 *  e-mail:   litvin@nf.jinr.ru
 *  Version:  06-11-2015   
 *
 ************************************************************************************/

#ifndef BMNZDC_H
#define BMNZDC_H


#include "TClonesArray.h"
#include "TVector3.h"
#include "TLorentzVector.h"
#include "FairDetector.h"
#include "BmnZdcGeoPar.h"

using namespace std;


class TClonesArray;
class BmnZdcPoint;
class FairVolume;

class BmnZdc : public FairDetector
{

 public:

  /** Default constructor **/
  BmnZdc();


  /** Standard constructor.
   *@param name    detetcor name
   *@param active  sensitivity flag
   **/
  BmnZdc(const char* name, Bool_t active);


  /** Destructor **/
  virtual ~BmnZdc();


  /** Virtual method Initialize
   ** Initialises detector. Stores volume IDs for MUO detector and mirror.
   **/
  virtual void Initialize();


  /** Virtual method ProcessHits
   **
   ** Defines the action to be taken when a step is inside the
   ** active volume. Creates BmnZdcPoints and BmnZdcMirrorPoints and adds 
   ** them to the collections.
   *@param vol  Pointer to the active volume
   **/
  virtual Bool_t ProcessHits(FairVolume* vol = 0);


  /** Virtual method EndOfEvent
   **
   ** If verbosity level is set, print hit collection at the
   ** end of the event and resets it afterwards.
   **/
  virtual void EndOfEvent();


  virtual void BeginEvent();
  /** Virtual method Register
   **
   ** Registers the hit collection in the ROOT manager.
   **/
  virtual void Register();


  /** Accessor to the hit collection **/
  virtual TClonesArray* GetCollection(Int_t iColl) const;


  /** Virtual method Print
   **
   ** Screen output of hit collection.
   **/
  virtual void Print() const;    


  /** Virtual method Reset
   **
   ** Clears the hit collection
   **/
  virtual void Reset();


  /** Virtual method CopyClones
   **
   ** Copies the hit collection with a given track index offset
   *@param cl1     Origin
   *@param cl2     Target
   *@param offset  Index offset
   **/
  virtual void CopyClones(TClonesArray* cl1, TClonesArray* cl2,
			  Int_t offset);


  /** Virtual method Construct geometry
   **
   **/
  virtual void ConstructGeometry();

  BmnZdcPoint* AddHit(Int_t trackID, Int_t module_groupID,  Int_t copyNo, Int_t copyNoMother,
		      TVector3 pos, TVector3 mom,
		      Double_t tof, Double_t length, Double_t eLoss);

 private:
  Int_t          fTrackID;           //!  track index
  Int_t          fVolumeID;          //!  volume id
  Int_t          fEventID;           //!  event id
  TLorentzVector fPos;               //!  position
  TLorentzVector fMom;               //!  momentum
  Double32_t     fTime;              //!  time
  Double32_t     fLength;            //!  length
  Double32_t     fELoss;             //!  energy loss
  Int_t fPosIndex;      //! 
  Int_t volDetector;     //!  MC volume ID of MUO
  
  TClonesArray* fZdcCollection;        //! Hit collection
  
  // reset all parameters   
  void ResetParameters();

  ClassDef(BmnZdc,2)

}; 


//------------------------------------------------------------------------------------------------------------------------
inline void BmnZdc::ResetParameters() 
{
	fTrackID = fVolumeID = 0;
	fPos.SetXYZM(0.0, 0.0, 0.0, 0.0);
	fMom.SetXYZM(0.0, 0.0, 0.0, 0.0);
	fTime = fLength = fELoss = 0;
	fPosIndex = 0;
};
//------------------------------------------------------------------------------------------------------------------------

#endif
// ------------------------------------------------------------------------
// -----                     BmnZdcPoint header file                  -----
// -----                     litvin@nf.jinr.ru                        -----
// -----                     Last updated 22-Feb-2012                 -----
// ------------------------------------------------------------------------

#ifndef BMNZDCPOINT_H
#define BMNZDCPOINT_H

#include "TObject.h"
#include "TVector3.h"
#include "TLorentzVector.h"
#include "FairMCPoint.h"

using namespace std;

class BmnZdcPoint : public FairMCPoint
{

 public:

  /** Default constructor **/
  BmnZdcPoint();


  /** Constructor with arguments
   *@param trackID  Index of MCTrack
   *@param module_groupID    Detector ID (at present, volume MC number)
   *@param copyNo         Number of active layer inside ZDC module
   *@param copyNoMother   ZDC module number
   *@param pos      Coordinates  [cm]
   *@param mom      Momentum of track [GeV]
   *@param tof      Time since event start [ns]
   *@param length   Track length since creation [cm]
   *@param eLoss    Energy deposit [GeV]
   **/
  
  BmnZdcPoint(Int_t trackID, Int_t module_groupID, 
	      Int_t copyNo, Int_t copyNoMother, 
	      TVector3 pos, TVector3 mom,
	      Double_t tof, Double_t length, 
	      Double_t eLoss, UInt_t EventId=0 );
  
  /** Copy constructor **/
  BmnZdcPoint(const BmnZdcPoint& point) { *this = point; };
  

  /** Destructor **/
  virtual ~BmnZdcPoint();
  

  /** Accessors **/
  Short_t GetCopy()        const {return nCopy; };
  Short_t GetCopyMother()  const {return nCopyMother; };

  /** Modifiers **/
  void SetCopy(Short_t i)          { nCopy    = i; }; 
  void SetCopyMother(Short_t i)    { nCopyMother  = i; }; 
   
  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;


 protected:

  Short_t nCopy;                // Copy number (for scintillator layer)
  Short_t nCopyMother;          // Copy number of mother volume (for Module inside its Group)
    
  ClassDef(BmnZdcPoint,1)

};

#endif
// -------------------------------------------------------------------------
// -----                     BmnZdcContFact header file                -----
// -------------------------------------------------------------------------


#ifndef BMNZDCCONTFACT_H
#define BMNZDCCONTFACT_H

#include "FairContFact.h"

class FairContainer;

class BmnZdcContFact : public FairContFact {
private:
  void setAllContainers();
public:
  BmnZdcContFact();
  ~BmnZdcContFact() {}
  FairParSet* createContainer(FairContainer*);

  ClassDef( BmnZdcContFact,0) // Factory for all HYP parameter containers
};

#endif  /* !BMNZDCCONTFACT_H */
/*************************************************************************************
 *
 *         Class BmnZdcGeo
 *         
 *  Adopted for BMN by:   Elena Litvinenko
 *  e-mail:   litvin@nf.jinr.ru
 *  Version:  06-11-2015   
 *
 ************************************************************************************/

#ifndef BMNGEOZDC_H
#define BMNGEOZDC_H

#include "FairGeoSet.h"

class  BmnZdcGeo : public FairGeoSet {
protected:
  char modName[20];  // name of module
  char eleName[20];  // substring for elements in module
  
public:
  BmnZdcGeo();
  ~BmnZdcGeo() {}
  const char* getModuleName(Int_t);
  const char* getEleName(Int_t);
  
  ClassDef(BmnZdcGeo,0) // Class for Hyp
};

#endif  /* !BMNGEOZDC_H */



/*************************************************************************************
 *
 *         Class BmnZdcGeoPar
 *         
 *  Adopted for BMN by:   Elena Litvinenko
 *  e-mail:   litvin@nf.jinr.ru
 *  Version:  06-11-2015   
 *
 ************************************************************************************/

#ifndef BMNGEOZDCPAR_H
#define BMNGEOZDCPAR_H

#include "FairParGenericSet.h"
#include "TObjArray.h"

class BmnZdcGeoPar : public FairParGenericSet {
public:
  TObjArray      *fGeoSensNodes; /** List of FairGeoNodes for sensitive  volumes */
  TObjArray      *fGeoPassNodes; /** List of FairGeoNodes for passive  volumes */
  
  BmnZdcGeoPar(const char* name="BmnZdcGeoPar",
	     const char* title="Zdc Geometry Parameters",
             const char* context="ZdcDefaultContext");
  ~BmnZdcGeoPar(void);
  void clear(void);
  void putParams(FairParamList*);
  Bool_t getParams(FairParamList*);
  TObjArray             *GetGeoSensitiveNodes(){return fGeoSensNodes;}
  TObjArray             *GetGeoPassiveNodes(){return fGeoPassNodes;}

 
  
  ClassDef(BmnZdcGeoPar,1)
};

#endif /* !BMNGEOZDCPAR_H */
/*************************************************************************************
 *
 *            BmnZdcDigi 
 *    Class for digital data taken from BmnZdc detector 
 *         
 *  Author:   Elena Litvinenko
 *  e-mail:   litvin@nf.jinr.ru
 *  Version:  18-11-2015
 *
 ************************************************************************************/

#ifndef BMNZDCDIGI_H
#define BMNZDCDIGI_H

#include "BmnZdcPoint.h"

class BmnZdcDigi: public TObject
{
 public:

  BmnZdcDigi();
  BmnZdcDigi(Int_t pfGroupID, Int_t pfModuleID, Int_t pfChannelID, Double_t   pfELoss, Double_t   pfELossDigi=0 );
  BmnZdcDigi(BmnZdcPoint *p);

  virtual ~BmnZdcDigi();
  void Clear();
  
  void InitStatic();
  virtual void Print(const Option_t* opt ="");


  inline Int_t  GetGroupID() { return fGroupID; } 
  inline Int_t  GetModuleID() { return fModuleID; } 
  inline Int_t  GetChannelID()  { return fChannelID; } 
  inline Double_t GetELossDigi()  { return fELossDigi; } 
  inline Double_t  GetELoss()               { return fELoss; }

  inline Int_t    SetGroupID(UInt_t pfGroupID)         { fGroupID=pfGroupID;       return fGroupID; } 
  inline Int_t    SetChannelID(UInt_t pfChannelID)           { fChannelID=pfChannelID;         return fChannelID; } 


  inline Double_t AddEloss    (Double_t pfELoss)       { fELoss += pfELoss;  return fELoss;}
  UInt_t   AddZdcPoint (BmnZdcPoint *p);

 protected:


  Int_t    fGroupID;         // Module Group number = "size" (1: central small, 2 - periferal big, can be also 0 - for hardware summators)
  Int_t    fModuleID;        // Module number inside module group (36 central small modules, up to 58 periferal big modules)
  Int_t    fChannelID;       // Hardware ZDC channel number (corresponds to the ascii map file)
  Double_t   fELossDigi;     // Digital response of the ZDC channel (taken from experimental data)
  Double_t fELoss;           // Sum of the energy losses from MC or from experimental data after calibration

  ClassDef(BmnZdcDigi,1);

};

#endif // BMNZDCDIGI_H
/*************************************************************************************
 *
 *         BmnZdcDigiPar
 *    Container class for BmnZdc digitisation parameters  
 *         
 *  Author:   Elena Litvinenko
 *  e-mail:   litvin@nf.jinr.ru
 *  Version:  18-11-2015   
 *
 ************************************************************************************/

#ifndef BMNZDCDIGIPAR_H
#define BMNZDCDIGIPAR_H

#include "FairParGenericSet.h"
#include "TObjArray.h"

class BmnZdcDigiPar: public FairParGenericSet
{

 public :

  BmnZdcDigiPar (const char *name="BmnZdcDigiPar", const char *title="ZDC Digi Parameters",
		 const char *context="TestDefaultContext");
  virtual ~BmnZdcDigiPar() {};

  void putParams(FairParamList* list);
  Bool_t getParams(FairParamList* list);
 
 private:


  ClassDef(BmnZdcDigiPar,1);

};
#endif // BMNZDCDIGIPAR_H
/*************************************************************************************
 *
 *         Class BmnZdcDigiScheme
 *         
 *  Author:   Elena Litvinenko
 *  e-mail:   litvin@nf.jinr.ru
 *  Version:  18-11-2015   
 *
 ************************************************************************************/

#ifndef BMNZDCDIGISCHEME_H
#define BMNZDCDIGISCHEME_H

#include "FairGeoNode.h"
#include "BmnZdcGeoPar.h"
#include "BmnZdcDigiPar.h"

#include "TObject.h"
#include <map>
#include <vector>

using std::vector;
using std::pair;

  typedef std::vector<Int_t>          BmnZdcVolId_t;    // now - { VolumeId, MotherMotherCopyNo}
  typedef std::vector<Int_t>          BmnZdcDigiId_t;   // now - {GroupID, ModuleID, ChannelID}
  typedef std::vector<Double_t>       BmnZdcVolInfo_t;  // now - Center X,Y,Z; and Dx,Dy,Dz from center to the corner

class BmnZdcDigiScheme: public TObject
{
 public:

  BmnZdcDigiScheme();
  virtual ~BmnZdcDigiScheme();

  static BmnZdcDigiScheme* Instance();
  Bool_t Init    (BmnZdcGeoPar*    geoPar, BmnZdcDigiPar*    digiPar, Int_t pVerbose=0);

  Bool_t AddNodes (TObjArray* sensNodes, Int_t pVerbose=0);
  Bool_t CalcDimensions (Int_t pGlobalDetectorNumber, Int_t &nx, Int_t &ny, Int_t &nz);

  BmnZdcVolId_t*   CreateVolElement (FairGeoNode* nod, Int_t nodeNumber,
				     BmnZdcDigiId_t* right, Int_t pVerbose);
  Bool_t           CreateVolCopyElements  (BmnZdcVolId_t* left, BmnZdcDigiId_t* right);
  BmnZdcVolInfo_t* CreateVolInfoElement (FairGeoNode* nod, Int_t pVerbose);
  Bool_t           CreateVolInfoCopyElements  (BmnZdcDigiId_t* right, BmnZdcVolInfo_t *volInfo );

  Bool_t          IsVolumeExist (BmnZdcVolId_t* pVolId);
  BmnZdcDigiId_t  GetDigiId     (BmnZdcVolId_t* pVolId);
  Int_t           GetGroupID (BmnZdcVolId_t* pVolId);
  Int_t           GetChannelID  (BmnZdcVolId_t* pVolId);
  Bool_t          GetGroupIdModIdChanId (Int_t pMcVolumeNumber, Int_t pMcCopyNumber, Int_t pMotherCopyNumber, 
				  Int_t pMotherMotherCopyNumber, Int_t &pGroupId, Int_t &pChanId, Int_t &pModId);  

  Bool_t GetVolCenterXYZ        (BmnZdcDigiId_t* pDigiId, Double_t &x, Double_t &y,Double_t &z);
  Bool_t GetVolDxDyDz           (BmnZdcDigiId_t* pDigiId, Double_t &Dx, Double_t &Dy, Double_t &Dz);
  BmnZdcVolInfo_t* GetVolInfo (BmnZdcVolId_t* pVolId);

  void Print();
  void PrintVolume (Int_t volID, Int_t copyNoMotherMother=1);

  void GetZdcDimensions (Int_t &nx, Int_t &ny, Int_t &nz);
 
  BmnZdcDigiId_t  GetDigiIdFromCoords  (Double_t x, Double_t y, Double_t z);
  BmnZdcDigiId_t  GetDigiIdFromVolumeData  (Int_t pMcVolumeNumber, Int_t pMotherMotherCopyNumber);
  void SplitDigiID (BmnZdcDigiId_t digiID, Int_t &module_groupID, Int_t &modID, Int_t &chanID);

  inline BmnZdcDigiPar*     GetZdcDigiPar()      {return fZdcDigiPar;};

  protected:

  static BmnZdcDigiScheme* fInstance;       // Instance of singleton object
  static Int_t             fRefcount;       // Counter of references on this 
  static Bool_t            fInitialized;    // Defines whether was initialized

 private:

  std::map<BmnZdcVolId_t,BmnZdcDigiId_t> fVolToDigiIdMap;      //! correspondence for all active volumes (Zdc+ZdcPsd)
  std::map<BmnZdcDigiId_t,BmnZdcVolInfo_t*> fDigiToVolInfoMap; //! correspondence for active volumes 

  Int_t Nx;
  Int_t Ny;
  Int_t Nz;

  BmnZdcDigiPar*    fZdcDigiPar;       //! 
  TObjArray*        fPasNodes;         //!

  ClassDef(BmnZdcDigiScheme,1);

};

#endif // BMNZDCDIGISCHEME_H
// -------------------------------------------------------------------------
// -----                 BmnZdcHitproducer header file                 -----
// -----                 Created 14/08/06  by S.Spataro                -----
// -------------------------------------------------------------------------

#ifndef BMNZDCDIGIPRODUCER_H
#define BMNZDCDIGIPRODUCER_H 1


#include <map>
#include "FairTask.h"
#include "TClonesArray.h"
#include "BmnZdcDigi.h"
#include "BmnZdcGeoPar.h"
#include "BmnZdcDigiScheme.h"

#include "TParameter.h"
#include "TH2F.h"


class BmnZdcDigiProducer : public FairTask
{

 public:

  /** Default constructor **/  
  BmnZdcDigiProducer(const char* name="BmnZdc Digi Producer");


  /** Destructor **/
  ~BmnZdcDigiProducer();


  /** Virtual method Init **/
  virtual InitStatus Init();


  /** Virtual method Exec **/
  virtual void Exec(Option_t* opt);

  BmnZdcDigi* AddHit(Int_t module_groupID, Int_t modID, Int_t chanID,Float_t energy);

  void CreateHistograms ( BmnZdcDigiId_t *pDigiID);

 private: 
   
  virtual void SetParContainers(); 
 

 private: 
   
  /** Input array of BmnZdcPoints **/
  TClonesArray* fPointArray;

  /** Output array of BmnZdcDigi **/
  TClonesArray* fDigiArray; 

  TClonesArray* fELossZdcValue;

  TClonesArray* fELossZdcHisto;

  /** Input geometry parameters container**/
  BmnZdcGeoPar* fGeoPar;

  /** Output Histograms of X-Y energy map **/
  TH2F *fHistZdcEn;

  
  ClassDef(BmnZdcDigiProducer,1);
  
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"BmnZdc", payloadCode, "@",
"BmnZdcContFact", payloadCode, "@",
"BmnZdcDigi", payloadCode, "@",
"BmnZdcDigiPar", payloadCode, "@",
"BmnZdcDigiProducer", payloadCode, "@",
"BmnZdcDigiScheme", payloadCode, "@",
"BmnZdcGeo", payloadCode, "@",
"BmnZdcGeoPar", payloadCode, "@",
"BmnZdcPoint", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__ZdcDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__ZdcDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__ZdcDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__ZdcDict() {
  TriggerDictionaryInitialization_G__ZdcDict_Impl();
}
