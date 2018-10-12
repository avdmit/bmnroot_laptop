// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIalexdIbmnroot_devdIbmnrootdIbuilddIwaveformsdIG__WaveformsDict

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
#include "Waveform.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_Waveform(void *p = 0);
   static void *newArray_Waveform(Long_t size, void *p);
   static void delete_Waveform(void *p);
   static void deleteArray_Waveform(void *p);
   static void destruct_Waveform(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Waveform*)
   {
      ::Waveform *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Waveform >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Waveform", ::Waveform::Class_Version(), "", 37,
                  typeid(::Waveform), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Waveform::Dictionary, isa_proxy, 4,
                  sizeof(::Waveform) );
      instance.SetNew(&new_Waveform);
      instance.SetNewArray(&newArray_Waveform);
      instance.SetDelete(&delete_Waveform);
      instance.SetDeleteArray(&deleteArray_Waveform);
      instance.SetDestructor(&destruct_Waveform);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Waveform*)
   {
      return GenerateInitInstanceLocal((::Waveform*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Waveform*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr Waveform::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Waveform::Class_Name()
{
   return "Waveform";
}

//______________________________________________________________________________
const char *Waveform::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Waveform*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Waveform::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Waveform*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Waveform::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Waveform*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Waveform::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Waveform*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void Waveform::Streamer(TBuffer &R__b)
{
   // Stream an object of class Waveform.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Waveform::Class(),this);
   } else {
      R__b.WriteClassBuffer(Waveform::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Waveform(void *p) {
      return  p ? new(p) ::Waveform : new ::Waveform;
   }
   static void *newArray_Waveform(Long_t nElements, void *p) {
      return p ? new(p) ::Waveform[nElements] : new ::Waveform[nElements];
   }
   // Wrapper around operator delete
   static void delete_Waveform(void *p) {
      delete ((::Waveform*)p);
   }
   static void deleteArray_Waveform(void *p) {
      delete [] ((::Waveform*)p);
   }
   static void destruct_Waveform(void *p) {
      typedef ::Waveform current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Waveform

namespace ROOT {
   static TClass *vectorlEdoublegR_Dictionary();
   static void vectorlEdoublegR_TClassManip(TClass*);
   static void *new_vectorlEdoublegR(void *p = 0);
   static void *newArray_vectorlEdoublegR(Long_t size, void *p);
   static void delete_vectorlEdoublegR(void *p);
   static void deleteArray_vectorlEdoublegR(void *p);
   static void destruct_vectorlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<double>*)
   {
      vector<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<double>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<double>", -2, "vector", 216,
                  typeid(vector<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<double>) );
      instance.SetNew(&new_vectorlEdoublegR);
      instance.SetNewArray(&newArray_vectorlEdoublegR);
      instance.SetDelete(&delete_vectorlEdoublegR);
      instance.SetDeleteArray(&deleteArray_vectorlEdoublegR);
      instance.SetDestructor(&destruct_vectorlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<double> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<double>*)0x0)->GetClass();
      vectorlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double> : new vector<double>;
   }
   static void *newArray_vectorlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double>[nElements] : new vector<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdoublegR(void *p) {
      delete ((vector<double>*)p);
   }
   static void deleteArray_vectorlEdoublegR(void *p) {
      delete [] ((vector<double>*)p);
   }
   static void destruct_vectorlEdoublegR(void *p) {
      typedef vector<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<double>

namespace ROOT {
   static TClass *vectorlETH2DmUgR_Dictionary();
   static void vectorlETH2DmUgR_TClassManip(TClass*);
   static void *new_vectorlETH2DmUgR(void *p = 0);
   static void *newArray_vectorlETH2DmUgR(Long_t size, void *p);
   static void delete_vectorlETH2DmUgR(void *p);
   static void deleteArray_vectorlETH2DmUgR(void *p);
   static void destruct_vectorlETH2DmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TH2D*>*)
   {
      vector<TH2D*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TH2D*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TH2D*>", -2, "vector", 216,
                  typeid(vector<TH2D*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETH2DmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TH2D*>) );
      instance.SetNew(&new_vectorlETH2DmUgR);
      instance.SetNewArray(&newArray_vectorlETH2DmUgR);
      instance.SetDelete(&delete_vectorlETH2DmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETH2DmUgR);
      instance.SetDestructor(&destruct_vectorlETH2DmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TH2D*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TH2D*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETH2DmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TH2D*>*)0x0)->GetClass();
      vectorlETH2DmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETH2DmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETH2DmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TH2D*> : new vector<TH2D*>;
   }
   static void *newArray_vectorlETH2DmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TH2D*>[nElements] : new vector<TH2D*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETH2DmUgR(void *p) {
      delete ((vector<TH2D*>*)p);
   }
   static void deleteArray_vectorlETH2DmUgR(void *p) {
      delete [] ((vector<TH2D*>*)p);
   }
   static void destruct_vectorlETH2DmUgR(void *p) {
      typedef vector<TH2D*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TH2D*>

namespace ROOT {
   static TClass *vectorlETGraphmUgR_Dictionary();
   static void vectorlETGraphmUgR_TClassManip(TClass*);
   static void *new_vectorlETGraphmUgR(void *p = 0);
   static void *newArray_vectorlETGraphmUgR(Long_t size, void *p);
   static void delete_vectorlETGraphmUgR(void *p);
   static void deleteArray_vectorlETGraphmUgR(void *p);
   static void destruct_vectorlETGraphmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TGraph*>*)
   {
      vector<TGraph*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TGraph*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TGraph*>", -2, "vector", 216,
                  typeid(vector<TGraph*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETGraphmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TGraph*>) );
      instance.SetNew(&new_vectorlETGraphmUgR);
      instance.SetNewArray(&newArray_vectorlETGraphmUgR);
      instance.SetDelete(&delete_vectorlETGraphmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETGraphmUgR);
      instance.SetDestructor(&destruct_vectorlETGraphmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TGraph*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TGraph*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETGraphmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TGraph*>*)0x0)->GetClass();
      vectorlETGraphmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETGraphmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETGraphmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TGraph*> : new vector<TGraph*>;
   }
   static void *newArray_vectorlETGraphmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TGraph*>[nElements] : new vector<TGraph*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETGraphmUgR(void *p) {
      delete ((vector<TGraph*>*)p);
   }
   static void deleteArray_vectorlETGraphmUgR(void *p) {
      delete [] ((vector<TGraph*>*)p);
   }
   static void destruct_vectorlETGraphmUgR(void *p) {
      typedef vector<TGraph*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TGraph*>

namespace {
  void TriggerDictionaryInitialization_G__WaveformsDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/opt/fairroot/install/include",
"/home/alex/bmnroot_dev/bmnroot/mcstack",
"/home/alex/bmnroot_dev/bmnroot/bmndata",
"/home/alex/bmnroot_dev/bmnroot/bmndata/math",
"/home/alex/bmnroot_dev/bmnroot/waveforms",
"/opt/fairsoft/install/include",
"/opt/fairsoft/install/include/root",
"/opt/fairsoft/install/include/root",
"/home/alex/bmnroot_dev/bmnroot/build/waveforms/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__WaveformsDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class Waveform;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__WaveformsDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
//------------------------------------------------------------------------------------------------------------------------
// -------------------------------------------------------------------------
// -----                         Waveform header file                    -----
// -------------------------------------------------------------------------


#ifndef WAVEFORM_H
#define WAVEFORM_H


#include <stdlib.h>
#include <stdio.h>
#include <fstream>
#include <istream>
#include <ostream>
#include <iostream>
#include <TMath.h>
#include <TClonesArray.h>
#include <vector>
#include <TGraph.h>
#include <TCanvas.h>
#include <TVectorT.h>
#include <TTree.h>
#include <float.h>
#include <TH2D.h>
#include <TF1.h>

using namespace std;

//------------------------------------------------------------------------------------------------------------------------

class Waveform {
public:

    /** Default constructor **/
    Waveform();

    /** Destructor **/
    virtual ~Waveform();

    void Init(Short_t, Bool_t, Bool_t, Bool_t);
    Bool_t Main(Char_t*, Int_t/*, TTree*/);
    void Draw();
    void NextFile();

    vector<TGraph*> GetGraphs() {
        return fGraphs;
    }

    vector<TH2D*> GetTimeVsAmp() {
        return TimeVsAmp;
    }

    vector<TH2D*> GetDeltaTimeVsAmp() {
        return DeltaTimeVsAmp;
    }

private:
    static const Short_t kMaxWavefoms = 4;
    TString fName;
    vector<TGraph*> fGraphs;
    vector<Double_t> kMaximum, kMinimum;
    Bool_t fNear;
    //    vector<Double_t> kMaximumDif, kMinimumDif;
    Double_t maxTime, minTime, TimeDiff;
    TGraph * CiDif[kMaxWavefoms / 2];


    vector<TH2D*> DeltaTimeVsAmp;
    vector<TH2D*> TimeVsAmp;
    vector<TH2D*> TimeVsAmp2;
    Short_t number_event1, number_event2, number_event3, number_event4, number_event5;
    Bool_t FirstRead, DiffSig, MakeTHs;
    Char_t name1[100], nameJPG[100], str1[256], str2[256];
    Short_t nFile;
    Short_t nPoints;
    //    Double_t C_T, C_AMP;
    //    vector<vector<Double_t>> C_Tvector;
    //    vector<vector<Double_t>> C_AMPvector;
    //    vector<vector<Double_t>> C_TvectorDiff;
    //    vector<vector<Double_t>> C_AMPvectorDiff;
    //        vector<Double_t> fMax, kMax;
    TTree fTree4Save;
    TClonesArray fArrayConteiner;

    vector<TGraph*> outVectorGraphs2;

    void FindSecondMax(vector<Double_t>);
    vector<TGraph*> DiffSignal(vector<TGraph*>, Double_t*, Double_t*);
    vector<Double_t> PreciseFindMax(vector<Double_t>);
    vector<Double_t> FindBaseLane();
    Bool_t CheckPlacementOfMax(Double_t, Double_t, Short_t, Short_t);
    ClassDef(Waveform, 2)

};

//------------------------------------------------------------------------------------------------------------------------
#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"Waveform", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__WaveformsDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__WaveformsDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__WaveformsDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__WaveformsDict() {
  TriggerDictionaryInitialization_G__WaveformsDict_Impl();
}
