// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIalexdIbmnroot_devdIbmnrootdIbuilddIglobaltrackingdIG__GlobalTrackingDict

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
#include "BmnDetectorSetup.h"
#include "BmnGlobalTracking.h"
#include "BmnTriggersCheck.h"
#include "BmnHitFinderRun1.h"
#include "BmnVertexFinder.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *BmnDetectorSetup_Dictionary();
   static void BmnDetectorSetup_TClassManip(TClass*);
   static void *new_BmnDetectorSetup(void *p = 0);
   static void *newArray_BmnDetectorSetup(Long_t size, void *p);
   static void delete_BmnDetectorSetup(void *p);
   static void deleteArray_BmnDetectorSetup(void *p);
   static void destruct_BmnDetectorSetup(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnDetectorSetup*)
   {
      ::BmnDetectorSetup *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BmnDetectorSetup));
      static ::ROOT::TGenericClassInfo 
         instance("BmnDetectorSetup", "", 32,
                  typeid(::BmnDetectorSetup), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BmnDetectorSetup_Dictionary, isa_proxy, 4,
                  sizeof(::BmnDetectorSetup) );
      instance.SetNew(&new_BmnDetectorSetup);
      instance.SetNewArray(&newArray_BmnDetectorSetup);
      instance.SetDelete(&delete_BmnDetectorSetup);
      instance.SetDeleteArray(&deleteArray_BmnDetectorSetup);
      instance.SetDestructor(&destruct_BmnDetectorSetup);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnDetectorSetup*)
   {
      return GenerateInitInstanceLocal((::BmnDetectorSetup*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnDetectorSetup*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BmnDetectorSetup_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BmnDetectorSetup*)0x0)->GetClass();
      BmnDetectorSetup_TClassManip(theClass);
   return theClass;
   }

   static void BmnDetectorSetup_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnGlobalTracking(void *p = 0);
   static void *newArray_BmnGlobalTracking(Long_t size, void *p);
   static void delete_BmnGlobalTracking(void *p);
   static void deleteArray_BmnGlobalTracking(void *p);
   static void destruct_BmnGlobalTracking(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGlobalTracking*)
   {
      ::BmnGlobalTracking *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGlobalTracking >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGlobalTracking", ::BmnGlobalTracking::Class_Version(), "", 132,
                  typeid(::BmnGlobalTracking), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGlobalTracking::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGlobalTracking) );
      instance.SetNew(&new_BmnGlobalTracking);
      instance.SetNewArray(&newArray_BmnGlobalTracking);
      instance.SetDelete(&delete_BmnGlobalTracking);
      instance.SetDeleteArray(&deleteArray_BmnGlobalTracking);
      instance.SetDestructor(&destruct_BmnGlobalTracking);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGlobalTracking*)
   {
      return GenerateInitInstanceLocal((::BmnGlobalTracking*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGlobalTracking*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTriggersCheck(void *p = 0);
   static void *newArray_BmnTriggersCheck(Long_t size, void *p);
   static void delete_BmnTriggersCheck(void *p);
   static void deleteArray_BmnTriggersCheck(void *p);
   static void destruct_BmnTriggersCheck(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTriggersCheck*)
   {
      ::BmnTriggersCheck *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTriggersCheck >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTriggersCheck", ::BmnTriggersCheck::Class_Version(), "", 299,
                  typeid(::BmnTriggersCheck), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTriggersCheck::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTriggersCheck) );
      instance.SetNew(&new_BmnTriggersCheck);
      instance.SetNewArray(&newArray_BmnTriggersCheck);
      instance.SetDelete(&delete_BmnTriggersCheck);
      instance.SetDeleteArray(&deleteArray_BmnTriggersCheck);
      instance.SetDestructor(&destruct_BmnTriggersCheck);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTriggersCheck*)
   {
      return GenerateInitInstanceLocal((::BmnTriggersCheck*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTriggersCheck*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnVertexFinder(void *p = 0);
   static void *newArray_BmnVertexFinder(Long_t size, void *p);
   static void delete_BmnVertexFinder(void *p);
   static void deleteArray_BmnVertexFinder(void *p);
   static void destruct_BmnVertexFinder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnVertexFinder*)
   {
      ::BmnVertexFinder *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnVertexFinder >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnVertexFinder", ::BmnVertexFinder::Class_Version(), "", 963,
                  typeid(::BmnVertexFinder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnVertexFinder::Dictionary, isa_proxy, 4,
                  sizeof(::BmnVertexFinder) );
      instance.SetNew(&new_BmnVertexFinder);
      instance.SetNewArray(&newArray_BmnVertexFinder);
      instance.SetDelete(&delete_BmnVertexFinder);
      instance.SetDeleteArray(&deleteArray_BmnVertexFinder);
      instance.SetDestructor(&destruct_BmnVertexFinder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnVertexFinder*)
   {
      return GenerateInitInstanceLocal((::BmnVertexFinder*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnVertexFinder*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnGlobalTracking::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGlobalTracking::Class_Name()
{
   return "BmnGlobalTracking";
}

//______________________________________________________________________________
const char *BmnGlobalTracking::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGlobalTracking*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGlobalTracking::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGlobalTracking*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGlobalTracking::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGlobalTracking*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGlobalTracking::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGlobalTracking*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTriggersCheck::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTriggersCheck::Class_Name()
{
   return "BmnTriggersCheck";
}

//______________________________________________________________________________
const char *BmnTriggersCheck::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTriggersCheck*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTriggersCheck::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTriggersCheck*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTriggersCheck::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTriggersCheck*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTriggersCheck::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTriggersCheck*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnVertexFinder::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnVertexFinder::Class_Name()
{
   return "BmnVertexFinder";
}

//______________________________________________________________________________
const char *BmnVertexFinder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnVertexFinder*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnVertexFinder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnVertexFinder*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnVertexFinder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnVertexFinder*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnVertexFinder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnVertexFinder*)0x0)->GetClass(); }
   return fgIsA;
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnDetectorSetup(void *p) {
      return  p ? new(p) ::BmnDetectorSetup : new ::BmnDetectorSetup;
   }
   static void *newArray_BmnDetectorSetup(Long_t nElements, void *p) {
      return p ? new(p) ::BmnDetectorSetup[nElements] : new ::BmnDetectorSetup[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnDetectorSetup(void *p) {
      delete ((::BmnDetectorSetup*)p);
   }
   static void deleteArray_BmnDetectorSetup(void *p) {
      delete [] ((::BmnDetectorSetup*)p);
   }
   static void destruct_BmnDetectorSetup(void *p) {
      typedef ::BmnDetectorSetup current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnDetectorSetup

//______________________________________________________________________________
void BmnGlobalTracking::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGlobalTracking.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGlobalTracking::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGlobalTracking::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnGlobalTracking(void *p) {
      return  p ? new(p) ::BmnGlobalTracking : new ::BmnGlobalTracking;
   }
   static void *newArray_BmnGlobalTracking(Long_t nElements, void *p) {
      return p ? new(p) ::BmnGlobalTracking[nElements] : new ::BmnGlobalTracking[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnGlobalTracking(void *p) {
      delete ((::BmnGlobalTracking*)p);
   }
   static void deleteArray_BmnGlobalTracking(void *p) {
      delete [] ((::BmnGlobalTracking*)p);
   }
   static void destruct_BmnGlobalTracking(void *p) {
      typedef ::BmnGlobalTracking current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGlobalTracking

//______________________________________________________________________________
void BmnTriggersCheck::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTriggersCheck.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTriggersCheck::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTriggersCheck::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTriggersCheck(void *p) {
      return  p ? new(p) ::BmnTriggersCheck : new ::BmnTriggersCheck;
   }
   static void *newArray_BmnTriggersCheck(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTriggersCheck[nElements] : new ::BmnTriggersCheck[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTriggersCheck(void *p) {
      delete ((::BmnTriggersCheck*)p);
   }
   static void deleteArray_BmnTriggersCheck(void *p) {
      delete [] ((::BmnTriggersCheck*)p);
   }
   static void destruct_BmnTriggersCheck(void *p) {
      typedef ::BmnTriggersCheck current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTriggersCheck

//______________________________________________________________________________
void BmnVertexFinder::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnVertexFinder.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnVertexFinder::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnVertexFinder::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnVertexFinder(void *p) {
      return  p ? new(p) ::BmnVertexFinder : new ::BmnVertexFinder;
   }
   static void *newArray_BmnVertexFinder(Long_t nElements, void *p) {
      return p ? new(p) ::BmnVertexFinder[nElements] : new ::BmnVertexFinder[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnVertexFinder(void *p) {
      delete ((::BmnVertexFinder*)p);
   }
   static void deleteArray_BmnVertexFinder(void *p) {
      delete [] ((::BmnVertexFinder*)p);
   }
   static void destruct_BmnVertexFinder(void *p) {
      typedef ::BmnVertexFinder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnVertexFinder

namespace ROOT {
   static TClass *maplEDetectorIdcOboolgR_Dictionary();
   static void maplEDetectorIdcOboolgR_TClassManip(TClass*);
   static void *new_maplEDetectorIdcOboolgR(void *p = 0);
   static void *newArray_maplEDetectorIdcOboolgR(Long_t size, void *p);
   static void delete_maplEDetectorIdcOboolgR(void *p);
   static void deleteArray_maplEDetectorIdcOboolgR(void *p);
   static void destruct_maplEDetectorIdcOboolgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<DetectorId,bool>*)
   {
      map<DetectorId,bool> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<DetectorId,bool>));
      static ::ROOT::TGenericClassInfo 
         instance("map<DetectorId,bool>", -2, "map", 99,
                  typeid(map<DetectorId,bool>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEDetectorIdcOboolgR_Dictionary, isa_proxy, 0,
                  sizeof(map<DetectorId,bool>) );
      instance.SetNew(&new_maplEDetectorIdcOboolgR);
      instance.SetNewArray(&newArray_maplEDetectorIdcOboolgR);
      instance.SetDelete(&delete_maplEDetectorIdcOboolgR);
      instance.SetDeleteArray(&deleteArray_maplEDetectorIdcOboolgR);
      instance.SetDestructor(&destruct_maplEDetectorIdcOboolgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<DetectorId,bool> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<DetectorId,bool>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEDetectorIdcOboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<DetectorId,bool>*)0x0)->GetClass();
      maplEDetectorIdcOboolgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEDetectorIdcOboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEDetectorIdcOboolgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<DetectorId,bool> : new map<DetectorId,bool>;
   }
   static void *newArray_maplEDetectorIdcOboolgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<DetectorId,bool>[nElements] : new map<DetectorId,bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEDetectorIdcOboolgR(void *p) {
      delete ((map<DetectorId,bool>*)p);
   }
   static void deleteArray_maplEDetectorIdcOboolgR(void *p) {
      delete [] ((map<DetectorId,bool>*)p);
   }
   static void destruct_maplEDetectorIdcOboolgR(void *p) {
      typedef map<DetectorId,bool> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<DetectorId,bool>

namespace {
  void TriggerDictionaryInitialization_G__GlobalTrackingDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/opt/fairroot/install/include",
"/home/alex/bmnroot_dev/bmnroot/bmndata",
"/home/alex/bmnroot_dev/bmnroot/bmndata/cbm",
"/home/alex/bmnroot_dev/bmnroot/bmndata/math",
"/home/alex/bmnroot_dev/bmnroot/bmnfield",
"/home/alex/bmnroot_dev/bmnroot/silicon",
"/home/alex/bmnroot_dev/bmnroot/gem",
"/home/alex/bmnroot_dev/bmnroot/dch",
"/home/alex/bmnroot_dev/bmnroot/mwpc",
"/home/alex/bmnroot_dev/bmnroot/uni_db",
"/home/alex/bmnroot_dev/bmnroot/uni_db/db_classes",
"/home/alex/bmnroot_dev/bmnroot/globaltracking",
"/opt/fairsoft/install/include",
"/opt/fairsoft/install/include/root",
"/opt/fairsoft/install/include/root",
"/home/alex/bmnroot_dev/bmnroot/build/globaltracking/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__GlobalTrackingDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class BmnDetectorSetup;
class BmnGlobalTracking;
class BmnTriggersCheck;
class BmnVertexFinder;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__GlobalTrackingDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif
#ifndef BOOST_FOUND
  #define BOOST_FOUND 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
/**
 * \file BmnDetectorSetup.h
 * \brief Helper class to access detector presence.
 * \author Andrey Lebedev <andrey.lebedev@gsi.de> - Original author. First version of code for CBM experiment.
 * \author Sergey Merts <Sergey.Merts@gmail.com> - Modification for BMN experiment.
 * \date 2012-2014
 */
#ifndef BMNDETECTORSETUP_H_
#define BMNDETECTORSETUP_H_

#include "CbmDetectorList.h"
#include <string>
#include <map>

using namespace std;

/**
 * \class BmnDetectorSetup
 * \brief Helper class to access detector presence.
 * \author Andrey Lebedev <andrey.lebedev@gsi.de> - Original author. First version of code for CBM experiment.
 * \author Sergey Merts <Sergey.Merts@gmail.com> - Modification for BMN experiment.
 * \date 2012-2014
 */
class BmnDetectorSetup
{
public:

   /**
    * \brief Constructor.
    */
   BmnDetectorSetup();

   /**
    * \brief Destructor.
    */
   virtual ~BmnDetectorSetup();

   /**
    * \brief Set detector presence manually.
    * \param[in] detId Detector identificator.
    * \param[in] isDet True if detector is in the setup.
    */
   void SetDet(DetectorId detId,Bool_t isDet);

   /**
    * \brief Return detector presence in setup.
    * \param[in] detId Detector identificator.
    * \return Detector presence in setup.
    */
   Bool_t GetDet(DetectorId detId) const;

   /**
    * \brief Determines detector presence using TGeoManager.
    */
   void DetermineSetup();

   /**
    * \brief Return string representation of class.
    * \return String representation of class.
    */
   string ToString() const;

private:
   /**
    * \brief Check detector presence using TGeoManager.
    * \param[in] name Name of the detector to be checked.
    * \return True if detector was found in TGeoManager.
    */
   Bool_t CheckDetectorPresence(
      const string& name) const;

   map<DetectorId, Bool_t> fDet; // Map DetectorId to detector presence
};

#endif /* BMNDETECTORSETUP_H_ */
/* * \file BmnGlobalTracking.h
 * \author Sergey Merts <Sergey.Merts@gmail.com>
 * \date 2014
 * \brief BMN task for global track reconstruction.
 *
 * Output is reconstructed global tracks BmnGlobalTrack 
 * Hit-to-track merger attaches the TOF hit finally the track is refitted.
 **/

#ifndef BmnGlobalTracking_H_
#define BmnGlobalTracking_H_

#include "FairTask.h"
#include "TClonesArray.h"
#include "BmnGlobalTrack.h"
#include "CbmTofPoint.h"
#include "BmnHit.h"
#include "BmnGemTrack.h"
#include "BmnSiliconHit.h"
#include "BmnDchTrack.h"
#include "BmnDchHit.h"
#include "BmnMwpcHit.h"
#include "BmnMwpcTrack.h"
#include "FairRootManager.h"
#include "FairRunAna.h"
#include "FairRuntimeDb.h"
#include "FairMCPoint.h"
#include "CbmStsHit.h"
#include "CbmMCTrack.h"
#include "TMath.h"
#include <vector>
#include <string>
#include "BmnDetectorSetup.h"
#include "BmnKalmanFilter.h"
#include "CbmVertex.h"
#include "BmnSiliconStationSet.h"
#include "TH1F.h"
#include "TH2F.h"
#include "TGraph.h"
#include "TFitResult.h"
#include "TFitResultPtr.h"


class TClonesArray;

using namespace std;

class BmnGlobalTracking : public FairTask {
public:
    /**
     * \brief Constructor.
     */
    BmnGlobalTracking();
    BmnGlobalTracking(Bool_t);

    /**
     * \brief Destructor.
     */
    virtual ~BmnGlobalTracking();

    /**
     * \brief Inherited from FairTask.
     */
    virtual InitStatus Init();

    /**
     * \brief Inherited from FairTask.
     */
    virtual void Exec(Option_t* opt);

    /**
     * \brief Inherited from FairTask.
     */
    virtual void Finish();

    Float_t Sqr(Float_t x);

    void SetRun1(Bool_t run) {
        isRUN1 = run;
    }

    void SetDetConf(Bool_t gem, Bool_t tof1, Bool_t dch1, Bool_t dch2, Bool_t tof2) {
        fDetConf = Short_t(gem) * 16 + Short_t(tof1) * 8 + Short_t(dch1) * 4 + Short_t(dch2) * 2 + Short_t(tof2) * 1;
    };

    const Short_t GetDetConf() const {
        return fDetConf;
    };

    void SetField(Bool_t f) {
        fIsField = f;
    }

    BmnStatus CreateDchHitsFromTracks();

private:

    //AM 7.08
    Bool_t expData;
    TClonesArray* fGemHitArray;
    BmnGemStripHit * GetGemHit(Int_t i);
    BmnStatus MatchGemDCH(BmnGlobalTrack* tr);
    BmnStatus MatchDCHTOF(BmnGlobalTrack* tr, Int_t num);
    BmnStatus MatchDCHMPWC(BmnGlobalTrack* tr);
    void FitDCHTracks();
    void FitGemTracks();
    /*
     * \brief Calculate length of the global track
     */
    void CalculateLength();

    /**
     * \brief Run the track reconstruction
     */
    void RunTrackReconstruction();

    /**
     * \brief Select tracks for further merging with TOF.
     */
    void SelectTracksForTofMerging();

    // INPUT ARRAYS
    TClonesArray* fGemTracks;
    TClonesArray* fGemVertex;
    TClonesArray* fGemHits;
    TClonesArray* fSilHits;
    TClonesArray* fMwpcTracks;
    TClonesArray* fMwpcHits;
    TClonesArray* fDchTracks;
    TClonesArray* fDchHits;
    TClonesArray* fTof1Hits;
    TClonesArray* fTof2Hits;

    TClonesArray* fEvHead;

    // INPUT FOR CHECKING EFFICIENCY
    TClonesArray* fGemMcPoints;
    TClonesArray* fTof1McPoints;
    TClonesArray* fTof2McPoints;
    TClonesArray* fDchMcPoints;
    TClonesArray* fMcTracks;

    TClonesArray* fMCTracks;
    TClonesArray* fBmnMPWCPointsArray;
    TClonesArray* fBmnTOFPointsArray;
    TClonesArray* fBmnTOF1PointsArray;
    TClonesArray* fBmnDchPointsArray;
    TClonesArray* fBmnGemPointsArray;

    // OUTPUT ARRAYS

    TClonesArray* fGlobalTracks; //output BmnGlobalTrack array

    Bool_t fIsField; // run with mag.field or not

    /*
     * Detector configuration, 5 bits:
     * 1 - GEM
     * 2 - TOF1
     * 3 - DCH1
     * 4 - DCH2
     * 5 - TOF2
     */
    Short_t fDetConf;
    BmnDetectorSetup fDet; // Detector presence information

    Int_t fEventNo; // event counter

    Bool_t isRUN1; // temporary flag for switching between full GEM-geometry and prototype

    Int_t fPDG; // PDG hypothesis
    Float_t fChiSqCut; // Chi square cut for hit to be attached to track.

    CbmVertex *fVertex; // vertex information

    BmnStatus MatchingTOF(BmnGlobalTrack* tr, Int_t num, Int_t trIndex);
    BmnStatus MatchingDCH(BmnGlobalTrack* tr);
    BmnStatus MatchingMWPC(BmnGlobalTrack* tr);
    BmnStatus MatchingSil(map <Double_t, pair<Int_t, Int_t> >);

    BmnStatus Refit(BmnGlobalTrack* tr);
    BmnStatus EfficiencyCalculation();

    BmnStatus Run1GlobalTrackFinder();
    BmnStatus FillHoughHistogram(TH1F* h, TGraph* orig, TH2F* cm, TGraph* seeds, TClonesArray* arr);

    void FillIndexMap(map<Int_t, Int_t> &indexes, Int_t id);

    BmnGlobalTracking(const BmnGlobalTracking&);
    //    BmnGlobalTracking& operator=(const BmnGlobalTracking&);
    BmnStatus RefitToDetector(BmnGlobalTrack* tr, Int_t hitId, TClonesArray* hitArr, FairTrackParam* par, Int_t* nodeIdx, vector<BmnFitNode>* nodes);
    void CalcSiliconDist(BmnGlobalTrack*, map <Double_t, pair<Int_t, Int_t> >&);

    ClassDef(BmnGlobalTracking, 1);
};

#endif /* BmnGlobalTracking_H_ */
#ifndef BMNTRIGGERSCHECK_H
#define BMNTRIGGERSCHECK_H 1

#include "FairTask.h"
#include "FairRootManager.h"
#include "BmnEventHeader.h"
#include <UniDbDetectorParameter.h>
#include <UniDbRun.h>
#include <TClonesArray.h>
#include <TString.h>
#include <TMath.h>
#include "BmnEventQuality.h"

using namespace std;
using namespace TMath;

class BmnTriggersCheck : public FairTask {
public:

    BmnTriggersCheck() {
    };

    BmnTriggersCheck(Bool_t, Int_t, Int_t);

    virtual ~BmnTriggersCheck() {
    };

    virtual InitStatus Init();
    virtual void Exec(Option_t* opt);
    virtual void Finish();

private:
    Bool_t fIsExp;
    Int_t fRunPeriod;
    Int_t fRunNumber;
    TString fBmnEventHeaderBranchName;
    TString fT0Branch;
    TString fVetoBranch;
    TString fBC2Branch;
    TString fBDBranch;
    
    TString fBmnEvQualityBranchName;

    TClonesArray* fBmnEventHeader;
    TClonesArray* fT0Array;
    TClonesArray* fVetoArray;
    TClonesArray* fBC2Array;
    TClonesArray* fBDArray;
    
    //TClonesArray* fBmnGemStripDigitsArray;
    TClonesArray* fBmnEvQuality;

    ClassDef(BmnTriggersCheck, 1);
};

#endif
#ifndef BMNHITFINDERRUN1_H
#define BMNHITFINDERRUN1_H 1

#include <vector>
#include "TGeoVolume.h"
#include "TGeoManager.h"
#include "TVector3.h"
#include "BmnDchHit.h"
#include "BmnDchDigit.h"
#include "BmnMwpcDigit.h"
#include "BmnMwpcHit.h"
#include "TClonesArray.h"
#include "TMath.h"
#include "TF1.h"
#include "TH1F.h"
#include "BmnEnums.h"
#include "DCHgeometryconstants_bmn.h"

using namespace std;
using namespace TMath;


// constants for mwpc ===>
const Short_t kNPlanes = 6;
const Short_t kTimeBin = 8; // ns
const Short_t kNWires = 96; //in one plane
const Float_t kAngleStep = 60 * DegToRad();
const Float_t kWireStep = 0.25; // cm
const Float_t kPlaneHeight = 43.3; // cm
const Float_t kPlaneWidth = kNWires * kWireStep; //24.6; // cm
const Float_t kMwpcZpos = 350; //FIXME!!! Get coords from geometry

#define mwpc0_leftTime  0.0
#define mwpc0_rightTime  0.0
#define mwpc1_leftTime  0.0
#define mwpc1_rightTime  0.0
#define mwpc2_leftTime  0.0
#define mwpc2_rightTime  0.0
// <=== constants for mwpc

//Detector's position

//Detector's construct parameters
const Float_t ZLength_DCH1 = 20.0;
const Float_t ZLength_DCH1ActiveVolume = 0.6;
const Float_t HoleSize_DCH1 = 12.0;

//const Float_t SideLengthOfOctagon = 120.0;
//const Float_t InnerRadiusOfOctagon = (2.414 * SideLengthOfOctagon) / 2.0;

const UInt_t nWires = 240; // 0 - 255
const UInt_t nPlanes = 16; // 0 - 15const 
#define MaxRadiusOfActiveVolume  120.0
//const Float_t MinRadiusOfActiveVolume = 12.0;
const Float_t WireStep = 2.0 * MaxRadiusOfActiveVolume / nWires;
const Float_t HalfStep = WireStep / 2.0;

inline void CheckHits(vector<TVector3> &vec1, vector<TVector3> &vec2) {

    Bool_t flag = kFALSE;
    Float_t delta = 1.0; // cm
    for (Int_t i = 0; i < vec1.size(); ++i) {
        TVector3* hit1 = &(vec1.at(i));
        for (Int_t j = 0; j < vec2.size(); ++j) {
            TVector3 hit2 = vec2.at(j);
            if (Abs(hit1->Perp() - hit2.Perp()) < delta) {
                flag = kTRUE;
                break;
            }
        }
        if (!flag) {
            hit1->SetXYZ(-1000.0, -1000.0, -1000.0);
        }
    }
}

inline void CombineHits(vector<TVector3> vec, TClonesArray* hits, Short_t plane) {

    TVector3 dchPos;

    //    TGeoVolume* pVolume = gGeoManager->GetVolume("cave");
    //    if (pVolume != NULL) {
    //        TString node_name = TString::Format("dch%d_0", plane / 2 + 1);
    //        TGeoNode* pNode = pVolume->FindNode(node_name);
    //        if (pNode != NULL) {
    //            TGeoMatrix* pMatrix = pNode->GetMatrix();
    //            dchPos = TVector3(pMatrix->GetTranslation()[0], pMatrix->GetTranslation()[1], pMatrix->GetTranslation()[2]);
    //        } else
    //            cout << "DCH detector (" << node_name << ") wasn't found." << endl;
    //    } else
    //        cout << "Cave volume wasn't found." << endl;

    Float_t delta = 2.0; //roughly
    for (Int_t i = 0; i < vec.size(); ++i) {
        TVector3* hitI = &(vec.at(i));
        for (Int_t j = i + 1; j < vec.size(); ++j) {
            TVector3* hitJ = &(vec.at(j));
            //            cout << "Abs(hitI.Mag() - hitJ.Mag()) = " << Abs(hitI.Mag() - hitJ.Mag()) << endl;
            if (Abs(hitI->Mag() - hitJ->Mag()) < delta) {
                hitI->SetZ(-1000);
                break;
            }
        }
    }
    for (Int_t i = 0; i < vec.size(); ++i) {
        TVector3 hit = vec.at(i);

        if (hit.Z() < -100.0) continue;
        if ((plane == 0) || (plane == 2)) {
            hit.RotateZ(45.0 * DegToRad());
            //hit.SetY(-1.0 * hit.Y());
        } else {
            hit.RotateZ(90.0 * DegToRad());
            //hit.SetY(-1.0 * hit.Y());
        }
        //        cout << hit.X() << " " << hit.Y() << " " << hit.Z() << " " << hit.Mag() << endl;
        new((*hits)[hits->GetEntriesFast()]) BmnDchHit(0, hit + dchPos, TVector3(0, 0, 0), 0, 0, 0, plane);
        BmnDchHit* dchHit = (BmnDchHit*) hits->At(hits->GetEntriesFast() - 1);
        dchHit->SetDchId(plane / 2 + 1);
        dchHit->SetHitId(hits->GetEntriesFast() - 1);
    }
}

inline vector<TVector3> CreateHitsByTwoPlanes(vector<Float_t> vec1, vector<Float_t> vec2, Float_t zPos) {
    vector<TVector3> v;
    for (Int_t i = 0; i < vec1.size(); ++i) {
        Float_t x = vec1.at(i);
        for (Int_t j = 0; j < vec2.size(); ++j) {
            Float_t y = vec2.at(j);
            TVector3 pos(x, y, zPos);
            v.push_back(pos);
        }
    }
    return v;
}

inline vector<Float_t> MergeSubPlanes(vector<BmnDchDigit*> vec1, vector<BmnDchDigit*> vec2) {
    vector<Float_t> v;
    for (Int_t i = 0; i < vec1.size(); ++i) {
        BmnDchDigit* d1 = (BmnDchDigit*) vec1.at(i);
        if (d1->GetWireNumber() >= nWires) d1->SetWireNumber(d1->GetWireNumber() - nWires + 7 * 16);
        for (Int_t j = 0; j < vec2.size(); ++j) {
            BmnDchDigit* d2 = (BmnDchDigit*) vec2.at(j);
            if (d2->GetWireNumber() >= nWires) d2->SetWireNumber(d2->GetWireNumber() - nWires + 7 * 16);
            if (Abs(d1->GetWireNumber() - d2->GetWireNumber()) > 1) continue;
            Float_t n = (d1->GetWireNumber() + d2->GetWireNumber()) / 2.0;
            //            Float_t coord = (InnerRadiusOfOctagon - WireStep) * (2.0 * n / (nWires - 1) - 1);
            Float_t coord = (MaxRadiusOfActiveVolume - WireStep) * (2.0 * n / (nWires - 1) - 1);
            v.push_back(coord);
        }
    }
    return v;
}

inline void ProcessDchDigits(TClonesArray* digits, TClonesArray * hitsArray) {

    BmnDchDigit* digit = NULL;

    //temporary containers
    vector<BmnDchDigit*> xa1;
    vector<BmnDchDigit*> xa2;
    vector<BmnDchDigit*> xb1;
    vector<BmnDchDigit*> xb2;
    vector<BmnDchDigit*> ya1;
    vector<BmnDchDigit*> ya2;
    vector<BmnDchDigit*> yb1;
    vector<BmnDchDigit*> yb2;
    vector<BmnDchDigit*> ua1;
    vector<BmnDchDigit*> ua2;
    vector<BmnDchDigit*> ub1;
    vector<BmnDchDigit*> ub2;
    vector<BmnDchDigit*> va1;
    vector<BmnDchDigit*> va2;
    vector<BmnDchDigit*> vb1;
    vector<BmnDchDigit*> vb2;

    //    const Float_t errX = kWireStep / TMath::Sqrt(12.0);
    //    const Float_t errY = kWireStep / TMath::Sqrt(12.0);
    //    const Float_t errZ = 1.0 / TMath::Sqrt(12.0); // zStep = 1.0 cm
    //    TVector3 errors = TVector3(errX, errY, errZ); //FIXME!!! Calculate by formulae

    for (Int_t iDig = 0; iDig < digits->GetEntriesFast(); ++iDig) {
        digit = (BmnDchDigit*) digits->At(iDig);
        if (digit == NULL) continue;
        //cout << "plane = " << digit->GetPlane() << " wire = " << digit->GetWireNumber() << endl;
        Short_t plane = digit->GetPlane();
        //if (digit->GetTime() <= 450) continue;
        switch (plane) {
            case 0: va1.push_back(digit);
                break;
            case 1: vb1.push_back(digit);
                break;
            case 2: ua1.push_back(digit);
                break;
            case 3: ub1.push_back(digit);
                break;
            case 4: xa1.push_back(digit);
                break;
            case 5: xb1.push_back(digit);
                break;
            case 6: ya1.push_back(digit);
                break;
            case 7: yb1.push_back(digit);
                break;
            case 8: va2.push_back(digit);
                break;
            case 9: vb2.push_back(digit);
                break;
            case 10: ua2.push_back(digit);
                break;
            case 11: ub2.push_back(digit);
                break;
            case 12: xa2.push_back(digit);
                break;
            case 13: xb2.push_back(digit);
                break;
            case 14: ya2.push_back(digit);
                break;
            case 15: yb2.push_back(digit);
                break;
        }
    }

    vector<Float_t> v1 = MergeSubPlanes(va1, vb1);
    vector<Float_t> u1 = MergeSubPlanes(ua1, ub1);
    vector<Float_t> x1 = MergeSubPlanes(xa1, xb1);
    vector<Float_t> y1 = MergeSubPlanes(ya1, yb1);
    vector<Float_t> v2 = MergeSubPlanes(va2, vb2);
    vector<Float_t> u2 = MergeSubPlanes(ua2, ub2);
    vector<Float_t> x2 = MergeSubPlanes(xa2, xb2);
    vector<Float_t> y2 = MergeSubPlanes(ya2, yb2);

    vector<TVector3> u1v1 = CreateHitsByTwoPlanes(u1, v1, -5.0);
    vector<TVector3> x1y1 = CreateHitsByTwoPlanes(x1, y1, 5.0);
    vector<TVector3> u2v2 = CreateHitsByTwoPlanes(u2, v2, -5.0);
    vector<TVector3> x2y2 = CreateHitsByTwoPlanes(x2, y2, 5.0);

    CheckHits(u1v1, x1y1);
    CheckHits(x1y1, u1v1);
    CheckHits(u2v2, x2y2);
    CheckHits(x2y2, u2v2);

    CombineHits(u1v1, hitsArray, 0);
    CombineHits(x1y1, hitsArray, 1);
    CombineHits(u2v2, hitsArray, 2);
    CombineHits(x2y2, hitsArray, 3);

    //    cout << "Nuber of input digits = " << digits->GetEntriesFast() << endl;
    //    cout << "Nuber of output hits  = " << hitsArray->GetEntriesFast() << endl;

}


//MWPC

inline TVector3 CalcHitPosByTwoDigits(BmnMwpcDigit* dI, BmnMwpcDigit * dJ, Float_t zPos) {
    Float_t dWireI = dI->GetWireNumber();
    Float_t dWireJ = dJ->GetWireNumber();
    Short_t localPlaneI = dI->GetPlane() % kNPlanes;
    Short_t localPlaneJ = dJ->GetPlane() % kNPlanes;

    Float_t xI = kPlaneWidth * (dWireI * 1.0 / kNWires - 0.5); //local X by wire number
    Float_t xJ = kPlaneWidth * (dWireJ * 1.0 / kNWires - 0.5); //local X by wire number
    Float_t aI; //rotation angle by plane number
    Float_t aJ; //rotation angle by plane number





    switch (localPlaneI) {
        case 2:
            xI = -xI;
            aI = 0.0;
            break;
        case 4:
            xI = xI;
            aI = -kAngleStep;
            break;
        case 3:
            xI = -xI;
            aI = kAngleStep;
            break;
        case 5:
            xI = xI;
            aI = 0.0;
            break;
        case 1:
            xI = -xI;
            aI = -kAngleStep;
            break;
        case 0:
            xI = xI;
            aI = kAngleStep;
            break;
    }

    switch (localPlaneJ) {
        case 2:
            xJ = -xJ;
            aJ = 0.0;
            break;
        case 4:
            xJ = xJ;
            aJ = -kAngleStep;
            break;
        case 3:
            xJ = -xJ;
            aJ = kAngleStep;
            break;
        case 5:
            xJ = xJ;
            aJ = 0.0;
            break;
        case 1:
            xJ = -xJ;
            aJ = -kAngleStep;
            break;
        case 0:
            xJ = xJ;
            aJ = kAngleStep;
            break;
    }
    Float_t xGlob = (xI * Sin(aJ) - xJ * Sin(aI)) / Sin(aJ - aI);
    Float_t yGlob = (xI * Cos(aJ) - xJ * Cos(aI)) / Sin(aJ - aI);
    //    Float_t zGlob = Float_t(min(dI->GetPlane() % kNPlanes + 1, dJ->GetPlane() % kNPlanes + 1) - 3); //average position between two neighbor planes
    TVector3 pos(xGlob, yGlob, zPos);
    return pos;
}

inline vector<TVector3> CreateHitsByTwoPlanes(vector<BmnMwpcDigit*> x, vector<BmnMwpcDigit*> y, Float_t zPos) {
    vector<TVector3> v;
    for (Int_t i = 0; i < x.size(); ++i) {
        BmnMwpcDigit* dI = (BmnMwpcDigit*) x.at(i);
        for (Int_t j = 0; j < y.size(); ++j) {
            BmnMwpcDigit* dJ = (BmnMwpcDigit*) y.at(j);
            if (Abs((Int_t)dI->GetTime() - (Int_t)dJ->GetTime()) > 6) continue;
            v.push_back(CalcHitPosByTwoDigits(dI, dJ, zPos));
        }
    }
    return v;
}

inline Float_t dist(Float_t x1, Float_t y1, Float_t x2, Float_t y2) {
    return TMath::Sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

inline void CreateMwpcHits(vector<TVector3> pos, TClonesArray* hits, Short_t mwpcId) {

    const Float_t errX = kWireStep / TMath::Sqrt(12.0);
    const Float_t errY = kWireStep / TMath::Sqrt(12.0);
    const Float_t errZ = 1.0 / TMath::Sqrt(12.0); // zStep = 1.0 cm
    TVector3 errors = TVector3(errX, errY, errZ); //FIXME!!! Calculate by formulae

    TVector3 globMwpcPos;
    //TGeoVolume* pVolume = gGeoManager->GetVolume("cave");
    //if (pVolume != NULL) {
    //    TString node_name = TString::Format("mwpc%d_0", mwpcId + 1);
    //    TGeoNode* pNode = pVolume->FindNode(node_name);
    //    if (pNode != NULL) {
    //        TGeoMatrix* pMatrix = pNode->GetMatrix();
    //        globMwpcPos = TVector3(pMatrix->GetTranslation()[0], pMatrix->GetTranslation()[1], pMatrix->GetTranslation()[2]);
    //    } else
    //        cout << "MWPC detector (" << node_name << ") wasn't found." << endl;
    //} else
    //    cout << "Cave volume wasn't found." << endl;

    if (pos.size() == 0) return;
    //for (Int_t i = 0; i < pos.size(); ++i) {
    new((*hits)[hits->GetEntriesFast()]) BmnMwpcHit(0, pos.at(0) + globMwpcPos, errors, -1);
    BmnMwpcHit* hit = (BmnMwpcHit*) hits->At(hits->GetEntriesFast() - 1);
    hit->SetMwpcId(mwpcId);
    hit->SetHitId(hits->GetEntriesFast() - 1);
    //}
}

inline void FindNeighbour(BmnMwpcDigit* digiStart, vector<BmnMwpcDigit*> digits, vector<BmnMwpcDigit*> buffer) {
    for (Int_t i = 0; i < digits.size(); ++i) {
        BmnMwpcDigit* digi = digits.at(i);
        if (digi->IsUsed()) continue;
        if (Abs((Int_t) digiStart->GetWireNumber() - (Int_t) digi->GetWireNumber()) < 2) {
            digi->SetUsing(kTRUE);
            buffer.push_back(digi);
            FindNeighbour(digi, digits, buffer);
        }
    }
}

inline vector<BmnMwpcDigit*> CheckDigits(vector<BmnMwpcDigit*> digitsIn) {
    vector<BmnMwpcDigit*> digitsOut;
    if (digitsIn.size() > 3) return digitsOut;

    for (Int_t i = 0; i < digitsIn.size(); ++i) {
        BmnMwpcDigit* dI = digitsIn.at(i);
        vector<BmnMwpcDigit*> buffer;
        buffer.push_back(dI);
        FindNeighbour(dI, digitsIn, buffer);
        if (buffer.size() == 1) {
            digitsOut.push_back(dI); //just copy digit 
        } else {
            Float_t sumWires = 0.0;
            Float_t sumTimes = 0.0;
            for (Int_t j = 0; j < buffer.size(); ++j) {
                BmnMwpcDigit* digi = buffer.at(j);
                sumWires += digi->GetWireNumber();
                sumTimes += digi->GetTime();
            }
            BmnMwpcDigit averDigi(dI->GetPlane(), sumWires / buffer.size(), sumTimes / buffer.size(), dI->GetRefId());
            digitsOut.push_back(&averDigi);
        }
    }


    //    if (digitsIn.size() > 3) return digitsOut;
    //    for (Int_t i = 0; i < digitsIn.size(); ++i) {
    //        BmnMwpcDigit* digitIn = digitsIn.at(i);
    //        Bool_t same = kFALSE;
    //        for (Int_t j = 0; j < digitsOut.size(); ++j) {
    //            BmnMwpcDigit* digitOut = digitsOut.at(j);
    //            //            if (digitIn->GetWireNumber() == digitOut->GetWireNumber()) {
    //            if (Abs(digitIn->GetWireNumber() - digitOut->GetWireNumber()) < 2) {
    //                same = kTRUE;
    //                break;
    //            }
    //        }
    //        if (!same) {
    //            digitsOut.push_back(digitIn);
    //        }
    //    }

    return digitsOut;
}

inline BmnStatus DigitsTimeSelection(TH1F* h_times, Float_t& left, Float_t& right) {
    Float_t pedestal = h_times->GetBinContent(1);
    TF1* shiftedGaus = new TF1("ShiftedGaus", "gaus+[3]", 0.0, 40.0);
    shiftedGaus->SetParameters(pedestal, 20, 5, pedestal);
    h_times->Fit("ShiftedGaus", "SQww");
    Float_t mean = shiftedGaus->GetParameter(1);
    Float_t sigma = shiftedGaus->GetParameter(2);
    left = mean - 3 * sigma;
    right = mean + 3 * sigma;
    if (left > 50 || left < -10 || right > 50 || right < -10) return kBMNERROR;
    else return kBMNSUCCESS;
}

inline vector<TVector3> CreateHitsBy3Planes(vector<BmnMwpcDigit*> x, vector<BmnMwpcDigit*> u, vector<BmnMwpcDigit*> v, Float_t zPos) {
    vector<TVector3> hits;
    vector<TVector3> xu;
    vector<TVector3> xv;
    vector<TVector3> uv;
    if (x.size() == 0 || u.size() == 0 || v.size() == 0) return hits;
    for (Int_t i = 0; i < x.size(); ++i) {
        BmnMwpcDigit* dI = (BmnMwpcDigit*) x.at(i);
        for (Int_t j = 0; j < u.size(); ++j) {
            BmnMwpcDigit* dJ = (BmnMwpcDigit*) u.at(j);
            xu.push_back(CalcHitPosByTwoDigits(dI, dJ, zPos));
        }
    }
    for (Int_t i = 0; i < x.size(); ++i) {
        BmnMwpcDigit* dI = (BmnMwpcDigit*) x.at(i);
        for (Int_t j = 0; j < v.size(); ++j) {
            BmnMwpcDigit* dJ = (BmnMwpcDigit*) v.at(j);
            xv.push_back(CalcHitPosByTwoDigits(dI, dJ, zPos));
        }
    }
    for (Int_t i = 0; i < u.size(); ++i) {
        BmnMwpcDigit* dI = (BmnMwpcDigit*) u.at(i);
        for (Int_t j = 0; j < v.size(); ++j) {
            BmnMwpcDigit* dJ = (BmnMwpcDigit*) v.at(j);
            uv.push_back(CalcHitPosByTwoDigits(dI, dJ, zPos));
        }
    }

    const Float_t thDist = 1.0; //cm
    for (Int_t i = 0; i < xu.size(); ++i) {
        for (Int_t j = 0; j < xv.size(); ++j) {
            if (Abs(xu[i].Mag() - xv[j].Mag()) > thDist) continue;
            for (Int_t k = 0; k < uv.size(); ++k) {
                if (Abs(xu[i].Mag() - uv[k].Mag()) > thDist) continue;
                if (Abs(xv[j].Mag() - uv[k].Mag()) > thDist) continue;
                Float_t xAv = (xu[i].X() + xv[j].X() + uv[k].X()) / 3.0;
                Float_t yAv = (xu[i].Y() + xv[j].Y() + uv[k].Y()) / 3.0;
                hits.push_back(TVector3(xAv, yAv, zPos));
            }
        }
    }
    //printf("hits size = %d\n", (Int_t)hits.size());
    return hits;
}

inline void ProcessMwpcDigits(TClonesArray* digits, TClonesArray * hits) {

    //temporary containers
//    vector<BmnMwpcDigit*> x1_mwpc0;
//    vector<BmnMwpcDigit*> u1_mwpc0;
//    vector<BmnMwpcDigit*> v1_mwpc0;
//    vector<BmnMwpcDigit*> x2_mwpc0;
//    vector<BmnMwpcDigit*> u2_mwpc0;
//    vector<BmnMwpcDigit*> v2_mwpc0;
//    vector<BmnMwpcDigit*> x1_mwpc1;
//    vector<BmnMwpcDigit*> u1_mwpc1;
//    vector<BmnMwpcDigit*> v1_mwpc1;
//    vector<BmnMwpcDigit*> x2_mwpc1;
//    vector<BmnMwpcDigit*> u2_mwpc1;
//    vector<BmnMwpcDigit*> v2_mwpc1;
//    vector<BmnMwpcDigit*> x1_mwpc2;
//    vector<BmnMwpcDigit*> u1_mwpc2;
//    vector<BmnMwpcDigit*> v1_mwpc2;
//    vector<BmnMwpcDigit*> x2_mwpc2;
//    vector<BmnMwpcDigit*> u2_mwpc2;
//    vector<BmnMwpcDigit*> v2_mwpc2;
//    vector<BmnMwpcDigit*> x1_mwpc3;
//    vector<BmnMwpcDigit*> u1_mwpc3;
//    vector<BmnMwpcDigit*> v1_mwpc3;
//    vector<BmnMwpcDigit*> x2_mwpc3;
//    vector<BmnMwpcDigit*> u2_mwpc3;
//    vector<BmnMwpcDigit*> v2_mwpc3;
    
    vector<BmnMwpcDigit*> x1_mwpc[4];
    vector<BmnMwpcDigit*> u1_mwpc[4];
    vector<BmnMwpcDigit*> v1_mwpc[4];
    vector<BmnMwpcDigit*> x2_mwpc[4];
    vector<BmnMwpcDigit*> u2_mwpc[4];
    vector<BmnMwpcDigit*> v2_mwpc[4];

    for (Int_t i = 0; i < digits->GetEntriesFast(); ++i) {
        BmnMwpcDigit* digit = (BmnMwpcDigit*) digits->At(i);
//        Short_t dTime = digit->GetTime();
        
        Short_t pl = digit->GetPlane();
        Short_t st = digit->GetStation();
//        Short_t wn = digit->GetWireNumber();
//        Int_t dRef = digit->GetRefId();

        //if ((dPlane > -1 && dPlane < 6) && (dTime < mwpc0_leftTime || dTime > mwpc0_rightTime)) continue;
        //if ((dPlane > 5 && dPlane < 12) && (dTime < mwpc1_leftTime || dTime > mwpc1_rightTime)) continue;
        //if ((dPlane > 11 && dPlane < 18) && (dTime < mwpc2_leftTime || dTime > mwpc2_rightTime)) continue;

        digit->SetUsing(kFALSE); //not used in hit finding yet
        switch (pl) {
            case 0: u1_mwpc[st].push_back(digit);
                break;
            case 1: v1_mwpc[st].push_back(digit);
                break;
            case 2: x1_mwpc[st].push_back(digit);
                break;
            case 3: u2_mwpc[st].push_back(digit);
                break;
            case 4: v2_mwpc[st].push_back(digit);
                break;
            case 5: x2_mwpc[st].push_back(digit);
                break;
        }
    }

vector<BmnMwpcDigit*> x1_mwpc0_filtered = CheckDigits(x1_mwpc[0]);
    vector<BmnMwpcDigit*> u1_mwpc0_filtered = CheckDigits(u1_mwpc[0]);
    vector<BmnMwpcDigit*> v1_mwpc0_filtered = CheckDigits(v1_mwpc[0]);
    vector<BmnMwpcDigit*> x2_mwpc0_filtered = CheckDigits(x2_mwpc[0]);
    vector<BmnMwpcDigit*> u2_mwpc0_filtered = CheckDigits(u2_mwpc[0]);
    vector<BmnMwpcDigit*> v2_mwpc0_filtered = CheckDigits(v2_mwpc[0]);
    vector<BmnMwpcDigit*> x1_mwpc1_filtered = CheckDigits(x1_mwpc[1]);
    vector<BmnMwpcDigit*> u1_mwpc1_filtered = CheckDigits(u1_mwpc[1]);
    vector<BmnMwpcDigit*> v1_mwpc1_filtered = CheckDigits(v1_mwpc[1]);
    vector<BmnMwpcDigit*> x2_mwpc1_filtered = CheckDigits(x2_mwpc[1]);
    vector<BmnMwpcDigit*> u2_mwpc1_filtered = CheckDigits(u2_mwpc[1]);
    vector<BmnMwpcDigit*> v2_mwpc1_filtered = CheckDigits(v2_mwpc[1]);
    vector<BmnMwpcDigit*> x1_mwpc2_filtered = CheckDigits(x1_mwpc[2]);
    vector<BmnMwpcDigit*> u1_mwpc2_filtered = CheckDigits(u1_mwpc[2]);
    vector<BmnMwpcDigit*> v1_mwpc2_filtered = CheckDigits(v1_mwpc[2]);
    vector<BmnMwpcDigit*> x2_mwpc2_filtered = CheckDigits(x2_mwpc[2]);
    vector<BmnMwpcDigit*> u2_mwpc2_filtered = CheckDigits(u2_mwpc[2]);
    vector<BmnMwpcDigit*> v2_mwpc2_filtered = CheckDigits(v2_mwpc[2]);
    vector<BmnMwpcDigit*> x1_mwpc3_filtered = CheckDigits(x1_mwpc[3]);
    vector<BmnMwpcDigit*> u1_mwpc3_filtered = CheckDigits(u1_mwpc[3]);
    vector<BmnMwpcDigit*> v1_mwpc3_filtered = CheckDigits(v1_mwpc[3]);
    vector<BmnMwpcDigit*> x2_mwpc3_filtered = CheckDigits(x2_mwpc[3]);
    vector<BmnMwpcDigit*> u2_mwpc3_filtered = CheckDigits(u2_mwpc[3]);
    vector<BmnMwpcDigit*> v2_mwpc3_filtered = CheckDigits(v2_mwpc[3]);

    vector<TVector3> xuv1_mwpc0 = CreateHitsBy3Planes(x1_mwpc0_filtered, u1_mwpc0_filtered, v1_mwpc0_filtered, 0.0);
    vector<TVector3> xuv2_mwpc0 = CreateHitsBy3Planes(x2_mwpc0_filtered, u2_mwpc0_filtered, v2_mwpc0_filtered, 0.0);
    vector<TVector3> xuv1_mwpc1 = CreateHitsBy3Planes(x1_mwpc1_filtered, u1_mwpc1_filtered, v1_mwpc1_filtered, 0.0);
    vector<TVector3> xuv2_mwpc1 = CreateHitsBy3Planes(x2_mwpc1_filtered, u2_mwpc1_filtered, v2_mwpc1_filtered, 0.0);
    vector<TVector3> xuv1_mwpc2 = CreateHitsBy3Planes(x1_mwpc2_filtered, u1_mwpc2_filtered, v1_mwpc2_filtered, 0.0);
    vector<TVector3> xuv2_mwpc2 = CreateHitsBy3Planes(x2_mwpc2_filtered, u2_mwpc2_filtered, v2_mwpc2_filtered, 0.0);
    vector<TVector3> xuv1_mwpc3 = CreateHitsBy3Planes(x1_mwpc3_filtered, u1_mwpc3_filtered, v1_mwpc3_filtered, 0.0);
    vector<TVector3> xuv2_mwpc3 = CreateHitsBy3Planes(x2_mwpc3_filtered, u2_mwpc3_filtered, v2_mwpc3_filtered, 0.0);

    CreateMwpcHits(xuv1_mwpc0, hits, 0);
    CreateMwpcHits(xuv2_mwpc0, hits, 0);
    CreateMwpcHits(xuv1_mwpc1, hits, 1);
    CreateMwpcHits(xuv2_mwpc1, hits, 1);
    CreateMwpcHits(xuv1_mwpc2, hits, 2);
    CreateMwpcHits(xuv2_mwpc2, hits, 2);
    CreateMwpcHits(xuv1_mwpc3, hits, 3);
    CreateMwpcHits(xuv2_mwpc3, hits, 3);
}

#endif /* BMNHITFINDERRUN1_H 1*/
#ifndef BMNVERTEXFINDER_H
#define BMNVERTEXFINDER_H

#include "FairTask.h"
#include "TClonesArray.h"
#include "TString.h"
#include "BmnGemTrack.h"
#include "BmnGlobalTrack.h"
#include "BmnGemStripHit.h"
#include "TMath.h"
#include "TVector3.h"
#include "BmnEnums.h"
#include "FairRunAna.h"
#include "FairField.h"
#include "CbmVertex.h"
#include "BmnKalmanFilter.h"
#include "BmnGemStripStationSet.h"
#include "BmnGemStripStationSet_RunSpring2017.h"

using namespace std;

class BmnVertexFinder : public FairTask {
public:

    // Constructors/Destructors ---------
    BmnVertexFinder() {};
    BmnVertexFinder(Int_t period, Bool_t isField);
    virtual ~BmnVertexFinder();

    virtual InitStatus Init();
    virtual void Exec(Option_t* opt);
    virtual void Finish();

    void SetField(Bool_t f) {
        fIsField = f;
    }

    void SetVertexApproximation(TVector3 vertex) {
        fRoughVertex3D = vertex;
    }

    void FindVertexByVirtualPlanes();
    Float_t FindVZByVirtualPlanes(Float_t z_0, Float_t range);

private:

    // Private Data Members ------------
    TString fGlobalTracksBranchName;
    TString fVertexBranchName;

    Int_t fEventNo; // event counter
    Int_t fPeriodId; // event counter
    Int_t fNTracks; // number of reco tracks in event

    BmnGemStripStationSet* fDetector;

    TClonesArray* fGlobalTracksArray;
    TClonesArray* fVertexArray;

    Bool_t fIsField;
    FairField* fField;
    BmnKalmanFilter* fKalman;
    TVector3 fRoughVertex3D;

    ClassDef(BmnVertexFinder, 1);
};


#endif /* BMNVERTEXFINDER_H */



#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"BmnDetectorSetup", payloadCode, "@",
"BmnGlobalTracking", payloadCode, "@",
"BmnTriggersCheck", payloadCode, "@",
"BmnVertexFinder", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__GlobalTrackingDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__GlobalTrackingDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__GlobalTrackingDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__GlobalTrackingDict() {
  TriggerDictionaryInitialization_G__GlobalTrackingDict_Impl();
}
