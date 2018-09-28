// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIalexdIbmnroot_devdIbmnrootdIbuilddIbddIG__BdDict

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
#include "BmnBd.h"
#include "BmnBdPoint.h"
#include "BmnBdContFact.h"
#include "BmnBdGeo.h"
#include "BmnBdGeoPar.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_BmnBdGeoPar(void *p = 0);
   static void *newArray_BmnBdGeoPar(Long_t size, void *p);
   static void delete_BmnBdGeoPar(void *p);
   static void deleteArray_BmnBdGeoPar(void *p);
   static void destruct_BmnBdGeoPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnBdGeoPar*)
   {
      ::BmnBdGeoPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnBdGeoPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnBdGeoPar", ::BmnBdGeoPar::Class_Version(), "BmnBdGeoPar.h", 17,
                  typeid(::BmnBdGeoPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnBdGeoPar::Dictionary, isa_proxy, 4,
                  sizeof(::BmnBdGeoPar) );
      instance.SetNew(&new_BmnBdGeoPar);
      instance.SetNewArray(&newArray_BmnBdGeoPar);
      instance.SetDelete(&delete_BmnBdGeoPar);
      instance.SetDeleteArray(&deleteArray_BmnBdGeoPar);
      instance.SetDestructor(&destruct_BmnBdGeoPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnBdGeoPar*)
   {
      return GenerateInitInstanceLocal((::BmnBdGeoPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnBdGeoPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnBd(void *p = 0);
   static void *newArray_BmnBd(Long_t size, void *p);
   static void delete_BmnBd(void *p);
   static void deleteArray_BmnBd(void *p);
   static void destruct_BmnBd(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnBd*)
   {
      ::BmnBd *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnBd >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnBd", ::BmnBd::Class_Version(), "", 33,
                  typeid(::BmnBd), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnBd::Dictionary, isa_proxy, 4,
                  sizeof(::BmnBd) );
      instance.SetNew(&new_BmnBd);
      instance.SetNewArray(&newArray_BmnBd);
      instance.SetDelete(&delete_BmnBd);
      instance.SetDeleteArray(&deleteArray_BmnBd);
      instance.SetDestructor(&destruct_BmnBd);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnBd*)
   {
      return GenerateInitInstanceLocal((::BmnBd*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnBd*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnBdPoint(void *p = 0);
   static void *newArray_BmnBdPoint(Long_t size, void *p);
   static void delete_BmnBdPoint(void *p);
   static void deleteArray_BmnBdPoint(void *p);
   static void destruct_BmnBdPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnBdPoint*)
   {
      ::BmnBdPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnBdPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnBdPoint", ::BmnBdPoint::Class_Version(), "", 174,
                  typeid(::BmnBdPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnBdPoint::Dictionary, isa_proxy, 4,
                  sizeof(::BmnBdPoint) );
      instance.SetNew(&new_BmnBdPoint);
      instance.SetNewArray(&newArray_BmnBdPoint);
      instance.SetDelete(&delete_BmnBdPoint);
      instance.SetDeleteArray(&deleteArray_BmnBdPoint);
      instance.SetDestructor(&destruct_BmnBdPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnBdPoint*)
   {
      return GenerateInitInstanceLocal((::BmnBdPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnBdPoint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnBdContFact(void *p = 0);
   static void *newArray_BmnBdContFact(Long_t size, void *p);
   static void delete_BmnBdContFact(void *p);
   static void deleteArray_BmnBdContFact(void *p);
   static void destruct_BmnBdContFact(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnBdContFact*)
   {
      ::BmnBdContFact *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnBdContFact >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnBdContFact", ::BmnBdContFact::Class_Version(), "", 244,
                  typeid(::BmnBdContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnBdContFact::Dictionary, isa_proxy, 4,
                  sizeof(::BmnBdContFact) );
      instance.SetNew(&new_BmnBdContFact);
      instance.SetNewArray(&newArray_BmnBdContFact);
      instance.SetDelete(&delete_BmnBdContFact);
      instance.SetDeleteArray(&deleteArray_BmnBdContFact);
      instance.SetDestructor(&destruct_BmnBdContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnBdContFact*)
   {
      return GenerateInitInstanceLocal((::BmnBdContFact*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnBdContFact*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnBdGeo(void *p = 0);
   static void *newArray_BmnBdGeo(Long_t size, void *p);
   static void delete_BmnBdGeo(void *p);
   static void deleteArray_BmnBdGeo(void *p);
   static void destruct_BmnBdGeo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnBdGeo*)
   {
      ::BmnBdGeo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnBdGeo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnBdGeo", ::BmnBdGeo::Class_Version(), "", 272,
                  typeid(::BmnBdGeo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnBdGeo::Dictionary, isa_proxy, 4,
                  sizeof(::BmnBdGeo) );
      instance.SetNew(&new_BmnBdGeo);
      instance.SetNewArray(&newArray_BmnBdGeo);
      instance.SetDelete(&delete_BmnBdGeo);
      instance.SetDeleteArray(&deleteArray_BmnBdGeo);
      instance.SetDestructor(&destruct_BmnBdGeo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnBdGeo*)
   {
      return GenerateInitInstanceLocal((::BmnBdGeo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnBdGeo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnBdGeoPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnBdGeoPar::Class_Name()
{
   return "BmnBdGeoPar";
}

//______________________________________________________________________________
const char *BmnBdGeoPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnBdGeoPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnBdGeoPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnBdGeoPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnBdGeoPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnBdGeoPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnBdGeoPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnBdGeoPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnBd::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnBd::Class_Name()
{
   return "BmnBd";
}

//______________________________________________________________________________
const char *BmnBd::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnBd*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnBd::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnBd*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnBd::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnBd*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnBd::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnBd*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnBdPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnBdPoint::Class_Name()
{
   return "BmnBdPoint";
}

//______________________________________________________________________________
const char *BmnBdPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnBdPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnBdPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnBdPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnBdPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnBdPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnBdPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnBdPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnBdContFact::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnBdContFact::Class_Name()
{
   return "BmnBdContFact";
}

//______________________________________________________________________________
const char *BmnBdContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnBdContFact*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnBdContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnBdContFact*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnBdContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnBdContFact*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnBdContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnBdContFact*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnBdGeo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnBdGeo::Class_Name()
{
   return "BmnBdGeo";
}

//______________________________________________________________________________
const char *BmnBdGeo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnBdGeo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnBdGeo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnBdGeo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnBdGeo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnBdGeo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnBdGeo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnBdGeo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnBdGeoPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnBdGeoPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnBdGeoPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnBdGeoPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnBdGeoPar(void *p) {
      return  p ? new(p) ::BmnBdGeoPar : new ::BmnBdGeoPar;
   }
   static void *newArray_BmnBdGeoPar(Long_t nElements, void *p) {
      return p ? new(p) ::BmnBdGeoPar[nElements] : new ::BmnBdGeoPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnBdGeoPar(void *p) {
      delete ((::BmnBdGeoPar*)p);
   }
   static void deleteArray_BmnBdGeoPar(void *p) {
      delete [] ((::BmnBdGeoPar*)p);
   }
   static void destruct_BmnBdGeoPar(void *p) {
      typedef ::BmnBdGeoPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnBdGeoPar

//______________________________________________________________________________
void BmnBd::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnBd.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnBd::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnBd::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnBd(void *p) {
      return  p ? new(p) ::BmnBd : new ::BmnBd;
   }
   static void *newArray_BmnBd(Long_t nElements, void *p) {
      return p ? new(p) ::BmnBd[nElements] : new ::BmnBd[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnBd(void *p) {
      delete ((::BmnBd*)p);
   }
   static void deleteArray_BmnBd(void *p) {
      delete [] ((::BmnBd*)p);
   }
   static void destruct_BmnBd(void *p) {
      typedef ::BmnBd current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnBd

//______________________________________________________________________________
void BmnBdPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnBdPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnBdPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnBdPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnBdPoint(void *p) {
      return  p ? new(p) ::BmnBdPoint : new ::BmnBdPoint;
   }
   static void *newArray_BmnBdPoint(Long_t nElements, void *p) {
      return p ? new(p) ::BmnBdPoint[nElements] : new ::BmnBdPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnBdPoint(void *p) {
      delete ((::BmnBdPoint*)p);
   }
   static void deleteArray_BmnBdPoint(void *p) {
      delete [] ((::BmnBdPoint*)p);
   }
   static void destruct_BmnBdPoint(void *p) {
      typedef ::BmnBdPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnBdPoint

//______________________________________________________________________________
void BmnBdContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnBdContFact.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnBdContFact::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnBdContFact::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnBdContFact(void *p) {
      return  p ? new(p) ::BmnBdContFact : new ::BmnBdContFact;
   }
   static void *newArray_BmnBdContFact(Long_t nElements, void *p) {
      return p ? new(p) ::BmnBdContFact[nElements] : new ::BmnBdContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnBdContFact(void *p) {
      delete ((::BmnBdContFact*)p);
   }
   static void deleteArray_BmnBdContFact(void *p) {
      delete [] ((::BmnBdContFact*)p);
   }
   static void destruct_BmnBdContFact(void *p) {
      typedef ::BmnBdContFact current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnBdContFact

//______________________________________________________________________________
void BmnBdGeo::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnBdGeo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnBdGeo::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnBdGeo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnBdGeo(void *p) {
      return  p ? new(p) ::BmnBdGeo : new ::BmnBdGeo;
   }
   static void *newArray_BmnBdGeo(Long_t nElements, void *p) {
      return p ? new(p) ::BmnBdGeo[nElements] : new ::BmnBdGeo[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnBdGeo(void *p) {
      delete ((::BmnBdGeo*)p);
   }
   static void deleteArray_BmnBdGeo(void *p) {
      delete [] ((::BmnBdGeo*)p);
   }
   static void destruct_BmnBdGeo(void *p) {
      typedef ::BmnBdGeo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnBdGeo

namespace {
  void TriggerDictionaryInitialization_G__BdDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/opt/fairroot/install/include",
"/home/alex/bmnroot_dev/bmnroot/mcstack",
"/home/alex/bmnroot_dev/bmnroot/bmndata",
"/home/alex/bmnroot_dev/bmnroot/bd",
"/opt/fairsoft/install/include",
"/opt/fairsoft/install/include/root",
"/opt/fairsoft/install/include/root",
"/home/alex/bmnroot_dev/bmnroot/build/bd/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__BdDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$BmnBdGeoPar.h")))  BmnBdGeoPar;
class BmnBd;
class BmnBdPoint;
class __attribute__((annotate(R"ATTRDUMP(Factory for all HYP parameter containers)ATTRDUMP"))) BmnBdContFact;
class __attribute__((annotate(R"ATTRDUMP(Class for Hyp)ATTRDUMP"))) BmnBdGeo;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__BdDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
/*************************************************************************************
 *
 *         Class BmnBd
 *         
 *  Adopted for BMN by:   Elena Litvinenko
 *  e-mail:   litvin@nf.jinr.ru
 *  Version:  10-02-2016   
 *
 ************************************************************************************/

#ifndef BMNBD_H
#define BMNBD_H


#include "TClonesArray.h"
#include "TVector3.h"
#include "TLorentzVector.h"
#include "FairDetector.h"
#include "BmnBdGeoPar.h"

using namespace std;


class TClonesArray;
class BmnBdPoint;
class FairVolume;

class BmnBd : public FairDetector
{

 public:

  /** Default constructor **/
  BmnBd();


  /** Standard constructor.
   *@param name    detetcor name
   *@param active  sensitivity flag
   **/
  BmnBd(const char* name, Bool_t active);


  /** Destructor **/
  virtual ~BmnBd();


  /** Virtual method Initialize
   ** Initialises detector. Stores volume IDs for MUO detector and mirror.
   **/
  virtual void Initialize();


  /** Virtual method ProcessHits
   **
   ** Defines the action to be taken when a step is inside the
   ** active volume. Creates BmnBdPoints and BmnBdMirrorPoints and adds 
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

  BmnBdPoint* AddHit(Int_t trackID, Int_t detID,  Int_t copyNo, 
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
  
  TClonesArray* fBdCollection;        //! Hit collection
  
  // reset all parameters   
  void ResetParameters();

  ClassDef(BmnBd,2)

}; 


//------------------------------------------------------------------------------------------------------------------------
inline void BmnBd::ResetParameters() 
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
// -----                     BmnBdPoint header file                  -----
// -----                     litvin@nf.jinr.ru                        -----
// -----                     Last updated 10-02-2016                 -----
// ------------------------------------------------------------------------

#ifndef BMNBDPOINT_H
#define BMNBDPOINT_H

#include "TObject.h"
#include "TVector3.h"
#include "TLorentzVector.h"
#include "FairMCPoint.h"

using namespace std;

class BmnBdPoint : public FairMCPoint
{

 public:

  /** Default constructor **/
  BmnBdPoint();


  /** Constructor with arguments
   *@param trackID  Index of MCTrack
   *@param detID    Detector ID (at present, volume MC number)
   *@param copyNo         Number of active layer inside BD module
   *@param copyNoMother   BD module number
   *@param pos      Coordinates  [cm]
   *@param mom      Momentum of track [GeV]
   *@param tof      Time since event start [ns]
   *@param length   Track length since creation [cm]
   *@param eLoss    Energy deposit [GeV]
   **/
  
  BmnBdPoint(Int_t trackID, Int_t detID, 
	      Int_t copyNo, 
	      TVector3 pos, TVector3 mom,
	      Double_t tof, Double_t length, 
	      Double_t eLoss, UInt_t EventId=0 );
  
  /** Copy constructor **/
  BmnBdPoint(const BmnBdPoint& point) { *this = point; };
  

  /** Destructor **/
  virtual ~BmnBdPoint();
  

  /** Accessors **/
  Short_t GetCopy()        const {return nCopy; };
  //  Short_t GetCopyMother()  const {return nCopyMother; };

  /** Modifiers **/
  void SetCopy(Short_t i)          { nCopy    = i; }; 
  //  void SetCopyMother(Short_t i)    { nCopyMother  = i; }; 
   
  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;


 protected:

  Short_t nCopy;                // Copy number
  //  Short_t nCopyMother;          // Copy number of mother volume
    
  ClassDef(BmnBdPoint,4)

};

#endif
// -------------------------------------------------------------------------
// -----                     BmnBdContFact header file                -----
// -------------------------------------------------------------------------


#ifndef BMNBDCONTFACT_H
#define BMNBDCONTFACT_H

#include "FairContFact.h"

class FairContainer;

class BmnBdContFact : public FairContFact {
private:
  void setAllContainers();
public:
  BmnBdContFact();
  ~BmnBdContFact() {}
  FairParSet* createContainer(FairContainer*);

  ClassDef( BmnBdContFact,0) // Factory for all HYP parameter containers
};

#endif  /* !BMNBDCONTFACT_H */
/*************************************************************************************
 *
 *         Class BmnBdGeo
 *         
 *  Adopted for BMN by:   Elena Litvinenko
 *  e-mail:   litvin@nf.jinr.ru
 *  Version:  10-02-2016   
 *
 ************************************************************************************/

#ifndef BMNGEOBD_H
#define BMNGEOBD_H

#include "FairGeoSet.h"

class  BmnBdGeo : public FairGeoSet {
protected:
  char modName[20];  // name of module
  char eleName[20];  // substring for elements in module
  
public:
  BmnBdGeo();
  ~BmnBdGeo() {}
  const char* getModuleName(Int_t);
  const char* getEleName(Int_t);
  
  ClassDef(BmnBdGeo,0) // Class for Hyp
};

#endif  /* !BMNGEOBD_H */



/*************************************************************************************
 *
 *         Class BmnBdGeoPar
 *         
 *  Adopted for BMN by:   Elena Litvinenko
 *  e-mail:   litvin@nf.jinr.ru
 *  Version:  10-02-2016   
 *
 ************************************************************************************/

#ifndef BMNGEOBDPAR_H
#define BMNGEOBDPAR_H

#include "FairParGenericSet.h"
#include "TObjArray.h"

class BmnBdGeoPar : public FairParGenericSet {
public:
  TObjArray      *fGeoSensNodes; /** List of FairGeoNodes for sensitive  volumes */
  TObjArray      *fGeoPassNodes; /** List of FairGeoNodes for passive  volumes */
  
  BmnBdGeoPar(const char* name="BmnBdGeoPar",
	     const char* title="Bd Geometry Parameters",
             const char* context="BdDefaultContext");
  ~BmnBdGeoPar(void);
  void clear(void);
  void putParams(FairParamList*);
  Bool_t getParams(FairParamList*);
  TObjArray             *GetGeoSensitiveNodes(){return fGeoSensNodes;}
  TObjArray             *GetGeoPassiveNodes(){return fGeoPassNodes;}

 
  
  ClassDef(BmnBdGeoPar,1)
};

#endif /* !BMNGEOBDPAR_H */

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"BmnBd", payloadCode, "@",
"BmnBdContFact", payloadCode, "@",
"BmnBdGeo", payloadCode, "@",
"BmnBdGeoPar", payloadCode, "@",
"BmnBdPoint", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__BdDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__BdDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__BdDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__BdDict() {
  TriggerDictionaryInitialization_G__BdDict_Impl();
}
