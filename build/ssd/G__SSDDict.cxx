// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIalexdIbmnroot_devdIbmnrootdIbuilddIssddIG__SSDDict

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
#include "BmnSSD.h"
#include "BmnSSDPoint.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_BmnSSD(void *p = 0);
   static void *newArray_BmnSSD(Long_t size, void *p);
   static void delete_BmnSSD(void *p);
   static void deleteArray_BmnSSD(void *p);
   static void destruct_BmnSSD(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSSD*)
   {
      ::BmnSSD *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSSD >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSSD", ::BmnSSD::Class_Version(), "", 20,
                  typeid(::BmnSSD), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSSD::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSSD) );
      instance.SetNew(&new_BmnSSD);
      instance.SetNewArray(&newArray_BmnSSD);
      instance.SetDelete(&delete_BmnSSD);
      instance.SetDeleteArray(&deleteArray_BmnSSD);
      instance.SetDestructor(&destruct_BmnSSD);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSSD*)
   {
      return GenerateInitInstanceLocal((::BmnSSD*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSSD*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnSSDPoint(void *p = 0);
   static void *newArray_BmnSSDPoint(Long_t size, void *p);
   static void delete_BmnSSDPoint(void *p);
   static void deleteArray_BmnSSDPoint(void *p);
   static void destruct_BmnSSDPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSSDPoint*)
   {
      ::BmnSSDPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSSDPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSSDPoint", ::BmnSSDPoint::Class_Version(), "", 128,
                  typeid(::BmnSSDPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSSDPoint::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSSDPoint) );
      instance.SetNew(&new_BmnSSDPoint);
      instance.SetNewArray(&newArray_BmnSSDPoint);
      instance.SetDelete(&delete_BmnSSDPoint);
      instance.SetDeleteArray(&deleteArray_BmnSSDPoint);
      instance.SetDestructor(&destruct_BmnSSDPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSSDPoint*)
   {
      return GenerateInitInstanceLocal((::BmnSSDPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSSDPoint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnSSD::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSSD::Class_Name()
{
   return "BmnSSD";
}

//______________________________________________________________________________
const char *BmnSSD::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSSD*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSSD::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSSD*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSSD::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSSD*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSSD::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSSD*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnSSDPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSSDPoint::Class_Name()
{
   return "BmnSSDPoint";
}

//______________________________________________________________________________
const char *BmnSSDPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSSDPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSSDPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSSDPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSSDPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSSDPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSSDPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSSDPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnSSD::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSSD.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSSD::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSSD::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSSD(void *p) {
      return  p ? new(p) ::BmnSSD : new ::BmnSSD;
   }
   static void *newArray_BmnSSD(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSSD[nElements] : new ::BmnSSD[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSSD(void *p) {
      delete ((::BmnSSD*)p);
   }
   static void deleteArray_BmnSSD(void *p) {
      delete [] ((::BmnSSD*)p);
   }
   static void destruct_BmnSSD(void *p) {
      typedef ::BmnSSD current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSSD

//______________________________________________________________________________
void BmnSSDPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSSDPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSSDPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSSDPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSSDPoint(void *p) {
      return  p ? new(p) ::BmnSSDPoint : new ::BmnSSDPoint;
   }
   static void *newArray_BmnSSDPoint(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSSDPoint[nElements] : new ::BmnSSDPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSSDPoint(void *p) {
      delete ((::BmnSSDPoint*)p);
   }
   static void deleteArray_BmnSSDPoint(void *p) {
      delete [] ((::BmnSSDPoint*)p);
   }
   static void destruct_BmnSSDPoint(void *p) {
      typedef ::BmnSSDPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSSDPoint

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
  void TriggerDictionaryInitialization_G__SSDDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/opt/fairroot/install/include",
"/home/alex/bmnroot_dev/bmnroot/bmndata",
"/home/alex/bmnroot_dev/bmnroot/alignment",
"/home/alex/bmnroot_dev/bmnroot/uni_db",
"/home/alex/bmnroot_dev/bmnroot/uni_db/db_classes",
"/home/alex/bmnroot_dev/bmnroot/ssd",
"/opt/fairsoft/install/include",
"/opt/fairsoft/install/include/root",
"/opt/fairsoft/install/include/root",
"/home/alex/bmnroot_dev/bmnroot/build/ssd/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__SSDDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class BmnSSD;
class BmnSSDPoint;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__SSDDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#ifndef BMNSSD_H
#define BMNSSD_H

#include "FairDetector.h"
#include "TVector3.h"
#include "TLorentzVector.h"
#include "TClonesArray.h"

#include <map>

class BmnSSDPoint;
class FairVolume;

//------------------------------------------------------------------------------------------------------------------------
class BmnSSD : public FairDetector {

public:

    // *@param name    detector name
    // *@param active  sensitivity flag
    BmnSSD(const char* name, Bool_t active);

    BmnSSD();
    virtual ~BmnSSD();

    // Defines the action to be taken when a step is inside the
    // active volume. Creates BmnSSDPoints and adds them to the collection.
    // @param vol Pointer to the active volume
    virtual Bool_t ProcessHits(FairVolume* vol = 0);

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

    // Constructs the SSD geometry
    virtual void ConstructGeometry();

    // Construct the geometry from a GDML geometry file
    virtual void ConstructGDMLGeometry();

    void ExpandNodeForGdml(TGeoNode* node);

    // Check whether a volume is sensitive.
    // The decision is based on the volume name. Only used in case
    // of GDML and ROOT geometry.
    // @param name    Volume name
    // @value         kTRUE if volume is sensitive, else kFALSE
    virtual Bool_t CheckIfSensitive(std::string name);

private:

    // Track information to be stored until the track leaves the active volume.
    Int_t          fTrackID;           //!  track index
    Int_t          fVolumeID;          //!  volume id
    TVector3       fPosIn;             //!  position (in)
    TVector3       fPosOut;            //!  position (out)
    TVector3       fMomIn;             //!  momentum (in)
    TVector3       fMomOut;            //!  momentum (out)
    Double32_t     fTime;              //!  time
    Double32_t     fLength;            //!  length
    Double32_t     fELoss;             //!  energy loss
    Int_t	   fIsPrimary;         //!  is track primary?
    Double_t       fCharge;	       //!  track charge
    Int_t          fPdgId;             //!  pdg id of particle

    Int_t fPosIndex;                   //!
    TClonesArray* fPointCollection;    //! Hit collection

    std::map<TString, TGeoMedium*> fFixedMedia; // List of media "repaired" after importing GMDL


    // Adds a BmnSSDPoint to the HitCollection
    BmnSSDPoint* AddHit(Int_t trackID, Int_t detID,
                            TVector3 posIn, TVector3 posOut,
                            TVector3 momIn, TVector3 momOut,
                            Double_t time, Double_t length, Double_t eLoss,
                            Int_t isPrimary, Double_t charge, Int_t pdgId);

    // Resets the private members for the track parameters
    void ResetParameters();

    ClassDef(BmnSSD,1)
};

//------------------------------------------------------------------------------
inline void BmnSSD::ResetParameters() {
    fTrackID = -1;
    fVolumeID = 0;
    fPosIn.SetXYZ(0.0, 0.0, 0.0);
    fPosOut.SetXYZ(0.0, 0.0, 0.0);
    fMomIn.SetXYZ(0.0, 0.0, 0.0);
    fMomOut.SetXYZ(0.0, 0.0, 0.0);
    fTime = fLength = fELoss = 0.0;
    fPosIndex = 0;
};
//------------------------------------------------------------------------------

#endif /* BMNSSD_H */

#ifndef BMNSSDPOINT_H
#define BMNSSDPOINT_H

#include "FairMCPoint.h"

class BmnSSDPoint : public FairMCPoint {

public:

    /** Constructor with arguments
    *@param trackID  Index of MCTrack
    *@param detID    Detector ID
    *@param posIn    Coordinates at entrance to active volume [cm]
    *@param posOut   Coordinates at exit of active volume [cm]
    *@param momIn    Momentum of track at entrance [GeV]
    *@param momOut   Momentum of track at exit [GeV]
    *@param tof      Time since event start [ns]
    *@param length   Track length since creation [cm]
    *@param eLoss    Energy deposit [GeV]
    **/
    BmnSSDPoint(Int_t trackID, Int_t detID,
                TVector3 posIn, TVector3 posOut,
                TVector3 momIn, TVector3 momOut,
                Double_t tof, Double_t length, Double_t eLoss,
                Int_t isPrimary, Double_t charge, Int_t pdgId);

    BmnSSDPoint(const BmnSSDPoint& point) { *this = point; };

    BmnSSDPoint();

    virtual ~BmnSSDPoint();

    /** Accessors **/
    Double_t GetXIn()   const { return fX; }
    Double_t GetYIn()   const { return fY; }
    Double_t GetZIn()   const { return fZ; }
    Double_t GetXOut()  const { return fX_out; }
    Double_t GetYOut()  const { return fY_out; }
    Double_t GetZOut()  const { return fZ_out; }
    Double_t GetPxOut() const { return fPx_out; }
    Double_t GetPyOut() const { return fPy_out; }
    Double_t GetPzOut() const { return fPz_out; }
    void PositionIn(TVector3& pos)  { pos.SetXYZ(fX, fY, fZ); }
    void PositionOut(TVector3& pos) { pos.SetXYZ(fX_out,fY_out,fZ_out); }
    void MomentumIn(TVector3& mom) { mom.SetXYZ(fPx,fPy,fPz); }
    void MomentumOut(TVector3& mom) { mom.SetXYZ(fPx_out,fPy_out,fPz_out); }

    Int_t GetIsPrimary() { return fIsPrimary; }
    Double_t GetCharge() { return fCharge; }
    Double_t GetPdgId() { return fPdgId; }

    // Output to screen
    virtual void Print(const Option_t* opt) const;

protected:

    Int_t fIsPrimary;
    Double_t fCharge;
    Int_t fPdgId;

    Double_t fX_out,  fY_out,  fZ_out;
    Double_t fPx_out, fPy_out, fPz_out;


    ClassDef(BmnSSDPoint,1)
};

#endif /* BMNSSDPOINT_H */


#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"BmnSSD", payloadCode, "@",
"BmnSSDPoint", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__SSDDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__SSDDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__SSDDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__SSDDict() {
  TriggerDictionaryInitialization_G__SSDDict_Impl();
}
