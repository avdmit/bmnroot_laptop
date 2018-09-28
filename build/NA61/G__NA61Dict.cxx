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
         instance("Occupancy", ::Occupancy::Class_Version(), "", 34,
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
#include <TGraph.h>
#include <TVectorT.h>

using namespace std;

//------------------------------------------------------------------------------------------------------------------------

class Occupancy {
public:

    /** Default constructor **/
    Occupancy();

    /** Destructor **/
    virtual ~Occupancy();

    void Init(TTree);
    //    Bool_t Main();


private:


    TTree fInTree;

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
