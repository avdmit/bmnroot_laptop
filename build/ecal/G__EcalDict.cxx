// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIalexdIbmnroot_devdIbmnrootdIbuilddIecaldIG__EcalDict

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
#include "BmnEcal.h"
#include "BmnEcalPoint.h"
#include "BmnEcalContFact.h"
#include "BmnEcalGeo.h"
#include "BmnEcalGeoPar.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_BmnEcalGeoPar(void *p = 0);
   static void *newArray_BmnEcalGeoPar(Long_t size, void *p);
   static void delete_BmnEcalGeoPar(void *p);
   static void deleteArray_BmnEcalGeoPar(void *p);
   static void destruct_BmnEcalGeoPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnEcalGeoPar*)
   {
      ::BmnEcalGeoPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnEcalGeoPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnEcalGeoPar", ::BmnEcalGeoPar::Class_Version(), "BmnEcalGeoPar.h", 17,
                  typeid(::BmnEcalGeoPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnEcalGeoPar::Dictionary, isa_proxy, 4,
                  sizeof(::BmnEcalGeoPar) );
      instance.SetNew(&new_BmnEcalGeoPar);
      instance.SetNewArray(&newArray_BmnEcalGeoPar);
      instance.SetDelete(&delete_BmnEcalGeoPar);
      instance.SetDeleteArray(&deleteArray_BmnEcalGeoPar);
      instance.SetDestructor(&destruct_BmnEcalGeoPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnEcalGeoPar*)
   {
      return GenerateInitInstanceLocal((::BmnEcalGeoPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnEcalGeoPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnEcal(void *p = 0);
   static void *newArray_BmnEcal(Long_t size, void *p);
   static void delete_BmnEcal(void *p);
   static void deleteArray_BmnEcal(void *p);
   static void destruct_BmnEcal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnEcal*)
   {
      ::BmnEcal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnEcal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnEcal", ::BmnEcal::Class_Version(), "", 33,
                  typeid(::BmnEcal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnEcal::Dictionary, isa_proxy, 4,
                  sizeof(::BmnEcal) );
      instance.SetNew(&new_BmnEcal);
      instance.SetNewArray(&newArray_BmnEcal);
      instance.SetDelete(&delete_BmnEcal);
      instance.SetDeleteArray(&deleteArray_BmnEcal);
      instance.SetDestructor(&destruct_BmnEcal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnEcal*)
   {
      return GenerateInitInstanceLocal((::BmnEcal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnEcal*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnEcalPoint(void *p = 0);
   static void *newArray_BmnEcalPoint(Long_t size, void *p);
   static void delete_BmnEcalPoint(void *p);
   static void deleteArray_BmnEcalPoint(void *p);
   static void destruct_BmnEcalPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnEcalPoint*)
   {
      ::BmnEcalPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnEcalPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnEcalPoint", ::BmnEcalPoint::Class_Version(), "", 174,
                  typeid(::BmnEcalPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnEcalPoint::Dictionary, isa_proxy, 4,
                  sizeof(::BmnEcalPoint) );
      instance.SetNew(&new_BmnEcalPoint);
      instance.SetNewArray(&newArray_BmnEcalPoint);
      instance.SetDelete(&delete_BmnEcalPoint);
      instance.SetDeleteArray(&deleteArray_BmnEcalPoint);
      instance.SetDestructor(&destruct_BmnEcalPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnEcalPoint*)
   {
      return GenerateInitInstanceLocal((::BmnEcalPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnEcalPoint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnEcalContFact(void *p = 0);
   static void *newArray_BmnEcalContFact(Long_t size, void *p);
   static void delete_BmnEcalContFact(void *p);
   static void deleteArray_BmnEcalContFact(void *p);
   static void destruct_BmnEcalContFact(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnEcalContFact*)
   {
      ::BmnEcalContFact *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnEcalContFact >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnEcalContFact", ::BmnEcalContFact::Class_Version(), "", 244,
                  typeid(::BmnEcalContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnEcalContFact::Dictionary, isa_proxy, 4,
                  sizeof(::BmnEcalContFact) );
      instance.SetNew(&new_BmnEcalContFact);
      instance.SetNewArray(&newArray_BmnEcalContFact);
      instance.SetDelete(&delete_BmnEcalContFact);
      instance.SetDeleteArray(&deleteArray_BmnEcalContFact);
      instance.SetDestructor(&destruct_BmnEcalContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnEcalContFact*)
   {
      return GenerateInitInstanceLocal((::BmnEcalContFact*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnEcalContFact*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnEcalGeo(void *p = 0);
   static void *newArray_BmnEcalGeo(Long_t size, void *p);
   static void delete_BmnEcalGeo(void *p);
   static void deleteArray_BmnEcalGeo(void *p);
   static void destruct_BmnEcalGeo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnEcalGeo*)
   {
      ::BmnEcalGeo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnEcalGeo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnEcalGeo", ::BmnEcalGeo::Class_Version(), "", 272,
                  typeid(::BmnEcalGeo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnEcalGeo::Dictionary, isa_proxy, 4,
                  sizeof(::BmnEcalGeo) );
      instance.SetNew(&new_BmnEcalGeo);
      instance.SetNewArray(&newArray_BmnEcalGeo);
      instance.SetDelete(&delete_BmnEcalGeo);
      instance.SetDeleteArray(&deleteArray_BmnEcalGeo);
      instance.SetDestructor(&destruct_BmnEcalGeo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnEcalGeo*)
   {
      return GenerateInitInstanceLocal((::BmnEcalGeo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnEcalGeo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnEcalGeoPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnEcalGeoPar::Class_Name()
{
   return "BmnEcalGeoPar";
}

//______________________________________________________________________________
const char *BmnEcalGeoPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnEcalGeoPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnEcalGeoPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnEcalGeoPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnEcalGeoPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnEcalGeoPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnEcalGeoPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnEcalGeoPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnEcal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnEcal::Class_Name()
{
   return "BmnEcal";
}

//______________________________________________________________________________
const char *BmnEcal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnEcal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnEcal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnEcal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnEcal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnEcal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnEcal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnEcal*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnEcalPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnEcalPoint::Class_Name()
{
   return "BmnEcalPoint";
}

//______________________________________________________________________________
const char *BmnEcalPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnEcalPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnEcalPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnEcalPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnEcalPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnEcalPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnEcalPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnEcalPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnEcalContFact::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnEcalContFact::Class_Name()
{
   return "BmnEcalContFact";
}

//______________________________________________________________________________
const char *BmnEcalContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnEcalContFact*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnEcalContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnEcalContFact*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnEcalContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnEcalContFact*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnEcalContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnEcalContFact*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnEcalGeo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnEcalGeo::Class_Name()
{
   return "BmnEcalGeo";
}

//______________________________________________________________________________
const char *BmnEcalGeo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnEcalGeo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnEcalGeo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnEcalGeo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnEcalGeo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnEcalGeo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnEcalGeo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnEcalGeo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnEcalGeoPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnEcalGeoPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnEcalGeoPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnEcalGeoPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnEcalGeoPar(void *p) {
      return  p ? new(p) ::BmnEcalGeoPar : new ::BmnEcalGeoPar;
   }
   static void *newArray_BmnEcalGeoPar(Long_t nElements, void *p) {
      return p ? new(p) ::BmnEcalGeoPar[nElements] : new ::BmnEcalGeoPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnEcalGeoPar(void *p) {
      delete ((::BmnEcalGeoPar*)p);
   }
   static void deleteArray_BmnEcalGeoPar(void *p) {
      delete [] ((::BmnEcalGeoPar*)p);
   }
   static void destruct_BmnEcalGeoPar(void *p) {
      typedef ::BmnEcalGeoPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnEcalGeoPar

//______________________________________________________________________________
void BmnEcal::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnEcal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnEcal::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnEcal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnEcal(void *p) {
      return  p ? new(p) ::BmnEcal : new ::BmnEcal;
   }
   static void *newArray_BmnEcal(Long_t nElements, void *p) {
      return p ? new(p) ::BmnEcal[nElements] : new ::BmnEcal[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnEcal(void *p) {
      delete ((::BmnEcal*)p);
   }
   static void deleteArray_BmnEcal(void *p) {
      delete [] ((::BmnEcal*)p);
   }
   static void destruct_BmnEcal(void *p) {
      typedef ::BmnEcal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnEcal

//______________________________________________________________________________
void BmnEcalPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnEcalPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnEcalPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnEcalPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnEcalPoint(void *p) {
      return  p ? new(p) ::BmnEcalPoint : new ::BmnEcalPoint;
   }
   static void *newArray_BmnEcalPoint(Long_t nElements, void *p) {
      return p ? new(p) ::BmnEcalPoint[nElements] : new ::BmnEcalPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnEcalPoint(void *p) {
      delete ((::BmnEcalPoint*)p);
   }
   static void deleteArray_BmnEcalPoint(void *p) {
      delete [] ((::BmnEcalPoint*)p);
   }
   static void destruct_BmnEcalPoint(void *p) {
      typedef ::BmnEcalPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnEcalPoint

//______________________________________________________________________________
void BmnEcalContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnEcalContFact.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnEcalContFact::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnEcalContFact::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnEcalContFact(void *p) {
      return  p ? new(p) ::BmnEcalContFact : new ::BmnEcalContFact;
   }
   static void *newArray_BmnEcalContFact(Long_t nElements, void *p) {
      return p ? new(p) ::BmnEcalContFact[nElements] : new ::BmnEcalContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnEcalContFact(void *p) {
      delete ((::BmnEcalContFact*)p);
   }
   static void deleteArray_BmnEcalContFact(void *p) {
      delete [] ((::BmnEcalContFact*)p);
   }
   static void destruct_BmnEcalContFact(void *p) {
      typedef ::BmnEcalContFact current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnEcalContFact

//______________________________________________________________________________
void BmnEcalGeo::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnEcalGeo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnEcalGeo::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnEcalGeo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnEcalGeo(void *p) {
      return  p ? new(p) ::BmnEcalGeo : new ::BmnEcalGeo;
   }
   static void *newArray_BmnEcalGeo(Long_t nElements, void *p) {
      return p ? new(p) ::BmnEcalGeo[nElements] : new ::BmnEcalGeo[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnEcalGeo(void *p) {
      delete ((::BmnEcalGeo*)p);
   }
   static void deleteArray_BmnEcalGeo(void *p) {
      delete [] ((::BmnEcalGeo*)p);
   }
   static void destruct_BmnEcalGeo(void *p) {
      typedef ::BmnEcalGeo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnEcalGeo

namespace {
  void TriggerDictionaryInitialization_G__EcalDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/opt/fairroot/install/include",
"/home/alex/bmnroot_dev/bmnroot/mcstack",
"/home/alex/bmnroot_dev/bmnroot/bmndata",
"/home/alex/bmnroot_dev/bmnroot/ecal",
"/opt/fairsoft/install/include",
"/opt/fairsoft/install/include/root",
"/opt/fairsoft/install/include/root",
"/home/alex/bmnroot_dev/bmnroot/build/ecal/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__EcalDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$BmnEcalGeoPar.h")))  BmnEcalGeoPar;
class BmnEcal;
class BmnEcalPoint;
class __attribute__((annotate(R"ATTRDUMP(Factory for all HYP parameter containers)ATTRDUMP"))) BmnEcalContFact;
class __attribute__((annotate(R"ATTRDUMP(Class for Hyp)ATTRDUMP"))) BmnEcalGeo;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__EcalDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
/*************************************************************************************
 *
 *         Class BmnEcal
 *         
 *  Adopted for BMN by:   Elena Litvinenko
 *  e-mail:   litvin@nf.jinr.ru
 *  Version:  10-02-2016   
 *
 ************************************************************************************/

#ifndef BMNECAL_H
#define BMNECAL_H


#include "TClonesArray.h"
#include "TVector3.h"
#include "TLorentzVector.h"
#include "FairDetector.h"
#include "BmnEcalGeoPar.h"

using namespace std;


class TClonesArray;
class BmnEcalPoint;
class FairVolume;

class BmnEcal : public FairDetector
{

 public:

  /** Default constructor **/
  BmnEcal();


  /** Standard constructor.
   *@param name    detetcor name
   *@param active  sensitivity flag
   **/
  BmnEcal(const char* name, Bool_t active);


  /** Destructor **/
  virtual ~BmnEcal();


  /** Virtual method Initialize
   ** Initialises detector. Stores volume IDs for MUO detector and mirror.
   **/
  virtual void Initialize();


  /** Virtual method ProcessHits
   **
   ** Defines the action to be taken when a step is inside the
   ** active volume. Creates BmnEcalPoints and BmnEcalMirrorPoints and adds 
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

  BmnEcalPoint* AddHit(Int_t trackID, Int_t detID,  Int_t copyNo, Int_t copyNoMother,
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
  
  TClonesArray* fEcalCollection;        //! Hit collection
  
  // reset all parameters   
  void ResetParameters();

  ClassDef(BmnEcal,2)

}; 


//------------------------------------------------------------------------------------------------------------------------
inline void BmnEcal::ResetParameters() 
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
// -----                     BmnEcalPoint header file                  -----
// -----                     litvin@nf.jinr.ru                        -----
// -----                     Last updated 10-02-2016                 -----
// ------------------------------------------------------------------------

#ifndef BMNECALPOINT_H
#define BMNECALPOINT_H

#include "TObject.h"
#include "TVector3.h"
#include "TLorentzVector.h"
#include "FairMCPoint.h"

using namespace std;

class BmnEcalPoint : public FairMCPoint
{

 public:

  /** Default constructor **/
  BmnEcalPoint();


  /** Constructor with arguments
   *@param trackID  Index of MCTrack
   *@param detID    Detector ID (at present, volume MC number)
   *@param copyNo         Number of active layer inside ECAL module
   *@param copyNoMother   ECAL module number
   *@param pos      Coordinates  [cm]
   *@param mom      Momentum of track [GeV]
   *@param tof      Time since event start [ns]
   *@param length   Track length since creation [cm]
   *@param eLoss    Energy deposit [GeV]
   **/
  
  BmnEcalPoint(Int_t trackID, Int_t detID, 
	      Int_t copyNo, Int_t copyNoMother, 
	      TVector3 pos, TVector3 mom,
	      Double_t tof, Double_t length, 
	      Double_t eLoss, UInt_t EventId=0 );
  
  /** Copy constructor **/
  BmnEcalPoint(const BmnEcalPoint& point) { *this = point; };
  

  /** Destructor **/
  virtual ~BmnEcalPoint();
  

  /** Accessors **/
  Short_t GetCopy()        const {return nCopy; };
  Short_t GetCopyMother()  const {return nCopyMother; };

  /** Modifiers **/
  void SetCopy(Short_t i)          { nCopy    = i; }; 
  void SetCopyMother(Short_t i)    { nCopyMother  = i; }; 
   
  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;


 protected:

  Short_t nCopy;                // Copy number
  Short_t nCopyMother;          // Copy number of mother volume
    
  ClassDef(BmnEcalPoint,4)

};

#endif
// -------------------------------------------------------------------------
// -----                     BmnEcalContFact header file                -----
// -------------------------------------------------------------------------


#ifndef BMNECALCONTFACT_H
#define BMNECALCONTFACT_H

#include "FairContFact.h"

class FairContainer;

class BmnEcalContFact : public FairContFact {
private:
  void setAllContainers();
public:
  BmnEcalContFact();
  ~BmnEcalContFact() {}
  FairParSet* createContainer(FairContainer*);

  ClassDef( BmnEcalContFact,0) // Factory for all HYP parameter containers
};

#endif  /* !BMNECALCONTFACT_H */
/*************************************************************************************
 *
 *         Class BmnEcalGeo
 *         
 *  Adopted for BMN by:   Elena Litvinenko
 *  e-mail:   litvin@nf.jinr.ru
 *  Version:  10-02-2016   
 *
 ************************************************************************************/

#ifndef BMNGEOECAL_H
#define BMNGEOECAL_H

#include "FairGeoSet.h"

class  BmnEcalGeo : public FairGeoSet {
protected:
  char modName[20];  // name of module
  char eleName[20];  // substring for elements in module
  
public:
  BmnEcalGeo();
  ~BmnEcalGeo() {}
  const char* getModuleName(Int_t);
  const char* getEleName(Int_t);
  
  ClassDef(BmnEcalGeo,0) // Class for Hyp
};

#endif  /* !BMNGEOECAL_H */



/*************************************************************************************
 *
 *         Class BmnEcalGeoPar
 *         
 *  Adopted for BMN by:   Elena Litvinenko
 *  e-mail:   litvin@nf.jinr.ru
 *  Version:  10-02-2016   
 *
 ************************************************************************************/

#ifndef BMNGEOECALPAR_H
#define BMNGEOECALPAR_H

#include "FairParGenericSet.h"
#include "TObjArray.h"

class BmnEcalGeoPar : public FairParGenericSet {
public:
  TObjArray      *fGeoSensNodes; /** List of FairGeoNodes for sensitive  volumes */
  TObjArray      *fGeoPassNodes; /** List of FairGeoNodes for passive  volumes */
  
  BmnEcalGeoPar(const char* name="BmnEcalGeoPar",
	     const char* title="Ecal Geometry Parameters",
             const char* context="EcalDefaultContext");
  ~BmnEcalGeoPar(void);
  void clear(void);
  void putParams(FairParamList*);
  Bool_t getParams(FairParamList*);
  TObjArray             *GetGeoSensitiveNodes(){return fGeoSensNodes;}
  TObjArray             *GetGeoPassiveNodes(){return fGeoPassNodes;}

 
  
  ClassDef(BmnEcalGeoPar,1)
};

#endif /* !BMNGEOECALPAR_H */

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"BmnEcal", payloadCode, "@",
"BmnEcalContFact", payloadCode, "@",
"BmnEcalGeo", payloadCode, "@",
"BmnEcalGeoPar", payloadCode, "@",
"BmnEcalPoint", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__EcalDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__EcalDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__EcalDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__EcalDict() {
  TriggerDictionaryInitialization_G__EcalDict_Impl();
}
