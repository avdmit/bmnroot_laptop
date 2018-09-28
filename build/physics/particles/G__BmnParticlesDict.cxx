// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIalexdIbmnroot_devdIbmnrootdIbuilddIphysicsdIparticlesdIG__BmnParticlesDict

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
#include "BmnTwoParticleDecay.h"
#include "BmnParticlePair.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_BmnParticlePair(void *p = 0);
   static void *newArray_BmnParticlePair(Long_t size, void *p);
   static void delete_BmnParticlePair(void *p);
   static void deleteArray_BmnParticlePair(void *p);
   static void destruct_BmnParticlePair(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnParticlePair*)
   {
      ::BmnParticlePair *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnParticlePair >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnParticlePair", ::BmnParticlePair::Class_Version(), "BmnParticlePair.h", 17,
                  typeid(::BmnParticlePair), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnParticlePair::Dictionary, isa_proxy, 4,
                  sizeof(::BmnParticlePair) );
      instance.SetNew(&new_BmnParticlePair);
      instance.SetNewArray(&newArray_BmnParticlePair);
      instance.SetDelete(&delete_BmnParticlePair);
      instance.SetDeleteArray(&deleteArray_BmnParticlePair);
      instance.SetDestructor(&destruct_BmnParticlePair);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnParticlePair*)
   {
      return GenerateInitInstanceLocal((::BmnParticlePair*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnParticlePair*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTwoParticleDecay(void *p = 0);
   static void *newArray_BmnTwoParticleDecay(Long_t size, void *p);
   static void delete_BmnTwoParticleDecay(void *p);
   static void deleteArray_BmnTwoParticleDecay(void *p);
   static void destruct_BmnTwoParticleDecay(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTwoParticleDecay*)
   {
      ::BmnTwoParticleDecay *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTwoParticleDecay >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTwoParticleDecay", ::BmnTwoParticleDecay::Class_Version(), "", 55,
                  typeid(::BmnTwoParticleDecay), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTwoParticleDecay::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTwoParticleDecay) );
      instance.SetNew(&new_BmnTwoParticleDecay);
      instance.SetNewArray(&newArray_BmnTwoParticleDecay);
      instance.SetDelete(&delete_BmnTwoParticleDecay);
      instance.SetDeleteArray(&deleteArray_BmnTwoParticleDecay);
      instance.SetDestructor(&destruct_BmnTwoParticleDecay);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTwoParticleDecay*)
   {
      return GenerateInitInstanceLocal((::BmnTwoParticleDecay*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTwoParticleDecay*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnParticlePair::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnParticlePair::Class_Name()
{
   return "BmnParticlePair";
}

//______________________________________________________________________________
const char *BmnParticlePair::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnParticlePair*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnParticlePair::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnParticlePair*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnParticlePair::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnParticlePair*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnParticlePair::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnParticlePair*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTwoParticleDecay::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTwoParticleDecay::Class_Name()
{
   return "BmnTwoParticleDecay";
}

//______________________________________________________________________________
const char *BmnTwoParticleDecay::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTwoParticleDecay*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTwoParticleDecay::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTwoParticleDecay*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTwoParticleDecay::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTwoParticleDecay*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTwoParticleDecay::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTwoParticleDecay*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnParticlePair::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnParticlePair.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnParticlePair::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnParticlePair::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnParticlePair(void *p) {
      return  p ? new(p) ::BmnParticlePair : new ::BmnParticlePair;
   }
   static void *newArray_BmnParticlePair(Long_t nElements, void *p) {
      return p ? new(p) ::BmnParticlePair[nElements] : new ::BmnParticlePair[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnParticlePair(void *p) {
      delete ((::BmnParticlePair*)p);
   }
   static void deleteArray_BmnParticlePair(void *p) {
      delete [] ((::BmnParticlePair*)p);
   }
   static void destruct_BmnParticlePair(void *p) {
      typedef ::BmnParticlePair current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnParticlePair

//______________________________________________________________________________
void BmnTwoParticleDecay::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTwoParticleDecay.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTwoParticleDecay::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTwoParticleDecay::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTwoParticleDecay(void *p) {
      return  p ? new(p) ::BmnTwoParticleDecay : new ::BmnTwoParticleDecay;
   }
   static void *newArray_BmnTwoParticleDecay(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTwoParticleDecay[nElements] : new ::BmnTwoParticleDecay[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTwoParticleDecay(void *p) {
      delete ((::BmnTwoParticleDecay*)p);
   }
   static void deleteArray_BmnTwoParticleDecay(void *p) {
      delete [] ((::BmnTwoParticleDecay*)p);
   }
   static void destruct_BmnTwoParticleDecay(void *p) {
      typedef ::BmnTwoParticleDecay current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTwoParticleDecay

namespace {
  void TriggerDictionaryInitialization_G__BmnParticlesDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/opt/fairroot/install/include",
"/home/alex/bmnroot_dev/bmnroot/bmndata",
"/home/alex/bmnroot_dev/bmnroot/bmndata/cbm",
"/home/alex/bmnroot_dev/bmnroot/bmndata/math",
"/home/alex/bmnroot_dev/bmnroot/bmnfield",
"/home/alex/bmnroot_dev/bmnroot/gem",
"/home/alex/bmnroot_dev/bmnroot/globaltracking",
"/home/alex/bmnroot_dev/bmnroot/uni_db",
"/home/alex/bmnroot_dev/bmnroot/uni_db/db_classes",
"/home/alex/bmnroot_dev/bmnroot/physics/particles",
"/opt/fairsoft/install/include",
"/opt/fairsoft/install/include/root",
"/opt/fairsoft/install/include/root",
"/home/alex/bmnroot_dev/bmnroot/build/physics/particles/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__BmnParticlesDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$BmnParticlePair.h")))  BmnParticlePair;
class BmnTwoParticleDecay;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__BmnParticlesDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// @(#)bmnroot/physics/particles:$Id$
// Author: Pavel Batyuk <pavel.batyuk@jinr.ru> 2017-12-27

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
// BmnTwoParticleDecay                                                        //
//                                                                            //
//  A supplementary class for two-body decay reconstruction                   //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

#ifndef BMNTWOPARTICLEDECAY_H
#define BMNTWOPARTICLEDECAY_H 1

#include <iostream>
#include <vector>
#include "FairTask.h"
#include <TDatabasePDG.h>
#include <TGraph.h>
#include <TH1I.h>
#include <TH1F.h>
#include <TH2F.h>
#include <TMath.h>
#include <TString.h>
#include <TClonesArray.h>
#include <TLorentzVector.h>
#include <TVector2.h>
#include <TVector3.h>
#include <TF1.h>
#include <TFitResult.h>
#include "BmnGlobalTrack.h"
#include "BmnFieldMap.h"
#include "BmnNewFieldMap.h"
#include "CbmMCTrack.h"
#include "CbmStsPoint.h"
#include "CbmVertex.h"
#include "BmnGemStripStationSet.h"
#include "BmnGemStripStationSet_RunWinter2016.h"
#include "BmnGemStripStationSet_RunSpring2017.h"
#include "BmnGemStripHit.h"
#include "BmnKalmanFilter.h"
#include "BmnParticlePair.h"
#include <UniDbDetectorParameter.h>
#include <UniDbRun.h>
#include "BmnTrackMatch.h"

using namespace std;
using namespace TMath;

class BmnTwoParticleDecay : public FairTask {
private:
    Int_t fRunPeriod; // run period (5, 6 ...) 6 is set by default
    Int_t fRunId; // runID
    UInt_t fEventCounter; //! event counter
    TDatabasePDG* fPDG; //!  PDG database

    TClonesArray* fGemPoints;
    TClonesArray* fGlobalTracks;
    TClonesArray* fMCTracks;
    TClonesArray* fGlobalMatches;
    TClonesArray* fVertex;

    TVector3 fMcVertex;
    CbmVertex* fEventVertex;

    TString fBranchGemPoints;
    TString fBranchGlobalTracks;
    TString fBranchMCTracks;
    TString fBranchGlobalMatch;
    TString fBranchVertex;

    BmnGemStripStationSet* fDetector; // Detector geometry
    BmnGemStripConfiguration::GEM_CONFIG fGeometry;

    Bool_t fSiRequired; // select glob. tracks with at least one silicon hit
    Bool_t fUseMc; // Use evetest.root as an input file 
    Bool_t fIsUseRealVertex;
    TString fOutFileName; // output filename

    // Kinematic cuts
    Double_t fMom[2][2]; // [2] --> (proton, pion), [2] --> (min, max)
    Double_t fTx[2][2];
    Double_t fTy[2][2];
    Double_t fEta[2][2]; // Cuts on pseudorapidity 

    // Geometry cuts
    Double_t fVertexCuts[3][2]; // [3] --> (x, y, z), [2] --> (min, max)

    Double_t fPath[2];
    Double_t fDCA[2][2]; // [2] --> (proton, pion), [2] --> (min, max)
    Double_t fDCA12[2];

    FairField* fField;
    BmnFieldMap* fMagField;
    BmnKalmanFilter* fKalman;

    TClonesArray* fParticlePair;

    Int_t fPDG1, fPDG2, fPDGDecay, fPdgParticle1, fPdgParticle2;
    Double_t fLeftInvMass, fRightInvMass;
  
    Int_t fN, fN2, fN3, fN4;
    
    TH1F** hSim;
    TH1F** hReco;
    
    TH2F** h2Sim;
    TH2F** h2Reco; 

    TH2F*** h3Sim;
 
public:

    BmnTwoParticleDecay() {
    };
    BmnTwoParticleDecay(BmnGemStripConfiguration::GEM_CONFIG, Int_t r = 1209);
    virtual ~BmnTwoParticleDecay();

    virtual void Exec(Option_t * option);
    virtual InitStatus Init();
    virtual void Finish();

    void SetUseRealVertex(Bool_t flag) {
        fIsUseRealVertex = flag;
    }

    // Geometry cuts

    void SetVpCuts(Double_t xMin, Double_t xMax, Double_t yMin, Double_t yMax, Double_t zMin, Double_t zMax) {
        fVertexCuts[0][0] = xMin;
        fVertexCuts[0][1] = xMax;
        fVertexCuts[1][0] = yMin;
        fVertexCuts[1][1] = yMax;
        fVertexCuts[2][0] = zMin;
        fVertexCuts[2][1] = zMax;
    }

    // Kinematical cuts
    void SetTxParticle1Range(Double_t min, Double_t max) {
        fTx[0][0] = min;
        fTx[0][1] = max;
    }

    void SetTyParticle1Range(Double_t min, Double_t max) {
        fTy[0][0] = min;
        fTy[0][1] = max;
    }

    void SetTxParticle2Range(Double_t min, Double_t max) {
        fTx[1][0] = min;
        fTx[1][1] = max;
    }

    void SetTyParticle2Range(Double_t min, Double_t max) {
        fTy[1][0] = min;
        fTy[1][1] = max;
    }

    void SetParticlePDG(Int_t pdg1, Int_t pdg2) {
        fPDG1 = pdg1;
        fPDG2 = pdg2;
    }

    void SetSiRequired(Bool_t flag) {
        fSiRequired = flag;
    }

    void SetCuts(Double_t kin[][2], Double_t geom[][2]) {
        for (Int_t i = 0; i < 4; i++)
            for (Int_t j = 0; j < 2; j++) {
                if (i < 2) {
                    fMom[i][j] = kin[i][j];
                    fDCA[i][j] = geom[i][j];
                } else {
                    fEta[i - 2][j] = kin[i][j];
                    if (i == 2)
                        fDCA12[j] = geom[i][j];
                    else
                        fPath[j] = geom[i][j];
                }
            }
    }

private:
    void Analysis();
    void FindFirstPointOnMCTrack(Int_t, BmnGlobalTrack*, Int_t);
    TVector3 FitParabola(vector <TVector3>); // XZ-plane
    void CalculateMinDistance(TVector3, TVector3, Double_t*);
    TVector2 SecondaryVertexY(FairTrackParam*, FairTrackParam*); // YZ-plane
    vector <TVector3> KalmanTrackPropagation(BmnGlobalTrack*, Int_t);
    FairTrackParam KalmanTrackPropagation(BmnGlobalTrack* track, Int_t, Double_t);
    vector <Double_t> GeomTopology(FairTrackParam, FairTrackParam, FairTrackParam, FairTrackParam);
    Bool_t CheckTrack(BmnGlobalTrack*, Int_t, Double_t&, Double_t&);

    void CalculateReconstuctableParticles(); // to be used in case of MC-data

    inline Int_t recoToMcIdx(Int_t iTrack) {
        BmnTrackMatch* globTrackMatch = (BmnTrackMatch*) (fGlobalMatches->UncheckedAt(iTrack));
        return globTrackMatch->GetMatchedLink().GetIndex();
    }

    inline Int_t CheckSign(Double_t val) {
        return (val > 0) ? 1 : ((val < 0) ? -1 : 0);
    }
    
    TVector2 ArmenterosPodol(FairTrackParam, FairTrackParam); 

    ClassDef(BmnTwoParticleDecay, 0)
};

#endif
// @(#)bmnroot/physics/particles:$Id$
// Author: Pavel Batyuk <pavel.batyuk@jinr.ru> 2017-06-20

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
// BmnParticlePair                                                            //
//                                                                            //
//  A class to consider selected pair of particles                            //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

#ifndef BMNPARTICLEPAIR_H
#define BMNPARTICLEPAIR_H 1

#include <TNamed.h>

class BmnParticlePair : public TNamed {
public:

    /** Default constructor **/
    BmnParticlePair();

    /** Destructor **/
    virtual ~BmnParticlePair();

    void SetV0XZ(Double_t val) {
        fV0XZ = val;
    }

    void SetV0YZ(Double_t val) {
        fV0YZ = val;
    }

    void SetDCA1(Double_t val) {
        fDCA1 = val;
    }

    void SetDCA2(Double_t val) {
        fDCA2 = val;
    }

    void SetDCA12(Double_t val1, Double_t val2) {
        fDCA12X = val1;
        fDCA12Y = val2;
    }

    void SetPath(Double_t val1, Double_t val2) {
        fPathX = val1;
        fPathY = val2;
    }

    void SetInvMass(Double_t val1, Double_t val2) {
        fInvMassX = val1;
        fInvMassY = val2;
    }

    void SetMomPair(Double_t val1, Double_t val2) {
        fMomPart1 = val1;
        fMomPart2 = val2;
    }

    void SetEtaPair(Double_t val1, Double_t val2) {
        fEtaPart1 = val1;
        fEtaPart2 = val2;
    }
    
    void SetPartOrigB(Double_t bx, Double_t by) {
        fPartOrigBX = bx;
        fPartOrigBY = by;
    }

    Double_t GetInvMass(TString flag) {
        return flag.Contains("X") ? fInvMassX : flag.Contains("Y") ? fInvMassY : throw;
    }

    Double_t GetDCA12(TString flag) {
        return flag.Contains("X") ? fDCA12X : flag.Contains("Y") ? fDCA12Y : throw;
    }

    Double_t GetPath(TString flag) {
        return flag.Contains("X") ? fPathX : flag.Contains("Y") ? fPathY : throw;
    }

    Double_t GetDCA1() {
        return fDCA1;
    }

    Double_t GetDCA2() {
        return fDCA2;
    }

    Double_t GetMomPart1() {
        return fMomPart1;
    }

    Double_t GetMomPart2() {
        return fMomPart2;
    }

    Double_t GetEtaPart1() {
        return fEtaPart1;
    }

    Double_t GetEtaPart2() {
        return fEtaPart2;
    }

    Double_t GetV0XZ() {
        return fV0XZ;
    }

    Double_t GetV0YZ() {
        return fV0YZ;
    }
    
    Double_t GetPartOrigBX() {
        return fPartOrigBX;
    }

    Double_t GetPartOrigBY() {
        return fPartOrigBY;
    }

    void SetAlpha(Double_t val1, Double_t val2) {
        fAlphaX = val1;
        fAlphaY = val2;
    }

    void SetPtPodol(Double_t val1, Double_t val2) {
        fPtPodolX = val1;
        fPtPodolY = val2;
    }

    Double_t GetAlpha(TString flag) {
        return flag.Contains("X") ? fAlphaX : flag.Contains("Y") ? fAlphaY : throw;
    }
    
    Double_t GetPtPodol(TString flag) {
        return flag.Contains("X") ? fPtPodolX : flag.Contains("Y") ? fPtPodolY : throw;
    }

private:
    Double_t fInvMassX; // Invariant mass of a considering pair
    Double_t fInvMassY;

    Double_t fV0XZ; // Zv of V0 obtained in XZ-plane
    Double_t fV0YZ; // Zv of V0 obtained in YZ-plane

    Double_t fDCA1; // spatial distance between Vp and extrap. track of Part1 to Vp  
    Double_t fDCA2; // spatial distance between Vp and extrap. track of Part2 to Vp

    Double_t fDCA12X; // spatial distance between the two particles at V0
    Double_t fDCA12Y;

    Double_t fPathX; // distance between Vp and V0 along beam axis
    Double_t fPathY;

    Double_t fMomPart1;
    Double_t fMomPart2;

    Double_t fEtaPart1;
    Double_t fEtaPart2;
    
    //impact param of orig. particle (Lambda, K0s, ...)
    Double_t fPartOrigBX;
    Double_t fPartOrigBY; 

    // Armenteros-Podolyansky ... 
    Double_t fAlphaX;
    Double_t fAlphaY;
    Double_t fPtPodolX;
    Double_t fPtPodolY;

    ClassDef(BmnParticlePair, 1);

};

#endif
#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"BmnParticlePair", payloadCode, "@",
"BmnTwoParticleDecay", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__BmnParticlesDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__BmnParticlesDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__BmnParticlesDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__BmnParticlesDict() {
  TriggerDictionaryInitialization_G__BmnParticlesDict_Impl();
}
