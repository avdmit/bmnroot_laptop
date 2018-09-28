// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIalexdIbmnroot_devdIbmnrootdIbuilddIrecoildIG__RecoilDict

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
#include "BmnRecoil.h"
#include "BmnRecoilPoint.h"
#include "BmnRecoilContFact.h"
#include "BmnRecoilGeo.h"
#include "BmnRecoilGeoPar.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_BmnRecoilGeoPar(void *p = 0);
   static void *newArray_BmnRecoilGeoPar(Long_t size, void *p);
   static void delete_BmnRecoilGeoPar(void *p);
   static void deleteArray_BmnRecoilGeoPar(void *p);
   static void destruct_BmnRecoilGeoPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnRecoilGeoPar*)
   {
      ::BmnRecoilGeoPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnRecoilGeoPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnRecoilGeoPar", ::BmnRecoilGeoPar::Class_Version(), "BmnRecoilGeoPar.h", 17,
                  typeid(::BmnRecoilGeoPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnRecoilGeoPar::Dictionary, isa_proxy, 4,
                  sizeof(::BmnRecoilGeoPar) );
      instance.SetNew(&new_BmnRecoilGeoPar);
      instance.SetNewArray(&newArray_BmnRecoilGeoPar);
      instance.SetDelete(&delete_BmnRecoilGeoPar);
      instance.SetDeleteArray(&deleteArray_BmnRecoilGeoPar);
      instance.SetDestructor(&destruct_BmnRecoilGeoPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnRecoilGeoPar*)
   {
      return GenerateInitInstanceLocal((::BmnRecoilGeoPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnRecoilGeoPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnRecoil(void *p = 0);
   static void *newArray_BmnRecoil(Long_t size, void *p);
   static void delete_BmnRecoil(void *p);
   static void deleteArray_BmnRecoil(void *p);
   static void destruct_BmnRecoil(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnRecoil*)
   {
      ::BmnRecoil *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnRecoil >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnRecoil", ::BmnRecoil::Class_Version(), "", 33,
                  typeid(::BmnRecoil), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnRecoil::Dictionary, isa_proxy, 4,
                  sizeof(::BmnRecoil) );
      instance.SetNew(&new_BmnRecoil);
      instance.SetNewArray(&newArray_BmnRecoil);
      instance.SetDelete(&delete_BmnRecoil);
      instance.SetDeleteArray(&deleteArray_BmnRecoil);
      instance.SetDestructor(&destruct_BmnRecoil);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnRecoil*)
   {
      return GenerateInitInstanceLocal((::BmnRecoil*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnRecoil*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnRecoilPoint(void *p = 0);
   static void *newArray_BmnRecoilPoint(Long_t size, void *p);
   static void delete_BmnRecoilPoint(void *p);
   static void deleteArray_BmnRecoilPoint(void *p);
   static void destruct_BmnRecoilPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnRecoilPoint*)
   {
      ::BmnRecoilPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnRecoilPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnRecoilPoint", ::BmnRecoilPoint::Class_Version(), "", 174,
                  typeid(::BmnRecoilPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnRecoilPoint::Dictionary, isa_proxy, 4,
                  sizeof(::BmnRecoilPoint) );
      instance.SetNew(&new_BmnRecoilPoint);
      instance.SetNewArray(&newArray_BmnRecoilPoint);
      instance.SetDelete(&delete_BmnRecoilPoint);
      instance.SetDeleteArray(&deleteArray_BmnRecoilPoint);
      instance.SetDestructor(&destruct_BmnRecoilPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnRecoilPoint*)
   {
      return GenerateInitInstanceLocal((::BmnRecoilPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnRecoilPoint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnRecoilContFact(void *p = 0);
   static void *newArray_BmnRecoilContFact(Long_t size, void *p);
   static void delete_BmnRecoilContFact(void *p);
   static void deleteArray_BmnRecoilContFact(void *p);
   static void destruct_BmnRecoilContFact(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnRecoilContFact*)
   {
      ::BmnRecoilContFact *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnRecoilContFact >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnRecoilContFact", ::BmnRecoilContFact::Class_Version(), "", 244,
                  typeid(::BmnRecoilContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnRecoilContFact::Dictionary, isa_proxy, 4,
                  sizeof(::BmnRecoilContFact) );
      instance.SetNew(&new_BmnRecoilContFact);
      instance.SetNewArray(&newArray_BmnRecoilContFact);
      instance.SetDelete(&delete_BmnRecoilContFact);
      instance.SetDeleteArray(&deleteArray_BmnRecoilContFact);
      instance.SetDestructor(&destruct_BmnRecoilContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnRecoilContFact*)
   {
      return GenerateInitInstanceLocal((::BmnRecoilContFact*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnRecoilContFact*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnRecoilGeo(void *p = 0);
   static void *newArray_BmnRecoilGeo(Long_t size, void *p);
   static void delete_BmnRecoilGeo(void *p);
   static void deleteArray_BmnRecoilGeo(void *p);
   static void destruct_BmnRecoilGeo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnRecoilGeo*)
   {
      ::BmnRecoilGeo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnRecoilGeo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnRecoilGeo", ::BmnRecoilGeo::Class_Version(), "", 272,
                  typeid(::BmnRecoilGeo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnRecoilGeo::Dictionary, isa_proxy, 4,
                  sizeof(::BmnRecoilGeo) );
      instance.SetNew(&new_BmnRecoilGeo);
      instance.SetNewArray(&newArray_BmnRecoilGeo);
      instance.SetDelete(&delete_BmnRecoilGeo);
      instance.SetDeleteArray(&deleteArray_BmnRecoilGeo);
      instance.SetDestructor(&destruct_BmnRecoilGeo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnRecoilGeo*)
   {
      return GenerateInitInstanceLocal((::BmnRecoilGeo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnRecoilGeo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnRecoilGeoPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnRecoilGeoPar::Class_Name()
{
   return "BmnRecoilGeoPar";
}

//______________________________________________________________________________
const char *BmnRecoilGeoPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnRecoilGeoPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnRecoilGeoPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnRecoilGeoPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnRecoilGeoPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnRecoilGeoPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnRecoilGeoPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnRecoilGeoPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnRecoil::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnRecoil::Class_Name()
{
   return "BmnRecoil";
}

//______________________________________________________________________________
const char *BmnRecoil::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnRecoil*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnRecoil::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnRecoil*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnRecoil::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnRecoil*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnRecoil::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnRecoil*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnRecoilPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnRecoilPoint::Class_Name()
{
   return "BmnRecoilPoint";
}

//______________________________________________________________________________
const char *BmnRecoilPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnRecoilPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnRecoilPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnRecoilPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnRecoilPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnRecoilPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnRecoilPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnRecoilPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnRecoilContFact::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnRecoilContFact::Class_Name()
{
   return "BmnRecoilContFact";
}

//______________________________________________________________________________
const char *BmnRecoilContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnRecoilContFact*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnRecoilContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnRecoilContFact*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnRecoilContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnRecoilContFact*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnRecoilContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnRecoilContFact*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnRecoilGeo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnRecoilGeo::Class_Name()
{
   return "BmnRecoilGeo";
}

//______________________________________________________________________________
const char *BmnRecoilGeo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnRecoilGeo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnRecoilGeo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnRecoilGeo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnRecoilGeo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnRecoilGeo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnRecoilGeo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnRecoilGeo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnRecoilGeoPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnRecoilGeoPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnRecoilGeoPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnRecoilGeoPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnRecoilGeoPar(void *p) {
      return  p ? new(p) ::BmnRecoilGeoPar : new ::BmnRecoilGeoPar;
   }
   static void *newArray_BmnRecoilGeoPar(Long_t nElements, void *p) {
      return p ? new(p) ::BmnRecoilGeoPar[nElements] : new ::BmnRecoilGeoPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnRecoilGeoPar(void *p) {
      delete ((::BmnRecoilGeoPar*)p);
   }
   static void deleteArray_BmnRecoilGeoPar(void *p) {
      delete [] ((::BmnRecoilGeoPar*)p);
   }
   static void destruct_BmnRecoilGeoPar(void *p) {
      typedef ::BmnRecoilGeoPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnRecoilGeoPar

//______________________________________________________________________________
void BmnRecoil::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnRecoil.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnRecoil::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnRecoil::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnRecoil(void *p) {
      return  p ? new(p) ::BmnRecoil : new ::BmnRecoil;
   }
   static void *newArray_BmnRecoil(Long_t nElements, void *p) {
      return p ? new(p) ::BmnRecoil[nElements] : new ::BmnRecoil[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnRecoil(void *p) {
      delete ((::BmnRecoil*)p);
   }
   static void deleteArray_BmnRecoil(void *p) {
      delete [] ((::BmnRecoil*)p);
   }
   static void destruct_BmnRecoil(void *p) {
      typedef ::BmnRecoil current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnRecoil

//______________________________________________________________________________
void BmnRecoilPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnRecoilPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnRecoilPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnRecoilPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnRecoilPoint(void *p) {
      return  p ? new(p) ::BmnRecoilPoint : new ::BmnRecoilPoint;
   }
   static void *newArray_BmnRecoilPoint(Long_t nElements, void *p) {
      return p ? new(p) ::BmnRecoilPoint[nElements] : new ::BmnRecoilPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnRecoilPoint(void *p) {
      delete ((::BmnRecoilPoint*)p);
   }
   static void deleteArray_BmnRecoilPoint(void *p) {
      delete [] ((::BmnRecoilPoint*)p);
   }
   static void destruct_BmnRecoilPoint(void *p) {
      typedef ::BmnRecoilPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnRecoilPoint

//______________________________________________________________________________
void BmnRecoilContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnRecoilContFact.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnRecoilContFact::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnRecoilContFact::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnRecoilContFact(void *p) {
      return  p ? new(p) ::BmnRecoilContFact : new ::BmnRecoilContFact;
   }
   static void *newArray_BmnRecoilContFact(Long_t nElements, void *p) {
      return p ? new(p) ::BmnRecoilContFact[nElements] : new ::BmnRecoilContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnRecoilContFact(void *p) {
      delete ((::BmnRecoilContFact*)p);
   }
   static void deleteArray_BmnRecoilContFact(void *p) {
      delete [] ((::BmnRecoilContFact*)p);
   }
   static void destruct_BmnRecoilContFact(void *p) {
      typedef ::BmnRecoilContFact current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnRecoilContFact

//______________________________________________________________________________
void BmnRecoilGeo::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnRecoilGeo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnRecoilGeo::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnRecoilGeo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnRecoilGeo(void *p) {
      return  p ? new(p) ::BmnRecoilGeo : new ::BmnRecoilGeo;
   }
   static void *newArray_BmnRecoilGeo(Long_t nElements, void *p) {
      return p ? new(p) ::BmnRecoilGeo[nElements] : new ::BmnRecoilGeo[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnRecoilGeo(void *p) {
      delete ((::BmnRecoilGeo*)p);
   }
   static void deleteArray_BmnRecoilGeo(void *p) {
      delete [] ((::BmnRecoilGeo*)p);
   }
   static void destruct_BmnRecoilGeo(void *p) {
      typedef ::BmnRecoilGeo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnRecoilGeo

namespace {
  void TriggerDictionaryInitialization_G__RecoilDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/opt/fairroot/install/include",
"/home/alex/bmnroot_dev/bmnroot/mcstack",
"/home/alex/bmnroot_dev/bmnroot/bmndata",
"/home/alex/bmnroot_dev/bmnroot/recoil",
"/opt/fairsoft/install/include",
"/opt/fairsoft/install/include/root",
"/opt/fairsoft/install/include/root",
"/home/alex/bmnroot_dev/bmnroot/build/recoil/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__RecoilDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$BmnRecoilGeoPar.h")))  BmnRecoilGeoPar;
class BmnRecoil;
class BmnRecoilPoint;
class __attribute__((annotate(R"ATTRDUMP(Factory for all HYP parameter containers)ATTRDUMP"))) BmnRecoilContFact;
class __attribute__((annotate(R"ATTRDUMP(Class for Hyp)ATTRDUMP"))) BmnRecoilGeo;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__RecoilDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
/*************************************************************************************
 *
 *         Class BmnRecoil
 *         
 *  Adopted for BMN by:   Elena Litvinenko
 *  e-mail:   litvin@nf.jinr.ru
 *  Version:  24-03-2014   
 *
 ************************************************************************************/

#ifndef BMNRECOIL_H
#define BMNRECOIL_H


#include "TClonesArray.h"
#include "TVector3.h"
#include "TLorentzVector.h"
#include "FairDetector.h"
#include "BmnRecoilGeoPar.h"

using namespace std;


class TClonesArray;
class BmnRecoilPoint;
class FairVolume;

class BmnRecoil : public FairDetector
{

 public:

  /** Default constructor **/
  BmnRecoil();


  /** Standard constructor.
   *@param name    detetcor name
   *@param active  sensitivity flag
   **/
  BmnRecoil(const char* name, Bool_t active);


  /** Destructor **/
  virtual ~BmnRecoil();


  /** Virtual method Initialize
   ** Initialises detector. Stores volume IDs for MUO detector and mirror.
   **/
  virtual void Initialize();


  /** Virtual method ProcessHits
   **
   ** Defines the action to be taken when a step is inside the
   ** active volume. Creates BmnRecoilPoints and BmnRecoilMirrorPoints and adds 
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

  BmnRecoilPoint* AddHit(Int_t trackID, Int_t detID,  Int_t copyNo, Int_t copyNoMother,
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
  
  TClonesArray* fRecoilCollection;        //! Hit collection
  
  // reset all parameters   
  void ResetParameters();

  ClassDef(BmnRecoil,2)

}; 


//------------------------------------------------------------------------------------------------------------------------
inline void BmnRecoil::ResetParameters() 
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
// -----                     BmnRecoilPoint header file                  -----
// -----                     litvin@nf.jinr.ru                        -----
// -----                     Last updated 22-Feb-2012                 -----
// ------------------------------------------------------------------------

#ifndef BMNRECOILPOINT_H
#define BMNRECOILPOINT_H

#include "TObject.h"
#include "TVector3.h"
#include "TLorentzVector.h"
#include "FairMCPoint.h"

using namespace std;

class BmnRecoilPoint : public FairMCPoint
{

 public:

  /** Default constructor **/
  BmnRecoilPoint();


  /** Constructor with arguments
   *@param trackID  Index of MCTrack
   *@param detID    Detector ID (at present, volume MC number)
   *@param copyNo         Number of active layer inside RECOIL module
   *@param copyNoMother   RECOIL module number
   *@param pos      Coordinates  [cm]
   *@param mom      Momentum of track [GeV]
   *@param tof      Time since event start [ns]
   *@param length   Track length since creation [cm]
   *@param eLoss    Energy deposit [GeV]
   **/
  
  BmnRecoilPoint(Int_t trackID, Int_t detID, 
	      Int_t copyNo, Int_t copyNoMother, 
	      TVector3 pos, TVector3 mom,
	      Double_t tof, Double_t length, 
	      Double_t eLoss, UInt_t EventId=0 );
  
  /** Copy constructor **/
  BmnRecoilPoint(const BmnRecoilPoint& point) { *this = point; };
  

  /** Destructor **/
  virtual ~BmnRecoilPoint();
  

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
    
  ClassDef(BmnRecoilPoint,4)

};

#endif
// -------------------------------------------------------------------------
// -----                     BmnRecoilContFact header file                -----
// -------------------------------------------------------------------------


#ifndef BMNRECOILCONTFACT_H
#define BMNRECOILCONTFACT_H

#include "FairContFact.h"

class FairContainer;

class BmnRecoilContFact : public FairContFact {
private:
  void setAllContainers();
public:
  BmnRecoilContFact();
  ~BmnRecoilContFact() {}
  FairParSet* createContainer(FairContainer*);

  ClassDef( BmnRecoilContFact,0) // Factory for all HYP parameter containers
};

#endif  /* !BMNRECOILCONTFACT_H */
/*************************************************************************************
 *
 *         Class BmnRecoilGeo
 *         
 *  Adopted for BMN by:   Elena Litvinenko
 *  e-mail:   litvin@nf.jinr.ru
 *  Version:  24-03-2014   
 *
 ************************************************************************************/

#ifndef BMNGEORECOIL_H
#define BMNGEORECOIL_H

#include "FairGeoSet.h"

class  BmnRecoilGeo : public FairGeoSet {
protected:
  char modName[20];  // name of module
  char eleName[20];  // substring for elements in module
  
public:
  BmnRecoilGeo();
  ~BmnRecoilGeo() {}
  const char* getModuleName(Int_t);
  const char* getEleName(Int_t);
  
  ClassDef(BmnRecoilGeo,0) // Class for Hyp
};

#endif  /* !BMNGEORECOIL_H */



/*************************************************************************************
 *
 *         Class BmnRecoilGeoPar
 *         
 *  Adopted for BMN by:   Elena Litvinenko
 *  e-mail:   litvin@nf.jinr.ru
 *  Version:  24-03-2014   
 *
 ************************************************************************************/

#ifndef BMNGEORECOILPAR_H
#define BMNGEORECOILPAR_H

#include "FairParGenericSet.h"
#include "TObjArray.h"

class BmnRecoilGeoPar : public FairParGenericSet {
public:
  TObjArray      *fGeoSensNodes; /** List of FairGeoNodes for sensitive  volumes */
  TObjArray      *fGeoPassNodes; /** List of FairGeoNodes for passive  volumes */
  
  BmnRecoilGeoPar(const char* name="BmnRecoilGeoPar",
	     const char* title="Recoil Geometry Parameters",
             const char* context="RecoilDefaultContext");
  ~BmnRecoilGeoPar(void);
  void clear(void);
  void putParams(FairParamList*);
  Bool_t getParams(FairParamList*);
  TObjArray             *GetGeoSensitiveNodes(){return fGeoSensNodes;}
  TObjArray             *GetGeoPassiveNodes(){return fGeoPassNodes;}

 
  
  ClassDef(BmnRecoilGeoPar,1)
};

#endif /* !BMNGEORECOILPAR_H */

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"BmnRecoil", payloadCode, "@",
"BmnRecoilContFact", payloadCode, "@",
"BmnRecoilGeo", payloadCode, "@",
"BmnRecoilGeoPar", payloadCode, "@",
"BmnRecoilPoint", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__RecoilDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__RecoilDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__RecoilDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__RecoilDict() {
  TriggerDictionaryInitialization_G__RecoilDict_Impl();
}
