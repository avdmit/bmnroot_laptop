// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIalexdIbmnroot_devdIbmnrootdIbuilddINA61dIG__NA61Dict

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
#include "Occupancy.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_Occupancy(void *p = 0);
   static void *newArray_Occupancy(Long_t size, void *p);
   static void delete_Occupancy(void *p);
   static void deleteArray_Occupancy(void *p);
   static void destruct_Occupancy(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Occupancy*)
   {
      ::Occupancy *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Occupancy >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Occupancy", ::Occupancy::Class_Version(), "", 41,
                  typeid(::Occupancy), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Occupancy::Dictionary, isa_proxy, 4,
                  sizeof(::Occupancy) );
      instance.SetNew(&new_Occupancy);
      instance.SetNewArray(&newArray_Occupancy);
      instance.SetDelete(&delete_Occupancy);
      instance.SetDeleteArray(&deleteArray_Occupancy);
      instance.SetDestructor(&destruct_Occupancy);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Occupancy*)
   {
      return GenerateInitInstanceLocal((::Occupancy*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Occupancy*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr Occupancy::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Occupancy::Class_Name()
{
   return "Occupancy";
}

//______________________________________________________________________________
const char *Occupancy::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Occupancy*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Occupancy::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Occupancy*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Occupancy::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Occupancy*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Occupancy::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Occupancy*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void Occupancy::Streamer(TBuffer &R__b)
{
   // Stream an object of class Occupancy.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Occupancy::Class(),this);
   } else {
      R__b.WriteClassBuffer(Occupancy::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Occupancy(void *p) {
      return  p ? new(p) ::Occupancy : new ::Occupancy;
   }
   static void *newArray_Occupancy(Long_t nElements, void *p) {
      return p ? new(p) ::Occupancy[nElements] : new ::Occupancy[nElements];
   }
   // Wrapper around operator delete
   static void delete_Occupancy(void *p) {
      delete ((::Occupancy*)p);
   }
   static void deleteArray_Occupancy(void *p) {
      delete [] ((::Occupancy*)p);
   }
   static void destruct_Occupancy(void *p) {
      typedef ::Occupancy current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Occupancy

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

namespace {
  void TriggerDictionaryInitialization_G__NA61Dict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/opt/fairroot/install/include",
"/home/alex/bmnroot_dev/bmnroot/mcstack",
"/home/alex/bmnroot_dev/bmnroot/bmndata",
"/home/alex/bmnroot_dev/bmnroot/bmndata/math",
"/home/alex/bmnroot_dev/bmnroot/NA61",
"/opt/fairsoft/install/include",
"/opt/fairsoft/install/include/root",
"/opt/fairsoft/install/include/root",
"/home/alex/bmnroot_dev/bmnroot/build/NA61/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__NA61Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class Occupancy;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__NA61Dict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
//------------------------------------------------------------------------------------------------------------------------
// -------------------------------------------------------------------------
// -----                         Waveform header file                    -----
// -------------------------------------------------------------------------


#ifndef OCCUPANCY_H
#define OCCUPANCY_H


#include <TMath.h>
#include <TClonesArray.h>
#include <TTree.h>
#include <TVector3.h>
#include <stdlib.h>
#include <stdio.h>
#include <fstream>
#include <istream>
#include <ostream>
#include <iostream>
#include <vector>
#include <assert.h>
#include <TGraph2D.h>
#include <TVectorT.h>
#include <TH2.h>
#include <Math/Functor.h>
#include <TPolyLine3D.h>
#include <Math/Vector3D.h>
#include <Fit/Fitter.h>
//#include <TString.h>

using namespace std;

//------------------------------------------------------------------------------------------------------------------------

class Occupancy {
public:

    /** Default constructor **/
    Occupancy();

    /** Destructor **/
    virtual ~Occupancy();

    void Init();
    Short_t ConvertDataToFit(std::vector<std::vector < Double_t >>);

    TGraph2D* Get2DGraph();
    TH2D* GetTH2Dout(Double_t);
    TH1D* GetTH2Dprofile(Short_t);

    Short_t GetNStripLehgth() {
        return fStripLength.size();
    }
    //TH1D* GetTH1Dout() {
    //        return out;
    //    }

private:

    //    void line(double t, const double *p, double &x, double &y, double &z);
    TString fName;
    Short_t nPointInTrack, nParam;
    Double_t CoordinateTOF;
    Double_t fx, fy, fz;
    Double_t fStripWidth;
    vector<Double_t> fStripLength;
    Bool_t fMakeTH1D, fMergeResult;
    TGraph2D* fGraphIn;
    TH2D* fTH2Dout;
    //    TH1D* fOutProjection;
//    TH1D* out;

    //    TTree fInTree;

    void ComputeTofZCoordinate(const Double_t *);

    ClassDef(Occupancy, 1)

};

//------------------------------------------------------------------------------------------------------------------------
#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"Occupancy", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__NA61Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__NA61Dict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__NA61Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__NA61Dict() {
  TriggerDictionaryInitialization_G__NA61Dict_Impl();
}
