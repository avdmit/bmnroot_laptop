// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIalexdIbmnroot_devdIbmnrootdIbuilddIsteeringdIG__BmnSteeringDict

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
#include "BmnSteeringGemTracking.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_BmnSteeringGemTracking(void *p = 0);
   static void *newArray_BmnSteeringGemTracking(Long_t size, void *p);
   static void delete_BmnSteeringGemTracking(void *p);
   static void deleteArray_BmnSteeringGemTracking(void *p);
   static void destruct_BmnSteeringGemTracking(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSteeringGemTracking*)
   {
      ::BmnSteeringGemTracking *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSteeringGemTracking >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSteeringGemTracking", ::BmnSteeringGemTracking::Class_Version(), "", 30,
                  typeid(::BmnSteeringGemTracking), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSteeringGemTracking::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSteeringGemTracking) );
      instance.SetNew(&new_BmnSteeringGemTracking);
      instance.SetNewArray(&newArray_BmnSteeringGemTracking);
      instance.SetDelete(&delete_BmnSteeringGemTracking);
      instance.SetDeleteArray(&deleteArray_BmnSteeringGemTracking);
      instance.SetDestructor(&destruct_BmnSteeringGemTracking);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSteeringGemTracking*)
   {
      return GenerateInitInstanceLocal((::BmnSteeringGemTracking*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSteeringGemTracking*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnSteeringGemTracking::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSteeringGemTracking::Class_Name()
{
   return "BmnSteeringGemTracking";
}

//______________________________________________________________________________
const char *BmnSteeringGemTracking::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSteeringGemTracking*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSteeringGemTracking::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSteeringGemTracking*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSteeringGemTracking::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSteeringGemTracking*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSteeringGemTracking::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSteeringGemTracking*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnSteeringGemTracking::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSteeringGemTracking.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSteeringGemTracking::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSteeringGemTracking::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSteeringGemTracking(void *p) {
      return  p ? new(p) ::BmnSteeringGemTracking : new ::BmnSteeringGemTracking;
   }
   static void *newArray_BmnSteeringGemTracking(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSteeringGemTracking[nElements] : new ::BmnSteeringGemTracking[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSteeringGemTracking(void *p) {
      delete ((::BmnSteeringGemTracking*)p);
   }
   static void deleteArray_BmnSteeringGemTracking(void *p) {
      delete [] ((::BmnSteeringGemTracking*)p);
   }
   static void destruct_BmnSteeringGemTracking(void *p) {
      typedef ::BmnSteeringGemTracking current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSteeringGemTracking

namespace ROOT {
   static TClass *vectorlETStringgR_Dictionary();
   static void vectorlETStringgR_TClassManip(TClass*);
   static void *new_vectorlETStringgR(void *p = 0);
   static void *newArray_vectorlETStringgR(Long_t size, void *p);
   static void delete_vectorlETStringgR(void *p);
   static void deleteArray_vectorlETStringgR(void *p);
   static void destruct_vectorlETStringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TString>*)
   {
      vector<TString> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TString>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TString>", -2, "vector", 216,
                  typeid(vector<TString>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETStringgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TString>) );
      instance.SetNew(&new_vectorlETStringgR);
      instance.SetNewArray(&newArray_vectorlETStringgR);
      instance.SetDelete(&delete_vectorlETStringgR);
      instance.SetDeleteArray(&deleteArray_vectorlETStringgR);
      instance.SetDestructor(&destruct_vectorlETStringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TString> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TString>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETStringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TString>*)0x0)->GetClass();
      vectorlETStringgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETStringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETStringgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TString> : new vector<TString>;
   }
   static void *newArray_vectorlETStringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TString>[nElements] : new vector<TString>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETStringgR(void *p) {
      delete ((vector<TString>*)p);
   }
   static void deleteArray_vectorlETStringgR(void *p) {
      delete [] ((vector<TString>*)p);
   }
   static void destruct_vectorlETStringgR(void *p) {
      typedef vector<TString> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TString>

namespace {
  void TriggerDictionaryInitialization_G__BmnSteeringDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/opt/fairroot/install/include",
"/home/alex/bmnroot_dev/bmnroot/steering",
"/opt/fairsoft/install/include",
"/opt/fairsoft/install/include/root",
"/opt/fairsoft/install/include/root",
"/home/alex/bmnroot_dev/bmnroot/build/steering/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__BmnSteeringDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class BmnSteeringGemTracking;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__BmnSteeringDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// @(#)bmnroot/steering:$Id$
// Author: Pavel Batyuk <pavel.batyuk@jinr.ru> 2018-06-12

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
// BmnSteeringGemTracking                                                     //
//                                                                            //
//  Mechanism of steering files to set an appropriate values of parameters    //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

#ifndef BMNSTEERINGGEMTRACKING_H
#define BMNSTEERINGGEMTRACKING_H 1

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <TNamed.h>
#include <TVector3.h>
#include <TSystem.h>

using namespace std;

class BmnSteeringGemTracking : public TNamed {
public:

    BmnSteeringGemTracking();
    BmnSteeringGemTracking(TString);

    virtual ~BmnSteeringGemTracking();

    void PrintParamTable();

    Int_t GetYStep() {
        return fYStep;
    }

    Double_t GetSigX() {
        return fSigX;
    }

    Int_t GetNBins() {
        return fNBins;
    }

    Double_t GetMin() {
        return fMin;
    }

    Double_t GetMax() {
        return fMax;
    }

    Double_t GetLorentzThresh() {
        return fLorentzThresh;
    }

    Int_t GetCoeffYStep() {
        return fCoeffYStep;
    }

    Double_t GetCoeffLineFitCut() {
        return fCoeffLineFitCut;
    }

    Double_t GetCoeffGemDistCut() {
        return fCoeffGemDistCut;
    }
    
    Int_t** GetStatsForSeeding() {
        return _fStatsForSeeding;
    }
    
    Int_t GetNCombs() {
        return fNCombs;
    }
    
    Int_t GetNStations() {
        return fNStations;
    }
    
    Double_t* GetGemDistCut() {
        return fGemDistCut;
    }
    
    Double_t GetLineFitCut() {
        return fLineFitCut;
    }
    
    Int_t GetNHitsCut() {
        return fNHitsCut;
    }
    
    Int_t GetNSeedsCut() {
        return fNSeedsCut;
    }
    
    Int_t GetNHitsInGemCut() {
        return fNHitsInGemCut;
    }
    
    Int_t GetNSharedHits() {
        return fNSharedHits;
    }
    
    Bool_t IsCovMatrixApproxUsed() {
        return isCovMatrixApproxUsed;
    }
    
    Bool_t IsRoughVertexApproxUsed() {
        return isUseRoughVertex;
    }
    
    Bool_t IsChi2SortUsed() {
        return isChi2SortUsed;
    }
    
    Bool_t IsNHitsSortUsed() {
        return isNHitsSortUsed;
    }
    
    Bool_t IsHitErrorsScaleUsed() {
        return isHitErrorsScaleUsed;
    }
    
    Double_t* GetCovMatrix() {
        return fCovMatrix;
    }
    
    Double_t* GetErrorScales() {
        return fErrScaleFact;
    }
    
    TVector3 GetRoughVertex() {
        return fRoughVertex;
    }

private:   
    void ParseSteerFile(TString);

    TString fSteerFile;

    Int_t fPDG;

    Int_t fNHitsCut; 
    Double_t fLineFitCut; 
    Int_t fNHitsInGemCut; 
    Int_t fNSeedsCut; 
    Int_t fNSharedHits;

    Bool_t isChi2SortUsed;
    Bool_t isNHitsSortUsed;
   
    Int_t fYStep; 
    Double_t fSigX;
    Int_t fNBins; 
    Double_t fMax;
    Double_t fMin;
    Double_t fLorentzThresh;
    Int_t fCoeffYStep;
    Double_t fCoeffLineFitCut;
    Double_t fCoeffGemDistCut;

    Int_t fNStations; 
    Double_t* fGemDistCut;

    Bool_t isHitErrorsScaleUsed;
    Double_t fErrScaleFact[3];

    Int_t fNCombs;
    vector <TString> fStatsForSeeding;
    Int_t** _fStatsForSeeding;

    Bool_t isCovMatrixApproxUsed;
    Double_t fCovMatrix[15];

    Bool_t isUseRoughVertex;
    TVector3 fRoughVertex;

    ClassDef(BmnSteeringGemTracking, 1);
};

#endif
#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"BmnSteeringGemTracking", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__BmnSteeringDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__BmnSteeringDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__BmnSteeringDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__BmnSteeringDict() {
  TriggerDictionaryInitialization_G__BmnSteeringDict_Impl();
}
