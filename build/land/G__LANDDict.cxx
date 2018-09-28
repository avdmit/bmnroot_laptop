// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIalexdIbmnroot_devdIbmnrootdIbuilddIlanddIG__LANDDict

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
#include "BmnLANDHit.h"
#include "BmnLANDHitProducer.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_BmnLANDHit(void *p = 0);
   static void *newArray_BmnLANDHit(Long_t size, void *p);
   static void delete_BmnLANDHit(void *p);
   static void deleteArray_BmnLANDHit(void *p);
   static void destruct_BmnLANDHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnLANDHit*)
   {
      ::BmnLANDHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnLANDHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnLANDHit", ::BmnLANDHit::Class_Version(), "", 37,
                  typeid(::BmnLANDHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnLANDHit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnLANDHit) );
      instance.SetNew(&new_BmnLANDHit);
      instance.SetNewArray(&newArray_BmnLANDHit);
      instance.SetDelete(&delete_BmnLANDHit);
      instance.SetDeleteArray(&deleteArray_BmnLANDHit);
      instance.SetDestructor(&destruct_BmnLANDHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnLANDHit*)
   {
      return GenerateInitInstanceLocal((::BmnLANDHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnLANDHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnLANDHitProducer(void *p = 0);
   static void *newArray_BmnLANDHitProducer(Long_t size, void *p);
   static void delete_BmnLANDHitProducer(void *p);
   static void deleteArray_BmnLANDHitProducer(void *p);
   static void destruct_BmnLANDHitProducer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnLANDHitProducer*)
   {
      ::BmnLANDHitProducer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnLANDHitProducer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnLANDHitProducer", ::BmnLANDHitProducer::Class_Version(), "", 88,
                  typeid(::BmnLANDHitProducer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnLANDHitProducer::Dictionary, isa_proxy, 4,
                  sizeof(::BmnLANDHitProducer) );
      instance.SetNew(&new_BmnLANDHitProducer);
      instance.SetNewArray(&newArray_BmnLANDHitProducer);
      instance.SetDelete(&delete_BmnLANDHitProducer);
      instance.SetDeleteArray(&deleteArray_BmnLANDHitProducer);
      instance.SetDestructor(&destruct_BmnLANDHitProducer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnLANDHitProducer*)
   {
      return GenerateInitInstanceLocal((::BmnLANDHitProducer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnLANDHitProducer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnLANDHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnLANDHit::Class_Name()
{
   return "BmnLANDHit";
}

//______________________________________________________________________________
const char *BmnLANDHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnLANDHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnLANDHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnLANDHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnLANDHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnLANDHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnLANDHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnLANDHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnLANDHitProducer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnLANDHitProducer::Class_Name()
{
   return "BmnLANDHitProducer";
}

//______________________________________________________________________________
const char *BmnLANDHitProducer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnLANDHitProducer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnLANDHitProducer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnLANDHitProducer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnLANDHitProducer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnLANDHitProducer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnLANDHitProducer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnLANDHitProducer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnLANDHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnLANDHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnLANDHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnLANDHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnLANDHit(void *p) {
      return  p ? new(p) ::BmnLANDHit : new ::BmnLANDHit;
   }
   static void *newArray_BmnLANDHit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnLANDHit[nElements] : new ::BmnLANDHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnLANDHit(void *p) {
      delete ((::BmnLANDHit*)p);
   }
   static void deleteArray_BmnLANDHit(void *p) {
      delete [] ((::BmnLANDHit*)p);
   }
   static void destruct_BmnLANDHit(void *p) {
      typedef ::BmnLANDHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnLANDHit

//______________________________________________________________________________
void BmnLANDHitProducer::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnLANDHitProducer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnLANDHitProducer::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnLANDHitProducer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnLANDHitProducer(void *p) {
      return  p ? new(p) ::BmnLANDHitProducer : new ::BmnLANDHitProducer;
   }
   static void *newArray_BmnLANDHitProducer(Long_t nElements, void *p) {
      return p ? new(p) ::BmnLANDHitProducer[nElements] : new ::BmnLANDHitProducer[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnLANDHitProducer(void *p) {
      delete ((::BmnLANDHitProducer*)p);
   }
   static void deleteArray_BmnLANDHitProducer(void *p) {
      delete [] ((::BmnLANDHitProducer*)p);
   }
   static void destruct_BmnLANDHitProducer(void *p) {
      typedef ::BmnLANDHitProducer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnLANDHitProducer

namespace {
  void TriggerDictionaryInitialization_G__LANDDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/opt/fairroot/install/include",
"/home/alex/bmnroot_dev/bmnroot/mcstack",
"/home/alex/bmnroot_dev/bmnroot/bmndata",
"/home/alex/bmnroot_dev/bmnroot/land",
"/opt/fairsoft/install/include",
"/opt/fairsoft/install/include/root",
"/opt/fairsoft/install/include/root",
"/home/alex/bmnroot_dev/bmnroot/build/land/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__LANDDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class BmnLANDHit;
class BmnLANDHitProducer;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__LANDDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
/* 
 * File:   BmnLANDHit.h
 * Author: segarra
 *
 * Created on Feb 14, 2018, 10:51 AM
 */

/*
TODO: add slewing, make sure that spacing of layers is only thickness of bars 10cm, add T0

BmnLandHit->GetDetectorID()  			returns plane of LAND (5 = veto, 0-4 = LAND)
BmnLandHit->GetRefIndex()			returns bar index in plane (0-20)
BmnLandHit->GetX() / GetY() / GetZ()		returns global position of LAND in lab frame
BmnLandHit->GetTimeStamp()			returns time rel to T0 with slewing corr
BmnLandHit->GetEnergy()				returns calibrated energy deposit for hit
BmnLandHit->GetDx() / GetDy() / GetDz()		returns error in position calculation

*/


#ifndef BMNLANDHIT_H
#define BMNLANDHIT_H

#include <math.h>
#include <iostream>
#include "BmnHit.h"
#include <TObject.h>
using namespace std;

// class TClonesArray;

class BmnLANDHit : public BmnHit {
public:

    /** Default constructor **/
    BmnLANDHit();

    /** Constructor to use **/
    BmnLANDHit(Int_t plane, Int_t bar, TVector3 posHit, TVector3 dpos, Float_t time, Float_t energy );

    /** Destructor **/
    virtual ~BmnLANDHit();
    
    Float_t GetEnergy() const{
	return fenergy;
    }

    void SetEnergy(Float_t energy) {
	fenergy = energy;
    }

private:

    Float_t fenergy;
    ClassDef(BmnLANDHit, 1);
};

#endif /* BMNLANDHIT_H */

//--------------------------------------------------------------------------------------------------------------------------------------
#ifndef __BmnLANDHitProducer_H
#define __BmnLANDHitProducer_H 1

#include <TClonesArray.h>
#include <FairTask.h>
#include <TVector3.h>
#include <map>
#include <math.h>
#include "BmnLANDHit.h"
#include "BmnTrigDigit.h"
#include "BmnLANDDigit.h"

#define LAND_PLANE_N 6
#define LAND_BAR_N 20

class TRandom2;
class TEfficiency;
class TH1D;
class TH2D;
//class BmnTof1GeoUtils;
//--------------------------------------------------------------------------------------------------------------------------------------
class BmnLANDHitProducer : public FairTask 
{
protected:
	TClonesArray		*aExpDigits;   // Exp input
	TClonesArray		*aExpDigitsT0;
	TClonesArray		*aLandHits;     //! output
	
	Bool_t			fOnlyPrimary;
	Bool_t			fUseMCData;
public:
	BmnLANDHitProducer(const char *name = "LAND HitProducer", Bool_t useMCdata = true, Int_t verbose = 1, Bool_t DoTest = false);
	virtual ~BmnLANDHitProducer();

	virtual InitStatus 	Init();
	virtual void 		Exec(Option_t* opt);
	virtual void 		Finish();

	bool SetVelMap(TString filename);

private:
	struct VScint {
	  VScint(): vscint(1) {}
	  Float_t vscint;
	};
	VScint m_vscint[LAND_PLANE_N][LAND_BAR_N];

ClassDef(BmnLANDHitProducer, 2);
};

#endif
//--------------------------------------------------------------------------------------------------------------------------------------


#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"BmnLANDHit", payloadCode, "@",
"BmnLANDHitProducer", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__LANDDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__LANDDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__LANDDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__LANDDict() {
  TriggerDictionaryInitialization_G__LANDDict_Impl();
}
