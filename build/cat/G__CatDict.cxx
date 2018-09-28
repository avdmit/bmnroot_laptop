// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIalexdIbmnroot_devdIbmnrootdIbuilddIcatdIG__CatDict

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
#include "CbmL1.h"
#include "CbmL1MCTrack.h"
#include "CbmL1MCPoint.h"
#include "CbmL1StsHit.h"
#include "CbmL1Track.h"
#include "CbmL1TrackPar.h"
#include "CbmL1Vtx.h"
#include "OffLineInterface/CbmL1StsTrackFinder.h"
#include "CbmL1PartEfficiencies.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_CbmL1(void *p = 0);
   static void *newArray_CbmL1(Long_t size, void *p);
   static void delete_CbmL1(void *p);
   static void deleteArray_CbmL1(void *p);
   static void destruct_CbmL1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmL1*)
   {
      ::CbmL1 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmL1 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmL1", ::CbmL1::Class_Version(), "", 91,
                  typeid(::CbmL1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmL1::Dictionary, isa_proxy, 4,
                  sizeof(::CbmL1) );
      instance.SetNew(&new_CbmL1);
      instance.SetNewArray(&newArray_CbmL1);
      instance.SetDelete(&delete_CbmL1);
      instance.SetDeleteArray(&deleteArray_CbmL1);
      instance.SetDestructor(&destruct_CbmL1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmL1*)
   {
      return GenerateInitInstanceLocal((::CbmL1*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmL1*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmL1StsTrackFinder(void *p = 0);
   static void *newArray_CbmL1StsTrackFinder(Long_t size, void *p);
   static void delete_CbmL1StsTrackFinder(void *p);
   static void deleteArray_CbmL1StsTrackFinder(void *p);
   static void destruct_CbmL1StsTrackFinder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmL1StsTrackFinder*)
   {
      ::CbmL1StsTrackFinder *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmL1StsTrackFinder >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmL1StsTrackFinder", ::CbmL1StsTrackFinder::Class_Version(), "", 568,
                  typeid(::CbmL1StsTrackFinder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmL1StsTrackFinder::Dictionary, isa_proxy, 4,
                  sizeof(::CbmL1StsTrackFinder) );
      instance.SetNew(&new_CbmL1StsTrackFinder);
      instance.SetNewArray(&newArray_CbmL1StsTrackFinder);
      instance.SetDelete(&delete_CbmL1StsTrackFinder);
      instance.SetDeleteArray(&deleteArray_CbmL1StsTrackFinder);
      instance.SetDestructor(&destruct_CbmL1StsTrackFinder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmL1StsTrackFinder*)
   {
      return GenerateInitInstanceLocal((::CbmL1StsTrackFinder*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmL1StsTrackFinder*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmL1PartEfficiencies(void *p = 0);
   static void *newArray_CbmL1PartEfficiencies(Long_t size, void *p);
   static void delete_CbmL1PartEfficiencies(void *p);
   static void deleteArray_CbmL1PartEfficiencies(void *p);
   static void destruct_CbmL1PartEfficiencies(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmL1PartEfficiencies*)
   {
      ::CbmL1PartEfficiencies *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmL1PartEfficiencies >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmL1PartEfficiencies", ::CbmL1PartEfficiencies::Class_Version(), "", 603,
                  typeid(::CbmL1PartEfficiencies), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmL1PartEfficiencies::Dictionary, isa_proxy, 4,
                  sizeof(::CbmL1PartEfficiencies) );
      instance.SetNew(&new_CbmL1PartEfficiencies);
      instance.SetNewArray(&newArray_CbmL1PartEfficiencies);
      instance.SetDelete(&delete_CbmL1PartEfficiencies);
      instance.SetDeleteArray(&deleteArray_CbmL1PartEfficiencies);
      instance.SetDestructor(&destruct_CbmL1PartEfficiencies);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmL1PartEfficiencies*)
   {
      return GenerateInitInstanceLocal((::CbmL1PartEfficiencies*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmL1PartEfficiencies*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr CbmL1::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmL1::Class_Name()
{
   return "CbmL1";
}

//______________________________________________________________________________
const char *CbmL1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmL1*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmL1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmL1*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmL1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmL1*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmL1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmL1*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmL1StsTrackFinder::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmL1StsTrackFinder::Class_Name()
{
   return "CbmL1StsTrackFinder";
}

//______________________________________________________________________________
const char *CbmL1StsTrackFinder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmL1StsTrackFinder*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmL1StsTrackFinder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmL1StsTrackFinder*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmL1StsTrackFinder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmL1StsTrackFinder*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmL1StsTrackFinder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmL1StsTrackFinder*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmL1PartEfficiencies::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmL1PartEfficiencies::Class_Name()
{
   return "CbmL1PartEfficiencies";
}

//______________________________________________________________________________
const char *CbmL1PartEfficiencies::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmL1PartEfficiencies*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmL1PartEfficiencies::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmL1PartEfficiencies*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmL1PartEfficiencies::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmL1PartEfficiencies*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmL1PartEfficiencies::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmL1PartEfficiencies*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void CbmL1::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmL1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmL1::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmL1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmL1(void *p) {
      return  p ? new(p) ::CbmL1 : new ::CbmL1;
   }
   static void *newArray_CbmL1(Long_t nElements, void *p) {
      return p ? new(p) ::CbmL1[nElements] : new ::CbmL1[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmL1(void *p) {
      delete ((::CbmL1*)p);
   }
   static void deleteArray_CbmL1(void *p) {
      delete [] ((::CbmL1*)p);
   }
   static void destruct_CbmL1(void *p) {
      typedef ::CbmL1 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmL1

//______________________________________________________________________________
void CbmL1StsTrackFinder::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmL1StsTrackFinder.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmL1StsTrackFinder::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmL1StsTrackFinder::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmL1StsTrackFinder(void *p) {
      return  p ? new(p) ::CbmL1StsTrackFinder : new ::CbmL1StsTrackFinder;
   }
   static void *newArray_CbmL1StsTrackFinder(Long_t nElements, void *p) {
      return p ? new(p) ::CbmL1StsTrackFinder[nElements] : new ::CbmL1StsTrackFinder[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmL1StsTrackFinder(void *p) {
      delete ((::CbmL1StsTrackFinder*)p);
   }
   static void deleteArray_CbmL1StsTrackFinder(void *p) {
      delete [] ((::CbmL1StsTrackFinder*)p);
   }
   static void destruct_CbmL1StsTrackFinder(void *p) {
      typedef ::CbmL1StsTrackFinder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmL1StsTrackFinder

//______________________________________________________________________________
void CbmL1PartEfficiencies::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmL1PartEfficiencies.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmL1PartEfficiencies::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmL1PartEfficiencies::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmL1PartEfficiencies(void *p) {
      return  p ? new(p) ::CbmL1PartEfficiencies : new ::CbmL1PartEfficiencies;
   }
   static void *newArray_CbmL1PartEfficiencies(Long_t nElements, void *p) {
      return p ? new(p) ::CbmL1PartEfficiencies[nElements] : new ::CbmL1PartEfficiencies[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmL1PartEfficiencies(void *p) {
      delete ((::CbmL1PartEfficiencies*)p);
   }
   static void deleteArray_CbmL1PartEfficiencies(void *p) {
      delete [] ((::CbmL1PartEfficiencies*)p);
   }
   static void destruct_CbmL1PartEfficiencies(void *p) {
      typedef ::CbmL1PartEfficiencies current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmL1PartEfficiencies

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
   static TClass *vectorlEKFMatchParticlesgR_Dictionary();
   static void vectorlEKFMatchParticlesgR_TClassManip(TClass*);
   static void *new_vectorlEKFMatchParticlesgR(void *p = 0);
   static void *newArray_vectorlEKFMatchParticlesgR(Long_t size, void *p);
   static void delete_vectorlEKFMatchParticlesgR(void *p);
   static void deleteArray_vectorlEKFMatchParticlesgR(void *p);
   static void destruct_vectorlEKFMatchParticlesgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<KFMatchParticles>*)
   {
      vector<KFMatchParticles> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<KFMatchParticles>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<KFMatchParticles>", -2, "vector", 216,
                  typeid(vector<KFMatchParticles>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEKFMatchParticlesgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<KFMatchParticles>) );
      instance.SetNew(&new_vectorlEKFMatchParticlesgR);
      instance.SetNewArray(&newArray_vectorlEKFMatchParticlesgR);
      instance.SetDelete(&delete_vectorlEKFMatchParticlesgR);
      instance.SetDeleteArray(&deleteArray_vectorlEKFMatchParticlesgR);
      instance.SetDestructor(&destruct_vectorlEKFMatchParticlesgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<KFMatchParticles> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<KFMatchParticles>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEKFMatchParticlesgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<KFMatchParticles>*)0x0)->GetClass();
      vectorlEKFMatchParticlesgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEKFMatchParticlesgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEKFMatchParticlesgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<KFMatchParticles> : new vector<KFMatchParticles>;
   }
   static void *newArray_vectorlEKFMatchParticlesgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<KFMatchParticles>[nElements] : new vector<KFMatchParticles>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEKFMatchParticlesgR(void *p) {
      delete ((vector<KFMatchParticles>*)p);
   }
   static void deleteArray_vectorlEKFMatchParticlesgR(void *p) {
      delete [] ((vector<KFMatchParticles>*)p);
   }
   static void destruct_vectorlEKFMatchParticlesgR(void *p) {
      typedef vector<KFMatchParticles> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<KFMatchParticles>

namespace ROOT {
   static TClass *vectorlEKFMCParticlegR_Dictionary();
   static void vectorlEKFMCParticlegR_TClassManip(TClass*);
   static void *new_vectorlEKFMCParticlegR(void *p = 0);
   static void *newArray_vectorlEKFMCParticlegR(Long_t size, void *p);
   static void delete_vectorlEKFMCParticlegR(void *p);
   static void deleteArray_vectorlEKFMCParticlegR(void *p);
   static void destruct_vectorlEKFMCParticlegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<KFMCParticle>*)
   {
      vector<KFMCParticle> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<KFMCParticle>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<KFMCParticle>", -2, "vector", 216,
                  typeid(vector<KFMCParticle>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEKFMCParticlegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<KFMCParticle>) );
      instance.SetNew(&new_vectorlEKFMCParticlegR);
      instance.SetNewArray(&newArray_vectorlEKFMCParticlegR);
      instance.SetDelete(&delete_vectorlEKFMCParticlegR);
      instance.SetDeleteArray(&deleteArray_vectorlEKFMCParticlegR);
      instance.SetDestructor(&destruct_vectorlEKFMCParticlegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<KFMCParticle> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<KFMCParticle>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEKFMCParticlegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<KFMCParticle>*)0x0)->GetClass();
      vectorlEKFMCParticlegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEKFMCParticlegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEKFMCParticlegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<KFMCParticle> : new vector<KFMCParticle>;
   }
   static void *newArray_vectorlEKFMCParticlegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<KFMCParticle>[nElements] : new vector<KFMCParticle>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEKFMCParticlegR(void *p) {
      delete ((vector<KFMCParticle>*)p);
   }
   static void deleteArray_vectorlEKFMCParticlegR(void *p) {
      delete [] ((vector<KFMCParticle>*)p);
   }
   static void destruct_vectorlEKFMCParticlegR(void *p) {
      typedef vector<KFMCParticle> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<KFMCParticle>

namespace ROOT {
   static TClass *vectorlECbmL1TrackgR_Dictionary();
   static void vectorlECbmL1TrackgR_TClassManip(TClass*);
   static void *new_vectorlECbmL1TrackgR(void *p = 0);
   static void *newArray_vectorlECbmL1TrackgR(Long_t size, void *p);
   static void delete_vectorlECbmL1TrackgR(void *p);
   static void deleteArray_vectorlECbmL1TrackgR(void *p);
   static void destruct_vectorlECbmL1TrackgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<CbmL1Track>*)
   {
      vector<CbmL1Track> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<CbmL1Track>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<CbmL1Track>", -2, "vector", 216,
                  typeid(vector<CbmL1Track>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlECbmL1TrackgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<CbmL1Track>) );
      instance.SetNew(&new_vectorlECbmL1TrackgR);
      instance.SetNewArray(&newArray_vectorlECbmL1TrackgR);
      instance.SetDelete(&delete_vectorlECbmL1TrackgR);
      instance.SetDeleteArray(&deleteArray_vectorlECbmL1TrackgR);
      instance.SetDestructor(&destruct_vectorlECbmL1TrackgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<CbmL1Track> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<CbmL1Track>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlECbmL1TrackgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<CbmL1Track>*)0x0)->GetClass();
      vectorlECbmL1TrackgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlECbmL1TrackgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlECbmL1TrackgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CbmL1Track> : new vector<CbmL1Track>;
   }
   static void *newArray_vectorlECbmL1TrackgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CbmL1Track>[nElements] : new vector<CbmL1Track>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlECbmL1TrackgR(void *p) {
      delete ((vector<CbmL1Track>*)p);
   }
   static void deleteArray_vectorlECbmL1TrackgR(void *p) {
      delete [] ((vector<CbmL1Track>*)p);
   }
   static void destruct_vectorlECbmL1TrackgR(void *p) {
      typedef vector<CbmL1Track> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<CbmL1Track>

namespace ROOT {
   static TClass *vectorlECbmL1StsHitgR_Dictionary();
   static void vectorlECbmL1StsHitgR_TClassManip(TClass*);
   static void *new_vectorlECbmL1StsHitgR(void *p = 0);
   static void *newArray_vectorlECbmL1StsHitgR(Long_t size, void *p);
   static void delete_vectorlECbmL1StsHitgR(void *p);
   static void deleteArray_vectorlECbmL1StsHitgR(void *p);
   static void destruct_vectorlECbmL1StsHitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<CbmL1StsHit>*)
   {
      vector<CbmL1StsHit> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<CbmL1StsHit>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<CbmL1StsHit>", -2, "vector", 216,
                  typeid(vector<CbmL1StsHit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlECbmL1StsHitgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<CbmL1StsHit>) );
      instance.SetNew(&new_vectorlECbmL1StsHitgR);
      instance.SetNewArray(&newArray_vectorlECbmL1StsHitgR);
      instance.SetDelete(&delete_vectorlECbmL1StsHitgR);
      instance.SetDeleteArray(&deleteArray_vectorlECbmL1StsHitgR);
      instance.SetDestructor(&destruct_vectorlECbmL1StsHitgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<CbmL1StsHit> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<CbmL1StsHit>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlECbmL1StsHitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<CbmL1StsHit>*)0x0)->GetClass();
      vectorlECbmL1StsHitgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlECbmL1StsHitgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlECbmL1StsHitgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CbmL1StsHit> : new vector<CbmL1StsHit>;
   }
   static void *newArray_vectorlECbmL1StsHitgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CbmL1StsHit>[nElements] : new vector<CbmL1StsHit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlECbmL1StsHitgR(void *p) {
      delete ((vector<CbmL1StsHit>*)p);
   }
   static void deleteArray_vectorlECbmL1StsHitgR(void *p) {
      delete [] ((vector<CbmL1StsHit>*)p);
   }
   static void destruct_vectorlECbmL1StsHitgR(void *p) {
      typedef vector<CbmL1StsHit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<CbmL1StsHit>

namespace ROOT {
   static TClass *vectorlECbmL1MCTrackgR_Dictionary();
   static void vectorlECbmL1MCTrackgR_TClassManip(TClass*);
   static void *new_vectorlECbmL1MCTrackgR(void *p = 0);
   static void *newArray_vectorlECbmL1MCTrackgR(Long_t size, void *p);
   static void delete_vectorlECbmL1MCTrackgR(void *p);
   static void deleteArray_vectorlECbmL1MCTrackgR(void *p);
   static void destruct_vectorlECbmL1MCTrackgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<CbmL1MCTrack>*)
   {
      vector<CbmL1MCTrack> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<CbmL1MCTrack>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<CbmL1MCTrack>", -2, "vector", 216,
                  typeid(vector<CbmL1MCTrack>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlECbmL1MCTrackgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<CbmL1MCTrack>) );
      instance.SetNew(&new_vectorlECbmL1MCTrackgR);
      instance.SetNewArray(&newArray_vectorlECbmL1MCTrackgR);
      instance.SetDelete(&delete_vectorlECbmL1MCTrackgR);
      instance.SetDeleteArray(&deleteArray_vectorlECbmL1MCTrackgR);
      instance.SetDestructor(&destruct_vectorlECbmL1MCTrackgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<CbmL1MCTrack> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<CbmL1MCTrack>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlECbmL1MCTrackgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<CbmL1MCTrack>*)0x0)->GetClass();
      vectorlECbmL1MCTrackgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlECbmL1MCTrackgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlECbmL1MCTrackgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CbmL1MCTrack> : new vector<CbmL1MCTrack>;
   }
   static void *newArray_vectorlECbmL1MCTrackgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CbmL1MCTrack>[nElements] : new vector<CbmL1MCTrack>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlECbmL1MCTrackgR(void *p) {
      delete ((vector<CbmL1MCTrack>*)p);
   }
   static void deleteArray_vectorlECbmL1MCTrackgR(void *p) {
      delete [] ((vector<CbmL1MCTrack>*)p);
   }
   static void destruct_vectorlECbmL1MCTrackgR(void *p) {
      typedef vector<CbmL1MCTrack> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<CbmL1MCTrack>

namespace ROOT {
   static TClass *vectorlECbmL1MCPointgR_Dictionary();
   static void vectorlECbmL1MCPointgR_TClassManip(TClass*);
   static void *new_vectorlECbmL1MCPointgR(void *p = 0);
   static void *newArray_vectorlECbmL1MCPointgR(Long_t size, void *p);
   static void delete_vectorlECbmL1MCPointgR(void *p);
   static void deleteArray_vectorlECbmL1MCPointgR(void *p);
   static void destruct_vectorlECbmL1MCPointgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<CbmL1MCPoint>*)
   {
      vector<CbmL1MCPoint> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<CbmL1MCPoint>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<CbmL1MCPoint>", -2, "vector", 216,
                  typeid(vector<CbmL1MCPoint>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlECbmL1MCPointgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<CbmL1MCPoint>) );
      instance.SetNew(&new_vectorlECbmL1MCPointgR);
      instance.SetNewArray(&newArray_vectorlECbmL1MCPointgR);
      instance.SetDelete(&delete_vectorlECbmL1MCPointgR);
      instance.SetDeleteArray(&deleteArray_vectorlECbmL1MCPointgR);
      instance.SetDestructor(&destruct_vectorlECbmL1MCPointgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<CbmL1MCPoint> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<CbmL1MCPoint>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlECbmL1MCPointgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<CbmL1MCPoint>*)0x0)->GetClass();
      vectorlECbmL1MCPointgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlECbmL1MCPointgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlECbmL1MCPointgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CbmL1MCPoint> : new vector<CbmL1MCPoint>;
   }
   static void *newArray_vectorlECbmL1MCPointgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CbmL1MCPoint>[nElements] : new vector<CbmL1MCPoint>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlECbmL1MCPointgR(void *p) {
      delete ((vector<CbmL1MCPoint>*)p);
   }
   static void deleteArray_vectorlECbmL1MCPointgR(void *p) {
      delete [] ((vector<CbmL1MCPoint>*)p);
   }
   static void destruct_vectorlECbmL1MCPointgR(void *p) {
      typedef vector<CbmL1MCPoint> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<CbmL1MCPoint>

namespace ROOT {
   static TClass *vectorlECbmL1HitStoregR_Dictionary();
   static void vectorlECbmL1HitStoregR_TClassManip(TClass*);
   static void *new_vectorlECbmL1HitStoregR(void *p = 0);
   static void *newArray_vectorlECbmL1HitStoregR(Long_t size, void *p);
   static void delete_vectorlECbmL1HitStoregR(void *p);
   static void deleteArray_vectorlECbmL1HitStoregR(void *p);
   static void destruct_vectorlECbmL1HitStoregR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<CbmL1HitStore>*)
   {
      vector<CbmL1HitStore> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<CbmL1HitStore>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<CbmL1HitStore>", -2, "vector", 216,
                  typeid(vector<CbmL1HitStore>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlECbmL1HitStoregR_Dictionary, isa_proxy, 0,
                  sizeof(vector<CbmL1HitStore>) );
      instance.SetNew(&new_vectorlECbmL1HitStoregR);
      instance.SetNewArray(&newArray_vectorlECbmL1HitStoregR);
      instance.SetDelete(&delete_vectorlECbmL1HitStoregR);
      instance.SetDeleteArray(&deleteArray_vectorlECbmL1HitStoregR);
      instance.SetDestructor(&destruct_vectorlECbmL1HitStoregR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<CbmL1HitStore> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<CbmL1HitStore>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlECbmL1HitStoregR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<CbmL1HitStore>*)0x0)->GetClass();
      vectorlECbmL1HitStoregR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlECbmL1HitStoregR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlECbmL1HitStoregR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CbmL1HitStore> : new vector<CbmL1HitStore>;
   }
   static void *newArray_vectorlECbmL1HitStoregR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CbmL1HitStore>[nElements] : new vector<CbmL1HitStore>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlECbmL1HitStoregR(void *p) {
      delete ((vector<CbmL1HitStore>*)p);
   }
   static void deleteArray_vectorlECbmL1HitStoregR(void *p) {
      delete [] ((vector<CbmL1HitStore>*)p);
   }
   static void destruct_vectorlECbmL1HitStoregR(void *p) {
      typedef vector<CbmL1HitStore> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<CbmL1HitStore>

namespace ROOT {
   static TClass *vectorlECbmKFParticlegR_Dictionary();
   static void vectorlECbmKFParticlegR_TClassManip(TClass*);
   static void *new_vectorlECbmKFParticlegR(void *p = 0);
   static void *newArray_vectorlECbmKFParticlegR(Long_t size, void *p);
   static void delete_vectorlECbmKFParticlegR(void *p);
   static void deleteArray_vectorlECbmKFParticlegR(void *p);
   static void destruct_vectorlECbmKFParticlegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<CbmKFParticle>*)
   {
      vector<CbmKFParticle> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<CbmKFParticle>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<CbmKFParticle>", -2, "vector", 216,
                  typeid(vector<CbmKFParticle>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlECbmKFParticlegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<CbmKFParticle>) );
      instance.SetNew(&new_vectorlECbmKFParticlegR);
      instance.SetNewArray(&newArray_vectorlECbmKFParticlegR);
      instance.SetDelete(&delete_vectorlECbmKFParticlegR);
      instance.SetDeleteArray(&deleteArray_vectorlECbmKFParticlegR);
      instance.SetDestructor(&destruct_vectorlECbmKFParticlegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<CbmKFParticle> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<CbmKFParticle>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlECbmKFParticlegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<CbmKFParticle>*)0x0)->GetClass();
      vectorlECbmKFParticlegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlECbmKFParticlegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlECbmKFParticlegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CbmKFParticle> : new vector<CbmKFParticle>;
   }
   static void *newArray_vectorlECbmKFParticlegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CbmKFParticle>[nElements] : new vector<CbmKFParticle>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlECbmKFParticlegR(void *p) {
      delete ((vector<CbmKFParticle>*)p);
   }
   static void deleteArray_vectorlECbmKFParticlegR(void *p) {
      delete [] ((vector<CbmKFParticle>*)p);
   }
   static void destruct_vectorlECbmKFParticlegR(void *p) {
      typedef vector<CbmKFParticle> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<CbmKFParticle>

namespace {
  void TriggerDictionaryInitialization_G__CatDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/opt/fairroot/install/include",
"/home/alex/bmnroot_dev/bmnroot/bmndata",
"/home/alex/bmnroot_dev/bmnroot/bmndata/cbm",
"/home/alex/bmnroot_dev/bmnroot/sts",
"/home/alex/bmnroot_dev/bmnroot/tof",
"/home/alex/bmnroot_dev/bmnroot/KF",
"/home/alex/bmnroot_dev/bmnroot/KF/KFQA",
"/home/alex/bmnroot_dev/bmnroot/KF/Interface",
"/home/alex/bmnroot_dev/bmnroot/KF/KFParticlesFinder",
"/home/alex/bmnroot_dev/bmnroot/cat",
"/home/alex/bmnroot_dev/bmnroot/cat/L1Algo",
"/home/alex/bmnroot_dev/bmnroot/cat/OffLineInterface",
"/home/alex/bmnroot_dev/bmnroot/cat/ParticleFinder",
"/opt/fairsoft/install/include",
"/opt/fairsoft/install/include/root",
"/opt/fairsoft/install/include/root",
"/home/alex/bmnroot_dev/bmnroot/build/cat/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__CatDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class CbmL1;
class CbmL1StsTrackFinder;
class CbmL1PartEfficiencies;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__CatDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
/*
 *====================================================================
 *
 *  CBM Level 1 Reconstruction 
 *  
 *  Authors: I.Kisel,  S.Gorbunov
 *
 *  e-mail : ikisel@kip.uni-heidelberg.de 
 *
 *====================================================================
 *
 *  CbmL1 header file
 *
 *====================================================================
 */

#ifndef _CbmL1_h_
#define _CbmL1_h_

#include "CbmL1Track.h"
#include "CbmL1Vtx.h"

#include "CbmKFParticle.h"

#include "CbmL1MCTrack.h"
#include "KFMCParticle.h"
#include "KFParticleMatch.h"
#include "CbmL1MCPoint.h"
#include "CbmL1StsHit.h"

#include "FairTask.h"
#include "FairRootManager.h"
#include "FairDetector.h"
#include "CbmStsDigiScheme.h"

#include "CbmMCTrack.h"
#include "CbmStsPoint.h"
#include "CbmStsDigi.h"
#include "CbmStsCluster.h"
#include "CbmStsHit.h"

#include "CbmMvdPoint.h"
#include "CbmMvdHit.h"
#include "CbmMvdHitMatch.h"



#include "TClonesArray.h"
#include "TRefArray.h"
#include "TParticle.h"
#include "TRandom.h"
#include "TGeoManager.h"
#include "TGeoMatrix.h"
#include "TGeoTube.h"
#include "TGeoCone.h"
#include "TGeoPcon.h"
#include "TGeoBBox.h"
#include "TH1.h"
#include "TH2.h"
#include "TProfile.h"
#include "TProfile2D.h"

#include <iostream>
#include <fstream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>

using std::vector;


class L1Algo;
class CbmL1ParticlesFinder;
class L1FieldSlice;
class CbmL1Track;
class CbmL1MCTrack;

class CbmL1HitStore{
 public:
  int ExtIndex;
  int iStation;
  double x, y;
};

class CbmL1 : public FairTask 
{
  private:
    CbmL1(const CbmL1&);
    CbmL1 operator=(const CbmL1&);
  public:

   L1Algo *algo; // for access to L1 Algorithm from L1::Instance
   CbmL1ParticlesFinder *PF;

   vector<CbmL1Track> vRTracks; // reconstructed tracks
   
  static CbmL1 *Instance(){ return fInstance; }

  void SetParContainers();
  virtual InitStatus ReInit();
  virtual InitStatus Init();
  void Exec(Option_t * option);

  CbmL1();
  
    /**                                  Constructor
      * @param _fPerformance - type of Efficiency output: 0 - w\o efficiencies, doesn't use MC data; 1 - L1 standard efficiency definition; 2 - QA efficiency definition
      * @param fSTAPDataMode_ - way to work with files for the standalone package: 0 - off , 1 - write, 2  - read data and work only with it, 3 - write and read (debug)
      * @param findParticleMode_ : 0 - don't run FindParticles; 1 - run, all MC particle is reco-able; 2 - run, MC particle is reco-able if created from reco-able tracks; 3 - run, MC particle is reco-able if created from reconstructed tracks
      */
  CbmL1(const char *name, Int_t iVerbose = 1, Int_t _fPerformance = 0, int fSTAPDataMode_ = 0, TString fSTAPDataDir_ = "./", int findParticleMode_ = 0);

  ~CbmL1( /*if (targetFieldSlice) delete;*/ );

  void SetMaterialBudgetFileName( TString s ){ fMatBudgetFileName = s; }
  void SetExtrapolateToTheEndOfSTS( bool b ){ fExtrapolateToTheEndOfSTS = b; }
  void Finish();

//   void SetTrackingLevel( Int_t iLevel ){ fTrackingLevel = iLevel; }
//   void MomentumCutOff( Double_t cut ){ fMomentumCutOff = cut; }
//   void SetGhostSuppression( Bool_t b ){ fGhostSuppression= b; }
//   void SetDetectorEfficiency( Double_t eff ){ fDetectorEfficiency = eff; }

  vector<CbmL1HitStore> vHitStore; // diff hit information

  void Reconstruct();
  
  friend class L1AlgoDraw;
  friend class L1AlgoPulls;
  template<int NHits>  friend class L1AlgoEfficiencyPerformance;
  friend class CbmL1MCTrack;
  friend class CbmL1PFFitter;
 private:
   void IdealTrackFinder(); // just copy all reconstructable MCTracks into RecoTracks.

    /// Read information about hits, mcPoints and mcTracks into L1 classes
   void ReadEvent();
   bool ReadMCPoint( CbmL1MCPoint *MC, int iPoint, bool MVD ); // help procedure

    /// Input Performance
   void HitMatch();         // Procedure for match hits and MCPoints.
   void FieldApproxCheck(); // Build histos with difference between Field map and approximated field
   void FieldIntegralCheck(); // Build 2D histo: dependence of the field integral on phi and theta
   void InputPerformance(); // Build histos about input data, like hit pulls, etc.
  
    /// Reconstruction Performance
   void TrackMatch();              // Procedure for match Reconstructed and MC Tracks. Should be called before Performances
   void EfficienciesPerformance(); // calculate efficiencies
   void GetMCParticles();          // create MC particles from MC tracks
   void FindReconstructableMCParticles();
   void MatchParticles();          // Procedure for match Reconstructed and MC Particles. Should be called before Performances
   void PartEffPerformance(); // calculate efficiencies
   void TrackFitPerformance();     // pulls & residuals. Can be called only after Performance()
   void HistoPerformance();        // fill some histograms and calculate efficiencies
   void PartHistoPerformance();    // histograms for particle finder

      /// STandAlone Package service-functions
   void WriteSTAPGeoData(void *geo, int size); // create geo_algo.dat
   void WriteSTAPAlgoData(); // create data_algo.dat
   void WriteSTAPPerfData(); // create data_perfo.dat
   void ReadSTAPGeoData(void *geo, int &size);
   void ReadSTAPAlgoData();
   void ReadSTAPPerfData();
      /// SIMD KF Banchmark service-functions
   void WriteSIMDKFData();

   static istream& eatwhite(istream& is); // skip spaces
   static void writedir2current( TObject *obj ); // help procedure

   int NStation, NMvdStations, NStsStations; // number of detector stations (all\sts\mvd)
   Int_t fPerformance; // 0 - w\o perf. 1 - L1-Efficiency definition. 2 - QA-Eff.definition
   int fSTAPDataMode; // way to work with file for standalone package. 0 (off) , 1 (write), 2 (read data and work only with it), 3 (debug - write and read)
   TString fSTAPDataDir;

   Int_t fTrackingLevel;  // really doesn't used
   Double_t fMomentumCutOff;  // really doesn't used
   Bool_t fGhostSuppression;  // really doesn't used
   Bool_t fUseMVD;  // really doesn't used
//   Double_t fDetectorEfficiency;  // really doesn't used

   CbmStsDigiScheme StsDigi;
   CbmL1Vtx PrimVtx;
//    L1FieldSlice *targetFieldSlice  _fvecalignment;

    /// Input data
   TClonesArray *listMCTracks ;
   TClonesArray *listStsPts; // Sts MC points
   TClonesArray *listStsDigi;
   TClonesArray *listStsClusters;
   TClonesArray *listStsHits;

   TClonesArray *listMvdPts; // Mvd MC points
   TClonesArray *listMvdHits;
   TClonesArray *listMvdHitMatches;

    /// Used data = Repacked input data
   vector<CbmL1StsHit>  vStsHits;  // hits with hit-mcpoint match information
   vector<CbmL1MCPoint> vMCPoints;
   vector<CbmL1MCTrack> vMCTracks;
   vector<int>          vHitMCRef; // indices of MCPoints in vMCPoints, indexed by index of hit in algo->vStsHits array. According to StsMatch. Used for IdealResponce

  vector<CbmKFParticle>  vRParticles;      // reco particles
  vector<KFMCParticle> vMCParticles;  // MC particles
  vector<KFMatchParticles> MCtoRParticleId; // array for match
  vector<KFMatchParticles> RtoMCParticleId; 
  
  TDirectory *histodir;
   
  static CbmL1 *fInstance;

 private:
  void CheckMCParticleIsReconstructable(KFMCParticle &part); // recursive func, used in FindReconstructableMCParticles

  int fFindParticlesMode;

  TString fMatBudgetFileName;
  bool fExtrapolateToTheEndOfSTS;
  
   ClassDef(CbmL1,1);
};

#endif //_CbmL1_h_
/*
 *====================================================================
 *
 *  CBM Level 1 Reconstruction 
 *  
 *  Authors: I.Kisel,  S.Gorbunov
 *
 *  e-mail : ikisel@kip.uni-heidelberg.de 
 *
 *====================================================================
 *
 *  L1 Monte Carlo information
 *
 *====================================================================
 */

#ifndef CbmL1MCTrack_H
#define CbmL1MCTrack_H

#include "TVector3.h"
#include "TLorentzVector.h"
#include "CbmL1MCPoint.h"
#include <vector>
#include <iostream>
using std::vector;

class CbmL1Track;

class CbmL1MCTrack
{
 public:
  double mass, q, p, x, y, z, px, py, pz;
  int ID, mother_ID, pdg;
  vector<int> Points;  // indices of pints in L1::vMCPoints
  vector<int> StsHits; // indices of hits in algo->vStsHits or L1::vStsHits

  CbmL1MCTrack()
    :mass(0),q(0),p(0),x(0),y(0),z(0),px(0),py(0),pz(0),ID(-1),mother_ID(-1),pdg(-1),Points(),StsHits(),
    nMCContStations(0),nHitContStations(0),maxNStaMC(0),maxNSensorMC(0),maxNStaHits(0),nStations(0),nMCStations(0),isReconstructable(0),isAdditional(0),
     rTracks(),tTracks(){};

  CbmL1MCTrack(int _ID)
    :mass(0),q(0),p(0),x(0),y(0),z(0),px(0),py(0),pz(0),ID(_ID),mother_ID(-1),pdg(-1),Points(),StsHits(),
    nMCContStations(0),nHitContStations(0),maxNStaMC(0),maxNSensorMC(0),maxNStaHits(0),nStations(0),nMCStations(),isReconstructable(0),isAdditional(0),
     rTracks(),tTracks(){};
  CbmL1MCTrack(double mass, double q, TVector3 vr, TLorentzVector vp, int ID, int mother_ID, int pdg);
//   CbmL1MCTrack(TmpMCPoints &mcPoint, TVector3 vr, TLorentzVector vp, int ID, int mother_ID);

  bool IsPrimary()         const {return mother_ID < 0;};
  bool IsReconstructable() const {return isReconstructable;};
  bool IsAdditional()      const {return isAdditional; }
  int  NStations()         const {return nStations;};
  int  NMCStations()       const {return nMCStations;};
  int  NMCContStations()   const {return nMCContStations;};
  
  void Init();

  void AddRecoTrack(CbmL1Track* rTr){rTracks.push_back(rTr);}
  vector< CbmL1Track* >&  GetRecoTracks(){ return rTracks;}
  int  GetNClones() const { return rTracks.size() - 1;}
  bool IsReconstructed() const { return rTracks.size(); }
  
  void AddTouchTrack(CbmL1Track* tTr){tTracks.push_back(tTr);}
  bool IsDisturbed() const { return tTracks.size(); }

  friend class CbmL1;
 private:
  int nMCContStations;   // number of consecutive stations with mcPoints
  int nHitContStations;  // number of consecutive stations with hits
  int maxNStaMC;         // max number of mcPoints on station
  int maxNSensorMC;         // max number of mcPoints with same z
  int maxNStaHits;       // max number of hits on station
   
  int nStations;         // number of stations with hits
  int nMCStations;         // number of stations with MCPoints

  bool isReconstructable;
  bool isAdditional; // is not reconstructable, but stil interesting
   
  void CalculateMCCont();
  void CalculateHitCont();
  void CalculateMaxNStaHits();
  void CalculateMaxNStaMC();
  void CalculateIsReconstructable();

    // next members filled and used in Performance
  vector< CbmL1Track* >  rTracks; // array of assosiated recoTracks
  vector< CbmL1Track* >  tTracks; // array of recoTracks wich aren't assosiated with this mcTrack, but use some hits from it.

};


#endif
/*
 *====================================================================
 *
 *  CBM Level 1 Reconstruction 
 *  
 *  Authors: I.Kisel,  S.Gorbunov
 *
 *  e-mail : ikisel@kip.uni-heidelberg.de 
 *
 *====================================================================
 *
 *  L1 Monte Carlo information
 *
 *====================================================================
 */

#ifndef CbmL1MCPoint_H
#define CbmL1MCPoint_H

#include <vector>
using std::vector;

struct CbmL1MCPoint
{
  CbmL1MCPoint():
x(0), y(0), z(0), px(0), py(0), pz(0),
xIn(0),  yIn(0),  zIn(0),  pxIn(0),  pyIn(0),  pzIn(0),
xOut(0), yOut(0), zOut(0), pxOut(0), pyOut(0), pzOut(0),
p(0), q(0), mass(0),
pdg(0), ID(0), mother_ID(0),
iStation(0), pointId(-1), hitIds()
  {}
  
  double x, y, z, px, py, pz;
  double xIn,  yIn,  zIn,  pxIn,  pyIn,  pzIn;
  double xOut, yOut, zOut, pxOut, pyOut, pzOut;
  double p, q, mass;
  int pdg, ID, mother_ID;
  int iStation;
  int pointId;

  static bool compareIDz( const CbmL1MCPoint &a, const CbmL1MCPoint &b )
  {
    return ( a.ID < b.ID ) || ( ( a.ID == b.ID ) && (a.z < b.z) );
  }

  static bool pcompareIDz( const CbmL1MCPoint *a, const CbmL1MCPoint *b )
  {
    return ( a->ID < b->ID ) || ( ( a->ID == b->ID ) && (a->z < b->z) );
  }

  vector<int> hitIds; // indices of CbmL1StsHits in L1->vStsHits array
};

#endif
#ifndef _CbmL1StsHit_h_
#define _CbmL1StsHit_h_

#include <vector>
using std::vector;

  // hits with hit-mcpoint match information
class CbmL1StsHit
{
  public:
  CbmL1StsHit():hitId(0),extIndex(0),mcPointIds(){};
  CbmL1StsHit(int hitId_, int extIndex_)
    :hitId(hitId_),extIndex(extIndex_),mcPointIds(){};

  int hitId;              // index of L1StsHit in algo->vStsHits array. Should be equal to index of this in L1->vStsHits
  int extIndex;          // index of hit in the TClonesArray array
  vector<int> mcPointIds; // indices of CbmL1MCPoint in L1->vMCPoints array
};

#endif
/*
 *====================================================================
 *
 *  CBM Level 1 Reconstruction 
 *  
 *  Authors: I.Kisel,  S.Gorbunov
 *
 *  e-mail : ikisel@kip.uni-heidelberg.de 
 *
 *====================================================================
 *
 *  L1 track class
 *
 *====================================================================
 */


#ifndef CbmL1Track_H
#define CbmL1Track_H

#include "CbmL1MCTrack.h"
#include "CbmL1TrackPar.h"

#include <vector>
#include <map>
using std::vector;
using std::map;

class L1Triplet;
class L1StsHit;
class CbmL1MCTrack;

class CbmL1Track: public CbmL1TrackPar
{
  public:
    CbmL1Track():StsHits(),nStations(0),hitMap(),mcTracks(),maxPurity(-1){}

    int GetNOfHits(){ return StsHits.size(); }

    void AddMCTrack(CbmL1MCTrack* mcTr){mcTracks.push_back(mcTr);}
    vector< CbmL1MCTrack* >&  GetMCTracks(){ return mcTracks;}
    CbmL1MCTrack* GetMCTrack(){ return mcTracks[0];}
    int  GetNMCTracks(){ return mcTracks.size();}
    bool IsGhost(){return !( mcTracks.size() );}

    void SetMaxPurity(double maxPurity_){maxPurity = maxPurity_;}
    double GetMaxPurity(){return maxPurity;}

    static bool compareChi2(const CbmL1Track &a, const CbmL1Track &b){ return (a.chi2 < b.chi2); }
    static bool comparePChi2(const CbmL1Track *a, const CbmL1Track *b){ return (a->chi2 < b->chi2); }


    double TLast[6], CLast[15];
    vector<int> StsHits;
    int nStations;
    
    map<int, int> hitMap; // how many hits from each mcTrack belong to current recoTrack
  private:
        // next members filled and used in Performance
    vector< CbmL1MCTrack* >  mcTracks; // array of assosiated recoTracks. Should be only one.
    double maxPurity; // maximum persent of hits, which belong to one mcTrack.
};

#endif

#ifndef CbmL1TrackPar_H
#define CbmL1TrackPar_H

#include "CbmKFTrackInterface.h"

struct CbmL1TrackPar : public CbmKFTrackInterface{
 public:
   CbmL1TrackPar():
     chi2(0),NDF(0),mass(0),is_electron(0){}
  double *GetTrack(){ return T; }
  double *GetCovMatrix(){ return C; }
  double &GetRefChi2(){ return chi2; }
  int    &GetRefNDF(){ return NDF; }
  double GetMass(){ return mass; }
  bool   IsElectron(){ return is_electron; }

  double T[6], C[15], chi2 ;
  int NDF ;
  double mass; // mass hypothesis
  bool is_electron;
};

#endif
/*
 *====================================================================
 *
 *  CBM Level 1 Reconstruction 
 *  
 *  Authors: I.Kisel,  S.Gorbunov
 *
 *  e-mail : ikisel@kip.uni-heidelberg.de 
 *
 *====================================================================
 *
 *  L1 vertex class
 *
 *====================================================================
 */

#ifndef CbmL1Vtx_H
#define CbmL1Vtx_H

#include "CbmKFVertexInterface.h"

struct CbmL1Vtx: public CbmKFVertexInterface {
  CbmL1Vtx():
    MC_mass(0), MC_q(0), MC_p(0), MC_x(0), MC_y(0), MC_z(0), MC_px(0), MC_py(0), MC_pz(0),
    MC_ID(0), MC_pdg(0),
    x(0), y(0), z(0), chi2(0),
    NDF(0),
    mass(0), mass_err(0)
  {};
  
  double MC_mass, MC_q, MC_p, MC_x, MC_y, MC_z, MC_px, MC_py, MC_pz;
  int MC_ID, MC_pdg;

  double x, y, z, C[6], chi2;
  int NDF;

  double mass, mass_err;

  Double_t &GetRefX(){ return x; } 
  Double_t &GetRefY(){ return y; } 
  Double_t &GetRefZ(){ return z; } 
  Double_t *GetCovMatrix(){ return C; }   
  Double_t &GetRefChi2()  { return chi2; }   
  Int_t    &GetRefNDF()   { return NDF; }      
  Double_t &GetRefMass()  { return mass; }    
  Double_t &GetRefMassError() { return mass_err; }  
};

#endif
/*
 *====================================================================
 *
 *  CBM Level 1 Reconstruction 
 *  
 *  Authors: I.Kisel,  S.Gorbunov
 *
 *  e-mail : ikisel@kip.uni-heidelberg.de 
 *
 *====================================================================
 *
 *  CbmL1StsTrackFinder header
 *
 *====================================================================
 */

#ifndef CBML1STSTRACKFINDER
#define CBML1STSTRACKFINDER 1


#include "CbmL1.h"

#include "CbmStsTrackFinder.h"

class TClonesArray;


class CbmL1StsTrackFinder : public CbmStsTrackFinder
{

 public:

  /** Default constructor **/
  CbmL1StsTrackFinder();


  /** Destructor **/
  virtual ~CbmL1StsTrackFinder();


  /** Initialisation **/
  virtual void Init();


  /** Track finding algorithm
   **/
  virtual Int_t DoFind();

 private:

  ClassDef(CbmL1StsTrackFinder,1);

};


#endif
#ifndef CbmL1PartEfficiencies_H
#define CbmL1PartEfficiencies_H

#include "CbmKFPartEfficiencies.h"

class CbmL1PartEfficiencies: public CbmKFPartEfficiencies
{
 public:
  CbmL1PartEfficiencies(){};
  ~CbmL1PartEfficiencies(){};

  ClassDef(CbmL1PartEfficiencies,1);
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"CbmL1", payloadCode, "@",
"CbmL1PartEfficiencies", payloadCode, "@",
"CbmL1StsTrackFinder", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__CatDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__CatDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__CatDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__CatDict() {
  TriggerDictionaryInitialization_G__CatDict_Impl();
}
