// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIalexdIbmnroot_devdIbmnrootdIbuilddIidentificationdIG__BmnIdentificationDict

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
#include "BmnTofIdentification.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_BmnTofIdentification(void *p = 0);
   static void *newArray_BmnTofIdentification(Long_t size, void *p);
   static void delete_BmnTofIdentification(void *p);
   static void deleteArray_BmnTofIdentification(void *p);
   static void destruct_BmnTofIdentification(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTofIdentification*)
   {
      ::BmnTofIdentification *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTofIdentification >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTofIdentification", ::BmnTofIdentification::Class_Version(), "", 26,
                  typeid(::BmnTofIdentification), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTofIdentification::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTofIdentification) );
      instance.SetNew(&new_BmnTofIdentification);
      instance.SetNewArray(&newArray_BmnTofIdentification);
      instance.SetDelete(&delete_BmnTofIdentification);
      instance.SetDeleteArray(&deleteArray_BmnTofIdentification);
      instance.SetDestructor(&destruct_BmnTofIdentification);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTofIdentification*)
   {
      return GenerateInitInstanceLocal((::BmnTofIdentification*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTofIdentification*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnTofIdentification::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTofIdentification::Class_Name()
{
   return "BmnTofIdentification";
}

//______________________________________________________________________________
const char *BmnTofIdentification::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTofIdentification*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTofIdentification::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTofIdentification*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTofIdentification::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTofIdentification*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTofIdentification::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTofIdentification*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnTofIdentification::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTofIdentification.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTofIdentification::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTofIdentification::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTofIdentification(void *p) {
      return  p ? new(p) ::BmnTofIdentification : new ::BmnTofIdentification;
   }
   static void *newArray_BmnTofIdentification(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTofIdentification[nElements] : new ::BmnTofIdentification[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTofIdentification(void *p) {
      delete ((::BmnTofIdentification*)p);
   }
   static void deleteArray_BmnTofIdentification(void *p) {
      delete [] ((::BmnTofIdentification*)p);
   }
   static void destruct_BmnTofIdentification(void *p) {
      typedef ::BmnTofIdentification current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTofIdentification

namespace {
  void TriggerDictionaryInitialization_G__BmnIdentificationDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/opt/fairroot/install/include",
"/home/alex/bmnroot_dev/bmnroot/bmndata",
"/home/alex/bmnroot_dev/bmnroot/bmndata/cbm",
"/home/alex/bmnroot_dev/bmnroot/bmndata/math",
"/home/alex/bmnroot_dev/bmnroot/bmnfield",
"/home/alex/bmnroot_dev/bmnroot/gem",
"/home/alex/bmnroot_dev/bmnroot/silicon",
"/home/alex/bmnroot_dev/bmnroot/dch",
"/home/alex/bmnroot_dev/bmnroot/mwpc",
"/home/alex/bmnroot_dev/bmnroot/globaltracking",
"/home/alex/bmnroot_dev/bmnroot/decoder",
"/home/alex/bmnroot_dev/bmnroot/identification",
"/opt/fairsoft/install/include",
"/opt/fairsoft/install/include/root",
"/opt/fairsoft/install/include/root",
"/home/alex/bmnroot_dev/bmnroot/build/identification/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__BmnIdentificationDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class BmnTofIdentification;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__BmnIdentificationDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif
#ifndef BOOST_FOUND
  #define BOOST_FOUND 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#ifndef BMNTOFIDENTIFICATION_H
#define BMNTOFIDENTIFICATION_H 1

// STL
#include <iostream>
// FairSoft
#include <TNamed.h>
#include <TChain.h>
#include <TDatabasePDG.h>
#include <TFile.h>
#include <TH1F.h>
#include <TH2F.h>
#include <TStopwatch.h>
//BmnRoot
#include <BmnTofHit.h>
#include <BmnGlobalTracking.h>

class BmnTofIdentification : public TObject {
public:
    BmnTofIdentification();
    virtual ~BmnTofIdentification();
    
    static void MakePlots(TString NameFileIn = "bmndst.root", Int_t nEvForRead = 0);
private:

    ClassDef(BmnTofIdentification, 1)
};

#endif /* BMNTOFIDENTIFICATION_H */


#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"BmnTofIdentification", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__BmnIdentificationDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__BmnIdentificationDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__BmnIdentificationDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__BmnIdentificationDict() {
  TriggerDictionaryInitialization_G__BmnIdentificationDict_Impl();
}
