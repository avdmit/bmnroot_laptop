// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIalexdIbmnroot_devdIbmnrootdIbuilddIpsddIG__PsdDict

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
#include "CbmPsd.h"
#include "CbmGeoPsd.h"
#include "CbmGeoPsdPar.h"
#include "CbmPsdv1.h"
#include "CbmPsdIdealDigitizer.h"
#include "CbmPsdHitProducer.h"
#include "CbmPsdReactionPlaneMaker.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_CbmPsd(void *p = 0);
   static void *newArray_CbmPsd(Long_t size, void *p);
   static void delete_CbmPsd(void *p);
   static void deleteArray_CbmPsd(void *p);
   static void destruct_CbmPsd(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmPsd*)
   {
      ::CbmPsd *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmPsd >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmPsd", ::CbmPsd::Class_Version(), "", 32,
                  typeid(::CbmPsd), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmPsd::Dictionary, isa_proxy, 4,
                  sizeof(::CbmPsd) );
      instance.SetNew(&new_CbmPsd);
      instance.SetNewArray(&newArray_CbmPsd);
      instance.SetDelete(&delete_CbmPsd);
      instance.SetDeleteArray(&deleteArray_CbmPsd);
      instance.SetDestructor(&destruct_CbmPsd);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmPsd*)
   {
      return GenerateInitInstanceLocal((::CbmPsd*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmPsd*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmGeoPsd(void *p = 0);
   static void *newArray_CbmGeoPsd(Long_t size, void *p);
   static void delete_CbmGeoPsd(void *p);
   static void deleteArray_CbmGeoPsd(void *p);
   static void destruct_CbmGeoPsd(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmGeoPsd*)
   {
      ::CbmGeoPsd *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmGeoPsd >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmGeoPsd", ::CbmGeoPsd::Class_Version(), "", 178,
                  typeid(::CbmGeoPsd), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmGeoPsd::Dictionary, isa_proxy, 4,
                  sizeof(::CbmGeoPsd) );
      instance.SetNew(&new_CbmGeoPsd);
      instance.SetNewArray(&newArray_CbmGeoPsd);
      instance.SetDelete(&delete_CbmGeoPsd);
      instance.SetDeleteArray(&deleteArray_CbmGeoPsd);
      instance.SetDestructor(&destruct_CbmGeoPsd);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmGeoPsd*)
   {
      return GenerateInitInstanceLocal((::CbmGeoPsd*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmGeoPsd*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmGeoPsdPar(void *p = 0);
   static void *newArray_CbmGeoPsdPar(Long_t size, void *p);
   static void delete_CbmGeoPsdPar(void *p);
   static void deleteArray_CbmGeoPsdPar(void *p);
   static void destruct_CbmGeoPsdPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmGeoPsdPar*)
   {
      ::CbmGeoPsdPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmGeoPsdPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmGeoPsdPar", ::CbmGeoPsdPar::Class_Version(), "", 207,
                  typeid(::CbmGeoPsdPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmGeoPsdPar::Dictionary, isa_proxy, 4,
                  sizeof(::CbmGeoPsdPar) );
      instance.SetNew(&new_CbmGeoPsdPar);
      instance.SetNewArray(&newArray_CbmGeoPsdPar);
      instance.SetDelete(&delete_CbmGeoPsdPar);
      instance.SetDeleteArray(&deleteArray_CbmGeoPsdPar);
      instance.SetDestructor(&destruct_CbmGeoPsdPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmGeoPsdPar*)
   {
      return GenerateInitInstanceLocal((::CbmGeoPsdPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmGeoPsdPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmPsdv1(void *p = 0);
   static void *newArray_CbmPsdv1(Long_t size, void *p);
   static void delete_CbmPsdv1(void *p);
   static void deleteArray_CbmPsdv1(void *p);
   static void destruct_CbmPsdv1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmPsdv1*)
   {
      ::CbmPsdv1 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmPsdv1 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmPsdv1", ::CbmPsdv1::Class_Version(), "", 261,
                  typeid(::CbmPsdv1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmPsdv1::Dictionary, isa_proxy, 4,
                  sizeof(::CbmPsdv1) );
      instance.SetNew(&new_CbmPsdv1);
      instance.SetNewArray(&newArray_CbmPsdv1);
      instance.SetDelete(&delete_CbmPsdv1);
      instance.SetDeleteArray(&deleteArray_CbmPsdv1);
      instance.SetDestructor(&destruct_CbmPsdv1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmPsdv1*)
   {
      return GenerateInitInstanceLocal((::CbmPsdv1*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmPsdv1*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmPsdIdealDigitizer(void *p = 0);
   static void *newArray_CbmPsdIdealDigitizer(Long_t size, void *p);
   static void delete_CbmPsdIdealDigitizer(void *p);
   static void deleteArray_CbmPsdIdealDigitizer(void *p);
   static void destruct_CbmPsdIdealDigitizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmPsdIdealDigitizer*)
   {
      ::CbmPsdIdealDigitizer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmPsdIdealDigitizer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmPsdIdealDigitizer", ::CbmPsdIdealDigitizer::Class_Version(), "", 375,
                  typeid(::CbmPsdIdealDigitizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmPsdIdealDigitizer::Dictionary, isa_proxy, 4,
                  sizeof(::CbmPsdIdealDigitizer) );
      instance.SetNew(&new_CbmPsdIdealDigitizer);
      instance.SetNewArray(&newArray_CbmPsdIdealDigitizer);
      instance.SetDelete(&delete_CbmPsdIdealDigitizer);
      instance.SetDeleteArray(&deleteArray_CbmPsdIdealDigitizer);
      instance.SetDestructor(&destruct_CbmPsdIdealDigitizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmPsdIdealDigitizer*)
   {
      return GenerateInitInstanceLocal((::CbmPsdIdealDigitizer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmPsdIdealDigitizer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmPsdHitProducer(void *p = 0);
   static void *newArray_CbmPsdHitProducer(Long_t size, void *p);
   static void delete_CbmPsdHitProducer(void *p);
   static void deleteArray_CbmPsdHitProducer(void *p);
   static void destruct_CbmPsdHitProducer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmPsdHitProducer*)
   {
      ::CbmPsdHitProducer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmPsdHitProducer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmPsdHitProducer", ::CbmPsdHitProducer::Class_Version(), "", 441,
                  typeid(::CbmPsdHitProducer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmPsdHitProducer::Dictionary, isa_proxy, 4,
                  sizeof(::CbmPsdHitProducer) );
      instance.SetNew(&new_CbmPsdHitProducer);
      instance.SetNewArray(&newArray_CbmPsdHitProducer);
      instance.SetDelete(&delete_CbmPsdHitProducer);
      instance.SetDeleteArray(&deleteArray_CbmPsdHitProducer);
      instance.SetDestructor(&destruct_CbmPsdHitProducer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmPsdHitProducer*)
   {
      return GenerateInitInstanceLocal((::CbmPsdHitProducer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmPsdHitProducer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmPsdReactionPlaneMaker(void *p = 0);
   static void *newArray_CbmPsdReactionPlaneMaker(Long_t size, void *p);
   static void delete_CbmPsdReactionPlaneMaker(void *p);
   static void deleteArray_CbmPsdReactionPlaneMaker(void *p);
   static void destruct_CbmPsdReactionPlaneMaker(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmPsdReactionPlaneMaker*)
   {
      ::CbmPsdReactionPlaneMaker *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmPsdReactionPlaneMaker >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmPsdReactionPlaneMaker", ::CbmPsdReactionPlaneMaker::Class_Version(), "", 510,
                  typeid(::CbmPsdReactionPlaneMaker), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmPsdReactionPlaneMaker::Dictionary, isa_proxy, 4,
                  sizeof(::CbmPsdReactionPlaneMaker) );
      instance.SetNew(&new_CbmPsdReactionPlaneMaker);
      instance.SetNewArray(&newArray_CbmPsdReactionPlaneMaker);
      instance.SetDelete(&delete_CbmPsdReactionPlaneMaker);
      instance.SetDeleteArray(&deleteArray_CbmPsdReactionPlaneMaker);
      instance.SetDestructor(&destruct_CbmPsdReactionPlaneMaker);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmPsdReactionPlaneMaker*)
   {
      return GenerateInitInstanceLocal((::CbmPsdReactionPlaneMaker*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmPsdReactionPlaneMaker*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr CbmPsd::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmPsd::Class_Name()
{
   return "CbmPsd";
}

//______________________________________________________________________________
const char *CbmPsd::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmPsd*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmPsd::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmPsd*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmPsd::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmPsd*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmPsd::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmPsd*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmGeoPsd::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmGeoPsd::Class_Name()
{
   return "CbmGeoPsd";
}

//______________________________________________________________________________
const char *CbmGeoPsd::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmGeoPsd*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmGeoPsd::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmGeoPsd*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmGeoPsd::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmGeoPsd*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmGeoPsd::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmGeoPsd*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmGeoPsdPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmGeoPsdPar::Class_Name()
{
   return "CbmGeoPsdPar";
}

//______________________________________________________________________________
const char *CbmGeoPsdPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmGeoPsdPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmGeoPsdPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmGeoPsdPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmGeoPsdPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmGeoPsdPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmGeoPsdPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmGeoPsdPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmPsdv1::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmPsdv1::Class_Name()
{
   return "CbmPsdv1";
}

//______________________________________________________________________________
const char *CbmPsdv1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmPsdv1*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmPsdv1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmPsdv1*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmPsdv1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmPsdv1*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmPsdv1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmPsdv1*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmPsdIdealDigitizer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmPsdIdealDigitizer::Class_Name()
{
   return "CbmPsdIdealDigitizer";
}

//______________________________________________________________________________
const char *CbmPsdIdealDigitizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmPsdIdealDigitizer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmPsdIdealDigitizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmPsdIdealDigitizer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmPsdIdealDigitizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmPsdIdealDigitizer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmPsdIdealDigitizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmPsdIdealDigitizer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmPsdHitProducer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmPsdHitProducer::Class_Name()
{
   return "CbmPsdHitProducer";
}

//______________________________________________________________________________
const char *CbmPsdHitProducer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmPsdHitProducer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmPsdHitProducer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmPsdHitProducer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmPsdHitProducer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmPsdHitProducer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmPsdHitProducer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmPsdHitProducer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmPsdReactionPlaneMaker::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmPsdReactionPlaneMaker::Class_Name()
{
   return "CbmPsdReactionPlaneMaker";
}

//______________________________________________________________________________
const char *CbmPsdReactionPlaneMaker::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmPsdReactionPlaneMaker*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmPsdReactionPlaneMaker::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmPsdReactionPlaneMaker*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmPsdReactionPlaneMaker::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmPsdReactionPlaneMaker*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmPsdReactionPlaneMaker::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmPsdReactionPlaneMaker*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void CbmPsd::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmPsd.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmPsd::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmPsd::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmPsd(void *p) {
      return  p ? new(p) ::CbmPsd : new ::CbmPsd;
   }
   static void *newArray_CbmPsd(Long_t nElements, void *p) {
      return p ? new(p) ::CbmPsd[nElements] : new ::CbmPsd[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmPsd(void *p) {
      delete ((::CbmPsd*)p);
   }
   static void deleteArray_CbmPsd(void *p) {
      delete [] ((::CbmPsd*)p);
   }
   static void destruct_CbmPsd(void *p) {
      typedef ::CbmPsd current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmPsd

//______________________________________________________________________________
void CbmGeoPsd::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmGeoPsd.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmGeoPsd::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmGeoPsd::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmGeoPsd(void *p) {
      return  p ? new(p) ::CbmGeoPsd : new ::CbmGeoPsd;
   }
   static void *newArray_CbmGeoPsd(Long_t nElements, void *p) {
      return p ? new(p) ::CbmGeoPsd[nElements] : new ::CbmGeoPsd[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmGeoPsd(void *p) {
      delete ((::CbmGeoPsd*)p);
   }
   static void deleteArray_CbmGeoPsd(void *p) {
      delete [] ((::CbmGeoPsd*)p);
   }
   static void destruct_CbmGeoPsd(void *p) {
      typedef ::CbmGeoPsd current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmGeoPsd

//______________________________________________________________________________
void CbmGeoPsdPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmGeoPsdPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmGeoPsdPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmGeoPsdPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmGeoPsdPar(void *p) {
      return  p ? new(p) ::CbmGeoPsdPar : new ::CbmGeoPsdPar;
   }
   static void *newArray_CbmGeoPsdPar(Long_t nElements, void *p) {
      return p ? new(p) ::CbmGeoPsdPar[nElements] : new ::CbmGeoPsdPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmGeoPsdPar(void *p) {
      delete ((::CbmGeoPsdPar*)p);
   }
   static void deleteArray_CbmGeoPsdPar(void *p) {
      delete [] ((::CbmGeoPsdPar*)p);
   }
   static void destruct_CbmGeoPsdPar(void *p) {
      typedef ::CbmGeoPsdPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmGeoPsdPar

//______________________________________________________________________________
void CbmPsdv1::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmPsdv1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmPsdv1::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmPsdv1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmPsdv1(void *p) {
      return  p ? new(p) ::CbmPsdv1 : new ::CbmPsdv1;
   }
   static void *newArray_CbmPsdv1(Long_t nElements, void *p) {
      return p ? new(p) ::CbmPsdv1[nElements] : new ::CbmPsdv1[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmPsdv1(void *p) {
      delete ((::CbmPsdv1*)p);
   }
   static void deleteArray_CbmPsdv1(void *p) {
      delete [] ((::CbmPsdv1*)p);
   }
   static void destruct_CbmPsdv1(void *p) {
      typedef ::CbmPsdv1 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmPsdv1

//______________________________________________________________________________
void CbmPsdIdealDigitizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmPsdIdealDigitizer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmPsdIdealDigitizer::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmPsdIdealDigitizer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmPsdIdealDigitizer(void *p) {
      return  p ? new(p) ::CbmPsdIdealDigitizer : new ::CbmPsdIdealDigitizer;
   }
   static void *newArray_CbmPsdIdealDigitizer(Long_t nElements, void *p) {
      return p ? new(p) ::CbmPsdIdealDigitizer[nElements] : new ::CbmPsdIdealDigitizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmPsdIdealDigitizer(void *p) {
      delete ((::CbmPsdIdealDigitizer*)p);
   }
   static void deleteArray_CbmPsdIdealDigitizer(void *p) {
      delete [] ((::CbmPsdIdealDigitizer*)p);
   }
   static void destruct_CbmPsdIdealDigitizer(void *p) {
      typedef ::CbmPsdIdealDigitizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmPsdIdealDigitizer

//______________________________________________________________________________
void CbmPsdHitProducer::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmPsdHitProducer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmPsdHitProducer::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmPsdHitProducer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmPsdHitProducer(void *p) {
      return  p ? new(p) ::CbmPsdHitProducer : new ::CbmPsdHitProducer;
   }
   static void *newArray_CbmPsdHitProducer(Long_t nElements, void *p) {
      return p ? new(p) ::CbmPsdHitProducer[nElements] : new ::CbmPsdHitProducer[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmPsdHitProducer(void *p) {
      delete ((::CbmPsdHitProducer*)p);
   }
   static void deleteArray_CbmPsdHitProducer(void *p) {
      delete [] ((::CbmPsdHitProducer*)p);
   }
   static void destruct_CbmPsdHitProducer(void *p) {
      typedef ::CbmPsdHitProducer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmPsdHitProducer

//______________________________________________________________________________
void CbmPsdReactionPlaneMaker::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmPsdReactionPlaneMaker.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmPsdReactionPlaneMaker::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmPsdReactionPlaneMaker::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmPsdReactionPlaneMaker(void *p) {
      return  p ? new(p) ::CbmPsdReactionPlaneMaker : new ::CbmPsdReactionPlaneMaker;
   }
   static void *newArray_CbmPsdReactionPlaneMaker(Long_t nElements, void *p) {
      return p ? new(p) ::CbmPsdReactionPlaneMaker[nElements] : new ::CbmPsdReactionPlaneMaker[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmPsdReactionPlaneMaker(void *p) {
      delete ((::CbmPsdReactionPlaneMaker*)p);
   }
   static void deleteArray_CbmPsdReactionPlaneMaker(void *p) {
      delete [] ((::CbmPsdReactionPlaneMaker*)p);
   }
   static void destruct_CbmPsdReactionPlaneMaker(void *p) {
      typedef ::CbmPsdReactionPlaneMaker current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmPsdReactionPlaneMaker

namespace {
  void TriggerDictionaryInitialization_G__PsdDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/opt/fairroot/install/include",
"/home/alex/bmnroot_dev/bmnroot/bmndata",
"/home/alex/bmnroot_dev/bmnroot/psd",
"/opt/fairsoft/install/include",
"/opt/fairsoft/install/include/root",
"/opt/fairsoft/install/include/root",
"/home/alex/bmnroot_dev/bmnroot/build/psd/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__PsdDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class CbmPsd;
class __attribute__((annotate(R"ATTRDUMP(Class for Trd)ATTRDUMP"))) CbmGeoPsd;
class CbmGeoPsdPar;
class CbmPsdv1;
class CbmPsdIdealDigitizer;
class CbmPsdHitProducer;
class CbmPsdReactionPlaneMaker;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__PsdDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// -------------------------------------------------------------------------
// -----                         CbmPsd header file                   -----
// -----                  Created 27/07/04  by V. Friese               -----
// -------------------------------------------------------------------------

/**  CbmPsd.h
 *@author V.Friese <v.friese@gsi.de>
 **
 ** Defines the active detector ECAL. Constructs the geometry and
 ** registeres MCPoints.
 **/



#ifndef CBMPSD_H
#define CBMPSD_H

#include "FairDetector.h"

#include "TLorentzVector.h"

class CbmPsdPoint; 
class FairVolume;
class TClonesArray;


class CbmPsd : public FairDetector 
{

 public:

  /** Default constructor **/
  CbmPsd();


  /** Standard constructor.
   *@param name    detetcor name
   *@param active  sensitivity flag
   **/
  CbmPsd(const char* name, Bool_t active);


  /** Destructor **/
  virtual ~CbmPsd();


  /** Virtual method ProcessHits
   **
   ** Defines the action to be taken when a step is inside the
   ** active volume. Creates CbmPsdPoints and adds them to the
   ** collection.
   *@param vol  Pointer to the active volume
   **/
  virtual Bool_t  ProcessHits(FairVolume* vol = 0);


  /** Virtual method EndOfEvent
   **
   ** If verbosity level is set, print hit collection at the
   ** end of the event and resets it afterwards.
   **/
  virtual void EndOfEvent();


  /** Virtual method Register
   **
   ** Registers the hit collection in the ROOT manager.
   **/
  virtual void  Register();


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
   ** Constructs the STS geometry
   **/
  virtual void ConstructGeometry();
  virtual void SetXshift (Float_t xshift=10) {fXshift=xshift;};
  Float_t GetXshift() {return fXshift;}
  virtual void SetZposition (Float_t xshift=1060) {fZposition=xshift;};
  Float_t GetZposition() {return fZposition;}

  /** Method SetDebug
   **
   ** Change the debug level
   **/
  void SetDebug(Option_t *debug) {fDebug = debug;}

protected:
  /** Protected method AddHit
   **
   ** Adds a CbmPsdPoint to the HitCollection
   **/
  CbmPsdPoint* AddHit(Int_t trackID, Int_t detID, TVector3 pos,
		       TVector3 mom, Double_t time, Double_t length, 
		       Double_t eLoss); 
  Option_t*      fDebug;             //! Debug flag


 private:

  /** Track information to be stored until the track leaves the
      active volume. **/
  Int_t          fTrackID;           //!  track index
  Int_t          fVolumeID;          //!  volume id
  TLorentzVector fPos;               //!  position
  TLorentzVector fMom;               //!  momentum
  Double32_t     fTime;              //!  time
  Double32_t     fLength;            //!  length
  Double32_t     fELoss;             //!  energy loss
 
  Int_t          fPosIndex;          //!
  TClonesArray*  fPsdCollection;    //! Hit collection
  Float_t fXshift; //shift X PSD position to catch beam in hole
  Float_t fZposition; //Z position of PSD front

  /** Private method ResetParameters
   **
   ** Resets the private members for the track parameters
   **/
  void ResetParameters();


  ClassDef(CbmPsd,1)

};


inline void CbmPsd::ResetParameters() {
  fTrackID = fVolumeID = 0;
  fPos.SetXYZM(0.0, 0.0, 0.0, 0.0);
  fMom.SetXYZM(0.0, 0.0, 0.0, 0.0);
  fTime = fLength = fELoss = 0;
  fPosIndex = 0;
};


#endif
#ifndef CBMGEOPSD_H
#define CBMGEOPSD_H

#include "FairGeoSet.h"

class  CbmGeoPsd : public FairGeoSet {
protected:
  char modName[20];  // name of module
  char eleName[20];  // substring for elements in module
public:
  CbmGeoPsd();
  ~CbmGeoPsd() {}
  const char* getModuleName(Int_t);
  const char* getEleName(Int_t);
  inline Int_t getModNumInMod(const TString&);
  ClassDef(CbmGeoPsd,0) // Class for Trd
};

inline Int_t CbmGeoPsd::getModNumInMod(const TString& name) {
  // returns the module index from module name
  return (Int_t)(name[3]-'0')-1;
}

#endif  /* !CBMGEOECAL_H */
#ifndef CBMGEOPSDPAR_H
#define CBMGEOPSDPAR_H


#include "FairParGenericSet.h"

class TObjArray;
class FairParamList;

class CbmGeoPsdPar : public FairParGenericSet {
public:
  TObjArray            *fGeoSensNodes; // List of FairGeoNodes for sensitive volumes
  TObjArray            *fGeoPassNodes; // List of FairGeoNodes for sensitive volumes

  CbmGeoPsdPar(const char* name="CbmGeoPsdPar",
             const char* title="Psd Geometry Parameters",
             const char* context="TestDefaultContext");
  ~CbmGeoPsdPar(void);
  void clear(void);
  void putParams(FairParamList*);
  Bool_t getParams(FairParamList*);
  TObjArray             *GetGeoSensitiveNodes(){return fGeoSensNodes;}
  TObjArray             *GetGeoPassiveNodes(){return fGeoPassNodes;}

 private:

  CbmGeoPsdPar(const CbmGeoPsdPar&);
  CbmGeoPsdPar& operator=(const CbmGeoPsdPar&);

  ClassDef(CbmGeoPsdPar,1)
};

#endif /* !CBMGEOPSDPAR_H */
// -------------------------------------------------------------------------
// -----                         CbmPsdv1 header file                 -----
// -----                  Created 04/02/05  by Yu.Kharlov              -----
// -------------------------------------------------------------------------

/**  CbmPsd.h
 *@author Yuri Kharlov <Yuri.Kharlov@ihep.ru>
 **
 ** Defines the active detector ECAL with geometry coded here.
 **/



#ifndef CBMPSDV1_H
#define CBMPSDV1_H


#include "CbmPsd.h"

#include "TH1F.h"
#include "TH2F.h"
#include "TFile.h"
#include "TLorentzVector.h"

class CbmPsdPoint; 
class FairVolume;
class TClonesArray;


class CbmPsdv1 : public CbmPsd
{

 public:

  /** Default constructor **/
  CbmPsdv1();


  /** Standard constructor.
   *@param name    detetcor name
   *@param active  sensitivity flag
   **/
  CbmPsdv1(const char* name, Bool_t active);


  /** Destructor **/
  virtual ~CbmPsdv1();


  /** Virtual method ProcessHits
   **
   ** Defines the action to be taken when a step is inside the
   ** active volume. Creates CbmPsdPoints and adds them to the
   ** collection.
   *@param vol  Pointer to the active volume
   **/
  virtual Bool_t  ProcessHits(FairVolume* vol = 0);
  virtual void EndOfEvent();
  virtual void FinishRun();


  /** Virtual method Construct geometry
   **
   ** Constructs the PSD geometry
   **/
  virtual void CreateMaterial();
  virtual void ConstructGeometry();

  void SetXshift(Float_t shift) { fXshift = shift;}
  void SetZposition(Float_t position) {fZposition = position; }
  void SetHole(Int_t hole) { fWithHole = hole;}

 private:

  /** Track information to be stored until the track leaves the
      active volume. **/
  Int_t          fTrackID;           //!  track index
  Int_t          fVolumeID;          //!  volume id
  Int_t          fModuleID;          //!  module id
  TLorentzVector fPos;               //!  position
  TLorentzVector fMom;               //!  momentum
  Double32_t     fTime;              //!  time
  Double32_t     fLength;            //!  length
  Double32_t     fEloss;             //!  energy loss
  Double32_t     fTotal;             //!  energy loss
 
  Int_t          fPosIndex;          //!
  TClonesArray*  fPsdCollection;     //! Hit collection
  
  Float_t   fXshift;                 //  shift on X axis to have ion beam inside the hole
  Float_t   fZposition;              //  Z position PSD surface
  Int_t     fWithHole;               //  flag for hole
  
  TH1F *fhist1, *fhist2, *fhist3, *fhist4, *fhist6;
  TH2F *fhist5;
  TFile *f;

  /** Private method ResetParameters
   **
   ** Resets the private members for the track parameters
   **/
  void ResetParameters();


  ClassDef(CbmPsdv1,3)

};

inline void CbmPsdv1::ResetParameters() {
  fTrackID = fVolumeID = fModuleID = 0;
  fPos.SetXYZM(0.0, 0.0, 0.0, 0.0);
  fMom.SetXYZM(0.0, 0.0, 0.0, 0.0);
  fEloss = 0;
  fPosIndex = 0;
};


#endif
// -------------------------------------------------------------------------
// -----                 CbmPsdHitProducerIdel header file             -----
// -----                  Created 15/05/12  by Alla                   -----
// -------------------------------------------------------------------------


/** CbmPsdIdealDigitize.h
 *@author Alla Maevskaya <alla@inr.ru>
 **
 ** The ideal digitizer produces digits  of type CbmPsdDigi as sum of Edep
 **for 6 scintilators .
 **/


#ifndef CBMPSDIdealDigitizer_H
#define CBMPSDIdealDigitizer_H 1


#include "FairTask.h"

class TClonesArray;



class CbmPsdIdealDigitizer : public FairTask
{

 public:

  /** Default constructor **/  
  CbmPsdIdealDigitizer();


  /** Destructor **/
  ~CbmPsdIdealDigitizer();


  /** Virtual method Init **/
  virtual InitStatus Init();


  /** Virtual method Exec **/
  virtual void Exec(Option_t* opt);


 private:
  Int_t             fNDigis;
   
  /** Input array of CbmPsdPoints **/
  TClonesArray* fPointArray;

  /** Output array of CbmPsdDigits **/
  TClonesArray* fDigiArray; 

  CbmPsdIdealDigitizer(const CbmPsdIdealDigitizer&);
  CbmPsdIdealDigitizer operator=(const CbmPsdIdealDigitizer&);
  /** Reset eventwise counters **/
  void Reset();

  ClassDef(CbmPsdIdealDigitizer,1);

};

#endif
// -------------------------------------------------------------------------
// -----                 CbmPsdHitProducerIdel header file             -----
// -----                  Created 15/05/12  by Alla                   -----
// -----------------------------------------------------------
//--------------


/** CbmPsdIdealDigitize.h
 *@author Alla Maevskaya <alla@inr.ru>
 **
 ** The ideal hit producer produces hits of type CbmPsdHit as 
 ** full energy deposited in 1 module
 **/

#ifndef CBMPSDHitProducer_H
#define CBMPSDHitProducer_H 


#include "FairTask.h"
#include "TH1F.h"

class TClonesArray;



class CbmPsdHitProducer : public FairTask
{

 public:

  /** Default constructor **/  
  CbmPsdHitProducer();


  /** Destructor **/
  ~CbmPsdHitProducer();


  /** Virtual method Init **/
  virtual InitStatus Init();


  /** Virtual method Exec **/
  virtual void Exec(Option_t* opt);
  virtual void Finish();


 private:
  Int_t             fNHits;
   
  /** Input array of CbmPsdHit **/
  TClonesArray* fHitArray;

  /** Output array of CbmPsdDigits **/
  TClonesArray* fDigiArray; 

  CbmPsdHitProducer(const CbmPsdHitProducer&);
  CbmPsdHitProducer operator=(const CbmPsdHitProducer&);

  void Reset();
  Float_t       fXi[104];  //X coordinate of center of module
  Float_t       fYi[104];  //X coordinate of center of module
  TH1F *fhModXNewEn; //edep in each module for Marina
 

  ClassDef(CbmPsdHitProducer,2);

};

#endif
// -------------------------------------------------------------------------
// -----                 CbmPsdReactionPlaneMaker.h header file             -----
// -----                  Created 15/05/12  by Marina & Alla                   -----
// -------------------------------------------------------------------------


/** CbmPsdReactionPlaneMaker.h
 *@authors Alla  <alla@inr.ru> Marina <marina@inr.ru>
 **
 **/


#ifndef CBMPSDReactionPlaneMaker_H
#define CBMPSDReactionPlaneMaker_H 1


#include "FairTask.h"
#include "CbmPsdEventData.h"

class TClonesArray;



class CbmPsdReactionPlaneMaker : public FairTask
{

 public:

  /** Default constructor **/  
  CbmPsdReactionPlaneMaker();


  /** Destructor **/
  ~CbmPsdReactionPlaneMaker();


  /** Virtual method Init **/
  virtual InitStatus Init();


  /** Virtual method Exec **/
  virtual void Exec(Option_t* opt);




 private:
  Int_t             fNHits;
  Float_t fMean;
  Float_t fXi[104];
  Float_t fYi[104];
   
  /** Input array of CbmPsdHit **/
  TClonesArray* fHitArray;
  TClonesArray* fEventArray;
  /** Output object CbmPsdEventData **/
  CbmPsdEventData* fCbmPsdEvent;

  CbmPsdReactionPlaneMaker(const CbmPsdReactionPlaneMaker&);
  CbmPsdReactionPlaneMaker operator=(const CbmPsdReactionPlaneMaker&);

  void Reset();

  ClassDef(CbmPsdReactionPlaneMaker,1);

};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"CbmGeoPsd", payloadCode, "@",
"CbmGeoPsdPar", payloadCode, "@",
"CbmPsd", payloadCode, "@",
"CbmPsdHitProducer", payloadCode, "@",
"CbmPsdIdealDigitizer", payloadCode, "@",
"CbmPsdReactionPlaneMaker", payloadCode, "@",
"CbmPsdv1", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__PsdDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__PsdDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__PsdDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__PsdDict() {
  TriggerDictionaryInitialization_G__PsdDict_Impl();
}
