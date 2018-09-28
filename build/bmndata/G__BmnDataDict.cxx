// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIalexdIbmnroot_devdIbmnrootdIbuilddIbmndatadIG__BmnDataDict

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
#include "CbmBaseHit.h"
#include "CbmHit.h"
#include "CbmPixelHit.h"
#include "CbmDetectorList.h"
#include "CbmStack.h"
#include "CbmMCTrack.h"
#include "CbmStsPoint.h"
#include "CbmStsDetectorId.h"
#include "CbmStsDigi.h"
#include "CbmStsDigiMatch.h"
#include "CbmMCBuffer.h"
#include "CbmMvdPoint.h"
#include "CbmMvdDetectorId.h"
#include "CbmTofPoint.h"
#include "CbmTofHit.h"
#include "CbmTofTrack.h"
#include "CbmEcalPoint.h"
#include "CbmDaqBuffer.h"
#include "CbmDigi.h"
#include "CbmStsDigiLight.h"
#include "CbmStsHit.h"
#include "CbmStsCluster.h"
#include "CbmStsTrack.h"
#include "CbmTrackMatch.h"
#include "CbmMvdHit.h"
#include "CbmMvdHitMatch.h"
#include "CbmGlobalTrack.h"
#include "CbmPsdPoint.h"
#include "CbmPsdHit.h"
#include "CbmPsdDigi.h"
#include "CbmPsdEventData.h"
#include "CbmMvdGeoPar.h"
#include "CbmGeoSttPar.h"
#include "BmnDchHit.h"
#include "BmnDchHitOriginal.h"
#include "BmnGlobalTrack.h"
#include "BmnMwpcHit.h"
#include "BmnTofHit.h"
#include "BmnTrackMatch.h"
#include "BmnMwpcDigit.h"
#include "BmnTof1Digit.h"
#include "BmnTof2Digit.h"
#include "BmnTrigDigit.h"
#include "BmnTrigWaveDigit.h"
#include "BmnDchDigit.h"
#include "BmnEcalDigit.h"
#include "BmnADCDigit.h"
#include "BmnTacquilaDigit.h"
#include "BmnTQDCADCDigit.h"
#include "BmnTDCDigit.h"
#include "BmnHRBDigit.h"
#include "BmnSyncDigit.h"
#include "BmnTTBDigit.h"
#include "BmnMSCDigit.h"
#include "BmnZDCDigit.h"
#include "BmnECALDigit.h"
#include "BmnLANDDigit.h"
#include "BmnCscDigit.h"
#include "BmnEventHeader.h"
#include "BmnRunHeader.h"
#include "BmnCounterTask.h"
#include "BmnIdentifiableTrack.h"
#include "BmnFitNode.h"
#include "BmnEnums.h"
#include "DigiArrays.h"
#include "BmnEventQuality.h"
#include "BmnGemStripHit.h"
#include "BmnGemTrack.h"
#include "cbm/CbmVertex.h"
#include "cbm/CbmStsTrackFinder.h"
#include "cbm/CbmStsTrackFitter.h"
#include "cbm/CbmTofMerger.h"
#include "cbm/CbmTrackMerger.h"
#include "cbm/CbmPrimaryVertexFinder.h"
#include "cbm/CbmFindPrimaryVertex.h"
#include "math/BmnMath.h"
#include "math/BmnMatrixMath.h"
#include "math/FitWLSQ.h"
#include "BmnFileSource.h"
#include "BmnGeoNavigator.h"
#include "BmnTrack.h"
#include "BmnHit.h"
#include "BmnLink.h"
#include "BmnMatch.h"
#include "BmnTrigInfo.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_CbmBaseHit(void *p);
   static void deleteArray_CbmBaseHit(void *p);
   static void destruct_CbmBaseHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmBaseHit*)
   {
      ::CbmBaseHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmBaseHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmBaseHit", ::CbmBaseHit::Class_Version(), "", 38,
                  typeid(::CbmBaseHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmBaseHit::Dictionary, isa_proxy, 4,
                  sizeof(::CbmBaseHit) );
      instance.SetDelete(&delete_CbmBaseHit);
      instance.SetDeleteArray(&deleteArray_CbmBaseHit);
      instance.SetDestructor(&destruct_CbmBaseHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmBaseHit*)
   {
      return GenerateInitInstanceLocal((::CbmBaseHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmBaseHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_CbmHit(void *p);
   static void deleteArray_CbmHit(void *p);
   static void destruct_CbmHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmHit*)
   {
      ::CbmHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmHit", ::CbmHit::Class_Version(), "", 126,
                  typeid(::CbmHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmHit::Dictionary, isa_proxy, 4,
                  sizeof(::CbmHit) );
      instance.SetDelete(&delete_CbmHit);
      instance.SetDeleteArray(&deleteArray_CbmHit);
      instance.SetDestructor(&destruct_CbmHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmHit*)
   {
      return GenerateInitInstanceLocal((::CbmHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmPixelHit(void *p = 0);
   static void *newArray_CbmPixelHit(Long_t size, void *p);
   static void delete_CbmPixelHit(void *p);
   static void deleteArray_CbmPixelHit(void *p);
   static void destruct_CbmPixelHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmPixelHit*)
   {
      ::CbmPixelHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmPixelHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmPixelHit", ::CbmPixelHit::Class_Version(), "", 190,
                  typeid(::CbmPixelHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmPixelHit::Dictionary, isa_proxy, 4,
                  sizeof(::CbmPixelHit) );
      instance.SetNew(&new_CbmPixelHit);
      instance.SetNewArray(&newArray_CbmPixelHit);
      instance.SetDelete(&delete_CbmPixelHit);
      instance.SetDeleteArray(&deleteArray_CbmPixelHit);
      instance.SetDestructor(&destruct_CbmPixelHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmPixelHit*)
   {
      return GenerateInitInstanceLocal((::CbmPixelHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmPixelHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmDetectorList(void *p = 0);
   static void *newArray_CbmDetectorList(Long_t size, void *p);
   static void delete_CbmDetectorList(void *p);
   static void deleteArray_CbmDetectorList(void *p);
   static void destruct_CbmDetectorList(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmDetectorList*)
   {
      ::CbmDetectorList *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmDetectorList >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmDetectorList", ::CbmDetectorList::Class_Version(), "", 342,
                  typeid(::CbmDetectorList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmDetectorList::Dictionary, isa_proxy, 4,
                  sizeof(::CbmDetectorList) );
      instance.SetNew(&new_CbmDetectorList);
      instance.SetNewArray(&newArray_CbmDetectorList);
      instance.SetDelete(&delete_CbmDetectorList);
      instance.SetDeleteArray(&deleteArray_CbmDetectorList);
      instance.SetDestructor(&destruct_CbmDetectorList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmDetectorList*)
   {
      return GenerateInitInstanceLocal((::CbmDetectorList*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmDetectorList*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStack(void *p = 0);
   static void *newArray_CbmStack(Long_t size, void *p);
   static void delete_CbmStack(void *p);
   static void deleteArray_CbmStack(void *p);
   static void destruct_CbmStack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStack*)
   {
      ::CbmStack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStack", ::CbmStack::Class_Version(), "", 418,
                  typeid(::CbmStack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStack::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStack) );
      instance.SetNew(&new_CbmStack);
      instance.SetNewArray(&newArray_CbmStack);
      instance.SetDelete(&delete_CbmStack);
      instance.SetDeleteArray(&deleteArray_CbmStack);
      instance.SetDestructor(&destruct_CbmStack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStack*)
   {
      return GenerateInitInstanceLocal((::CbmStack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStack*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmMCTrack(void *p = 0);
   static void *newArray_CbmMCTrack(Long_t size, void *p);
   static void delete_CbmMCTrack(void *p);
   static void deleteArray_CbmMCTrack(void *p);
   static void destruct_CbmMCTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmMCTrack*)
   {
      ::CbmMCTrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmMCTrack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmMCTrack", ::CbmMCTrack::Class_Version(), "", 652,
                  typeid(::CbmMCTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmMCTrack::Dictionary, isa_proxy, 4,
                  sizeof(::CbmMCTrack) );
      instance.SetNew(&new_CbmMCTrack);
      instance.SetNewArray(&newArray_CbmMCTrack);
      instance.SetDelete(&delete_CbmMCTrack);
      instance.SetDeleteArray(&deleteArray_CbmMCTrack);
      instance.SetDestructor(&destruct_CbmMCTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmMCTrack*)
   {
      return GenerateInitInstanceLocal((::CbmMCTrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmMCTrack*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsPoint(void *p = 0);
   static void *newArray_CbmStsPoint(Long_t size, void *p);
   static void delete_CbmStsPoint(void *p);
   static void deleteArray_CbmStsPoint(void *p);
   static void destruct_CbmStsPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsPoint*)
   {
      ::CbmStsPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsPoint", ::CbmStsPoint::Class_Version(), "", 795,
                  typeid(::CbmStsPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsPoint::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsPoint) );
      instance.SetNew(&new_CbmStsPoint);
      instance.SetNewArray(&newArray_CbmStsPoint);
      instance.SetDelete(&delete_CbmStsPoint);
      instance.SetDeleteArray(&deleteArray_CbmStsPoint);
      instance.SetDestructor(&destruct_CbmStsPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsPoint*)
   {
      return GenerateInitInstanceLocal((::CbmStsPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsPoint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsDetectorId(void *p = 0);
   static void *newArray_CbmStsDetectorId(Long_t size, void *p);
   static void delete_CbmStsDetectorId(void *p);
   static void deleteArray_CbmStsDetectorId(void *p);
   static void destruct_CbmStsDetectorId(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsDetectorId*)
   {
      ::CbmStsDetectorId *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsDetectorId >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsDetectorId", ::CbmStsDetectorId::Class_Version(), "", 940,
                  typeid(::CbmStsDetectorId), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsDetectorId::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsDetectorId) );
      instance.SetNew(&new_CbmStsDetectorId);
      instance.SetNewArray(&newArray_CbmStsDetectorId);
      instance.SetDelete(&delete_CbmStsDetectorId);
      instance.SetDeleteArray(&deleteArray_CbmStsDetectorId);
      instance.SetDestructor(&destruct_CbmStsDetectorId);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsDetectorId*)
   {
      return GenerateInitInstanceLocal((::CbmStsDetectorId*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsDetectorId*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsDigi(void *p = 0);
   static void *newArray_CbmStsDigi(Long_t size, void *p);
   static void delete_CbmStsDigi(void *p);
   static void deleteArray_CbmStsDigi(void *p);
   static void destruct_CbmStsDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsDigi*)
   {
      ::CbmStsDigi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsDigi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsDigi", ::CbmStsDigi::Class_Version(), "", 1060,
                  typeid(::CbmStsDigi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsDigi::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsDigi) );
      instance.SetNew(&new_CbmStsDigi);
      instance.SetNewArray(&newArray_CbmStsDigi);
      instance.SetDelete(&delete_CbmStsDigi);
      instance.SetDeleteArray(&deleteArray_CbmStsDigi);
      instance.SetDestructor(&destruct_CbmStsDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsDigi*)
   {
      return GenerateInitInstanceLocal((::CbmStsDigi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsDigi*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsDigiMatch(void *p = 0);
   static void *newArray_CbmStsDigiMatch(Long_t size, void *p);
   static void delete_CbmStsDigiMatch(void *p);
   static void deleteArray_CbmStsDigiMatch(void *p);
   static void destruct_CbmStsDigiMatch(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsDigiMatch*)
   {
      ::CbmStsDigiMatch *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsDigiMatch >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsDigiMatch", ::CbmStsDigiMatch::Class_Version(), "", 1192,
                  typeid(::CbmStsDigiMatch), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsDigiMatch::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsDigiMatch) );
      instance.SetNew(&new_CbmStsDigiMatch);
      instance.SetNewArray(&newArray_CbmStsDigiMatch);
      instance.SetDelete(&delete_CbmStsDigiMatch);
      instance.SetDeleteArray(&deleteArray_CbmStsDigiMatch);
      instance.SetDestructor(&destruct_CbmStsDigiMatch);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsDigiMatch*)
   {
      return GenerateInitInstanceLocal((::CbmStsDigiMatch*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsDigiMatch*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmMvdDetectorId(void *p = 0);
   static void *newArray_CbmMvdDetectorId(Long_t size, void *p);
   static void delete_CbmMvdDetectorId(void *p);
   static void deleteArray_CbmMvdDetectorId(void *p);
   static void destruct_CbmMvdDetectorId(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmMvdDetectorId*)
   {
      ::CbmMvdDetectorId *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmMvdDetectorId >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmMvdDetectorId", ::CbmMvdDetectorId::Class_Version(), "CbmMvdDetectorId.h", 33,
                  typeid(::CbmMvdDetectorId), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmMvdDetectorId::Dictionary, isa_proxy, 4,
                  sizeof(::CbmMvdDetectorId) );
      instance.SetNew(&new_CbmMvdDetectorId);
      instance.SetNewArray(&newArray_CbmMvdDetectorId);
      instance.SetDelete(&delete_CbmMvdDetectorId);
      instance.SetDeleteArray(&deleteArray_CbmMvdDetectorId);
      instance.SetDestructor(&destruct_CbmMvdDetectorId);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmMvdDetectorId*)
   {
      return GenerateInitInstanceLocal((::CbmMvdDetectorId*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmMvdDetectorId*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmMvdPoint(void *p = 0);
   static void *newArray_CbmMvdPoint(Long_t size, void *p);
   static void delete_CbmMvdPoint(void *p);
   static void deleteArray_CbmMvdPoint(void *p);
   static void destruct_CbmMvdPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmMvdPoint*)
   {
      ::CbmMvdPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmMvdPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmMvdPoint", ::CbmMvdPoint::Class_Version(), "CbmMvdPoint.h", 27,
                  typeid(::CbmMvdPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmMvdPoint::Dictionary, isa_proxy, 4,
                  sizeof(::CbmMvdPoint) );
      instance.SetNew(&new_CbmMvdPoint);
      instance.SetNewArray(&newArray_CbmMvdPoint);
      instance.SetDelete(&delete_CbmMvdPoint);
      instance.SetDeleteArray(&deleteArray_CbmMvdPoint);
      instance.SetDestructor(&destruct_CbmMvdPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmMvdPoint*)
   {
      return GenerateInitInstanceLocal((::CbmMvdPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmMvdPoint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmTofPoint(void *p = 0);
   static void *newArray_CbmTofPoint(Long_t size, void *p);
   static void delete_CbmTofPoint(void *p);
   static void deleteArray_CbmTofPoint(void *p);
   static void destruct_CbmTofPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmTofPoint*)
   {
      ::CbmTofPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmTofPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmTofPoint", ::CbmTofPoint::Class_Version(), "CbmTofPoint.h", 22,
                  typeid(::CbmTofPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmTofPoint::Dictionary, isa_proxy, 4,
                  sizeof(::CbmTofPoint) );
      instance.SetNew(&new_CbmTofPoint);
      instance.SetNewArray(&newArray_CbmTofPoint);
      instance.SetDelete(&delete_CbmTofPoint);
      instance.SetDeleteArray(&deleteArray_CbmTofPoint);
      instance.SetDestructor(&destruct_CbmTofPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmTofPoint*)
   {
      return GenerateInitInstanceLocal((::CbmTofPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmTofPoint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmPsdPoint(void *p = 0);
   static void *newArray_CbmPsdPoint(Long_t size, void *p);
   static void delete_CbmPsdPoint(void *p);
   static void deleteArray_CbmPsdPoint(void *p);
   static void destruct_CbmPsdPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmPsdPoint*)
   {
      ::CbmPsdPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmPsdPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmPsdPoint", ::CbmPsdPoint::Class_Version(), "CbmPsdPoint.h", 21,
                  typeid(::CbmPsdPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmPsdPoint::Dictionary, isa_proxy, 4,
                  sizeof(::CbmPsdPoint) );
      instance.SetNew(&new_CbmPsdPoint);
      instance.SetNewArray(&newArray_CbmPsdPoint);
      instance.SetDelete(&delete_CbmPsdPoint);
      instance.SetDeleteArray(&deleteArray_CbmPsdPoint);
      instance.SetDestructor(&destruct_CbmPsdPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmPsdPoint*)
   {
      return GenerateInitInstanceLocal((::CbmPsdPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmPsdPoint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *CbmMCBuffer_Dictionary();
   static void CbmMCBuffer_TClassManip(TClass*);
   static void delete_CbmMCBuffer(void *p);
   static void deleteArray_CbmMCBuffer(void *p);
   static void destruct_CbmMCBuffer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmMCBuffer*)
   {
      ::CbmMCBuffer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::CbmMCBuffer));
      static ::ROOT::TGenericClassInfo 
         instance("CbmMCBuffer", "", 1267,
                  typeid(::CbmMCBuffer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &CbmMCBuffer_Dictionary, isa_proxy, 4,
                  sizeof(::CbmMCBuffer) );
      instance.SetDelete(&delete_CbmMCBuffer);
      instance.SetDeleteArray(&deleteArray_CbmMCBuffer);
      instance.SetDestructor(&destruct_CbmMCBuffer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmMCBuffer*)
   {
      return GenerateInitInstanceLocal((::CbmMCBuffer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmMCBuffer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *CbmMCBuffer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::CbmMCBuffer*)0x0)->GetClass();
      CbmMCBuffer_TClassManip(theClass);
   return theClass;
   }

   static void CbmMCBuffer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnHit(void *p = 0);
   static void *newArray_BmnHit(Long_t size, void *p);
   static void delete_BmnHit(void *p);
   static void deleteArray_BmnHit(void *p);
   static void destruct_BmnHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnHit*)
   {
      ::BmnHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnHit", ::BmnHit::Class_Version(), "BmnHit.h", 19,
                  typeid(::BmnHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnHit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnHit) );
      instance.SetNew(&new_BmnHit);
      instance.SetNewArray(&newArray_BmnHit);
      instance.SetDelete(&delete_BmnHit);
      instance.SetDeleteArray(&deleteArray_BmnHit);
      instance.SetDestructor(&destruct_BmnHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnHit*)
   {
      return GenerateInitInstanceLocal((::BmnHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmTofHit(void *p = 0);
   static void *newArray_CbmTofHit(Long_t size, void *p);
   static void delete_CbmTofHit(void *p);
   static void deleteArray_CbmTofHit(void *p);
   static void destruct_CbmTofHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmTofHit*)
   {
      ::CbmTofHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmTofHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmTofHit", ::CbmTofHit::Class_Version(), "", 1685,
                  typeid(::CbmTofHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmTofHit::Dictionary, isa_proxy, 4,
                  sizeof(::CbmTofHit) );
      instance.SetNew(&new_CbmTofHit);
      instance.SetNewArray(&newArray_CbmTofHit);
      instance.SetDelete(&delete_CbmTofHit);
      instance.SetDeleteArray(&deleteArray_CbmTofHit);
      instance.SetDestructor(&destruct_CbmTofHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmTofHit*)
   {
      return GenerateInitInstanceLocal((::CbmTofHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmTofHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmTofTrack(void *p = 0);
   static void *newArray_CbmTofTrack(Long_t size, void *p);
   static void delete_CbmTofTrack(void *p);
   static void deleteArray_CbmTofTrack(void *p);
   static void destruct_CbmTofTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmTofTrack*)
   {
      ::CbmTofTrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmTofTrack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmTofTrack", ::CbmTofTrack::Class_Version(), "", 1763,
                  typeid(::CbmTofTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmTofTrack::Dictionary, isa_proxy, 4,
                  sizeof(::CbmTofTrack) );
      instance.SetNew(&new_CbmTofTrack);
      instance.SetNewArray(&newArray_CbmTofTrack);
      instance.SetDelete(&delete_CbmTofTrack);
      instance.SetDeleteArray(&deleteArray_CbmTofTrack);
      instance.SetDestructor(&destruct_CbmTofTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmTofTrack*)
   {
      return GenerateInitInstanceLocal((::CbmTofTrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmTofTrack*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmEcalPoint(void *p = 0);
   static void *newArray_CbmEcalPoint(Long_t size, void *p);
   static void delete_CbmEcalPoint(void *p);
   static void deleteArray_CbmEcalPoint(void *p);
   static void destruct_CbmEcalPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmEcalPoint*)
   {
      ::CbmEcalPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmEcalPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmEcalPoint", ::CbmEcalPoint::Class_Version(), "", 1880,
                  typeid(::CbmEcalPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmEcalPoint::Dictionary, isa_proxy, 4,
                  sizeof(::CbmEcalPoint) );
      instance.SetNew(&new_CbmEcalPoint);
      instance.SetNewArray(&newArray_CbmEcalPoint);
      instance.SetDelete(&delete_CbmEcalPoint);
      instance.SetDeleteArray(&deleteArray_CbmEcalPoint);
      instance.SetDestructor(&destruct_CbmEcalPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmEcalPoint*)
   {
      return GenerateInitInstanceLocal((::CbmEcalPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmEcalPoint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_CbmDigi(void *p);
   static void deleteArray_CbmDigi(void *p);
   static void destruct_CbmDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmDigi*)
   {
      ::CbmDigi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmDigi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmDigi", ::CbmDigi::Class_Version(), "CbmDigi.h", 43,
                  typeid(::CbmDigi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmDigi::Dictionary, isa_proxy, 4,
                  sizeof(::CbmDigi) );
      instance.SetDelete(&delete_CbmDigi);
      instance.SetDeleteArray(&deleteArray_CbmDigi);
      instance.SetDestructor(&destruct_CbmDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmDigi*)
   {
      return GenerateInitInstanceLocal((::CbmDigi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmDigi*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *CbmDaqBuffer_Dictionary();
   static void CbmDaqBuffer_TClassManip(TClass*);
   static void delete_CbmDaqBuffer(void *p);
   static void deleteArray_CbmDaqBuffer(void *p);
   static void destruct_CbmDaqBuffer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmDaqBuffer*)
   {
      ::CbmDaqBuffer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::CbmDaqBuffer));
      static ::ROOT::TGenericClassInfo 
         instance("CbmDaqBuffer", "", 1957,
                  typeid(::CbmDaqBuffer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &CbmDaqBuffer_Dictionary, isa_proxy, 4,
                  sizeof(::CbmDaqBuffer) );
      instance.SetDelete(&delete_CbmDaqBuffer);
      instance.SetDeleteArray(&deleteArray_CbmDaqBuffer);
      instance.SetDestructor(&destruct_CbmDaqBuffer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmDaqBuffer*)
   {
      return GenerateInitInstanceLocal((::CbmDaqBuffer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmDaqBuffer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *CbmDaqBuffer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::CbmDaqBuffer*)0x0)->GetClass();
      CbmDaqBuffer_TClassManip(theClass);
   return theClass;
   }

   static void CbmDaqBuffer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsDigiLight(void *p = 0);
   static void *newArray_CbmStsDigiLight(Long_t size, void *p);
   static void delete_CbmStsDigiLight(void *p);
   static void deleteArray_CbmStsDigiLight(void *p);
   static void destruct_CbmStsDigiLight(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsDigiLight*)
   {
      ::CbmStsDigiLight *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsDigiLight >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsDigiLight", ::CbmStsDigiLight::Class_Version(), "", 2192,
                  typeid(::CbmStsDigiLight), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsDigiLight::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsDigiLight) );
      instance.SetNew(&new_CbmStsDigiLight);
      instance.SetNewArray(&newArray_CbmStsDigiLight);
      instance.SetDelete(&delete_CbmStsDigiLight);
      instance.SetDeleteArray(&deleteArray_CbmStsDigiLight);
      instance.SetDestructor(&destruct_CbmStsDigiLight);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsDigiLight*)
   {
      return GenerateInitInstanceLocal((::CbmStsDigiLight*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsDigiLight*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsHit(void *p = 0);
   static void *newArray_CbmStsHit(Long_t size, void *p);
   static void delete_CbmStsHit(void *p);
   static void deleteArray_CbmStsHit(void *p);
   static void destruct_CbmStsHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsHit*)
   {
      ::CbmStsHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsHit", ::CbmStsHit::Class_Version(), "", 2320,
                  typeid(::CbmStsHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsHit::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsHit) );
      instance.SetNew(&new_CbmStsHit);
      instance.SetNewArray(&newArray_CbmStsHit);
      instance.SetDelete(&delete_CbmStsHit);
      instance.SetDeleteArray(&deleteArray_CbmStsHit);
      instance.SetDestructor(&destruct_CbmStsHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsHit*)
   {
      return GenerateInitInstanceLocal((::CbmStsHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsCluster(void *p = 0);
   static void *newArray_CbmStsCluster(Long_t size, void *p);
   static void delete_CbmStsCluster(void *p);
   static void deleteArray_CbmStsCluster(void *p);
   static void destruct_CbmStsCluster(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsCluster*)
   {
      ::CbmStsCluster *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsCluster >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsCluster", ::CbmStsCluster::Class_Version(), "", 2430,
                  typeid(::CbmStsCluster), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsCluster::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsCluster) );
      instance.SetNew(&new_CbmStsCluster);
      instance.SetNewArray(&newArray_CbmStsCluster);
      instance.SetDelete(&delete_CbmStsCluster);
      instance.SetDeleteArray(&deleteArray_CbmStsCluster);
      instance.SetDestructor(&destruct_CbmStsCluster);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsCluster*)
   {
      return GenerateInitInstanceLocal((::CbmStsCluster*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsCluster*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsTrack(void *p = 0);
   static void *newArray_CbmStsTrack(Long_t size, void *p);
   static void delete_CbmStsTrack(void *p);
   static void deleteArray_CbmStsTrack(void *p);
   static void destruct_CbmStsTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsTrack*)
   {
      ::CbmStsTrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsTrack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsTrack", ::CbmStsTrack::Class_Version(), "", 2523,
                  typeid(::CbmStsTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsTrack::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsTrack) );
      instance.SetNew(&new_CbmStsTrack);
      instance.SetNewArray(&newArray_CbmStsTrack);
      instance.SetDelete(&delete_CbmStsTrack);
      instance.SetDeleteArray(&deleteArray_CbmStsTrack);
      instance.SetDestructor(&destruct_CbmStsTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsTrack*)
   {
      return GenerateInitInstanceLocal((::CbmStsTrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsTrack*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmTrackMatch(void *p = 0);
   static void *newArray_CbmTrackMatch(Long_t size, void *p);
   static void delete_CbmTrackMatch(void *p);
   static void deleteArray_CbmTrackMatch(void *p);
   static void destruct_CbmTrackMatch(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmTrackMatch*)
   {
      ::CbmTrackMatch *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmTrackMatch >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmTrackMatch", ::CbmTrackMatch::Class_Version(), "", 2653,
                  typeid(::CbmTrackMatch), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmTrackMatch::Dictionary, isa_proxy, 4,
                  sizeof(::CbmTrackMatch) );
      instance.SetNew(&new_CbmTrackMatch);
      instance.SetNewArray(&newArray_CbmTrackMatch);
      instance.SetDelete(&delete_CbmTrackMatch);
      instance.SetDeleteArray(&deleteArray_CbmTrackMatch);
      instance.SetDestructor(&destruct_CbmTrackMatch);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmTrackMatch*)
   {
      return GenerateInitInstanceLocal((::CbmTrackMatch*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmTrackMatch*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmMvdHit(void *p = 0);
   static void *newArray_CbmMvdHit(Long_t size, void *p);
   static void delete_CbmMvdHit(void *p);
   static void deleteArray_CbmMvdHit(void *p);
   static void destruct_CbmMvdHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmMvdHit*)
   {
      ::CbmMvdHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmMvdHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmMvdHit", ::CbmMvdHit::Class_Version(), "", 2748,
                  typeid(::CbmMvdHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmMvdHit::Dictionary, isa_proxy, 4,
                  sizeof(::CbmMvdHit) );
      instance.SetNew(&new_CbmMvdHit);
      instance.SetNewArray(&newArray_CbmMvdHit);
      instance.SetDelete(&delete_CbmMvdHit);
      instance.SetDeleteArray(&deleteArray_CbmMvdHit);
      instance.SetDestructor(&destruct_CbmMvdHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmMvdHit*)
   {
      return GenerateInitInstanceLocal((::CbmMvdHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmMvdHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmMvdHitMatch(void *p = 0);
   static void *newArray_CbmMvdHitMatch(Long_t size, void *p);
   static void delete_CbmMvdHitMatch(void *p);
   static void deleteArray_CbmMvdHitMatch(void *p);
   static void destruct_CbmMvdHitMatch(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmMvdHitMatch*)
   {
      ::CbmMvdHitMatch *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmMvdHitMatch >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmMvdHitMatch", ::CbmMvdHitMatch::Class_Version(), "", 2815,
                  typeid(::CbmMvdHitMatch), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmMvdHitMatch::Dictionary, isa_proxy, 4,
                  sizeof(::CbmMvdHitMatch) );
      instance.SetNew(&new_CbmMvdHitMatch);
      instance.SetNewArray(&newArray_CbmMvdHitMatch);
      instance.SetDelete(&delete_CbmMvdHitMatch);
      instance.SetDeleteArray(&deleteArray_CbmMvdHitMatch);
      instance.SetDestructor(&destruct_CbmMvdHitMatch);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmMvdHitMatch*)
   {
      return GenerateInitInstanceLocal((::CbmMvdHitMatch*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmMvdHitMatch*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *BmnFitNode_Dictionary();
   static void BmnFitNode_TClassManip(TClass*);
   static void *new_BmnFitNode(void *p = 0);
   static void *newArray_BmnFitNode(Long_t size, void *p);
   static void delete_BmnFitNode(void *p);
   static void deleteArray_BmnFitNode(void *p);
   static void destruct_BmnFitNode(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnFitNode*)
   {
      ::BmnFitNode *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BmnFitNode));
      static ::ROOT::TGenericClassInfo 
         instance("BmnFitNode", "BmnFitNode.h", 22,
                  typeid(::BmnFitNode), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BmnFitNode_Dictionary, isa_proxy, 4,
                  sizeof(::BmnFitNode) );
      instance.SetNew(&new_BmnFitNode);
      instance.SetNewArray(&newArray_BmnFitNode);
      instance.SetDelete(&delete_BmnFitNode);
      instance.SetDeleteArray(&deleteArray_BmnFitNode);
      instance.SetDestructor(&destruct_BmnFitNode);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnFitNode*)
   {
      return GenerateInitInstanceLocal((::BmnFitNode*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnFitNode*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BmnFitNode_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BmnFitNode*)0x0)->GetClass();
      BmnFitNode_TClassManip(theClass);
   return theClass;
   }

   static void BmnFitNode_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmGlobalTrack(void *p = 0);
   static void *newArray_CbmGlobalTrack(Long_t size, void *p);
   static void delete_CbmGlobalTrack(void *p);
   static void deleteArray_CbmGlobalTrack(void *p);
   static void destruct_CbmGlobalTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmGlobalTrack*)
   {
      ::CbmGlobalTrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmGlobalTrack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmGlobalTrack", ::CbmGlobalTrack::Class_Version(), "", 2924,
                  typeid(::CbmGlobalTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmGlobalTrack::Dictionary, isa_proxy, 4,
                  sizeof(::CbmGlobalTrack) );
      instance.SetNew(&new_CbmGlobalTrack);
      instance.SetNewArray(&newArray_CbmGlobalTrack);
      instance.SetDelete(&delete_CbmGlobalTrack);
      instance.SetDeleteArray(&deleteArray_CbmGlobalTrack);
      instance.SetDestructor(&destruct_CbmGlobalTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmGlobalTrack*)
   {
      return GenerateInitInstanceLocal((::CbmGlobalTrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmGlobalTrack*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmPsdHit(void *p = 0);
   static void *newArray_CbmPsdHit(Long_t size, void *p);
   static void delete_CbmPsdHit(void *p);
   static void deleteArray_CbmPsdHit(void *p);
   static void destruct_CbmPsdHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmPsdHit*)
   {
      ::CbmPsdHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmPsdHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmPsdHit", ::CbmPsdHit::Class_Version(), "", 3105,
                  typeid(::CbmPsdHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmPsdHit::Dictionary, isa_proxy, 4,
                  sizeof(::CbmPsdHit) );
      instance.SetNew(&new_CbmPsdHit);
      instance.SetNewArray(&newArray_CbmPsdHit);
      instance.SetDelete(&delete_CbmPsdHit);
      instance.SetDeleteArray(&deleteArray_CbmPsdHit);
      instance.SetDestructor(&destruct_CbmPsdHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmPsdHit*)
   {
      return GenerateInitInstanceLocal((::CbmPsdHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmPsdHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmPsdDigi(void *p = 0);
   static void *newArray_CbmPsdDigi(Long_t size, void *p);
   static void delete_CbmPsdDigi(void *p);
   static void deleteArray_CbmPsdDigi(void *p);
   static void destruct_CbmPsdDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmPsdDigi*)
   {
      ::CbmPsdDigi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmPsdDigi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmPsdDigi", ::CbmPsdDigi::Class_Version(), "", 3170,
                  typeid(::CbmPsdDigi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmPsdDigi::Dictionary, isa_proxy, 4,
                  sizeof(::CbmPsdDigi) );
      instance.SetNew(&new_CbmPsdDigi);
      instance.SetNewArray(&newArray_CbmPsdDigi);
      instance.SetDelete(&delete_CbmPsdDigi);
      instance.SetDeleteArray(&deleteArray_CbmPsdDigi);
      instance.SetDestructor(&destruct_CbmPsdDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmPsdDigi*)
   {
      return GenerateInitInstanceLocal((::CbmPsdDigi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmPsdDigi*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmPsdEventData(void *p = 0);
   static void *newArray_CbmPsdEventData(Long_t size, void *p);
   static void delete_CbmPsdEventData(void *p);
   static void deleteArray_CbmPsdEventData(void *p);
   static void destruct_CbmPsdEventData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmPsdEventData*)
   {
      ::CbmPsdEventData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmPsdEventData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmPsdEventData", ::CbmPsdEventData::Class_Version(), "", 3233,
                  typeid(::CbmPsdEventData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmPsdEventData::Dictionary, isa_proxy, 4,
                  sizeof(::CbmPsdEventData) );
      instance.SetNew(&new_CbmPsdEventData);
      instance.SetNewArray(&newArray_CbmPsdEventData);
      instance.SetDelete(&delete_CbmPsdEventData);
      instance.SetDeleteArray(&deleteArray_CbmPsdEventData);
      instance.SetDestructor(&destruct_CbmPsdEventData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmPsdEventData*)
   {
      return GenerateInitInstanceLocal((::CbmPsdEventData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmPsdEventData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmMvdGeoPar(void *p = 0);
   static void *newArray_CbmMvdGeoPar(Long_t size, void *p);
   static void delete_CbmMvdGeoPar(void *p);
   static void deleteArray_CbmMvdGeoPar(void *p);
   static void destruct_CbmMvdGeoPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmMvdGeoPar*)
   {
      ::CbmMvdGeoPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmMvdGeoPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmMvdGeoPar", ::CbmMvdGeoPar::Class_Version(), "", 3310,
                  typeid(::CbmMvdGeoPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmMvdGeoPar::Dictionary, isa_proxy, 4,
                  sizeof(::CbmMvdGeoPar) );
      instance.SetNew(&new_CbmMvdGeoPar);
      instance.SetNewArray(&newArray_CbmMvdGeoPar);
      instance.SetDelete(&delete_CbmMvdGeoPar);
      instance.SetDeleteArray(&deleteArray_CbmMvdGeoPar);
      instance.SetDestructor(&destruct_CbmMvdGeoPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmMvdGeoPar*)
   {
      return GenerateInitInstanceLocal((::CbmMvdGeoPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmMvdGeoPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmGeoSttPar(void *p = 0);
   static void *newArray_CbmGeoSttPar(Long_t size, void *p);
   static void delete_CbmGeoSttPar(void *p);
   static void deleteArray_CbmGeoSttPar(void *p);
   static void destruct_CbmGeoSttPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmGeoSttPar*)
   {
      ::CbmGeoSttPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmGeoSttPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmGeoSttPar", ::CbmGeoSttPar::Class_Version(), "", 3364,
                  typeid(::CbmGeoSttPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmGeoSttPar::Dictionary, isa_proxy, 4,
                  sizeof(::CbmGeoSttPar) );
      instance.SetNew(&new_CbmGeoSttPar);
      instance.SetNewArray(&newArray_CbmGeoSttPar);
      instance.SetDelete(&delete_CbmGeoSttPar);
      instance.SetDeleteArray(&deleteArray_CbmGeoSttPar);
      instance.SetDestructor(&destruct_CbmGeoSttPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmGeoSttPar*)
   {
      return GenerateInitInstanceLocal((::CbmGeoSttPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmGeoSttPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnDchHit(void *p = 0);
   static void *newArray_BmnDchHit(Long_t size, void *p);
   static void delete_BmnDchHit(void *p);
   static void deleteArray_BmnDchHit(void *p);
   static void destruct_BmnDchHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnDchHit*)
   {
      ::BmnDchHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnDchHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnDchHit", ::BmnDchHit::Class_Version(), "", 3397,
                  typeid(::BmnDchHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnDchHit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnDchHit) );
      instance.SetNew(&new_BmnDchHit);
      instance.SetNewArray(&newArray_BmnDchHit);
      instance.SetDelete(&delete_BmnDchHit);
      instance.SetDeleteArray(&deleteArray_BmnDchHit);
      instance.SetDestructor(&destruct_BmnDchHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnDchHit*)
   {
      return GenerateInitInstanceLocal((::BmnDchHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnDchHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnDchHitOriginal(void *p = 0);
   static void *newArray_BmnDchHitOriginal(Long_t size, void *p);
   static void delete_BmnDchHitOriginal(void *p);
   static void deleteArray_BmnDchHitOriginal(void *p);
   static void destruct_BmnDchHitOriginal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnDchHitOriginal*)
   {
      ::BmnDchHitOriginal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnDchHitOriginal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnDchHitOriginal", ::BmnDchHitOriginal::Class_Version(), "", 3495,
                  typeid(::BmnDchHitOriginal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnDchHitOriginal::Dictionary, isa_proxy, 4,
                  sizeof(::BmnDchHitOriginal) );
      instance.SetNew(&new_BmnDchHitOriginal);
      instance.SetNewArray(&newArray_BmnDchHitOriginal);
      instance.SetDelete(&delete_BmnDchHitOriginal);
      instance.SetDeleteArray(&deleteArray_BmnDchHitOriginal);
      instance.SetDestructor(&destruct_BmnDchHitOriginal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnDchHitOriginal*)
   {
      return GenerateInitInstanceLocal((::BmnDchHitOriginal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnDchHitOriginal*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTrack(void *p = 0);
   static void *newArray_BmnTrack(Long_t size, void *p);
   static void delete_BmnTrack(void *p);
   static void deleteArray_BmnTrack(void *p);
   static void destruct_BmnTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTrack*)
   {
      ::BmnTrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTrack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTrack", ::BmnTrack::Class_Version(), "BmnTrack.h", 18,
                  typeid(::BmnTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTrack::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTrack) );
      instance.SetNew(&new_BmnTrack);
      instance.SetNewArray(&newArray_BmnTrack);
      instance.SetDelete(&delete_BmnTrack);
      instance.SetDeleteArray(&deleteArray_BmnTrack);
      instance.SetDestructor(&destruct_BmnTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTrack*)
   {
      return GenerateInitInstanceLocal((::BmnTrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTrack*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnGlobalTrack(void *p = 0);
   static void *newArray_BmnGlobalTrack(Long_t size, void *p);
   static void delete_BmnGlobalTrack(void *p);
   static void deleteArray_BmnGlobalTrack(void *p);
   static void destruct_BmnGlobalTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGlobalTrack*)
   {
      ::BmnGlobalTrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGlobalTrack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGlobalTrack", ::BmnGlobalTrack::Class_Version(), "", 3666,
                  typeid(::BmnGlobalTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGlobalTrack::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGlobalTrack) );
      instance.SetNew(&new_BmnGlobalTrack);
      instance.SetNewArray(&newArray_BmnGlobalTrack);
      instance.SetDelete(&delete_BmnGlobalTrack);
      instance.SetDeleteArray(&deleteArray_BmnGlobalTrack);
      instance.SetDestructor(&destruct_BmnGlobalTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGlobalTrack*)
   {
      return GenerateInitInstanceLocal((::BmnGlobalTrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGlobalTrack*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnMwpcHit(void *p = 0);
   static void *newArray_BmnMwpcHit(Long_t size, void *p);
   static void delete_BmnMwpcHit(void *p);
   static void deleteArray_BmnMwpcHit(void *p);
   static void destruct_BmnMwpcHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMwpcHit*)
   {
      ::BmnMwpcHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnMwpcHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnMwpcHit", ::BmnMwpcHit::Class_Version(), "", 3744,
                  typeid(::BmnMwpcHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnMwpcHit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnMwpcHit) );
      instance.SetNew(&new_BmnMwpcHit);
      instance.SetNewArray(&newArray_BmnMwpcHit);
      instance.SetDelete(&delete_BmnMwpcHit);
      instance.SetDeleteArray(&deleteArray_BmnMwpcHit);
      instance.SetDestructor(&destruct_BmnMwpcHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMwpcHit*)
   {
      return GenerateInitInstanceLocal((::BmnMwpcHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMwpcHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTofHit(void *p = 0);
   static void *newArray_BmnTofHit(Long_t size, void *p);
   static void delete_BmnTofHit(void *p);
   static void deleteArray_BmnTofHit(void *p);
   static void destruct_BmnTofHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTofHit*)
   {
      ::BmnTofHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTofHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTofHit", ::BmnTofHit::Class_Version(), "", 3837,
                  typeid(::BmnTofHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTofHit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTofHit) );
      instance.SetNew(&new_BmnTofHit);
      instance.SetNewArray(&newArray_BmnTofHit);
      instance.SetDelete(&delete_BmnTofHit);
      instance.SetDeleteArray(&deleteArray_BmnTofHit);
      instance.SetDestructor(&destruct_BmnTofHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTofHit*)
   {
      return GenerateInitInstanceLocal((::BmnTofHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTofHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnLink(void *p = 0);
   static void *newArray_BmnLink(Long_t size, void *p);
   static void delete_BmnLink(void *p);
   static void deleteArray_BmnLink(void *p);
   static void destruct_BmnLink(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnLink*)
   {
      ::BmnLink *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnLink >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnLink", ::BmnLink::Class_Version(), "BmnLink.h", 18,
                  typeid(::BmnLink), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnLink::Dictionary, isa_proxy, 4,
                  sizeof(::BmnLink) );
      instance.SetNew(&new_BmnLink);
      instance.SetNewArray(&newArray_BmnLink);
      instance.SetDelete(&delete_BmnLink);
      instance.SetDeleteArray(&deleteArray_BmnLink);
      instance.SetDestructor(&destruct_BmnLink);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnLink*)
   {
      return GenerateInitInstanceLocal((::BmnLink*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnLink*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnMatch(void *p = 0);
   static void *newArray_BmnMatch(Long_t size, void *p);
   static void delete_BmnMatch(void *p);
   static void deleteArray_BmnMatch(void *p);
   static void destruct_BmnMatch(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMatch*)
   {
      ::BmnMatch *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnMatch >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnMatch", ::BmnMatch::Class_Version(), "BmnMatch.h", 23,
                  typeid(::BmnMatch), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnMatch::Dictionary, isa_proxy, 4,
                  sizeof(::BmnMatch) );
      instance.SetNew(&new_BmnMatch);
      instance.SetNewArray(&newArray_BmnMatch);
      instance.SetDelete(&delete_BmnMatch);
      instance.SetDeleteArray(&deleteArray_BmnMatch);
      instance.SetDestructor(&destruct_BmnMatch);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMatch*)
   {
      return GenerateInitInstanceLocal((::BmnMatch*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMatch*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTrackMatch(void *p = 0);
   static void *newArray_BmnTrackMatch(Long_t size, void *p);
   static void delete_BmnTrackMatch(void *p);
   static void deleteArray_BmnTrackMatch(void *p);
   static void destruct_BmnTrackMatch(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTrackMatch*)
   {
      ::BmnTrackMatch *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTrackMatch >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTrackMatch", ::BmnTrackMatch::Class_Version(), "", 3875,
                  typeid(::BmnTrackMatch), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTrackMatch::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTrackMatch) );
      instance.SetNew(&new_BmnTrackMatch);
      instance.SetNewArray(&newArray_BmnTrackMatch);
      instance.SetDelete(&delete_BmnTrackMatch);
      instance.SetDeleteArray(&deleteArray_BmnTrackMatch);
      instance.SetDestructor(&destruct_BmnTrackMatch);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTrackMatch*)
   {
      return GenerateInitInstanceLocal((::BmnTrackMatch*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTrackMatch*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnMwpcDigit(void *p = 0);
   static void *newArray_BmnMwpcDigit(Long_t size, void *p);
   static void delete_BmnMwpcDigit(void *p);
   static void deleteArray_BmnMwpcDigit(void *p);
   static void destruct_BmnMwpcDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMwpcDigit*)
   {
      ::BmnMwpcDigit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnMwpcDigit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnMwpcDigit", ::BmnMwpcDigit::Class_Version(), "", 3934,
                  typeid(::BmnMwpcDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnMwpcDigit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnMwpcDigit) );
      instance.SetNew(&new_BmnMwpcDigit);
      instance.SetNewArray(&newArray_BmnMwpcDigit);
      instance.SetDelete(&delete_BmnMwpcDigit);
      instance.SetDeleteArray(&deleteArray_BmnMwpcDigit);
      instance.SetDestructor(&destruct_BmnMwpcDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMwpcDigit*)
   {
      return GenerateInitInstanceLocal((::BmnMwpcDigit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMwpcDigit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTof1Digit(void *p = 0);
   static void *newArray_BmnTof1Digit(Long_t size, void *p);
   static void delete_BmnTof1Digit(void *p);
   static void deleteArray_BmnTof1Digit(void *p);
   static void destruct_BmnTof1Digit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTof1Digit*)
   {
      ::BmnTof1Digit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTof1Digit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTof1Digit", ::BmnTof1Digit::Class_Version(), "", 3984,
                  typeid(::BmnTof1Digit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTof1Digit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTof1Digit) );
      instance.SetNew(&new_BmnTof1Digit);
      instance.SetNewArray(&newArray_BmnTof1Digit);
      instance.SetDelete(&delete_BmnTof1Digit);
      instance.SetDeleteArray(&deleteArray_BmnTof1Digit);
      instance.SetDestructor(&destruct_BmnTof1Digit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTof1Digit*)
   {
      return GenerateInitInstanceLocal((::BmnTof1Digit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTof1Digit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTof2Digit(void *p = 0);
   static void *newArray_BmnTof2Digit(Long_t size, void *p);
   static void delete_BmnTof2Digit(void *p);
   static void deleteArray_BmnTof2Digit(void *p);
   static void destruct_BmnTof2Digit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTof2Digit*)
   {
      ::BmnTof2Digit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTof2Digit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTof2Digit", ::BmnTof2Digit::Class_Version(), "", 4023,
                  typeid(::BmnTof2Digit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTof2Digit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTof2Digit) );
      instance.SetNew(&new_BmnTof2Digit);
      instance.SetNewArray(&newArray_BmnTof2Digit);
      instance.SetDelete(&delete_BmnTof2Digit);
      instance.SetDeleteArray(&deleteArray_BmnTof2Digit);
      instance.SetDestructor(&destruct_BmnTof2Digit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTof2Digit*)
   {
      return GenerateInitInstanceLocal((::BmnTof2Digit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTof2Digit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTrigDigit(void *p = 0);
   static void *newArray_BmnTrigDigit(Long_t size, void *p);
   static void delete_BmnTrigDigit(void *p);
   static void deleteArray_BmnTrigDigit(void *p);
   static void destruct_BmnTrigDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTrigDigit*)
   {
      ::BmnTrigDigit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTrigDigit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTrigDigit", ::BmnTrigDigit::Class_Version(), "", 4069,
                  typeid(::BmnTrigDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTrigDigit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTrigDigit) );
      instance.SetNew(&new_BmnTrigDigit);
      instance.SetNewArray(&newArray_BmnTrigDigit);
      instance.SetDelete(&delete_BmnTrigDigit);
      instance.SetDeleteArray(&deleteArray_BmnTrigDigit);
      instance.SetDestructor(&destruct_BmnTrigDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTrigDigit*)
   {
      return GenerateInitInstanceLocal((::BmnTrigDigit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTrigDigit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnADCDigit(void *p = 0);
   static void *newArray_BmnADCDigit(Long_t size, void *p);
   static void delete_BmnADCDigit(void *p);
   static void deleteArray_BmnADCDigit(void *p);
   static void destruct_BmnADCDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnADCDigit*)
   {
      ::BmnADCDigit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnADCDigit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnADCDigit", ::BmnADCDigit::Class_Version(), "BmnADCDigit.h", 10,
                  typeid(::BmnADCDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnADCDigit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnADCDigit) );
      instance.SetNew(&new_BmnADCDigit);
      instance.SetNewArray(&newArray_BmnADCDigit);
      instance.SetDelete(&delete_BmnADCDigit);
      instance.SetDeleteArray(&deleteArray_BmnADCDigit);
      instance.SetDestructor(&destruct_BmnADCDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnADCDigit*)
   {
      return GenerateInitInstanceLocal((::BmnADCDigit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnADCDigit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTQDCADCDigit(void *p = 0);
   static void *newArray_BmnTQDCADCDigit(Long_t size, void *p);
   static void delete_BmnTQDCADCDigit(void *p);
   static void deleteArray_BmnTQDCADCDigit(void *p);
   static void destruct_BmnTQDCADCDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTQDCADCDigit*)
   {
      ::BmnTQDCADCDigit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTQDCADCDigit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTQDCADCDigit", ::BmnTQDCADCDigit::Class_Version(), "BmnTQDCADCDigit.h", 20,
                  typeid(::BmnTQDCADCDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTQDCADCDigit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTQDCADCDigit) );
      instance.SetNew(&new_BmnTQDCADCDigit);
      instance.SetNewArray(&newArray_BmnTQDCADCDigit);
      instance.SetDelete(&delete_BmnTQDCADCDigit);
      instance.SetDeleteArray(&deleteArray_BmnTQDCADCDigit);
      instance.SetDestructor(&destruct_BmnTQDCADCDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTQDCADCDigit*)
   {
      return GenerateInitInstanceLocal((::BmnTQDCADCDigit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTQDCADCDigit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTrigWaveDigit(void *p = 0);
   static void *newArray_BmnTrigWaveDigit(Long_t size, void *p);
   static void delete_BmnTrigWaveDigit(void *p);
   static void deleteArray_BmnTrigWaveDigit(void *p);
   static void destruct_BmnTrigWaveDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTrigWaveDigit*)
   {
      ::BmnTrigWaveDigit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTrigWaveDigit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTrigWaveDigit", ::BmnTrigWaveDigit::Class_Version(), "", 4148,
                  typeid(::BmnTrigWaveDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTrigWaveDigit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTrigWaveDigit) );
      instance.SetNew(&new_BmnTrigWaveDigit);
      instance.SetNewArray(&newArray_BmnTrigWaveDigit);
      instance.SetDelete(&delete_BmnTrigWaveDigit);
      instance.SetDeleteArray(&deleteArray_BmnTrigWaveDigit);
      instance.SetDestructor(&destruct_BmnTrigWaveDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTrigWaveDigit*)
   {
      return GenerateInitInstanceLocal((::BmnTrigWaveDigit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTrigWaveDigit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnDchDigit(void *p = 0);
   static void *newArray_BmnDchDigit(Long_t size, void *p);
   static void delete_BmnDchDigit(void *p);
   static void deleteArray_BmnDchDigit(void *p);
   static void destruct_BmnDchDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnDchDigit*)
   {
      ::BmnDchDigit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnDchDigit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnDchDigit", ::BmnDchDigit::Class_Version(), "", 4214,
                  typeid(::BmnDchDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnDchDigit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnDchDigit) );
      instance.SetNew(&new_BmnDchDigit);
      instance.SetNewArray(&newArray_BmnDchDigit);
      instance.SetDelete(&delete_BmnDchDigit);
      instance.SetDeleteArray(&deleteArray_BmnDchDigit);
      instance.SetDestructor(&destruct_BmnDchDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnDchDigit*)
   {
      return GenerateInitInstanceLocal((::BmnDchDigit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnDchDigit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnEcalDigit(void *p = 0);
   static void *newArray_BmnEcalDigit(Long_t size, void *p);
   static void delete_BmnEcalDigit(void *p);
   static void deleteArray_BmnEcalDigit(void *p);
   static void destruct_BmnEcalDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnEcalDigit*)
   {
      ::BmnEcalDigit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnEcalDigit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnEcalDigit", ::BmnEcalDigit::Class_Version(), "", 4257,
                  typeid(::BmnEcalDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnEcalDigit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnEcalDigit) );
      instance.SetNew(&new_BmnEcalDigit);
      instance.SetNewArray(&newArray_BmnEcalDigit);
      instance.SetDelete(&delete_BmnEcalDigit);
      instance.SetDeleteArray(&deleteArray_BmnEcalDigit);
      instance.SetDestructor(&destruct_BmnEcalDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnEcalDigit*)
   {
      return GenerateInitInstanceLocal((::BmnEcalDigit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnEcalDigit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTacquilaDigit(void *p = 0);
   static void *newArray_BmnTacquilaDigit(Long_t size, void *p);
   static void delete_BmnTacquilaDigit(void *p);
   static void deleteArray_BmnTacquilaDigit(void *p);
   static void destruct_BmnTacquilaDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTacquilaDigit*)
   {
      ::BmnTacquilaDigit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTacquilaDigit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTacquilaDigit", ::BmnTacquilaDigit::Class_Version(), "", 4368,
                  typeid(::BmnTacquilaDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTacquilaDigit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTacquilaDigit) );
      instance.SetNew(&new_BmnTacquilaDigit);
      instance.SetNewArray(&newArray_BmnTacquilaDigit);
      instance.SetDelete(&delete_BmnTacquilaDigit);
      instance.SetDeleteArray(&deleteArray_BmnTacquilaDigit);
      instance.SetDestructor(&destruct_BmnTacquilaDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTacquilaDigit*)
   {
      return GenerateInitInstanceLocal((::BmnTacquilaDigit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTacquilaDigit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTDCDigit(void *p = 0);
   static void *newArray_BmnTDCDigit(Long_t size, void *p);
   static void delete_BmnTDCDigit(void *p);
   static void deleteArray_BmnTDCDigit(void *p);
   static void destruct_BmnTDCDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTDCDigit*)
   {
      ::BmnTDCDigit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTDCDigit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTDCDigit", ::BmnTDCDigit::Class_Version(), "", 4465,
                  typeid(::BmnTDCDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTDCDigit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTDCDigit) );
      instance.SetNew(&new_BmnTDCDigit);
      instance.SetNewArray(&newArray_BmnTDCDigit);
      instance.SetDelete(&delete_BmnTDCDigit);
      instance.SetDeleteArray(&deleteArray_BmnTDCDigit);
      instance.SetDestructor(&destruct_BmnTDCDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTDCDigit*)
   {
      return GenerateInitInstanceLocal((::BmnTDCDigit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTDCDigit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnHRBDigit(void *p = 0);
   static void *newArray_BmnHRBDigit(Long_t size, void *p);
   static void delete_BmnHRBDigit(void *p);
   static void deleteArray_BmnHRBDigit(void *p);
   static void destruct_BmnHRBDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnHRBDigit*)
   {
      ::BmnHRBDigit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnHRBDigit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnHRBDigit", ::BmnHRBDigit::Class_Version(), "", 4531,
                  typeid(::BmnHRBDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnHRBDigit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnHRBDigit) );
      instance.SetNew(&new_BmnHRBDigit);
      instance.SetNewArray(&newArray_BmnHRBDigit);
      instance.SetDelete(&delete_BmnHRBDigit);
      instance.SetDeleteArray(&deleteArray_BmnHRBDigit);
      instance.SetDestructor(&destruct_BmnHRBDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnHRBDigit*)
   {
      return GenerateInitInstanceLocal((::BmnHRBDigit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnHRBDigit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnSyncDigit(void *p = 0);
   static void *newArray_BmnSyncDigit(Long_t size, void *p);
   static void delete_BmnSyncDigit(void *p);
   static void deleteArray_BmnSyncDigit(void *p);
   static void destruct_BmnSyncDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSyncDigit*)
   {
      ::BmnSyncDigit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSyncDigit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSyncDigit", ::BmnSyncDigit::Class_Version(), "", 4585,
                  typeid(::BmnSyncDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSyncDigit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSyncDigit) );
      instance.SetNew(&new_BmnSyncDigit);
      instance.SetNewArray(&newArray_BmnSyncDigit);
      instance.SetDelete(&delete_BmnSyncDigit);
      instance.SetDeleteArray(&deleteArray_BmnSyncDigit);
      instance.SetDestructor(&destruct_BmnSyncDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSyncDigit*)
   {
      return GenerateInitInstanceLocal((::BmnSyncDigit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSyncDigit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTTBDigit(void *p = 0);
   static void *newArray_BmnTTBDigit(Long_t size, void *p);
   static void delete_BmnTTBDigit(void *p);
   static void deleteArray_BmnTTBDigit(void *p);
   static void destruct_BmnTTBDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTTBDigit*)
   {
      ::BmnTTBDigit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTTBDigit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTTBDigit", ::BmnTTBDigit::Class_Version(), "", 4631,
                  typeid(::BmnTTBDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTTBDigit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTTBDigit) );
      instance.SetNew(&new_BmnTTBDigit);
      instance.SetNewArray(&newArray_BmnTTBDigit);
      instance.SetDelete(&delete_BmnTTBDigit);
      instance.SetDeleteArray(&deleteArray_BmnTTBDigit);
      instance.SetDestructor(&destruct_BmnTTBDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTTBDigit*)
   {
      return GenerateInitInstanceLocal((::BmnTTBDigit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTTBDigit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnMSCDigit(void *p = 0);
   static void *newArray_BmnMSCDigit(Long_t size, void *p);
   static void delete_BmnMSCDigit(void *p);
   static void deleteArray_BmnMSCDigit(void *p);
   static void destruct_BmnMSCDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMSCDigit*)
   {
      ::BmnMSCDigit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnMSCDigit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnMSCDigit", ::BmnMSCDigit::Class_Version(), "", 4669,
                  typeid(::BmnMSCDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnMSCDigit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnMSCDigit) );
      instance.SetNew(&new_BmnMSCDigit);
      instance.SetNewArray(&newArray_BmnMSCDigit);
      instance.SetDelete(&delete_BmnMSCDigit);
      instance.SetDeleteArray(&deleteArray_BmnMSCDigit);
      instance.SetDestructor(&destruct_BmnMSCDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMSCDigit*)
   {
      return GenerateInitInstanceLocal((::BmnMSCDigit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMSCDigit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnZDCDigit(void *p = 0);
   static void *newArray_BmnZDCDigit(Long_t size, void *p);
   static void delete_BmnZDCDigit(void *p);
   static void deleteArray_BmnZDCDigit(void *p);
   static void destruct_BmnZDCDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnZDCDigit*)
   {
      ::BmnZDCDigit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnZDCDigit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnZDCDigit", ::BmnZDCDigit::Class_Version(), "", 4719,
                  typeid(::BmnZDCDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnZDCDigit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnZDCDigit) );
      instance.SetNew(&new_BmnZDCDigit);
      instance.SetNewArray(&newArray_BmnZDCDigit);
      instance.SetDelete(&delete_BmnZDCDigit);
      instance.SetDeleteArray(&deleteArray_BmnZDCDigit);
      instance.SetDestructor(&destruct_BmnZDCDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnZDCDigit*)
   {
      return GenerateInitInstanceLocal((::BmnZDCDigit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnZDCDigit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnECALDigit(void *p = 0);
   static void *newArray_BmnECALDigit(Long_t size, void *p);
   static void delete_BmnECALDigit(void *p);
   static void deleteArray_BmnECALDigit(void *p);
   static void destruct_BmnECALDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnECALDigit*)
   {
      ::BmnECALDigit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnECALDigit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnECALDigit", ::BmnECALDigit::Class_Version(), "", 4767,
                  typeid(::BmnECALDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnECALDigit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnECALDigit) );
      instance.SetNew(&new_BmnECALDigit);
      instance.SetNewArray(&newArray_BmnECALDigit);
      instance.SetDelete(&delete_BmnECALDigit);
      instance.SetDeleteArray(&deleteArray_BmnECALDigit);
      instance.SetDestructor(&destruct_BmnECALDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnECALDigit*)
   {
      return GenerateInitInstanceLocal((::BmnECALDigit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnECALDigit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnLANDDigit(void *p = 0);
   static void *newArray_BmnLANDDigit(Long_t size, void *p);
   static void delete_BmnLANDDigit(void *p);
   static void deleteArray_BmnLANDDigit(void *p);
   static void destruct_BmnLANDDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnLANDDigit*)
   {
      ::BmnLANDDigit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnLANDDigit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnLANDDigit", ::BmnLANDDigit::Class_Version(), "", 4816,
                  typeid(::BmnLANDDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnLANDDigit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnLANDDigit) );
      instance.SetNew(&new_BmnLANDDigit);
      instance.SetNewArray(&newArray_BmnLANDDigit);
      instance.SetDelete(&delete_BmnLANDDigit);
      instance.SetDeleteArray(&deleteArray_BmnLANDDigit);
      instance.SetDestructor(&destruct_BmnLANDDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnLANDDigit*)
   {
      return GenerateInitInstanceLocal((::BmnLANDDigit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnLANDDigit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnCscDigit(void *p = 0);
   static void *newArray_BmnCscDigit(Long_t size, void *p);
   static void delete_BmnCscDigit(void *p);
   static void deleteArray_BmnCscDigit(void *p);
   static void destruct_BmnCscDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnCscDigit*)
   {
      ::BmnCscDigit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnCscDigit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnCscDigit", ::BmnCscDigit::Class_Version(), "", 4877,
                  typeid(::BmnCscDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnCscDigit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnCscDigit) );
      instance.SetNew(&new_BmnCscDigit);
      instance.SetNewArray(&newArray_BmnCscDigit);
      instance.SetDelete(&delete_BmnCscDigit);
      instance.SetDeleteArray(&deleteArray_BmnCscDigit);
      instance.SetDestructor(&destruct_BmnCscDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnCscDigit*)
   {
      return GenerateInitInstanceLocal((::BmnCscDigit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnCscDigit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTrigInfo(void *p = 0);
   static void *newArray_BmnTrigInfo(Long_t size, void *p);
   static void delete_BmnTrigInfo(void *p);
   static void deleteArray_BmnTrigInfo(void *p);
   static void destruct_BmnTrigInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTrigInfo*)
   {
      ::BmnTrigInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTrigInfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTrigInfo", ::BmnTrigInfo::Class_Version(), "BmnTrigInfo.h", 20,
                  typeid(::BmnTrigInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTrigInfo::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTrigInfo) );
      instance.SetNew(&new_BmnTrigInfo);
      instance.SetNewArray(&newArray_BmnTrigInfo);
      instance.SetDelete(&delete_BmnTrigInfo);
      instance.SetDeleteArray(&deleteArray_BmnTrigInfo);
      instance.SetDestructor(&destruct_BmnTrigInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTrigInfo*)
   {
      return GenerateInitInstanceLocal((::BmnTrigInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTrigInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnEventHeader(void *p = 0);
   static void *newArray_BmnEventHeader(Long_t size, void *p);
   static void delete_BmnEventHeader(void *p);
   static void deleteArray_BmnEventHeader(void *p);
   static void destruct_BmnEventHeader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnEventHeader*)
   {
      ::BmnEventHeader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnEventHeader >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnEventHeader", ::BmnEventHeader::Class_Version(), "", 4926,
                  typeid(::BmnEventHeader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnEventHeader::Dictionary, isa_proxy, 4,
                  sizeof(::BmnEventHeader) );
      instance.SetNew(&new_BmnEventHeader);
      instance.SetNewArray(&newArray_BmnEventHeader);
      instance.SetDelete(&delete_BmnEventHeader);
      instance.SetDeleteArray(&deleteArray_BmnEventHeader);
      instance.SetDestructor(&destruct_BmnEventHeader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnEventHeader*)
   {
      return GenerateInitInstanceLocal((::BmnEventHeader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnEventHeader*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnRunHeader(void *p = 0);
   static void *newArray_BmnRunHeader(Long_t size, void *p);
   static void delete_BmnRunHeader(void *p);
   static void deleteArray_BmnRunHeader(void *p);
   static void destruct_BmnRunHeader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnRunHeader*)
   {
      ::BmnRunHeader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnRunHeader >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnRunHeader", ::BmnRunHeader::Class_Version(), "", 5064,
                  typeid(::BmnRunHeader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnRunHeader::Dictionary, isa_proxy, 4,
                  sizeof(::BmnRunHeader) );
      instance.SetNew(&new_BmnRunHeader);
      instance.SetNewArray(&newArray_BmnRunHeader);
      instance.SetDelete(&delete_BmnRunHeader);
      instance.SetDeleteArray(&deleteArray_BmnRunHeader);
      instance.SetDestructor(&destruct_BmnRunHeader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnRunHeader*)
   {
      return GenerateInitInstanceLocal((::BmnRunHeader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnRunHeader*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnCounter(void *p = 0);
   static void *newArray_BmnCounter(Long_t size, void *p);
   static void delete_BmnCounter(void *p);
   static void deleteArray_BmnCounter(void *p);
   static void destruct_BmnCounter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnCounter*)
   {
      ::BmnCounter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnCounter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnCounter", ::BmnCounter::Class_Version(), "", 5150,
                  typeid(::BmnCounter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnCounter::Dictionary, isa_proxy, 4,
                  sizeof(::BmnCounter) );
      instance.SetNew(&new_BmnCounter);
      instance.SetNewArray(&newArray_BmnCounter);
      instance.SetDelete(&delete_BmnCounter);
      instance.SetDeleteArray(&deleteArray_BmnCounter);
      instance.SetDestructor(&destruct_BmnCounter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnCounter*)
   {
      return GenerateInitInstanceLocal((::BmnCounter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnCounter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnIdentifiableTrack(void *p = 0);
   static void *newArray_BmnIdentifiableTrack(Long_t size, void *p);
   static void delete_BmnIdentifiableTrack(void *p);
   static void deleteArray_BmnIdentifiableTrack(void *p);
   static void destruct_BmnIdentifiableTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnIdentifiableTrack*)
   {
      ::BmnIdentifiableTrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnIdentifiableTrack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnIdentifiableTrack", ::BmnIdentifiableTrack::Class_Version(), "", 5185,
                  typeid(::BmnIdentifiableTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnIdentifiableTrack::Dictionary, isa_proxy, 4,
                  sizeof(::BmnIdentifiableTrack) );
      instance.SetNew(&new_BmnIdentifiableTrack);
      instance.SetNewArray(&newArray_BmnIdentifiableTrack);
      instance.SetDelete(&delete_BmnIdentifiableTrack);
      instance.SetDeleteArray(&deleteArray_BmnIdentifiableTrack);
      instance.SetDestructor(&destruct_BmnIdentifiableTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnIdentifiableTrack*)
   {
      return GenerateInitInstanceLocal((::BmnIdentifiableTrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnIdentifiableTrack*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DigiArrays(void *p = 0);
   static void *newArray_DigiArrays(Long_t size, void *p);
   static void delete_DigiArrays(void *p);
   static void deleteArray_DigiArrays(void *p);
   static void destruct_DigiArrays(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DigiArrays*)
   {
      ::DigiArrays *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DigiArrays >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DigiArrays", ::DigiArrays::Class_Version(), "", 5412,
                  typeid(::DigiArrays), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DigiArrays::Dictionary, isa_proxy, 4,
                  sizeof(::DigiArrays) );
      instance.SetNew(&new_DigiArrays);
      instance.SetNewArray(&newArray_DigiArrays);
      instance.SetDelete(&delete_DigiArrays);
      instance.SetDeleteArray(&deleteArray_DigiArrays);
      instance.SetDestructor(&destruct_DigiArrays);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DigiArrays*)
   {
      return GenerateInitInstanceLocal((::DigiArrays*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DigiArrays*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnEventQuality(void *p = 0);
   static void *newArray_BmnEventQuality(Long_t size, void *p);
   static void delete_BmnEventQuality(void *p);
   static void deleteArray_BmnEventQuality(void *p);
   static void destruct_BmnEventQuality(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnEventQuality*)
   {
      ::BmnEventQuality *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnEventQuality >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnEventQuality", ::BmnEventQuality::Class_Version(), "", 5526,
                  typeid(::BmnEventQuality), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnEventQuality::Dictionary, isa_proxy, 4,
                  sizeof(::BmnEventQuality) );
      instance.SetNew(&new_BmnEventQuality);
      instance.SetNewArray(&newArray_BmnEventQuality);
      instance.SetDelete(&delete_BmnEventQuality);
      instance.SetDeleteArray(&deleteArray_BmnEventQuality);
      instance.SetDestructor(&destruct_BmnEventQuality);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnEventQuality*)
   {
      return GenerateInitInstanceLocal((::BmnEventQuality*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnEventQuality*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnGemStripHit(void *p = 0);
   static void *newArray_BmnGemStripHit(Long_t size, void *p);
   static void delete_BmnGemStripHit(void *p);
   static void deleteArray_BmnGemStripHit(void *p);
   static void destruct_BmnGemStripHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemStripHit*)
   {
      ::BmnGemStripHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGemStripHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemStripHit", ::BmnGemStripHit::Class_Version(), "", 5560,
                  typeid(::BmnGemStripHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGemStripHit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemStripHit) );
      instance.SetNew(&new_BmnGemStripHit);
      instance.SetNewArray(&newArray_BmnGemStripHit);
      instance.SetDelete(&delete_BmnGemStripHit);
      instance.SetDeleteArray(&deleteArray_BmnGemStripHit);
      instance.SetDestructor(&destruct_BmnGemStripHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemStripHit*)
   {
      return GenerateInitInstanceLocal((::BmnGemStripHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemStripHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnGemTrack(void *p = 0);
   static void *newArray_BmnGemTrack(Long_t size, void *p);
   static void delete_BmnGemTrack(void *p);
   static void deleteArray_BmnGemTrack(void *p);
   static void destruct_BmnGemTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemTrack*)
   {
      ::BmnGemTrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGemTrack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemTrack", ::BmnGemTrack::Class_Version(), "", 5660,
                  typeid(::BmnGemTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGemTrack::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemTrack) );
      instance.SetNew(&new_BmnGemTrack);
      instance.SetNewArray(&newArray_BmnGemTrack);
      instance.SetDelete(&delete_BmnGemTrack);
      instance.SetDeleteArray(&deleteArray_BmnGemTrack);
      instance.SetDestructor(&destruct_BmnGemTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemTrack*)
   {
      return GenerateInitInstanceLocal((::BmnGemTrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemTrack*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmVertex(void *p = 0);
   static void *newArray_CbmVertex(Long_t size, void *p);
   static void delete_CbmVertex(void *p);
   static void deleteArray_CbmVertex(void *p);
   static void destruct_CbmVertex(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmVertex*)
   {
      ::CbmVertex *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmVertex >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmVertex", ::CbmVertex::Class_Version(), "", 5734,
                  typeid(::CbmVertex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmVertex::Dictionary, isa_proxy, 4,
                  sizeof(::CbmVertex) );
      instance.SetNew(&new_CbmVertex);
      instance.SetNewArray(&newArray_CbmVertex);
      instance.SetDelete(&delete_CbmVertex);
      instance.SetDeleteArray(&deleteArray_CbmVertex);
      instance.SetDestructor(&destruct_CbmVertex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmVertex*)
   {
      return GenerateInitInstanceLocal((::CbmVertex*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmVertex*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_CbmStsTrackFinder(void *p);
   static void deleteArray_CbmStsTrackFinder(void *p);
   static void destruct_CbmStsTrackFinder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsTrackFinder*)
   {
      ::CbmStsTrackFinder *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsTrackFinder >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsTrackFinder", ::CbmStsTrackFinder::Class_Version(), "", 5859,
                  typeid(::CbmStsTrackFinder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsTrackFinder::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsTrackFinder) );
      instance.SetDelete(&delete_CbmStsTrackFinder);
      instance.SetDeleteArray(&deleteArray_CbmStsTrackFinder);
      instance.SetDestructor(&destruct_CbmStsTrackFinder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsTrackFinder*)
   {
      return GenerateInitInstanceLocal((::CbmStsTrackFinder*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsTrackFinder*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_CbmStsTrackFitter(void *p);
   static void deleteArray_CbmStsTrackFitter(void *p);
   static void destruct_CbmStsTrackFitter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsTrackFitter*)
   {
      ::CbmStsTrackFitter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsTrackFitter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsTrackFitter", ::CbmStsTrackFitter::Class_Version(), "", 5947,
                  typeid(::CbmStsTrackFitter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsTrackFitter::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsTrackFitter) );
      instance.SetDelete(&delete_CbmStsTrackFitter);
      instance.SetDeleteArray(&deleteArray_CbmStsTrackFitter);
      instance.SetDestructor(&destruct_CbmStsTrackFitter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsTrackFitter*)
   {
      return GenerateInitInstanceLocal((::CbmStsTrackFitter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsTrackFitter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_CbmTofMerger(void *p);
   static void deleteArray_CbmTofMerger(void *p);
   static void destruct_CbmTofMerger(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmTofMerger*)
   {
      ::CbmTofMerger *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmTofMerger >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmTofMerger", ::CbmTofMerger::Class_Version(), "", 6009,
                  typeid(::CbmTofMerger), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmTofMerger::Dictionary, isa_proxy, 4,
                  sizeof(::CbmTofMerger) );
      instance.SetDelete(&delete_CbmTofMerger);
      instance.SetDeleteArray(&deleteArray_CbmTofMerger);
      instance.SetDestructor(&destruct_CbmTofMerger);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmTofMerger*)
   {
      return GenerateInitInstanceLocal((::CbmTofMerger*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmTofMerger*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_CbmTrackMerger(void *p);
   static void deleteArray_CbmTrackMerger(void *p);
   static void destruct_CbmTrackMerger(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmTrackMerger*)
   {
      ::CbmTrackMerger *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmTrackMerger >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmTrackMerger", ::CbmTrackMerger::Class_Version(), "", 6057,
                  typeid(::CbmTrackMerger), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmTrackMerger::Dictionary, isa_proxy, 4,
                  sizeof(::CbmTrackMerger) );
      instance.SetDelete(&delete_CbmTrackMerger);
      instance.SetDeleteArray(&deleteArray_CbmTrackMerger);
      instance.SetDestructor(&destruct_CbmTrackMerger);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmTrackMerger*)
   {
      return GenerateInitInstanceLocal((::CbmTrackMerger*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmTrackMerger*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_CbmPrimaryVertexFinder(void *p);
   static void deleteArray_CbmPrimaryVertexFinder(void *p);
   static void destruct_CbmPrimaryVertexFinder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmPrimaryVertexFinder*)
   {
      ::CbmPrimaryVertexFinder *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmPrimaryVertexFinder >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmPrimaryVertexFinder", ::CbmPrimaryVertexFinder::Class_Version(), "", 6137,
                  typeid(::CbmPrimaryVertexFinder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmPrimaryVertexFinder::Dictionary, isa_proxy, 4,
                  sizeof(::CbmPrimaryVertexFinder) );
      instance.SetDelete(&delete_CbmPrimaryVertexFinder);
      instance.SetDeleteArray(&deleteArray_CbmPrimaryVertexFinder);
      instance.SetDestructor(&destruct_CbmPrimaryVertexFinder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmPrimaryVertexFinder*)
   {
      return GenerateInitInstanceLocal((::CbmPrimaryVertexFinder*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmPrimaryVertexFinder*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmFindPrimaryVertex(void *p = 0);
   static void *newArray_CbmFindPrimaryVertex(Long_t size, void *p);
   static void delete_CbmFindPrimaryVertex(void *p);
   static void deleteArray_CbmFindPrimaryVertex(void *p);
   static void destruct_CbmFindPrimaryVertex(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmFindPrimaryVertex*)
   {
      ::CbmFindPrimaryVertex *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmFindPrimaryVertex >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmFindPrimaryVertex", ::CbmFindPrimaryVertex::Class_Version(), "", 6203,
                  typeid(::CbmFindPrimaryVertex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmFindPrimaryVertex::Dictionary, isa_proxy, 4,
                  sizeof(::CbmFindPrimaryVertex) );
      instance.SetNew(&new_CbmFindPrimaryVertex);
      instance.SetNewArray(&newArray_CbmFindPrimaryVertex);
      instance.SetDelete(&delete_CbmFindPrimaryVertex);
      instance.SetDeleteArray(&deleteArray_CbmFindPrimaryVertex);
      instance.SetDestructor(&destruct_CbmFindPrimaryVertex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmFindPrimaryVertex*)
   {
      return GenerateInitInstanceLocal((::CbmFindPrimaryVertex*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmFindPrimaryVertex*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *FitWLSQ_Dictionary();
   static void FitWLSQ_TClassManip(TClass*);
   static void delete_FitWLSQ(void *p);
   static void deleteArray_FitWLSQ(void *p);
   static void destruct_FitWLSQ(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::FitWLSQ*)
   {
      ::FitWLSQ *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::FitWLSQ));
      static ::ROOT::TGenericClassInfo 
         instance("FitWLSQ", "", 6384,
                  typeid(::FitWLSQ), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &FitWLSQ_Dictionary, isa_proxy, 4,
                  sizeof(::FitWLSQ) );
      instance.SetDelete(&delete_FitWLSQ);
      instance.SetDeleteArray(&deleteArray_FitWLSQ);
      instance.SetDestructor(&destruct_FitWLSQ);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::FitWLSQ*)
   {
      return GenerateInitInstanceLocal((::FitWLSQ*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::FitWLSQ*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *FitWLSQ_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::FitWLSQ*)0x0)->GetClass();
      FitWLSQ_TClassManip(theClass);
   return theClass;
   }

   static void FitWLSQ_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnFileSource(void *p);
   static void deleteArray_BmnFileSource(void *p);
   static void destruct_BmnFileSource(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnFileSource*)
   {
      ::BmnFileSource *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnFileSource >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnFileSource", ::BmnFileSource::Class_Version(), "", 6471,
                  typeid(::BmnFileSource), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnFileSource::Dictionary, isa_proxy, 4,
                  sizeof(::BmnFileSource) );
      instance.SetDelete(&delete_BmnFileSource);
      instance.SetDeleteArray(&deleteArray_BmnFileSource);
      instance.SetDestructor(&destruct_BmnFileSource);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnFileSource*)
   {
      return GenerateInitInstanceLocal((::BmnFileSource*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnFileSource*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *BmnGeoNavigator_Dictionary();
   static void BmnGeoNavigator_TClassManip(TClass*);
   static void *new_BmnGeoNavigator(void *p = 0);
   static void *newArray_BmnGeoNavigator(Long_t size, void *p);
   static void delete_BmnGeoNavigator(void *p);
   static void deleteArray_BmnGeoNavigator(void *p);
   static void destruct_BmnGeoNavigator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGeoNavigator*)
   {
      ::BmnGeoNavigator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BmnGeoNavigator));
      static ::ROOT::TGenericClassInfo 
         instance("BmnGeoNavigator", "", 6636,
                  typeid(::BmnGeoNavigator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BmnGeoNavigator_Dictionary, isa_proxy, 4,
                  sizeof(::BmnGeoNavigator) );
      instance.SetNew(&new_BmnGeoNavigator);
      instance.SetNewArray(&newArray_BmnGeoNavigator);
      instance.SetDelete(&delete_BmnGeoNavigator);
      instance.SetDeleteArray(&deleteArray_BmnGeoNavigator);
      instance.SetDestructor(&destruct_BmnGeoNavigator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGeoNavigator*)
   {
      return GenerateInitInstanceLocal((::BmnGeoNavigator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGeoNavigator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BmnGeoNavigator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BmnGeoNavigator*)0x0)->GetClass();
      BmnGeoNavigator_TClassManip(theClass);
   return theClass;
   }

   static void BmnGeoNavigator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr CbmBaseHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmBaseHit::Class_Name()
{
   return "CbmBaseHit";
}

//______________________________________________________________________________
const char *CbmBaseHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmBaseHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmBaseHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmBaseHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmBaseHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmBaseHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmBaseHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmBaseHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmHit::Class_Name()
{
   return "CbmHit";
}

//______________________________________________________________________________
const char *CbmHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmPixelHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmPixelHit::Class_Name()
{
   return "CbmPixelHit";
}

//______________________________________________________________________________
const char *CbmPixelHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmPixelHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmPixelHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmPixelHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmPixelHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmPixelHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmPixelHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmPixelHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmDetectorList::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmDetectorList::Class_Name()
{
   return "CbmDetectorList";
}

//______________________________________________________________________________
const char *CbmDetectorList::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmDetectorList*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmDetectorList::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmDetectorList*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmDetectorList::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmDetectorList*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmDetectorList::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmDetectorList*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStack::Class_Name()
{
   return "CbmStack";
}

//______________________________________________________________________________
const char *CbmStack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmMCTrack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmMCTrack::Class_Name()
{
   return "CbmMCTrack";
}

//______________________________________________________________________________
const char *CbmMCTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmMCTrack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmMCTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmMCTrack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmMCTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmMCTrack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmMCTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmMCTrack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsPoint::Class_Name()
{
   return "CbmStsPoint";
}

//______________________________________________________________________________
const char *CbmStsPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsDetectorId::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsDetectorId::Class_Name()
{
   return "CbmStsDetectorId";
}

//______________________________________________________________________________
const char *CbmStsDetectorId::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDetectorId*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsDetectorId::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDetectorId*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsDetectorId::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDetectorId*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsDetectorId::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDetectorId*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsDigi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsDigi::Class_Name()
{
   return "CbmStsDigi";
}

//______________________________________________________________________________
const char *CbmStsDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsDigiMatch::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsDigiMatch::Class_Name()
{
   return "CbmStsDigiMatch";
}

//______________________________________________________________________________
const char *CbmStsDigiMatch::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigiMatch*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsDigiMatch::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigiMatch*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsDigiMatch::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigiMatch*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsDigiMatch::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigiMatch*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmMvdDetectorId::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmMvdDetectorId::Class_Name()
{
   return "CbmMvdDetectorId";
}

//______________________________________________________________________________
const char *CbmMvdDetectorId::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmMvdDetectorId*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmMvdDetectorId::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmMvdDetectorId*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmMvdDetectorId::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmMvdDetectorId*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmMvdDetectorId::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmMvdDetectorId*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmMvdPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmMvdPoint::Class_Name()
{
   return "CbmMvdPoint";
}

//______________________________________________________________________________
const char *CbmMvdPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmMvdPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmMvdPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmMvdPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmMvdPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmMvdPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmMvdPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmMvdPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmTofPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmTofPoint::Class_Name()
{
   return "CbmTofPoint";
}

//______________________________________________________________________________
const char *CbmTofPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmTofPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmTofPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmTofPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmTofPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmTofPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmTofPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmTofPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmPsdPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmPsdPoint::Class_Name()
{
   return "CbmPsdPoint";
}

//______________________________________________________________________________
const char *CbmPsdPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmPsdPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmPsdPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmPsdPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmPsdPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmPsdPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmPsdPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmPsdPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnHit::Class_Name()
{
   return "BmnHit";
}

//______________________________________________________________________________
const char *BmnHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmTofHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmTofHit::Class_Name()
{
   return "CbmTofHit";
}

//______________________________________________________________________________
const char *CbmTofHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmTofHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmTofHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmTofHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmTofHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmTofHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmTofHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmTofHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmTofTrack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmTofTrack::Class_Name()
{
   return "CbmTofTrack";
}

//______________________________________________________________________________
const char *CbmTofTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmTofTrack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmTofTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmTofTrack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmTofTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmTofTrack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmTofTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmTofTrack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmEcalPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmEcalPoint::Class_Name()
{
   return "CbmEcalPoint";
}

//______________________________________________________________________________
const char *CbmEcalPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmEcalPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmEcalPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmEcalPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmEcalPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmEcalPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmEcalPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmEcalPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmDigi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmDigi::Class_Name()
{
   return "CbmDigi";
}

//______________________________________________________________________________
const char *CbmDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmDigi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmDigi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmDigi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmDigi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsDigiLight::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsDigiLight::Class_Name()
{
   return "CbmStsDigiLight";
}

//______________________________________________________________________________
const char *CbmStsDigiLight::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigiLight*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsDigiLight::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigiLight*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsDigiLight::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigiLight*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsDigiLight::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigiLight*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsHit::Class_Name()
{
   return "CbmStsHit";
}

//______________________________________________________________________________
const char *CbmStsHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsCluster::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsCluster::Class_Name()
{
   return "CbmStsCluster";
}

//______________________________________________________________________________
const char *CbmStsCluster::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsCluster*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsCluster::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsCluster*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsCluster::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsCluster*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsCluster::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsCluster*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsTrack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsTrack::Class_Name()
{
   return "CbmStsTrack";
}

//______________________________________________________________________________
const char *CbmStsTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsTrack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsTrack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsTrack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsTrack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmTrackMatch::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmTrackMatch::Class_Name()
{
   return "CbmTrackMatch";
}

//______________________________________________________________________________
const char *CbmTrackMatch::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmTrackMatch*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmTrackMatch::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmTrackMatch*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmTrackMatch::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmTrackMatch*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmTrackMatch::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmTrackMatch*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmMvdHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmMvdHit::Class_Name()
{
   return "CbmMvdHit";
}

//______________________________________________________________________________
const char *CbmMvdHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmMvdHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmMvdHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmMvdHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmMvdHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmMvdHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmMvdHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmMvdHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmMvdHitMatch::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmMvdHitMatch::Class_Name()
{
   return "CbmMvdHitMatch";
}

//______________________________________________________________________________
const char *CbmMvdHitMatch::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmMvdHitMatch*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmMvdHitMatch::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmMvdHitMatch*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmMvdHitMatch::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmMvdHitMatch*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmMvdHitMatch::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmMvdHitMatch*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmGlobalTrack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmGlobalTrack::Class_Name()
{
   return "CbmGlobalTrack";
}

//______________________________________________________________________________
const char *CbmGlobalTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmGlobalTrack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmGlobalTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmGlobalTrack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmGlobalTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmGlobalTrack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmGlobalTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmGlobalTrack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmPsdHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmPsdHit::Class_Name()
{
   return "CbmPsdHit";
}

//______________________________________________________________________________
const char *CbmPsdHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmPsdHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmPsdHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmPsdHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmPsdHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmPsdHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmPsdHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmPsdHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmPsdDigi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmPsdDigi::Class_Name()
{
   return "CbmPsdDigi";
}

//______________________________________________________________________________
const char *CbmPsdDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmPsdDigi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmPsdDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmPsdDigi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmPsdDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmPsdDigi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmPsdDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmPsdDigi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmPsdEventData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmPsdEventData::Class_Name()
{
   return "CbmPsdEventData";
}

//______________________________________________________________________________
const char *CbmPsdEventData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmPsdEventData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmPsdEventData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmPsdEventData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmPsdEventData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmPsdEventData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmPsdEventData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmPsdEventData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmMvdGeoPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmMvdGeoPar::Class_Name()
{
   return "CbmMvdGeoPar";
}

//______________________________________________________________________________
const char *CbmMvdGeoPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmMvdGeoPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmMvdGeoPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmMvdGeoPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmMvdGeoPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmMvdGeoPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmMvdGeoPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmMvdGeoPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmGeoSttPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmGeoSttPar::Class_Name()
{
   return "CbmGeoSttPar";
}

//______________________________________________________________________________
const char *CbmGeoSttPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmGeoSttPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmGeoSttPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmGeoSttPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmGeoSttPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmGeoSttPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmGeoSttPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmGeoSttPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnDchHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnDchHit::Class_Name()
{
   return "BmnDchHit";
}

//______________________________________________________________________________
const char *BmnDchHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDchHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnDchHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDchHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnDchHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDchHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnDchHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDchHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnDchHitOriginal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnDchHitOriginal::Class_Name()
{
   return "BmnDchHitOriginal";
}

//______________________________________________________________________________
const char *BmnDchHitOriginal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDchHitOriginal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnDchHitOriginal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDchHitOriginal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnDchHitOriginal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDchHitOriginal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnDchHitOriginal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDchHitOriginal*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTrack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTrack::Class_Name()
{
   return "BmnTrack";
}

//______________________________________________________________________________
const char *BmnTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnGlobalTrack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGlobalTrack::Class_Name()
{
   return "BmnGlobalTrack";
}

//______________________________________________________________________________
const char *BmnGlobalTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGlobalTrack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGlobalTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGlobalTrack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGlobalTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGlobalTrack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGlobalTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGlobalTrack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnMwpcHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnMwpcHit::Class_Name()
{
   return "BmnMwpcHit";
}

//______________________________________________________________________________
const char *BmnMwpcHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnMwpcHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnMwpcHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnMwpcHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTofHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTofHit::Class_Name()
{
   return "BmnTofHit";
}

//______________________________________________________________________________
const char *BmnTofHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTofHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTofHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTofHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTofHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTofHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTofHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTofHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnLink::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnLink::Class_Name()
{
   return "BmnLink";
}

//______________________________________________________________________________
const char *BmnLink::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnLink*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnLink::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnLink*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnLink::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnLink*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnLink::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnLink*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnMatch::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnMatch::Class_Name()
{
   return "BmnMatch";
}

//______________________________________________________________________________
const char *BmnMatch::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMatch*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnMatch::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMatch*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnMatch::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMatch*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnMatch::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMatch*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTrackMatch::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTrackMatch::Class_Name()
{
   return "BmnTrackMatch";
}

//______________________________________________________________________________
const char *BmnTrackMatch::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackMatch*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTrackMatch::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackMatch*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTrackMatch::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackMatch*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTrackMatch::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackMatch*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnMwpcDigit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnMwpcDigit::Class_Name()
{
   return "BmnMwpcDigit";
}

//______________________________________________________________________________
const char *BmnMwpcDigit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcDigit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnMwpcDigit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcDigit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnMwpcDigit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcDigit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnMwpcDigit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcDigit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTof1Digit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTof1Digit::Class_Name()
{
   return "BmnTof1Digit";
}

//______________________________________________________________________________
const char *BmnTof1Digit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTof1Digit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTof1Digit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTof1Digit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTof1Digit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTof1Digit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTof1Digit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTof1Digit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTof2Digit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTof2Digit::Class_Name()
{
   return "BmnTof2Digit";
}

//______________________________________________________________________________
const char *BmnTof2Digit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTof2Digit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTof2Digit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTof2Digit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTof2Digit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTof2Digit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTof2Digit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTof2Digit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTrigDigit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTrigDigit::Class_Name()
{
   return "BmnTrigDigit";
}

//______________________________________________________________________________
const char *BmnTrigDigit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrigDigit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTrigDigit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrigDigit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTrigDigit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrigDigit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTrigDigit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrigDigit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnADCDigit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnADCDigit::Class_Name()
{
   return "BmnADCDigit";
}

//______________________________________________________________________________
const char *BmnADCDigit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnADCDigit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnADCDigit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnADCDigit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnADCDigit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnADCDigit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnADCDigit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnADCDigit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTQDCADCDigit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTQDCADCDigit::Class_Name()
{
   return "BmnTQDCADCDigit";
}

//______________________________________________________________________________
const char *BmnTQDCADCDigit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTQDCADCDigit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTQDCADCDigit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTQDCADCDigit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTQDCADCDigit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTQDCADCDigit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTQDCADCDigit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTQDCADCDigit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTrigWaveDigit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTrigWaveDigit::Class_Name()
{
   return "BmnTrigWaveDigit";
}

//______________________________________________________________________________
const char *BmnTrigWaveDigit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrigWaveDigit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTrigWaveDigit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrigWaveDigit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTrigWaveDigit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrigWaveDigit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTrigWaveDigit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrigWaveDigit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnDchDigit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnDchDigit::Class_Name()
{
   return "BmnDchDigit";
}

//______________________________________________________________________________
const char *BmnDchDigit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDchDigit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnDchDigit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDchDigit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnDchDigit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDchDigit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnDchDigit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDchDigit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnEcalDigit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnEcalDigit::Class_Name()
{
   return "BmnEcalDigit";
}

//______________________________________________________________________________
const char *BmnEcalDigit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnEcalDigit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnEcalDigit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnEcalDigit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnEcalDigit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnEcalDigit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnEcalDigit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnEcalDigit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTacquilaDigit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTacquilaDigit::Class_Name()
{
   return "BmnTacquilaDigit";
}

//______________________________________________________________________________
const char *BmnTacquilaDigit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTacquilaDigit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTacquilaDigit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTacquilaDigit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTacquilaDigit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTacquilaDigit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTacquilaDigit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTacquilaDigit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTDCDigit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTDCDigit::Class_Name()
{
   return "BmnTDCDigit";
}

//______________________________________________________________________________
const char *BmnTDCDigit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTDCDigit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTDCDigit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTDCDigit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTDCDigit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTDCDigit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTDCDigit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTDCDigit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnHRBDigit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnHRBDigit::Class_Name()
{
   return "BmnHRBDigit";
}

//______________________________________________________________________________
const char *BmnHRBDigit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHRBDigit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnHRBDigit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHRBDigit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnHRBDigit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHRBDigit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnHRBDigit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHRBDigit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnSyncDigit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSyncDigit::Class_Name()
{
   return "BmnSyncDigit";
}

//______________________________________________________________________________
const char *BmnSyncDigit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSyncDigit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSyncDigit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSyncDigit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSyncDigit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSyncDigit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSyncDigit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSyncDigit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTTBDigit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTTBDigit::Class_Name()
{
   return "BmnTTBDigit";
}

//______________________________________________________________________________
const char *BmnTTBDigit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTTBDigit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTTBDigit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTTBDigit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTTBDigit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTTBDigit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTTBDigit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTTBDigit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnMSCDigit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnMSCDigit::Class_Name()
{
   return "BmnMSCDigit";
}

//______________________________________________________________________________
const char *BmnMSCDigit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMSCDigit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnMSCDigit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMSCDigit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnMSCDigit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMSCDigit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnMSCDigit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMSCDigit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnZDCDigit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnZDCDigit::Class_Name()
{
   return "BmnZDCDigit";
}

//______________________________________________________________________________
const char *BmnZDCDigit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZDCDigit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnZDCDigit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZDCDigit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnZDCDigit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZDCDigit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnZDCDigit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZDCDigit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnECALDigit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnECALDigit::Class_Name()
{
   return "BmnECALDigit";
}

//______________________________________________________________________________
const char *BmnECALDigit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnECALDigit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnECALDigit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnECALDigit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnECALDigit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnECALDigit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnECALDigit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnECALDigit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnLANDDigit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnLANDDigit::Class_Name()
{
   return "BmnLANDDigit";
}

//______________________________________________________________________________
const char *BmnLANDDigit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnLANDDigit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnLANDDigit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnLANDDigit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnLANDDigit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnLANDDigit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnLANDDigit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnLANDDigit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnCscDigit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnCscDigit::Class_Name()
{
   return "BmnCscDigit";
}

//______________________________________________________________________________
const char *BmnCscDigit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnCscDigit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnCscDigit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnCscDigit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnCscDigit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnCscDigit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnCscDigit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnCscDigit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTrigInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTrigInfo::Class_Name()
{
   return "BmnTrigInfo";
}

//______________________________________________________________________________
const char *BmnTrigInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrigInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTrigInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrigInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTrigInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrigInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTrigInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrigInfo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnEventHeader::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnEventHeader::Class_Name()
{
   return "BmnEventHeader";
}

//______________________________________________________________________________
const char *BmnEventHeader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnEventHeader*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnEventHeader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnEventHeader*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnEventHeader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnEventHeader*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnEventHeader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnEventHeader*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnRunHeader::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnRunHeader::Class_Name()
{
   return "BmnRunHeader";
}

//______________________________________________________________________________
const char *BmnRunHeader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnRunHeader*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnRunHeader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnRunHeader*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnRunHeader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnRunHeader*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnRunHeader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnRunHeader*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnCounter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnCounter::Class_Name()
{
   return "BmnCounter";
}

//______________________________________________________________________________
const char *BmnCounter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnCounter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnCounter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnCounter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnCounter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnCounter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnCounter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnCounter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnIdentifiableTrack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnIdentifiableTrack::Class_Name()
{
   return "BmnIdentifiableTrack";
}

//______________________________________________________________________________
const char *BmnIdentifiableTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnIdentifiableTrack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnIdentifiableTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnIdentifiableTrack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnIdentifiableTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnIdentifiableTrack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnIdentifiableTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnIdentifiableTrack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr DigiArrays::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DigiArrays::Class_Name()
{
   return "DigiArrays";
}

//______________________________________________________________________________
const char *DigiArrays::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DigiArrays*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DigiArrays::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DigiArrays*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DigiArrays::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DigiArrays*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DigiArrays::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DigiArrays*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnEventQuality::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnEventQuality::Class_Name()
{
   return "BmnEventQuality";
}

//______________________________________________________________________________
const char *BmnEventQuality::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnEventQuality*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnEventQuality::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnEventQuality*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnEventQuality::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnEventQuality*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnEventQuality::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnEventQuality*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnGemStripHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGemStripHit::Class_Name()
{
   return "BmnGemStripHit";
}

//______________________________________________________________________________
const char *BmnGemStripHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGemStripHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGemStripHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGemStripHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemStripHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnGemTrack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGemTrack::Class_Name()
{
   return "BmnGemTrack";
}

//______________________________________________________________________________
const char *BmnGemTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemTrack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGemTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemTrack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGemTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemTrack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGemTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemTrack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmVertex::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmVertex::Class_Name()
{
   return "CbmVertex";
}

//______________________________________________________________________________
const char *CbmVertex::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmVertex*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmVertex::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmVertex*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmVertex::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmVertex*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmVertex::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmVertex*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsTrackFinder::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsTrackFinder::Class_Name()
{
   return "CbmStsTrackFinder";
}

//______________________________________________________________________________
const char *CbmStsTrackFinder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsTrackFinder*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsTrackFinder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsTrackFinder*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsTrackFinder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsTrackFinder*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsTrackFinder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsTrackFinder*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsTrackFitter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsTrackFitter::Class_Name()
{
   return "CbmStsTrackFitter";
}

//______________________________________________________________________________
const char *CbmStsTrackFitter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsTrackFitter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsTrackFitter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsTrackFitter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsTrackFitter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsTrackFitter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsTrackFitter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsTrackFitter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmTofMerger::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmTofMerger::Class_Name()
{
   return "CbmTofMerger";
}

//______________________________________________________________________________
const char *CbmTofMerger::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmTofMerger*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmTofMerger::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmTofMerger*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmTofMerger::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmTofMerger*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmTofMerger::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmTofMerger*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmTrackMerger::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmTrackMerger::Class_Name()
{
   return "CbmTrackMerger";
}

//______________________________________________________________________________
const char *CbmTrackMerger::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmTrackMerger*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmTrackMerger::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmTrackMerger*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmTrackMerger::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmTrackMerger*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmTrackMerger::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmTrackMerger*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmPrimaryVertexFinder::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmPrimaryVertexFinder::Class_Name()
{
   return "CbmPrimaryVertexFinder";
}

//______________________________________________________________________________
const char *CbmPrimaryVertexFinder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmPrimaryVertexFinder*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmPrimaryVertexFinder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmPrimaryVertexFinder*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmPrimaryVertexFinder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmPrimaryVertexFinder*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmPrimaryVertexFinder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmPrimaryVertexFinder*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmFindPrimaryVertex::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmFindPrimaryVertex::Class_Name()
{
   return "CbmFindPrimaryVertex";
}

//______________________________________________________________________________
const char *CbmFindPrimaryVertex::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmFindPrimaryVertex*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmFindPrimaryVertex::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmFindPrimaryVertex*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmFindPrimaryVertex::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmFindPrimaryVertex*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmFindPrimaryVertex::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmFindPrimaryVertex*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnFileSource::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnFileSource::Class_Name()
{
   return "BmnFileSource";
}

//______________________________________________________________________________
const char *BmnFileSource::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFileSource*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnFileSource::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFileSource*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnFileSource::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFileSource*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnFileSource::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFileSource*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void CbmBaseHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmBaseHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmBaseHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmBaseHit::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_CbmBaseHit(void *p) {
      delete ((::CbmBaseHit*)p);
   }
   static void deleteArray_CbmBaseHit(void *p) {
      delete [] ((::CbmBaseHit*)p);
   }
   static void destruct_CbmBaseHit(void *p) {
      typedef ::CbmBaseHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmBaseHit

//______________________________________________________________________________
void CbmHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmHit::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_CbmHit(void *p) {
      delete ((::CbmHit*)p);
   }
   static void deleteArray_CbmHit(void *p) {
      delete [] ((::CbmHit*)p);
   }
   static void destruct_CbmHit(void *p) {
      typedef ::CbmHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmHit

//______________________________________________________________________________
void CbmPixelHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmPixelHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmPixelHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmPixelHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmPixelHit(void *p) {
      return  p ? new(p) ::CbmPixelHit : new ::CbmPixelHit;
   }
   static void *newArray_CbmPixelHit(Long_t nElements, void *p) {
      return p ? new(p) ::CbmPixelHit[nElements] : new ::CbmPixelHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmPixelHit(void *p) {
      delete ((::CbmPixelHit*)p);
   }
   static void deleteArray_CbmPixelHit(void *p) {
      delete [] ((::CbmPixelHit*)p);
   }
   static void destruct_CbmPixelHit(void *p) {
      typedef ::CbmPixelHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmPixelHit

//______________________________________________________________________________
void CbmDetectorList::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmDetectorList.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmDetectorList::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmDetectorList::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmDetectorList(void *p) {
      return  p ? new(p) ::CbmDetectorList : new ::CbmDetectorList;
   }
   static void *newArray_CbmDetectorList(Long_t nElements, void *p) {
      return p ? new(p) ::CbmDetectorList[nElements] : new ::CbmDetectorList[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmDetectorList(void *p) {
      delete ((::CbmDetectorList*)p);
   }
   static void deleteArray_CbmDetectorList(void *p) {
      delete [] ((::CbmDetectorList*)p);
   }
   static void destruct_CbmDetectorList(void *p) {
      typedef ::CbmDetectorList current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmDetectorList

//______________________________________________________________________________
void CbmStack::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStack::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStack(void *p) {
      return  p ? new(p) ::CbmStack : new ::CbmStack;
   }
   static void *newArray_CbmStack(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStack[nElements] : new ::CbmStack[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStack(void *p) {
      delete ((::CbmStack*)p);
   }
   static void deleteArray_CbmStack(void *p) {
      delete [] ((::CbmStack*)p);
   }
   static void destruct_CbmStack(void *p) {
      typedef ::CbmStack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStack

//______________________________________________________________________________
void CbmMCTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmMCTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmMCTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmMCTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmMCTrack(void *p) {
      return  p ? new(p) ::CbmMCTrack : new ::CbmMCTrack;
   }
   static void *newArray_CbmMCTrack(Long_t nElements, void *p) {
      return p ? new(p) ::CbmMCTrack[nElements] : new ::CbmMCTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmMCTrack(void *p) {
      delete ((::CbmMCTrack*)p);
   }
   static void deleteArray_CbmMCTrack(void *p) {
      delete [] ((::CbmMCTrack*)p);
   }
   static void destruct_CbmMCTrack(void *p) {
      typedef ::CbmMCTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmMCTrack

//______________________________________________________________________________
void CbmStsPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsPoint(void *p) {
      return  p ? new(p) ::CbmStsPoint : new ::CbmStsPoint;
   }
   static void *newArray_CbmStsPoint(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsPoint[nElements] : new ::CbmStsPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsPoint(void *p) {
      delete ((::CbmStsPoint*)p);
   }
   static void deleteArray_CbmStsPoint(void *p) {
      delete [] ((::CbmStsPoint*)p);
   }
   static void destruct_CbmStsPoint(void *p) {
      typedef ::CbmStsPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsPoint

//______________________________________________________________________________
void CbmStsDetectorId::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsDetectorId.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsDetectorId::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsDetectorId::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsDetectorId(void *p) {
      return  p ? new(p) ::CbmStsDetectorId : new ::CbmStsDetectorId;
   }
   static void *newArray_CbmStsDetectorId(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsDetectorId[nElements] : new ::CbmStsDetectorId[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsDetectorId(void *p) {
      delete ((::CbmStsDetectorId*)p);
   }
   static void deleteArray_CbmStsDetectorId(void *p) {
      delete [] ((::CbmStsDetectorId*)p);
   }
   static void destruct_CbmStsDetectorId(void *p) {
      typedef ::CbmStsDetectorId current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsDetectorId

//______________________________________________________________________________
void CbmStsDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsDigi(void *p) {
      return  p ? new(p) ::CbmStsDigi : new ::CbmStsDigi;
   }
   static void *newArray_CbmStsDigi(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsDigi[nElements] : new ::CbmStsDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsDigi(void *p) {
      delete ((::CbmStsDigi*)p);
   }
   static void deleteArray_CbmStsDigi(void *p) {
      delete [] ((::CbmStsDigi*)p);
   }
   static void destruct_CbmStsDigi(void *p) {
      typedef ::CbmStsDigi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsDigi

//______________________________________________________________________________
void CbmStsDigiMatch::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsDigiMatch.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsDigiMatch::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsDigiMatch::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsDigiMatch(void *p) {
      return  p ? new(p) ::CbmStsDigiMatch : new ::CbmStsDigiMatch;
   }
   static void *newArray_CbmStsDigiMatch(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsDigiMatch[nElements] : new ::CbmStsDigiMatch[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsDigiMatch(void *p) {
      delete ((::CbmStsDigiMatch*)p);
   }
   static void deleteArray_CbmStsDigiMatch(void *p) {
      delete [] ((::CbmStsDigiMatch*)p);
   }
   static void destruct_CbmStsDigiMatch(void *p) {
      typedef ::CbmStsDigiMatch current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsDigiMatch

//______________________________________________________________________________
void CbmMvdDetectorId::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmMvdDetectorId.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmMvdDetectorId::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmMvdDetectorId::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmMvdDetectorId(void *p) {
      return  p ? new(p) ::CbmMvdDetectorId : new ::CbmMvdDetectorId;
   }
   static void *newArray_CbmMvdDetectorId(Long_t nElements, void *p) {
      return p ? new(p) ::CbmMvdDetectorId[nElements] : new ::CbmMvdDetectorId[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmMvdDetectorId(void *p) {
      delete ((::CbmMvdDetectorId*)p);
   }
   static void deleteArray_CbmMvdDetectorId(void *p) {
      delete [] ((::CbmMvdDetectorId*)p);
   }
   static void destruct_CbmMvdDetectorId(void *p) {
      typedef ::CbmMvdDetectorId current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmMvdDetectorId

//______________________________________________________________________________
void CbmMvdPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmMvdPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmMvdPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmMvdPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmMvdPoint(void *p) {
      return  p ? new(p) ::CbmMvdPoint : new ::CbmMvdPoint;
   }
   static void *newArray_CbmMvdPoint(Long_t nElements, void *p) {
      return p ? new(p) ::CbmMvdPoint[nElements] : new ::CbmMvdPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmMvdPoint(void *p) {
      delete ((::CbmMvdPoint*)p);
   }
   static void deleteArray_CbmMvdPoint(void *p) {
      delete [] ((::CbmMvdPoint*)p);
   }
   static void destruct_CbmMvdPoint(void *p) {
      typedef ::CbmMvdPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmMvdPoint

//______________________________________________________________________________
void CbmTofPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmTofPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmTofPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmTofPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmTofPoint(void *p) {
      return  p ? new(p) ::CbmTofPoint : new ::CbmTofPoint;
   }
   static void *newArray_CbmTofPoint(Long_t nElements, void *p) {
      return p ? new(p) ::CbmTofPoint[nElements] : new ::CbmTofPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmTofPoint(void *p) {
      delete ((::CbmTofPoint*)p);
   }
   static void deleteArray_CbmTofPoint(void *p) {
      delete [] ((::CbmTofPoint*)p);
   }
   static void destruct_CbmTofPoint(void *p) {
      typedef ::CbmTofPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmTofPoint

//______________________________________________________________________________
void CbmPsdPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmPsdPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmPsdPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmPsdPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmPsdPoint(void *p) {
      return  p ? new(p) ::CbmPsdPoint : new ::CbmPsdPoint;
   }
   static void *newArray_CbmPsdPoint(Long_t nElements, void *p) {
      return p ? new(p) ::CbmPsdPoint[nElements] : new ::CbmPsdPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmPsdPoint(void *p) {
      delete ((::CbmPsdPoint*)p);
   }
   static void deleteArray_CbmPsdPoint(void *p) {
      delete [] ((::CbmPsdPoint*)p);
   }
   static void destruct_CbmPsdPoint(void *p) {
      typedef ::CbmPsdPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmPsdPoint

namespace ROOT {
   // Wrapper around operator delete
   static void delete_CbmMCBuffer(void *p) {
      delete ((::CbmMCBuffer*)p);
   }
   static void deleteArray_CbmMCBuffer(void *p) {
      delete [] ((::CbmMCBuffer*)p);
   }
   static void destruct_CbmMCBuffer(void *p) {
      typedef ::CbmMCBuffer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmMCBuffer

//______________________________________________________________________________
void BmnHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnHit(void *p) {
      return  p ? new(p) ::BmnHit : new ::BmnHit;
   }
   static void *newArray_BmnHit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnHit[nElements] : new ::BmnHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnHit(void *p) {
      delete ((::BmnHit*)p);
   }
   static void deleteArray_BmnHit(void *p) {
      delete [] ((::BmnHit*)p);
   }
   static void destruct_BmnHit(void *p) {
      typedef ::BmnHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnHit

//______________________________________________________________________________
void CbmTofHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmTofHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmTofHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmTofHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmTofHit(void *p) {
      return  p ? new(p) ::CbmTofHit : new ::CbmTofHit;
   }
   static void *newArray_CbmTofHit(Long_t nElements, void *p) {
      return p ? new(p) ::CbmTofHit[nElements] : new ::CbmTofHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmTofHit(void *p) {
      delete ((::CbmTofHit*)p);
   }
   static void deleteArray_CbmTofHit(void *p) {
      delete [] ((::CbmTofHit*)p);
   }
   static void destruct_CbmTofHit(void *p) {
      typedef ::CbmTofHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmTofHit

//______________________________________________________________________________
void CbmTofTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmTofTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmTofTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmTofTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmTofTrack(void *p) {
      return  p ? new(p) ::CbmTofTrack : new ::CbmTofTrack;
   }
   static void *newArray_CbmTofTrack(Long_t nElements, void *p) {
      return p ? new(p) ::CbmTofTrack[nElements] : new ::CbmTofTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmTofTrack(void *p) {
      delete ((::CbmTofTrack*)p);
   }
   static void deleteArray_CbmTofTrack(void *p) {
      delete [] ((::CbmTofTrack*)p);
   }
   static void destruct_CbmTofTrack(void *p) {
      typedef ::CbmTofTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmTofTrack

//______________________________________________________________________________
void CbmEcalPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmEcalPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmEcalPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmEcalPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmEcalPoint(void *p) {
      return  p ? new(p) ::CbmEcalPoint : new ::CbmEcalPoint;
   }
   static void *newArray_CbmEcalPoint(Long_t nElements, void *p) {
      return p ? new(p) ::CbmEcalPoint[nElements] : new ::CbmEcalPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmEcalPoint(void *p) {
      delete ((::CbmEcalPoint*)p);
   }
   static void deleteArray_CbmEcalPoint(void *p) {
      delete [] ((::CbmEcalPoint*)p);
   }
   static void destruct_CbmEcalPoint(void *p) {
      typedef ::CbmEcalPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmEcalPoint

//______________________________________________________________________________
void CbmDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_CbmDigi(void *p) {
      delete ((::CbmDigi*)p);
   }
   static void deleteArray_CbmDigi(void *p) {
      delete [] ((::CbmDigi*)p);
   }
   static void destruct_CbmDigi(void *p) {
      typedef ::CbmDigi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmDigi

namespace ROOT {
   // Wrapper around operator delete
   static void delete_CbmDaqBuffer(void *p) {
      delete ((::CbmDaqBuffer*)p);
   }
   static void deleteArray_CbmDaqBuffer(void *p) {
      delete [] ((::CbmDaqBuffer*)p);
   }
   static void destruct_CbmDaqBuffer(void *p) {
      typedef ::CbmDaqBuffer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmDaqBuffer

//______________________________________________________________________________
void CbmStsDigiLight::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsDigiLight.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsDigiLight::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsDigiLight::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsDigiLight(void *p) {
      return  p ? new(p) ::CbmStsDigiLight : new ::CbmStsDigiLight;
   }
   static void *newArray_CbmStsDigiLight(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsDigiLight[nElements] : new ::CbmStsDigiLight[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsDigiLight(void *p) {
      delete ((::CbmStsDigiLight*)p);
   }
   static void deleteArray_CbmStsDigiLight(void *p) {
      delete [] ((::CbmStsDigiLight*)p);
   }
   static void destruct_CbmStsDigiLight(void *p) {
      typedef ::CbmStsDigiLight current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsDigiLight

//______________________________________________________________________________
void CbmStsHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsHit(void *p) {
      return  p ? new(p) ::CbmStsHit : new ::CbmStsHit;
   }
   static void *newArray_CbmStsHit(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsHit[nElements] : new ::CbmStsHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsHit(void *p) {
      delete ((::CbmStsHit*)p);
   }
   static void deleteArray_CbmStsHit(void *p) {
      delete [] ((::CbmStsHit*)p);
   }
   static void destruct_CbmStsHit(void *p) {
      typedef ::CbmStsHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsHit

//______________________________________________________________________________
void CbmStsCluster::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsCluster.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsCluster::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsCluster::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsCluster(void *p) {
      return  p ? new(p) ::CbmStsCluster : new ::CbmStsCluster;
   }
   static void *newArray_CbmStsCluster(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsCluster[nElements] : new ::CbmStsCluster[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsCluster(void *p) {
      delete ((::CbmStsCluster*)p);
   }
   static void deleteArray_CbmStsCluster(void *p) {
      delete [] ((::CbmStsCluster*)p);
   }
   static void destruct_CbmStsCluster(void *p) {
      typedef ::CbmStsCluster current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsCluster

//______________________________________________________________________________
void CbmStsTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsTrack(void *p) {
      return  p ? new(p) ::CbmStsTrack : new ::CbmStsTrack;
   }
   static void *newArray_CbmStsTrack(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsTrack[nElements] : new ::CbmStsTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsTrack(void *p) {
      delete ((::CbmStsTrack*)p);
   }
   static void deleteArray_CbmStsTrack(void *p) {
      delete [] ((::CbmStsTrack*)p);
   }
   static void destruct_CbmStsTrack(void *p) {
      typedef ::CbmStsTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsTrack

//______________________________________________________________________________
void CbmTrackMatch::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmTrackMatch.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmTrackMatch::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmTrackMatch::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmTrackMatch(void *p) {
      return  p ? new(p) ::CbmTrackMatch : new ::CbmTrackMatch;
   }
   static void *newArray_CbmTrackMatch(Long_t nElements, void *p) {
      return p ? new(p) ::CbmTrackMatch[nElements] : new ::CbmTrackMatch[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmTrackMatch(void *p) {
      delete ((::CbmTrackMatch*)p);
   }
   static void deleteArray_CbmTrackMatch(void *p) {
      delete [] ((::CbmTrackMatch*)p);
   }
   static void destruct_CbmTrackMatch(void *p) {
      typedef ::CbmTrackMatch current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmTrackMatch

//______________________________________________________________________________
void CbmMvdHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmMvdHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmMvdHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmMvdHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmMvdHit(void *p) {
      return  p ? new(p) ::CbmMvdHit : new ::CbmMvdHit;
   }
   static void *newArray_CbmMvdHit(Long_t nElements, void *p) {
      return p ? new(p) ::CbmMvdHit[nElements] : new ::CbmMvdHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmMvdHit(void *p) {
      delete ((::CbmMvdHit*)p);
   }
   static void deleteArray_CbmMvdHit(void *p) {
      delete [] ((::CbmMvdHit*)p);
   }
   static void destruct_CbmMvdHit(void *p) {
      typedef ::CbmMvdHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmMvdHit

//______________________________________________________________________________
void CbmMvdHitMatch::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmMvdHitMatch.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmMvdHitMatch::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmMvdHitMatch::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmMvdHitMatch(void *p) {
      return  p ? new(p) ::CbmMvdHitMatch : new ::CbmMvdHitMatch;
   }
   static void *newArray_CbmMvdHitMatch(Long_t nElements, void *p) {
      return p ? new(p) ::CbmMvdHitMatch[nElements] : new ::CbmMvdHitMatch[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmMvdHitMatch(void *p) {
      delete ((::CbmMvdHitMatch*)p);
   }
   static void deleteArray_CbmMvdHitMatch(void *p) {
      delete [] ((::CbmMvdHitMatch*)p);
   }
   static void destruct_CbmMvdHitMatch(void *p) {
      typedef ::CbmMvdHitMatch current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmMvdHitMatch

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnFitNode(void *p) {
      return  p ? new(p) ::BmnFitNode : new ::BmnFitNode;
   }
   static void *newArray_BmnFitNode(Long_t nElements, void *p) {
      return p ? new(p) ::BmnFitNode[nElements] : new ::BmnFitNode[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnFitNode(void *p) {
      delete ((::BmnFitNode*)p);
   }
   static void deleteArray_BmnFitNode(void *p) {
      delete [] ((::BmnFitNode*)p);
   }
   static void destruct_BmnFitNode(void *p) {
      typedef ::BmnFitNode current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnFitNode

//______________________________________________________________________________
void CbmGlobalTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmGlobalTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmGlobalTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmGlobalTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmGlobalTrack(void *p) {
      return  p ? new(p) ::CbmGlobalTrack : new ::CbmGlobalTrack;
   }
   static void *newArray_CbmGlobalTrack(Long_t nElements, void *p) {
      return p ? new(p) ::CbmGlobalTrack[nElements] : new ::CbmGlobalTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmGlobalTrack(void *p) {
      delete ((::CbmGlobalTrack*)p);
   }
   static void deleteArray_CbmGlobalTrack(void *p) {
      delete [] ((::CbmGlobalTrack*)p);
   }
   static void destruct_CbmGlobalTrack(void *p) {
      typedef ::CbmGlobalTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmGlobalTrack

//______________________________________________________________________________
void CbmPsdHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmPsdHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmPsdHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmPsdHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmPsdHit(void *p) {
      return  p ? new(p) ::CbmPsdHit : new ::CbmPsdHit;
   }
   static void *newArray_CbmPsdHit(Long_t nElements, void *p) {
      return p ? new(p) ::CbmPsdHit[nElements] : new ::CbmPsdHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmPsdHit(void *p) {
      delete ((::CbmPsdHit*)p);
   }
   static void deleteArray_CbmPsdHit(void *p) {
      delete [] ((::CbmPsdHit*)p);
   }
   static void destruct_CbmPsdHit(void *p) {
      typedef ::CbmPsdHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmPsdHit

//______________________________________________________________________________
void CbmPsdDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmPsdDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmPsdDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmPsdDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmPsdDigi(void *p) {
      return  p ? new(p) ::CbmPsdDigi : new ::CbmPsdDigi;
   }
   static void *newArray_CbmPsdDigi(Long_t nElements, void *p) {
      return p ? new(p) ::CbmPsdDigi[nElements] : new ::CbmPsdDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmPsdDigi(void *p) {
      delete ((::CbmPsdDigi*)p);
   }
   static void deleteArray_CbmPsdDigi(void *p) {
      delete [] ((::CbmPsdDigi*)p);
   }
   static void destruct_CbmPsdDigi(void *p) {
      typedef ::CbmPsdDigi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmPsdDigi

//______________________________________________________________________________
void CbmPsdEventData::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmPsdEventData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmPsdEventData::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmPsdEventData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmPsdEventData(void *p) {
      return  p ? new(p) ::CbmPsdEventData : new ::CbmPsdEventData;
   }
   static void *newArray_CbmPsdEventData(Long_t nElements, void *p) {
      return p ? new(p) ::CbmPsdEventData[nElements] : new ::CbmPsdEventData[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmPsdEventData(void *p) {
      delete ((::CbmPsdEventData*)p);
   }
   static void deleteArray_CbmPsdEventData(void *p) {
      delete [] ((::CbmPsdEventData*)p);
   }
   static void destruct_CbmPsdEventData(void *p) {
      typedef ::CbmPsdEventData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmPsdEventData

//______________________________________________________________________________
void CbmMvdGeoPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmMvdGeoPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmMvdGeoPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmMvdGeoPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmMvdGeoPar(void *p) {
      return  p ? new(p) ::CbmMvdGeoPar : new ::CbmMvdGeoPar;
   }
   static void *newArray_CbmMvdGeoPar(Long_t nElements, void *p) {
      return p ? new(p) ::CbmMvdGeoPar[nElements] : new ::CbmMvdGeoPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmMvdGeoPar(void *p) {
      delete ((::CbmMvdGeoPar*)p);
   }
   static void deleteArray_CbmMvdGeoPar(void *p) {
      delete [] ((::CbmMvdGeoPar*)p);
   }
   static void destruct_CbmMvdGeoPar(void *p) {
      typedef ::CbmMvdGeoPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmMvdGeoPar

//______________________________________________________________________________
void CbmGeoSttPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmGeoSttPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmGeoSttPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmGeoSttPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmGeoSttPar(void *p) {
      return  p ? new(p) ::CbmGeoSttPar : new ::CbmGeoSttPar;
   }
   static void *newArray_CbmGeoSttPar(Long_t nElements, void *p) {
      return p ? new(p) ::CbmGeoSttPar[nElements] : new ::CbmGeoSttPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmGeoSttPar(void *p) {
      delete ((::CbmGeoSttPar*)p);
   }
   static void deleteArray_CbmGeoSttPar(void *p) {
      delete [] ((::CbmGeoSttPar*)p);
   }
   static void destruct_CbmGeoSttPar(void *p) {
      typedef ::CbmGeoSttPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmGeoSttPar

//______________________________________________________________________________
void BmnDchHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnDchHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnDchHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnDchHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnDchHit(void *p) {
      return  p ? new(p) ::BmnDchHit : new ::BmnDchHit;
   }
   static void *newArray_BmnDchHit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnDchHit[nElements] : new ::BmnDchHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnDchHit(void *p) {
      delete ((::BmnDchHit*)p);
   }
   static void deleteArray_BmnDchHit(void *p) {
      delete [] ((::BmnDchHit*)p);
   }
   static void destruct_BmnDchHit(void *p) {
      typedef ::BmnDchHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnDchHit

//______________________________________________________________________________
void BmnDchHitOriginal::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnDchHitOriginal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnDchHitOriginal::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnDchHitOriginal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnDchHitOriginal(void *p) {
      return  p ? new(p) ::BmnDchHitOriginal : new ::BmnDchHitOriginal;
   }
   static void *newArray_BmnDchHitOriginal(Long_t nElements, void *p) {
      return p ? new(p) ::BmnDchHitOriginal[nElements] : new ::BmnDchHitOriginal[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnDchHitOriginal(void *p) {
      delete ((::BmnDchHitOriginal*)p);
   }
   static void deleteArray_BmnDchHitOriginal(void *p) {
      delete [] ((::BmnDchHitOriginal*)p);
   }
   static void destruct_BmnDchHitOriginal(void *p) {
      typedef ::BmnDchHitOriginal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnDchHitOriginal

//______________________________________________________________________________
void BmnTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTrack(void *p) {
      return  p ? new(p) ::BmnTrack : new ::BmnTrack;
   }
   static void *newArray_BmnTrack(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTrack[nElements] : new ::BmnTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTrack(void *p) {
      delete ((::BmnTrack*)p);
   }
   static void deleteArray_BmnTrack(void *p) {
      delete [] ((::BmnTrack*)p);
   }
   static void destruct_BmnTrack(void *p) {
      typedef ::BmnTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTrack

//______________________________________________________________________________
void BmnGlobalTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGlobalTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGlobalTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGlobalTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnGlobalTrack(void *p) {
      return  p ? new(p) ::BmnGlobalTrack : new ::BmnGlobalTrack;
   }
   static void *newArray_BmnGlobalTrack(Long_t nElements, void *p) {
      return p ? new(p) ::BmnGlobalTrack[nElements] : new ::BmnGlobalTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnGlobalTrack(void *p) {
      delete ((::BmnGlobalTrack*)p);
   }
   static void deleteArray_BmnGlobalTrack(void *p) {
      delete [] ((::BmnGlobalTrack*)p);
   }
   static void destruct_BmnGlobalTrack(void *p) {
      typedef ::BmnGlobalTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGlobalTrack

//______________________________________________________________________________
void BmnMwpcHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnMwpcHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnMwpcHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnMwpcHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnMwpcHit(void *p) {
      return  p ? new(p) ::BmnMwpcHit : new ::BmnMwpcHit;
   }
   static void *newArray_BmnMwpcHit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnMwpcHit[nElements] : new ::BmnMwpcHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnMwpcHit(void *p) {
      delete ((::BmnMwpcHit*)p);
   }
   static void deleteArray_BmnMwpcHit(void *p) {
      delete [] ((::BmnMwpcHit*)p);
   }
   static void destruct_BmnMwpcHit(void *p) {
      typedef ::BmnMwpcHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMwpcHit

//______________________________________________________________________________
void BmnTofHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTofHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTofHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTofHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTofHit(void *p) {
      return  p ? new(p) ::BmnTofHit : new ::BmnTofHit;
   }
   static void *newArray_BmnTofHit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTofHit[nElements] : new ::BmnTofHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTofHit(void *p) {
      delete ((::BmnTofHit*)p);
   }
   static void deleteArray_BmnTofHit(void *p) {
      delete [] ((::BmnTofHit*)p);
   }
   static void destruct_BmnTofHit(void *p) {
      typedef ::BmnTofHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTofHit

//______________________________________________________________________________
void BmnLink::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnLink.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnLink::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnLink::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnLink(void *p) {
      return  p ? new(p) ::BmnLink : new ::BmnLink;
   }
   static void *newArray_BmnLink(Long_t nElements, void *p) {
      return p ? new(p) ::BmnLink[nElements] : new ::BmnLink[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnLink(void *p) {
      delete ((::BmnLink*)p);
   }
   static void deleteArray_BmnLink(void *p) {
      delete [] ((::BmnLink*)p);
   }
   static void destruct_BmnLink(void *p) {
      typedef ::BmnLink current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnLink

//______________________________________________________________________________
void BmnMatch::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnMatch.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnMatch::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnMatch::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnMatch(void *p) {
      return  p ? new(p) ::BmnMatch : new ::BmnMatch;
   }
   static void *newArray_BmnMatch(Long_t nElements, void *p) {
      return p ? new(p) ::BmnMatch[nElements] : new ::BmnMatch[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnMatch(void *p) {
      delete ((::BmnMatch*)p);
   }
   static void deleteArray_BmnMatch(void *p) {
      delete [] ((::BmnMatch*)p);
   }
   static void destruct_BmnMatch(void *p) {
      typedef ::BmnMatch current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMatch

//______________________________________________________________________________
void BmnTrackMatch::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTrackMatch.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTrackMatch::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTrackMatch::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTrackMatch(void *p) {
      return  p ? new(p) ::BmnTrackMatch : new ::BmnTrackMatch;
   }
   static void *newArray_BmnTrackMatch(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTrackMatch[nElements] : new ::BmnTrackMatch[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTrackMatch(void *p) {
      delete ((::BmnTrackMatch*)p);
   }
   static void deleteArray_BmnTrackMatch(void *p) {
      delete [] ((::BmnTrackMatch*)p);
   }
   static void destruct_BmnTrackMatch(void *p) {
      typedef ::BmnTrackMatch current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTrackMatch

//______________________________________________________________________________
void BmnMwpcDigit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnMwpcDigit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnMwpcDigit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnMwpcDigit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnMwpcDigit(void *p) {
      return  p ? new(p) ::BmnMwpcDigit : new ::BmnMwpcDigit;
   }
   static void *newArray_BmnMwpcDigit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnMwpcDigit[nElements] : new ::BmnMwpcDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnMwpcDigit(void *p) {
      delete ((::BmnMwpcDigit*)p);
   }
   static void deleteArray_BmnMwpcDigit(void *p) {
      delete [] ((::BmnMwpcDigit*)p);
   }
   static void destruct_BmnMwpcDigit(void *p) {
      typedef ::BmnMwpcDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMwpcDigit

//______________________________________________________________________________
void BmnTof1Digit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTof1Digit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTof1Digit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTof1Digit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTof1Digit(void *p) {
      return  p ? new(p) ::BmnTof1Digit : new ::BmnTof1Digit;
   }
   static void *newArray_BmnTof1Digit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTof1Digit[nElements] : new ::BmnTof1Digit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTof1Digit(void *p) {
      delete ((::BmnTof1Digit*)p);
   }
   static void deleteArray_BmnTof1Digit(void *p) {
      delete [] ((::BmnTof1Digit*)p);
   }
   static void destruct_BmnTof1Digit(void *p) {
      typedef ::BmnTof1Digit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTof1Digit

//______________________________________________________________________________
void BmnTof2Digit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTof2Digit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTof2Digit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTof2Digit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTof2Digit(void *p) {
      return  p ? new(p) ::BmnTof2Digit : new ::BmnTof2Digit;
   }
   static void *newArray_BmnTof2Digit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTof2Digit[nElements] : new ::BmnTof2Digit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTof2Digit(void *p) {
      delete ((::BmnTof2Digit*)p);
   }
   static void deleteArray_BmnTof2Digit(void *p) {
      delete [] ((::BmnTof2Digit*)p);
   }
   static void destruct_BmnTof2Digit(void *p) {
      typedef ::BmnTof2Digit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTof2Digit

//______________________________________________________________________________
void BmnTrigDigit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTrigDigit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTrigDigit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTrigDigit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTrigDigit(void *p) {
      return  p ? new(p) ::BmnTrigDigit : new ::BmnTrigDigit;
   }
   static void *newArray_BmnTrigDigit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTrigDigit[nElements] : new ::BmnTrigDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTrigDigit(void *p) {
      delete ((::BmnTrigDigit*)p);
   }
   static void deleteArray_BmnTrigDigit(void *p) {
      delete [] ((::BmnTrigDigit*)p);
   }
   static void destruct_BmnTrigDigit(void *p) {
      typedef ::BmnTrigDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTrigDigit

//______________________________________________________________________________
void BmnADCDigit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnADCDigit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnADCDigit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnADCDigit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnADCDigit(void *p) {
      return  p ? new(p) ::BmnADCDigit : new ::BmnADCDigit;
   }
   static void *newArray_BmnADCDigit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnADCDigit[nElements] : new ::BmnADCDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnADCDigit(void *p) {
      delete ((::BmnADCDigit*)p);
   }
   static void deleteArray_BmnADCDigit(void *p) {
      delete [] ((::BmnADCDigit*)p);
   }
   static void destruct_BmnADCDigit(void *p) {
      typedef ::BmnADCDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnADCDigit

//______________________________________________________________________________
void BmnTQDCADCDigit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTQDCADCDigit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTQDCADCDigit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTQDCADCDigit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTQDCADCDigit(void *p) {
      return  p ? new(p) ::BmnTQDCADCDigit : new ::BmnTQDCADCDigit;
   }
   static void *newArray_BmnTQDCADCDigit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTQDCADCDigit[nElements] : new ::BmnTQDCADCDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTQDCADCDigit(void *p) {
      delete ((::BmnTQDCADCDigit*)p);
   }
   static void deleteArray_BmnTQDCADCDigit(void *p) {
      delete [] ((::BmnTQDCADCDigit*)p);
   }
   static void destruct_BmnTQDCADCDigit(void *p) {
      typedef ::BmnTQDCADCDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTQDCADCDigit

//______________________________________________________________________________
void BmnTrigWaveDigit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTrigWaveDigit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTrigWaveDigit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTrigWaveDigit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTrigWaveDigit(void *p) {
      return  p ? new(p) ::BmnTrigWaveDigit : new ::BmnTrigWaveDigit;
   }
   static void *newArray_BmnTrigWaveDigit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTrigWaveDigit[nElements] : new ::BmnTrigWaveDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTrigWaveDigit(void *p) {
      delete ((::BmnTrigWaveDigit*)p);
   }
   static void deleteArray_BmnTrigWaveDigit(void *p) {
      delete [] ((::BmnTrigWaveDigit*)p);
   }
   static void destruct_BmnTrigWaveDigit(void *p) {
      typedef ::BmnTrigWaveDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTrigWaveDigit

//______________________________________________________________________________
void BmnDchDigit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnDchDigit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnDchDigit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnDchDigit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnDchDigit(void *p) {
      return  p ? new(p) ::BmnDchDigit : new ::BmnDchDigit;
   }
   static void *newArray_BmnDchDigit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnDchDigit[nElements] : new ::BmnDchDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnDchDigit(void *p) {
      delete ((::BmnDchDigit*)p);
   }
   static void deleteArray_BmnDchDigit(void *p) {
      delete [] ((::BmnDchDigit*)p);
   }
   static void destruct_BmnDchDigit(void *p) {
      typedef ::BmnDchDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnDchDigit

//______________________________________________________________________________
void BmnEcalDigit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnEcalDigit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnEcalDigit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnEcalDigit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnEcalDigit(void *p) {
      return  p ? new(p) ::BmnEcalDigit : new ::BmnEcalDigit;
   }
   static void *newArray_BmnEcalDigit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnEcalDigit[nElements] : new ::BmnEcalDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnEcalDigit(void *p) {
      delete ((::BmnEcalDigit*)p);
   }
   static void deleteArray_BmnEcalDigit(void *p) {
      delete [] ((::BmnEcalDigit*)p);
   }
   static void destruct_BmnEcalDigit(void *p) {
      typedef ::BmnEcalDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnEcalDigit

//______________________________________________________________________________
void BmnTacquilaDigit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTacquilaDigit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTacquilaDigit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTacquilaDigit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTacquilaDigit(void *p) {
      return  p ? new(p) ::BmnTacquilaDigit : new ::BmnTacquilaDigit;
   }
   static void *newArray_BmnTacquilaDigit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTacquilaDigit[nElements] : new ::BmnTacquilaDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTacquilaDigit(void *p) {
      delete ((::BmnTacquilaDigit*)p);
   }
   static void deleteArray_BmnTacquilaDigit(void *p) {
      delete [] ((::BmnTacquilaDigit*)p);
   }
   static void destruct_BmnTacquilaDigit(void *p) {
      typedef ::BmnTacquilaDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTacquilaDigit

//______________________________________________________________________________
void BmnTDCDigit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTDCDigit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTDCDigit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTDCDigit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTDCDigit(void *p) {
      return  p ? new(p) ::BmnTDCDigit : new ::BmnTDCDigit;
   }
   static void *newArray_BmnTDCDigit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTDCDigit[nElements] : new ::BmnTDCDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTDCDigit(void *p) {
      delete ((::BmnTDCDigit*)p);
   }
   static void deleteArray_BmnTDCDigit(void *p) {
      delete [] ((::BmnTDCDigit*)p);
   }
   static void destruct_BmnTDCDigit(void *p) {
      typedef ::BmnTDCDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTDCDigit

//______________________________________________________________________________
void BmnHRBDigit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnHRBDigit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnHRBDigit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnHRBDigit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnHRBDigit(void *p) {
      return  p ? new(p) ::BmnHRBDigit : new ::BmnHRBDigit;
   }
   static void *newArray_BmnHRBDigit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnHRBDigit[nElements] : new ::BmnHRBDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnHRBDigit(void *p) {
      delete ((::BmnHRBDigit*)p);
   }
   static void deleteArray_BmnHRBDigit(void *p) {
      delete [] ((::BmnHRBDigit*)p);
   }
   static void destruct_BmnHRBDigit(void *p) {
      typedef ::BmnHRBDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnHRBDigit

//______________________________________________________________________________
void BmnSyncDigit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSyncDigit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSyncDigit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSyncDigit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSyncDigit(void *p) {
      return  p ? new(p) ::BmnSyncDigit : new ::BmnSyncDigit;
   }
   static void *newArray_BmnSyncDigit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSyncDigit[nElements] : new ::BmnSyncDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSyncDigit(void *p) {
      delete ((::BmnSyncDigit*)p);
   }
   static void deleteArray_BmnSyncDigit(void *p) {
      delete [] ((::BmnSyncDigit*)p);
   }
   static void destruct_BmnSyncDigit(void *p) {
      typedef ::BmnSyncDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSyncDigit

//______________________________________________________________________________
void BmnTTBDigit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTTBDigit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTTBDigit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTTBDigit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTTBDigit(void *p) {
      return  p ? new(p) ::BmnTTBDigit : new ::BmnTTBDigit;
   }
   static void *newArray_BmnTTBDigit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTTBDigit[nElements] : new ::BmnTTBDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTTBDigit(void *p) {
      delete ((::BmnTTBDigit*)p);
   }
   static void deleteArray_BmnTTBDigit(void *p) {
      delete [] ((::BmnTTBDigit*)p);
   }
   static void destruct_BmnTTBDigit(void *p) {
      typedef ::BmnTTBDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTTBDigit

//______________________________________________________________________________
void BmnMSCDigit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnMSCDigit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnMSCDigit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnMSCDigit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnMSCDigit(void *p) {
      return  p ? new(p) ::BmnMSCDigit : new ::BmnMSCDigit;
   }
   static void *newArray_BmnMSCDigit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnMSCDigit[nElements] : new ::BmnMSCDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnMSCDigit(void *p) {
      delete ((::BmnMSCDigit*)p);
   }
   static void deleteArray_BmnMSCDigit(void *p) {
      delete [] ((::BmnMSCDigit*)p);
   }
   static void destruct_BmnMSCDigit(void *p) {
      typedef ::BmnMSCDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMSCDigit

//______________________________________________________________________________
void BmnZDCDigit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnZDCDigit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnZDCDigit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnZDCDigit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnZDCDigit(void *p) {
      return  p ? new(p) ::BmnZDCDigit : new ::BmnZDCDigit;
   }
   static void *newArray_BmnZDCDigit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnZDCDigit[nElements] : new ::BmnZDCDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnZDCDigit(void *p) {
      delete ((::BmnZDCDigit*)p);
   }
   static void deleteArray_BmnZDCDigit(void *p) {
      delete [] ((::BmnZDCDigit*)p);
   }
   static void destruct_BmnZDCDigit(void *p) {
      typedef ::BmnZDCDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnZDCDigit

//______________________________________________________________________________
void BmnECALDigit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnECALDigit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnECALDigit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnECALDigit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnECALDigit(void *p) {
      return  p ? new(p) ::BmnECALDigit : new ::BmnECALDigit;
   }
   static void *newArray_BmnECALDigit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnECALDigit[nElements] : new ::BmnECALDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnECALDigit(void *p) {
      delete ((::BmnECALDigit*)p);
   }
   static void deleteArray_BmnECALDigit(void *p) {
      delete [] ((::BmnECALDigit*)p);
   }
   static void destruct_BmnECALDigit(void *p) {
      typedef ::BmnECALDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnECALDigit

//______________________________________________________________________________
void BmnLANDDigit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnLANDDigit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnLANDDigit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnLANDDigit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnLANDDigit(void *p) {
      return  p ? new(p) ::BmnLANDDigit : new ::BmnLANDDigit;
   }
   static void *newArray_BmnLANDDigit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnLANDDigit[nElements] : new ::BmnLANDDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnLANDDigit(void *p) {
      delete ((::BmnLANDDigit*)p);
   }
   static void deleteArray_BmnLANDDigit(void *p) {
      delete [] ((::BmnLANDDigit*)p);
   }
   static void destruct_BmnLANDDigit(void *p) {
      typedef ::BmnLANDDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnLANDDigit

//______________________________________________________________________________
void BmnCscDigit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnCscDigit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnCscDigit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnCscDigit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnCscDigit(void *p) {
      return  p ? new(p) ::BmnCscDigit : new ::BmnCscDigit;
   }
   static void *newArray_BmnCscDigit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnCscDigit[nElements] : new ::BmnCscDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnCscDigit(void *p) {
      delete ((::BmnCscDigit*)p);
   }
   static void deleteArray_BmnCscDigit(void *p) {
      delete [] ((::BmnCscDigit*)p);
   }
   static void destruct_BmnCscDigit(void *p) {
      typedef ::BmnCscDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnCscDigit

//______________________________________________________________________________
void BmnTrigInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTrigInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTrigInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTrigInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTrigInfo(void *p) {
      return  p ? new(p) ::BmnTrigInfo : new ::BmnTrigInfo;
   }
   static void *newArray_BmnTrigInfo(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTrigInfo[nElements] : new ::BmnTrigInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTrigInfo(void *p) {
      delete ((::BmnTrigInfo*)p);
   }
   static void deleteArray_BmnTrigInfo(void *p) {
      delete [] ((::BmnTrigInfo*)p);
   }
   static void destruct_BmnTrigInfo(void *p) {
      typedef ::BmnTrigInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTrigInfo

//______________________________________________________________________________
void BmnEventHeader::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnEventHeader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnEventHeader::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnEventHeader::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnEventHeader(void *p) {
      return  p ? new(p) ::BmnEventHeader : new ::BmnEventHeader;
   }
   static void *newArray_BmnEventHeader(Long_t nElements, void *p) {
      return p ? new(p) ::BmnEventHeader[nElements] : new ::BmnEventHeader[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnEventHeader(void *p) {
      delete ((::BmnEventHeader*)p);
   }
   static void deleteArray_BmnEventHeader(void *p) {
      delete [] ((::BmnEventHeader*)p);
   }
   static void destruct_BmnEventHeader(void *p) {
      typedef ::BmnEventHeader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnEventHeader

//______________________________________________________________________________
void BmnRunHeader::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnRunHeader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnRunHeader::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnRunHeader::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnRunHeader(void *p) {
      return  p ? new(p) ::BmnRunHeader : new ::BmnRunHeader;
   }
   static void *newArray_BmnRunHeader(Long_t nElements, void *p) {
      return p ? new(p) ::BmnRunHeader[nElements] : new ::BmnRunHeader[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnRunHeader(void *p) {
      delete ((::BmnRunHeader*)p);
   }
   static void deleteArray_BmnRunHeader(void *p) {
      delete [] ((::BmnRunHeader*)p);
   }
   static void destruct_BmnRunHeader(void *p) {
      typedef ::BmnRunHeader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnRunHeader

//______________________________________________________________________________
void BmnCounter::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnCounter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnCounter::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnCounter::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnCounter(void *p) {
      return  p ? new(p) ::BmnCounter : new ::BmnCounter;
   }
   static void *newArray_BmnCounter(Long_t nElements, void *p) {
      return p ? new(p) ::BmnCounter[nElements] : new ::BmnCounter[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnCounter(void *p) {
      delete ((::BmnCounter*)p);
   }
   static void deleteArray_BmnCounter(void *p) {
      delete [] ((::BmnCounter*)p);
   }
   static void destruct_BmnCounter(void *p) {
      typedef ::BmnCounter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnCounter

//______________________________________________________________________________
void BmnIdentifiableTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnIdentifiableTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnIdentifiableTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnIdentifiableTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnIdentifiableTrack(void *p) {
      return  p ? new(p) ::BmnIdentifiableTrack : new ::BmnIdentifiableTrack;
   }
   static void *newArray_BmnIdentifiableTrack(Long_t nElements, void *p) {
      return p ? new(p) ::BmnIdentifiableTrack[nElements] : new ::BmnIdentifiableTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnIdentifiableTrack(void *p) {
      delete ((::BmnIdentifiableTrack*)p);
   }
   static void deleteArray_BmnIdentifiableTrack(void *p) {
      delete [] ((::BmnIdentifiableTrack*)p);
   }
   static void destruct_BmnIdentifiableTrack(void *p) {
      typedef ::BmnIdentifiableTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnIdentifiableTrack

//______________________________________________________________________________
void DigiArrays::Streamer(TBuffer &R__b)
{
   // Stream an object of class DigiArrays.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DigiArrays::Class(),this);
   } else {
      R__b.WriteClassBuffer(DigiArrays::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_DigiArrays(void *p) {
      return  p ? new(p) ::DigiArrays : new ::DigiArrays;
   }
   static void *newArray_DigiArrays(Long_t nElements, void *p) {
      return p ? new(p) ::DigiArrays[nElements] : new ::DigiArrays[nElements];
   }
   // Wrapper around operator delete
   static void delete_DigiArrays(void *p) {
      delete ((::DigiArrays*)p);
   }
   static void deleteArray_DigiArrays(void *p) {
      delete [] ((::DigiArrays*)p);
   }
   static void destruct_DigiArrays(void *p) {
      typedef ::DigiArrays current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DigiArrays

//______________________________________________________________________________
void BmnEventQuality::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnEventQuality.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnEventQuality::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnEventQuality::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnEventQuality(void *p) {
      return  p ? new(p) ::BmnEventQuality : new ::BmnEventQuality;
   }
   static void *newArray_BmnEventQuality(Long_t nElements, void *p) {
      return p ? new(p) ::BmnEventQuality[nElements] : new ::BmnEventQuality[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnEventQuality(void *p) {
      delete ((::BmnEventQuality*)p);
   }
   static void deleteArray_BmnEventQuality(void *p) {
      delete [] ((::BmnEventQuality*)p);
   }
   static void destruct_BmnEventQuality(void *p) {
      typedef ::BmnEventQuality current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnEventQuality

//______________________________________________________________________________
void BmnGemStripHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGemStripHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGemStripHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGemStripHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnGemStripHit(void *p) {
      return  p ? new(p) ::BmnGemStripHit : new ::BmnGemStripHit;
   }
   static void *newArray_BmnGemStripHit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnGemStripHit[nElements] : new ::BmnGemStripHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnGemStripHit(void *p) {
      delete ((::BmnGemStripHit*)p);
   }
   static void deleteArray_BmnGemStripHit(void *p) {
      delete [] ((::BmnGemStripHit*)p);
   }
   static void destruct_BmnGemStripHit(void *p) {
      typedef ::BmnGemStripHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGemStripHit

//______________________________________________________________________________
void BmnGemTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGemTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGemTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGemTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnGemTrack(void *p) {
      return  p ? new(p) ::BmnGemTrack : new ::BmnGemTrack;
   }
   static void *newArray_BmnGemTrack(Long_t nElements, void *p) {
      return p ? new(p) ::BmnGemTrack[nElements] : new ::BmnGemTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnGemTrack(void *p) {
      delete ((::BmnGemTrack*)p);
   }
   static void deleteArray_BmnGemTrack(void *p) {
      delete [] ((::BmnGemTrack*)p);
   }
   static void destruct_BmnGemTrack(void *p) {
      typedef ::BmnGemTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGemTrack

//______________________________________________________________________________
void CbmVertex::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmVertex.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmVertex::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmVertex::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmVertex(void *p) {
      return  p ? new(p) ::CbmVertex : new ::CbmVertex;
   }
   static void *newArray_CbmVertex(Long_t nElements, void *p) {
      return p ? new(p) ::CbmVertex[nElements] : new ::CbmVertex[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmVertex(void *p) {
      delete ((::CbmVertex*)p);
   }
   static void deleteArray_CbmVertex(void *p) {
      delete [] ((::CbmVertex*)p);
   }
   static void destruct_CbmVertex(void *p) {
      typedef ::CbmVertex current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmVertex

//______________________________________________________________________________
void CbmStsTrackFinder::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsTrackFinder.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsTrackFinder::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsTrackFinder::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_CbmStsTrackFinder(void *p) {
      delete ((::CbmStsTrackFinder*)p);
   }
   static void deleteArray_CbmStsTrackFinder(void *p) {
      delete [] ((::CbmStsTrackFinder*)p);
   }
   static void destruct_CbmStsTrackFinder(void *p) {
      typedef ::CbmStsTrackFinder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsTrackFinder

//______________________________________________________________________________
void CbmStsTrackFitter::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsTrackFitter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsTrackFitter::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsTrackFitter::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_CbmStsTrackFitter(void *p) {
      delete ((::CbmStsTrackFitter*)p);
   }
   static void deleteArray_CbmStsTrackFitter(void *p) {
      delete [] ((::CbmStsTrackFitter*)p);
   }
   static void destruct_CbmStsTrackFitter(void *p) {
      typedef ::CbmStsTrackFitter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsTrackFitter

//______________________________________________________________________________
void CbmTofMerger::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmTofMerger.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmTofMerger::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmTofMerger::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_CbmTofMerger(void *p) {
      delete ((::CbmTofMerger*)p);
   }
   static void deleteArray_CbmTofMerger(void *p) {
      delete [] ((::CbmTofMerger*)p);
   }
   static void destruct_CbmTofMerger(void *p) {
      typedef ::CbmTofMerger current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmTofMerger

//______________________________________________________________________________
void CbmTrackMerger::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmTrackMerger.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmTrackMerger::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmTrackMerger::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_CbmTrackMerger(void *p) {
      delete ((::CbmTrackMerger*)p);
   }
   static void deleteArray_CbmTrackMerger(void *p) {
      delete [] ((::CbmTrackMerger*)p);
   }
   static void destruct_CbmTrackMerger(void *p) {
      typedef ::CbmTrackMerger current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmTrackMerger

//______________________________________________________________________________
void CbmPrimaryVertexFinder::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmPrimaryVertexFinder.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmPrimaryVertexFinder::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmPrimaryVertexFinder::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_CbmPrimaryVertexFinder(void *p) {
      delete ((::CbmPrimaryVertexFinder*)p);
   }
   static void deleteArray_CbmPrimaryVertexFinder(void *p) {
      delete [] ((::CbmPrimaryVertexFinder*)p);
   }
   static void destruct_CbmPrimaryVertexFinder(void *p) {
      typedef ::CbmPrimaryVertexFinder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmPrimaryVertexFinder

//______________________________________________________________________________
void CbmFindPrimaryVertex::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmFindPrimaryVertex.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmFindPrimaryVertex::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmFindPrimaryVertex::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmFindPrimaryVertex(void *p) {
      return  p ? new(p) ::CbmFindPrimaryVertex : new ::CbmFindPrimaryVertex;
   }
   static void *newArray_CbmFindPrimaryVertex(Long_t nElements, void *p) {
      return p ? new(p) ::CbmFindPrimaryVertex[nElements] : new ::CbmFindPrimaryVertex[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmFindPrimaryVertex(void *p) {
      delete ((::CbmFindPrimaryVertex*)p);
   }
   static void deleteArray_CbmFindPrimaryVertex(void *p) {
      delete [] ((::CbmFindPrimaryVertex*)p);
   }
   static void destruct_CbmFindPrimaryVertex(void *p) {
      typedef ::CbmFindPrimaryVertex current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmFindPrimaryVertex

namespace ROOT {
   // Wrapper around operator delete
   static void delete_FitWLSQ(void *p) {
      delete ((::FitWLSQ*)p);
   }
   static void deleteArray_FitWLSQ(void *p) {
      delete [] ((::FitWLSQ*)p);
   }
   static void destruct_FitWLSQ(void *p) {
      typedef ::FitWLSQ current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::FitWLSQ

//______________________________________________________________________________
void BmnFileSource::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnFileSource.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnFileSource::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnFileSource::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnFileSource(void *p) {
      delete ((::BmnFileSource*)p);
   }
   static void deleteArray_BmnFileSource(void *p) {
      delete [] ((::BmnFileSource*)p);
   }
   static void destruct_BmnFileSource(void *p) {
      typedef ::BmnFileSource current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnFileSource

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnGeoNavigator(void *p) {
      return  p ? new(p) ::BmnGeoNavigator : new ::BmnGeoNavigator;
   }
   static void *newArray_BmnGeoNavigator(Long_t nElements, void *p) {
      return p ? new(p) ::BmnGeoNavigator[nElements] : new ::BmnGeoNavigator[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnGeoNavigator(void *p) {
      delete ((::BmnGeoNavigator*)p);
   }
   static void deleteArray_BmnGeoNavigator(void *p) {
      delete [] ((::BmnGeoNavigator*)p);
   }
   static void destruct_BmnGeoNavigator(void *p) {
      typedef ::BmnGeoNavigator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGeoNavigator

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
   static TClass *vectorlETClonesArraymUgR_Dictionary();
   static void vectorlETClonesArraymUgR_TClassManip(TClass*);
   static void *new_vectorlETClonesArraymUgR(void *p = 0);
   static void *newArray_vectorlETClonesArraymUgR(Long_t size, void *p);
   static void delete_vectorlETClonesArraymUgR(void *p);
   static void deleteArray_vectorlETClonesArraymUgR(void *p);
   static void destruct_vectorlETClonesArraymUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TClonesArray*>*)
   {
      vector<TClonesArray*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TClonesArray*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TClonesArray*>", -2, "vector", 216,
                  typeid(vector<TClonesArray*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETClonesArraymUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<TClonesArray*>) );
      instance.SetNew(&new_vectorlETClonesArraymUgR);
      instance.SetNewArray(&newArray_vectorlETClonesArraymUgR);
      instance.SetDelete(&delete_vectorlETClonesArraymUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETClonesArraymUgR);
      instance.SetDestructor(&destruct_vectorlETClonesArraymUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TClonesArray*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TClonesArray*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETClonesArraymUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TClonesArray*>*)0x0)->GetClass();
      vectorlETClonesArraymUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETClonesArraymUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETClonesArraymUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TClonesArray*> : new vector<TClonesArray*>;
   }
   static void *newArray_vectorlETClonesArraymUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TClonesArray*>[nElements] : new vector<TClonesArray*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETClonesArraymUgR(void *p) {
      delete ((vector<TClonesArray*>*)p);
   }
   static void deleteArray_vectorlETClonesArraymUgR(void *p) {
      delete [] ((vector<TClonesArray*>*)p);
   }
   static void destruct_vectorlETClonesArraymUgR(void *p) {
      typedef vector<TClonesArray*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TClonesArray*>

namespace ROOT {
   static TClass *vectorlEBmnLinkgR_Dictionary();
   static void vectorlEBmnLinkgR_TClassManip(TClass*);
   static void *new_vectorlEBmnLinkgR(void *p = 0);
   static void *newArray_vectorlEBmnLinkgR(Long_t size, void *p);
   static void delete_vectorlEBmnLinkgR(void *p);
   static void deleteArray_vectorlEBmnLinkgR(void *p);
   static void destruct_vectorlEBmnLinkgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnLink>*)
   {
      vector<BmnLink> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnLink>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnLink>", -2, "vector", 216,
                  typeid(vector<BmnLink>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnLinkgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnLink>) );
      instance.SetNew(&new_vectorlEBmnLinkgR);
      instance.SetNewArray(&newArray_vectorlEBmnLinkgR);
      instance.SetDelete(&delete_vectorlEBmnLinkgR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnLinkgR);
      instance.SetDestructor(&destruct_vectorlEBmnLinkgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnLink> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnLink>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnLinkgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnLink>*)0x0)->GetClass();
      vectorlEBmnLinkgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnLinkgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnLinkgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnLink> : new vector<BmnLink>;
   }
   static void *newArray_vectorlEBmnLinkgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnLink>[nElements] : new vector<BmnLink>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnLinkgR(void *p) {
      delete ((vector<BmnLink>*)p);
   }
   static void deleteArray_vectorlEBmnLinkgR(void *p) {
      delete [] ((vector<BmnLink>*)p);
   }
   static void destruct_vectorlEBmnLinkgR(void *p) {
      typedef vector<BmnLink> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnLink>

namespace ROOT {
   static TClass *vectorlEBmnFitNodegR_Dictionary();
   static void vectorlEBmnFitNodegR_TClassManip(TClass*);
   static void *new_vectorlEBmnFitNodegR(void *p = 0);
   static void *newArray_vectorlEBmnFitNodegR(Long_t size, void *p);
   static void delete_vectorlEBmnFitNodegR(void *p);
   static void deleteArray_vectorlEBmnFitNodegR(void *p);
   static void destruct_vectorlEBmnFitNodegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnFitNode>*)
   {
      vector<BmnFitNode> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnFitNode>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnFitNode>", -2, "vector", 216,
                  typeid(vector<BmnFitNode>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnFitNodegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnFitNode>) );
      instance.SetNew(&new_vectorlEBmnFitNodegR);
      instance.SetNewArray(&newArray_vectorlEBmnFitNodegR);
      instance.SetDelete(&delete_vectorlEBmnFitNodegR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnFitNodegR);
      instance.SetDestructor(&destruct_vectorlEBmnFitNodegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnFitNode> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnFitNode>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnFitNodegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnFitNode>*)0x0)->GetClass();
      vectorlEBmnFitNodegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnFitNodegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnFitNodegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnFitNode> : new vector<BmnFitNode>;
   }
   static void *newArray_vectorlEBmnFitNodegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnFitNode>[nElements] : new vector<BmnFitNode>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnFitNodegR(void *p) {
      delete ((vector<BmnFitNode>*)p);
   }
   static void deleteArray_vectorlEBmnFitNodegR(void *p) {
      delete [] ((vector<BmnFitNode>*)p);
   }
   static void destruct_vectorlEBmnFitNodegR(void *p) {
      typedef vector<BmnFitNode> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnFitNode>

namespace ROOT {
   static TClass *multimaplEdoublecOCbmDigimUgR_Dictionary();
   static void multimaplEdoublecOCbmDigimUgR_TClassManip(TClass*);
   static void *new_multimaplEdoublecOCbmDigimUgR(void *p = 0);
   static void *newArray_multimaplEdoublecOCbmDigimUgR(Long_t size, void *p);
   static void delete_multimaplEdoublecOCbmDigimUgR(void *p);
   static void deleteArray_multimaplEdoublecOCbmDigimUgR(void *p);
   static void destruct_multimaplEdoublecOCbmDigimUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const multimap<double,CbmDigi*>*)
   {
      multimap<double,CbmDigi*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(multimap<double,CbmDigi*>));
      static ::ROOT::TGenericClassInfo 
         instance("multimap<double,CbmDigi*>", -2, "map", 98,
                  typeid(multimap<double,CbmDigi*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &multimaplEdoublecOCbmDigimUgR_Dictionary, isa_proxy, 0,
                  sizeof(multimap<double,CbmDigi*>) );
      instance.SetNew(&new_multimaplEdoublecOCbmDigimUgR);
      instance.SetNewArray(&newArray_multimaplEdoublecOCbmDigimUgR);
      instance.SetDelete(&delete_multimaplEdoublecOCbmDigimUgR);
      instance.SetDeleteArray(&deleteArray_multimaplEdoublecOCbmDigimUgR);
      instance.SetDestructor(&destruct_multimaplEdoublecOCbmDigimUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< multimap<double,CbmDigi*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const multimap<double,CbmDigi*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *multimaplEdoublecOCbmDigimUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const multimap<double,CbmDigi*>*)0x0)->GetClass();
      multimaplEdoublecOCbmDigimUgR_TClassManip(theClass);
   return theClass;
   }

   static void multimaplEdoublecOCbmDigimUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_multimaplEdoublecOCbmDigimUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) multimap<double,CbmDigi*> : new multimap<double,CbmDigi*>;
   }
   static void *newArray_multimaplEdoublecOCbmDigimUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) multimap<double,CbmDigi*>[nElements] : new multimap<double,CbmDigi*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_multimaplEdoublecOCbmDigimUgR(void *p) {
      delete ((multimap<double,CbmDigi*>*)p);
   }
   static void deleteArray_multimaplEdoublecOCbmDigimUgR(void *p) {
      delete [] ((multimap<double,CbmDigi*>*)p);
   }
   static void destruct_multimaplEdoublecOCbmDigimUgR(void *p) {
      typedef multimap<double,CbmDigi*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class multimap<double,CbmDigi*>

namespace ROOT {
   static TClass *maplEunsignedsPintcOLong64_tgR_Dictionary();
   static void maplEunsignedsPintcOLong64_tgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPintcOLong64_tgR(void *p = 0);
   static void *newArray_maplEunsignedsPintcOLong64_tgR(Long_t size, void *p);
   static void delete_maplEunsignedsPintcOLong64_tgR(void *p);
   static void deleteArray_maplEunsignedsPintcOLong64_tgR(void *p);
   static void destruct_maplEunsignedsPintcOLong64_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned int,Long64_t>*)
   {
      map<unsigned int,Long64_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned int,Long64_t>));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned int,Long64_t>", -2, "map", 99,
                  typeid(map<unsigned int,Long64_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPintcOLong64_tgR_Dictionary, isa_proxy, 0,
                  sizeof(map<unsigned int,Long64_t>) );
      instance.SetNew(&new_maplEunsignedsPintcOLong64_tgR);
      instance.SetNewArray(&newArray_maplEunsignedsPintcOLong64_tgR);
      instance.SetDelete(&delete_maplEunsignedsPintcOLong64_tgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPintcOLong64_tgR);
      instance.SetDestructor(&destruct_maplEunsignedsPintcOLong64_tgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned int,Long64_t> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<unsigned int,Long64_t>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPintcOLong64_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<unsigned int,Long64_t>*)0x0)->GetClass();
      maplEunsignedsPintcOLong64_tgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPintcOLong64_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPintcOLong64_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,Long64_t> : new map<unsigned int,Long64_t>;
   }
   static void *newArray_maplEunsignedsPintcOLong64_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,Long64_t>[nElements] : new map<unsigned int,Long64_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPintcOLong64_tgR(void *p) {
      delete ((map<unsigned int,Long64_t>*)p);
   }
   static void deleteArray_maplEunsignedsPintcOLong64_tgR(void *p) {
      delete [] ((map<unsigned int,Long64_t>*)p);
   }
   static void destruct_maplEunsignedsPintcOLong64_tgR(void *p) {
      typedef map<unsigned int,Long64_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<unsigned int,Long64_t>

namespace {
  void TriggerDictionaryInitialization_G__BmnDataDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/opt/fairroot/install/include",
"/home/alex/bmnroot_dev/bmnroot/globaltracking",
"/home/alex/bmnroot_dev/bmnroot/uni_db",
"/home/alex/bmnroot_dev/bmnroot/uni_db/db_classes",
"/home/alex/bmnroot_dev/bmnroot/bmndata",
"/opt/fairsoft/install/include",
"/opt/fairsoft/install/include/root",
"/opt/fairsoft/install/include/root",
"/home/alex/bmnroot_dev/bmnroot/build/bmndata/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__BmnDataDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$TClonesArray.h")))  __attribute__((annotate("$clingAutoload$FairGenericStack.h")))  TClonesArray;
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
class CbmBaseHit;
class CbmHit;
class CbmPixelHit;
class CbmDetectorList;
class CbmStack;
class CbmMCTrack;
class CbmStsPoint;
class CbmStsDetectorId;
class CbmStsDigi;
class CbmStsDigiMatch;
class __attribute__((annotate("$clingAutoload$CbmMvdDetectorId.h")))  __attribute__((annotate("$clingAutoload$CbmMvdPoint.h")))  CbmMvdDetectorId;
class __attribute__((annotate("$clingAutoload$CbmMvdPoint.h")))  CbmMvdPoint;
class __attribute__((annotate("$clingAutoload$CbmTofPoint.h")))  CbmTofPoint;
class __attribute__((annotate("$clingAutoload$CbmPsdPoint.h")))  CbmPsdPoint;
class CbmMCBuffer;
class __attribute__((annotate("$clingAutoload$BmnHit.h")))  BmnHit;
class CbmTofHit;
class CbmTofTrack;
class CbmEcalPoint;
class __attribute__((annotate("$clingAutoload$CbmDigi.h")))  CbmDigi;
class CbmDaqBuffer;
class CbmStsDigiLight;
class CbmStsHit;
class CbmStsCluster;
class CbmStsTrack;
class CbmTrackMatch;
class CbmMvdHit;
class CbmMvdHitMatch;
class __attribute__((annotate("$clingAutoload$BmnFitNode.h")))  BmnFitNode;
class CbmGlobalTrack;
class CbmPsdHit;
class CbmPsdDigi;
class CbmPsdEventData;
class CbmMvdGeoPar;
class CbmGeoSttPar;
class BmnDchHit;
class BmnDchHitOriginal;
class __attribute__((annotate("$clingAutoload$BmnTrack.h")))  BmnTrack;
class BmnGlobalTrack;
class BmnMwpcHit;
class BmnTofHit;
class __attribute__((annotate("$clingAutoload$BmnLink.h")))  __attribute__((annotate("$clingAutoload$BmnMatch.h")))  BmnLink;
class __attribute__((annotate("$clingAutoload$BmnMatch.h")))  BmnMatch;
class BmnTrackMatch;
class BmnMwpcDigit;
class BmnTof1Digit;
class BmnTof2Digit;
class BmnTrigDigit;
class __attribute__((annotate("$clingAutoload$BmnADCDigit.h")))  __attribute__((annotate("$clingAutoload$BmnTQDCADCDigit.h")))  BmnADCDigit;
class __attribute__((annotate("$clingAutoload$BmnTQDCADCDigit.h")))  BmnTQDCADCDigit;
class BmnTrigWaveDigit;
class BmnDchDigit;
class BmnEcalDigit;
class BmnTacquilaDigit;
class BmnTDCDigit;
class BmnHRBDigit;
class BmnSyncDigit;
class BmnTTBDigit;
class BmnMSCDigit;
class BmnZDCDigit;
class BmnECALDigit;
class BmnLANDDigit;
class BmnCscDigit;
class __attribute__((annotate("$clingAutoload$BmnTrigInfo.h")))  BmnTrigInfo;
class BmnEventHeader;
class BmnRunHeader;
class BmnCounter;
class BmnIdentifiableTrack;
class DigiArrays;
class BmnEventQuality;
class BmnGemStripHit;
class BmnGemTrack;
class CbmVertex;
class CbmStsTrackFinder;
class CbmStsTrackFitter;
class CbmTofMerger;
class CbmTrackMerger;
class CbmPrimaryVertexFinder;
class CbmFindPrimaryVertex;
class FitWLSQ;
class BmnFileSource;
class BmnGeoNavigator;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__BmnDataDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
/**
 * \file CbmBaseHit.h
 * \author Andrey Lebedev <andrey.lebedev@gsi.de>
 * \date 2009
 *
 * Base class for hits used for tracking in CBM.
 * Derives from TObject.
 * Each hit has its unique identifier of type HitType,
 * which can be later use for safe type casting.
 **/
#ifndef CBMBASEHIT_H_
#define CBMBASEHIT_H_

enum HitType {
	kHIT,
	kPIXELHIT,
	kSTRIPHIT,
	kSTSHIT,
	kMVDHIT,
	kRICHHIT,
	kMUCHPIXELHIT,
	kMUCHSTRAWHIT,
	kTRDHIT,
	kTOFHIT,
	kECALHIT
};

#include "TObject.h"
#include <string>
using std::string;
class FairMultiLinkedData;

class CbmBaseHit : public TObject
{
public:
	/**
	 * \brief Default constructor.
	 */
	CbmBaseHit();

	/**
	 * \brief Destructor.
	 */
	virtual ~CbmBaseHit();

	/* Accessors */
	HitType GetType() const { return fType; }
	Double_t GetZ() const { return fZ; }
	Double_t GetDz() const { return fDz; }
	Int_t GetRefId() const { return fRefId; }
	Int_t GetAddress() const { return fAddress; }
	FairMultiLinkedData* GetLinks() const { return fLinks; }

	/* Setters */
	void SetZ(Double_t z) { fZ = z; }
	void SetDz(Double_t dz) { fDz = dz; }
	void SetRefId(Int_t refId) { fRefId = refId; }
	void SetAddress(Int_t address) { fAddress = address; }
	 void SetLinks(FairMultiLinkedData* links) { fLinks = links; }

	/**
	 * Pure virtual function. Must be implemented in derived class.
	 * Should return plane identifier of the hit. Usually this is station or layer
	 * number of the detector. Can be calculated using unique detector identifier
	 * or can use additional class member from the derived class to store the plane identifier.
	 **/
	virtual Int_t GetPlaneId() const = 0;

	/**
	 * \brief Pure virtual function. Must be implemented in derived class.
	 * Has to return string representation of the object.
	 **/
	virtual string ToString() const = 0;

protected:
	/**
     * \brief Sets hit type.
     * \param type hit type
     **/
	void SetType(HitType type) { fType = type; }

        CbmBaseHit(const CbmBaseHit&);
        CbmBaseHit& operator=(const CbmBaseHit&);   

private:
	HitType fType; ///< hit type
	Double_t fZ; ///< Z position of hit [cm]
	Double_t fDz; ///< Z position error [cm]
	Int_t fRefId; ///< some reference id (usually to cluster, digi or MC point)
	Int_t fAddress; ///< detector unique identifier
	FairMultiLinkedData* fLinks; ///< Monte-Carlo link collection

  
	ClassDef(CbmBaseHit, 1);
};

#endif /* CBMBASEHIT_H_ */
// -------------------------------------------------------------------------
// -----                     CbmHit header file                        -----
// -----                 Created 16/11/07  by V. Friese                -----
// -------------------------------------------------------------------------

#ifndef CBMHIT_H
#define CBMHIT_H


#include "FairHit.h"


/**
 ** Abstract base class for hits used for tracking in CBM.
 ** Derives from FairHit. 
 ** Additional member is the covariance of x and y.
 ** Derived classes have to implement the pure virtual method GetStationNr()
 **
 **@author V.Friese <v.friese@gsi.de>
 **@since 16/11/07
 */

class CbmHit : public FairHit 
{

 public:

  /** Default constructor **/
  CbmHit();


  /** Constructor with hit parameters 
  *@param detId  Unique detector identifier
  *@param pos    Position vector [cm]
  *@param dpos   Error of position vector [cm]
  *@param covXY  Covariance of x and y [cm**2]
  *@param index  Reference index
  **/
  CbmHit(Int_t detID, TVector3& pos, TVector3& dpos, 
	    Double_t covXY, Int_t index);


  /** Destructor **/
  virtual ~CbmHit();


  /** Accessors **/
  Double_t GetCovXY() const { return fCovXY; }
  virtual Int_t GetStationNr() const = 0;


  /** Output to screen **/
  virtual void Print(const Option_t* opt = 0) const;



 protected:

  Double32_t fCovXY;          // Covariance of x and y coordinates



ClassDef(CbmHit,1);

};



#endif
/**
 * \file CbmPixelHit.h
 * \author Andrey Lebedev <andrey.lebedev@gsi.de>
 * \date 2009
 *
 * Base class for pixel hits used for tracking in CBM.
 * Derives from CbmBaseHit.
 * Additional members are x, y coordinates and x, y, dxy covariances.
 **/
#ifndef CBMPIXELHIT_H_
#define CBMPIXELHIT_H_

#include "CbmBaseHit.h"

#include "TVector3.h"

class CbmPixelHit : public CbmBaseHit
{
public:
	/**
	 * \brief Default constructor.
	 */
	CbmPixelHit();

	/**
	 * \brief Standard constructor.
	 * \param address Detector unique identifier.
	 * \param x X position of the hit [cm].
	 * \param y Y position of the hit [cm].
	 * \param z Z position of the hit [cm].
	 * \param dx X position error of the hit [cm].
	 * \param dy Y position error of the hit [cm].
	 * \param dz Z position error of the hit [cm].
	 * \param dxy XY correlation of the hit.
	 * \param refId Some reference ID.
	 **/
	CbmPixelHit(
			Int_t address,
			Double_t x,
			Double_t y,
			Double_t z,
			Double_t dx,
			Double_t dy,
			Double_t dz,
			Double_t dxy,
			Int_t refId);

	/**
	 * \breif Standard constructor.
	 * \param address Detector unique identifier.
	 * \param pos Position of the hit as TVector3 [cm].
	 * \param err Position errors of the hit as TVector3 [cm].
	 * \param dxy XY correlation of the hit.
	 * \param refId Some reference ID.
	 **/
	CbmPixelHit(
			Int_t address,
			const TVector3& pos,
			const TVector3& err,
			Double_t dxy,
			Int_t refId);

	/**
	 * brief Destructor.
	 */
	virtual ~CbmPixelHit();

	/**
	 * \brief Inherited from CbmBaseHit.
	 **/
	virtual string ToString() const;
	
	virtual Int_t GetPlaneId() const; //SM

	/* Accessors */
	Double_t GetX() const { return fX; }
	Double_t GetY() const { return fY; }
	Double_t GetDx() const { return fDx; }
	Double_t GetDy() const { return fDy; }
	Double_t GetDxy() const { return fDxy; }

	/**
	 * \brief Copies hit position to pos.
	 * \param pos Output hit position.
	 */
	void Position(TVector3& pos) const;

	/**
	 * \brief Copies hit position error to pos.
	 * \param pos Output hit position error.
	 */
	void PositionError(TVector3& dpos) const;

	/* Setters */
	void SetX(Double_t x) { fX = x; }
	void SetY(Double_t y) {fY = y;}
	void SetDx(Double_t dx) {fDx = dx;}
	void SetDy(Double_t dy) {fDy = dy;}
	void SetDxy(Double_t dxy) {fDxy = dxy;}

	/**
	 * \brief Sets position of the hit.
	 * \param pos new hit position.
	 **/
	void SetPosition(const TVector3& pos);

	/**
	 * \breif Sets position error of the hit.
	 * \param dpos new hit position error
	 **/
	void SetPositionError(const TVector3& dpos);

private:
	Double_t fX, fY; ///< X, Y positions of hit [cm]
	Double_t fDx, fDy; ///< X, Y errors [cm]
	Double_t fDxy; ///< XY correlation

	ClassDef(CbmPixelHit, 1);
};

#endif /* CBMPIXELHIT_H_ */
/** @file CbmDetectorList.h
 ** @author V.Friese  <V.Friese@Gsi.De>
 ** @date 12.06.2007
 ** @brief Defines unique identifiers (enum) for all CBM detector systems
 **/


#ifndef CBMDETECTORLIST_H
#define CBMDETECTORLIST_H 1


/**  BMN DetectorID enumerator  **/
enum DetectorId {kREF,  // Reference plane
         kMVD,          // future BMN silicone detector
         kGEM,          // GEMS detectors
         kTOF1,         // Front Time-of-flight Detector
         kDCH,          // DCH
         kTOF,          // Rear Time-of-flight Detector
         kZDC,          // ZDC
         kRECOIL,       // Recoil
         kMWPC,         // MWPC
         kBD,           // Barrel
         kECAL,         // ECAL
         kSILICON,      // Silicon
         kSSD,          // SSD (Strip Silicon Detector)
         kNOFDETS}; // Number of elements (e.g. for loops)


/**   Data type enumerator  **/
enum DataType {kUnknown,
	       kMCTrack,
	       kStsPoint,
	       kStsDigi,
	       kStsCluster,
	       kStsHit};


#include "TObject.h"


/** @class CbmDetectorList
 ** @author V.Friese  <V.Friese@Gsi.De>
 ** @date 29.04.2010
 **
 ** @brief Provides some utility functions for DetectorId
 **/
class CbmDetectorList : public TObject
{

 public:

  /**   Constructor   **/
  CbmDetectorList();


  /**   Destructor  **/
  virtual ~CbmDetectorList() { }


  /**   Get system name
   *@param det   System identifier (type DetectorId)
   *@param name  (return) System name (lower case)
   **/
  static void GetSystemName(DetectorId det, TString& name);
  static void GetSystemName(Int_t det, TString& name);


  /** Get system name in capitals
   ** @param det   System identifier (type DetectorId)
   ** @param name  (return) System name (lower case)
   **/
  static void GetSystemNameCaps(DetectorId det, TString& name);
  static void GetSystemNameCaps(Int_t det, TString& name);


  ClassDef(CbmDetectorList, 1);
};


#endif
// -------------------------------------------------------------------------
// -----                       CbmStack header file                    -----
// -----           Created 10/08/04  by D. Bertini / V. Friese         -----
// -------------------------------------------------------------------------


/** CbmStack.h
 *@author D.Bertini <d.bertini@gsi.de>
 *@author V.Friese <v.friese@gsi.de>
 **
 ** Version 14/06/07 by V. Friese
 **
 ** This class handles the particle stack for the transport simulation.
 ** For the stack FILO functunality, it uses the STL stack. To store
 ** the tracks during transport, a TParticle arry is used. 
 ** At the end of the event, tracks satisfying the filter criteria
 ** are copied to a CbmMCTrack array, which is stored in the output.
 **
 ** The filtering criteria for the output tracks are:
 ** - primary tracks are stored in any case.
 ** - secondary tracks are stored if they have a minimal number of
 **   points (sum of all detectors) and a minimal energy, or are the
 ** 
 ** The storage of secondaries can be switched off.
 ** The storage of all mothers can be switched off. 
 ** By default, the minimal number of points is 1 and the energy cut is 0.
 **/


#ifndef CBMSTACK_H
#define CBMSTACK_H


#include "CbmDetectorList.h"
#include "FairGenericStack.h"

#include <map>
#include <stack>

class TClonesArray;

class CbmStack : public FairGenericStack
{

 public:

  /** Default constructor
   *param size  Estimated track number
   **/
  CbmStack(Int_t size = 100);


  /** Destructor  **/
  virtual ~CbmStack();

  virtual void PushTrack(Int_t toBeDone, Int_t parentID, Int_t pdgCode,
			 Double_t px, Double_t py, Double_t pz,
			 Double_t e, Double_t vx, Double_t vy, 
			 Double_t vz, Double_t time, Double_t polx, 
			 Double_t poly, Double_t polz, TMCProcess proc, 
			 Int_t& ntr, Double_t weight, Int_t is);
  /** Add a TParticle to the stack.
   ** Declared in TVirtualMCStack
   *@param toBeDone  Flag for tracking
   *@param parentID  Index of mother particle
   *@param pdgCode   Particle type (PDG encoding)
   *@param px,py,pz  Momentum components at start vertex [GeV]
   *@param e         Total energy at start vertex [GeV]
   *@param vx,vy,vz  Coordinates of start vertex [cm]
   *@param time      Start time of track [s]
   *@param polx,poly,polz Polarisation vector
   *@param proc      Production mechanism (VMC encoding)
   *@param ntr       Track number (filled by the stack)
   *@param weight    Particle weight
   *@param is        Generation status code (whatever that means)
   **/
  virtual void PushTrack(Int_t toBeDone, Int_t parentID, Int_t pdgCode,
			 Double_t px, Double_t py, Double_t pz,
			 Double_t e, Double_t vx, Double_t vy, 
			 Double_t vz, Double_t time, Double_t polx, 
			 Double_t poly, Double_t polz, TMCProcess proc, 
			 Int_t& ntr, Double_t weight, Int_t is,Int_t secondparentID);


  /** Get next particle for tracking from the stack.
   ** Declared in TVirtualMCStack
   *@param  iTrack  index of popped track (return)
   *@return Pointer to the TParticle of the track
   **/
  virtual TParticle* PopNextTrack(Int_t& iTrack);


  /** Get primary particle by index for tracking from stack
   ** Declared in TVirtualMCStack
   *@param  iPrim   index of primary particle
   *@return Pointer to the TParticle of the track
   **/
  virtual TParticle* PopPrimaryForTracking(Int_t iPrim); 


  /** Set the current track number 
   ** Declared in TVirtualMCStack
   *@param iTrack  track number
   **/
  virtual void SetCurrentTrack(Int_t iTrack)   { fCurrentTrack     = iTrack; }


  /** Get total number of tracks 
   ** Declared in TVirtualMCStack
   **/
  virtual Int_t GetNtrack() const { return fNParticles; }


  /** Get number of primary tracks
   ** Declared in TVirtualMCStack
   **/
  virtual Int_t GetNprimary() const { return fNPrimaries; }


  /** Get the current track's particle
   ** Declared in TVirtualMCStack
   **/
  virtual TParticle* GetCurrentTrack() const;


  /** Get the number of the current track
   ** Declared in TVirtualMCStack
   **/
  virtual Int_t GetCurrentTrackNumber() const { return fCurrentTrack; }


  /** Get the track number of the parent of the current track
   ** Declared in TVirtualMCStack
   **/
  virtual Int_t GetCurrentParentTrackNumber() const;


  /** Add a TParticle to the fParticles array **/
  virtual void AddParticle(TParticle* part);


  /** Fill the MCTrack output array, applying filter criteria **/
  virtual void FillTrackArray();


  /** Update the track index in the MCTracks and MCPoints **/
  virtual void UpdateTrackIndex(TRefArray* detArray);


  /** Resets arrays and stack and deletes particles and tracks **/
  virtual void Reset();


  /** Register the MCTrack array to the Root Manager  **/
  virtual void Register();


  /** Output to screen 
   **@param iVerbose: 0=events summary, 1=track info
   **/
  virtual void Print(Int_t iVerbose=0) const;


  /** Modifiers  **/
  void StoreSecondaries(Bool_t choice = kTRUE) { fStoreSecondaries = choice; }
  void SetMinPoints(Int_t min)                 { fMinPoints        = min;    }
  void SetEnergyCut(Double_t eMin)             { fEnergyCut        = eMin;   }
  void StoreMothers(Bool_t choice = kTRUE)     { fStoreMothers     = choice; }


  /** Increment number of points for the current track in a given detector
   *@param iDet  Detector unique identifier
   **/
  void AddPoint(DetectorId iDet);


  /** Increment number of points for an arbitrary track in a given detector
   *@param iDet    Detector unique identifier
   *@param iTrack  Track number
   **/
  void AddPoint(DetectorId iDet, Int_t iTrack);


  /** Accessors **/
  TParticle* GetParticle(Int_t trackId) const;
  TClonesArray* GetListOfParticles() { return fParticles; }


 private:

  /** STL stack (FILO) used to handle the TParticles for tracking **/
  std::stack<TParticle*>  fStack;           //!


  /** Array of TParticles (contains all TParticles put into or created
   ** by the transport 
   **/
  TClonesArray* fParticles;            //!


  /** Array of CbmMCTracks containg the tracks written to the output **/
  TClonesArray* fTracks;


  /** STL map from particle index to storage flag  **/
  std::map<Int_t, Bool_t>           fStoreMap;        //!
  std::map<Int_t, Bool_t>::iterator fStoreIter;       //!


  /** STL map from particle index to track index  **/
  std::map<Int_t, Int_t>            fIndexMap;        //!
  std::map<Int_t, Int_t>::iterator  fIndexIter;       //!


  /** STL map from track index and detector ID to number of MCPoints **/
  std::map<std::pair<Int_t, Int_t>, Int_t> fPointsMap;     //!

  
  /** Some indizes and counters **/
  Int_t fCurrentTrack;  //! Index of current track
  Int_t fNPrimaries;    //! Number of primary particles
  Int_t fNParticles;    //! Number of entries in fParticles
  Int_t fNTracks;       //! Number of entries in fTracks
  Int_t fIndex;         //! Used for merging


  /** Variables defining the criteria for output selection **/
  Bool_t     fStoreSecondaries;
  Int_t      fMinPoints;
  Double32_t fEnergyCut;
  Bool_t     fStoreMothers;


  /** Mark tracks for output using selection criteria  **/
  void SelectTracks();

  CbmStack(const CbmStack&);
  CbmStack& operator=(const CbmStack&);

  ClassDef(CbmStack,1)      
};


#endif 
// -------------------------------------------------------------------------
// -----                      CbmMCTrack header file                   -----
// -----                  Created 03/08/04  by V. Friese               -----
// -------------------------------------------------------------------------


/** CbmMCTrack.h
 *@author V.Friese <v.friese@gsi.de>
 **
 ** Data class for storing Monte Carlo tracks processed by the CbmStack.
 ** A MCTrack can be a primary track put into the simulation or a
 ** secondary one produced by the transport through decay or interaction.
 **
 ** Redesign 13/06/07 by V. Friese
 **/


#ifndef CBMMCTRACK_H
#define CBMMCTRACK_H 1


#include "CbmDetectorList.h"

#include "TObject.h"
#include "TMath.h"
#include "TVector3.h"
#include "TLorentzVector.h"

class TParticle;

class CbmMCTrack : public TObject
{

 public:

  /**  Default constructor  **/
  CbmMCTrack();


  /**  Standard constructor  **/
  CbmMCTrack(Int_t pdgCode, Int_t motherID, Double_t px, Double_t py,
	     Double_t pz, Double_t x, Double_t y, Double_t z,
	     Double_t t, Int_t nPoints);

  /**  Copy constructor  **/
  CbmMCTrack(const CbmMCTrack& track);


  /**  Constructor from TParticle  **/
  CbmMCTrack(TParticle* particle);


  /**  Destructor  **/
  virtual ~CbmMCTrack();


  /**  Output to screen  **/
  void Print(Int_t iTrack=0) const;


  /**  Accessors  **/
  Int_t    GetPdgCode()  const { return fPdgCode; }
  Int_t    GetMotherId() const { return fMotherId; }
  Double_t GetPx()       const { return fPx; }
  Double_t GetPy()       const { return fPy; }
  Double_t GetPz()       const { return fPz; }
  Double_t GetStartX()   const { return fStartX; }
  Double_t GetStartY()   const { return fStartY; }
  Double_t GetStartZ()   const { return fStartZ; }
  Double_t GetStartT()   const { return fStartT; }
  Double_t GetMass()     const;
  Double_t GetEnergy()   const;
  Double_t GetPt()       const { return TMath::Sqrt(fPx*fPx+fPy*fPy); }
  Double_t GetP() const { return TMath::Sqrt(fPx*fPx+fPy*fPy+fPz*fPz); }
  Double_t GetRapidity() const;
  void GetMomentum(TVector3& momentum) const;
  void Get4Momentum(TLorentzVector& momentum) const;
  void GetStartVertex(TVector3& vertex) const;


  /** Accessors to the number of MCPoints in the detectors **/
  Int_t GetNPoints(DetectorId detId)  const;


  /**  Modifiers  **/
  void SetMotherId(Int_t id) { fMotherId = id; }
  void SetNPoints(Int_t iDet, Int_t np);


private:

  /**  PDG particle code  **/
  Int_t  fPdgCode;

  /**  Index of mother track. -1 for primary particles.  **/
  Int_t  fMotherId;

  /** Momentum components at start vertex [GeV]  **/
  Double32_t fPx, fPy, fPz;

  /** Coordinates of start vertex [cm, ns]  **/
  Double32_t fStartX, fStartY, fStartZ, fStartT;

  /**  Bitvector representing the number of MCPoints for this track in
   **  each subdetector. The detectors are represented by
   **  REF:         Bit  0      (1 bit,  max. value   1)
   **  MVD:         Bit  1 -  3 (3 bits, max. value   7) /4
   **  GEM:         Bit  4 -  7 (4 bits, max. value  15) /12
   **  TOF1:        Bit  8      (1 bit,  max. value   1)
   **  DCH1:        Bit  9 - 12 (4 bits, max. value  15) /8
   **  DCH2:        Bit 13 - 16 (4 bits, max. value  15) /8
   **  TOF:         Bit 17      (1 bit,  max. value   1)
   **  ZDC:         Bit 18 - 24 (7 bit,  max. value 127) /104
   **  RECOIL:      Bit 25 - 30 (6 bit,  max. value  63) /60
   **  The respective point numbers can be accessed and modified
   **  with the inline functions.
   **  Bit 31 are spare for potential additional detector.
   **/
  Int_t fNPoints;


  ClassDef(CbmMCTrack,2);
};


// ==========   Inline functions   ========================================

inline Double_t CbmMCTrack::GetEnergy() const {
  Double_t mass = GetMass();
  return TMath::Sqrt(mass*mass + fPx*fPx + fPy*fPy + fPz*fPz );
}


inline void CbmMCTrack::GetMomentum(TVector3& momentum) const {
  momentum.SetXYZ(fPx,fPy,fPz);
}


inline void CbmMCTrack::Get4Momentum(TLorentzVector& momentum) const {
  momentum.SetXYZT(fPx,fPy,fPz,GetEnergy());
}


inline void CbmMCTrack::GetStartVertex(TVector3& vertex) const {
  vertex.SetXYZ(fStartX,fStartY,fStartZ);
}

#endif
// -------------------------------------------------------------------------
// -----                      CbmStsPoint header file                  -----
// -----                  Created 26/07/04  by V. Friese               -----
// -------------------------------------------------------------------------


/**  CbmStsPoint.h
 *@author V.Friese <v.friese@gsi.de>
 *
 * Interception of MC track with a STS detetcor. Holds in addition
 * to the base class the coordinates and momentum at the exit from
 * the active volume.
 **/


#ifndef CBMSTSPOINT_H
#define CBMSTSPOINT_H


#include "FairMCPoint.h"
#include "FairLogger.h"

class TVector3;

class CbmStsPoint : public FairMCPoint
{

 public:

  /** Default constructor **/
  CbmStsPoint();


  /** Constructor with arguments
   *@param trackID  Index of MCTrack
   *@param detID    Detector ID
   *@param posIn    Ccoordinates at entrance to active volume [cm]
   *@param posOut   Coordinates at exit of active volume [cm]
   *@param momIn    Momentum of track at entrance [GeV]
   *@param momOut   Momentum of track at exit [GeV]
   *@param tof      Time since event start [ns]
   *@param length   Track length since creation [cm]
   *@param eLoss    Energy deposit [GeV]
   *@param eventId  MC event identifier
   **/
  CbmStsPoint(Int_t trackID, Int_t detID, TVector3 posIn,
	      TVector3 posOut, TVector3 momIn, TVector3 momOut,
	      Double_t tof, Double_t length, Double_t eLoss,
	      Int_t eventId = 0);


  /** Copy constructor with event and epoch time
   ** Re-calculates time w.r.t. epoch time start
   *@param eventId     MC event identifier (negative values keep original event ID)
   *@param eventTime   MC event time [ns]
   *@param epochTime   epoch start time [ns]
   **/
  CbmStsPoint(const CbmStsPoint& point,
	      Int_t    eventId   = -1,
	      Double_t eventTime = 0.,
	      Double_t epochTime = 0.);


  /** Destructor **/
  virtual ~CbmStsPoint();


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
  void MomentumOut(TVector3& mom) { mom.SetXYZ(fPx_out,fPy_out,fPz_out); }
  Int_t GetStation() const { return fStation; }
  Int_t GetModule() const { return fModule; }


  /** Point coordinates at given z from linear extrapolation **/
  Double_t GetX(Double_t z) const;
  Double_t GetY(Double_t z) const;


  /** Check for distance between in and out **/
  Bool_t IsUsable() const;


  /** Modifiers **/
  void SetPositionOut(TVector3 pos);
  void SetMomentumOut(TVector3 mom);
  virtual void SetTrackID(Int_t id){
	  //SetLink(kMCTrack, id);
	  FairMCPoint::SetTrackID(id);
  };
  void SetStation(Int_t station) { fStation = station; }
  void SetModule(Int_t module) { fModule = module; }

  /** Output to screen **/
  virtual void Print(const Option_t* opt = "") const { }
  void Info() const;



 protected:

  Double32_t fX_out,  fY_out,  fZ_out;
  Double32_t fPx_out, fPy_out, fPz_out;
  Int_t fStation;
  Int_t fModule;



  ClassDef(CbmStsPoint,1)

};



inline void CbmStsPoint::SetPositionOut(TVector3 pos) {
  fX_out = pos.X();
  fY_out = pos.Y();
  fZ_out = pos.Z();
}


inline void CbmStsPoint::SetMomentumOut(TVector3 mom) {
  fPx_out = mom.Px();
  fPy_out = mom.Py();
  fPz_out = mom.Pz();
}



#endif
/** CbmStsDetectorId.h
 **@author V.Friese <v.friese@gsi.de>
 **@since 21.10.2009
 **@version 1.0
 **
 ** Prescription for encoding / decoding the detector ID (integer)
 ** from / to station nr., sector nr., side and channel nr.
 **
 ** Ranges:
 ** - Station number    4 bits     1 - 15
 ** - Sector number     8 bits     1 - 255 //AZ
 ** - Side              1 bit      0 - 1
 ** - Channel number   12 bits     1 - 4095 //AZ
 **
 ** The value 0 is reserved to denote the next higher hierarchy level,
 ** i.e. station 3, sector 0 denotes the entire station 3, not a specific sector.
 **
 ** All data classes using this functionality have to inherit from 
 ** this class.
 **/

#ifndef CBMSTSDETECTORID_H
#define CBMSTSDETECTORID_H 1



#include "CbmDetectorList.h"

class CbmStsDetectorId
{

 public:

  /**    Constructor (empty)   **/
  CbmStsDetectorId() { }


  /**    Destructor (empty)   **/
  virtual ~CbmStsDetectorId() { }


  /**    Create unique detector ID
   **@param  station   Station number (0 - 15)
   **@param  sector    Sector number  (0 - 255)
   **@param  side      0 = front side / 1 = back side
   **@param  channel   channel number (0 - 4095)
   **/
  Int_t DetectorId(Int_t station, Int_t sector, 
		   Int_t side, Int_t channel) const {
    return ( kGEM & 15 )              // System ID on bits 0-3
      | ( ( station & fgkStatMask ) << fgkStatShift )   // Station number
      | ( ( sector  & fgkSectMask ) << fgkSectShift )   // Sector number
      | ( ( side    & fgkSideMask ) << fgkSideShift )   // Side on bit
      | ( ( channel & fgkChanMask ) << fgkChanShift );  // Channel number
  }


  /** Get system identifier from detectorId **/
  Int_t SystemId(Int_t detectorId) const {
    return ( detectorId & 15 );
  }


  /** Get station number from detectorId **/
  Int_t StationNr(Int_t detectorId) const {
    return ( (detectorId >> fgkStatShift) & fgkStatMask );
  }


  /** Get sector number from detectorId **/
  Int_t SectorNr(Int_t detectorId) const {
    return ( (detectorId >> fgkSectShift) & fgkSectMask );
  } 


  /** Get side from detectorId **/
  Int_t Side(Int_t detectorId) const {
    return ( (detectorId >> fgkSideShift) & fgkSideMask );
  }


  /** Get channel number from detectorId **/
  Int_t ChannelNr(Int_t detectorId) const {
    return ( (detectorId >> fgkChanShift) & fgkChanMask );
  }


  /** Number of bits for address fields (static) **/
  static const Int_t fgkStatBits;
  static const Int_t fgkSectBits;
  static const Int_t fgkSideBits;
  static const Int_t fgkChanBits;



 private:

  /** Bit shift for address fields (static) **/
  static const Int_t fgkStatShift;
  static const Int_t fgkSectShift;
  static const Int_t fgkSideShift;
  static const Int_t fgkChanShift;

  /** Bit mask for address fields (static) **/
  static const Int_t fgkStatMask;
  static const Int_t fgkSectMask;
  static const Int_t fgkSideMask;
  static const Int_t fgkChanMask;


  ClassDef(CbmStsDetectorId, 1);

};


#endif
/** CbmStsDigi.h
 **@author V.Friese <v.friese@gsi.de>
 **@since 28.08.2006
 **@version 2.0
 **
 ** Data class for digital STS information
 ** Data level: RAW
 **
 ** The information is encoded into 8 bytes (1 Long64_t).
 ** Address:                       25 bits
 **   - Station Nr.        4 bits
 **   - Sector Nr.         8 bits //AZ
 **   - Side (front/back)  1 bit
 **   - Channel Nr.       12 bits //AZ
 ** Charge (ADC):                  12 bits
 ** Time (ns):                     14 bits
 **
 ** The time is relative to the event time. 
 **/


#ifndef CBMSTSDIGI_H
#define CBMSTSDIGI_H 1


#include "CbmDetectorList.h"
#include "CbmStsDetectorId.h"
#include "FairMultiLinkedData.h"

#include <vector>

class CbmStsDigi : public FairMultiLinkedData,  public CbmStsDetectorId
{

 public:

  /**   Default constructor   **/
  CbmStsDigi();


  /**  Constructor from station number, sector number, 
   **  front/back side and channel number
   **@param station  station number (1 -   15)
   **@param sector   sector number  (1 -  255)
   **@param side     0=front side; 1=back side
   **@param channel  channel number (1 -  4095)
   **@param adc      Charge ADC channel (0 - 4095)
   **@param time     Time within event [ns]
   **/
//   CbmStsDigi(std::vector<Int_t> index, Int_t station, Int_t sector, Int_t side, 
// 	     Int_t channel, Int_t adc, Int_t time);
  CbmStsDigi(Int_t station, Int_t sector, Int_t side, 
	     Int_t channel, Int_t adc, Int_t time);


  /**   Destructor   **/
  virtual ~CbmStsDigi();


  /**   Add charge   **/
  void AddAdc(Int_t adc);
//   void AddIndex(int index, int adc){
// 			AddLink(FairLink(kStsPoint, index, adc));
// 		}
//   void AddIndex(std::vector<Int_t> index){
// 			SetLinks(FairMultiLinkedData(kStsPoint, index));
// 		}


  /**   Maximal number of ADC bits   **/
  static Int_t GetNofAdcBits() { return fgkCharBits; }


  /**   Station number   **/
  Int_t GetStationNr() const { return StationNr(GetDetectorId()); }

  /**   Sector number   **/
  Int_t GetSectorNr() const { return SectorNr(GetDetectorId()); }


  /**   Side ( 0 = front, 1 = back )   **/
  Int_t GetSide() const { return Side(GetDetectorId()); }


  /**   Channel number   **/
  Int_t GetChannelNr() const { return ChannelNr(GetDetectorId()); }


  /**   Charge   **/
  Int_t GetAdc() const { return ( (fData >> fgkCharShift) & fgkCharMask ); }


  /**   Maximum ADC   **/
  static Int_t GetMaxAdc() { return ( (1 << fgkCharBits) - 1 ); }


  /**   Time   **/
  Int_t GetTime() const { return ( (fData >> fgkTimeShift) & fgkTimeMask ); }


  /**   Unique detector ID   **/
  Int_t GetDetectorId() const { 
    return ( kGEM | ( (fData & fgkAddrMask) << 4) );
  }


 private:

  /**   Data members  **/
  Long64_t fData;


  /**   Modifiers   **/
  void SetAdc(Int_t charge);


  /**   Static members for bit operations   **/
  static const Int_t fgkAddrBits;
  static const Int_t fgkCharBits;
  static const Int_t fgkTimeBits;
  static const Int_t fgkCharShift;
  static const Int_t fgkTimeShift;
  static const Long64_t fgkAddrMask;
  static const Long64_t fgkCharMask;
  static const Long64_t fgkTimeMask;


  ClassDef(CbmStsDigi,2);

};


#endif
//* $Id: *//

// -------------------------------------------------------------------------
// -----                    CbmStsDigiMatch header file                -----
// -----                  Created 31/08/06  by V. Friese               -----
// -------------------------------------------------------------------------


/** CbmStsDigiMatch.h
 **@author V.Friese <v.friese@gsi.de>
 **@since 31.08.06
 **@version 1.0
 **
 ** Data class for matching CbmStsDigi with CbmStsPoint. Up to three
 ** matches are possible.
 ** The indizes of CbmStsDigi and CbmStsDigiMatch correspond in their
 ** respective arrays.
 ** The class holds the indizes of all StsPoints corresponding to
 ** the StsDigi.
 **/


#ifndef CBMSTSDIGIMATCH_H
#define CBMSTSDIGIMATCH_H 1


#include "TObject.h"


class CbmStsDigiMatch : public TObject
{

 public:

  /** Default constructor **/
  CbmStsDigiMatch();

  /** Standard constructor **/
  CbmStsDigiMatch(Int_t iPoint);

  /** Destructor **/
  virtual ~CbmStsDigiMatch();

  /** Add a StsPoint index
   *@value Number of indizes present **/
  Int_t AddPoint(Int_t iPoint);

  /** Accessor to StsPoint indizes **/
  Int_t GetRefIndex(Int_t i = 0) const;

 private:

  Int_t fRefIndex[3];

  ClassDef(CbmStsDigiMatch,1);

};

#endif


  
/** @file CbmMCBuffer.h
 ** @author Volker Friese <v.friese@gsi.de>
 ** @date 8 February 2012
 **/


#ifndef CBMMCBUFFER_H
#define CBMMCBUFFER_H 1

//#define NDET 20

#include "CbmMCPointBuffer.h"
#include "CbmMvdPoint.h"
#include "CbmStsPoint.h"
#include "CbmTofPoint.h"
#include "CbmPsdPoint.h"


class TClonesArray;

using namespace std;


/** @class CbmMCBuffer
 ** @author Volker Friese <v.friese@gsi.de>
 ** @date 8 February 2012
 ** @brief Container class for buffers of CbmMCPoints.
 **
 ** This class manages and provides access to buffers of
 ** type CbmMCPointBuffer - one for each detector.
 **
 ** The buffers are filled with the content of a TClonesArray
 ** by the method Fill. Points can be accessed by the method
 ** GetNextPoint. This will deliver a time-ordered sequence
 ** of MCPoints for the respective detector with absolute time
 ** before the current event time. There should be a loop over
 ** this method until it returns a NULL pointer.
 **
 ** The buffered MCPoints are transient. When used, they will be marked
 ** and removed from the buffer at the end of the input event.
 **/
class CbmMCBuffer
{
 public:

  /**   Destructor  **/
  ~CbmMCBuffer();


  /**   Clear 
   ** Removes all used points from the buffers
   **/
  void Clear();


  /**   Get singleton instance  **/
  static CbmMCBuffer* Instance();


  /**   Fill buffer
   ** @param points     Pointer to TClonesArray with FairMCPoints
   ** @param det        Detector System (e.g. kSTS)
   ** @param eventId    ID of current event
   ** @param eventTime  Start time of event [ns]
   ** @value            Number of copied points
   **
   ** The FairMCPoints in the given TClonesArray are copied to the CbmMCBuffer.
   ** The event start time is added to the MCPoint time, the event ID is set.
   **/
  Int_t Fill(TClonesArray* points, DetectorId det, 
	     Int_t eventId, Double_t eventTime);
  Int_t Fill(TClonesArray* points, Int_t det, 
	     Int_t eventId, Double_t eventTime);


  /**  Current time 
   ** @value Start time of last event read into the buffer [ns]
   **/
  Double_t GetTime() const { return fTime; }


  /**  Current event ID
   ** @value ID of last event read into the buffer
   **/
  Int_t GetEventId() const { return fEventId; }
  

  /**   Current size
   ** @value Current buffer size [MB]
   **/
  Double_t GetSize() const;


  /**   Get time of last data in all buffers
   ** @value Time of last MCPoint [ns]
   */
  Double_t GetMaxTime() const;


  /**   Get time of first data in all buffers
   ** @value Time of first MCPoint [ns]
   */
  Double_t GetMinTime() const;


  /**   Get next MCPoint from buffer
   ** @param det    DetectorId (e.g. kSTS)
   ** @value point  Pointer to MCPoint
   **
   ** Returns a pointer to the next (w.r.t. absolute time) MCPoint
   ** of the respective detector in its buffer.
   ** Points are released up to the start time of the last event read
   ** After that, a NULL pointer is returned.
   ** After retrieval, the MCPoint is removed from the buffer.
   **/
  const FairMCPoint* GetNextPoint(DetectorId det);


  /**   Get number of entries
   ** @value Total number of entries in all buffers
   */
  Int_t GetNofEntries() const;


  /**   Screen output 
   ** Reports the current buffer status.
   ** @param option L for info on all buffers
   **/
  void Print(const char* option = "") const;


  /** Set the end-of-run flag
   ** This will triggetr to deliver all points from the buffer
   ** through GetNextPoint, irrespective of the last event time.
   ** @param flag  kTRUE (default) if end of run
   **/
  void SetEndOfRun(Bool_t flag = kTRUE) { fEndOfRun = flag; }

 private:

  /** MCPoint buffers **/
  CbmMCPointBuffer<CbmMvdPoint>   fMvdBuffer; 
  CbmMCPointBuffer<CbmStsPoint>   fGemBuffer;
  CbmMCPointBuffer<CbmTofPoint>   fTofBuffer; 
  CbmMCPointBuffer<CbmPsdPoint>   fZdcBuffer;


  /** Start time of last event read into the buffer **/
  Double_t fTime;


  /** ID of last event read into the buffer  **/
  Int_t fEventId;


  /** End-of-run flag  **/
  Bool_t fEndOfRun;


  /** Pointer to singleton instance **/
  static CbmMCBuffer* fgInstance;


  /**  Default constructor
   **  Declared private to prevent instantiation.
   **/
  CbmMCBuffer();


  /**  Copy constructor. Defined private to prevent usage. **/
  CbmMCBuffer(const CbmMCBuffer&);


  /**  Assignment operator. Defined private to prevent usage. **/
  CbmMCBuffer& operator=(const CbmMCBuffer&);
};

#endif
// -------------------------------------------------------------------------
// -----                      CbmMvdPoint header file                  -----
// -----                  Created 06/11/06  by V. Friese               -----
// -------------------------------------------------------------------------


/**  CbmMvdPoint.h
 *@author V.Friese <v.friese@gsi.de>
 *
 * Data class for interception of MC track with a MVD detetcor station. 
 * Holds in addition to the base class the coordinates and momentum at the 
 * exit from the active volume.
 *
 * Data level MC
 **/


#ifndef CBMMVDPOINT_H
#define CBMMVDPOINT_H 1

#include "FairMCPoint.h"
#include "CbmMvdDetectorId.h"

#include "TObject.h"
#include "TVector3.h"

class CbmMvdPoint : public FairMCPoint, CbmMvdDetectorId
{

 public:

  /** Default constructor **/
  CbmMvdPoint();


  /** Constructor with arguments
   *@param trackId    Index of MCTrack
   *@param pdgCode    Particle type (PDG code)
   *@param stationNr  Station number
   *@param posIn      Coordinates at entrance to active volume [cm]
   *@param posOut     Coordinates at exit of active volume [cm]
   *@param momIn      Momentum of track at entrance [GeV]
   *@param momOut     Momentum of track at exit [GeV]
   *@param tof        Time since event start [ns]
   *@param length     Track length since creation [cm]
   *@param eLoss      Energy deposit [GeV]
   **/
  CbmMvdPoint(Int_t trackId, Int_t pdgCode, Int_t detId, TVector3 posIn, 
	      TVector3 posOut, TVector3 momIn, TVector3 momOut,
	      Double_t tof, Double_t length, Double_t eLoss);


  /** Copy constructor **/
  //  CbmMvdPoint(const CbmMvdPoint& point) { *this = point; };


  /** Destructor **/
  virtual ~CbmMvdPoint();


  /** Accessors **/
  Double_t GetXOut()   const { return fX_out; }
  Double_t GetYOut()   const { return fY_out; }
  Double_t GetZOut()   const { return fZ_out; }
  Double_t GetPxOut()  const { return fPx_out; }
  Double_t GetPyOut()  const { return fPy_out; }
  Double_t GetPzOut()  const { return fPz_out; }
  Int_t GetPdgCode()   const {return fPdgCode;}
  Int_t GetSystemId()  const { return SystemId(fDetectorID); }
  Int_t GetStationNr() const { return StationNr(fDetectorID); }
  Int_t GetPointId()   const {return fPointId;} // Returns index of this object in its TClonesArray.
						// By default not filled. Used internally in the MvdDigitizer.
  void PositionOut(TVector3& pos) { pos.SetXYZ(fX_out,fY_out,fZ_out); }
  void MomentumOut(TVector3& mom) { mom.SetXYZ(fPx_out,fPy_out,fPz_out); }


  /** Modifiers **/
  void SetPositionOut(TVector3 pos);
  void SetMomentumOut(TVector3 mom);
  void SetPdgCode(Int_t pdg){fPdgCode=pdg;}
  void SetPointId(Int_t myId) {fPointId=myId;}



  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;



 protected:

  Double32_t fX_out,  fY_out,  fZ_out;
  Double32_t fPx_out, fPy_out, fPz_out;
  Int_t      fPdgCode; // index of the object in its TClonesArray. By default not filled => -1.
  Int_t      fPointId; // index of the object in its TClonesArray. By default not filled => -1.



  ClassDef(CbmMvdPoint,1)

};



inline void CbmMvdPoint::SetPositionOut(TVector3 pos) {
  fX_out = pos.X();
  fY_out = pos.Y();
  fZ_out = pos.Z();
}


inline void CbmMvdPoint::SetMomentumOut(TVector3 mom) {
  fPx_out = mom.Px();
  fPy_out = mom.Py();
  fPz_out = mom.Pz();
}



#endif
// -------------------------------------------------------------------------
// -----                   CbmMvdDetectorId header file                -----
// -----                 Created 22/04/09  by V. Friese                -----
// -------------------------------------------------------------------------


/** CbmMvdDetectorId.h
 ** Defines unique detector identifier for all MVD components. 
 ** Classes using this ID scheme should derive from this class.
 ** @author V.Friese <v.friese@gsi.de>
 **/
 
 
/** Current definition:
 ** System ID (kMVD=1) on bits 0-4
 ** Station number on bits 5-31
 **/
 

#ifndef CBMMVDDETECTORID_H
#define CBMMVDDETECTORID_H 1


#include <iostream>
#include "TObject.h"
#include "CbmDetectorList.h"
 
using std::cerr;
using std::endl;



class CbmMvdDetectorId
{

  public:
  
  
  /** Constructor **/
  CbmMvdDetectorId();
  
  
  /** Destructor **/
  virtual ~CbmMvdDetectorId()  {}
  
  
  /** Create unique detector ID from station number **/
  Int_t DetectorId(Int_t iStation) const {
     return ( kMVD | (iStation << 5) );
  }
  
  
  /** Get System identifier from detector ID **/
  Int_t SystemId(Int_t detectorId) const {
    Int_t iSystem = detectorId & 31;
    if ( iSystem != kMVD ) {
    	cerr << "-E- CbmMvdDetectorId::GetSystemId : "
	     << "wrong system ID " << iSystem << endl;
	return -1;
    }
    return iSystem;
  }

  
  /** Get station number from detector ID **/
  Int_t StationNr(Int_t detectorId) const {
    return ( ( detectorId & ( ~31 ) ) >> 5 );
  }
  
  
  
  ClassDef(CbmMvdDetectorId,1);
  
};


#endif
// -------------------------------------------------------------------------
// -----                     CbmTofPoint header file                   -----
// -----                 Created 28/07/04  by V. Friese                -----
// -------------------------------------------------------------------------
// modified 23/10/2012 nh
//
/**  CbmTofPoint.h
 *@author V. Friese
 **
 ** Interception of MC track with a TOF detector.
 **/


#ifndef CBMTOFPOINT_H
#define CBMTOFPOINT_H 1


#include "FairMCPoint.h"

class TVector3;

class CbmTofPoint : public FairMCPoint 
{

 public:

  /** Default constructor **/
  CbmTofPoint();


  /** Constructor with arguments
   *@param trackID  Index of MCTrack
   *@param detID    Detector ID
   *@param pos      Ccoordinates at entrance to active volume [cm]
   *@param mom      Momentum of track at entrance [GeV]
   *@param tof      Time since event start [ns]
   *@param length   Track length since creation [cm]
   *@param eLoss    Energy deposit [GeV]
   **/
  CbmTofPoint(Int_t trackID, Int_t detID, TVector3 pos, TVector3 mom, 
	       Double_t tof, Double_t length, Double_t eLoss);


  /** Copy constructor **/
  CbmTofPoint(const CbmTofPoint& point) { *this = point; };


  /** Destructor **/
  virtual ~CbmTofPoint();


  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;

  ClassDef(CbmTofPoint,2)

};


#endif





/**
 * \file CbmTofHit.h
 * \author E. Cordier
 * Modified by D. Gonzalez-Diaz 06/09/06
 * Modified by A.Lebedev 26/05/09
 * Modified by nh 16/12/12
 * Modified by A.Lebedev 15/05/13
**/

#ifndef CBMTOFHIT_H_
#define CBMTOFHIT_H_

#include "BmnHit.h"
#include "CbmBaseHit.h"

class CbmTofHit : public BmnHit
{
public:
  /**
   * \brief Default constructor.
   **/
  CbmTofHit();

  /**
   * \brief Constructor with hit parameters (1a).
   **/
  CbmTofHit(Int_t address, TVector3 pos, TVector3 dpos, Int_t refIndex, Double_t tof, Int_t flag, Int_t channel);

  /**
   * \brief Constructor with hit parameters (1).
   **/
  CbmTofHit(Int_t address, TVector3 pos, TVector3 dpos, Int_t refIndex, Double_t tof, Int_t flag);

  /**
   * \brief Constructor with hit parameters (2) [not the flag]
   **/
  CbmTofHit(Int_t address, TVector3 pos, TVector3 dpos, Int_t refIndex, Double_t tof);

  /**
   * \brief Destructor.
   **/
  virtual ~CbmTofHit();

  /**
   * \brief Inherited from CbmBaseHit.
   */
  virtual string ToString() const;

  /**
   * \brief Inherited from CbmBaseHit.
   */
  Int_t GetPlaneId() const { return 0; }

  Int_t GetRefId() const { return GetIndex(); }

  /** Accessors **/
  Double_t GetTime() const { return fTime; }
  Int_t GetCh() const { return fChannel; }

  /** Modifiers **/
  void SetTime(Double_t time) { fTime = time; };
  void SetType(HitType type) { fType = type; };

private:

  HitType fType; ///< Hit type
  Double32_t fTime; ///< Time since event start [ns]
  Int_t fChannel; ///< Channel identifier

  ClassDef(CbmTofHit, 3)
};

#endif
/** @file CbmTofTrack.h
 ** @author Volker Friese <v.friese@gsi.de>
 ** @date 17.10.2013
 **/

#ifndef CBMTOFTRACK_H
#define CBMTOFTRACK_H 1


#include "TObject.h"
#include "TMath.h"
#include "FairTrackParam.h"
#include "CbmTofHit.h"


/** @class CbmTofTrack
 ** @brief Provides information on attaching a TofHit to a GlobalTrack
 ** @author V.Friese <v.friese@gsi.de>
 **/
class CbmTofTrack : public TObject {

  public:

	/**   Constructor   **/
	CbmTofTrack();


	/** Constructor with parameters
	 ** @param trackIndex   Array index of global track
	 ** @param hitIndex     Array index of TOF hit
	 ** @param trackLength  Track length from primary vertex to TOF
	 ** @param trackPar     Parameters of track at TOF
	 ** @param pidHypo      PID hypothesis for track extrapolation
	 **/
	CbmTofTrack(Int_t trackIndex, Int_t hitIndex, Double_t trackLength,
			    const FairTrackParam& trackPar, Int_t pidHypo) 
	  : TObject(),
	  fGlbTrack(trackIndex),
	  fTofHit(hitIndex),
	  fTrackPar(trackPar),
	  fTrackLength(trackLength),
	  fPidHypo(pidHypo),
	  fDistance(0.) 
	    {
	    }


	/**   Destructor   **/
	virtual ~CbmTofTrack();

	/**  PID hypothesis for track extrapolation to TOF **/
	Int_t    GetPidHypo() const { return fPidHypo; }

	/**  Index of TOF hit **/
	Int_t    GetTofHitIndex() const { return fTofHit; }

	/**  Error of track x coordinate at TOF  **/
	Double_t GetTrackDx() const
		{ return TMath::Sqrt( fTrackPar.GetCovariance(1,1) ); }

	/**  Error of track x coordinate at TOF  **/
    Double_t GetTrackDy() const
    	{ return TMath::Sqrt( fTrackPar.GetCovariance(2,2) ); }

	/**  Index of global track **/
	Int_t    GetTrackIndex()  const { return fGlbTrack; }

	/**  Track length from primary vertex to TOF **/
	Double_t GetTrackLength() const { return fTrackLength; }

 	/**  Track parameters at TOF **/
	const FairTrackParam* GetTrackParameter() const { return &fTrackPar; }

	/**  Track x position at TOF  **/
    Double_t GetTrackX() const { return fTrackPar.GetX(); }

	/**  Track y position at TOF  **/
    Double_t GetTrackY() const { return fTrackPar.GetY(); }

    /** Normalized distance from hit to track **/
    Double_t GetDistance() const { return fDistance; }

    /** Set track index **/
    void SetTrackIndex(Int_t trackIndex) { fGlbTrack = trackIndex; }

    /** Set TOF hit index **/
    void SetTofHitIndex(Int_t tofHitIndex) { fTofHit = tofHitIndex; }

    /** Set track parameter **/
    void SetTrackParameter(const FairTrackParam* par) { fTrackPar = *par; }

    /** Set track length **/
    void SetTrackLength(Double32_t trackLength) { fTrackLength = trackLength; }

    /** Set PID hypothesis for track extrapolation to TOF **/
    void SetPidHypo(Int_t pid) { fPidHypo = pid; }

    /** Set normalized distance from hit to track **/
    void SetDistance(Double_t distance) { fDistance = distance; }
    
  private:

   Int_t          fGlbTrack;     ///< Index of global track
	Int_t          fTofHit;       ///< Index of TofHit
	Double32_t     fTrackLength;  ///< Track length from primary vertex to TOF [cm]
	FairTrackParam fTrackPar;     ///< Track parameters at z of TofHit
	Int_t          fPidHypo;      ///< PID hypothesis used for track extrapolation
	Double32_t     fDistance;     ///< Normalized distance from hit to track


	ClassDef(CbmTofTrack, 1);

};

#endif /* CBMTOFTRACK_H */
// -------------------------------------------------------------------------
// -----                    CbmEcalPoint header file                   -----
// -----                 Created 28/07/04  by V. Friese                -----
// -------------------------------------------------------------------------

/**  CbmEcalPoint.h
 *@author V. Friese
 **
 ** Interception of MC track with the plane representing the ECAL.
 **/


#ifndef CBMECALPOINT_H
#define CBMECALPOINT_H 1


#include "FairMCPoint.h"

class TVector3;

class CbmEcalPoint : public FairMCPoint
{

 public:

  /** Default constructor **/
  CbmEcalPoint();


  /** Constructor with arguments
   *@param trackID  Index of MCTrack
   *@param detID    Detector ID
   *@param pos      Ccoordinates at entrance to active volume [cm]
   *@param mom      Momentum of track at entrance [GeV]
   *@param tof      Time since event start [ns]
   *@param length   Track length since creation [cm]
   *@param eLoss    Energy deposit [GeV]
   **/
  CbmEcalPoint(Int_t trackID, Int_t detID, TVector3 pos, TVector3 mom, 
	       Double_t tof, Double_t length, Double_t eLoss);


  /** Copy constructor **/
  CbmEcalPoint(const CbmEcalPoint& point):FairMCPoint(point) { *this = point; };


  /** Destructor **/
  virtual ~CbmEcalPoint();


  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;

  
  ClassDef(CbmEcalPoint,1)

};


#endif
/** @file CbmDaqBuffer.h
 ** @author Volker Friese <v.friese@gsi.de>
 ** @date 17 July 2012
 **/

#ifndef CBMDAQBUFFER_H
#define CBMDAQBUFFER_H 1

#include <map>
#include <vector>

#include "CbmDetectorList.h"
#include "CbmDigi.h"

using namespace std;



/** @class CbmDaqBuffer
 ** @author Volker Friese <v.friese@gsi.de>
 ** @date 20 July 2012
 ** @brief Singleton buffer class for CBM raw data
 **
 ** This class manages and provides access to buffers of
 ** type CbmMCPointBuffer - one for each detector.
 **
 ** The CbmDaqBuffer stores and sorts (w.r.t. time) CBM raw data
 ** (currently: CbmDigi) transiently.
 ** Data can be send to the buffer by the method InsertData.
 ** They can be retrieved by GetNextData, which delivers a
 ** time-ordered sequence of raw data objects for each detector.
 **
 ** The buffer handles objects only by pointer, i.e. the data have
 ** to be instantiated by the sending task (digitiser) and
 ** deleted by the receiving class (CbmDaq).
 **/
class CbmDaqBuffer
{
  public:

    /**   Destructor  **/
     ~CbmDaqBuffer();


    /** Time of first data for all detectors
     ** @return time of first data [ns]
     **/
    Double_t GetFirstTime() const;


    /** Time of first data for a given detector
     ** @param iDet  detector type (e.g. kSTS)
     ** @return time of first data [ns]
     */
    Double_t GetFirstTime(Int_t iDet) const {
      if ( iDet < kREF || iDet >= kNOFDETS ) return -1.;
      if ( ! GetSize(iDet) ) return -1.;
      return (fData[iDet].begin())->second->GetTime();
    }


    /** Time of last data for all detectors
     ** @return time of last data [ns]
     **/
    Double_t GetLastTime() const;


    /** Time of last data for a given detector
     ** @param iDet  detector type (e.g. kSTS)
     ** @return time of last data [ns]
     */
    Double_t GetLastTime(Int_t iDet) const {
      if ( iDet < kREF || iDet >= kNOFDETS ) return -1.;
      if ( ! GetSize(iDet) ) return -1.;
      return (--fData[iDet].end())->second->GetTime();
    }

    /** Pointer to next raw data object for a given detector
     ** up to given time
     ** @param iDet  detector type (e.g. kSTS)
     ** @param time  maximal time [ns]
     ** @return pointer to raw data object
     **/
    CbmDigi* GetNextData(Int_t iDet, Double_t time);


    /** Current buffer size
     ** @return number of objects in buffer
     */
    Int_t GetSize() const;


    /** Current buffer size for given detector
     ** @param  det  Detector system (e.g. kSTS)
     ** @return number of objects in buffer
     */
    Int_t GetSize(Int_t det) const;


    /** Insert data into the buffer
     ** @param digi  pointer to data object to be inserted
     **/
    void InsertData(CbmDigi* digi);


    /**   Access to singleton instance
     ** @return pointer to instance
     **/
    static CbmDaqBuffer* Instance();


    /**   Print buffer status  **/
    void PrintStatus() const;


  private:


    /** Buffer management **/
    multimap<Double_t, CbmDigi*> fData[kNOFDETS];


    /** Pointer to singleton instance **/
    static CbmDaqBuffer* fgInstance;


    /**  Default constructor
     **  Declared private to prevent instantiation.
     **/
    CbmDaqBuffer();


    /**  Copy constructor. Defined private to prevent usage. **/
    CbmDaqBuffer(const CbmDaqBuffer&);


    /**  Assignment operator. Defined private to prevent usage. **/
    CbmDaqBuffer& operator=(const CbmDaqBuffer&);



};

#endif /* CBMDAQBUFFER_H */
/** @file CbmDigi.h
 ** @author Volker Friese <v.friese@gsi.de>
 ** @date 30.04.2013
 **/


#ifndef CBMDIGI_H
#define CBMDIGI_H 1


#include "TObject.h"


class FairMultiLinkedData;



/** @class CbmDigi
 ** @brief Base class for persistent representation of digital information.
 ** @author V.Friese <v.friese@gsi.de>
 ** @version 2.0
 **
 ** CbmDigi is an abstract base class for the ROOT representation of
 ** the smallest information unit delivered by the detector front-ends.
 ** It is equivalent to the message of a single electronics channel.
 ** The information content is the channel address (unique identifier),
 ** the time stamp and (optionally) the charge (ADC).
 **
 ** Unlike the data class used to actually transport the information
 ** through the data acquisition ("message"), the digi contains
 ** context-free information, i.e. absolute time and unique address.
 **
 ** The class contains a pointer to an object of type FairMultiLinkedData,
 ** where the link information to MCPoints can be stored and retrieved.
 ** If there is no such information (as in case of real data), the pointer
 ** will be NULL.
 **
 ** Note that the Digi class is not responsible for the validity of the
 ** pointer. Copy constructor and assignment operator will perform a
 ** shallow copy only. It is the user's responsibility to ensure the validity
 ** of the pointer and to delete the FairMultiLinkedData wherever appropriate.
 **/
class CbmDigi : public TObject
{

 public:

  /** Default constructor  **/
  CbmDigi();


  /** Destructor  **/
  virtual ~CbmDigi() { };


  /** Unique channel address  **/
  virtual Int_t    GetAddress() const = 0;


  /** Charge (optional)  **/
  virtual Double_t GetCharge()  const { return 0.; }


  /** Get pointer to link collection **/
  FairMultiLinkedData* GetLinks() const { return fLinks; }


  /** System (enum DetectorId) **/
  virtual Int_t    GetSystemId() const = 0;


  /** Absolute time [ns]  **/
  virtual Double_t GetTime()    const = 0;


  /** Set pointer to link collection **/
 void SetLinks(FairMultiLinkedData* links) { fLinks = links; }

  

 protected:

  FairMultiLinkedData* fLinks; ///< Monte-Carlo link collection

  CbmDigi(const CbmDigi&);
  CbmDigi& operator=(const CbmDigi&);

  ClassDef(CbmDigi,2);

};

#endif
/** CbmStsDigiLight.h
 **@author V.Friese <v.friese@gsi.de>
 **@since 28.08.2006
 **@version 2.0
 **
 ** Data class for digital STS information
 ** Data level: RAW
 **
 ** Without inheritance from FairTimeStamp and FairMultiLinkedData
 **
 ** The information is encoded into 8 bytes (1 Long64_t).
 ** Address:                       25 bits
 **   - Station Nr.        4 bits
 **   - Sector Nr.        10 bits
 **   - Side (front/back)  1 bit
 **   - Channel Nr.       10 bits
 ** Charge (ADC):                  12 bits
 ** Time (ns):                     14 bits
 **
 ** The time is relative to the event time. 
 **/


#ifndef CBMSTSDIGILIGHT_H
#define CBMSTSDIGILIGHT_H 1


#include "CbmDetectorList.h"
#include "CbmDigi.h"
#include "CbmStsDetectorId.h"

#include <vector>

class CbmStsDigiLight : public CbmDigi, public CbmStsDetectorId
{

 public:

  /**   Default constructor   **/
  CbmStsDigiLight();


  /**  Constructor from station number, sector number, 
   **  front/back side and channel number
   **@param station  station number (1 -   15)
   **@param sector   sector number  (1 - 1023)
   **@param side     0=front side; 1=back side
   **@param channel  channel number (1 -  1023)
   **@param adc      Charge ADC channel (0 - 4095)
   **@param time     Time within event [ns]
   **/
//   CbmStsDigi(std::vector<Int_t> index, Int_t station, Int_t sector, Int_t side, 
// 	     Int_t channel, Int_t adc, Int_t time);
  CbmStsDigiLight(Int_t station, Int_t sector, Int_t side, 
	     Int_t channel, Int_t adc, Int_t time);


  /**   Destructor   **/
  virtual ~CbmStsDigiLight();


  /**   Add charge   **/
  void AddAdc(Int_t adc);
//   void AddIndex(int index, int adc){
// 			AddLink(FairLink(kStsPoint, index, adc));
// 		}
//   void AddIndex(std::vector<Int_t> index){
// 			SetLinks(FairMultiLinkedData(kStsPoint, index));
// 		}

  /**   System ID    **/
  Int_t GetSystemId() const { return kGEM; }


  /**   Station number   **/
  Int_t GetStationNr() const { return StationNr(GetAddress()); }


  /**   Sector number   **/
  Int_t GetSectorNr() const { return SectorNr(GetAddress()); }


  /**   Side ( 0 = front, 1 = back )   **/
  Int_t GetSide() const { return Side(GetAddress()); }


  /**   Channel number   **/
  Int_t GetChannelNr() const { return ChannelNr(GetAddress()); }


  /**   Charge   **/
  Int_t GetAdc() const { return ( (fData >> fgkCharShift) & fgkCharMask ); }


  /**   Time   **/
  Double_t GetTime() const { return Double_t( (fData >> fgkTimeShift) & fgkTimeMask ); }


  /**   Unique detector ID   **/
  Int_t GetAddress() const {
    return ( kGEM | ( (fData & fgkAddrMask) << 4) );
  }


 private:

  /**   Data members  **/
  Long64_t fData;


  /**   Modifiers   **/
  void SetAdc(Int_t charge);


  /**   Static members for bit operations   **/
  static const Int_t fgkAddrBits;
  static const Int_t fgkCharBits;
  static const Int_t fgkTimeBits;
  static const Int_t fgkCharShift;
  static const Int_t fgkTimeShift;
  static const Long64_t fgkAddrMask;
  static const Long64_t fgkCharMask;
  static const Long64_t fgkTimeMask;


  ClassDef(CbmStsDigiLight,1);

};


#endif
// -------------------------------------------------------------------------
// -----                       CbmStsHit header file                   -----
// -----                  Created 30/08/06  by V. Friese               -----
// -------------------------------------------------------------------------


/** CbmStsHit
 *@author Volker Friese <v.friese@gsi.de>
 *@since 30.08.06
 *@version 1.1
 **
 ** Data class for a reconstructed hit in the STS
 ** Data level RECO
 ** Derived from CbmHit.
 ** Additional members: Channel numbers and covariance in x and y
 ** In case of pixel sensor backside channel is -1
 **/



#ifndef CBMSTSSHIT_H
#define CBMSTSSHIT_H 1

#include "CbmHit.h"

#include "CbmDetectorList.h"

class TVector3;

class CbmStsHit : public CbmHit
{

 public:

  /** Default constructor (not for use) **/
  CbmStsHit();


  /** Standard constructor
  *@param detId     Unique detector ID
  *@param pos       Position in global c.s. [cm]
  *@param dPos      Errors of position in global c.s. [cm]
  *@param covXY     Covariance of x and y [cm*2]
  *@param iDigiF    Digi index front side
  *@param iDigiB    Digi index back side
  **/
  CbmStsHit(Int_t detId, TVector3& pos, TVector3& dPos, Double_t covXY, 
	    Int_t iDigiF, Int_t iDigiB);

  CbmStsHit(Int_t detId, TVector3& pos, TVector3& dPos, Double_t covXY, 
	    Int_t iDigiF, Int_t iDigiB, Int_t iPosSX, Int_t iPosSY, Int_t iLayer);

  CbmStsHit(Int_t detId, TVector3& pos, TVector3& dPos, Double_t dxy, 
	    Int_t iDigiF, Int_t iDigiB, Double_t dSignalDiv);


  /** Destructor **/
  virtual ~CbmStsHit();


  /** Accessors **/

  
  Int_t    GetSystemId()           const { 
    return ( fDetectorID & (15<<24) ) >> 24; }
  virtual  Int_t    GetStationNr()  const { 
    return ( fDetectorID & (255<<16) ) >> 16; }
  Int_t    GetSectorNr()   const {  // sector number within station
    return ( fDetectorID & (4095<<4) ) >> 4; }
  Int_t    GetSensorNr()   const {  // sensor number within sector
    return ( fDetectorID & (7<<1) ) >> 1; }
  Int_t    GetDigi(Int_t iSide) const; // front side = 0; back side = 1

  Double_t GetSignalDiv()          const { return fSignalDiv; }

  Int_t GetPosSensorX()               const { return fPosSX;}
  Int_t GetPosSensorY()               const { return fPosSY;}

  void SetStatLayer(Int_t it)              { fStatLayer = it; }
  Int_t GetStatLayer()                const { return fStatLayer; }
  void AddIndex(int index){
			AddLink(FairLink(kStsCluster, index));
		}

  /** Screen output **/
  virtual void Print(Option_t* opt) const;


 private:
  Int_t fDigiF;          // Channel number front side
  Int_t fDigiB;          // Channel number back side

  Int_t fPosSX;          // discretized X position in sensor
  Int_t fPosSY;          // discretized Y position in sensor

  Int_t fStatLayer;

  Double_t fSignalDiv;   // ADC front/ADC back, theoretically if 1 then hit is valid

  ClassDef(CbmStsHit,1);

};


#endif
//* $Id: */

// -------------------------------------------------------------------------
// -----                      CbmStsCluster header file                -----
// -----                  Created 25/06/2008  by R. Karabowicz         -----
// -------------------------------------------------------------------------


/** CbmStsCluster.h
 **@author V.Friese <v.friese@gsi.de>
 **@since 28.08.06
 **@version 1.0
 **
 ** Data class for digital STS information
 ** Data level: RAW
 **
 ** The detector ID consists of:
 **   system ID (0-31, kSTS=2), bits 0-4, see base class
 **   station number (0-255), bits 5-12 
 **   sector number (0-32767), bits 13-27
 **   side (0=front side, 1=back side, bit 28, always 0 for pixel sectors).
 ** 
 ** The index of the (first) MCPoint having activated this channel
 ** is accessible via GetMcPointIndex(). 
 **/


#ifndef CBMSTSCLUSTER_H
#define CBMSTSCLUSTER_H 1

#include "FairMultiLinkedData.h"
#include "CbmDetectorList.h"

class CbmStsCluster : public FairMultiLinkedData
{

 public:

  /** Default constructor **/
  CbmStsCluster();


  /** Constructor from station number, sector number, 
   ** front/back side and channel number
   **@param iStation  station number (0-255)
   **@param iSector   sector number  (0-32767)
   **@param iSide     0=front side; 1=back side
   **@param iChannel  channel number
   **/
  CbmStsCluster(Double_t digiSig, Int_t iStation, Int_t iSector, Int_t iSide);

  /** Destructor **/
  virtual ~CbmStsCluster();

  void AddDigi(Int_t idigi)  { fDigis[fNofDigis++] = idigi; }
//   void AddIndex(int index, double digiSig){
// 			AddLink(FairLink(kStsDigi, index));
// 		}
  void SetMean     (Double_t chan) { fChannel = chan; }
  void SetMeanError(Double_t err)  { fError   = err;  }

  /** Accessors **/
  Int_t    GetDetectorId() const { return fDetectorId; }

  Int_t    GetStationNr()  const { 
    return ( fDetectorId & (255<<16) ) >> 16; }
  Int_t    GetSectorNr()   const {  // sector number within station
    return ( fDetectorId & (4095<<4) ) >> 4; }
  Int_t    GetSide()        const {
    return ( fDetectorId & (1<<0) ) >> 0; }  // 0=front, 1=back

  Int_t    GetNDigis()       const { return fNofDigis; }
  Int_t    GetDigi(Int_t inum )    { return fDigis[inum]; }
  Double_t GetMean()      const { return fChannel;  }
  Double_t GetMeanError() const { return fError;    }
  Double_t GetQtot()      const { return fQtot; } //AZ
  Int_t GetLeft()         const { return fLeftEdge; } //AZ
  void SetQtot(Double_t qtot) { fQtot = qtot; } //AZ
  void SetLeft(Int_t left) { fLeftEdge = left; } //AZ: < 0 if no left neighbour

 private:

  Int_t    fDetectorId;
  //  Int_t*   fDigis;//[100];
  Int_t   fDigis[100];
  Int_t    fNofDigis;
  Double_t fChannel;
  Double_t fError;
  Double32_t fQtot; //AZ
  Int_t fLeftEdge; //AZ

  ClassDef(CbmStsCluster,1);

};

#endif
// -------------------------------------------------------------------------
// -----                      CbmStsTrack header file                  -----
// -----                  Created 26/01/05  by V. Friese               -----
// -------------------------------------------------------------------------


/**  CbmStsTrack.h
 *@author V.Friese <v.friese@gsi.de>
 **
 ** STS local track. Holds lists of CbmStsHits and the fitted
 ** track parameters. The fit parameters are of type FairTrackParam
 ** and can only be accesssed and modified via this class.
 **/

#ifndef CBMSTSTRACK_H
#define CBMSTSTRACK_H 1

#include "CbmBaseHit.h"
#include "FairTrackParam.h"

#include "TArrayI.h"
#include "TObject.h"

#include <map>

class FairHit;



class CbmStsTrack : public TObject
{

 public:

  /** Default constructor **/
  CbmStsTrack();


  /** Destructor **/
  virtual ~CbmStsTrack();


  /** Add a StsHit to the list **/
  void AddStsHit(Int_t hitIndex, FairHit* hit);
  
  //SM
  void AddPixelHit(Int_t hitIndex, CbmBaseHit* hit);


  /** Associate a MvdHit to the track **/
  void AddMvdHit(Int_t hitIndex, FairHit* mvdHit);



  /** Public method Print
   ** Output to screen 
   **/
  void Print();


  /** Public method SortHits
   ** Sorts the hits in downstream direction
   ** and writes the hit indizes into the member fHits
   **/
  void SortHits();

  void SortMvdHits();


  /** Accessors  **/
  Int_t GetNStsHits()              const { return fStsHits.GetSize(); }
  Int_t GetNMvdHits()              const { return fMvdHits.GetSize(); }
  Int_t GetStsHitIndex(Int_t iHit) const { return fStsHits.At(iHit); }  
  Int_t GetMvdHitIndex(Int_t iHit) const { return fMvdHits.At(iHit); }  
  Int_t GetPidHypo()               const { return fPidHypo; }
  Int_t GetFlag()                  const { return fFlag; }
  Double_t GetChi2()               const { return fChi2; }
  Int_t GetNDF()                   const { return fNDF; }
  Double_t GetB()                  const { return fB; }
  FairTrackParam* GetParamFirst() { return &fParamFirst; }
  FairTrackParam* GetParamLast()  { return &fParamLast ; }


  /** Modifiers  **/
  void SetPidHypo(Int_t pid)                { fPidHypo    = pid;  }
  void SetParamFirst(FairTrackParam& par)    { fParamFirst = par;  }
  void SetParamLast(FairTrackParam& par)     { fParamLast  = par;  }
  void SetFlag(Int_t flag)                  { fFlag       = flag; }
  void SetChi2(Double_t chi2)               { fChi2       = chi2; }
  void SetNDF(Int_t ndf)                    { fNDF        = ndf;  }
  void SetB(Double_t b)                     { fB          = b;    }
  


 private:

  /** Array containg the indizes of the STS hits attached to the track **/
  TArrayI fStsHits;

  /** Array containg the indizes of the MVD hits attached to the track **/
  TArrayI fMvdHits;


  /** PID hypothesis used by the track fitter **/
  Int_t fPidHypo;


  /** Track parameters at first and last fitted hit **/
  FairTrackParam fParamFirst;
  FairTrackParam fParamLast;


  /** Quality flag **/
  Int_t fFlag;


  /** Chi square and NDF of track fit **/
  Double32_t fChi2;
  Int_t fNDF;


  /** Impact parameter of track at target z, in units of its error **/
  Double32_t fB;


  /** Maps from hit z position to hit index. STL map is used because it
   ** is automatically sorted. Temporary only; not for storgage.
   ** The Hit index arrays will be filled by the method SortHits.
   **/
  std::map<Double_t, Int_t> fStsHitMap;        //!
  std::map<Double_t, Int_t> fMvdHitMap;        //!
      

  ClassDef(CbmStsTrack,1);

};



#endif
/** CbmStsTrackMatch.h
 *@author V.Friese <v.friese@gsi.de>
 *@since 07.05.2009
 **
 ** Data structure describing the matching of a reconstructed track
 ** with a Monte Carlo track on the base of corresponding hits/points.
 ** This requires matching of hits to MC points.
 **/


#ifndef CBMTRACKMATCH_H
#define CBMTRACKMATCH_H 1


#include "TObject.h"



class CbmTrackMatch : public TObject
{

 public:

  /** Default constructor **/
  CbmTrackMatch();


  /** Standard constructor 
  *@param mcTrackID   Index of matched MCTrack
  *@param nTrue       Number of true hits (belonging to matched MCTrack)
  *@param nWrong      Number of wrong Hits (from other MCTracks)
  *@param nFake       Number of fake hits (not belonging to any MCTrack)
  *@param nTracks     Number of MCTracks with common hits
  **/
  CbmTrackMatch(Int_t mcTrackID, 
		Int_t nTrue, 
		Int_t nWrong, 
		Int_t nFake, 
		Int_t nTracks);


  /** Destructor **/
  virtual ~CbmTrackMatch();


  /** Index of matched MC track **/
  Int_t GetMCTrackId() const { return fMCTrackId;    };

  /** Number of true hits on track (from matched MC track) **/
  Int_t GetNofTrueHits() const { return fNofTrueHits;  };

  /** Number of wrong hits on track (from other MC tracks) **/
  Int_t GetNofWrongHits() const { return fNofWrongHits; };

  /** Number of fake hits on track (from no MC track) **/
  Int_t GetNofFakeHits() const { return fNofFakeHits;  };

  /** Number of MCTracks with common hits **/
  Int_t GetNofMCTracks() const { return fNofMCTracks;  };


 private:

  /** Index of matched CbmMCTrack  **/
  Int_t fMCTrackId;

  /** Number of true hits (belonging to the matched MCTrack) **/
  Int_t fNofTrueHits;

  /** Number of wrong hits (belonging to other MCTracks) **/
  Int_t fNofWrongHits;

  /** Number of fake hits (belonging to no MCTrack) **/
  Int_t fNofFakeHits;

  /** Number of MCTrackx with common hits **/
  Int_t fNofMCTracks;


  ClassDef(CbmTrackMatch,1);

};


#endif
				 
// -------------------------------------------------------------------------
// -----                      CbmMvdHit header file                    -----
// -----                 Created 07/11/06  by V. Friese                -----
// -------------------------------------------------------------------------


/** CbmMvdHit.h
 *@author V.Friese <v.friese@gsi.de>
 **
 ** Data class for hits in the CBM-MVD. 
 ** Data level RAW.
 ** Original source (CbmStsMapsHit) by M. Deveaux.
 ** 
 ** Hit flag not used up to now (will come later with real hit finding).
 **/


#ifndef CBMMVDHIT_H
#define CBMMVDHIT_H 1


#include "CbmHit.h"
#include "CbmMvdDetectorId.h"

#include "TVector3.h"

class CbmMvdHit : public CbmHit, public CbmMvdDetectorId 
{

 public:    

  /** Default constructor **/
  CbmMvdHit();


  /** Standard constructor 
  *@param statNr Station number
  *@param pos    Position coordinates [cm]
  *@param dpos   Errors in position coordinates [cm]
  *@param flag   Hit flag
  **/
  CbmMvdHit(Int_t statNr, TVector3& pos, TVector3& dpos, Int_t flag);


  /** Destructor **/
  virtual ~CbmMvdHit();    


  /** Output to screen **/
  virtual void Print(const Option_t* opt = 0) const;


  /** Accessors **/
  Int_t GetSystemId()  const { return SystemId(fDetectorID); }
  virtual Int_t GetStationNr() const { return StationNr(fDetectorID); }
  Int_t GetFlag()      const { return fFlag; }; 

  

 protected:

  Int_t fFlag;     // Hit flag; to be used later

    
  ClassDef(CbmMvdHit,1);

};


#endif
// -------------------------------------------------------------------------
// -----                   CbmMvdHitMatch header file                  -----
// -----                 Created 07/11/06  by V. Friese                -----
// -------------------------------------------------------------------------


/** CbmMvdHitMatch header file
 *@author Michael Deveaux <m.deveaux@gsi.de>
 **
 ** Former CbmStsMapsHitInfo
 ** Data class for connecting CbmMvdHit with MC information.
 ** Data level RECO
 **/


#ifndef CBMMVDHITMATCH_H
#define CBMMVDHITMATCH_H 1


#include "TObject.h"


class CbmMvdHitMatch: public TObject 
{

 public:

  /** Default constructor **/
  CbmMvdHitMatch();


  /** Constructor with all parameters **/
  CbmMvdHitMatch(Int_t fileNumber, Int_t eventNumber, Int_t trackId,
		 Int_t pointId, Int_t nMerged);


  /** Destructor **/
  virtual ~CbmMvdHitMatch();  


  /** Accessors **/
  Int_t  GetFileNumber()  const { return fFileNumber;  }
  Int_t  GetEventNumber() const { return fEventNumber; }
  Int_t  GetTrackId()     const { return fTrackId;     } 
  Int_t  GetPointId()     const { return fPointId;     }
  Int_t  GetNMerged()     const { return fNMerged;     }
  Bool_t IsFake()         const { 
    if ( fPointId == -1 ) return kTRUE;
    else                  return kFALSE;
  }


  /** Modifiers **/
  void AddMerged()  { fNMerged++; }


  /** Reset data members **/
  void Clear();


 private:

  /** Indicates the file to which the corresponding point belongs.
   ** -1    => no file (fake hit)
   **  0    => data file
   **  1    => background file (pileup)
   **/
  Int_t fFileNumber;


  /** Event number of the corresponding MCPoint.  Important to 
   ** find it in background files due to the random access.
   ** -1 => no corresponding MCPoint (fake hit)
   **  0 => current event in data file
   **  n => event in pileup file
   **/
  Int_t fEventNumber;


  /** Index of the corresponding MCTrack in its TClonesArray.
   ** Also true for background files.
   ** -1 for fake hits
   **/
  Int_t fTrackId;


  /** Index of the corresponding MCPoint in its TClonesArray.
   ** Also true for background files.
   ** -1 for fake hits
   **/
  Int_t fPointId;


  /** Number of other hits this one is merged with
   ** -1 => Hit was created without checking for merging
   **  0 => Hit was not merged
   **  n => Hit was merged with n other hits
   **/
  Int_t fNMerged;




  ClassDef(CbmMvdHitMatch,1);

};


#endif
// -------------------------------------------------------------------------
// -----                    CbmGlobalTrack header file                 -----
// -----                  Created 01/12/05  by V. Friese               -----
// -----                  Modified 04/06/09  by A. Lebedev             -----
// -------------------------------------------------------------------------

/**  CbmGlobalTrack.h
 *@author V.Friese <v.friese@gsi.de>
 **
 ** Data class for Global CBM track. Data level RECO.
 ** It consists of local tracks in STS, MUCH and TRD and a RICH ring.
 **
 **/

#ifndef CBMGLOBALTRACK_H_
#define CBMGLOBALTRACK_H_ 1

#include "FairTrackParam.h"
#include "BmnFitNode.h"
#include "TObject.h"

class CbmGlobalTrack : public TObject
{

 public:

  /** Default constructor **/
  CbmGlobalTrack();


  /** Destructor **/
  virtual ~CbmGlobalTrack();


  /** Accessors **/
  Int_t GetStsTrackIndex()  const { return fStsTrack; }
  Int_t GetTrdTrackIndex()  const { return fTrdTrack; }
  Int_t GetMuchTrackIndex()  const { return fMuchTrack; }
  Int_t GetRichRingIndex()  const { return fRichRing; }
  Int_t GetTofHitIndex()    const { return fTofHit;   }
  const FairTrackParam* GetParamFirst() const { return &fParamFirst;   }
  const FairTrackParam* GetParamLast() const { return &fParamLast;   }
  Int_t GetPidHypo()        const { return fPidHypo;  }
  Double_t GetChi2()        const { return fChi2;     }
  Int_t GetNDF()            const { return fNDF;      }
  Int_t GetFlag()           const { return fFlag;     }
  Double_t GetLength()      const { return fLength;   }
  
  const BmnFitNode* GetFitNode(Int_t index) const {return &fFitNodes[index];}
  const vector<BmnFitNode>& GetFitNodes() const {return fFitNodes;}
  Int_t GetNofHits() const {return fNofHits;}


  /** Modifiers **/
  void SetStsTrackIndex(Int_t iSts)  { fStsTrack = iSts;  }
  void SetTrdTrackIndex(Int_t iTrd)  { fTrdTrack = iTrd;  }
  void SetMuchTrackIndex(Int_t iMuch)  { fMuchTrack = iMuch;  }
  void SetRichRingIndex(Int_t iRing) { fRichRing = iRing; }
  void SetTofHitIndex(Int_t iTofHit) { fTofHit = iTofHit; }
  void SetParamFirst(const FairTrackParam* parFirst) { fParamFirst = *parFirst;}
  void SetParamLast(const FairTrackParam* parLast) { fParamLast = *parLast;}
  void SetPidHypo(Int_t iPid)        { fPidHypo  = iPid;  }
  void SetChi2(Double_t chi2)        { fChi2     = chi2;  }
  void SetNDF(Int_t ndf)             { fNDF      = ndf;   }
  void SetFlag(Int_t iFlag)          { fFlag     = iFlag; }
  void SetLength(Double_t length)    { fLength   = length;}
  
  void SetFitNodes(const vector<BmnFitNode>& nodes) {fFitNodes = nodes;}
  void SetNofHits(Int_t n) {fNofHits = n;}


  /** Output to screen **/
  void Print() const;


 private:

  /** Indices of local StsTrack, TrdTrack, MuchTrack, RichRing and TofHit **/
  Int_t fStsTrack;
  Int_t fTrdTrack;
  Int_t fMuchTrack;
  Int_t fRichRing;
  Int_t fTofHit;

  Int_t fNofHits; //number of all hits
  
  /** Global track parameters at first and last plane **/
  FairTrackParam fParamFirst;
  FairTrackParam fParamLast;
  vector<BmnFitNode> fFitNodes; // Array of fit nodes

  /** PID hypothesis used for global track fit **/
  Int_t fPidHypo;

  /** Chi2 of global track fit **/
  Double32_t fChi2;

  /** NDF of global track fit **/
  Int_t fNDF;

  /** Quality flag **/
  Int_t fFlag;

  /** Track length **/
  Double32_t fLength;


  ClassDef(CbmGlobalTrack, 2);

};


#endif
// -------------------------------------------------------------------------
// -----                    CbmPsdPoint header file                   -----
// -----                 Created 28/07/04  by V. Friese                -----
// -------------------------------------------------------------------------

/**  CbmPsdPoint.h
 *@author V. Friese
 **
 ** Interception of MC track with the plane representing the ECAL.
 **/


#ifndef CBMPSDPOINT_H
#define CBMPSDPOINT_H 1


#include "FairMCPoint.h"

class Tvector3;

class CbmPsdPoint : public FairMCPoint
{

 public:

  /** Default constructor **/
  CbmPsdPoint();


  /** Constructor with arguments
   *@param trackID  Index of MCTrack
   *@param detID    Detector ID
   *@param pos      Ccoordinates at entrance to active volume [cm]
   *@param mom      Momentum of track at entrance [GeV]
   *@param tof      Time since event start [ns]
   *@param length   Track length since creation [cm]
   *@param eLoss    Energy deposit [GeV]
   **/
  CbmPsdPoint(Int_t trackID, Int_t detID,  TVector3 pos, TVector3 mom, 
	       Double_t tof, Double_t length, Double_t eLoss);


  /** Copy constructor **/
  //  CbmPsdPoint(const CbmPsdPoint& point) { *this = point; };


  /** Destructor **/
  virtual ~CbmPsdPoint();


  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;

   /** Modifiers **/
  void SetModuleID(Int_t mod) { fModuleID = mod; }
   /** Accessors **/
  Int_t GetModuleID() const {return fModuleID;}

 private:
  Int_t fModuleID; //number of module

  
  ClassDef(CbmPsdPoint,2)

};


#endif
/** CbmPsdHit.h
 **@author Alla Maevskaya <alla@inr.ru>
 **@since 23.10.2012
 **@version 1.0
 **
 ** Data class for PSD reconstruction
 ** Energy deposition per module
 **/


#ifndef CBMPSDHIT_H
#define CBMPSDHIT_H 1


#include "CbmDetectorList.h"
#include "TObject.h"

#include <vector>

class CbmPsdHit : public TObject
{

 public:

  /**   Default constructor   **/
  CbmPsdHit() ;
  
  CbmPsdHit(Int_t module, Float_t edep) ;
  
  
  /**   Destructor   **/
  virtual ~CbmPsdHit();
  
 
  
  /**   Setters - Getters   **/
  
  Float_t GetEdep() const { return fEdep; }
  void SetEdep(Float_t edep) {fEdep=edep;}
  
  Int_t GetModuleID() const { return fModuleID; }
  void SetModuleID(Int_t mod) {  fModuleID = mod; }
  
   void Print();
  
 private:


  /**   Data members  **/
 
  Int_t fModuleID;
  Float_t fEdep;

  
  ClassDef(CbmPsdHit,1);

};


#endif
/** CbmPsdDigi.h
 **@author Alla Maevskaya <alla@inr.ru>
 **@31 October 2012
 **@version 1.0
 **
 ** Data class for digital PSD information
 **
 ** energy deposition for single scintillator 
 ** Ideal case - Edep in GeV, idel  detector response
 **
 ** The time is relative to the event time. 
 **/


#ifndef CBMPSDDIGI_H
#define CBMPSDDIGI_H 1


#include "CbmDetectorList.h"
#include "TObject.h"

#include <vector>

class CbmPsdDigi : public TObject
{

 public:

  /**   Default constructor   **/
  CbmPsdDigi() ;
  
  CbmPsdDigi(Int_t section, Int_t module, Float_t edep) ;
  
  
  /**   Destructor   **/
  virtual ~CbmPsdDigi();
     
  /**   Setter - Getter   **/
  
  Float_t GetEdep() const { return fEdep; }
  void SetEdep(Float_t edep) {fEdep = edep;}

  Int_t GetModuleID() const { return fModuleID; }
  void SetModuleID(Int_t mod) {  fModuleID = mod; }

  Int_t GetSectionID() const { return fSectionID; }
  void SetSectionID(Int_t sec) {  fSectionID = sec; }
  
   void Print();
  
 private:


  /**   Data members  **/
 
  Int_t fModuleID;
  Int_t fSectionID;
  Float_t fEdep;

  
  ClassDef(CbmPsdDigi,1);

};


#endif
/** CbmPsdHit.h
 **@author Alla Maevskaya <alla@inr.ru>
 **@since 23.10.2012
 **@version 1.0
 **
 ** Data class for PSD reconstruction
 ** Energy deposition per event
 **/


#ifndef CBMPSDEventData_H
#define CBMPSDEventData_H 1


#include "CbmDetectorList.h"
#include "TObject.h"

#include <vector>

class CbmPsdEventData : public TObject
{

 public:

  /**   Default constructor   **/
  CbmPsdEventData();
//  CbmPsdEventData(const char *name) ;
  
  CbmPsdEventData(Float_t rp, Float_t b, Float_t edepi, Float_t edepo) ;
  
  
  /**   Destructor   **/
  virtual ~CbmPsdEventData();
  
 
  
  /**   Setters - Getters   **/
  
  Float_t GetRP() const { return fRP; }
  void SetRP(Float_t rp) {fRP = rp;}
  
//  Float_t GetImpact() const { return fB; }
  Float_t GetB() const { return fB; }
  void SetB(Float_t b) {  fB = b; }

  Float_t GetEdepInner() const { return fEdepInner; }
  void SetEdepInner(Float_t edepi) {fEdepInner = edepi;}
  
  Float_t GetEdepOuter() const { return fEdepOuter; }
  void SetEdepOuter(Float_t edepo) {fEdepOuter = edepo;}
  
  Float_t GetEdepTotal() const { return fEdepTotal; }
  void SetEdepTotal(Float_t edept) {fEdepTotal = edept;}
  
  void Print();
  
 private:


  /**   Data members  **/
 
   Float_t fRP;
   Float_t fB;
   Float_t fEdepInner;
   Float_t fEdepOuter;
   Float_t fEdepTotal;
  
  ClassDef(CbmPsdEventData,1);

};


#endif
// -------------------------------------------------------------------------
// -----                     CbmMvdGeoPar header file                  -----
// -----                  Created 07/11/06  by V. Friese               -----
// -------------------------------------------------------------------------


/**  CbmMvdGeoPar.h
 *@author V.Friese <v.friese@gsi.de>
 *
 * Handling of geometry parameters for MVD. Copied from CbmGeoStsPar.h.
 *
 **/


#ifndef CBMMVDGEOPAR_H
#define CBMMVDGEOPAR_H 1


#include "FairParGenericSet.h"



class CbmMvdGeoPar : public FairParGenericSet {

 public:
  
  /** Constructor **/
  CbmMvdGeoPar(const char* name = "CbmMvdGeoPar",
	       const char* title ="MVD Geometry Parameters",
	       const char* context = "Default");


  /** Destructor **/
  virtual ~CbmMvdGeoPar();


  /** Clear parameter set **/
  virtual void clear();


  /** Put parameters **/
  virtual void putParams(FairParamList* parList);


  /** Get parameters **/
  virtual Bool_t getParams(FairParamList* parList);


  /** Accessors to sensitive and passive nodes **/
  TObjArray* GetGeoSensitiveNodes() { return fGeoSensNodes; }
  TObjArray* GetGeoPassiveNodes()   { return fGeoPassNodes; }


 private:

  TObjArray* fGeoSensNodes; // List of FairGeoNodes for sensitive volumes
  TObjArray* fGeoPassNodes; // List of FairGeoNodes for passive volumes

  CbmMvdGeoPar(const CbmMvdGeoPar&);
  CbmMvdGeoPar& operator=(const CbmMvdGeoPar&);

  ClassDef(CbmMvdGeoPar,1);

};


#endif
#ifndef CBMGEOSTTPAR_H
#define CBMGEOSTTPAR_H

#include "FairParGenericSet.h"

class TObjArray;
class FairParamList;

class CbmGeoSttPar       : public FairParGenericSet {
public:
  TObjArray      *fGeoSensNodes; /** List of FairGeoNodes for sensitive  volumes */
  TObjArray      *fGeoPassNodes; /** List of FairGeoNodes for sensitive  volumes */

  CbmGeoSttPar      (const char* name="CbmGeoSttPar",
             const char* title="Stt Geometry Parameters",
             const char* context="TestDefaultContext");
  ~CbmGeoSttPar      (void);
  void clear(void);
  void putParams(FairParamList*);
  Bool_t getParams(FairParamList*);
  TObjArray             *GetGeoSensitiveNodes(){return fGeoSensNodes;}
  TObjArray             *GetGeoPassiveNodes(){return fGeoPassNodes;}

 private:

  CbmGeoSttPar(const CbmGeoSttPar&);
  CbmGeoSttPar& operator=(const CbmGeoSttPar&);

  ClassDef(CbmGeoSttPar,1)
};

#endif /* !CBMGEOSTTPAR_H */
//------------------------------------------------------------------------------------------------------------------------
#ifndef __BMN_DCH_HIT_H
#define __BMN_DCH_HIT_H 1

#include "BmnHit.h"

#include "TArrayI.h"
//------------------------------------------------------------------------------------------------------------------------
class BmnDchHit : public BmnHit
{

public:

  BmnDchHit();
  BmnDchHit(Int_t detectorID, TVector3 pos, TVector3 dpos, Int_t refIndex, Int_t flag, Int_t trackIndex, UChar_t dchlayer);
  BmnDchHit(Int_t detectorID, TVector3 pos, TVector3 dpos, Int_t refIndex, Int_t flag);
  BmnDchHit(Int_t detectorID, TVector3 pos, TVector3 dpos, Int_t refIndex);


  virtual ~BmnDchHit();

  void Print(const Option_t* opt = 0) const;

  /** Accessors **/
  Int_t GetTrackID() const { return fTrackID; } // get track ID
  Int_t GetFlag() const { return fFlag; } // get flag
  Int_t GetNofDim() const { return fNofDim; } // get number of measurements per point
  Int_t Overlap() const { return fIndex.GetSize()-1; } // 
  Int_t GetIndex(Int_t indx = 0) const { return fIndex[indx]; } // 
  UChar_t GetLayer() const { return  fDchLayer; } // 
  Int_t GetDetectorID() const { return  fDetectorID; } // 
  Double_t GetPhi() const { return fPhi; } // get rotation angle 
  Double_t GetMeas(Int_t indx = 0) const { return fMeas[indx]; } // get measurement 
  Double_t GetError(Int_t indx = 0) const { return fError[indx]; } // get measurement error
  const TArrayI* Index() const { return &fIndex; } ///< Get index array of the hit
  UChar_t GetDchId() const { return fDchId; }
  Int_t GetHitId() const { return fID; }

        Double_t	GetDrift(void) const {return fDriftLength; };
	void		SetDrift(Double_t v) { fDriftLength = v; };
	Double_t	GetWirePosition(void) const {return fWirePos; };
	void		SetWirePosition(Double_t v) { fWirePos = v; };
	Double_t	GetWireDelay(void) const {return fWireDelayLength; };
	void		SetWireDelay(Double_t v) { fWireDelayLength = v; };	
	Double_t	GetTShift(void) const {return fTS; };
	void		SetTShift(Double_t v) { fTS = v; };
        Double_t        GetDriftTime(void) const {return fTS; };
        void            SetDriftTime(Double_t v) { fTS = v; };

  /** Modifiers **/
  //void SetTrackId(Int_t trackID) { fTrackID = trackID; }
  void SetFlag(Int_t flag) { fFlag = flag; }
  void SetDchId(UChar_t id) { fDchId = id; }
  void SetNofDim(Int_t dim) { fNofDim = dim; } // set number of measurements per point
  void SetPhi(Double_t phi) { fPhi = phi; } // set rotation angle 
  void SetMeas(Double_t meas, Int_t indx = 0) { fMeas[indx] = meas; } // set measurement 
  void SetError(Double_t err, Int_t indx = 0) { fError[indx] = err; } // set measurement 
  void SetIndex(Int_t indx); ///< Add index of detector hit
  void SetHitId(Int_t idx) { fID = idx; }
  
  Bool_t IsSortable() const { return kTRUE; }
  Int_t Compare(const TObject* hit) const; ///< sort in ascending order in abs(Z)

  Bool_t IsUsed() const {
       return fUsing;
  }

  void SetUsing(Bool_t use) {
        fUsing = use;
  }

  

protected:
   
  Int_t fID; // identifier of hit in hits array
  Int_t fDetectorID;            // Detector ID
  UChar_t fDchLayer;             // Dch layer ID (0-7)
  Int_t fTrackID;               // track ID
  Int_t fFlag; 			// Flag for general purposes [TDC, event tagging...]
  Int_t fNofDim; 		// number of measurements per point
  Double32_t fPhi; 		// tube rotation angle
  Double32_t fMeas[2]; 		// measurements (coordinates)
  Double32_t fError[2]; 	// measurement errors
  TArrayI fIndex; 		//!     // array of indices of overlapped MC points
  UChar_t fDchId;                // DCH Id (1, 2)
  
  Double32_t	fDriftLength, fWirePos, fWireDelayLength, fTS;

  Bool_t fUsing;

  ClassDef(BmnDchHit,1)

};
//------------------------------------------------------------------------------------------------------------------------
#endif
//------------------------------------------------------------------------------------------------------------------------
#ifndef __BMN_DCH_HIT_ORIGINAL_H
#define __BMN_DCH_HIT_ORIGINAL_H 1

#include "FairHit.h"

#include "TArrayI.h"
//------------------------------------------------------------------------------------------------------------------------

class BmnDchHitOriginal : public FairHit {
public:

    BmnDchHitOriginal();
    BmnDchHitOriginal(Int_t detectorID, TVector3 pos, TVector3 dpos, Int_t refIndex, Int_t flag, Int_t trackIndex, UInt_t dchlayer);
    BmnDchHitOriginal(Int_t detectorID, TVector3 pos, TVector3 dpos, Int_t refIndex, Int_t flag);
    BmnDchHitOriginal(Int_t detectorID, TVector3 pos, TVector3 dpos, Int_t refIndex);
    

    virtual ~BmnDchHitOriginal();

    void Print(const Option_t* opt = 0) const;

    /** Accessors **/
    Int_t GetTrackID() const {
        return fTrackID;
    } // get track ID

    Int_t GetFlag() const {
        return fFlag;
    } // get flag

    Int_t GetNofDim() const {
        return fNofDim;
    } // get number of measurements per point

    Int_t Overlap() const {
        return fIndex.GetSize() - 1;
    } // 

    Int_t GetIndex(Int_t indx = 0) const {
        return fIndex[indx];
    } // 

    UInt_t GetLayer() const {
        return fDchLayer;
    } // 

    Int_t GetDetectorID() const {
        return fDetectorID;
    } // 

    Double_t GetPhi() const {
        return fPhi;
    } // get rotation angle 

    Double_t GetMeas(Int_t indx = 0) const {
        return fMeas[indx];
    } // get measurement 

    Double_t GetError(Int_t indx = 0) const {
        return fError[indx];
    } // get measurement error

    const TArrayI* Index() const {
        return &fIndex;
    } ///< Get index array of the hit

    Double_t GetDrift(void) const {
        return fDriftLength;
    };

    void SetDrift(Double_t v) {
        fDriftLength = v;
    };

    Double_t GetWirePosition(void) const {
        return fWirePos;
    };

    void SetWirePosition(Double_t v) {
        fWirePos = v;
    };

    Double_t GetWireDelay(void) const {
        return fWireDelayLength;
    };

    void SetWireDelay(Double_t v) {
        fWireDelayLength = v;
    };

    Double_t GetTShift(void) const {
        return fTS;
    };

    void SetTShift(Double_t v) {
        fTS = v;
    };

    /** Modifiers **/
    //void SetTrackId(Int_t trackID) { fTrackID = trackID; }

    void SetFlag(Int_t flag) {
        fFlag = flag;
    }

    void SetNofDim(Int_t dim) {
        fNofDim = dim;
    } // set number of measurements per point

    void SetPhi(Double_t phi) {
        fPhi = phi;
    } // set rotation angle 

    void SetMeas(Double_t meas, Int_t indx = 0) {
        fMeas[indx] = meas;
    } // set measurement 

    void SetError(Double_t err, Int_t indx = 0) {
        fError[indx] = err;
    } // set measurement 
    
    void SetIndex(Int_t indx); ///< Add index of detector hit

    Bool_t IsSortable() const {
        return kTRUE;
    }
    Int_t Compare(const TObject* hit) const; ///< sort in ascending order in abs(Z)

    Bool_t IsUsed() const {
        return fUsing;
    }

    void SetUsing(Bool_t use) {
        fUsing = use;
    }



protected:

    Int_t fDetectorID; // track ID
    UInt_t fDchLayer; // Dch layer ID (0-7)
    Int_t fTrackID; // track ID
    Int_t fFlag; // Flag for general purposes [TDC, event tagging...]
    Int_t fNofDim; // number of measurements per point
    Double32_t fPhi; // tube rotation angle
    Double32_t fMeas[2]; // measurements (coordinates)
    Double32_t fError[2]; // measurement errors
    TArrayI fIndex; // array of indices of overlapped MC points

    Double32_t fDriftLength, fWirePos, fWireDelayLength, fTS;

    Bool_t fUsing;

    ClassDef(BmnDchHitOriginal, 1)

};
//------------------------------------------------------------------------------------------------------------------------
#endif
// -------------------------------------------------------------------------
// -----                    BmnGlobalTrack header file                 -----
// -----                        Created by S. Merts                    -----
// -------------------------------------------------------------------------

/**  BmnGlobalTrack.h
 *@author S.Merts
 **
 ** Data class for Global BMN track. Data level RECO.
 ** It consists of local tracks in GEM and TOF and DCH hits.
 **
 **/

#ifndef BmnGlobalTrack_H_
#define BmnGlobalTrack_H_ 1

#include "BmnTrack.h"
#include "BmnFitNode.h"

class BmnGlobalTrack : public BmnTrack {

 public:

  /** Default constructor **/
  BmnGlobalTrack();


  /** Destructor **/
  virtual ~BmnGlobalTrack();


  /** Accessors **/
  Int_t GetGemTrackIndex()  const { return fGemTrack;  }
  Int_t GetSilHitIndex()    const { return fSilHit;    }
  Int_t GetTof1HitIndex()   const { return fTof1Hit;   }
  Int_t GetTof2HitIndex()   const { return fTof2Hit;   }
  Int_t GetDch1HitIndex()   const { return fDch1Hit;   }
  Int_t GetDch2HitIndex()   const { return fDch2Hit;   }
  Int_t GetDchTrackIndex()  const { return fDchTrack;  }
  Int_t GetMwpcTrackIndex() const { return fMwpcTrack; }
  
  BmnFitNode* GetFitNode(Int_t index) {return &fFitNodes[index];}
  vector<BmnFitNode>& GetFitNodes() {return fFitNodes;}

  /** Modifiers **/
  void SetGemTrackIndex(Int_t iGem)    { fGemTrack  = iGem;     }
  void SetSilHitIndex(Int_t iSilHit)   { fSilHit   = iSilHit;   }
  void SetTof1HitIndex(Int_t iTof1Hit) { fTof1Hit   = iTof1Hit; }
  void SetTof2HitIndex(Int_t iTof2Hit) { fTof2Hit   = iTof2Hit; }
  void SetDch1HitIndex(Int_t iDch1Hit) { fDch1Hit   = iDch1Hit; }
  void SetDch2HitIndex(Int_t iDch2Hit) { fDch2Hit   = iDch2Hit; }
  void SetDchTrackIndex(Int_t iDch)    { fDchTrack  = iDch;     }
  void SetMwpcTrackIndex(Int_t iMwpc)  { fMwpcTrack = iMwpc;    }
  
  void SetFitNodes(const vector<BmnFitNode>& nodes) {fFitNodes = nodes;}


  /** Output to screen **/
  void Print() const;


 private:

  /** Indices of local parts of global track **/
  Int_t fGemTrack;
  Int_t fSilHit;
  Int_t fTof1Hit;
  Int_t fTof2Hit;
  Int_t fDch1Hit;
  Int_t fDch2Hit;
  Int_t fDchTrack;
  Int_t fMwpcTrack;
  
  vector<BmnFitNode> fFitNodes; // Array of fit nodes

  ClassDef(BmnGlobalTrack, 1);

};


#endif
// BmnMwpcHit class

#ifndef BmnMwpcHit_H
#define BmnMwpcHit_H 1

#include <math.h>
#include <iostream>
#include <vector>
#include "BmnHit.h"
#include <TObject.h>

using namespace std;

// class TClonesArray;

class BmnMwpcHit : public BmnHit {
public:

    /** Default constructor **/
    BmnMwpcHit();

    /** Constructor to use **/
    BmnMwpcHit(Int_t detUID, TVector3 posHit, TVector3 posHitErr, Int_t pointIndx);

    Int_t GetXaddr() const {
        return fXaddr;
    }

    Int_t GetYaddr() const {
        return fYaddr;
    }

    ULong_t GetAddr() const {
        return fAddr;
    }

    Short_t GetMwpcId() const {
        return fMwpcId;
    }

    Int_t GetHitId() const {
        return fID;
    }

    Bool_t IsUsed() const {
        return fUsing;
    }

    void SetUsing(Bool_t use) {
        fUsing = use;
    }

    void SetXaddr(Int_t addr) {
        fXaddr = addr;
    }

    void SetYaddr(Int_t addr) {
        fYaddr = addr;
    }

    void SetAddr(ULong_t addr) {
        fAddr = addr;
    }

    void SetMwpcId(Short_t id) {
        fMwpcId = id;
    }

    void SetHitId(Int_t idx) {
        fID = idx;
    }

    /** Destructor **/
    virtual ~BmnMwpcHit();

private:

    Int_t fID; // identifier of hit in hits array
    Bool_t fUsing;
    Int_t fXaddr;
    Int_t fYaddr;
    ULong_t fAddr;
    Short_t fMwpcId; // 1, 2, 3

    ClassDef(BmnMwpcHit, 1);

};

#endif/* 
 * File:   BmnTofHit.h
 * Author: merz
 *
 * Created on October 24, 2014, 10:58 AM
 */

#ifndef BMNTOFHIT_H
#define BMNTOFHIT_H

#include <math.h>
#include <iostream>
#include "BmnHit.h"
#include <TObject.h>

using namespace std;

// class TClonesArray;

class BmnTofHit : public BmnHit {
public:

    /** Default constructor **/
    BmnTofHit();

    /** Constructor to use **/
    BmnTofHit(Int_t detUID, TVector3 posHit, TVector3 posHitErr, Int_t pointIndex);

    /** Destructor **/
    virtual ~BmnTofHit();

private:

    ClassDef(BmnTofHit, 1);

};

#endif /* BMNTOFHIT_H */

/**
 * \file BmnTrackMatchNew.h
 * \author Andrey Lebedev <andrey.lebedev@gsi.de> - original author for CBM experiment
 * \author Sergey Merts <sergey.merts@gmail.com> - modifications for BMN experiment
 * \date 2013-2014
 *
 * Base data class for storing RECO-to-MCTrack matching information.
 **/

#ifndef BMNTRACKMATCHNEW_H_
#define BMNTRACKMATCHNEW_H_

#include "BmnMatch.h"
#include <string>

using std::string;

class BmnTrackMatch : public BmnMatch
{
public:
   /**
    * \brief Default constructor.
    */
   BmnTrackMatch();

   /**
    * \brief Destructor.
    */
   virtual ~BmnTrackMatch();

   /* Accessors */
   Int_t GetNofTrueHits() const { return fNofTrueHits; }
   Int_t GetNofWrongHits() const { return fNofWrongHits; }
   Int_t GetNofHits() const { return fNofTrueHits + fNofWrongHits; }
   Double_t GetTrueOverAllHitsRatio() const {
      Double_t all = GetNofHits();
      return (all == 0) ? 0. : (fNofTrueHits / all);
   }
   Double_t GetWrongOverAllHitsRatio() const {
      Double_t all = GetNofHits();
      return (all == 0) ? 0. : (fNofWrongHits / all);
   }

   /* Modifiers */
   void SetNofTrueHits(Int_t nofTrueHits) { fNofTrueHits = nofTrueHits; }
   void SetNofWrongHits(Int_t nofWrongHits) { fNofWrongHits = nofWrongHits; }

   /**
    * \brief Return string representation of the object.
    * \return String representation of the object.
    **/
   virtual string ToString() const;

private:
   Int_t fNofTrueHits;  // Number of true hits in reconstructed track
   Int_t fNofWrongHits; // Number of wrong hits in reconstructed track

   ClassDef(BmnTrackMatch, 1);
};

#endif /* BMNTRACKMATCHNEW_H_ */
/* 
 * File:   BmnMwpcDigit.h
 * Author: Sergey Merts
 *
 * Created on October 17, 2014, 1:18 PM
 */

#ifndef BMNMWPCDIGIT_H
#define	BMNMWPCDIGIT_H

#include "TNamed.h"

using namespace std;

class BmnMwpcDigit : public TNamed {

public:
    
/** Default constructor **/
    BmnMwpcDigit();

    /** Constructor to use **/
    BmnMwpcDigit(Short_t iStation, Short_t iPlane, Int_t iWire, UInt_t iTime);

    Short_t  GetStation() const {return fStation;}
    Short_t  GetPlane() const {return fPlane;}
    Int_t  GetWireNumber() const {return fWire;}
    UInt_t  GetTime() const {return fTime;}
    Int_t  GetRefId() const {return fRef;}
    Int_t  IsUsed() const {return fUse;}

    void SetStation(Short_t _tmp) {fStation = _tmp;}
    void SetPlane(Short_t _tmp) {fPlane = _tmp;}
    void SetWireNumber(Int_t _tmp) {fWire = _tmp;}
    void SetTime(UInt_t _tmp) {fTime = _tmp;}
    void SetRefId(Int_t _tmp) {fRef = _tmp;}
    void SetUsing(Bool_t _tmp) {fUse = _tmp;}

    /** Destructor **/
    virtual ~BmnMwpcDigit();

private:

    Short_t fStation;
    Short_t fPlane;
    Int_t fWire;
    UInt_t fTime; //ns
    Int_t   fRef;
    Bool_t  fUse;

    ClassDef(BmnMwpcDigit, 2);

};

#endif	/* BMNMWPCDIGIT_H */

//------------------------------------------------------------------------------------------------------------------------
#ifndef __BMNTOF1DIGIT_H
#define	__BMNTOF1DIGIT_H 1

#include "TObject.h"
#include <iostream>
//------------------------------------------------------------------------------------------------------------------------
class BmnTof1Digit : public TObject
{
    Float_t fAmplitude;
    Float_t fTime;
    Short_t fPlane;
    Short_t fStrip;
    Short_t fSide;

public:
    BmnTof1Digit();
    BmnTof1Digit(Short_t plane, Short_t strip, Short_t side, Float_t t, Float_t a);
    BmnTof1Digit(const BmnTof1Digit*, Float_t t, Float_t a);   
    virtual ~BmnTof1Digit();

    Short_t GetPlane()     const { return fPlane;     }
    Short_t GetStrip()     const { return fStrip;     }
    Short_t GetSide()      const { return fSide;      }
    Float_t GetAmplitude() const { return fAmplitude; }
    Float_t GetTime()      const { return fTime;      }
    
    void SetPlane    (Short_t v) { fPlane = v; }
    void SetStrip    (Short_t v) { fStrip = v; }
    void SetSide     (Short_t v)  { fSide = v; }
    void SetAmplitude(Float_t v){ fAmplitude = v; }
    void SetTime     (Float_t v){ fTime = v; }

	void	print(const char* comment = nullptr, std::ostream& os = std::cout)const;


    ClassDef(BmnTof1Digit, 2);
};
//------------------------------------------------------------------------------------------------------------------------
#endif	
#ifndef BMNTOF2DIGIT_H
#define	BMNTOF2DIGIT_H 2

#include "TNamed.h"

class BmnTof2Digit : public TNamed
{
  public:
    /** Default constructor **/
    BmnTof2Digit();

    /** Main constructor **/
    BmnTof2Digit(Short_t plane, Short_t strip, Float_t t, Float_t a, Float_t d);

    /** Destructor **/
    virtual ~BmnTof2Digit();

    Short_t GetPlane()     const { return fPlane;     }
    Short_t GetStrip()     const { return fStrip;     }
    Float_t GetAmplitude() const { return fAmplitude; }
    Float_t GetTime()      const { return fTime;      }
    Float_t GetDiff()      const { return fDiff;      }

  protected:

    void SetPlane    (Short_t plane) { fPlane = plane;      }
    void SetStrip    (Short_t strip) { fStrip = strip;      }
    void SetAmplitude(Float_t signal){ fAmplitude = signal; }
    void SetTime     (Float_t signal){ fTime = signal; }
    void SetDiff     (Float_t signal){ fDiff = signal; }

  private:

    Short_t fPlane;
    Short_t fStrip;
    Float_t fAmplitude;
    Float_t fTime;
    Float_t fDiff;

    ClassDef(BmnTof2Digit, 2);
};

#endif	/* BMNTOF2DIGIT_H */
#ifndef BMNTRIGDIGIT_H
#define BMNTRIGDIGIT_H 

#include "TNamed.h"

using namespace std;

class BmnTrigDigit : public TNamed {
public:

    /** Default constructor **/
    BmnTrigDigit();

    /** Constructor to use **/
    BmnTrigDigit(Short_t iMod, Double_t iTime, Double_t iAmp, Double_t iTimestamp = -1.0);

    Short_t GetMod() const {
        return fMod;
    }

    Double_t GetTime() const {
        return fTime;
    }

    Double_t GetAmp() const {
        return fAmp;
    }
    
    UShort_t GetTimestamp() const {
        return fTimestamp;
    }

    void SetAmp(Double_t amp) {
        fAmp = amp;
    }

    void SetMod(Short_t mod) {
        fMod = mod;
    }

    void SetTime(Double_t time) {
        fTime = time;
    }
    
    void SetTimestamp(UShort_t v) {
        fTimestamp = v;
    }

    /** Destructor **/
    virtual ~BmnTrigDigit();

protected:

    Short_t fMod; //inner channel (for Barrel 40 channels, for T0, BC1, BC2, VC, FD only one)
    Double_t fTime;
    Double_t fAmp;
    Double_t fTimestamp;

    ClassDef(BmnTrigDigit, 1);

};


#endif /* BMNTRIGDIGIT_H */

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BmnTrigWaveDigit.h
 * Author: ilnur
 *
 * Created on October 16, 2017, 4:52 PM
 */

#ifndef BMNTRIGWAVEDIGIT_H
#define BMNTRIGWAVEDIGIT_H

//#include "BmnTrigDigit.h"
#include "BmnTQDCADCDigit.h"


class BmnTrigWaveDigit: public TNamed {// BmnTrigDigit /*, public BmnADCSRCDigit */ {
public:
    BmnTrigWaveDigit();
//    BmnTrigWaveDigit(/*BmnTrigDigit *trigDigit, */BmnTQDCADCDigit *adcDigit);
    BmnTrigWaveDigit(Short_t iMod, Short_t *iValue, UInt_t nVals, Double_t trigTimestamp, Double_t adcTimestamp);
    
    Short_t GetMod() const {
        return fMod;
    }
    
    UInt_t GetNSamples() const {
        return fNsmpl;
    }
   
    int GetIntegral() const {
	int spectra = 0;
	for (Int_t i = 0; i < fNsmpl; ++i)
		spectra += fValueI[i];
	return spectra;
    }    
    
    int GetPeak() const {
	int peak = -100000;
	for (Int_t i = 0; i < fNsmpl; ++i)
		if ( fValueI[i] > peak ) peak = fValueI[i];
	return peak;
    }

    Short_t *GetShortValue() const {
        return (Short_t *) fValueI;
    }

    void SetShortValue(Short_t *iValue) const {
        for (Int_t i = 0; i < fNsmpl; ++i)
            fValueI[i] = iValue[i];
    }
    
    Double_t GetAdcTimestamp() const {
        return fAdcTimestamp;
    }
    
    Double_t GetTrigTimestamp() const {
        return fTrigTimestamp;
    }
    
    virtual ~BmnTrigWaveDigit();
protected:
    Short_t fMod;
    UInt_t fNsmpl;
    Short_t* fValueI; //[fNsmpl]
    Double_t fTrigTimestamp;
    Double_t fAdcTimestamp;

    ClassDef(BmnTrigWaveDigit, 1);
};

#endif /* BMNTRIGWAVEDIGIT_H */

#ifndef BMNDCHDIGIT_H
#define	BMNDCHDIGIT_H

#include "TNamed.h"

using namespace std;

class BmnDchDigit : public TNamed {

public:
    
/** Default constructor **/
    BmnDchDigit();

    /** Constructor to use **/
    BmnDchDigit(UChar_t iPlane, Short_t iWire, Double_t iTime, Int_t refId);

    UChar_t  GetPlane()      const {return fPlane;}
    Short_t  GetWireNumber() const {return fWire;}
    Double_t  GetTime()       const {return fTime;}
    Int_t    GetRefId()      const {return fRef;}

    void SetPlane(UChar_t _tmp) {fPlane = _tmp;}
    void SetWireNumber(Short_t _tmp) {fWire = _tmp;}
    void SetTime(Double_t _tmp) {fTime = _tmp;}
    void SetRefId(Int_t _tmp) {fRef = _tmp;}

    /** Destructor **/
    virtual ~BmnDchDigit();
    
private:

    UChar_t fPlane;
    Short_t fWire;
    Double_t fTime;
    Int_t   fRef;

    ClassDef(BmnDchDigit, 2);

};

#endif	/* BMNDCHDIGIT_H */

#ifndef BMNECALDIGIT_H
#define	BMNECALDIGIT_H

#include "TNamed.h"
#include "TArrayS.h"

class BmnEcalDigit : public TNamed
{
  public:
    /** Default constructor **/
    BmnEcalDigit();

    /** Main constructor **/
    BmnEcalDigit(Char_t x,Char_t y,Char_t size,Char_t ch,Short_t samples,UShort_t *data);


    void SetX(Char_t x)        { fX = x;        }
    void SetY(Char_t y)        { fY = y;        }
    void SetSize(Char_t size)  { fSize = size;  }
    void SetChannel(Char_t ch) { fChannel = ch; }
    void SetSamples(Short_t samples);
    void SetWaveform(Short_t sample,Float_t val);

    Char_t GetX()         const  { return fX;}
    Char_t GetY()         const  { return fY;}
    Char_t GetSize()      const  { return fSize;}
    Char_t GetChannel()   const  { return fChannel;}
    Short_t GetSamples()  const  { return fSamples;}
    unsigned short *GetWaveform();


    /** Destructor **/
    virtual ~BmnEcalDigit();

private:
    Char_t  fX;
    Char_t  fY;
    Char_t  fSize;
    Char_t  fChannel;
    Short_t  fSamples;
    TArrayS fWaveform;

    ClassDef(BmnEcalDigit, 1);
};

#endif	/* BMNECALDIGIT_H */
#ifndef BMNADCDIGIT_H
#define BMNADCDIGIT_H

#include "TNamed.h"

#define ADC_SAMPLING_LIMIT 8192

using namespace std;

class BmnADCDigit : public TObject {
protected:
    UInt_t fSerial;
    UInt_t fChannel;
    UInt_t fNsmpl;
    UShort_t* fValueU; //[fNsmpl]
    Short_t* fValueI; //[fNsmpl]

public:

    /** Default constructor **/
    BmnADCDigit();

    /** Constructor to use **/
    BmnADCDigit(UInt_t iSerial, UInt_t iChannel, UInt_t n, UShort_t *iValue);
    BmnADCDigit(UInt_t iSerial, UInt_t iChannel, UInt_t n, Short_t *iValue);

    UInt_t GetSerial() const {
        return fSerial;
    }

    UInt_t GetChannel() const {
        return fChannel;
    }

    UInt_t GetNSamples() const {
        return fNsmpl;
    }

    UShort_t *GetUShortValue() const {
        return (UShort_t *) fValueU;
    }
    
    Short_t *GetShortValue() const {
        return (Short_t *) fValueI;
    }

    void SetShortValue(Short_t *iValue) const {
        for (Int_t i = 0; i < fNsmpl; ++i)
            fValueI[i] = iValue[i];
    }
    
    void SetUShortValue(UShort_t *iValue) const {
        for (Int_t i = 0; i < fNsmpl; ++i)
            fValueU[i] = iValue[i];
    }

    /** Destructor **/
    virtual ~BmnADCDigit();

    ClassDef(BmnADCDigit, 2);
};

#endif /* BMNADCDIGIT_H */

#ifndef BMNTACQUILADIGIT_H
#define BMNTACQUILADIGIT_H

#include "TObject.h"

class BmnTacquilaDigit: public TObject {
  public:
    BmnTacquilaDigit();
    BmnTacquilaDigit(UInt_t, UInt_t, UInt_t, UInt_t, UInt_t, UInt_t, UInt_t);
    virtual ~BmnTacquilaDigit();

    UInt_t GetGtb() const;
    UInt_t GetModule() const;
    UInt_t GetChannel() const;
    UInt_t GetTdc() const;
    UInt_t GetClock() const;
    UInt_t GetQdc() const;
    Float_t GetTCal() const;
    Float_t GetTDiff() const;

    void SetTCal(Float_t);
    void SetTDiff(BmnTacquilaDigit const &);

  private:
    /* Always 5 at JINR. */
    UInt_t fSam;
    /* Two Tacquila crates, so 0 or 1. */
    UInt_t fGtb;
    /* 0..9. */
    UInt_t fModule;
    /* 0..15 = normal channel, 16 = common stop. */
    UInt_t fChannel;
    /* Raw TDC. */
    UInt_t fTdc;
    /* Long range TDC clock. */
    UInt_t fClock;
    /* RAW QDC. */
    UInt_t fQdc;
    /* Calibrated TDC fine-time. */
    Float_t fTCal;
    /* tcal + clock * 25 ns - tcal(ch=17). */
    Float_t fTDiff;

    ClassDef(BmnTacquilaDigit, 1);
};

#endif /* BMNTACQUILADIGIT_H */
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BmnADCSRCDigit.h
 * Author: ilnur
 *
 * Created on October 16, 2017, 4:07 PM
 */

#ifndef BMNTQDCADCDIGIT_H
#define BMNTQDCADCDIGIT_H

#include "BmnADCDigit.h"


class BmnTQDCADCDigit : public BmnADCDigit {
public:
    BmnTQDCADCDigit();
    BmnTQDCADCDigit(UInt_t iSerial, UInt_t iChannel, UChar_t iSlot, UInt_t n, Short_t *iValue, UShort_t TrigTS, UShort_t AdcTS);
    
    UShort_t GetTrigTimestamp() const {
        return fTrigTimestamp;
    }

    UShort_t GetAdcTimestamp() const {
        return fAdcTimestamp;
    }

    UChar_t GetSlot() const {
        return fSlot;
    }
    virtual ~BmnTQDCADCDigit();
protected:
    UShort_t fTrigTimestamp;
    UShort_t fAdcTimestamp;
    UChar_t fSlot;

    ClassDef(BmnTQDCADCDigit, 1);
};

#endif /* BMNTQDCADCDIGIT_H */

#ifndef BMNTDCDIGIT_H
#define BMNTDCDIGIT_H

#include "TObject.h"

using namespace std;

class BmnTDCDigit : public TObject {
public:

    /** Default constructor **/
    BmnTDCDigit();

    /** Constructor to use **/
    BmnTDCDigit(UInt_t iSerial, UChar_t iType, UChar_t iSlot, Bool_t iLeading, UChar_t iChannel, UChar_t iHptdcId, UInt_t iValue, UShort_t iTimestamp = 0);

    UInt_t GetSerial() const {
        return fSerial;
    }

    UChar_t GetType() const {
        return fType;
    }

    UChar_t GetSlot() const {
        return fSlot;
    }

    Bool_t GetLeading() const {
        return fLeading;
    }

    UChar_t GetChannel() const {
        return fChannel;
    }

    UInt_t GetValue() const {
        return fValue;
    }

    UChar_t GetHptdcId() const {
        return fHptdcId;
    }

    UShort_t GetTimestamp() const {
        return fTimestamp;
    }

    /** Destructor **/
    virtual ~BmnTDCDigit();
private:
    UInt_t fSerial;
    UChar_t fType;
    UChar_t fSlot;
    Bool_t fLeading;
    UChar_t fChannel;
    UChar_t fHptdcId;
    UInt_t fValue;
    UShort_t fTimestamp;

    ClassDef(BmnTDCDigit, 1);
};

#endif /* BMNTDCDIGIT_H */

#ifndef BMNHRBDIGIT_H
#define BMNHRBDIGIT_H

#include "TNamed.h"

using namespace std;

class BmnHRBDigit : public TObject {

private:
    UInt_t fSerial;
    UInt_t fChannel;
    UInt_t fSample; //sample per 8 ns
    UInt_t fTimeHigh;
    UInt_t fTimeLow;
    
    
public:

    /** Default constructor **/
    BmnHRBDigit();

    /** Constructor to use **/
    BmnHRBDigit(UInt_t iSerial, UInt_t iChannel, UInt_t iSample, UInt_t iTH, UInt_t iTL);

    UInt_t GetSerial() const {
        return fSerial;
    }

    UInt_t GetChannel() const {
        return fChannel;
    }
    
    UInt_t GetSample() const {
        return fSample;
    }

    UInt_t GetTimeHigh() const {
        return fTimeHigh;
    }
    
    UInt_t GetTimeLow() const {
        return fTimeLow;
    }

    /** Destructor **/
    virtual ~BmnHRBDigit();

    ClassDef(BmnHRBDigit, 1);
};

#endif /* BMNHRBDIGIT_H */

#ifndef BMNSyncDIGIT_H
#define BMNSyncDIGIT_H

#include "TNamed.h"

using namespace std;

class BmnSyncDigit : public TObject {
public:

    /** Default constructor **/
    BmnSyncDigit();

    /** Constructor to use **/
    BmnSyncDigit(UInt_t iSerial, Long64_t iEvent, Long64_t t_sec, Long64_t t_ns);

    UInt_t GetSerial() const {
        return fSerial;
    }

    Long64_t GetEvent() const {
        return fGlobalEvent;
    }

    Long64_t GetTime_sec()const {
        return fT_sec;
    }

    Long64_t GetTime_ns() const {
        return fT_ns;
    }

    /** Destructor **/
    virtual ~BmnSyncDigit();

    //private:
    UInt_t fSerial;
    Long64_t fGlobalEvent;
    Long64_t fT_sec;
    Long64_t fT_ns;
    ClassDef(BmnSyncDigit, 1);
};

#endif /* BMNSyncDIGIT_H */

#ifndef BMNTTBDIGIT_H
#define	BMNTTBDIGIT_H

#include "TNamed.h"

using namespace std;

class BmnTTBDigit : public TObject {

public:
    
/** Default constructor **/
    BmnTTBDigit();

    /** Constructor to use **/
    BmnTTBDigit(UInt_t iSerial,UInt_t iEvent,UInt_t iSlot,ULong_t lo,ULong_t hi);

    UInt_t  GetSerial()  const {return fSerial;}
    UInt_t  GetEvent()   const {return fEvent;}
    UInt_t  GetSlot()    const {return fSlot;}
    ULong_t GetTime_lo() const {return fT_lo;}
    ULong_t GetTime_hi() const {return fT_hi;}

    /** Destructor **/
    virtual ~BmnTTBDigit();

//private:
    UInt_t  fSerial; 
    UInt_t  fEvent;
    UInt_t  fSlot;
    ULong_t fT_lo; 
    ULong_t fT_hi; 
    ClassDef(BmnTTBDigit, 1);
};

#endif	/* BMNSyncDIGIT_H */

#ifndef BMNMSCDIGIT_H
#define BMNMSCDIGIT_H

#include "TObject.h"

using namespace std;

class BmnMSCDigit : public TObject {
public:

    /** Default constructor **/
    BmnMSCDigit();

    /** Constructor to use **/
    BmnMSCDigit(UInt_t iSerial, UChar_t iType, UChar_t iSlot, UShort_t *iValue, UInt_t iTime);

    UInt_t GetSerial() const {
        return fSerial;
    }

    UChar_t GetType() const {
        return fType;
    }

    UChar_t GetSlot() const {
        return fSlot;
    }

    UShort_t *GetValue() const {
        return (UShort_t *) fValue;
    }

    UInt_t GetTime() const {
        return fTime;
    }

    /** Destructor **/
    virtual ~BmnMSCDigit();
private:
    UInt_t fSerial;
    UChar_t fType;
    UChar_t fSlot;
    UShort_t fValue[16];
    UInt_t fTime;

    ClassDef(BmnMSCDigit, 1);
};

#endif /* BMNMSCDIGIT_H */

#ifndef BMNZDCDIGIT_H
#define	BMNZDCDIGIT_H

#include "TNamed.h"
#include "TArrayS.h"

class BmnZDCDigit : public TNamed
{
  public:
    /** Default constructor **/
    BmnZDCDigit();

    /** Main constructor **/
    BmnZDCDigit(UChar_t ix,UChar_t iy,Float_t x,Float_t y,UChar_t size,UChar_t ch,Float_t amp);

    void SetIX(UChar_t ix)        { fIX = ix;        }
    void SetIY(UChar_t iy)        { fIY = iy;        }
    void SetX(Float_t x)        { fX = x;        }
    void SetY(Float_t y)        { fY = y;        }
    void SetSize(UChar_t size)  { fSize = size;  }
    void SetChannel(UChar_t ch) { fChannel = ch; }
    void SetAmp(Float_t amp) { fAmp = amp; }

    UChar_t GetIX()         const  { return fIX;}
    UChar_t GetIY()         const  { return fIY;}
    Float_t GetX()        const  { return fX;}
    Float_t GetY()        const  { return fY;}
    UChar_t GetSize()      const  { return fSize;}
    UChar_t GetChannel()   const  { return fChannel;}
    Float_t GetAmp()  const  { return fAmp;}

    /** Destructor **/
    virtual ~BmnZDCDigit();

private:
    UChar_t  fIX;
    UChar_t  fIY;
    Float_t  fX;
    Float_t  fY;
    UChar_t  fSize;
    UChar_t  fChannel;
    Float_t  fAmp;

    ClassDef(BmnZDCDigit, 3);
};

#endif	/* BMNZDCDIGIT_H */
#ifndef BMNECALDIGIT1_H
#define	BMNECALDIGIT1_H

#include "TNamed.h"
#include "TArrayS.h"

class BmnECALDigit : public TNamed
{
  public:
    /** Default constructor **/
    BmnECALDigit();

    /** Main constructor **/
    BmnECALDigit(UChar_t ix,UChar_t iy,Float_t x,Float_t y,UChar_t size,Short_t ch,Float_t amp);

    void SetIX(UChar_t ix)        { fIX = ix;        }
    void SetIY(UChar_t iy)        { fIY = iy;        }
    void SetX(Float_t x)        { fX = x;        }
    void SetY(Float_t y)        { fY = y;        }
    void SetSize(UChar_t size)  { fSize = size;  }
    void SetChannel(UChar_t ch) { fChannel = ch; }
    void SetAmp(Float_t amp) { fAmp = amp; }

    UChar_t GetIX()         const  { return fIX;}
    UChar_t GetIY()         const  { return fIY;}
    Float_t GetX()        const  { return fX;}
    Float_t GetY()        const  { return fY;}
    UChar_t GetSize()      const  { return fSize;}
    UChar_t GetChannel()   const  { return fChannel;}
    Float_t GetAmp()  const  { return fAmp;}

    /** Destructor **/
    virtual ~BmnECALDigit();

private:
    UChar_t  fIX;
    UChar_t  fIY;
    Float_t  fX;
    Float_t  fY;
    UChar_t  fSize;
    Short_t  fChannel;
    Float_t  fAmp;

    ClassDef(BmnECALDigit, 1);
};

#endif	/* BMNECALDIGIT1_H */
#ifndef BMNLANDDIGIT_H
#define	BMNLANDDIGIT_H

#include "TNamed.h"

class BmnTacquilaDigit;

class BmnLANDDigit: public TNamed
{
  public:
    BmnLANDDigit();
    BmnLANDDigit(UChar_t, UChar_t, BmnTacquilaDigit const &, BmnTacquilaDigit
	const &, Float_t, Float_t, Float_t, Float_t, Float_t);
    virtual ~BmnLANDDigit();

    Float_t GetBarPosition() const;
    Bool_t IsVertical() const;

    UChar_t GetPlane() const;
    UChar_t GetBar() const;
    UChar_t GetGlobBar() const;
    Float_t GetPosition() const;
    Float_t GetX() const;
    Float_t GetY() const;
    UShort_t GetTdc(Char_t) const;
    UShort_t GetQdc(Char_t) const;
    Float_t GetTDiff(Char_t) const;
    Float_t GetTime(Char_t = -1) const;
    Float_t GetEnergy(Char_t = -1) const;

private:
    /* 0..4 = LAND, 5 = VETO. */
    UChar_t fPlane;
    /* 0..19. */
    UChar_t fBar;
    /* GlobBar goes from 0..119 for LAND + VETO. */
    UShort_t fGlobBar;
    /* Raw TDC from electronics. */
    UShort_t fTdc0, fTdc1;
    /* Raw QDC from electronics. */
    UShort_t fQdc0, fQdc1;
    /* tcal + clock - cal(17). */
    Float_t fTDiff0, fTDiff1;
    /* Calibrated time. */
    Float_t fTime0, fTime1, fTime;
    /* Calibrated energy. */
    Float_t fEnergy0, fEnergy1, fEnergy;
    /* time1 - time0. */
    Float_t fPosition;
    /* Object space coordinates. */
    Float_t fX;
    Float_t fY;

    ClassDef(BmnLANDDigit, 1);
};

#endif /* BMNLANDDIGIT_H */
#ifndef BMNCSCDIGIT_H
#define	BMNCSCDIGIT_H

#include <iostream>
#include <vector>
#include "Rtypes.h"
#include "TNamed.h"

using namespace std;

class BmnCscDigit : public TNamed {
public:
    BmnCscDigit();
    BmnCscDigit(BmnCscDigit* digit);
    BmnCscDigit(Short_t iStation, Short_t iModule, Short_t iStripLayer, Int_t iStripNumber, Double_t iStripSignal);

    virtual ~BmnCscDigit();

    Short_t GetStation() { return fStation; }
    Short_t GetModule() { return fModule; }
    Short_t GetStripLayer() { return fStripLayer; }
    Int_t GetStripNumber() { return fStripNumber; }
    Double_t GetStripSignal() { return fStripSignal; }

    void SetStation(Short_t station) { fStation = station; }
    void SetModule(Short_t module) { fModule = module; }
    void SetStripLayer(Short_t layer) { fStripLayer = layer; }
    void SetStripNumber(Int_t num) { fStripNumber = num; }
    void SetStripSignal(Double_t signal) { fStripSignal = signal; }
    
    void SetIsGoodDigit(Bool_t tmp) { fIsGoodDigit = tmp; }
    Bool_t IsGoodDigit() { return fIsGoodDigit; }

private:
    Short_t fStation;
    Short_t fModule;
    Short_t fStripLayer;
    Int_t fStripNumber;
    Double_t fStripSignal;
    Bool_t fIsGoodDigit;

    ClassDef(BmnCscDigit,1);
};

#endif


#ifndef BMNEVENTHEADER_H
#define BMNEVENTHEADER_H

#include <map>
#include "TNamed.h"
#include "TDatime.h"
#include "BmnEnums.h"
#include "BmnTrigInfo.h"

using namespace std;

class BmnEventHeader : public TNamed {
private:

    /** Run Id */
    UInt_t fRunId;
    /** Event Id **/
    UInt_t fEventId;
    /** Event Time**/
    TDatime fEventTime;
    /** Event Type (payload = 0 or pedestal = 1)**/
    BmnEventType fType;
//    /** Trigger Type (beam = 6 or target = 1)**/
//    BmnTriggerType fTrigType;
    /** Tripped Gems (1 bit for 1 GEM module)**/
    Bool_t fTripWord;
    /** Time shifts between T0-crate and others
     * first - crate serial ID
     * second - time shift (ns)
     **/
    map<UInt_t, Long64_t> fTimeShift;
    /** T0 information for current event**/
    Double_t fStartSignalTime; //ns
    Double_t fStartSignalWidth; //ns
    BmnTrigInfo* fTrigInfo;

public:

    /** Default constructor */
    BmnEventHeader();

    /** Constructor */
    BmnEventHeader(UInt_t run, UInt_t ev, TDatime time, BmnEventType type, Bool_t trip, BmnTrigInfo* info);

    /** Constructor */
    BmnEventHeader(UInt_t run, UInt_t ev, TDatime time, BmnEventType type, Bool_t trip, BmnTrigInfo* info, map<UInt_t, Long64_t> ts);

    /** Get the run ID for this run*/
    UInt_t GetRunId() {
        return fRunId;
    }

    /** Get the type of this event*/
    BmnEventType GetType() {
        return fType;
    }

    /** Get the type of this event*/
    BmnTriggerType GetTrig() {
        if (!fTrigInfo)
            return kBMNBEAM;
        return fTrigInfo->GetTrigType();
    }

    /** Get the trip word for this event*/
    Bool_t GetTripWord() {
        return fTripWord;
    }

    /** Get the run ID for this run*/
    UInt_t GetEventId() {
        return fEventId;
    }

    /** Get the time for this event*/
    TDatime GetEventTime() {
        return fEventTime;
    }
    
    /** Get the spill statistics*/
    BmnTrigInfo* GetTrigInfo() {
        return fTrigInfo;
    }

    /** Set the run ID for this run
     * @param runid : unique run id
     */
    void SetRunId(UInt_t runid) {
        fRunId = runid;
    }

    /** Set the event ID for this run
     * @param runid : unique event id
     */
    void SetEventId(UInt_t evid) {
        fEventId = evid;
    }

    /** Set the time for this event in */
    void SetEventTime(TDatime time) {
        fEventTime = time;
    }

    /** Set the type for this event
     * @param type : type (0 or 1)
     */
    void SetEventTimeS(BmnEventType type) {
        fType = type;
    }

    void SetStartSignalInfo(Double_t time, Double_t width) {
        fStartSignalTime = time;
        fStartSignalWidth = width;
    }

    void SetTrigType(BmnTriggerType type) {
        if (!fTrigInfo)
            fTrigInfo = new BmnTrigInfo();
         fTrigInfo->SetTrigType(type);
    }

    void SetTripWord(Bool_t flag) {
        fTripWord = flag;
    }

    void SetTrigInfo(BmnTrigInfo* info) {
        if (fTrigInfo)
            delete fTrigInfo;
        fTrigInfo = info;
    }

    /**
     * Destructor
     */
    virtual ~BmnEventHeader();

    ClassDef(BmnEventHeader, 4)

};
#endif /* BMNEVENTHEADER_H */

#ifndef BMNRUNHEADER_H
#define BMNRUNHEADER_H

#include "TNamed.h"
#include "TDatime.h"
#include "BmnEnums.h"

class BmnRunHeader : public TNamed {
private:

    /** Run Id */
    UInt_t fRunId;
    /** Number of events in run */
    UInt_t fNev;
    /** Start time of run**/
    TDatime fStartTime;
    /** Finish time of run**/
    TDatime fFinishTime;

public:

    /** Default constructor */
    BmnRunHeader();

    /** Constructor */
    BmnRunHeader(UInt_t run, TDatime st, TDatime ft, UInt_t ne);

    /** Get the run ID for this run*/
    UInt_t GetRunId() {
        return fRunId;
    }
    
    UInt_t GetNEvents() {
        return fNev;
    }
        
    TDatime GetStartTime() {
        return fStartTime;
    }
        
    TDatime GetFinishTime() {
        return fFinishTime;
    }

    /** Set the run ID for this run
     * @param runid : unique run id
     */
    void SetRunId(UInt_t runid) {
        fRunId = runid;
    }
    
    void SetNEvents(UInt_t ne) {
        fNev = ne;
    }
   
    void SetStartTime(TDatime time) {
        fStartTime = time;
    }
    
    void SetFinishTime(TDatime time) {
        fFinishTime = time;
    }
    
    /**
     * Destructor
     */
    virtual ~BmnRunHeader();

    ClassDef(BmnRunHeader, 1)

};

#endif /* BMNRUNHEADER_H */

/* 
 * File:   BmnCounterTask.h
 * Author: Sergei Merts
 *
 * Created on February 17, 2017, 11:33 AM
 */

#include "TString.h"
#include "FairTask.h"
#include "BmnEventHeader.h"
#include "TClonesArray.h"

#ifndef BMNCOUNTERTASK_H
#define BMNCOUNTERTASK_H

using namespace std;
using namespace TMath;

class BmnCounter : public FairTask {
private:
    TClonesArray* fEvHead;
    Long64_t fNEvents;
    Long64_t fIEvent;
    Int_t fRunId;

public:

    BmnCounter();
    BmnCounter(Long64_t nEv);
    virtual ~BmnCounter();

    virtual InitStatus Init();
    virtual void Exec(Option_t* opt);
    virtual void Finish();

    ClassDef(BmnCounter, 1)
};

#endif /* BMNCOUNTERTASK_H */

/* 
 * File:   BmnIdentifiableTrack.h
 * Author: plot
 *
 * Created on September 28, 2017, 4:24 PM
 */

#ifndef BMNIDENTIFIABLETRACK_H
#define BMNIDENTIFIABLETRACK_H

#include "TObject.h"

class BmnIdentifiableTrack : public  TObject  {

private:
  Double_t fMassQ, fBeta, fLength, fPq, fTime;
  Double_t fTOF700Amplitude;
  Int_t fTOF700Plane, fTOF700Strip, fTOF700StripHits;

public:
  //constructor
  BmnIdentifiableTrack();
  //destructor
  virtual ~BmnIdentifiableTrack();

  //accessors
  Double_t GetMassQ()    const { return fMassQ; }
  Double_t GetBeta()     const { return fBeta; }
  Double_t GetLength()   const { return fLength; }
  Double_t GetPq()       const { return fPq; }
  Double_t GetTime()     const { return fTime; }
  Int_t GetTOF700Plane() const { return fTOF700Plane; }
  Int_t GetTOF700Strip() const { return fTOF700Strip; }
  Double_t GetTOF700Amplitude() const { return fTOF700Amplitude; }
  Int_t GetTOF700StripHits() const { return fTOF700StripHits; }

  //modifiers
  void SetMassQ(Double_t massQ)          {fMassQ = massQ;}
  void SetBeta(Double_t beta)            {fBeta = beta;}
  void SetLength(Double_t length)        {fLength = length;}
  void SetPq(Double_t pq)                {fPq = pq;}
  void SetTime(Double_t time)            {fTime = time;}
  void SetTOF700Plane(Int_t tof700Plane) {fTOF700Plane = tof700Plane;}
  void SetTOF700Strip(Int_t tof700Strip) {fTOF700Strip = tof700Strip;}
  void SetTOF700Amplitude(Double_t tof700Amplitude) {fTOF700Amplitude = tof700Amplitude;}
  void SetTOF700StripHits(Int_t tof700Strip) {fTOF700Strip = tof700Strip;}

  ClassDef(BmnIdentifiableTrack, 1);
};

#endif /* BMNIDENTIFIABLETRACK_H */

/**
 * \file CbmLitFitNode.h
 * \author Andrey Lebedev <andrey.lebedev@gsi.de>
 * \date 2008
 * \brief Data class for storage of fitted track parameters, transport matrix and chi-square on each detector station.
 */

#ifndef BMNFITNODE_H_
#define BMNFITNODE_H_

#include "FairTrackParam.h"
#include "TMatrixD.h"
#include <vector>
using namespace std;

/**
 * \class CbmLitFitNode
 * \author Andrey Lebedev <andrey.lebedev@gsi.de>
 * \date 2008
 * \brief Data class for storage of fitted track parameters, transport matrix and chi-square on each detector station.
 */
class BmnFitNode
{
public:
   /**
    * \brief Constructor.
    */
   BmnFitNode():
      fF(25, 0.),
      fPredictedParam(),
      fUpdatedParam(),
      fSmoothedParam(),
      fChiSqFiltered(0.),
      fChiSqSmoothed(0.) {
          fF_matr.ResizeTo(5, 5);
   }

   /**
    * \brief Destructor.
    */
   virtual ~BmnFitNode() {};

   /* Getters */
   const vector<Double_t>& GetF() const { return fF; }
   const TMatrixD GetF_matr() const { return fF_matr; }
   const FairTrackParam* GetPredictedParam() const { return &fPredictedParam; }
   FairTrackParam* GetUpdatedParam() { return &fUpdatedParam; }
   FairTrackParam* GetSmoothedParam() { return &fSmoothedParam; }
   Float_t GetChiSqFiltered() const { return fChiSqFiltered; }
   Float_t GetChiSqSmoothed() const { return fChiSqSmoothed; }

   /* Setters */
   void SetF(const vector<Double_t>& F) { fF.assign(F.begin(), F.end()); }
   void SetF_matr(const TMatrixD& F) { fF_matr = F; }
   void SetPredictedParam(const FairTrackParam* par) { fPredictedParam = *par;}
   void SetUpdatedParam(const FairTrackParam* par) { fUpdatedParam = *par;}
   void SetSmoothedParam(const FairTrackParam* par) { fSmoothedParam = *par;}
   void SetChiSqFiltered(Float_t chiSq) { fChiSqFiltered = chiSq; }
   void SetChiSqSmoothed(Float_t chiSq) { fChiSqSmoothed = chiSq; }

private:
   vector<Double_t> fF; // Transport matrix.
   
   TMatrixD fF_matr; // Transport matrix.

   FairTrackParam fPredictedParam; // Predicted track parameters.
   FairTrackParam fUpdatedParam; // Updated with KF track parameters.
   FairTrackParam fSmoothedParam; // Smoothed track parameters.

   Float_t fChiSqFiltered; // Contribution to chi-square of updated track parameters and hit.
   Float_t fChiSqSmoothed; // Contribution to chi-square of smoothed track parameters and hit.
};

#endif /*BMNFITNODE_H_*/
/**
 * \file BmnEnums.h
 * \author Andrey Lebedev <andrey.lebedev@gsi.de> - Original author. First version of code for CBM experiment.
 * \author Sergey Merts <Sergey.Merts@gmail.com> - Modification for BMN experiment.
 * \date 2008-2014
 * \brief Define enumerations used in tracking.
 **/

#ifndef BMNENUMS_H_
#define BMNENUMS_H_

/**
 * \enum Define type of hit on detector station.
 */
enum BmnHitType {
    kBMNSTRIPHIT = 0, /**< Strip hit. */
    kBMNPIXELHIT = 1, /**< Pixel hit. */
    kBMNMIXHIT = 2 /**< Mixed type of hits, i.e. both strip and pixel hits. **/
};

/**
 * \enum Define status code.
 */
enum BmnStatus {
    kBMNSUCCESS = 0, /**< Success. */
    kBMNERROR = 1, /**< Error. */
    kBMNTIMEOUT = 2,
    kBMNFINISH = 3
};

/**
 * \enum Define reconstructed track quality.
 */
enum BmnTrackQa {
    kBMNGOOD = 0, /**< Good track. */
    kBMNBAD = 1, /**< Bad track. */
    kBMNGOODMERGE = 2 /**< Correctly merged track. */
};

/**
 * \enum Define system identificator.
 */
enum BmnSystemId {
    kBMNGEM = 0, /**< GEM detector. */
    kBMNTOF = 2, /**< TOF detector. */
    kBMNSTS = 4 /**< STS detector. */
};

/**
 * \enum Define status of TOF hit merging
 */
enum BmnTofHitQA {
    kBMNTOFGOOD = 0, /**< merged TOF hit. */
    kBMNTOFBAD = 1, /**< not merged TOF hit. */
};

/**
 * \enum Define type of event
 */
enum BmnTriggerType {
    kBMNBEAM = 6, /**< "beam"  BC1 + BC2 + T0 + VC */
    kBMNMINBIAS = 1, /**< "min.bias" BC1 + BC2 + T0 + VC + FD */
};

/**
 * \enum Define type of event
 */
enum BmnEventType {
    kBMNPEDESTAL = 0, /**< pedestal event. */
    kBMNPAYLOAD = 1, /**< spill event. */
};

/**
 * \enum Define worker state
 */
enum BmnWorkerState {
    kBMNWAIT = 0,
    kBMNWORK = 1,
    kBMNRECON = 2,
};

/**
 * \enum Define experimental setup
 */
enum BmnSetup {
    kBMNSETUP = 0,
    kSRCSETUP = 1,
};

#endif /* BMNENUMS_H_ */
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DigiArrays.h
 * Author: ilnur
 *
 * Created on April 20, 2017, 4:12 PM
 */

#ifndef DIGIARRAYS_H
#define DIGIARRAYS_H 1

#include <vector>
#include "TTree.h"
#include "TClonesArray.h"

class DigiArrays : public TObject {
public:

    DigiArrays() {
        gem = NULL;
        csc = NULL;
        tof400 = NULL;
        tof700 = NULL;
        zdc = NULL;
        ecal = NULL;
        land = NULL;
        dch = NULL;
        mwpc = NULL;
        silicon = NULL;
        header = NULL;
        trigAr = NULL;
        trigSrcAr = NULL;
    };

    ~DigiArrays() {
    };

    void Clear() {
        if (dch) {
            dch->Delete();
            delete dch;
        }
        if (gem) {
            gem->Delete();
            delete gem;
        }
        if (csc) {
            csc->Delete();
            delete csc;
        }
        if (header) {
            header->Delete();
            delete header;
        }
        if (mwpc) {
            mwpc->Delete();
            delete mwpc;
        }
        if (silicon) {
            silicon->Delete();
            delete silicon;
        }
        if (tof400) {
            tof400->Delete();
            delete tof400;
        }
        if (tof700) {
            tof700->Delete();
            delete tof700;
        }
        if (zdc) {
            zdc->Delete();
            delete zdc;
        }
        if (ecal) {
            ecal->Delete();
            delete ecal;
        }
        if (land) {
            land->Delete();
            delete land;
        }
        if (trigAr) {
            for (TClonesArray *ar : (*trigAr))
                if (ar) {
                    ar->Clear("C");
                    delete ar;
                }
            delete trigAr;
        }
        if (trigSrcAr) {
            for (TClonesArray *ar : (*trigSrcAr))
                if (ar) {
                    ar->Clear("C");
                    delete ar;
                }
            delete trigSrcAr;
        }
    };
    TClonesArray *silicon;
    TClonesArray *gem;
    TClonesArray *csc;
    TClonesArray *tof400;
    TClonesArray *tof700;
    TClonesArray *zdc;
    TClonesArray *ecal;
    TClonesArray *land;
    TClonesArray *dch;
    TClonesArray *mwpc;
    std::vector<TClonesArray*> *trigAr;
    std::vector<TClonesArray*> *trigSrcAr;
    TClonesArray *header; //->
private:
    ClassDef(DigiArrays, 1)
};

ClassImp(DigiArrays)

#endif /* DIGIARRAYS_H */

#ifndef BMNEVENTQUALITY_H
#define BMNEVENTQUALITY_H 1

#include <iostream>
#include <TNamed.h>

using namespace std;

class BmnEventQuality : public TNamed {
public:

    BmnEventQuality() {};
    BmnEventQuality(TString str) {
        fIsGoodEvent = (str == "GOOD") ? kTRUE : (str == "BAD") ? kFALSE : throw;
    }

    virtual ~BmnEventQuality() {
    };
    
    void SetIsGoodEvent(TString str) {
        fIsGoodEvent = (str == "GOOD") ? kTRUE : (str == "BAD") ? kFALSE : throw;
    }
    
    Bool_t GetIsGoodEvent() {
        return fIsGoodEvent;
    }

private:
    Bool_t fIsGoodEvent;
    
    ClassDef(BmnEventQuality, 1);
};

#endif
#ifndef BMNGEMSTRIPHIT_H
#define	BMNGEMSTRIPHIT_H

#include "Rtypes.h"

#include "BmnHit.h"

class BmnGemStripHit : public BmnHit {
public:

    BmnGemStripHit();
    BmnGemStripHit(Int_t detID, TVector3 pos, TVector3 dpos, Int_t index);

    virtual ~BmnGemStripHit();

    void SetModule(Int_t module) {
        fModule = module;
    }

    void SetEnergyLoss(Double_t de) {
        fELoss = de;
    }
//
//    void SetType(Int_t type) {
//        fType = type;
//    }

    void SetSignalDiff(Double_t sdiff) {
        fNormSignalDiff = sdiff;
    }

    void SetClusterSizeInLowerLayer(Int_t csize) {
        fLowerLayerClusterSize = csize;
    }

    void SetClusterSizeInUpperLayer(Int_t csize) {
        fUpperLayerClusterSize = csize;
    }

    void SetStripPositionInLowerLayer(Int_t spos) {
        fLowerLayerStripPos = spos;
    }

    void SetStripPositionInUpperLayer(Int_t spos) {
        fUpperLayerStripPos = spos;
    }

    Double_t GetEnergyLoss() {
        return fELoss;
    }

    Int_t GetModule() {
        return fModule;
    }

//    Int_t GetType() {
//        return fType;
//    }

    Double_t GetSignalDiff() {
        return fNormSignalDiff;
    }

    Int_t GetClusterSizeInLowerLayer() {
        return fLowerLayerClusterSize;
    }

    Int_t GetClusterSizeInUpperLayer() {
        return fUpperLayerClusterSize;
    }

    Double_t GetStripPositionInLowerLayer() {
        return fLowerLayerStripPos;
    }

    Double_t GetStripPositionInUpperLayer() {
        return fUpperLayerStripPos;
    }

private:
    Int_t fModule;
    Double_t fELoss;
//    Int_t fType; // 0 - fake, 1 - hit, -1 - undefined
    Double_t fNormSignalDiff; //normalized signal difference between lower and upper strips (0 is min diff,..., 1 is max dif)
    Int_t fLowerLayerClusterSize; //number of strips in the lower layer (|||) for the hit
    Int_t fUpperLayerClusterSize; //number of strips in the upper layer (\\\ or ///) for the hit
    Double_t fLowerLayerStripPos; //strip position in the lower layer (|||)
    Double_t fUpperLayerStripPos; //strip position in the upper layer (\\\ or ///)

    
    ClassDef(BmnGemStripHit, 1);
};



#endif




#ifndef BMNGEMTRACK_H
#define BMNGEMTRACK_H

#include "BmnTrack.h"
#include "BmnFitNode.h"

class BmnGemTrack : public BmnTrack {
public:

    /** Default constructor **/
    BmnGemTrack();

    /** Destructor **/
    virtual ~BmnGemTrack();

    /** Accessors  **/
    Bool_t IsUsed() const {
        return fUsed;
    }

    BmnFitNode* GetFitNode(Int_t index) {
        return &fFitNodes[index];
    }

    vector<BmnFitNode>& GetFitNodes() {
        return fFitNodes;
    }

    /** Modifiers  **/
    void SetFitNodes(const vector<BmnFitNode>& nodes) {
        fFitNodes = nodes;
    }

    void SetUsing(Bool_t use) {
        fUsed = use;
    }
    
    void Print();
    
    //AM 7.08.2017
    vector<Double_t> parabolaParameters;
    vector<Double_t> lineParameters;
    double covP[3][3]; // parabola covariance matrix
    double covL[2][2]; // line covariance matrix

private:

    vector<BmnFitNode> fFitNodes; // Array of fit nodes    
    Bool_t fStoreHits;
    Bool_t fUsed; //needed to check seeds splitting    

    ClassDef(BmnGemTrack, 1);

};

#endif
// -------------------------------------------------------------------------
// -----                      CbmVertex header file                    -----
// -----                  Created 28/11/05  by V. Friese               -----
// -------------------------------------------------------------------------


/** CbmVertex.h
 *@author V.Friese <v.friese@gsi.de>
 **
 ** Data class for a vertex in CBM.
 ** Data level: RECO
 **/


#ifndef CBMVERTEX_H
#define CBMVERTEX_H 1


#include "TMatrixFSym.h"
#include "TNamed.h"
#include "TVector3.h"


class CbmVertex : public TNamed
{

 public:

  /** Default constructor  **/
  CbmVertex();


  /** Constructor with name and title **/
  CbmVertex(const char* name, const char* title);


  /** Constructor with all member variables 
   *@param name      Name of object
   *@param title     Title of object
   *@param x         x coordinate [cm]
   *@param y         y coordinate [cm]
   *@param z         z coordinate [cm]
   *@param chi2      chi square of vertex fit
   *@param ndf       Number of degrees of freedom of vertex fit
   *@param nTracks   Number of tracks used for vertex fit
   *@param covMat    Covariance Matrix (symmetric, 3x3)
   **/
  CbmVertex(const char* name, const char* title, 
	    Double_t x, Double_t y, Double_t z, Double_t chi2,
	    Int_t ndf, Int_t nTracks, const TMatrixFSym& covMat, TVector3 roughVertex);


  /** Destructor **/
  virtual ~CbmVertex();


  /** Ouput to screen **/
  void Print();


  /** Accessors **/
  Double_t GetX()    const { return fX;       };  // x position [cm]
  Double_t GetY()    const { return fY;       };  // y position [cm]
  Double_t GetZ()    const { return fZ;       };  // z posiiton [cm]
  Double_t GetRoughX()    const { return fRoughX;};  // x position [cm]
  Double_t GetRoughY()    const { return fRoughY;};  // y position [cm]
  Double_t GetRoughZ()    const { return fRoughZ;};  // z posiiton [cm]
  Double_t GetChi2() const { return fChi2;    };  // chi2
  Int_t GetNDF()     const { return fNDF;     };  // nof degrees of freedom
  Int_t GetNTracks() const { return fNTracks; };  // nof tracks used
  void Position(TVector3& pos) const { pos.SetXYZ(fX,fY,fZ); };
  void CovMatrix(TMatrixFSym& covMat) const;
  Double_t GetCovariance(Int_t i, Int_t j) const;


  /** Set the member variables
   *@param x         x coordinate [cm]
   *@param y         y coordinate [cm]
   *@param z         z coordinate [cm]
   *@param chi2      chi square of vertex fit
   *@param ndf       Number of degrees of freedom of vertex fit
   *@param nTracks   Number of tracks used for vertex fit
   *@param covMat    Covariance Matrix (symmetric, 3x3)
   **/
  void SetVertex(Double_t x, Double_t y, Double_t z, Double_t chi2,
		 Int_t ndf, Int_t nTracks, const TMatrixFSym& covMat);


  /** Reset the member variables **/
  void Reset();
		    

 private:
  /* Position of rough vertex*/
  Double32_t fRoughX, fRoughY, fRoughZ;  

  /** Position coordinates  [cm] **/
  Double32_t fX, fY, fZ;

  /** Chi2 of vertex fit **/
  Double32_t fChi2;

  /** Number of degrees of freedom of vertex fit **/
  Int_t fNDF;

  /** Number of tracks used for the vertex fit **/
  Int_t fNTracks;

  /** Covariance matrix for x, y, and z stored in an array. The
   ** sequence is a[0,0], a[0,1], a[0,2], a[1,1], a[1,2], a[2,2]
   **/
  Double32_t fCovMatrix[6];


  ClassDef(CbmVertex,1);

};


#endif
// -------------------------------------------------------------------------
// -----                   CbmStsTrackFinder header file               -----
// -----                  Created 02/02/05  by V. Friese               -----
// -------------------------------------------------------------------------


/** CbmStsTrackFinder
 *@author V.Friese <v.friese@gsi.de>
 **
 ** Abstract base class for concrete STS track finding algorithm.
 ** Each derived class must implement the method DoFind. This has
 ** to operate on the two TClonesArrays of pixel and strip hits
 ** and to fill the CbmStsTrackArray.
 **/

#ifndef CBMSTSTRACKFINDER
#define CBMSTSTRACKFINDER 1


#include "TObject.h"
#include "TNamed.h"

class TClonesArray;
class CbmStsDigiScheme;
class FairField;


class CbmStsTrackFinder : public TNamed
{

 public:

  /** Default constructor **/
  CbmStsTrackFinder(); 


  /** Destructor **/
  virtual ~CbmStsTrackFinder() { };


  /** Virtual method Init. If needed, to be implemented in the
   ** concrete class. Else no action.
   **/
  virtual void Init() { };


  /** Abstract method DoFind. To be implemented in the concrete class.
   ** Task: Read the hit array and fill the track array,
   ** pointers to which are private members and set by the task
   **
   *@value Number of tracks created
   **/
  virtual Int_t DoFind() = 0;

  
  /** Virtual method Finish. If needed, to be implemented in the concrete
   ** class. Executed at the end of the run.
   **/
  virtual void Finish() { };


  /** Modifiers **/
  void SetDigiScheme(CbmStsDigiScheme* scheme) { fDigiScheme = scheme; }
  void SetField(FairField* field)               { fField = field; }
  void SetMvdHitArray(TClonesArray* hits)      { fMvdHits = hits; }
  void SetStsHitArray(TClonesArray* hits)      { fStsHits = hits; }
  void SetTrackArray(TClonesArray* tracks)     { fTracks = tracks; }
  void SetVerbose(Int_t verbose)               { fVerbose = verbose; };


 protected:

  CbmStsDigiScheme* fDigiScheme;  // STS digitisation scheme
  FairField*         fField;       // Magnetic field
  TClonesArray*     fMvdHits;     // MvdHit array
  TClonesArray*     fStsHits;     // StsHit array
  TClonesArray*     fTracks;      // StsTrack array
  Int_t             fVerbose;     // Verbosity level

 private:

  CbmStsTrackFinder(const CbmStsTrackFinder&);
  CbmStsTrackFinder& operator=(const CbmStsTrackFinder&);

  ClassDef(CbmStsTrackFinder,1);

};

#endif
// -------------------------------------------------------------------------
// -----                   CbmStsTrackFitter header file               -----
// -----                  Created 18/02/05  by V. Friese               -----
// -------------------------------------------------------------------------


/** CbmStsTrackFitter
 *@author V.Friese <v.friese@gsi.de>
 **
 ** Abstract base class for concrete STS track fitting algorithm.
 ** Each derived class must implement the method DoFit. This has
 ** to operate on an object of type CbmStsTrack and fill the
 ** parameters fPidHypo, fParamFirst, fParamLast, fFlag and fChi2.
 **/

#ifndef CBMSTSTRACKFITTER
#define CBMSTSTRACKFITTER 1

#include "FairTrackParam.h"

#include "TObject.h"

class CbmStsTrack;


class CbmStsTrackFitter : public TObject
{

 public:

  /** Default constructor **/
  CbmStsTrackFitter() { };


  /** Destructor **/
  virtual ~CbmStsTrackFitter() { };


  /** Virtual method Init. If needed, to be implemented in the
   ** concrete class. Else no action.
   **/
  virtual void Init() { };


  /** Abstract method DoFit. To be implemented in the concrete class.
   ** Task: Make a fit to the hits attached to the track by the track
   ** finder. Fill the track parameter member variables.
   **
   *@param pTrack      Pointer to CbmStsTrack
   *@param pidHypo     PID hypothesis for the fit. Default is pion.
   **/
  virtual Int_t DoFit(CbmStsTrack* pTrack, Int_t pidHypo = 211) = 0;


  /** Abstract method Extrapolate. Gives track parameters at a given z
   ** position.
   **
   *@param track  Pointer to StsTrack
   *@param z      z position
   *@param param  (return value) StsTrackParam at z
   **/
  virtual void Extrapolate( CbmStsTrack* track, Double_t z, 
			    FairTrackParam *param ) = 0;

 private:
 
  CbmStsTrackFitter(const CbmStsTrackFitter&);
      

  ClassDef(CbmStsTrackFitter,1);

};

#endif
// ------------------------------------------------------------------
// -----                      CbmTofMerger                      -----
// -----              Created 24-01-2006 by D.Kresan            -----
// ------------------------------------------------------------------
#ifndef _CBMTOFMERGER_
#define _CBMTOFMERGER_

#include "TObject.h"

class TClonesArray;


class CbmTofMerger : public TObject {

protected:
    Int_t fVerbose;    // Verbosity level

public:
 CbmTofMerger() : TObject(), fVerbose(0) {};
 
   virtual ~CbmTofMerger() {};
    
    virtual void Init() {};
    virtual Int_t DoMerge(TClonesArray* glbTracks,
			  TClonesArray* tofHits) = 0;

    inline void SetVerbose(Int_t verbose) {  fVerbose = verbose; }

    ClassDef(CbmTofMerger, 1);
};


#endif


// -------------------------------------------------------------------------
// -----                     CbmTrackMerger header file                -----
// -----                  Created 01/12/05  by V. Friese               -----
// -------------------------------------------------------------------------


/** CbmTrackMerger
 *@author v.friese@gsi.de
 **
 ** Abstract base class for merging of local tracks in STS and TRD to
 ** a global track. Derived classes must implement the method DoMerge.
 **/


#ifndef CBMTRACKMERGER_H
#define CBMTRACKMERGER_H 1


#include "TObject.h"


class TClonesArray;


class CbmTrackMerger : public TObject 
{

 public:

  /** Default constructor **/
 CbmTrackMerger() : TObject(), fVerbose(0) { };


  /** Destructor **/
  virtual ~CbmTrackMerger() { };


  /** Virtual method Init. If needed, to be implemented in the
   ** concrete class. Else no action.
   **/
  virtual void Init() { };


  /** Abstract method DoMerge. To be implemented in the derived classes.
   ** Task: Take arrays of StsTracks and TrdTracks and merge them to 
   ** GlobalTracks. Fill the TClonesArray with CbmGlobalTracks.
   **
   *@param stsTracks   Array of CbmStsTrack (input)
   *@param trdTracks   Array of CbmTrdTrack (input)
   *@param glbTracks   Array of CbmGlobalTracks (output)
   **
   *@value Number of merged STS+TRD tracks
   **/
  virtual Int_t DoMerge(TClonesArray* stsTracks,
			TClonesArray* trdTracks,
			TClonesArray* glbTracks) = 0;


  /** Set verbosity 
   *@param verbose   Verbosity level
   **/
  void SetVerbose(Int_t verbose) { fVerbose = verbose; };



 protected:

  Int_t fVerbose;         // Verbosity level


  ClassDef(CbmTrackMerger,1);

};

#endif

// -------------------------------------------------------------------------
// -----                CbmPrimaryVertexFinder header file             -----
// -----                  Created 28/11/05  by V. Friese               -----
// -------------------------------------------------------------------------


/** CbmPrimaryVertexFinder
 *@author V.Friese ,v.friese@gsi.de>
 **
 ** Abstract base class for primary vertex finder algorithms. Each derived
 ** class must implement the method FindPrimaryVertex. The input is the
 ** array of CbmStsTracks (later to be replaced by CbmGlobalTracks), the
 ** output is one object of type CbmVertex.
 **/


#ifndef CBMPRIMARYVERTEXFINDER_H
#define CBMPRIMARYVERTEXFINDER_H 1


#include "TObject.h"


class TClonesArray;
class CbmVertex;


class CbmPrimaryVertexFinder : public TObject
{

 public:

  /** Default constructor **/
  CbmPrimaryVertexFinder() { };


  /** Destructor **/
  virtual ~CbmPrimaryVertexFinder() { };


  /** Initialisation (virtual). If needed, to be implemented in the
   ** derived class. Else no action.
   **/
  virtual void Init() { };


  /** Execution of PV finding (abstract). To be implemented in 
   ** the derived class. Task: Take the track array and find the vertex.
   ** Set the vertex parameters of the object vertex with its SetVertex
   ** method.
   *@param tracks   TClonesArray of CbmStsTracks
   *@param vertex   Primary vertex (output)
   **/
  virtual Int_t FindPrimaryVertex(TClonesArray* tracks, 
				  CbmVertex* vertex) = 0;


  ClassDef(CbmPrimaryVertexFinder,1);

};

#endif
// -------------------------------------------------------------------------
// -----                 CbmFindPrimaryVertex header file              -----
// -----                  Created 28/11/05  by V. Friese               -----
// -------------------------------------------------------------------------


/** CbmFindPrimaryVertex
 *@author V.Friese <v.friese@gsi.de>
 **
 ** Task class for PV finding.
 ** Input: TClonesArray of CbmStsTracks (later CbmGlobalTracks)
 ** Output: CbmVertex
 **
 ** Uses as vertex finding algorithm classes derived from 
 ** CbmPrimaryVertexFinder.
 **/


#ifndef CBMFINDPRIMARYVERTEX_H
#define CBMFINDPRIMARYVERTEX_H 1


#include "FairTask.h"

class TClonesArray;
class CbmPrimaryVertexFinder;
class CbmVertex;



class CbmFindPrimaryVertex : public FairTask
{

 public:

  /** Default constructor **/
  CbmFindPrimaryVertex();


  /** Standard constructor
   *@param pvFinder  Pointer to concrete vertex finder
   **/
  CbmFindPrimaryVertex(CbmPrimaryVertexFinder* pvFinder);
  

  /** Constructor with name and title
   **
   *@param name      Name of task
   *@param title     Title of task
   *@param pvFinder  Pointer to vertex finder concrete object
   **/
  CbmFindPrimaryVertex(const char* name, const char* title,
		       CbmPrimaryVertexFinder* pvFinder);


  /** Destructor **/
  virtual ~CbmFindPrimaryVertex();


  /** Initialisation **/
  virtual InitStatus Init();


  /** Task execution **/
  virtual void Exec(Option_t* opt);


  /** Finish **/
  virtual void Finish();


 private:

  CbmPrimaryVertexFinder* fFinder;
  TClonesArray*           fTracks;
  CbmVertex*              fPrimVert;


  CbmFindPrimaryVertex(const CbmFindPrimaryVertex&);
  CbmFindPrimaryVertex& operator=(const CbmFindPrimaryVertex&);

  ClassDef(CbmFindPrimaryVertex,1);

};

#endif


#ifndef BMNMATH_H_
#define BMNMATH_H_

#include "FairTrackParam.h"
#include "BmnGemStripHit.h"
#include "BmnGemTrack.h"
#include "BmnGemStripHit.h"
#include "TLorentzVector.h"
#include "TF1.h"

class CbmHit;
class CbmStripHit;
class CbmPixelHit;
class CbmGlobalTrack;

#define ANSI_COLOR_RED   "\x1b[91m"
#define ANSI_COLOR_BLUE  "\x1b[94m"
#define ANSI_COLOR_RESET "\x1b[0m"
#define ANSI_COLOR_YELLOW_BG "\x1b[33;7m"
#define ANSI_COLOR_BLUE_BG "\x1b[94;7m"

namespace lit
{

/* Calculates chi square
 * @param par Pointer to the updated or smoothed track parameter
 * @param hit Pointer to the hit
 * @return chi square contribution for this hit */
Float_t ChiSq(const FairTrackParam* par, const CbmHit* hit);

/* Calculates chi square for strip hits
 * @param par Pointer to the updated or smoothed track parameter
 * @param hit Pointer to the strip hit
 * @return chi square contribution for this strip hit */
Float_t ChiSq(const FairTrackParam* par, const CbmStripHit* hit);

Float_t ChiSq(const FairTrackParam* par, const BmnGemStripHit* hit);

Int_t NDF(const BmnGemTrack* track);

}

Float_t ChiSq(const TVector3* par, const BmnGemTrack* tr, const TClonesArray* arr, const TString type);
TVector3 SpiralFit(BmnGemTrack* tr, const TClonesArray* arr);
TLorentzVector SpiralParabolicFit(BmnGemTrack* tr, const TClonesArray* arr);
TVector3 SpiralFitByTwoPoints(const BmnGemTrack* tr, const TClonesArray* arr);
Bool_t IsParCorrect(const FairTrackParam* par, const Bool_t isField);
Float_t NumericalRootFinder(TF1 f, Float_t left, Float_t right);
TVector3 LineFit(BmnTrack* track, const TClonesArray* arr, TString type);
void LineFit(Double_t&, Double_t&, BmnGemTrack*, TClonesArray*, Int_t, Int_t);
TVector3 CircleFit(BmnGemTrack* track, const TClonesArray* arr, Double_t &chi2);
TVector3 CircleBy3Hit(BmnGemTrack* track, const TClonesArray* arr);
TVector3 CircleBy3Hit(BmnGemTrack* track, const BmnGemStripHit* h0, const BmnGemStripHit* h1, const BmnGemStripHit* h2);
TVector3 Pol2By3Hit(BmnGemTrack* track, const TClonesArray* arr);
void DrawHits(BmnGemTrack* track, const TClonesArray* arr);
Float_t Sqr(Float_t x);
Float_t NewtonSolver(Float_t A0, Float_t A1, Float_t A2, Float_t A22);
Float_t Dist(Float_t x1, Float_t y1, Float_t x2, Float_t y2);

void fit_seg(Double_t*, Double_t*, Double_t*, Double_t*, Int_t, Int_t);
void Pol2Fit(BmnGemTrack*, const TClonesArray*, Double_t&, Double_t&, Double_t&, Int_t);

void DrawBar(UInt_t iEv, UInt_t nEv);
void DrawBar(Long64_t iEv, Long64_t nEv);

// Some supplementary functions to calculate Tukey weights
vector <Double_t> dist(vector <Double_t>, Double_t);
vector <Double_t> W(vector <Double_t>, Double_t);
Double_t Sigma(vector <Double_t>, vector <Double_t>);
Double_t Mu(vector <Double_t>, vector <Double_t>);

#endif /*BMNMATH_H_*/
#ifndef BMNMATRIXMATH_H_
#define BMNMATRIXMATH_H_

#include <vector>
#include "Rtypes.h"
using namespace std;
//Matrix operations

/* 5x5 symmetric matrix inverse */
Bool_t InvSym15(vector<Double_t>& a);

/* Multiplication of two 5x5 matrices */
Bool_t Mult25(const vector<Double_t>& a, const vector<Double_t>& b, vector<Double_t>& c);

/* Multiplication of 5x5 matrix and 5x1 vector */
Bool_t Mult25On5(const vector<Double_t>& a, const vector<Double_t>& b, vector<Double_t>& c);

/* Multiplication of 5x5 matrix and 5x1 vector */
Bool_t Mult15On5(const vector<Double_t>& a, const vector<Double_t>& b, vector<Double_t>& c);

/* Transpose of 5x5 matrix */
Bool_t Transpose25(vector<Double_t>& a);

/* Subtraction of two matrices*/
Bool_t Subtract(const vector<Double_t>& a, const vector<Double_t>& b, vector<Double_t>& c);

/* Addition of two matrices*/
Bool_t Add(const vector<Double_t>& a, const vector<Double_t>& b, vector<Double_t>& c);

/* a*b*a^T */
Bool_t Similarity(const vector<Double_t>& a, const vector<Double_t>& b, vector<Double_t>& c);

/* Multiplication of two 5x5 matrices */
Bool_t Mult15On25(const vector<Double_t>& a, const vector<Double_t>& b, vector<Double_t>& c);

/* Multiplication of two 5x5 matrices */
Bool_t Mult25On15(const vector<Double_t>& a, const vector<Double_t>& b, vector<Double_t>& c);

#endif

#include "TH1.h"

#ifndef FITWLSQ_H
#define FITWLSQ_H 1

//
//Advanced refit for tracks by Andrey Moshkin
//
class FitWLSQ {
	Int_t NPoints;
	Int_t NParams;
public:
	FitWLSQ(Double_t *xx, Double_t cSigma1 = 0.01, Double_t cSigma2 = 0.07, Double_t cP1 = 0.9,
			Int_t nNPoints = 6, Int_t nNParams = 2, Bool_t RBF = kTRUE, Bool_t LHf = kTRUE, Int_t RBfn = 7); // constructor
	~FitWLSQ(); // destructor
	Double_t param[3]; // fit parameters
	Double_t cov[3][3]; // covariance matrix
	Int_t numItera;
	Double_t *wrb;  // robust weights
	Bool_t Status;

	Bool_t Fit(Double_t *y);

	Double_t WLSQRms(Double_t *pdY);

private:
	Double_t det3(Double_t a[3][3]);

	Double_t alg_add(Double_t a[3][3], Int_t row, Int_t column);

	void cov_matrix(Double_t a[3][3]);

	Double_t f_lh(Double_t *yy, Double_t *zz, Double_t *w, Double_t *par);

	Bool_t Initial(Double_t *trk);

	void CheckMatrix(Double_t *pdA, Double_t *pdB, char *sz);

	Bool_t SymMatrix(Double_t *pdA, Double_t *pdB);

	Bool_t WLSQFit(Double_t *pdY);

	Double_t WLSQGet(Double_t dX);

	Bool_t par_check(Double_t *par, Double_t *par1);

	void RB(Double_t *yy, Int_t);

	void RBN(Double_t *yy, Int_t);

	void RBM(Double_t *yy, Int_t);

	void RB_OPT(Double_t *yy, Int_t);

	void CovarianceMatrixPrint(void);

	Double_t *sigmaF;  // weights
	Double_t *w;  // weights
	Double_t *x;  // x coordinats
	Double_t sigma_k; // robust sigma
	Double_t Sigma1;
	Double_t Sigma2;
	Double_t P1;
	Double_t resolution; // resolution
	Bool_t RB_FIT;
	Bool_t LH_INI;
	Int_t RB_TYPE;
};

#endif
//
//  BmnFileSource.h
//  BmnRoot
//
//  Created by Mohammad Al-Turany on 08/02/14. Modified by Konstantin Gertsenberger 26.05.2016
//

#ifndef BMNFILESOURCE_H
#define BMNFILESOURCE_H

#include "FairSource.h"
#include "FairEventHeader.h"
#include "FairFileHeader.h"
#include "FairRuntimeDb.h"

#include "TFile.h"
#include "TString.h"
#include "TChain.h"
#include "TFolder.h"
#include "TF1.h"

#include <list>
using namespace std;

class BmnFileSource : public FairSource
{
public:
    BmnFileSource(TFile* f, const char* Title = "BmnRootFile", UInt_t identifier = 0);
    BmnFileSource(const TString* RootFileName, const char* Title = "BmnRootFile", UInt_t identifier = 0);
    BmnFileSource(const TString RootFileName, const char* Title = "BmnRootFile", UInt_t identifier = 0);
    virtual ~BmnFileSource();
    
    Bool_t Init();
    Int_t ReadEvent(UInt_t i=0);
    void Close();
    void Reset();

    virtual Source_Type GetSourceType() {return kONLINE;} //kBMNFILE
    virtual void SetParUnpackers() {}
    virtual Bool_t InitUnpackers() {return kTRUE;}
    virtual Bool_t ReInitUnpackers() {return kTRUE;}

    /**Check the maximum event number we can run to*/
    virtual Int_t CheckMaxEventNo(Int_t EvtEnd = 0);
    /**Read the tree entry on one branch**/
    virtual void ReadBranchEvent(const char* BrName);
    /**Read specific tree entry on one branch**/
    virtual void ReadBranchEvent(const char* BrName, Int_t Entry);
    virtual void FillEventHeader(FairEventHeader* feh);

    const TFile* GetRootFile() {return fRootFile;}
    /** Add a friend file (input) by name)*/
    void AddFriend(TString FileName);
    /**Add ROOT file to input, the file will be chained to already added files*/
    void AddFile(TString FileName);
    void AddFriendsToChain();
    void PrintFriendList();
    Bool_t CompareBranchList(TFile* fileHandle, TString inputLevel);
    void CheckFriendChains();
    void CreateNewFriendChain(TString inputFile, TString inputLevel);
    TTree* GetInTree() {return fInChain->GetTree();}
    TChain* GetInChain() {return fInChain;}
    TFile* GetInFile() {return fRootFile;}
    void CloseInFile() {if (fRootFile) fRootFile->Close();}
    /**Set the input tree when running on PROOF worker*/
    void SetInTree(TTree* tempTree);
    TObjArray* GetListOfFolders() {return fListFolder;}
    TFolder* GetBranchDescriptionFolder() {return fCbmroot;}
    UInt_t GetEntries() {return fNoOfEntries; }

    void SetInputFile(TString name);

    /** Set the repetition time of the beam when it can interact (beamTime) and when no interaction happen (gapTime). The total repetition time is beamTime + gapTime */
    void SetBeamTime(Double_t beamTime, Double_t gapTime);
    /** Set the min and max limit for event time in ns */
    void SetEventTimeInterval(Double_t min, Double_t max);
    /** Set the mean time for the event in ns */
    void SetEventMeanTime(Double_t mean);
    void SetEventTime();
    Double_t GetDeltaEventTime();
    void SetFileHeader(FairFileHeader* f) {fFileHeader = f;}
    Double_t GetEventTime();

    virtual Bool_t ActivateObject(TObject** obj, const char* BrName);

    /**Set the status of the EvtHeader
     *@param Status:  True: The header was creatged in this session and has to be filled
              FALSE: We use an existing header from previous data level
     */
    void SetEvtHeaderNew(Bool_t Status) {fEvtHeaderIsNew = Status;}
    Bool_t IsEvtHeaderNew() {return fEvtHeaderIsNew;}

private:
    /** Title of input source, could be input, background or signal*/
    TString fInputTitle;
    /**ROOT file*/
    TFile* fRootFile;
    /** Current Entry number */
    Int_t fCurrentEntryNr;  //!
    /** List of all files added with AddFriend */
    list<TString> fFriendFileList; //!
    list<TString> fInputChainList;//!
    map<TString, TChain*> fFriendTypeList;//!
    map<TString, list<TString>* > fCheckInputBranches; //!
    list<TString> fInputLevel; //!
    map<TString, std::multimap<TString, TArrayI> > fRunIdInfoAll; //!
    /**Input Chain */
    TChain* fInChain;
    /**Input Tree */
    TTree* fInTree;
    /** list of folders from all input (and friends) files*/
    TObjArray* fListFolder; //!
    /** RuntimeDb*/
    FairRuntimeDb* fRtdb;
    /**folder structure of output*/
    TFolder* fCbmout;
    /**folder structure of input*/
    TFolder* fCbmroot;
    /***/
    UInt_t fSourceIdentifier;
    /**No of Entries in this source*/
    UInt_t fNoOfEntries;
    /**Initialization flag, true if initialized*/
    Bool_t IsInitialized;
    
    BmnFileSource(const BmnFileSource&);
    BmnFileSource operator=(const BmnFileSource&);

    /**Event Header*/
    FairEventHeader* fEvtHeader; //!

    /**File Header*/
    FairFileHeader* fFileHeader; //!

    /**This flag is true if the event header was created in this session
    * otherwise it is false which means the header was created in a previous data
    * level and used here (e.g. in the digi)
    */
    Bool_t fEvtHeaderIsNew; //!

    /** for internal use, to return the same event time for the same entry*/
    UInt_t fCurrentEntryNo; //!
    /** for internal use, to return the same event time for the same entry*/
    UInt_t fTimeforEntryNo; //!

    /** min time for one event (ns) */
    Double_t fEventTimeMin;  //!
    /** max time for one Event (ns) */
    Double_t fEventTimeMax;  //!
    /** Time of event since th start (ns) */
    Double_t fEventTime;     //!
    /** Time of particles in beam (ns) */
    Double_t fBeamTime; //!
    /** Time without particles in beam (gap) (ns) */
    Double_t fGapTime; //!
    /** EventMean time used (P(t)=1/fEventMeanTime*Exp(-t/fEventMeanTime) */
    Double_t fEventMeanTime; //!
    /** used to generate random numbers for event time; */
    TF1* fTimeProb;      //!
    /** True if the file layout should be checked when adding files to a chain.
     *  Default value is true.
     */
    Bool_t fCheckFileLayout; //!

    ClassDef(BmnFileSource, 0)
};

#endif /* defined(BMNFILESOURCE_H) */
/** BmnTGeoNavigator.h
 * \author Andrey Lebedev <andrey.lebedev@gsi.de> - Original author. First version of code for CBM experiment.
 * \author Sergey Merts <Sergey.Merts@gmail.com> - Modification for BMN experiment.
 * \date 2008-2014
 **
 ** The class performs geometry navigation, which is based on the ROOT TGeoManager.
 **/

#ifndef BMNGEONAVIGATOR_H_
#define BMNGEONAVIGATOR_H_

#include "TObject.h"
#include "BmnMaterialInfo.h"
#include "FairTrackParam.h"
#include "BmnEnums.h"

#include <vector>

using namespace std;

class BmnGeoNavigator{
public:
    /* Constructor */
    BmnGeoNavigator();

    /* Destructor */
    virtual ~BmnGeoNavigator();

    BmnStatus FindIntersections(const FairTrackParam* par, Float_t zOut, vector<BmnMaterialInfo>& inter);

private:
    /* Sets the current position and direction for the TGeoManager
     * @param par Track parameter from which the current position and direction will be initialized.
     */
    void InitTrack(const FairTrackParam* par, Bool_t downstream) const;

    /* Make a step: if step=0 than to the next crossing boundary, else
     * make a step of length step.
     * @param step Step size [cm].
     * @return Crossed material information
     */
    BmnMaterialInfo MakeStep(Float_t step = 0.) const;

    /* Calculates length between current position and the point on the plane at zOut.
     * @param zOut Output Z position [cm]
     * @return Length.
     */
    Float_t CalcLength(Float_t zOut) const;
};

#endif /*BMNGEONAVIGATOR_H_*/
/*
 * Base class to store BMN tracks
 * Author: Sergei Merts
 */

#ifndef BMNTRACK_H
#define BMNTRACK_H

#include "FairTrackParam.h"
#include "TArrayI.h"
#include "TObject.h"
#include "FairHit.h"
#include <TClonesArray.h>
#include <map>

using namespace std;

class BmnTrack : public TObject {
public:

    /** Default constructor **/
    BmnTrack();

    /** Destructor **/
    virtual ~BmnTrack();

    /** Associate a FairHit to the track **/
    void AddHit(Int_t hitIndex, FairHit* Hit);

    /** Public method Print
     ** Output to screen 
     **/
    void Print();

    /** Public method SortHits
     ** Sorts the hits in downstream direction
     ** and writes the hit indices into the member fHits
     **/
    void SortHits();

    /** Accessors  **/

    Int_t GetNHits() const {
        return fNhits;
    }

    Int_t GetHitIndex(Int_t iHit) const {
        return fHits.At(iHit);
    }

    Int_t GetFlag() const {
        return fFlag;
    }

    Float_t GetChi2() const {
        return fChi2;
    }

    Int_t GetNDF() const {
        return fNDF;
    }

    Float_t GetB() const {
        return fB;
    }

    Float_t GetLength() const {
        return fLength;
    }

    FairTrackParam* GetParamFirst() {
        return &fParamFirst;
    }

    FairTrackParam* GetParamLast() {
        return &fParamLast;
    }
    
    Double_t GetP() {
        return 1.0 / fParamFirst.GetQp();
    }

    /** Modifiers  **/
    void SetParamFirst(FairTrackParam& par) {
        fParamFirst = par;
    }

    void SetParamLast(FairTrackParam& par) {
        fParamLast = par;
    }

    void SetFlag(Int_t flag) {
        fFlag = flag;
    }

    void SetChi2(Double_t chi2) {
        fChi2 = chi2;
    }

    void SetNDF(Int_t ndf) {
        fNDF = ndf;
    }
    
    void SetNHits(Int_t n) {
        fNhits = n;
    }
    
    void SetB(Double_t b) {
        fB = b;
    }

    void SetLength(Double_t length) {
        fLength = length;
    }
    
    Bool_t IsUsed() {
        return fUsing;
    }
    
    void SetUsing(Bool_t flag) {
        fUsing = flag;
    }

private:

    /** Array containing the indices of the STS hits attached to the track **/
    TArrayI fHits;

    /** Track parameters at first and last fitted hit **/
    FairTrackParam fParamFirst;
    FairTrackParam fParamLast;

    /** Quality flag **/
    Int_t fFlag;

    /** Chi square and NDF of track fit **/
    Float_t fChi2;
    Int_t fNDF;

    /** Impact parameter of track at target z, in units of its error **/
    Float_t fB;

    /** Track length **/
    Float_t fLength;
    
    /** Number of hits on track **/
    Int_t fNhits;

    /** Maps from hit z position to hit index. STL map is used because it
     ** is automatically sorted. Temporary only; not for storage.
     ** The Hit index arrays will be filled by the method SortHits.
     **/
    map<Float_t, Int_t> fHitMap; //!
    
    Bool_t fUsing;

    ClassDef(BmnTrack, 2);

};

#endif /* BMNTRACK_H */

/* 
 * File:   BmnHit.h
 * Author: Sergey Merts
 *
 * Created on October 28, 2014, 11:26 AM
 */

#ifndef BMNHIT_H
#define	BMNHIT_H

#include "FairHit.h"
#include <TObject.h>
#include "CbmDetectorList.h"

using namespace std;

// class TClonesArray;

class BmnHit : public FairHit {
public:

    /** Default constructor **/
    BmnHit();

    /** Constructor to use **/
    BmnHit(Int_t detUID, TVector3 posHit, TVector3 posHitErr, Int_t pointIndx);

    Int_t GetXaddr() const {
        return fXaddr;
    }

    Int_t GetYaddr() const {
        return fYaddr;
    }

    Long_t GetAddr() const {
        return fAddr;
    }

    Bool_t IsUsed() const {
        return fUsing;
    }

    Bool_t GetFlag() const {
        return fFlag;
    }

    Int_t GetIndex() const {
        return fIndex;
    }

    DetectorId GetDetId() const {
        return fDetId;
    }

    Short_t GetStation() const {
        return fStation;
    }

    void SetFlag(Bool_t fl) {
        fFlag = fl;
    }

    void SetUsing(Bool_t use) {
        fUsing = use;
    }

    void SetXaddr(Int_t addr) {
        fXaddr = addr;
    }

    void SetYaddr(Int_t addr) {
        fYaddr = addr;
    }

    void SetAddr(Long_t addr) {
        fAddr = addr;
    }

    void SetIndex(Int_t id) {
        fIndex = id;
    }

    void SetLength(Double_t len) {
        fLength = len;
    }

    void SetDetId(DetectorId det) {
        fDetId = det;
    }

    void SetStation(Short_t st) {
        fStation = st;
    }

    void SetType(Int_t type) {
        fType = type;
    }

    Int_t GetType() {
        return fType;
    }
    
    Double_t GetLength() {
        return fLength;
    }

    /** Destructor **/
    virtual ~BmnHit();

private:

    /** Is hit used or not **/
    Bool_t fUsing;
    /** Some additional buffer addresses for seeding**/
    Int_t fXaddr;
    Int_t fYaddr;
    Long_t fAddr;
    /** Is hit good or not **/
    Bool_t fFlag;
    /** Index in hits array **/
    Int_t fIndex;
    /** Id of detector which creates hit **/
    DetectorId fDetId;
    /** station number. It essential for gem, mwpc**/
    Short_t fStation;
    Int_t fType; // 0 - fake, 1 - hit, -1 - undefined
    Double_t fLength; //length from vertex to current hit

    ClassDef(BmnHit, 1);

};
#endif	/* BMNHIT_H */

/**
 * \file BmnLink.h
 * \author Andrey Lebedev <andrey.lebedev@gsi.de> - original author for CBM experiment
 * \author Sergey Merts <sergey.merts@gmail.com> - modifications for BMN experiment
 * \date 2013-2014
 *
 * Base data class for storing MC information link.
 **/

#ifndef BMNLINK_H_
#define BMNLINK_H_

#include "TObject.h"
#include <string>

using std::string;

class BmnLink : public TObject
{
public:
   /**
    * \brief Constructor.
    */
   BmnLink();

   /**
    * \brief Standard constructor.
    */
   BmnLink(Float_t weight, Int_t index, Int_t entry = -1, Int_t file = -1);

   /**
    * \brief Destructor.
    */
   virtual ~BmnLink();

   /* Modifiers */
   Int_t GetFile() const { return fFile; }
   Int_t GetEntry() const { return fEntry; }
   Int_t GetIndex() const { return fIndex; }
   Float_t GetWeight() const { return fWeight; }

   /* Accessors */
   void SetFile(Int_t file) { fFile = file; }
   void SetEntry(Int_t entry) { fEntry = entry; }
   void SetIndex(Int_t index) { fIndex = index; }
   void SetWeight(Float_t weight) { fWeight = weight; }

   void AddWeight(Float_t weight) { fWeight += weight; }

   /**
    * \brief Return string representation of the object.
    * \return String representation of the object.
    **/
   virtual string ToString() const;

   friend Bool_t operator==(const BmnLink& lhs, const BmnLink& rhs) {
      return (lhs.GetFile() == rhs.GetFile() && lhs.GetEntry() == rhs.GetEntry() && lhs.GetIndex() == rhs.GetIndex());
   }

private:
   Int_t fFile; // File ID
   Int_t fEntry; // Entry number
   Int_t fIndex; // Index in array
   Float_t fWeight; // Weight

   ClassDef(BmnLink, 1)
};

#endif /* BMNLINK_H_ */
/**
 * \file BmnMatch.h
 * \author Andrey Lebedev <andrey.lebedev@gsi.de> - original author for CBM experiment
 * \author Sergey Merts <sergey.merts@gmail.com> - modifications for BMN experiment
 * \date 2013-2014
 *
 * Base data class for storing RECO-to-MC matching information.
 **/

#ifndef BMNMATCH_H_
#define BMNMATCH_H_

#include "TObject.h"
#include "BmnLink.h"
#include <string>
#include <vector>
#include <algorithm>

using std::string;
using std::vector;
using std::pair;

class BmnMatch : public TObject
{
public:
   /**
    * \brief Default constructor.
    */
   BmnMatch();

   /**
    * \brief Destructor.
    */
   virtual ~BmnMatch();

   /* Accessors */
   const BmnLink& GetLink(Int_t i) const { return fLinks[i]; }
   const vector<BmnLink>& GetLinks() const { return fLinks; }
   const BmnLink& GetMatchedLink() const { return fLinks[fMatchedIndex]; }
   Int_t GetNofLinks() const { return fLinks.size(); }
   Double_t GetTotalWeight() const { return fTotalWeight; }
   Int_t GetMatchedIndex() const { return fMatchedIndex; }

   /* Modifiers */
   void AddLink(const BmnMatch& match);
   void AddLink(const BmnLink& newLink);
   void AddLink(Double_t weight, Int_t index, Int_t entry = -1, Int_t file = -1);
   void ClearLinks();

   /**
    * \brief Return string representation of the object.
    * \return String representation of the object.
    **/
   virtual string ToString() const;

protected:
   vector<BmnLink> fLinks; // List of links to MC
   Double_t fTotalWeight; // Sum of all reference weights
   Int_t fMatchedIndex; // Index of the matched reference in fReferences array

   ClassDef(BmnMatch, 1);
};

#endif /* BMNMATCH_H_ */
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TrigInfo.h
 * Author: ilnur
 *
 * Created on 25 апреля 2018 г., 12:12
 */

#ifndef TRIGINFO_H
#define TRIGINFO_H

#include "BmnEnums.h"
#include "TNamed.h"

class BmnTrigInfo : public TNamed {
public:
    BmnTrigInfo();
    BmnTrigInfo(BmnTriggerType trig, UInt_t cand, UInt_t acc, UInt_t befo, UInt_t afte, UInt_t rjct);
    BmnTrigInfo(BmnTrigInfo* orig);
    virtual ~BmnTrigInfo();
    
    void SetTrigCand(UInt_t _v) {
        fTrigCand = _v;
    }

    UInt_t GetTrigCand() {
        return fTrigCand;
    }

    void SetTrigAccepted(UInt_t _v) {
        fTrigAcce = _v;
    }

    UInt_t GetTrigAccepted() {
        return fTrigAcce;
    }

    void SetTrigBefo(UInt_t _v) {
        fTrigBefo = _v;
    }

    UInt_t GetTrigBefo() {
        return fTrigBefo;
    }

    void SetTrigAfter(UInt_t _v) {
        fTrigAfte = _v;
    }

    UInt_t GetTrigAfter() {
        return fTrigAfte;
    }

    void SetTrigRjct(UInt_t _v) {
        fTrigRjct = _v;
    }

    UInt_t GetTrigRjct() {
        return fTrigRjct;
    }
    
    void SetTrigType(BmnTriggerType type) {
        fTrigType = type;
    }

    /** Get the type of this event*/
    BmnTriggerType GetTrigType() {
        return fTrigType;
    }
    
    
private:
    /** Trigger Type (beam = 6 or target = 1)**/
    BmnTriggerType fTrigType;
    UInt_t fTrigCand;
    UInt_t fTrigAcce;
    UInt_t fTrigBefo;
    UInt_t fTrigAfte;
    UInt_t fTrigRjct;

    ClassDef(BmnTrigInfo, 1)
};

#endif /* TRIGINFO_H */

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"BmnADCDigit", payloadCode, "@",
"BmnCounter", payloadCode, "@",
"BmnCscDigit", payloadCode, "@",
"BmnDchDigit", payloadCode, "@",
"BmnDchHit", payloadCode, "@",
"BmnDchHitOriginal", payloadCode, "@",
"BmnECALDigit", payloadCode, "@",
"BmnEcalDigit", payloadCode, "@",
"BmnEventHeader", payloadCode, "@",
"BmnEventQuality", payloadCode, "@",
"BmnFileSource", payloadCode, "@",
"BmnFitNode", payloadCode, "@",
"BmnGemStripHit", payloadCode, "@",
"BmnGemTrack", payloadCode, "@",
"BmnGeoNavigator", payloadCode, "@",
"BmnGlobalTrack", payloadCode, "@",
"BmnHRBDigit", payloadCode, "@",
"BmnHit", payloadCode, "@",
"BmnIdentifiableTrack", payloadCode, "@",
"BmnLANDDigit", payloadCode, "@",
"BmnLink", payloadCode, "@",
"BmnMSCDigit", payloadCode, "@",
"BmnMatch", payloadCode, "@",
"BmnMwpcDigit", payloadCode, "@",
"BmnMwpcHit", payloadCode, "@",
"BmnRunHeader", payloadCode, "@",
"BmnSyncDigit", payloadCode, "@",
"BmnTDCDigit", payloadCode, "@",
"BmnTQDCADCDigit", payloadCode, "@",
"BmnTTBDigit", payloadCode, "@",
"BmnTacquilaDigit", payloadCode, "@",
"BmnTof1Digit", payloadCode, "@",
"BmnTof2Digit", payloadCode, "@",
"BmnTofHit", payloadCode, "@",
"BmnTrack", payloadCode, "@",
"BmnTrackMatch", payloadCode, "@",
"BmnTrigDigit", payloadCode, "@",
"BmnTrigInfo", payloadCode, "@",
"BmnTrigWaveDigit", payloadCode, "@",
"BmnZDCDigit", payloadCode, "@",
"CbmBaseHit", payloadCode, "@",
"CbmDaqBuffer", payloadCode, "@",
"CbmDetectorList", payloadCode, "@",
"CbmDigi", payloadCode, "@",
"CbmEcalPoint", payloadCode, "@",
"CbmFindPrimaryVertex", payloadCode, "@",
"CbmGeoSttPar", payloadCode, "@",
"CbmGlobalTrack", payloadCode, "@",
"CbmHit", payloadCode, "@",
"CbmMCBuffer", payloadCode, "@",
"CbmMCTrack", payloadCode, "@",
"CbmMvdDetectorId", payloadCode, "@",
"CbmMvdGeoPar", payloadCode, "@",
"CbmMvdHit", payloadCode, "@",
"CbmMvdHitMatch", payloadCode, "@",
"CbmMvdPoint", payloadCode, "@",
"CbmPixelHit", payloadCode, "@",
"CbmPrimaryVertexFinder", payloadCode, "@",
"CbmPsdDigi", payloadCode, "@",
"CbmPsdEventData", payloadCode, "@",
"CbmPsdHit", payloadCode, "@",
"CbmPsdPoint", payloadCode, "@",
"CbmStack", payloadCode, "@",
"CbmStsCluster", payloadCode, "@",
"CbmStsDetectorId", payloadCode, "@",
"CbmStsDigi", payloadCode, "@",
"CbmStsDigiLight", payloadCode, "@",
"CbmStsDigiMatch", payloadCode, "@",
"CbmStsHit", payloadCode, "@",
"CbmStsPoint", payloadCode, "@",
"CbmStsTrack", payloadCode, "@",
"CbmStsTrackFinder", payloadCode, "@",
"CbmStsTrackFitter", payloadCode, "@",
"CbmTofHit", payloadCode, "@",
"CbmTofMerger", payloadCode, "@",
"CbmTofPoint", payloadCode, "@",
"CbmTofTrack", payloadCode, "@",
"CbmTrackMatch", payloadCode, "@",
"CbmTrackMerger", payloadCode, "@",
"CbmVertex", payloadCode, "@",
"DigiArrays", payloadCode, "@",
"FitWLSQ", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__BmnDataDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__BmnDataDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__BmnDataDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__BmnDataDict() {
  TriggerDictionaryInitialization_G__BmnDataDict_Impl();
}
