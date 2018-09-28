// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIalexdIbmnroot_devdIbmnrootdIbuilddIstsdIG__StsDict

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
#include "CbmGeoSts.h"
#include "CbmGeoStsPar.h"
#include "CbmSts.h"
#include "CbmStsContFact.h"
#include "CbmStsDigiPar.h"
#include "CbmStsDigiScheme.h"
#include "CbmStsIdealDigitize.h"
#include "CbmStsDigitize.h"
#include "CbmStsDigitizeTb.h"
#include "CbmStsIdealFindHits.h"
#include "CbmStsClusterFinder.h"
#include "CbmStsFindHits.h"
#include "CbmStsFindTracks.h"
#include "CbmStsFindTracksQa.h"
#include "CbmStsFitTracks.h"
#include "CbmStsHitProducerIdeal.h"
#include "CbmStsIdealMatchHits.h"
#include "CbmStsMatchHits.h"
#include "CbmStsMatchTracks.h"
#include "CbmStsParAsciiFileIo.h"
#include "CbmStsParRootFileIo.h"
#include "CbmStsRadTool.h"
#include "CbmStsSensor.h"
#include "CbmStsSensorDigiPar.h"
#include "CbmStsSector.h"
#include "CbmStsSectorDigiPar.h"
#include "CbmStsStation.h"
#include "CbmStsStationDigiPar.h"
#include "CbmStsTrackFinderIdeal.h"
#include "CbmStsTrackFitterIdeal.h"
#include "CbmStsSimulationQa.h"
#include "CbmStsFindHitsQa.h"
#include "CbmStsReconstructionQa.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_CbmGeoSts(void *p = 0);
   static void *newArray_CbmGeoSts(Long_t size, void *p);
   static void delete_CbmGeoSts(void *p);
   static void deleteArray_CbmGeoSts(void *p);
   static void destruct_CbmGeoSts(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmGeoSts*)
   {
      ::CbmGeoSts *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmGeoSts >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmGeoSts", ::CbmGeoSts::Class_Version(), "", 11,
                  typeid(::CbmGeoSts), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmGeoSts::Dictionary, isa_proxy, 4,
                  sizeof(::CbmGeoSts) );
      instance.SetNew(&new_CbmGeoSts);
      instance.SetNewArray(&newArray_CbmGeoSts);
      instance.SetDelete(&delete_CbmGeoSts);
      instance.SetDeleteArray(&deleteArray_CbmGeoSts);
      instance.SetDestructor(&destruct_CbmGeoSts);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmGeoSts*)
   {
      return GenerateInitInstanceLocal((::CbmGeoSts*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmGeoSts*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmGeoStsPar(void *p = 0);
   static void *newArray_CbmGeoStsPar(Long_t size, void *p);
   static void delete_CbmGeoStsPar(void *p);
   static void deleteArray_CbmGeoStsPar(void *p);
   static void destruct_CbmGeoStsPar(void *p);
   static void streamer_CbmGeoStsPar(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmGeoStsPar*)
   {
      ::CbmGeoStsPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmGeoStsPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmGeoStsPar", ::CbmGeoStsPar::Class_Version(), "", 38,
                  typeid(::CbmGeoStsPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmGeoStsPar::Dictionary, isa_proxy, 16,
                  sizeof(::CbmGeoStsPar) );
      instance.SetNew(&new_CbmGeoStsPar);
      instance.SetNewArray(&newArray_CbmGeoStsPar);
      instance.SetDelete(&delete_CbmGeoStsPar);
      instance.SetDeleteArray(&deleteArray_CbmGeoStsPar);
      instance.SetDestructor(&destruct_CbmGeoStsPar);
      instance.SetStreamerFunc(&streamer_CbmGeoStsPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmGeoStsPar*)
   {
      return GenerateInitInstanceLocal((::CbmGeoStsPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmGeoStsPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmSts(void *p = 0);
   static void *newArray_CbmSts(Long_t size, void *p);
   static void delete_CbmSts(void *p);
   static void deleteArray_CbmSts(void *p);
   static void destruct_CbmSts(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmSts*)
   {
      ::CbmSts *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmSts >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmSts", ::CbmSts::Class_Version(), "", 91,
                  typeid(::CbmSts), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmSts::Dictionary, isa_proxy, 4,
                  sizeof(::CbmSts) );
      instance.SetNew(&new_CbmSts);
      instance.SetNewArray(&newArray_CbmSts);
      instance.SetDelete(&delete_CbmSts);
      instance.SetDeleteArray(&deleteArray_CbmSts);
      instance.SetDestructor(&destruct_CbmSts);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmSts*)
   {
      return GenerateInitInstanceLocal((::CbmSts*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmSts*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsContFact(void *p = 0);
   static void *newArray_CbmStsContFact(Long_t size, void *p);
   static void delete_CbmStsContFact(void *p);
   static void deleteArray_CbmStsContFact(void *p);
   static void destruct_CbmStsContFact(void *p);
   static void streamer_CbmStsContFact(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsContFact*)
   {
      ::CbmStsContFact *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsContFact >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsContFact", ::CbmStsContFact::Class_Version(), "", 273,
                  typeid(::CbmStsContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsContFact::Dictionary, isa_proxy, 16,
                  sizeof(::CbmStsContFact) );
      instance.SetNew(&new_CbmStsContFact);
      instance.SetNewArray(&newArray_CbmStsContFact);
      instance.SetDelete(&delete_CbmStsContFact);
      instance.SetDeleteArray(&deleteArray_CbmStsContFact);
      instance.SetDestructor(&destruct_CbmStsContFact);
      instance.SetStreamerFunc(&streamer_CbmStsContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsContFact*)
   {
      return GenerateInitInstanceLocal((::CbmStsContFact*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsContFact*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsDigiPar(void *p = 0);
   static void *newArray_CbmStsDigiPar(Long_t size, void *p);
   static void delete_CbmStsDigiPar(void *p);
   static void deleteArray_CbmStsDigiPar(void *p);
   static void destruct_CbmStsDigiPar(void *p);
   static void streamer_CbmStsDigiPar(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsDigiPar*)
   {
      ::CbmStsDigiPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsDigiPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsDigiPar", ::CbmStsDigiPar::Class_Version(), "", 322,
                  typeid(::CbmStsDigiPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsDigiPar::Dictionary, isa_proxy, 16,
                  sizeof(::CbmStsDigiPar) );
      instance.SetNew(&new_CbmStsDigiPar);
      instance.SetNewArray(&newArray_CbmStsDigiPar);
      instance.SetDelete(&delete_CbmStsDigiPar);
      instance.SetDeleteArray(&deleteArray_CbmStsDigiPar);
      instance.SetDestructor(&destruct_CbmStsDigiPar);
      instance.SetStreamerFunc(&streamer_CbmStsDigiPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsDigiPar*)
   {
      return GenerateInitInstanceLocal((::CbmStsDigiPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsDigiPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsDigiScheme(void *p = 0);
   static void *newArray_CbmStsDigiScheme(Long_t size, void *p);
   static void delete_CbmStsDigiScheme(void *p);
   static void deleteArray_CbmStsDigiScheme(void *p);
   static void destruct_CbmStsDigiScheme(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsDigiScheme*)
   {
      ::CbmStsDigiScheme *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsDigiScheme >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsDigiScheme", ::CbmStsDigiScheme::Class_Version(), "", 423,
                  typeid(::CbmStsDigiScheme), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsDigiScheme::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsDigiScheme) );
      instance.SetNew(&new_CbmStsDigiScheme);
      instance.SetNewArray(&newArray_CbmStsDigiScheme);
      instance.SetDelete(&delete_CbmStsDigiScheme);
      instance.SetDeleteArray(&deleteArray_CbmStsDigiScheme);
      instance.SetDestructor(&destruct_CbmStsDigiScheme);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsDigiScheme*)
   {
      return GenerateInitInstanceLocal((::CbmStsDigiScheme*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsDigiScheme*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsIdealDigitize(void *p = 0);
   static void *newArray_CbmStsIdealDigitize(Long_t size, void *p);
   static void delete_CbmStsIdealDigitize(void *p);
   static void deleteArray_CbmStsIdealDigitize(void *p);
   static void destruct_CbmStsIdealDigitize(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsIdealDigitize*)
   {
      ::CbmStsIdealDigitize *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsIdealDigitize >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsIdealDigitize", ::CbmStsIdealDigitize::Class_Version(), "", 539,
                  typeid(::CbmStsIdealDigitize), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsIdealDigitize::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsIdealDigitize) );
      instance.SetNew(&new_CbmStsIdealDigitize);
      instance.SetNewArray(&newArray_CbmStsIdealDigitize);
      instance.SetDelete(&delete_CbmStsIdealDigitize);
      instance.SetDeleteArray(&deleteArray_CbmStsIdealDigitize);
      instance.SetDestructor(&destruct_CbmStsIdealDigitize);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsIdealDigitize*)
   {
      return GenerateInitInstanceLocal((::CbmStsIdealDigitize*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsIdealDigitize*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsDigitize(void *p = 0);
   static void *newArray_CbmStsDigitize(Long_t size, void *p);
   static void delete_CbmStsDigitize(void *p);
   static void deleteArray_CbmStsDigitize(void *p);
   static void destruct_CbmStsDigitize(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsDigitize*)
   {
      ::CbmStsDigitize *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsDigitize >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsDigitize", ::CbmStsDigitize::Class_Version(), "", 650,
                  typeid(::CbmStsDigitize), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsDigitize::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsDigitize) );
      instance.SetNew(&new_CbmStsDigitize);
      instance.SetNewArray(&newArray_CbmStsDigitize);
      instance.SetDelete(&delete_CbmStsDigitize);
      instance.SetDeleteArray(&deleteArray_CbmStsDigitize);
      instance.SetDestructor(&destruct_CbmStsDigitize);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsDigitize*)
   {
      return GenerateInitInstanceLocal((::CbmStsDigitize*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsDigitize*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsDigitizeTb(void *p = 0);
   static void *newArray_CbmStsDigitizeTb(Long_t size, void *p);
   static void delete_CbmStsDigitizeTb(void *p);
   static void deleteArray_CbmStsDigitizeTb(void *p);
   static void destruct_CbmStsDigitizeTb(void *p);
   static void streamer_CbmStsDigitizeTb(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsDigitizeTb*)
   {
      ::CbmStsDigitizeTb *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsDigitizeTb >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsDigitizeTb", ::CbmStsDigitizeTb::Class_Version(), "", 815,
                  typeid(::CbmStsDigitizeTb), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsDigitizeTb::Dictionary, isa_proxy, 16,
                  sizeof(::CbmStsDigitizeTb) );
      instance.SetNew(&new_CbmStsDigitizeTb);
      instance.SetNewArray(&newArray_CbmStsDigitizeTb);
      instance.SetDelete(&delete_CbmStsDigitizeTb);
      instance.SetDeleteArray(&deleteArray_CbmStsDigitizeTb);
      instance.SetDestructor(&destruct_CbmStsDigitizeTb);
      instance.SetStreamerFunc(&streamer_CbmStsDigitizeTb);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsDigitizeTb*)
   {
      return GenerateInitInstanceLocal((::CbmStsDigitizeTb*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsDigitizeTb*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsIdealFindHits(void *p = 0);
   static void *newArray_CbmStsIdealFindHits(Long_t size, void *p);
   static void delete_CbmStsIdealFindHits(void *p);
   static void deleteArray_CbmStsIdealFindHits(void *p);
   static void destruct_CbmStsIdealFindHits(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsIdealFindHits*)
   {
      ::CbmStsIdealFindHits *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsIdealFindHits >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsIdealFindHits", ::CbmStsIdealFindHits::Class_Version(), "", 975,
                  typeid(::CbmStsIdealFindHits), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsIdealFindHits::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsIdealFindHits) );
      instance.SetNew(&new_CbmStsIdealFindHits);
      instance.SetNewArray(&newArray_CbmStsIdealFindHits);
      instance.SetDelete(&delete_CbmStsIdealFindHits);
      instance.SetDeleteArray(&deleteArray_CbmStsIdealFindHits);
      instance.SetDestructor(&destruct_CbmStsIdealFindHits);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsIdealFindHits*)
   {
      return GenerateInitInstanceLocal((::CbmStsIdealFindHits*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsIdealFindHits*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsClusterFinder(void *p = 0);
   static void *newArray_CbmStsClusterFinder(Long_t size, void *p);
   static void delete_CbmStsClusterFinder(void *p);
   static void deleteArray_CbmStsClusterFinder(void *p);
   static void destruct_CbmStsClusterFinder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsClusterFinder*)
   {
      ::CbmStsClusterFinder *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsClusterFinder >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsClusterFinder", ::CbmStsClusterFinder::Class_Version(), "", 1096,
                  typeid(::CbmStsClusterFinder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsClusterFinder::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsClusterFinder) );
      instance.SetNew(&new_CbmStsClusterFinder);
      instance.SetNewArray(&newArray_CbmStsClusterFinder);
      instance.SetDelete(&delete_CbmStsClusterFinder);
      instance.SetDeleteArray(&deleteArray_CbmStsClusterFinder);
      instance.SetDestructor(&destruct_CbmStsClusterFinder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsClusterFinder*)
   {
      return GenerateInitInstanceLocal((::CbmStsClusterFinder*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsClusterFinder*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsFindHits(void *p = 0);
   static void *newArray_CbmStsFindHits(Long_t size, void *p);
   static void delete_CbmStsFindHits(void *p);
   static void deleteArray_CbmStsFindHits(void *p);
   static void destruct_CbmStsFindHits(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsFindHits*)
   {
      ::CbmStsFindHits *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsFindHits >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsFindHits", ::CbmStsFindHits::Class_Version(), "", 1224,
                  typeid(::CbmStsFindHits), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsFindHits::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsFindHits) );
      instance.SetNew(&new_CbmStsFindHits);
      instance.SetNewArray(&newArray_CbmStsFindHits);
      instance.SetDelete(&delete_CbmStsFindHits);
      instance.SetDeleteArray(&deleteArray_CbmStsFindHits);
      instance.SetDestructor(&destruct_CbmStsFindHits);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsFindHits*)
   {
      return GenerateInitInstanceLocal((::CbmStsFindHits*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsFindHits*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsFindTracks(void *p = 0);
   static void *newArray_CbmStsFindTracks(Long_t size, void *p);
   static void delete_CbmStsFindTracks(void *p);
   static void deleteArray_CbmStsFindTracks(void *p);
   static void destruct_CbmStsFindTracks(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsFindTracks*)
   {
      ::CbmStsFindTracks *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsFindTracks >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsFindTracks", ::CbmStsFindTracks::Class_Version(), "", 1340,
                  typeid(::CbmStsFindTracks), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsFindTracks::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsFindTracks) );
      instance.SetNew(&new_CbmStsFindTracks);
      instance.SetNewArray(&newArray_CbmStsFindTracks);
      instance.SetDelete(&delete_CbmStsFindTracks);
      instance.SetDeleteArray(&deleteArray_CbmStsFindTracks);
      instance.SetDestructor(&destruct_CbmStsFindTracks);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsFindTracks*)
   {
      return GenerateInitInstanceLocal((::CbmStsFindTracks*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsFindTracks*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsFindTracksQa(void *p = 0);
   static void *newArray_CbmStsFindTracksQa(Long_t size, void *p);
   static void delete_CbmStsFindTracksQa(void *p);
   static void deleteArray_CbmStsFindTracksQa(void *p);
   static void destruct_CbmStsFindTracksQa(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsFindTracksQa*)
   {
      ::CbmStsFindTracksQa *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsFindTracksQa >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsFindTracksQa", ::CbmStsFindTracksQa::Class_Version(), "", 1456,
                  typeid(::CbmStsFindTracksQa), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsFindTracksQa::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsFindTracksQa) );
      instance.SetNew(&new_CbmStsFindTracksQa);
      instance.SetNewArray(&newArray_CbmStsFindTracksQa);
      instance.SetDelete(&delete_CbmStsFindTracksQa);
      instance.SetDeleteArray(&deleteArray_CbmStsFindTracksQa);
      instance.SetDestructor(&destruct_CbmStsFindTracksQa);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsFindTracksQa*)
   {
      return GenerateInitInstanceLocal((::CbmStsFindTracksQa*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsFindTracksQa*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsFitTracks(void *p = 0);
   static void *newArray_CbmStsFitTracks(Long_t size, void *p);
   static void delete_CbmStsFitTracks(void *p);
   static void deleteArray_CbmStsFitTracks(void *p);
   static void destruct_CbmStsFitTracks(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsFitTracks*)
   {
      ::CbmStsFitTracks *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsFitTracks >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsFitTracks", ::CbmStsFitTracks::Class_Version(), "", 1628,
                  typeid(::CbmStsFitTracks), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsFitTracks::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsFitTracks) );
      instance.SetNew(&new_CbmStsFitTracks);
      instance.SetNewArray(&newArray_CbmStsFitTracks);
      instance.SetDelete(&delete_CbmStsFitTracks);
      instance.SetDeleteArray(&deleteArray_CbmStsFitTracks);
      instance.SetDestructor(&destruct_CbmStsFitTracks);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsFitTracks*)
   {
      return GenerateInitInstanceLocal((::CbmStsFitTracks*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsFitTracks*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsHitProducerIdeal(void *p = 0);
   static void *newArray_CbmStsHitProducerIdeal(Long_t size, void *p);
   static void delete_CbmStsHitProducerIdeal(void *p);
   static void deleteArray_CbmStsHitProducerIdeal(void *p);
   static void destruct_CbmStsHitProducerIdeal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsHitProducerIdeal*)
   {
      ::CbmStsHitProducerIdeal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsHitProducerIdeal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsHitProducerIdeal", ::CbmStsHitProducerIdeal::Class_Version(), "", 1727,
                  typeid(::CbmStsHitProducerIdeal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsHitProducerIdeal::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsHitProducerIdeal) );
      instance.SetNew(&new_CbmStsHitProducerIdeal);
      instance.SetNewArray(&newArray_CbmStsHitProducerIdeal);
      instance.SetDelete(&delete_CbmStsHitProducerIdeal);
      instance.SetDeleteArray(&deleteArray_CbmStsHitProducerIdeal);
      instance.SetDestructor(&destruct_CbmStsHitProducerIdeal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsHitProducerIdeal*)
   {
      return GenerateInitInstanceLocal((::CbmStsHitProducerIdeal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsHitProducerIdeal*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsIdealMatchHits(void *p = 0);
   static void *newArray_CbmStsIdealMatchHits(Long_t size, void *p);
   static void delete_CbmStsIdealMatchHits(void *p);
   static void deleteArray_CbmStsIdealMatchHits(void *p);
   static void destruct_CbmStsIdealMatchHits(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsIdealMatchHits*)
   {
      ::CbmStsIdealMatchHits *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsIdealMatchHits >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsIdealMatchHits", ::CbmStsIdealMatchHits::Class_Version(), "", 1801,
                  typeid(::CbmStsIdealMatchHits), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsIdealMatchHits::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsIdealMatchHits) );
      instance.SetNew(&new_CbmStsIdealMatchHits);
      instance.SetNewArray(&newArray_CbmStsIdealMatchHits);
      instance.SetDelete(&delete_CbmStsIdealMatchHits);
      instance.SetDeleteArray(&deleteArray_CbmStsIdealMatchHits);
      instance.SetDestructor(&destruct_CbmStsIdealMatchHits);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsIdealMatchHits*)
   {
      return GenerateInitInstanceLocal((::CbmStsIdealMatchHits*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsIdealMatchHits*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsMatchHits(void *p = 0);
   static void *newArray_CbmStsMatchHits(Long_t size, void *p);
   static void delete_CbmStsMatchHits(void *p);
   static void deleteArray_CbmStsMatchHits(void *p);
   static void destruct_CbmStsMatchHits(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsMatchHits*)
   {
      ::CbmStsMatchHits *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsMatchHits >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsMatchHits", ::CbmStsMatchHits::Class_Version(), "", 1917,
                  typeid(::CbmStsMatchHits), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsMatchHits::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsMatchHits) );
      instance.SetNew(&new_CbmStsMatchHits);
      instance.SetNewArray(&newArray_CbmStsMatchHits);
      instance.SetDelete(&delete_CbmStsMatchHits);
      instance.SetDeleteArray(&deleteArray_CbmStsMatchHits);
      instance.SetDestructor(&destruct_CbmStsMatchHits);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsMatchHits*)
   {
      return GenerateInitInstanceLocal((::CbmStsMatchHits*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsMatchHits*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsMatchTracks(void *p = 0);
   static void *newArray_CbmStsMatchTracks(Long_t size, void *p);
   static void delete_CbmStsMatchTracks(void *p);
   static void deleteArray_CbmStsMatchTracks(void *p);
   static void destruct_CbmStsMatchTracks(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsMatchTracks*)
   {
      ::CbmStsMatchTracks *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsMatchTracks >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsMatchTracks", ::CbmStsMatchTracks::Class_Version(), "", 2034,
                  typeid(::CbmStsMatchTracks), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsMatchTracks::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsMatchTracks) );
      instance.SetNew(&new_CbmStsMatchTracks);
      instance.SetNewArray(&newArray_CbmStsMatchTracks);
      instance.SetDelete(&delete_CbmStsMatchTracks);
      instance.SetDeleteArray(&deleteArray_CbmStsMatchTracks);
      instance.SetDestructor(&destruct_CbmStsMatchTracks);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsMatchTracks*)
   {
      return GenerateInitInstanceLocal((::CbmStsMatchTracks*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsMatchTracks*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_CbmStsParAsciiFileIo(void *p);
   static void deleteArray_CbmStsParAsciiFileIo(void *p);
   static void destruct_CbmStsParAsciiFileIo(void *p);
   static void streamer_CbmStsParAsciiFileIo(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsParAsciiFileIo*)
   {
      ::CbmStsParAsciiFileIo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsParAsciiFileIo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsParAsciiFileIo", ::CbmStsParAsciiFileIo::Class_Version(), "", 2115,
                  typeid(::CbmStsParAsciiFileIo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsParAsciiFileIo::Dictionary, isa_proxy, 16,
                  sizeof(::CbmStsParAsciiFileIo) );
      instance.SetDelete(&delete_CbmStsParAsciiFileIo);
      instance.SetDeleteArray(&deleteArray_CbmStsParAsciiFileIo);
      instance.SetDestructor(&destruct_CbmStsParAsciiFileIo);
      instance.SetStreamerFunc(&streamer_CbmStsParAsciiFileIo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsParAsciiFileIo*)
   {
      return GenerateInitInstanceLocal((::CbmStsParAsciiFileIo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsParAsciiFileIo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_CbmStsParRootFileIo(void *p);
   static void deleteArray_CbmStsParRootFileIo(void *p);
   static void destruct_CbmStsParRootFileIo(void *p);
   static void streamer_CbmStsParRootFileIo(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsParRootFileIo*)
   {
      ::CbmStsParRootFileIo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsParRootFileIo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsParRootFileIo", ::CbmStsParRootFileIo::Class_Version(), "", 2148,
                  typeid(::CbmStsParRootFileIo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsParRootFileIo::Dictionary, isa_proxy, 16,
                  sizeof(::CbmStsParRootFileIo) );
      instance.SetDelete(&delete_CbmStsParRootFileIo);
      instance.SetDeleteArray(&deleteArray_CbmStsParRootFileIo);
      instance.SetDestructor(&destruct_CbmStsParRootFileIo);
      instance.SetStreamerFunc(&streamer_CbmStsParRootFileIo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsParRootFileIo*)
   {
      return GenerateInitInstanceLocal((::CbmStsParRootFileIo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsParRootFileIo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsRadTool(void *p = 0);
   static void *newArray_CbmStsRadTool(Long_t size, void *p);
   static void delete_CbmStsRadTool(void *p);
   static void deleteArray_CbmStsRadTool(void *p);
   static void destruct_CbmStsRadTool(void *p);
   static void streamer_CbmStsRadTool(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsRadTool*)
   {
      ::CbmStsRadTool *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsRadTool >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsRadTool", ::CbmStsRadTool::Class_Version(), "", 2206,
                  typeid(::CbmStsRadTool), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsRadTool::Dictionary, isa_proxy, 16,
                  sizeof(::CbmStsRadTool) );
      instance.SetNew(&new_CbmStsRadTool);
      instance.SetNewArray(&newArray_CbmStsRadTool);
      instance.SetDelete(&delete_CbmStsRadTool);
      instance.SetDeleteArray(&deleteArray_CbmStsRadTool);
      instance.SetDestructor(&destruct_CbmStsRadTool);
      instance.SetStreamerFunc(&streamer_CbmStsRadTool);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsRadTool*)
   {
      return GenerateInitInstanceLocal((::CbmStsRadTool*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsRadTool*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsSensor(void *p = 0);
   static void *newArray_CbmStsSensor(Long_t size, void *p);
   static void delete_CbmStsSensor(void *p);
   static void deleteArray_CbmStsSensor(void *p);
   static void destruct_CbmStsSensor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsSensor*)
   {
      ::CbmStsSensor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsSensor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsSensor", ::CbmStsSensor::Class_Version(), "", 2359,
                  typeid(::CbmStsSensor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsSensor::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsSensor) );
      instance.SetNew(&new_CbmStsSensor);
      instance.SetNewArray(&newArray_CbmStsSensor);
      instance.SetDelete(&delete_CbmStsSensor);
      instance.SetDeleteArray(&deleteArray_CbmStsSensor);
      instance.SetDestructor(&destruct_CbmStsSensor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsSensor*)
   {
      return GenerateInitInstanceLocal((::CbmStsSensor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsSensor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsSensorDigiPar(void *p = 0);
   static void *newArray_CbmStsSensorDigiPar(Long_t size, void *p);
   static void delete_CbmStsSensorDigiPar(void *p);
   static void deleteArray_CbmStsSensorDigiPar(void *p);
   static void destruct_CbmStsSensorDigiPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsSensorDigiPar*)
   {
      ::CbmStsSensorDigiPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsSensorDigiPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsSensorDigiPar", ::CbmStsSensorDigiPar::Class_Version(), "", 2625,
                  typeid(::CbmStsSensorDigiPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsSensorDigiPar::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsSensorDigiPar) );
      instance.SetNew(&new_CbmStsSensorDigiPar);
      instance.SetNewArray(&newArray_CbmStsSensorDigiPar);
      instance.SetDelete(&delete_CbmStsSensorDigiPar);
      instance.SetDeleteArray(&deleteArray_CbmStsSensorDigiPar);
      instance.SetDestructor(&destruct_CbmStsSensorDigiPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsSensorDigiPar*)
   {
      return GenerateInitInstanceLocal((::CbmStsSensorDigiPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsSensorDigiPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsSector(void *p = 0);
   static void *newArray_CbmStsSector(Long_t size, void *p);
   static void delete_CbmStsSector(void *p);
   static void deleteArray_CbmStsSector(void *p);
   static void destruct_CbmStsSector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsSector*)
   {
      ::CbmStsSector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsSector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsSector", ::CbmStsSector::Class_Version(), "", 2765,
                  typeid(::CbmStsSector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsSector::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsSector) );
      instance.SetNew(&new_CbmStsSector);
      instance.SetNewArray(&newArray_CbmStsSector);
      instance.SetDelete(&delete_CbmStsSector);
      instance.SetDeleteArray(&deleteArray_CbmStsSector);
      instance.SetDestructor(&destruct_CbmStsSector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsSector*)
   {
      return GenerateInitInstanceLocal((::CbmStsSector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsSector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsSectorDigiPar(void *p = 0);
   static void *newArray_CbmStsSectorDigiPar(Long_t size, void *p);
   static void delete_CbmStsSectorDigiPar(void *p);
   static void deleteArray_CbmStsSectorDigiPar(void *p);
   static void destruct_CbmStsSectorDigiPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsSectorDigiPar*)
   {
      ::CbmStsSectorDigiPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsSectorDigiPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsSectorDigiPar", ::CbmStsSectorDigiPar::Class_Version(), "", 2934,
                  typeid(::CbmStsSectorDigiPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsSectorDigiPar::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsSectorDigiPar) );
      instance.SetNew(&new_CbmStsSectorDigiPar);
      instance.SetNewArray(&newArray_CbmStsSectorDigiPar);
      instance.SetDelete(&delete_CbmStsSectorDigiPar);
      instance.SetDeleteArray(&deleteArray_CbmStsSectorDigiPar);
      instance.SetDestructor(&destruct_CbmStsSectorDigiPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsSectorDigiPar*)
   {
      return GenerateInitInstanceLocal((::CbmStsSectorDigiPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsSectorDigiPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsStation(void *p = 0);
   static void *newArray_CbmStsStation(Long_t size, void *p);
   static void delete_CbmStsStation(void *p);
   static void deleteArray_CbmStsStation(void *p);
   static void destruct_CbmStsStation(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsStation*)
   {
      ::CbmStsStation *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsStation >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsStation", ::CbmStsStation::Class_Version(), "", 3012,
                  typeid(::CbmStsStation), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsStation::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsStation) );
      instance.SetNew(&new_CbmStsStation);
      instance.SetNewArray(&newArray_CbmStsStation);
      instance.SetDelete(&delete_CbmStsStation);
      instance.SetDeleteArray(&deleteArray_CbmStsStation);
      instance.SetDestructor(&destruct_CbmStsStation);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsStation*)
   {
      return GenerateInitInstanceLocal((::CbmStsStation*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsStation*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsStationDigiPar(void *p = 0);
   static void *newArray_CbmStsStationDigiPar(Long_t size, void *p);
   static void delete_CbmStsStationDigiPar(void *p);
   static void deleteArray_CbmStsStationDigiPar(void *p);
   static void destruct_CbmStsStationDigiPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsStationDigiPar*)
   {
      ::CbmStsStationDigiPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsStationDigiPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsStationDigiPar", ::CbmStsStationDigiPar::Class_Version(), "", 3123,
                  typeid(::CbmStsStationDigiPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsStationDigiPar::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsStationDigiPar) );
      instance.SetNew(&new_CbmStsStationDigiPar);
      instance.SetNewArray(&newArray_CbmStsStationDigiPar);
      instance.SetDelete(&delete_CbmStsStationDigiPar);
      instance.SetDeleteArray(&deleteArray_CbmStsStationDigiPar);
      instance.SetDestructor(&destruct_CbmStsStationDigiPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsStationDigiPar*)
   {
      return GenerateInitInstanceLocal((::CbmStsStationDigiPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsStationDigiPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsTrackFinderIdeal(void *p = 0);
   static void *newArray_CbmStsTrackFinderIdeal(Long_t size, void *p);
   static void delete_CbmStsTrackFinderIdeal(void *p);
   static void deleteArray_CbmStsTrackFinderIdeal(void *p);
   static void destruct_CbmStsTrackFinderIdeal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsTrackFinderIdeal*)
   {
      ::CbmStsTrackFinderIdeal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsTrackFinderIdeal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsTrackFinderIdeal", ::CbmStsTrackFinderIdeal::Class_Version(), "", 3199,
                  typeid(::CbmStsTrackFinderIdeal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsTrackFinderIdeal::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsTrackFinderIdeal) );
      instance.SetNew(&new_CbmStsTrackFinderIdeal);
      instance.SetNewArray(&newArray_CbmStsTrackFinderIdeal);
      instance.SetDelete(&delete_CbmStsTrackFinderIdeal);
      instance.SetDeleteArray(&deleteArray_CbmStsTrackFinderIdeal);
      instance.SetDestructor(&destruct_CbmStsTrackFinderIdeal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsTrackFinderIdeal*)
   {
      return GenerateInitInstanceLocal((::CbmStsTrackFinderIdeal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsTrackFinderIdeal*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsTrackFitterIdeal(void *p = 0);
   static void *newArray_CbmStsTrackFitterIdeal(Long_t size, void *p);
   static void delete_CbmStsTrackFitterIdeal(void *p);
   static void deleteArray_CbmStsTrackFitterIdeal(void *p);
   static void destruct_CbmStsTrackFitterIdeal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsTrackFitterIdeal*)
   {
      ::CbmStsTrackFitterIdeal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsTrackFitterIdeal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsTrackFitterIdeal", ::CbmStsTrackFitterIdeal::Class_Version(), "", 3273,
                  typeid(::CbmStsTrackFitterIdeal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsTrackFitterIdeal::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsTrackFitterIdeal) );
      instance.SetNew(&new_CbmStsTrackFitterIdeal);
      instance.SetNewArray(&newArray_CbmStsTrackFitterIdeal);
      instance.SetDelete(&delete_CbmStsTrackFitterIdeal);
      instance.SetDeleteArray(&deleteArray_CbmStsTrackFitterIdeal);
      instance.SetDestructor(&destruct_CbmStsTrackFitterIdeal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsTrackFitterIdeal*)
   {
      return GenerateInitInstanceLocal((::CbmStsTrackFitterIdeal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsTrackFitterIdeal*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsSimulationQa(void *p = 0);
   static void *newArray_CbmStsSimulationQa(Long_t size, void *p);
   static void delete_CbmStsSimulationQa(void *p);
   static void deleteArray_CbmStsSimulationQa(void *p);
   static void destruct_CbmStsSimulationQa(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsSimulationQa*)
   {
      ::CbmStsSimulationQa *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsSimulationQa >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsSimulationQa", ::CbmStsSimulationQa::Class_Version(), "", 3343,
                  typeid(::CbmStsSimulationQa), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsSimulationQa::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsSimulationQa) );
      instance.SetNew(&new_CbmStsSimulationQa);
      instance.SetNewArray(&newArray_CbmStsSimulationQa);
      instance.SetDelete(&delete_CbmStsSimulationQa);
      instance.SetDeleteArray(&deleteArray_CbmStsSimulationQa);
      instance.SetDestructor(&destruct_CbmStsSimulationQa);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsSimulationQa*)
   {
      return GenerateInitInstanceLocal((::CbmStsSimulationQa*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsSimulationQa*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsFindHitsQa(void *p = 0);
   static void *newArray_CbmStsFindHitsQa(Long_t size, void *p);
   static void delete_CbmStsFindHitsQa(void *p);
   static void deleteArray_CbmStsFindHitsQa(void *p);
   static void destruct_CbmStsFindHitsQa(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsFindHitsQa*)
   {
      ::CbmStsFindHitsQa *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsFindHitsQa >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsFindHitsQa", ::CbmStsFindHitsQa::Class_Version(), "", 3497,
                  typeid(::CbmStsFindHitsQa), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsFindHitsQa::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsFindHitsQa) );
      instance.SetNew(&new_CbmStsFindHitsQa);
      instance.SetNewArray(&newArray_CbmStsFindHitsQa);
      instance.SetDelete(&delete_CbmStsFindHitsQa);
      instance.SetDeleteArray(&deleteArray_CbmStsFindHitsQa);
      instance.SetDestructor(&destruct_CbmStsFindHitsQa);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsFindHitsQa*)
   {
      return GenerateInitInstanceLocal((::CbmStsFindHitsQa*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsFindHitsQa*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsReconstructionQa(void *p = 0);
   static void *newArray_CbmStsReconstructionQa(Long_t size, void *p);
   static void delete_CbmStsReconstructionQa(void *p);
   static void deleteArray_CbmStsReconstructionQa(void *p);
   static void destruct_CbmStsReconstructionQa(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsReconstructionQa*)
   {
      ::CbmStsReconstructionQa *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsReconstructionQa >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsReconstructionQa", ::CbmStsReconstructionQa::Class_Version(), "", 3661,
                  typeid(::CbmStsReconstructionQa), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsReconstructionQa::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsReconstructionQa) );
      instance.SetNew(&new_CbmStsReconstructionQa);
      instance.SetNewArray(&newArray_CbmStsReconstructionQa);
      instance.SetDelete(&delete_CbmStsReconstructionQa);
      instance.SetDeleteArray(&deleteArray_CbmStsReconstructionQa);
      instance.SetDestructor(&destruct_CbmStsReconstructionQa);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsReconstructionQa*)
   {
      return GenerateInitInstanceLocal((::CbmStsReconstructionQa*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsReconstructionQa*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr CbmGeoSts::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmGeoSts::Class_Name()
{
   return "CbmGeoSts";
}

//______________________________________________________________________________
const char *CbmGeoSts::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmGeoSts*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmGeoSts::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmGeoSts*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmGeoSts::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmGeoSts*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmGeoSts::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmGeoSts*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmGeoStsPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmGeoStsPar::Class_Name()
{
   return "CbmGeoStsPar";
}

//______________________________________________________________________________
const char *CbmGeoStsPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmGeoStsPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmGeoStsPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmGeoStsPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmGeoStsPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmGeoStsPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmGeoStsPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmGeoStsPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmSts::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmSts::Class_Name()
{
   return "CbmSts";
}

//______________________________________________________________________________
const char *CbmSts::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmSts*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmSts::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmSts*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmSts::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmSts*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmSts::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmSts*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsContFact::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsContFact::Class_Name()
{
   return "CbmStsContFact";
}

//______________________________________________________________________________
const char *CbmStsContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsContFact*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsContFact*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsContFact*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsContFact*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsDigiPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsDigiPar::Class_Name()
{
   return "CbmStsDigiPar";
}

//______________________________________________________________________________
const char *CbmStsDigiPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigiPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsDigiPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigiPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsDigiPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigiPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsDigiPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigiPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsDigiScheme::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsDigiScheme::Class_Name()
{
   return "CbmStsDigiScheme";
}

//______________________________________________________________________________
const char *CbmStsDigiScheme::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigiScheme*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsDigiScheme::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigiScheme*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsDigiScheme::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigiScheme*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsDigiScheme::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigiScheme*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsIdealDigitize::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsIdealDigitize::Class_Name()
{
   return "CbmStsIdealDigitize";
}

//______________________________________________________________________________
const char *CbmStsIdealDigitize::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsIdealDigitize*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsIdealDigitize::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsIdealDigitize*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsIdealDigitize::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsIdealDigitize*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsIdealDigitize::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsIdealDigitize*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsDigitize::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsDigitize::Class_Name()
{
   return "CbmStsDigitize";
}

//______________________________________________________________________________
const char *CbmStsDigitize::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigitize*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsDigitize::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigitize*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsDigitize::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigitize*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsDigitize::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigitize*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsDigitizeTb::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsDigitizeTb::Class_Name()
{
   return "CbmStsDigitizeTb";
}

//______________________________________________________________________________
const char *CbmStsDigitizeTb::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigitizeTb*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsDigitizeTb::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigitizeTb*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsDigitizeTb::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigitizeTb*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsDigitizeTb::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsDigitizeTb*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsIdealFindHits::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsIdealFindHits::Class_Name()
{
   return "CbmStsIdealFindHits";
}

//______________________________________________________________________________
const char *CbmStsIdealFindHits::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsIdealFindHits*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsIdealFindHits::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsIdealFindHits*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsIdealFindHits::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsIdealFindHits*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsIdealFindHits::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsIdealFindHits*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsClusterFinder::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsClusterFinder::Class_Name()
{
   return "CbmStsClusterFinder";
}

//______________________________________________________________________________
const char *CbmStsClusterFinder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsClusterFinder*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsClusterFinder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsClusterFinder*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsClusterFinder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsClusterFinder*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsClusterFinder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsClusterFinder*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsFindHits::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsFindHits::Class_Name()
{
   return "CbmStsFindHits";
}

//______________________________________________________________________________
const char *CbmStsFindHits::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsFindHits*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsFindHits::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsFindHits*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsFindHits::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsFindHits*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsFindHits::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsFindHits*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsFindTracks::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsFindTracks::Class_Name()
{
   return "CbmStsFindTracks";
}

//______________________________________________________________________________
const char *CbmStsFindTracks::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsFindTracks*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsFindTracks::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsFindTracks*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsFindTracks::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsFindTracks*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsFindTracks::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsFindTracks*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsFindTracksQa::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsFindTracksQa::Class_Name()
{
   return "CbmStsFindTracksQa";
}

//______________________________________________________________________________
const char *CbmStsFindTracksQa::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsFindTracksQa*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsFindTracksQa::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsFindTracksQa*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsFindTracksQa::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsFindTracksQa*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsFindTracksQa::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsFindTracksQa*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsFitTracks::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsFitTracks::Class_Name()
{
   return "CbmStsFitTracks";
}

//______________________________________________________________________________
const char *CbmStsFitTracks::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsFitTracks*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsFitTracks::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsFitTracks*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsFitTracks::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsFitTracks*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsFitTracks::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsFitTracks*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsHitProducerIdeal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsHitProducerIdeal::Class_Name()
{
   return "CbmStsHitProducerIdeal";
}

//______________________________________________________________________________
const char *CbmStsHitProducerIdeal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsHitProducerIdeal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsHitProducerIdeal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsHitProducerIdeal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsHitProducerIdeal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsHitProducerIdeal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsHitProducerIdeal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsHitProducerIdeal*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsIdealMatchHits::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsIdealMatchHits::Class_Name()
{
   return "CbmStsIdealMatchHits";
}

//______________________________________________________________________________
const char *CbmStsIdealMatchHits::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsIdealMatchHits*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsIdealMatchHits::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsIdealMatchHits*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsIdealMatchHits::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsIdealMatchHits*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsIdealMatchHits::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsIdealMatchHits*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsMatchHits::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsMatchHits::Class_Name()
{
   return "CbmStsMatchHits";
}

//______________________________________________________________________________
const char *CbmStsMatchHits::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsMatchHits*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsMatchHits::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsMatchHits*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsMatchHits::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsMatchHits*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsMatchHits::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsMatchHits*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsMatchTracks::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsMatchTracks::Class_Name()
{
   return "CbmStsMatchTracks";
}

//______________________________________________________________________________
const char *CbmStsMatchTracks::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsMatchTracks*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsMatchTracks::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsMatchTracks*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsMatchTracks::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsMatchTracks*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsMatchTracks::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsMatchTracks*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsParAsciiFileIo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsParAsciiFileIo::Class_Name()
{
   return "CbmStsParAsciiFileIo";
}

//______________________________________________________________________________
const char *CbmStsParAsciiFileIo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsParAsciiFileIo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsParAsciiFileIo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsParAsciiFileIo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsParAsciiFileIo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsParAsciiFileIo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsParAsciiFileIo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsParAsciiFileIo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsParRootFileIo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsParRootFileIo::Class_Name()
{
   return "CbmStsParRootFileIo";
}

//______________________________________________________________________________
const char *CbmStsParRootFileIo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsParRootFileIo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsParRootFileIo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsParRootFileIo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsParRootFileIo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsParRootFileIo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsParRootFileIo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsParRootFileIo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsRadTool::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsRadTool::Class_Name()
{
   return "CbmStsRadTool";
}

//______________________________________________________________________________
const char *CbmStsRadTool::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsRadTool*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsRadTool::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsRadTool*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsRadTool::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsRadTool*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsRadTool::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsRadTool*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsSensor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsSensor::Class_Name()
{
   return "CbmStsSensor";
}

//______________________________________________________________________________
const char *CbmStsSensor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsSensor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsSensor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsSensor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsSensor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsSensor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsSensor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsSensor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsSensorDigiPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsSensorDigiPar::Class_Name()
{
   return "CbmStsSensorDigiPar";
}

//______________________________________________________________________________
const char *CbmStsSensorDigiPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsSensorDigiPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsSensorDigiPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsSensorDigiPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsSensorDigiPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsSensorDigiPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsSensorDigiPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsSensorDigiPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsSector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsSector::Class_Name()
{
   return "CbmStsSector";
}

//______________________________________________________________________________
const char *CbmStsSector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsSector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsSector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsSector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsSector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsSector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsSector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsSector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsSectorDigiPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsSectorDigiPar::Class_Name()
{
   return "CbmStsSectorDigiPar";
}

//______________________________________________________________________________
const char *CbmStsSectorDigiPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsSectorDigiPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsSectorDigiPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsSectorDigiPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsSectorDigiPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsSectorDigiPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsSectorDigiPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsSectorDigiPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsStation::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsStation::Class_Name()
{
   return "CbmStsStation";
}

//______________________________________________________________________________
const char *CbmStsStation::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsStation*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsStation::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsStation*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsStation::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsStation*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsStation::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsStation*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsStationDigiPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsStationDigiPar::Class_Name()
{
   return "CbmStsStationDigiPar";
}

//______________________________________________________________________________
const char *CbmStsStationDigiPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsStationDigiPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsStationDigiPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsStationDigiPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsStationDigiPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsStationDigiPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsStationDigiPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsStationDigiPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsTrackFinderIdeal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsTrackFinderIdeal::Class_Name()
{
   return "CbmStsTrackFinderIdeal";
}

//______________________________________________________________________________
const char *CbmStsTrackFinderIdeal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsTrackFinderIdeal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsTrackFinderIdeal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsTrackFinderIdeal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsTrackFinderIdeal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsTrackFinderIdeal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsTrackFinderIdeal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsTrackFinderIdeal*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsTrackFitterIdeal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsTrackFitterIdeal::Class_Name()
{
   return "CbmStsTrackFitterIdeal";
}

//______________________________________________________________________________
const char *CbmStsTrackFitterIdeal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsTrackFitterIdeal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsTrackFitterIdeal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsTrackFitterIdeal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsTrackFitterIdeal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsTrackFitterIdeal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsTrackFitterIdeal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsTrackFitterIdeal*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsSimulationQa::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsSimulationQa::Class_Name()
{
   return "CbmStsSimulationQa";
}

//______________________________________________________________________________
const char *CbmStsSimulationQa::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsSimulationQa*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsSimulationQa::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsSimulationQa*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsSimulationQa::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsSimulationQa*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsSimulationQa::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsSimulationQa*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsFindHitsQa::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsFindHitsQa::Class_Name()
{
   return "CbmStsFindHitsQa";
}

//______________________________________________________________________________
const char *CbmStsFindHitsQa::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsFindHitsQa*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsFindHitsQa::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsFindHitsQa*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsFindHitsQa::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsFindHitsQa*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsFindHitsQa::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsFindHitsQa*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsReconstructionQa::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsReconstructionQa::Class_Name()
{
   return "CbmStsReconstructionQa";
}

//______________________________________________________________________________
const char *CbmStsReconstructionQa::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsReconstructionQa*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsReconstructionQa::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsReconstructionQa*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsReconstructionQa::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsReconstructionQa*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsReconstructionQa::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsReconstructionQa*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void CbmGeoSts::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmGeoSts.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmGeoSts::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmGeoSts::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmGeoSts(void *p) {
      return  p ? new(p) ::CbmGeoSts : new ::CbmGeoSts;
   }
   static void *newArray_CbmGeoSts(Long_t nElements, void *p) {
      return p ? new(p) ::CbmGeoSts[nElements] : new ::CbmGeoSts[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmGeoSts(void *p) {
      delete ((::CbmGeoSts*)p);
   }
   static void deleteArray_CbmGeoSts(void *p) {
      delete [] ((::CbmGeoSts*)p);
   }
   static void destruct_CbmGeoSts(void *p) {
      typedef ::CbmGeoSts current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmGeoSts

//______________________________________________________________________________
void CbmGeoStsPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmGeoStsPar.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairParGenericSet::Streamer(R__b);
      R__b >> fGeoSensNodes;
      R__b >> fGeoPassNodes;
      R__b.CheckByteCount(R__s, R__c, CbmGeoStsPar::IsA());
   } else {
      R__c = R__b.WriteVersion(CbmGeoStsPar::IsA(), kTRUE);
      FairParGenericSet::Streamer(R__b);
      R__b << fGeoSensNodes;
      R__b << fGeoPassNodes;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmGeoStsPar(void *p) {
      return  p ? new(p) ::CbmGeoStsPar : new ::CbmGeoStsPar;
   }
   static void *newArray_CbmGeoStsPar(Long_t nElements, void *p) {
      return p ? new(p) ::CbmGeoStsPar[nElements] : new ::CbmGeoStsPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmGeoStsPar(void *p) {
      delete ((::CbmGeoStsPar*)p);
   }
   static void deleteArray_CbmGeoStsPar(void *p) {
      delete [] ((::CbmGeoStsPar*)p);
   }
   static void destruct_CbmGeoStsPar(void *p) {
      typedef ::CbmGeoStsPar current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CbmGeoStsPar(TBuffer &buf, void *obj) {
      ((::CbmGeoStsPar*)obj)->::CbmGeoStsPar::Streamer(buf);
   }
} // end of namespace ROOT for class ::CbmGeoStsPar

//______________________________________________________________________________
void CbmSts::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmSts.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmSts::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmSts::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmSts(void *p) {
      return  p ? new(p) ::CbmSts : new ::CbmSts;
   }
   static void *newArray_CbmSts(Long_t nElements, void *p) {
      return p ? new(p) ::CbmSts[nElements] : new ::CbmSts[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmSts(void *p) {
      delete ((::CbmSts*)p);
   }
   static void deleteArray_CbmSts(void *p) {
      delete [] ((::CbmSts*)p);
   }
   static void destruct_CbmSts(void *p) {
      typedef ::CbmSts current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmSts

//______________________________________________________________________________
void CbmStsContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsContFact.

   FairContFact::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsContFact(void *p) {
      return  p ? new(p) ::CbmStsContFact : new ::CbmStsContFact;
   }
   static void *newArray_CbmStsContFact(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsContFact[nElements] : new ::CbmStsContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsContFact(void *p) {
      delete ((::CbmStsContFact*)p);
   }
   static void deleteArray_CbmStsContFact(void *p) {
      delete [] ((::CbmStsContFact*)p);
   }
   static void destruct_CbmStsContFact(void *p) {
      typedef ::CbmStsContFact current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CbmStsContFact(TBuffer &buf, void *obj) {
      ((::CbmStsContFact*)obj)->::CbmStsContFact::Streamer(buf);
   }
} // end of namespace ROOT for class ::CbmStsContFact

//______________________________________________________________________________
void CbmStsDigiPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsDigiPar.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairParSet::Streamer(R__b);
      R__b >> fStations;
      R__b.CheckByteCount(R__s, R__c, CbmStsDigiPar::IsA());
   } else {
      R__c = R__b.WriteVersion(CbmStsDigiPar::IsA(), kTRUE);
      FairParSet::Streamer(R__b);
      R__b << fStations;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsDigiPar(void *p) {
      return  p ? new(p) ::CbmStsDigiPar : new ::CbmStsDigiPar;
   }
   static void *newArray_CbmStsDigiPar(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsDigiPar[nElements] : new ::CbmStsDigiPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsDigiPar(void *p) {
      delete ((::CbmStsDigiPar*)p);
   }
   static void deleteArray_CbmStsDigiPar(void *p) {
      delete [] ((::CbmStsDigiPar*)p);
   }
   static void destruct_CbmStsDigiPar(void *p) {
      typedef ::CbmStsDigiPar current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CbmStsDigiPar(TBuffer &buf, void *obj) {
      ((::CbmStsDigiPar*)obj)->::CbmStsDigiPar::Streamer(buf);
   }
} // end of namespace ROOT for class ::CbmStsDigiPar

//______________________________________________________________________________
void CbmStsDigiScheme::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsDigiScheme.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsDigiScheme::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsDigiScheme::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsDigiScheme(void *p) {
      return  p ? new(p) ::CbmStsDigiScheme : new ::CbmStsDigiScheme;
   }
   static void *newArray_CbmStsDigiScheme(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsDigiScheme[nElements] : new ::CbmStsDigiScheme[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsDigiScheme(void *p) {
      delete ((::CbmStsDigiScheme*)p);
   }
   static void deleteArray_CbmStsDigiScheme(void *p) {
      delete [] ((::CbmStsDigiScheme*)p);
   }
   static void destruct_CbmStsDigiScheme(void *p) {
      typedef ::CbmStsDigiScheme current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsDigiScheme

//______________________________________________________________________________
void CbmStsIdealDigitize::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsIdealDigitize.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsIdealDigitize::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsIdealDigitize::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsIdealDigitize(void *p) {
      return  p ? new(p) ::CbmStsIdealDigitize : new ::CbmStsIdealDigitize;
   }
   static void *newArray_CbmStsIdealDigitize(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsIdealDigitize[nElements] : new ::CbmStsIdealDigitize[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsIdealDigitize(void *p) {
      delete ((::CbmStsIdealDigitize*)p);
   }
   static void deleteArray_CbmStsIdealDigitize(void *p) {
      delete [] ((::CbmStsIdealDigitize*)p);
   }
   static void destruct_CbmStsIdealDigitize(void *p) {
      typedef ::CbmStsIdealDigitize current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsIdealDigitize

//______________________________________________________________________________
void CbmStsDigitize::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsDigitize.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsDigitize::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsDigitize::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsDigitize(void *p) {
      return  p ? new(p) ::CbmStsDigitize : new ::CbmStsDigitize;
   }
   static void *newArray_CbmStsDigitize(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsDigitize[nElements] : new ::CbmStsDigitize[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsDigitize(void *p) {
      delete ((::CbmStsDigitize*)p);
   }
   static void deleteArray_CbmStsDigitize(void *p) {
      delete [] ((::CbmStsDigitize*)p);
   }
   static void destruct_CbmStsDigitize(void *p) {
      typedef ::CbmStsDigitize current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsDigitize

//______________________________________________________________________________
void CbmStsDigitizeTb::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsDigitizeTb.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairTask::Streamer(R__b);
      R__b >> fGeoPar;
      R__b >> fDigiPar;
      R__b >> fDigiScheme;
      fPoints->Streamer(R__b);
      fDigis->Streamer(R__b);
      fDigiMatches->Streamer(R__b);
      R__b >> fNDigis;
      R__b >> fNMulti;
      R__b >> fNEvents;
      R__b >> fNPoints;
      R__b >> fNOutside;
      R__b >> fNDigisFront;
      R__b >> fNDigisBack;
      R__b >> fTime;
      R__b >> fStepSize;
      fTimer.Streamer(R__b);
      R__b >> fRealistic;
      R__b >> fPairCreationEnergy;
      R__b >> fFNoiseWidth;
      R__b >> fBNoiseWidth;
      R__b >> fStripDeadTime;
      R__b >> fQMax;
      R__b >> fThreshold;
      R__b >> fNAdcBits;
      R__b >> fNAdcChannels;
      {
         map<Int_t,set<Int_t> > &R__stl =  fFChannelPointsMap;
         R__stl.clear();
         TClass *R__tcl2 = TBuffer::GetClass(typeid(class std::set<int, struct std::less<int>, class std::allocator<int> >));
         if (R__tcl2==0) {
            Error("fFChannelPointsMap streamer","Missing the TClass object for class std::set<int, struct std::less<int>, class std::allocator<int> >!");
            return;
         }
         int R__i, R__n;
         R__b >> R__n;
         for (R__i = 0; R__i < R__n; R__i++) {
            int R__t;
            R__b >> R__t;
            set<int> R__t2;
            R__b.StreamObject(&R__t2,R__tcl2);
            typedef int Value_t;
            std::pair<Value_t const, class std::set<int, struct std::less<int>, class std::allocator<int> > > R__t3(R__t,R__t2);
            R__stl.insert(R__t3);
         }
      }
      {
         map<Int_t,set<Int_t> > &R__stl =  fBChannelPointsMap;
         R__stl.clear();
         TClass *R__tcl2 = TBuffer::GetClass(typeid(class std::set<int, struct std::less<int>, class std::allocator<int> >));
         if (R__tcl2==0) {
            Error("fBChannelPointsMap streamer","Missing the TClass object for class std::set<int, struct std::less<int>, class std::allocator<int> >!");
            return;
         }
         int R__i, R__n;
         R__b >> R__n;
         for (R__i = 0; R__i < R__n; R__i++) {
            int R__t;
            R__b >> R__t;
            set<int> R__t2;
            R__b.StreamObject(&R__t2,R__tcl2);
            typedef int Value_t;
            std::pair<Value_t const, class std::set<int, struct std::less<int>, class std::allocator<int> > > R__t3(R__t,R__t2);
            R__stl.insert(R__t3);
         }
      }
      R__b.CheckByteCount(R__s, R__c, CbmStsDigitizeTb::IsA());
   } else {
      R__c = R__b.WriteVersion(CbmStsDigitizeTb::IsA(), kTRUE);
      FairTask::Streamer(R__b);
      R__b << fGeoPar;
      R__b << fDigiPar;
      R__b << fDigiScheme;
      fPoints->Streamer(R__b);
      fDigis->Streamer(R__b);
      fDigiMatches->Streamer(R__b);
      R__b << fNDigis;
      R__b << fNMulti;
      R__b << fNEvents;
      R__b << fNPoints;
      R__b << fNOutside;
      R__b << fNDigisFront;
      R__b << fNDigisBack;
      R__b << fTime;
      R__b << fStepSize;
      fTimer.Streamer(R__b);
      R__b << fRealistic;
      R__b << fPairCreationEnergy;
      R__b << fFNoiseWidth;
      R__b << fBNoiseWidth;
      R__b << fStripDeadTime;
      R__b << fQMax;
      R__b << fThreshold;
      R__b << fNAdcBits;
      R__b << fNAdcChannels;
      {
         map<Int_t,set<Int_t> > &R__stl =  fFChannelPointsMap;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
         TClass *R__tcl2 = TBuffer::GetClass(typeid(class std::set<int, struct std::less<int>, class std::allocator<int> >));
         if (R__tcl2==0) {
            Error("fFChannelPointsMapstreamer","Missing the TClass object for class std::set<int, struct std::less<int>, class std::allocator<int> >!");
            return;
         }
            map<Int_t,set<Int_t> >::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << ((*R__k).first );
            R__b.StreamObject((set<int>*)&((*R__k).second),R__tcl2);
            }
         }
      }
      {
         map<Int_t,set<Int_t> > &R__stl =  fBChannelPointsMap;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
         TClass *R__tcl2 = TBuffer::GetClass(typeid(class std::set<int, struct std::less<int>, class std::allocator<int> >));
         if (R__tcl2==0) {
            Error("fBChannelPointsMapstreamer","Missing the TClass object for class std::set<int, struct std::less<int>, class std::allocator<int> >!");
            return;
         }
            map<Int_t,set<Int_t> >::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << ((*R__k).first );
            R__b.StreamObject((set<int>*)&((*R__k).second),R__tcl2);
            }
         }
      }
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsDigitizeTb(void *p) {
      return  p ? new(p) ::CbmStsDigitizeTb : new ::CbmStsDigitizeTb;
   }
   static void *newArray_CbmStsDigitizeTb(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsDigitizeTb[nElements] : new ::CbmStsDigitizeTb[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsDigitizeTb(void *p) {
      delete ((::CbmStsDigitizeTb*)p);
   }
   static void deleteArray_CbmStsDigitizeTb(void *p) {
      delete [] ((::CbmStsDigitizeTb*)p);
   }
   static void destruct_CbmStsDigitizeTb(void *p) {
      typedef ::CbmStsDigitizeTb current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CbmStsDigitizeTb(TBuffer &buf, void *obj) {
      ((::CbmStsDigitizeTb*)obj)->::CbmStsDigitizeTb::Streamer(buf);
   }
} // end of namespace ROOT for class ::CbmStsDigitizeTb

//______________________________________________________________________________
void CbmStsIdealFindHits::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsIdealFindHits.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsIdealFindHits::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsIdealFindHits::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsIdealFindHits(void *p) {
      return  p ? new(p) ::CbmStsIdealFindHits : new ::CbmStsIdealFindHits;
   }
   static void *newArray_CbmStsIdealFindHits(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsIdealFindHits[nElements] : new ::CbmStsIdealFindHits[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsIdealFindHits(void *p) {
      delete ((::CbmStsIdealFindHits*)p);
   }
   static void deleteArray_CbmStsIdealFindHits(void *p) {
      delete [] ((::CbmStsIdealFindHits*)p);
   }
   static void destruct_CbmStsIdealFindHits(void *p) {
      typedef ::CbmStsIdealFindHits current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsIdealFindHits

//______________________________________________________________________________
void CbmStsClusterFinder::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsClusterFinder.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsClusterFinder::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsClusterFinder::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsClusterFinder(void *p) {
      return  p ? new(p) ::CbmStsClusterFinder : new ::CbmStsClusterFinder;
   }
   static void *newArray_CbmStsClusterFinder(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsClusterFinder[nElements] : new ::CbmStsClusterFinder[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsClusterFinder(void *p) {
      delete ((::CbmStsClusterFinder*)p);
   }
   static void deleteArray_CbmStsClusterFinder(void *p) {
      delete [] ((::CbmStsClusterFinder*)p);
   }
   static void destruct_CbmStsClusterFinder(void *p) {
      typedef ::CbmStsClusterFinder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsClusterFinder

//______________________________________________________________________________
void CbmStsFindHits::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsFindHits.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsFindHits::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsFindHits::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsFindHits(void *p) {
      return  p ? new(p) ::CbmStsFindHits : new ::CbmStsFindHits;
   }
   static void *newArray_CbmStsFindHits(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsFindHits[nElements] : new ::CbmStsFindHits[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsFindHits(void *p) {
      delete ((::CbmStsFindHits*)p);
   }
   static void deleteArray_CbmStsFindHits(void *p) {
      delete [] ((::CbmStsFindHits*)p);
   }
   static void destruct_CbmStsFindHits(void *p) {
      typedef ::CbmStsFindHits current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsFindHits

//______________________________________________________________________________
void CbmStsFindTracks::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsFindTracks.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsFindTracks::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsFindTracks::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsFindTracks(void *p) {
      return  p ? new(p) ::CbmStsFindTracks : new ::CbmStsFindTracks;
   }
   static void *newArray_CbmStsFindTracks(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsFindTracks[nElements] : new ::CbmStsFindTracks[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsFindTracks(void *p) {
      delete ((::CbmStsFindTracks*)p);
   }
   static void deleteArray_CbmStsFindTracks(void *p) {
      delete [] ((::CbmStsFindTracks*)p);
   }
   static void destruct_CbmStsFindTracks(void *p) {
      typedef ::CbmStsFindTracks current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsFindTracks

//______________________________________________________________________________
void CbmStsFindTracksQa::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsFindTracksQa.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsFindTracksQa::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsFindTracksQa::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsFindTracksQa(void *p) {
      return  p ? new(p) ::CbmStsFindTracksQa : new ::CbmStsFindTracksQa;
   }
   static void *newArray_CbmStsFindTracksQa(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsFindTracksQa[nElements] : new ::CbmStsFindTracksQa[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsFindTracksQa(void *p) {
      delete ((::CbmStsFindTracksQa*)p);
   }
   static void deleteArray_CbmStsFindTracksQa(void *p) {
      delete [] ((::CbmStsFindTracksQa*)p);
   }
   static void destruct_CbmStsFindTracksQa(void *p) {
      typedef ::CbmStsFindTracksQa current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsFindTracksQa

//______________________________________________________________________________
void CbmStsFitTracks::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsFitTracks.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsFitTracks::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsFitTracks::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsFitTracks(void *p) {
      return  p ? new(p) ::CbmStsFitTracks : new ::CbmStsFitTracks;
   }
   static void *newArray_CbmStsFitTracks(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsFitTracks[nElements] : new ::CbmStsFitTracks[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsFitTracks(void *p) {
      delete ((::CbmStsFitTracks*)p);
   }
   static void deleteArray_CbmStsFitTracks(void *p) {
      delete [] ((::CbmStsFitTracks*)p);
   }
   static void destruct_CbmStsFitTracks(void *p) {
      typedef ::CbmStsFitTracks current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsFitTracks

//______________________________________________________________________________
void CbmStsHitProducerIdeal::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsHitProducerIdeal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsHitProducerIdeal::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsHitProducerIdeal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsHitProducerIdeal(void *p) {
      return  p ? new(p) ::CbmStsHitProducerIdeal : new ::CbmStsHitProducerIdeal;
   }
   static void *newArray_CbmStsHitProducerIdeal(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsHitProducerIdeal[nElements] : new ::CbmStsHitProducerIdeal[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsHitProducerIdeal(void *p) {
      delete ((::CbmStsHitProducerIdeal*)p);
   }
   static void deleteArray_CbmStsHitProducerIdeal(void *p) {
      delete [] ((::CbmStsHitProducerIdeal*)p);
   }
   static void destruct_CbmStsHitProducerIdeal(void *p) {
      typedef ::CbmStsHitProducerIdeal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsHitProducerIdeal

//______________________________________________________________________________
void CbmStsIdealMatchHits::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsIdealMatchHits.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsIdealMatchHits::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsIdealMatchHits::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsIdealMatchHits(void *p) {
      return  p ? new(p) ::CbmStsIdealMatchHits : new ::CbmStsIdealMatchHits;
   }
   static void *newArray_CbmStsIdealMatchHits(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsIdealMatchHits[nElements] : new ::CbmStsIdealMatchHits[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsIdealMatchHits(void *p) {
      delete ((::CbmStsIdealMatchHits*)p);
   }
   static void deleteArray_CbmStsIdealMatchHits(void *p) {
      delete [] ((::CbmStsIdealMatchHits*)p);
   }
   static void destruct_CbmStsIdealMatchHits(void *p) {
      typedef ::CbmStsIdealMatchHits current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsIdealMatchHits

//______________________________________________________________________________
void CbmStsMatchHits::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsMatchHits.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsMatchHits::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsMatchHits::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsMatchHits(void *p) {
      return  p ? new(p) ::CbmStsMatchHits : new ::CbmStsMatchHits;
   }
   static void *newArray_CbmStsMatchHits(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsMatchHits[nElements] : new ::CbmStsMatchHits[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsMatchHits(void *p) {
      delete ((::CbmStsMatchHits*)p);
   }
   static void deleteArray_CbmStsMatchHits(void *p) {
      delete [] ((::CbmStsMatchHits*)p);
   }
   static void destruct_CbmStsMatchHits(void *p) {
      typedef ::CbmStsMatchHits current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsMatchHits

//______________________________________________________________________________
void CbmStsMatchTracks::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsMatchTracks.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsMatchTracks::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsMatchTracks::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsMatchTracks(void *p) {
      return  p ? new(p) ::CbmStsMatchTracks : new ::CbmStsMatchTracks;
   }
   static void *newArray_CbmStsMatchTracks(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsMatchTracks[nElements] : new ::CbmStsMatchTracks[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsMatchTracks(void *p) {
      delete ((::CbmStsMatchTracks*)p);
   }
   static void deleteArray_CbmStsMatchTracks(void *p) {
      delete [] ((::CbmStsMatchTracks*)p);
   }
   static void destruct_CbmStsMatchTracks(void *p) {
      typedef ::CbmStsMatchTracks current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsMatchTracks

//______________________________________________________________________________
void CbmStsParAsciiFileIo::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsParAsciiFileIo.

   FairDetParAsciiFileIo::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_CbmStsParAsciiFileIo(void *p) {
      delete ((::CbmStsParAsciiFileIo*)p);
   }
   static void deleteArray_CbmStsParAsciiFileIo(void *p) {
      delete [] ((::CbmStsParAsciiFileIo*)p);
   }
   static void destruct_CbmStsParAsciiFileIo(void *p) {
      typedef ::CbmStsParAsciiFileIo current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CbmStsParAsciiFileIo(TBuffer &buf, void *obj) {
      ((::CbmStsParAsciiFileIo*)obj)->::CbmStsParAsciiFileIo::Streamer(buf);
   }
} // end of namespace ROOT for class ::CbmStsParAsciiFileIo

//______________________________________________________________________________
void CbmStsParRootFileIo::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsParRootFileIo.

   FairDetParRootFileIo::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_CbmStsParRootFileIo(void *p) {
      delete ((::CbmStsParRootFileIo*)p);
   }
   static void deleteArray_CbmStsParRootFileIo(void *p) {
      delete [] ((::CbmStsParRootFileIo*)p);
   }
   static void destruct_CbmStsParRootFileIo(void *p) {
      typedef ::CbmStsParRootFileIo current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CbmStsParRootFileIo(TBuffer &buf, void *obj) {
      ((::CbmStsParRootFileIo*)obj)->::CbmStsParRootFileIo::Streamer(buf);
   }
} // end of namespace ROOT for class ::CbmStsParRootFileIo

//______________________________________________________________________________
void CbmStsRadTool::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsRadTool.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      {
         map<Double_t,Double_t> &R__stl =  niel_neutron;
         R__stl.clear();
         int R__i, R__n;
         R__b >> R__n;
         for (R__i = 0; R__i < R__n; R__i++) {
            double R__t;
            R__b >> R__t;
            double R__t2;
            R__b >> R__t2;
            typedef double Value_t;
            std::pair<Value_t const, double > R__t3(R__t,R__t2);
            R__stl.insert(R__t3);
         }
      }
      {
         map<Double_t,Double_t> &R__stl =  niel_proton;
         R__stl.clear();
         int R__i, R__n;
         R__b >> R__n;
         for (R__i = 0; R__i < R__n; R__i++) {
            double R__t;
            R__b >> R__t;
            double R__t2;
            R__b >> R__t2;
            typedef double Value_t;
            std::pair<Value_t const, double > R__t3(R__t,R__t2);
            R__stl.insert(R__t3);
         }
      }
      {
         map<Double_t,Double_t> &R__stl =  niel_pion;
         R__stl.clear();
         int R__i, R__n;
         R__b >> R__n;
         for (R__i = 0; R__i < R__n; R__i++) {
            double R__t;
            R__b >> R__t;
            double R__t2;
            R__b >> R__t2;
            typedef double Value_t;
            std::pair<Value_t const, double > R__t3(R__t,R__t2);
            R__stl.insert(R__t3);
         }
      }
      {
         map<Double_t,Double_t> &R__stl =  niel_electron;
         R__stl.clear();
         int R__i, R__n;
         R__b >> R__n;
         for (R__i = 0; R__i < R__n; R__i++) {
            double R__t;
            R__b >> R__t;
            double R__t2;
            R__b >> R__t2;
            typedef double Value_t;
            std::pair<Value_t const, double > R__t3(R__t,R__t2);
            R__stl.insert(R__t3);
         }
      }
      R__b >> fIAlpha;
      R__b >> fEGap0;
      R__b >> fEGapAlpha;
      R__b >> fEGapBeta;
      R__b >> fNeff0;
      R__b >> fNeffC;
      R__b >> fNeffGc;
      R__b >> fEpsilon;
      R__b.CheckByteCount(R__s, R__c, CbmStsRadTool::IsA());
   } else {
      R__c = R__b.WriteVersion(CbmStsRadTool::IsA(), kTRUE);
      TObject::Streamer(R__b);
      {
         map<Double_t,Double_t> &R__stl =  niel_neutron;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            map<Double_t,Double_t>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << ((*R__k).first );
            R__b << ((*R__k).second);
            }
         }
      }
      {
         map<Double_t,Double_t> &R__stl =  niel_proton;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            map<Double_t,Double_t>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << ((*R__k).first );
            R__b << ((*R__k).second);
            }
         }
      }
      {
         map<Double_t,Double_t> &R__stl =  niel_pion;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            map<Double_t,Double_t>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << ((*R__k).first );
            R__b << ((*R__k).second);
            }
         }
      }
      {
         map<Double_t,Double_t> &R__stl =  niel_electron;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            map<Double_t,Double_t>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << ((*R__k).first );
            R__b << ((*R__k).second);
            }
         }
      }
      R__b << fIAlpha;
      R__b << fEGap0;
      R__b << fEGapAlpha;
      R__b << fEGapBeta;
      R__b << fNeff0;
      R__b << fNeffC;
      R__b << fNeffGc;
      R__b << fEpsilon;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsRadTool(void *p) {
      return  p ? new(p) ::CbmStsRadTool : new ::CbmStsRadTool;
   }
   static void *newArray_CbmStsRadTool(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsRadTool[nElements] : new ::CbmStsRadTool[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsRadTool(void *p) {
      delete ((::CbmStsRadTool*)p);
   }
   static void deleteArray_CbmStsRadTool(void *p) {
      delete [] ((::CbmStsRadTool*)p);
   }
   static void destruct_CbmStsRadTool(void *p) {
      typedef ::CbmStsRadTool current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CbmStsRadTool(TBuffer &buf, void *obj) {
      ((::CbmStsRadTool*)obj)->::CbmStsRadTool::Streamer(buf);
   }
} // end of namespace ROOT for class ::CbmStsRadTool

//______________________________________________________________________________
void CbmStsSensor::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsSensor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsSensor::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsSensor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsSensor(void *p) {
      return  p ? new(p) ::CbmStsSensor : new ::CbmStsSensor;
   }
   static void *newArray_CbmStsSensor(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsSensor[nElements] : new ::CbmStsSensor[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsSensor(void *p) {
      delete ((::CbmStsSensor*)p);
   }
   static void deleteArray_CbmStsSensor(void *p) {
      delete [] ((::CbmStsSensor*)p);
   }
   static void destruct_CbmStsSensor(void *p) {
      typedef ::CbmStsSensor current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsSensor

//______________________________________________________________________________
void CbmStsSensorDigiPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsSensorDigiPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsSensorDigiPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsSensorDigiPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsSensorDigiPar(void *p) {
      return  p ? new(p) ::CbmStsSensorDigiPar : new ::CbmStsSensorDigiPar;
   }
   static void *newArray_CbmStsSensorDigiPar(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsSensorDigiPar[nElements] : new ::CbmStsSensorDigiPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsSensorDigiPar(void *p) {
      delete ((::CbmStsSensorDigiPar*)p);
   }
   static void deleteArray_CbmStsSensorDigiPar(void *p) {
      delete [] ((::CbmStsSensorDigiPar*)p);
   }
   static void destruct_CbmStsSensorDigiPar(void *p) {
      typedef ::CbmStsSensorDigiPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsSensorDigiPar

//______________________________________________________________________________
void CbmStsSector::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsSector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsSector::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsSector::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsSector(void *p) {
      return  p ? new(p) ::CbmStsSector : new ::CbmStsSector;
   }
   static void *newArray_CbmStsSector(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsSector[nElements] : new ::CbmStsSector[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsSector(void *p) {
      delete ((::CbmStsSector*)p);
   }
   static void deleteArray_CbmStsSector(void *p) {
      delete [] ((::CbmStsSector*)p);
   }
   static void destruct_CbmStsSector(void *p) {
      typedef ::CbmStsSector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsSector

//______________________________________________________________________________
void CbmStsSectorDigiPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsSectorDigiPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsSectorDigiPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsSectorDigiPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsSectorDigiPar(void *p) {
      return  p ? new(p) ::CbmStsSectorDigiPar : new ::CbmStsSectorDigiPar;
   }
   static void *newArray_CbmStsSectorDigiPar(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsSectorDigiPar[nElements] : new ::CbmStsSectorDigiPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsSectorDigiPar(void *p) {
      delete ((::CbmStsSectorDigiPar*)p);
   }
   static void deleteArray_CbmStsSectorDigiPar(void *p) {
      delete [] ((::CbmStsSectorDigiPar*)p);
   }
   static void destruct_CbmStsSectorDigiPar(void *p) {
      typedef ::CbmStsSectorDigiPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsSectorDigiPar

//______________________________________________________________________________
void CbmStsStation::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsStation.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsStation::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsStation::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsStation(void *p) {
      return  p ? new(p) ::CbmStsStation : new ::CbmStsStation;
   }
   static void *newArray_CbmStsStation(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsStation[nElements] : new ::CbmStsStation[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsStation(void *p) {
      delete ((::CbmStsStation*)p);
   }
   static void deleteArray_CbmStsStation(void *p) {
      delete [] ((::CbmStsStation*)p);
   }
   static void destruct_CbmStsStation(void *p) {
      typedef ::CbmStsStation current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsStation

//______________________________________________________________________________
void CbmStsStationDigiPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsStationDigiPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsStationDigiPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsStationDigiPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsStationDigiPar(void *p) {
      return  p ? new(p) ::CbmStsStationDigiPar : new ::CbmStsStationDigiPar;
   }
   static void *newArray_CbmStsStationDigiPar(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsStationDigiPar[nElements] : new ::CbmStsStationDigiPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsStationDigiPar(void *p) {
      delete ((::CbmStsStationDigiPar*)p);
   }
   static void deleteArray_CbmStsStationDigiPar(void *p) {
      delete [] ((::CbmStsStationDigiPar*)p);
   }
   static void destruct_CbmStsStationDigiPar(void *p) {
      typedef ::CbmStsStationDigiPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsStationDigiPar

//______________________________________________________________________________
void CbmStsTrackFinderIdeal::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsTrackFinderIdeal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsTrackFinderIdeal::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsTrackFinderIdeal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsTrackFinderIdeal(void *p) {
      return  p ? new(p) ::CbmStsTrackFinderIdeal : new ::CbmStsTrackFinderIdeal;
   }
   static void *newArray_CbmStsTrackFinderIdeal(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsTrackFinderIdeal[nElements] : new ::CbmStsTrackFinderIdeal[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsTrackFinderIdeal(void *p) {
      delete ((::CbmStsTrackFinderIdeal*)p);
   }
   static void deleteArray_CbmStsTrackFinderIdeal(void *p) {
      delete [] ((::CbmStsTrackFinderIdeal*)p);
   }
   static void destruct_CbmStsTrackFinderIdeal(void *p) {
      typedef ::CbmStsTrackFinderIdeal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsTrackFinderIdeal

//______________________________________________________________________________
void CbmStsTrackFitterIdeal::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsTrackFitterIdeal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsTrackFitterIdeal::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsTrackFitterIdeal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsTrackFitterIdeal(void *p) {
      return  p ? new(p) ::CbmStsTrackFitterIdeal : new ::CbmStsTrackFitterIdeal;
   }
   static void *newArray_CbmStsTrackFitterIdeal(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsTrackFitterIdeal[nElements] : new ::CbmStsTrackFitterIdeal[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsTrackFitterIdeal(void *p) {
      delete ((::CbmStsTrackFitterIdeal*)p);
   }
   static void deleteArray_CbmStsTrackFitterIdeal(void *p) {
      delete [] ((::CbmStsTrackFitterIdeal*)p);
   }
   static void destruct_CbmStsTrackFitterIdeal(void *p) {
      typedef ::CbmStsTrackFitterIdeal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsTrackFitterIdeal

//______________________________________________________________________________
void CbmStsSimulationQa::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsSimulationQa.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsSimulationQa::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsSimulationQa::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsSimulationQa(void *p) {
      return  p ? new(p) ::CbmStsSimulationQa : new ::CbmStsSimulationQa;
   }
   static void *newArray_CbmStsSimulationQa(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsSimulationQa[nElements] : new ::CbmStsSimulationQa[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsSimulationQa(void *p) {
      delete ((::CbmStsSimulationQa*)p);
   }
   static void deleteArray_CbmStsSimulationQa(void *p) {
      delete [] ((::CbmStsSimulationQa*)p);
   }
   static void destruct_CbmStsSimulationQa(void *p) {
      typedef ::CbmStsSimulationQa current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsSimulationQa

//______________________________________________________________________________
void CbmStsFindHitsQa::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsFindHitsQa.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsFindHitsQa::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsFindHitsQa::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsFindHitsQa(void *p) {
      return  p ? new(p) ::CbmStsFindHitsQa : new ::CbmStsFindHitsQa;
   }
   static void *newArray_CbmStsFindHitsQa(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsFindHitsQa[nElements] : new ::CbmStsFindHitsQa[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsFindHitsQa(void *p) {
      delete ((::CbmStsFindHitsQa*)p);
   }
   static void deleteArray_CbmStsFindHitsQa(void *p) {
      delete [] ((::CbmStsFindHitsQa*)p);
   }
   static void destruct_CbmStsFindHitsQa(void *p) {
      typedef ::CbmStsFindHitsQa current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsFindHitsQa

//______________________________________________________________________________
void CbmStsReconstructionQa::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsReconstructionQa.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsReconstructionQa::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsReconstructionQa::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsReconstructionQa(void *p) {
      return  p ? new(p) ::CbmStsReconstructionQa : new ::CbmStsReconstructionQa;
   }
   static void *newArray_CbmStsReconstructionQa(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsReconstructionQa[nElements] : new ::CbmStsReconstructionQa[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsReconstructionQa(void *p) {
      delete ((::CbmStsReconstructionQa*)p);
   }
   static void deleteArray_CbmStsReconstructionQa(void *p) {
      delete [] ((::CbmStsReconstructionQa*)p);
   }
   static void destruct_CbmStsReconstructionQa(void *p) {
      typedef ::CbmStsReconstructionQa current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsReconstructionQa

namespace ROOT {
   static TClass *setlEintgR_Dictionary();
   static void setlEintgR_TClassManip(TClass*);
   static void *new_setlEintgR(void *p = 0);
   static void *newArray_setlEintgR(Long_t size, void *p);
   static void delete_setlEintgR(void *p);
   static void deleteArray_setlEintgR(void *p);
   static void destruct_setlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const set<int>*)
   {
      set<int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(set<int>));
      static ::ROOT::TGenericClassInfo 
         instance("set<int>", -2, "set", 93,
                  typeid(set<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &setlEintgR_Dictionary, isa_proxy, 0,
                  sizeof(set<int>) );
      instance.SetNew(&new_setlEintgR);
      instance.SetNewArray(&newArray_setlEintgR);
      instance.SetDelete(&delete_setlEintgR);
      instance.SetDeleteArray(&deleteArray_setlEintgR);
      instance.SetDestructor(&destruct_setlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< set<int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const set<int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *setlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const set<int>*)0x0)->GetClass();
      setlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void setlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_setlEintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) set<int> : new set<int>;
   }
   static void *newArray_setlEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) set<int>[nElements] : new set<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_setlEintgR(void *p) {
      delete ((set<int>*)p);
   }
   static void deleteArray_setlEintgR(void *p) {
      delete [] ((set<int>*)p);
   }
   static void destruct_setlEintgR(void *p) {
      typedef set<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class set<int>

namespace ROOT {
   static TClass *maplEintcOsetlEintgRsPgR_Dictionary();
   static void maplEintcOsetlEintgRsPgR_TClassManip(TClass*);
   static void *new_maplEintcOsetlEintgRsPgR(void *p = 0);
   static void *newArray_maplEintcOsetlEintgRsPgR(Long_t size, void *p);
   static void delete_maplEintcOsetlEintgRsPgR(void *p);
   static void deleteArray_maplEintcOsetlEintgRsPgR(void *p);
   static void destruct_maplEintcOsetlEintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,set<int> >*)
   {
      map<int,set<int> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,set<int> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,set<int> >", -2, "map", 99,
                  typeid(map<int,set<int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOsetlEintgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,set<int> >) );
      instance.SetNew(&new_maplEintcOsetlEintgRsPgR);
      instance.SetNewArray(&newArray_maplEintcOsetlEintgRsPgR);
      instance.SetDelete(&delete_maplEintcOsetlEintgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOsetlEintgRsPgR);
      instance.SetDestructor(&destruct_maplEintcOsetlEintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,set<int> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,set<int> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOsetlEintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,set<int> >*)0x0)->GetClass();
      maplEintcOsetlEintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOsetlEintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOsetlEintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,set<int> > : new map<int,set<int> >;
   }
   static void *newArray_maplEintcOsetlEintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,set<int> >[nElements] : new map<int,set<int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOsetlEintgRsPgR(void *p) {
      delete ((map<int,set<int> >*)p);
   }
   static void deleteArray_maplEintcOsetlEintgRsPgR(void *p) {
      delete [] ((map<int,set<int> >*)p);
   }
   static void destruct_maplEintcOsetlEintgRsPgR(void *p) {
      typedef map<int,set<int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,set<int> >

namespace ROOT {
   static TClass *maplEintcOintgR_Dictionary();
   static void maplEintcOintgR_TClassManip(TClass*);
   static void *new_maplEintcOintgR(void *p = 0);
   static void *newArray_maplEintcOintgR(Long_t size, void *p);
   static void delete_maplEintcOintgR(void *p);
   static void deleteArray_maplEintcOintgR(void *p);
   static void destruct_maplEintcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,int>*)
   {
      map<int,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,int>", -2, "map", 99,
                  typeid(map<int,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,int>) );
      instance.SetNew(&new_maplEintcOintgR);
      instance.SetNewArray(&newArray_maplEintcOintgR);
      instance.SetDelete(&delete_maplEintcOintgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOintgR);
      instance.SetDestructor(&destruct_maplEintcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,int>*)0x0)->GetClass();
      maplEintcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,int> : new map<int,int>;
   }
   static void *newArray_maplEintcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,int>[nElements] : new map<int,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOintgR(void *p) {
      delete ((map<int,int>*)p);
   }
   static void deleteArray_maplEintcOintgR(void *p) {
      delete [] ((map<int,int>*)p);
   }
   static void destruct_maplEintcOintgR(void *p) {
      typedef map<int,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,int>

namespace ROOT {
   static TClass *maplEintcOdoublegR_Dictionary();
   static void maplEintcOdoublegR_TClassManip(TClass*);
   static void *new_maplEintcOdoublegR(void *p = 0);
   static void *newArray_maplEintcOdoublegR(Long_t size, void *p);
   static void delete_maplEintcOdoublegR(void *p);
   static void deleteArray_maplEintcOdoublegR(void *p);
   static void destruct_maplEintcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,double>*)
   {
      map<int,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,double>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,double>", -2, "map", 99,
                  typeid(map<int,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,double>) );
      instance.SetNew(&new_maplEintcOdoublegR);
      instance.SetNewArray(&newArray_maplEintcOdoublegR);
      instance.SetDelete(&delete_maplEintcOdoublegR);
      instance.SetDeleteArray(&deleteArray_maplEintcOdoublegR);
      instance.SetDestructor(&destruct_maplEintcOdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,double> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,double>*)0x0)->GetClass();
      maplEintcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,double> : new map<int,double>;
   }
   static void *newArray_maplEintcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,double>[nElements] : new map<int,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOdoublegR(void *p) {
      delete ((map<int,double>*)p);
   }
   static void deleteArray_maplEintcOdoublegR(void *p) {
      delete [] ((map<int,double>*)p);
   }
   static void destruct_maplEintcOdoublegR(void *p) {
      typedef map<int,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,double>

namespace ROOT {
   static TClass *maplEdoublecOdoublegR_Dictionary();
   static void maplEdoublecOdoublegR_TClassManip(TClass*);
   static void *new_maplEdoublecOdoublegR(void *p = 0);
   static void *newArray_maplEdoublecOdoublegR(Long_t size, void *p);
   static void delete_maplEdoublecOdoublegR(void *p);
   static void deleteArray_maplEdoublecOdoublegR(void *p);
   static void destruct_maplEdoublecOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<double,double>*)
   {
      map<double,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<double,double>));
      static ::ROOT::TGenericClassInfo 
         instance("map<double,double>", -2, "map", 99,
                  typeid(map<double,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEdoublecOdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(map<double,double>) );
      instance.SetNew(&new_maplEdoublecOdoublegR);
      instance.SetNewArray(&newArray_maplEdoublecOdoublegR);
      instance.SetDelete(&delete_maplEdoublecOdoublegR);
      instance.SetDeleteArray(&deleteArray_maplEdoublecOdoublegR);
      instance.SetDestructor(&destruct_maplEdoublecOdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<double,double> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<double,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEdoublecOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<double,double>*)0x0)->GetClass();
      maplEdoublecOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void maplEdoublecOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEdoublecOdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<double,double> : new map<double,double>;
   }
   static void *newArray_maplEdoublecOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<double,double>[nElements] : new map<double,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEdoublecOdoublegR(void *p) {
      delete ((map<double,double>*)p);
   }
   static void deleteArray_maplEdoublecOdoublegR(void *p) {
      delete [] ((map<double,double>*)p);
   }
   static void destruct_maplEdoublecOdoublegR(void *p) {
      typedef map<double,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<double,double>

namespace ROOT {
   static TClass *maplETStringcOintgR_Dictionary();
   static void maplETStringcOintgR_TClassManip(TClass*);
   static void *new_maplETStringcOintgR(void *p = 0);
   static void *newArray_maplETStringcOintgR(Long_t size, void *p);
   static void delete_maplETStringcOintgR(void *p);
   static void deleteArray_maplETStringcOintgR(void *p);
   static void destruct_maplETStringcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TString,int>*)
   {
      map<TString,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TString,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TString,int>", -2, "map", 99,
                  typeid(map<TString,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETStringcOintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TString,int>) );
      instance.SetNew(&new_maplETStringcOintgR);
      instance.SetNewArray(&newArray_maplETStringcOintgR);
      instance.SetDelete(&delete_maplETStringcOintgR);
      instance.SetDeleteArray(&deleteArray_maplETStringcOintgR);
      instance.SetDestructor(&destruct_maplETStringcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TString,int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TString,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETStringcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TString,int>*)0x0)->GetClass();
      maplETStringcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETStringcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETStringcOintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,int> : new map<TString,int>;
   }
   static void *newArray_maplETStringcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,int>[nElements] : new map<TString,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETStringcOintgR(void *p) {
      delete ((map<TString,int>*)p);
   }
   static void deleteArray_maplETStringcOintgR(void *p) {
      delete [] ((map<TString,int>*)p);
   }
   static void destruct_maplETStringcOintgR(void *p) {
      typedef map<TString,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TString,int>

namespace ROOT {
   static TClass *maplETStringcOCbmStsSensormUgR_Dictionary();
   static void maplETStringcOCbmStsSensormUgR_TClassManip(TClass*);
   static void *new_maplETStringcOCbmStsSensormUgR(void *p = 0);
   static void *newArray_maplETStringcOCbmStsSensormUgR(Long_t size, void *p);
   static void delete_maplETStringcOCbmStsSensormUgR(void *p);
   static void deleteArray_maplETStringcOCbmStsSensormUgR(void *p);
   static void destruct_maplETStringcOCbmStsSensormUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TString,CbmStsSensor*>*)
   {
      map<TString,CbmStsSensor*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TString,CbmStsSensor*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TString,CbmStsSensor*>", -2, "map", 99,
                  typeid(map<TString,CbmStsSensor*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETStringcOCbmStsSensormUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TString,CbmStsSensor*>) );
      instance.SetNew(&new_maplETStringcOCbmStsSensormUgR);
      instance.SetNewArray(&newArray_maplETStringcOCbmStsSensormUgR);
      instance.SetDelete(&delete_maplETStringcOCbmStsSensormUgR);
      instance.SetDeleteArray(&deleteArray_maplETStringcOCbmStsSensormUgR);
      instance.SetDestructor(&destruct_maplETStringcOCbmStsSensormUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TString,CbmStsSensor*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TString,CbmStsSensor*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETStringcOCbmStsSensormUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TString,CbmStsSensor*>*)0x0)->GetClass();
      maplETStringcOCbmStsSensormUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETStringcOCbmStsSensormUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETStringcOCbmStsSensormUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,CbmStsSensor*> : new map<TString,CbmStsSensor*>;
   }
   static void *newArray_maplETStringcOCbmStsSensormUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,CbmStsSensor*>[nElements] : new map<TString,CbmStsSensor*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETStringcOCbmStsSensormUgR(void *p) {
      delete ((map<TString,CbmStsSensor*>*)p);
   }
   static void deleteArray_maplETStringcOCbmStsSensormUgR(void *p) {
      delete [] ((map<TString,CbmStsSensor*>*)p);
   }
   static void destruct_maplETStringcOCbmStsSensormUgR(void *p) {
      typedef map<TString,CbmStsSensor*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TString,CbmStsSensor*>

namespace ROOT {
   static TClass *maplECbmStsSensormUcOsetlEintgRsPgR_Dictionary();
   static void maplECbmStsSensormUcOsetlEintgRsPgR_TClassManip(TClass*);
   static void *new_maplECbmStsSensormUcOsetlEintgRsPgR(void *p = 0);
   static void *newArray_maplECbmStsSensormUcOsetlEintgRsPgR(Long_t size, void *p);
   static void delete_maplECbmStsSensormUcOsetlEintgRsPgR(void *p);
   static void deleteArray_maplECbmStsSensormUcOsetlEintgRsPgR(void *p);
   static void destruct_maplECbmStsSensormUcOsetlEintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<CbmStsSensor*,set<int> >*)
   {
      map<CbmStsSensor*,set<int> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<CbmStsSensor*,set<int> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<CbmStsSensor*,set<int> >", -2, "map", 99,
                  typeid(map<CbmStsSensor*,set<int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplECbmStsSensormUcOsetlEintgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<CbmStsSensor*,set<int> >) );
      instance.SetNew(&new_maplECbmStsSensormUcOsetlEintgRsPgR);
      instance.SetNewArray(&newArray_maplECbmStsSensormUcOsetlEintgRsPgR);
      instance.SetDelete(&delete_maplECbmStsSensormUcOsetlEintgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplECbmStsSensormUcOsetlEintgRsPgR);
      instance.SetDestructor(&destruct_maplECbmStsSensormUcOsetlEintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<CbmStsSensor*,set<int> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<CbmStsSensor*,set<int> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplECbmStsSensormUcOsetlEintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<CbmStsSensor*,set<int> >*)0x0)->GetClass();
      maplECbmStsSensormUcOsetlEintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplECbmStsSensormUcOsetlEintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplECbmStsSensormUcOsetlEintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<CbmStsSensor*,set<int> > : new map<CbmStsSensor*,set<int> >;
   }
   static void *newArray_maplECbmStsSensormUcOsetlEintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<CbmStsSensor*,set<int> >[nElements] : new map<CbmStsSensor*,set<int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplECbmStsSensormUcOsetlEintgRsPgR(void *p) {
      delete ((map<CbmStsSensor*,set<int> >*)p);
   }
   static void deleteArray_maplECbmStsSensormUcOsetlEintgRsPgR(void *p) {
      delete [] ((map<CbmStsSensor*,set<int> >*)p);
   }
   static void destruct_maplECbmStsSensormUcOsetlEintgRsPgR(void *p) {
      typedef map<CbmStsSensor*,set<int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<CbmStsSensor*,set<int> >

namespace ROOT {
   static TClass *maplECbmStsSectormUcOsetlEintgRsPgR_Dictionary();
   static void maplECbmStsSectormUcOsetlEintgRsPgR_TClassManip(TClass*);
   static void *new_maplECbmStsSectormUcOsetlEintgRsPgR(void *p = 0);
   static void *newArray_maplECbmStsSectormUcOsetlEintgRsPgR(Long_t size, void *p);
   static void delete_maplECbmStsSectormUcOsetlEintgRsPgR(void *p);
   static void deleteArray_maplECbmStsSectormUcOsetlEintgRsPgR(void *p);
   static void destruct_maplECbmStsSectormUcOsetlEintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<CbmStsSector*,set<int> >*)
   {
      map<CbmStsSector*,set<int> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<CbmStsSector*,set<int> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<CbmStsSector*,set<int> >", -2, "map", 99,
                  typeid(map<CbmStsSector*,set<int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplECbmStsSectormUcOsetlEintgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<CbmStsSector*,set<int> >) );
      instance.SetNew(&new_maplECbmStsSectormUcOsetlEintgRsPgR);
      instance.SetNewArray(&newArray_maplECbmStsSectormUcOsetlEintgRsPgR);
      instance.SetDelete(&delete_maplECbmStsSectormUcOsetlEintgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplECbmStsSectormUcOsetlEintgRsPgR);
      instance.SetDestructor(&destruct_maplECbmStsSectormUcOsetlEintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<CbmStsSector*,set<int> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<CbmStsSector*,set<int> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplECbmStsSectormUcOsetlEintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<CbmStsSector*,set<int> >*)0x0)->GetClass();
      maplECbmStsSectormUcOsetlEintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplECbmStsSectormUcOsetlEintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplECbmStsSectormUcOsetlEintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<CbmStsSector*,set<int> > : new map<CbmStsSector*,set<int> >;
   }
   static void *newArray_maplECbmStsSectormUcOsetlEintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<CbmStsSector*,set<int> >[nElements] : new map<CbmStsSector*,set<int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplECbmStsSectormUcOsetlEintgRsPgR(void *p) {
      delete ((map<CbmStsSector*,set<int> >*)p);
   }
   static void deleteArray_maplECbmStsSectormUcOsetlEintgRsPgR(void *p) {
      delete [] ((map<CbmStsSector*,set<int> >*)p);
   }
   static void destruct_maplECbmStsSectormUcOsetlEintgRsPgR(void *p) {
      typedef map<CbmStsSector*,set<int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<CbmStsSector*,set<int> >

namespace ROOT {
   static TClass *maplECbmMCTrackmUcOsetlEintgRsPgR_Dictionary();
   static void maplECbmMCTrackmUcOsetlEintgRsPgR_TClassManip(TClass*);
   static void *new_maplECbmMCTrackmUcOsetlEintgRsPgR(void *p = 0);
   static void *newArray_maplECbmMCTrackmUcOsetlEintgRsPgR(Long_t size, void *p);
   static void delete_maplECbmMCTrackmUcOsetlEintgRsPgR(void *p);
   static void deleteArray_maplECbmMCTrackmUcOsetlEintgRsPgR(void *p);
   static void destruct_maplECbmMCTrackmUcOsetlEintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<CbmMCTrack*,set<int> >*)
   {
      map<CbmMCTrack*,set<int> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<CbmMCTrack*,set<int> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<CbmMCTrack*,set<int> >", -2, "map", 99,
                  typeid(map<CbmMCTrack*,set<int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplECbmMCTrackmUcOsetlEintgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<CbmMCTrack*,set<int> >) );
      instance.SetNew(&new_maplECbmMCTrackmUcOsetlEintgRsPgR);
      instance.SetNewArray(&newArray_maplECbmMCTrackmUcOsetlEintgRsPgR);
      instance.SetDelete(&delete_maplECbmMCTrackmUcOsetlEintgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplECbmMCTrackmUcOsetlEintgRsPgR);
      instance.SetDestructor(&destruct_maplECbmMCTrackmUcOsetlEintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<CbmMCTrack*,set<int> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<CbmMCTrack*,set<int> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplECbmMCTrackmUcOsetlEintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<CbmMCTrack*,set<int> >*)0x0)->GetClass();
      maplECbmMCTrackmUcOsetlEintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplECbmMCTrackmUcOsetlEintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplECbmMCTrackmUcOsetlEintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<CbmMCTrack*,set<int> > : new map<CbmMCTrack*,set<int> >;
   }
   static void *newArray_maplECbmMCTrackmUcOsetlEintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<CbmMCTrack*,set<int> >[nElements] : new map<CbmMCTrack*,set<int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplECbmMCTrackmUcOsetlEintgRsPgR(void *p) {
      delete ((map<CbmMCTrack*,set<int> >*)p);
   }
   static void deleteArray_maplECbmMCTrackmUcOsetlEintgRsPgR(void *p) {
      delete [] ((map<CbmMCTrack*,set<int> >*)p);
   }
   static void destruct_maplECbmMCTrackmUcOsetlEintgRsPgR(void *p) {
      typedef map<CbmMCTrack*,set<int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<CbmMCTrack*,set<int> >

namespace {
  void TriggerDictionaryInitialization_G__StsDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/opt/fairroot/install/include",
"/home/alex/bmnroot_dev/bmnroot/passive",
"/home/alex/bmnroot_dev/bmnroot/bmndata",
"/home/alex/bmnroot_dev/bmnroot/bmndata/cbm",
"/home/alex/bmnroot_dev/bmnroot/sts",
"/opt/fairsoft/install/include",
"/opt/fairsoft/install/include/root",
"/opt/fairsoft/install/include/root",
"/home/alex/bmnroot_dev/bmnroot/build/sts/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__StsDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Class for STS)ATTRDUMP"))) CbmGeoSts;
class CbmGeoStsPar;
class CbmSts;
class __attribute__((annotate(R"ATTRDUMP(Factory for all STS parameter containers)ATTRDUMP"))) CbmStsContFact;
class CbmStsDigiPar;
class CbmStsDigiScheme;
class CbmStsIdealDigitize;
class CbmStsDigitize;
class CbmStsDigitizeTb;
class CbmStsIdealFindHits;
class CbmStsClusterFinder;
class CbmStsFindHits;
class CbmStsFindTracks;
class CbmStsFindTracksQa;
class CbmStsFitTracks;
class CbmStsHitProducerIdeal;
class CbmStsIdealMatchHits;
class CbmStsMatchHits;
class CbmStsMatchTracks;
class __attribute__((annotate(R"ATTRDUMP(Class for STS parameter I/O from Ascii files)ATTRDUMP"))) CbmStsParAsciiFileIo;
class __attribute__((annotate(R"ATTRDUMP(Class for STS parameter I/O from ROOT file)ATTRDUMP"))) CbmStsParRootFileIo;
class CbmStsRadTool;
class CbmStsSensor;
class CbmStsSensorDigiPar;
class CbmStsSector;
class CbmStsSectorDigiPar;
class CbmStsStation;
class CbmStsStationDigiPar;
class CbmStsTrackFinderIdeal;
class CbmStsTrackFitterIdeal;
class CbmStsSimulationQa;
class CbmStsFindHitsQa;
class CbmStsReconstructionQa;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__StsDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#ifndef CBMGEOSTS_H
#define CBMGEOSTS_H

#include "FairGeoSet.h"

class  CbmGeoSts : public FairGeoSet {
protected:
  char modName[200];  // name of module
  char eleName[200];  // substring for elements in module
public:
  CbmGeoSts();
  ~CbmGeoSts() {}
  const char* getModuleName(Int_t);
  const char* getEleName(Int_t);
  inline Int_t getModNumInMod(const TString&);
  ClassDef(CbmGeoSts,0) // Class for STS
};

inline Int_t CbmGeoSts::getModNumInMod(const TString& name) {
  // returns the module index from module name
  return (Int_t)(name[3]-'0')-1;
}

#endif  /* !CBMGEOSTS_H */
#ifndef CBMGEOSTSPAR_H
#define CBMGEOSTSPAR_H

#include "FairParGenericSet.h"

#include "TH1F.h"

class CbmGeoStsPar : public FairParGenericSet {
public:
  TObjArray            *fGeoSensNodes; // List of FairGeoNodes for sensitive volumes
  TObjArray            *fGeoPassNodes; // List of FairGeoNodes for sensitive volumes

  CbmGeoStsPar(const char* name="CbmGeoStsPar",
             const char* title="Sts Geometry Parameters",
             const char* context="TestDefaultContext");
  ~CbmGeoStsPar(void);
  void clear(void);
  void putParams(FairParamList*);
  Bool_t getParams(FairParamList*);
  TObjArray             *GetGeoSensitiveNodes(){return fGeoSensNodes;}
  TObjArray             *GetGeoPassiveNodes(){return fGeoPassNodes;}
private:

  CbmGeoStsPar(const CbmGeoStsPar&);
  CbmGeoStsPar operator=(const CbmGeoStsPar&);

  ClassDef(CbmGeoStsPar,1)
};

#endif /* !CBMGEOSTSPAR_H */
// -------------------------------------------------------------------------
// -----                        CbmSts header file                     -----
// -----                  Created 26/07/04  by V. Friese               -----
// -------------------------------------------------------------------------

/**  CbmSts.h
 *@author V.Friese <v.friese@gsi.de>
 **
 ** Defines the active detector STS. Constructs the geometry and
 ** registeres MCPoints.
 **/


#ifndef CBMSTS_H
#define CBMSTS_H

#include <map>
#include "FairDetector.h"

#include "TLorentzVector.h"

class TClonesArray;
class CbmStsPoint;
class FairVolume;

using namespace std;



class CbmSts : public FairDetector
{

 public:

  /** Default constructor **/
  CbmSts();


  /** Standard constructor.
   *@param name    detetcor name
   *@param active  sensitivity flag
   **/
  CbmSts(const char* name, Bool_t active);


  /** Destructor **/
  virtual ~CbmSts();


  /** Virtual method ProcessHits
   **
   ** Defines the action to be taken when a step is inside the
   ** active volume. Creates a CbmStsPoint and adds it to the
   ** collection.
   *@param vol  Pointer to the active volume
   **/
  virtual Bool_t ProcessHits(FairVolume* vol = 0);


  /** Virtual method BeginEvent
   **
   ** If verbosity level is set, print hit collection at the
   ** end of the event and resets it afterwards.
   **/

  virtual void BeginEvent();

  /** Virtual method EndOfEvent
   **
   ** If verbosity level is set, print hit collection at the
   ** end of the event and resets it afterwards.
   **/

  virtual void EndOfEvent();



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


  /** Construct the STS geometry.
   ** Depending on the geometry file extension, the base class method
   ** ConstructRootGeometry is called (.root), or the ASCII geometry
   ** file is read by the FairGeoLoader (.geo).
   ** @since 11.06.2012
   **/
  virtual void ConstructGeometry();



  /** Construct the geometry from an ASCII geometry file.
   **/
  virtual void ConstructAsciiGeometry();

  /** Construct the geometry from a GDML geometry file.
   **/
  virtual void ConstructGDMLGeometry();


  /** Check whether a volume is sensitive.
   ** The decision is based on the volume name. Only used in case
   ** of ROOT geometry.
   ** @since 11.06.2012
   ** @param(name)  Volume name
   ** @value        kTRUE if volume is sensitive, else kFALSE
   **/
  virtual Bool_t CheckIfSensitive(std::string name);


//  void SaveGeoParams();

  private:


    /** Track information to be stored until the track leaves the
	active volume. **/
    Int_t          fTrackID;           //!  track index
    Int_t          fVolumeID;          //!  volume id
    Int_t          fDetectorId;        // ! Unique detector ID
    TLorentzVector fPosIn, fPosOut;    //!  position
    TLorentzVector fMomIn, fMomOut;    //!  momentum
    Double32_t     fTime;              //!  time
    Double32_t     fLength;            //!  length
    Double32_t     fELoss;             //!  energy loss

    Int_t          fPosIndex;          //!
    TClonesArray*  fStsCollection;     //!  The hit collection
    Bool_t         kGeoSaved;          //!
    TList *flGeoPar; //!
    map<Int_t, Int_t> fVolumeMap;       //! Map from MC volume ID to unique detector ID
    map<Int_t, Int_t>::iterator fVolumeMapIter;  //! Map iterator

    /** Private method AddHit
     **
     ** Adds a StsPoint to the HitCollection
     **/
    CbmStsPoint* AddHit(Int_t trackID, Int_t detID, TVector3 posIn,
			TVector3 pos_out, TVector3 momIn,
			TVector3 momOut, Double_t time,
			Double_t length, Double_t eLoss,
                        Int_t stationNum, Int_t moduleNum);

    //Int_t GetCurrentDetectorId();


    /** Private method ResetParameters
     **
     ** Resets the private members for the track parameters
     **/
    void ResetParameters();
    CbmSts(const CbmSts&);
    CbmSts operator=(const CbmSts&);

    ClassDef(CbmSts,1);

};


inline void CbmSts::ResetParameters() {
  fTrackID = fVolumeID = 0;
  fPosIn.SetXYZM(0.0, 0.0, 0.0, 0.0);
  fPosOut.SetXYZM(0.0, 0.0, 0.0, 0.0);
  fMomIn.SetXYZM(0.0, 0.0, 0.0, 0.0);
  fMomOut.SetXYZM(0.0, 0.0, 0.0, 0.0);
  fTime = fLength = fELoss = 0;
  fPosIndex = 0;
};


#endif
#ifndef CBMSTSCONTFACT_H
#define CBMSTSCONTFACT_H

#include "FairContFact.h"

class FairContainer;

class CbmStsContFact : public FairContFact {
private:
  void setAllContainers();
public:
  CbmStsContFact();
  ~CbmStsContFact() {}
  FairParSet* createContainer(FairContainer*);
  void  activateParIo(FairParIo* io);
  ClassDef( CbmStsContFact,0) // Factory for all STS parameter containers
};

#endif  /* !CBMSTSCONTFACT_H */
// -------------------------------------------------------------------------
// -----                    CbmStsDigiPar header file                  -----
// -----                 Created 28/06/05  by V. Friese                -----
// -------------------------------------------------------------------------


/** CbmStsDigiPar.h
 *@author V.Friese <v.friese@gsi.de>
 **
 ** Parameter set for digitisation of the STS detector system.
 ** It holds an array of CbmStsStationPar containing the information
 ** for each STS station.
 **/



#ifndef CBMSTSDIGIPAR_H
#define CBMSTSDIGIPAR_H


#include "FairParSet.h"

#include "TObject.h"
#include "TObjArray.h"

#include <fstream>
#include <map>

using namespace std;


class TString;
class FairParIo;
class CbmStsStationDigiPar;


class CbmStsDigiPar : public FairParSet 
{

 public:

  /** Standard constructor **/
  CbmStsDigiPar(const char* name    = "StsDigiPar",
		const char* title   = "STS digitisation parameters",
		const char* context = "Default");


  /** Destructor **/
  virtual ~CbmStsDigiPar();


  /** Initialisation from input device**/
  virtual Bool_t init(FairParIo* input);


  /** Output to file **/
  virtual Int_t write(FairParIo* output);


  /** Reset all parameters **/
  virtual void clear();


  /** Read one line (station) from ASCII input **/
  void readline(const char* buffer, Int_t* set, fstream* f);


  /** Put an Ascii header for Ascii file output  **/
  void putAsciiHeader(TString&);


  /** Accessor to number of stations **/
  Int_t GetNStations() { return fStations->GetEntries(); }


  /** Accessor to station array **/
  TObjArray* GetStations() { return fStations; }


  /** Accessor to station parameters (by index) **/
  CbmStsStationDigiPar* GetStation(Int_t iStation);

  
  /** Accessor to station parameters (by station ID) **/
  CbmStsStationDigiPar* GetStationByNr(Int_t stationId);
  


 private:

  TObjArray* fStations;           // Array of CbmStsStationPar

  map<Int_t, Int_t> fStationMap;  //! Map from station ID to index

  CbmStsDigiPar(const CbmStsDigiPar&);
  CbmStsDigiPar operator=(const CbmStsDigiPar&);

  ClassDef(CbmStsDigiPar,1);
};


#endif
//* $Id: */

// -------------------------------------------------------------------------
// -----                   CbmStsDigiScheme header file                -----
// -----                  Created 31/08/06  by V. Friese               -----
// -------------------------------------------------------------------------


/** CbmStsDigiScheme
 **@author Volker Friese <v.friese@gsi.de>
 **@since 31.08.06
 **@version 1.0
 **
 ** Auxiliary class for STS digitisation and hit finding.
 ** Controls the digitisation scheme of the stations and sectors.
 **/


#ifndef CBMSTSDIGISCHEME_H
#define CBMSTSDIGISCHEME_H 1

#include "TObjArray.h"
#include "TObject.h"

#include <map>

class CbmGeoStsPar;
class CbmStsDigiPar;
class CbmStsSector;
class CbmStsSensor;
class CbmStsStation;



class CbmStsDigiScheme : public TObject
{


 public:

  /** Constructor **/
  CbmStsDigiScheme();


  /** Destructor **/
  virtual ~CbmStsDigiScheme();


  /** Initialisation **/
  Bool_t Init(CbmGeoStsPar* geoPar, CbmStsDigiPar* digiPar);


  /** Clear digitisation scheme **/
  void Clear();


  /** Reset eventwise counters **/
  void Reset();


  /** Accessors **/
  Int_t GetNStations() { return fStations->GetEntries(); }
  Int_t GetNSectors()  { return fNSectors; }
  Int_t GetNSensors()  { return fNSensors; }
  Int_t GetNChannels() { return fNChannels; }
  TObjArray*     GetStations() { return fStations; }
  CbmStsStation* GetStation(Int_t iStation);                                       /** Station by index **/
  CbmStsStation* GetStationByNr(Int_t stationNr);                                  /** Station by number **/
  CbmStsSector*  GetSector     (Int_t stationNr, Int_t sectorNr);                  /** Sector  by number **/
  CbmStsSensor*  GetSensor     (Int_t stationNr, Int_t sectorNr, Int_t sensorNr);  /** Sensor  by number **/
  Int_t GetDetectorIdByName(TString sensorName);
  CbmStsSensor* GetSensorByName    (TString sensorName);

  /** Check for new geometry **/
  Bool_t IsNewGeometry() const { return fIsNewGeometry; }

  /** Construct full path to a node **/
  TString GetCurrentPath();

  /** Screen output  **/
  void Print(Bool_t kLong = kFALSE);

 private:

  TObjArray* fStations;       /** Array of CbmStsStation **/
  Int_t fNSectors;            /** Total number of sectors **/
  Int_t fNSensors;            /** Total number of sensors **/
  Int_t fNChannels;           /** Total number of channels **/
  Bool_t fIsNewGeometry;      /** New geometry ( v12 or later ) **/

  std::map<Int_t,  CbmStsStation*> fStationMap; //! Map from number to station
  std::map<TString, Int_t>          fDetIdByName;
  std::map<TString, CbmStsSensor*> fSensorByName;

  CbmStsDigiScheme(const CbmStsDigiScheme&);
  CbmStsDigiScheme operator=(const CbmStsDigiScheme&);


  /** Old init method (up to v11b) **/
  Bool_t InitOld(CbmGeoStsPar* geoPar, CbmStsDigiPar* digiPar);


  /** New init method (from V12a on) **/
  Bool_t InitNew(CbmGeoStsPar* geoPar, CbmStsDigiPar* digiPar);

  ClassDef(CbmStsDigiScheme,1);
};



#endif

//* $Id: */

// -------------------------------------------------------------------------
// -----                    CbmStsDigitize header file                 -----
// -----                  Created 30/08/06  by V. Friese               -----
// -------------------------------------------------------------------------


/** CbmStsDigitise
 *@author Volker Friese <v.friese@gsi.de>
 *@since 30.08.06
 *@version 1.0
 **
 ** CBM task class for digitising STS
 ** Task level SIM
 ** Produces objects of type CbmStsDigi out of CbmStsPoint.
 **/


#ifndef CBMSTSIDEALDIGITIZE_H
#define CBMSTSIDEALDIGITIZE_H 1

#include "FairTask.h"

#include "TStopwatch.h"

#include <list>
#include <map>

class TClonesArray;
class CbmGeoStsPar;
class CbmStsDigiPar;
class CbmStsDigiScheme;
class CbmStsStation;



class CbmStsIdealDigitize : public FairTask
{

 public:

  /** Default constructor **/
  CbmStsIdealDigitize();


  /** Standard constructor **/
  CbmStsIdealDigitize(Int_t iVerbose);


  /** Constructor with name **/
  CbmStsIdealDigitize(const char* name, Int_t iVerbose);


  /** Destructor **/
  virtual ~CbmStsIdealDigitize();


  /** Execution **/
  virtual void Exec(Option_t* opt);



 private:

  CbmGeoStsPar*     fGeoPar;       /** Geometry parameter container **/
  CbmStsDigiPar*    fDigiPar;      /** Digitisation parameter container **/
  CbmStsDigiScheme* fDigiScheme;   /** Digitisation scheme **/
  TClonesArray*     fPoints;       /** Input array of CbmStsPoint **/
  TClonesArray*     fDigis;        /** Output array of CbmStsDigi **/
  TClonesArray*     fDigiMatches;  /** Output array of CbmStsDigiMatches**/
  Int_t             fNPoints;     
  Int_t             fNFailed;
  Int_t             fNOutside;
  Int_t             fNMulti;
  Int_t             fNDigis;
  TStopwatch        fTimer;

  /** Map of active channels (pair detectorId, channel number) 
   ** to index of StsDigi **/
  std::map<std::pair<Int_t, Int_t>, Int_t> fChannelMap; //!
 

  /** Get parameter containers **/
  virtual void SetParContainers();


  /** Intialisation **/
  virtual InitStatus Init();


  /** Reinitialisation **/
  virtual InitStatus ReInit();


  /** Reset eventwise counters **/
  void Reset();

  CbmStsIdealDigitize(const CbmStsIdealDigitize&);
  CbmStsIdealDigitize operator=(const CbmStsIdealDigitize&);


  ClassDef(CbmStsIdealDigitize,1);

};

#endif


//* $Id: */

// -------------------------------------------------------------------------
// -----                    CbmStsDigitize header file             -----
// -----                  Created 01/07/2008  by R. Karabowicz         -----
// -------------------------------------------------------------------------


/** CbmStsDigitise
 *@author Volker Friese <v.friese@gsi.de>
 *@since 30.08.06
 *@version 1.0
 **
 ** CBM task class for digitising STS
 ** Task level SIM
 ** Produces objects of type CbmStsDigi out of CbmStsPoint.
 **/


#ifndef CBMSTSDIGITIZE_H
#define CBMSTSDIGITIZE_H 1

#include <set>
#include "TStopwatch.h"
#include "FairTask.h"

using std::set;
using std::map;
using std::pair;

class TClonesArray;
class CbmGeostsPar;
class CbmStsDigiPar;
class CbmStsStation;

class CbmStsPoint;


class CbmStsDigitize : public FairTask
{

 public:

  /** Default constructor **/
  CbmStsDigitize();


  /** Standard constructor **/
  CbmStsDigitize(Int_t iVerbose);


  /** Constructor with name **/
  CbmStsDigitize(const char* name, Int_t iVerbose);


  /** Destructor **/
  virtual ~CbmStsDigitize();

  void SetStep(Double_t tStep) {fStep = tStep;}

  /** Execution **/
  virtual void Exec(Option_t* opt);

  /** Virtual method Finish **/
  virtual void Finish();

  virtual void SetRealisticResponse(Bool_t real=kTRUE) {fRealistic = real;}

  void FindFiredStrips(CbmStsPoint* pnt,Int_t& nofStr,Int_t*& strips,Double_t*& signals,Int_t side){}
  void ProduceHitResponse(CbmStsSensor* sensor);

  void SetFrontThreshold (Double_t  frontThr=0.)      {fFThreshold    =  frontThr;}
  void SetBackThreshold  (Double_t  backThr=0.)       {fBThreshold    =  backThr;}
  void SetFrontNoiseWidth(Double_t  frontNoW=0.)      {fFNoiseWidth   =  frontNoW;}
  void SetBackNoiseWidth (Double_t  backNoW=0.)       {fBNoiseWidth   =  backNoW;}
  
  void SetFrontNofBits   (Int_t     frontNB=0 ) {fFNofBits    =  frontNB;}
  void SetBackNofBits    (Int_t      backNB=0 ) {fBNofBits    =   backNB;}
  void SetFrontNofElPerAdc   (Double_t  frontMS=0.) {fFNofElPerAdc    =  frontMS;}
  void SetBackNofElPerAdc    (Double_t   backMS=0.) {fBNofElPerAdc    =   backMS;}
  
  void SetStripDeadTime  (Double_t  StripDeadTime=0.) {fStripDeadTime =  StripDeadTime;}


 private:

  CbmGeoStsPar*     fGeoPar;       /** Geometry parameter container **/
  CbmStsDigiPar*    fDigiPar;      /** Digitisation parameter container **/
  CbmStsDigiScheme* fDigiScheme;   /** Digitisation scheme **/
  TClonesArray*     fPoints;       /** Input array of CbmStsPoint **/
  TClonesArray*     fDigis;        /** Output array of CbmStsDigi **/
  TClonesArray*     fDigiMatches;  /** Output array of CbmStsDigiMatches**/

  // statistics
  Int_t             fNDigis;
  Int_t             fNMulti;

  Double_t          fNEvents;
  Double_t          fNPoints;     
  Double_t          fNDigisFront;
  Double_t          fNDigisBack;
  Double_t          fTime;

  // settings
  Double_t          fStep;

  TStopwatch        fTimer;

  Bool_t    fRealistic;
  Double_t  fEnergyLossToSignal;

  Double_t  fFThreshold;
  Double_t  fBThreshold;
  Double_t  fFNoiseWidth;
  Double_t  fBNoiseWidth;

  Double_t  fStripDeadTime;
  
  Int_t     fFNofBits;
  Int_t     fBNofBits;
  Double_t  fFNofElPerAdc;
  Double_t  fBNofElPerAdc;
  Int_t     fFNofSteps;
  Int_t     fBNofSteps;

  Double_t* fStripSignalF;
  Double_t* fStripSignalB;

  // map of the point indices contributing to a fired strip
  map<Int_t, set<Int_t> > fFChannelPointsMap;
  map<Int_t, set<Int_t> > fBChannelPointsMap;
 
  map<CbmStsSensor*, set<Int_t> > fPointMap;  /** sensor points **/
  Float_t occupancy [20][1000][20] ;

  /** Make sensorwise set for points **/
  void MakeSets();
  void MakeSets1();

  /** Get parameter containers **/
  virtual void SetParContainers();


  /** Intialisation **/
  virtual InitStatus Init();


  /** Reinitialisation **/
  virtual InitStatus ReInit();


  /** Reset eventwise counters **/
  void Reset();

  /** AZ Check if particle goes thru the spacer (dead space) **/
  Bool_t CrossSpacer(const TGeoNode *node, const CbmStsPoint *point);

  CbmStsDigitize(const CbmStsDigitize&);
  CbmStsDigitize operator=(const CbmStsDigitize&);

  ClassDef(CbmStsDigitize,1);

};

#endif


/** @file CbmStsDigitizeTb.h
 ** @author Volker Friese <v.friese@gsi.de>
 ** @date 10 December 2012
 */

#ifndef CBMSTSDIGITIZETB_H
#define CBMSTSDIGITIZETB_H 1




#include <set>
#include "TStopwatch.h"
#include "TClonesArray.h"
#include "FairTask.h"

using std::set;
using std::map;
using std::pair;

class CbmGeostsPar;
class CbmStsDigiPar;
class CbmStsStation;

class CbmStsPoint;


/** CbmStsDigitiseTb
 ** @author Volker Friese <v.friese@gsi.de>
 ** @date 10 December 2012
 ** @brief CBM task for STS detector response simulation
 **
 ** Version for time-based simulation
 ** Based on earlier developments by R. Karabowicz and A. Kotynia.
 **/
class CbmStsDigitizeTb : public FairTask
{

 public:

  /** Default constructor **/
  CbmStsDigitizeTb();

  /** Destructor **/
  virtual ~CbmStsDigitizeTb();


  /** Execution **/
  virtual void Exec(Option_t* opt);


  virtual void SetRealisticResponse(Bool_t real=kTRUE) {fRealistic = real;}

  void SetThreshold (Double_t threshold =0.) { fThreshold = threshold; }
  
  void SetNAdcBits (Int_t nBits) { fNAdcBits = nBits; }

  void SetStripDeadTime  (Double_t  StripDeadTime=0.) {fStripDeadTime =  StripDeadTime;}


 private:

  CbmGeoStsPar*     fGeoPar;       /** Geometry parameter container **/
  CbmStsDigiPar*    fDigiPar;      /** Digitisation parameter container **/
  CbmStsDigiScheme* fDigiScheme;   /** Digitisation scheme **/
  TClonesArray*     fPoints;       /** Input array of CbmStsPoint **/
  TClonesArray*     fDigis;        /** Output array of CbmStsDigi **/
  TClonesArray*     fDigiMatches;  /** Output array of CbmStsDigiMatches**/

  // statistics
  Int_t             fNDigis;
  Int_t             fNMulti;

  Double_t          fNEvents;
  Double_t          fNPoints;     
  Double_t          fNOutside;
  Double_t          fNDigisFront;
  Double_t          fNDigisBack;
  Double_t          fTime;

  // settings
  Double_t          fStepSize;    /** Step size for ionisation points **/

  TStopwatch        fTimer;

  Bool_t    fRealistic;
  Double_t  fPairCreationEnergy;

  Double_t  fFNoiseWidth;
  Double_t  fBNoiseWidth;

  Double_t  fStripDeadTime;
  
  // Digitisation properties
  Double_t fQMax;          /** Dynamic range in e **/
  Double_t fThreshold;     /** Threshold charge in e **/
  Int_t fNAdcBits;         /** Number of bits for ADC **/
  Double_t fNAdcChannels;  /** Number of ADC channels **/

//  Int_t     fFNofBits;
//  Int_t     fBNofBits;
//  Double_t  fFMinStep;
//  Double_t  fBMinStep;
//  Int_t     fFNofSteps;
//  Int_t     fBNofSteps;


  // map of the point indices contributing to a fired strip
  map<Int_t, set<Int_t> > fFChannelPointsMap;
  map<Int_t, set<Int_t> > fBChannelPointsMap;
 


  /** Perform digitisation of one MCPoint
   ** @param point   Pointer to CbmStsPoint
   ** @param nFront  Number of digis on front side (return)
   ** @param nBack   Number of digis on back side {return)
   **/
  void DigitizePoint(const CbmStsPoint* point, Int_t& nFront, Int_t& nBack);


  /** Get parameter containers **/
  virtual void SetParContainers();




  /** Intialisation
   ** @return kSUCCESS if successful
   **/
  virtual InitStatus Init();



  /** Re-initialisation **/
  virtual InitStatus ReInit();

  /** Virtual method Finish **/
  virtual void Finish();


  /** Reset eventwise counters **/
  void Reset();

  CbmStsDigitizeTb(const CbmStsDigitizeTb&);
  CbmStsDigitizeTb operator=(const CbmStsDigitizeTb&);

  ClassDef(CbmStsDigitizeTb,1);

};

#endif


//* $Id: */

// -------------------------------------------------------------------------
// -----                     CbmStsIdealFindHits header file                -----
// -----                  Created 11/09/06  by V. Friese               -----
// -------------------------------------------------------------------------


/** CbmStsIdealFindHits
 *@author Volker Friese <v.friese@gsi.de>
 *@since 11.09.06
 *@version 1.0
 **
 ** CBM task class for finding hits in the STS
 ** Task level RECO
 ** Produces objects of type CbmStsHits out of CbmStsDigi.
 **/


#ifndef CBMSTSIDEALFINDHITS_H
#define CBMSTSIDEALFINDHITS_H 1


#include "FairTask.h"

#include "TStopwatch.h"

#include <map>
#include <set>


class TClonesArray;
class CbmGeoStsPar;
class CbmStsDigiPar;
class CbmStsDigiScheme;
class CbmStsSector;
class CbmStsStation;



class CbmStsIdealFindHits : public FairTask
{


 public :

  /** Default constructor **/
  CbmStsIdealFindHits();


  /** Standard constructor **/
  CbmStsIdealFindHits(Int_t iVerbose);


  /** Constructor with task name **/
  CbmStsIdealFindHits(const char* name, Int_t iVerbose);


  /** Destructor **/
  virtual ~CbmStsIdealFindHits();


  /** Execution **/
  virtual void Exec(Option_t* opt);



 private:

  CbmGeoStsPar*     fGeoPar;      /** Geometry parameters **/
  CbmStsDigiPar*    fDigiPar;     /** Digitisation parameters **/
  CbmStsDigiScheme* fDigiScheme;  /** Digitisation scheme **/
  TClonesArray*     fDigis;       /** Input array of CbmStsDigi **/
  TClonesArray*     fDigiMatch;   /** AZ: Input array of CbmStsDigiMatch **/ 
  TClonesArray*     fPoints;      /** AZ: Input array of CbmStsPoint **/
  TClonesArray*     fHits;        /** Output array of CbmStsHit **/
  std::map<CbmStsSector*, std::set<Int_t> > fDigiMapF;  /** sector digis (front) **/
  std::map<CbmStsSector*, std::set<Int_t> > fDigiMapB;  /** sector digis (back)  **/
  TStopwatch fTimer;

  /** Get parameter containers **/
  virtual void SetParContainers();


  /** Intialisation **/
  virtual InitStatus Init();


  /** Reinitialisation **/
  virtual InitStatus ReInit();


  /** Make sectorwise sets for sigis  **/
  void MakeSets();


  /** Sort digis sectorwise  **/
  void SortDigis();
  
//  virtual void Finish() { };


  /** Find hits in one sector **/
  Int_t FindHits(CbmStsStation* station, CbmStsSector* sector,
		 std::set<Int_t>& fSet, std::set<Int_t>& bSet);

  CbmStsIdealFindHits(const CbmStsIdealFindHits&);
  CbmStsIdealFindHits operator=(const CbmStsIdealFindHits&);

  ClassDef(CbmStsIdealFindHits,1);
  
  Int_t    fNStations;
  Int_t    fNEvents;        /** Number of events with success **/
  Double_t  fTime1;         /** Total real time used for good events **/
   

};

#endif
//* $Id: */

// -------------------------------------------------------------------------
// -----                     CbmStsClusterFinder header file       -----
// -----                  Created 26/06/2008  by R. Karabowicz         -----
// -------------------------------------------------------------------------


/** CbmStsClusterFinder
 *@author Volker Friese <v.friese@gsi.de>
 *@since 11.09.06
 *@version 1.0
 **
 ** CBM task class for finding hits in the STS
 ** Task level RECO
 ** Produces objects of type CbmStsHits out of CbmStsDigi.
 **/


#ifndef CBMSTSCLUSTERFINDER_H
#define CBMSTSCLUSTERFINDER_H 1


#include <map>
#include <set>
#include "TStopwatch.h"
#include "FairTask.h"

using std::set;
using std::map;
using std::pair;

class TClonesArray;
class CbmGeoStsPar;
class CbmStsDigiPar;
class CbmStsDigiScheme;
class CbmStsSector;
class CbmStsStation;
class CbmStsCluster; //AZ


class CbmStsClusterFinder : public FairTask
{


 public :

  /** Default constructor **/
  CbmStsClusterFinder();


  /** Standard constructor **/
  CbmStsClusterFinder(Int_t iVerbose);


  /** Constructor with task name **/
  CbmStsClusterFinder(const char* name, Int_t iVerbose);


  /** Destructor **/
  virtual ~CbmStsClusterFinder();


  /** Execution **/
  virtual void Exec(Option_t* opt);

  /** Virtual method Finish **/
  virtual void Finish();

 private:

  CbmGeoStsPar*     fGeoPar;      /** Geometry parameters **/
  CbmStsDigiPar*    fDigiPar;     /** Digitisation parameters **/
  CbmStsDigiScheme* fDigiScheme;  /** Digitisation scheme **/
  TClonesArray*     fDigis;       /** Input array of CbmStsDigi **/
  TClonesArray*     fClustersCand;    /** Input array of CbmStsCluster **/
  TClonesArray*     fClusters;    /** Input array of CbmStsCluster **/
  Int_t fNofDigis;
  map<CbmStsSector*, set<Int_t> > fDigiMapF;  /** sector digis (front) **/
  map<CbmStsSector*, set<Int_t> > fDigiMapB;  /** sector digis (back)  **/
  TStopwatch fTimer;

  Int_t fNofClustersCand;
  Int_t fNofClusters;
  Int_t fNofClustersGood;
  Int_t fNofClustersWP;
  Int_t fNofClustersWM;
  Int_t fLongestCluster;
  Int_t fLongestGoodCluster;

  /** Get parameter containers **/
  virtual void SetParContainers();


  /** Intialisation **/
  virtual InitStatus Init();


  /** Reinitialisation **/
  virtual InitStatus ReInit();


  /** Make sectorwise sets for sigis  **/
  void MakeSets();

  void AnalyzeClusters();
  void AnalyzeCluster(Int_t iclus);
  void EvalErrors(CbmStsCluster *clus, Int_t chan2); //AZ
  void SplitCluster(Int_t iclus); //AZ

  /** Sort digis sectorwise  **/
  void SortDigis();

  /** Find hits in one sector **/
/*   Int_t FindClusters(CbmStsStation* station, CbmStsSector* sector, */
/* 		     set<Int_t>& fSet, set<Int_t>& bSet); */

//  void FindClusters(Int_t stationNr, Int_t sectorNr, Int_t iSide, set<Int_t>& digiSet);
  Int_t FindClusters(Int_t stationNr, Int_t sectorNr, Int_t iSide, set<Int_t>& digiSet);

  CbmStsClusterFinder(const CbmStsClusterFinder&);
  CbmStsClusterFinder operator=(const CbmStsClusterFinder&);

  ClassDef(CbmStsClusterFinder,1);

};

#endif
//* $Id: */

// -------------------------------------------------------------------------
// -----                     CbmStsFindHits header file            -----
// -----                  Created 26/06/2008  by R. Karabowicz         -----
// -------------------------------------------------------------------------


/** CbmStsFindHits
 *@author Volker Friese <v.friese@gsi.de>
 *@since 11.09.06
 *@version 1.0
 **
 ** CBM task class for finding hits in the STS
 ** Task level RECO
 ** Produces objects of type CbmStsHits out of CbmStsDigi.
 **/


#ifndef CBMSTSFINDHITS_H
#define CBMSTSFINDHITS_H 1


#include "FairTask.h"

#include "TStopwatch.h"

#include <map>
#include <set>


class TClonesArray;
class CbmGeoStsPar;
class CbmStsDigiPar;
class CbmStsDigiScheme;
class CbmStsSector;
class CbmStsStation;
class CbmStsCluster; //AZ


class CbmStsFindHits : public FairTask
{


 public :

  /** Default constructor **/
  CbmStsFindHits();


  /** Standard constructor **/
  CbmStsFindHits(Int_t iVerbose);


  /** Constructor with task name **/
  CbmStsFindHits(const char* name, Int_t iVerbose);


  /** Destructor **/
  virtual ~CbmStsFindHits();


  /** Execution **/
  virtual void Exec(Option_t* opt);

  /** Virtual method Finish **/
  virtual void Finish();


 private:

  CbmGeoStsPar*     fGeoPar;      /** Geometry parameters **/
  CbmStsDigiPar*    fDigiPar;     /** Digitisation parameters **/
  CbmStsDigiScheme* fDigiScheme;  /** Digitisation scheme **/
  TClonesArray*     fClusters;    /** Input array of CbmStsCluster **/
  TClonesArray*     fDigis;    /**AZ - Input array of CbmStsDigis **/
  TClonesArray*     fHits;        /** Output array of CbmStsHit **/
  std::map<CbmStsSector*, std::set<Int_t> > fClusterMapF;  /** sector clusters (front) **/
  std::map<CbmStsSector*, std::set<Int_t> > fClusterMapB;  /** sector clusters (back)  **/
  TStopwatch fTimer;

  Int_t fNHits;

  /** Get parameter containers **/
  virtual void SetParContainers();


  /** Intialisation **/
  virtual InitStatus Init();


  /** Reinitialisation **/
  virtual InitStatus ReInit();


  /** Make sectorwise sets for sigis  **/
  void MakeSets();


  /** Sort digis sectorwise  **/
  void SortClusters();


  /** Find hits in one sector **/
  Int_t FindHits(CbmStsStation* station, CbmStsSector* sector,
		 std::set<Int_t>& fSet, std::set<Int_t>& bSet);


  /** AZ-Apply charge correlation cut **/
  //Bool_t ChargeCorrelation(CbmStsCluster *clusterF, CbmStsCluster *clusterB);
  Double_t ChargeCorrelation(CbmStsCluster *clusterF, CbmStsCluster *clusterB);
  
  CbmStsFindHits(const CbmStsFindHits&);
  CbmStsFindHits operator=(const CbmStsFindHits&);


  ClassDef(CbmStsFindHits,1);

};

#endif
// -------------------------------------------------------------------------
// -----                   CbmStsFindTracks header file                -----
// -----                  Created 02/02/05  by V. Friese               -----
// -------------------------------------------------------------------------


/** CbmStsFindTracks
 *@author V.Friese <v.friese@gsi.de>
 **
 ** Task class for track finding in the STS. 
 ** Input: TClonesArray of CbmStsHit
 ** Output: TClonesArray of CbmStsTrack
 **
 ** Uses as track finding algorithm classes derived from CbmStsTrackFinder.
 **/


#ifndef CBMSTSFINDTRACKS
#define CBMSTSFINDTRACKS 1

#include "CbmStsDigiScheme.h"
#include "CbmStsTrackFinder.h"

#include "FairTask.h"

#include "TStopwatch.h"

class TClonesArray;
class FairField;
class CbmGeoStsPar;
class CbmStsDigiPar;
class CbmStsTrackFinderIdeal;


class CbmStsFindTracks : public FairTask
{

 public:

  /** Default constructor **/
  CbmStsFindTracks();


  /** Standard constructor
   *@param verbose  Verbosity level
   *@param name     Task name
   *@param finder   Pointer to STS track finder concrete class
   *@param useMvd   Include MVD hits in track finding
   **/
  CbmStsFindTracks(Int_t iVerbose, 
		   CbmStsTrackFinder* finder = NULL, 
		   Bool_t useMvd = kTRUE,
		   const char* name = "STSFindTracks");


  /** Destructor **/
  virtual ~CbmStsFindTracks();


  /** Task execution **/
  virtual void Exec(Option_t* opt);


  /** Accessors **/
  CbmStsTrackFinder* GetFinder() { return fFinder; };

  /** Return if Mvd is used or not **/
  Bool_t MvdUsage() const { return fUseMvd; } 

  /** Set concrete track finder **/
  void UseFinder(CbmStsTrackFinder* finder) { 
    if ( fFinder ) delete fFinder;
    fFinder = finder; 
  };



 private:

  Bool_t             fUseMvd;      // Inclusion of MVD hits
  CbmGeoStsPar*      fGeoPar;      // STS geometry parameters
  CbmStsDigiPar*     fDigiPar;     // STS digitisation parameters
  CbmStsDigiScheme*  fDigiScheme;  // STS digitisation scheme
  FairField*         fField;       // Magnetic field
  CbmStsTrackFinder* fFinder;      // TrackFinder concrete class
  TClonesArray*      fMvdHits ;    // Input array of MVD hits
  TClonesArray*      fStsHits ;    // Input array of STS hits
  TClonesArray*      fTracks    ;  // Output array of CbmStsTracks
  TStopwatch         fTimer;       // Timer
  Int_t    fNEvents;        /** Number of events with success **/
  Int_t    fNEventsFailed;  /** Number of events with failure **/
  Double_t fTime;           /** Total real time used for good events **/
  Double_t fNTracks;        /** Number of tracks created **/
  


  /** Get parameter containers **/
  virtual void SetParContainers();


  /** Initialisation at beginning of each event **/
  virtual InitStatus Init();


  /** Finish at the end of each event **/
  virtual void Finish();

  CbmStsFindTracks(const CbmStsFindTracks&);
  CbmStsFindTracks operator=(const CbmStsFindTracks&);

  ClassDef(CbmStsFindTracks,1);

};

#endif
// -------------------------------------------------------------------------
// -----                  CbmStsFindTracksQa header file               -----
// -----                  Created 11/01/06  by V. Friese               -----
// -------------------------------------------------------------------------


/** CbmStsFindTracksQa.h
 *@author V.Friese <v.friese@gsi.de>
 **
 ** Quality check task for CbmStsFindTracks
 **/


#ifndef CBMSTSTRACKFINDERQA_H
#define CBMSTSTRACKFINDERQA_H 1


#include <map>

#include "TStopwatch.h"
#include "TVector3.h"

#include "FairTask.h"

class TCanvas;
class TClonesArray;
class TH1;
class TH1F;
class TList;
class FairGeoPassivePar;
class CbmGeoStsPar;



class CbmStsFindTracksQa : public FairTask
{

 public:

  /** Default constructor **/
  CbmStsFindTracksQa(Int_t iVerbose = 1);


  /** Standard constructor 
  *@param minHits     Minimal number of StsHits for considered MCTracks
  *@param quota       True/all hits for track to be considered reconstructed
  *@param iVerbose    Verbosity level
  **/
  CbmStsFindTracksQa(Int_t minHits, Double_t quota, Int_t iVerbose);


  /** Destructor **/
  virtual ~CbmStsFindTracksQa();


  /** Set parameter containers **/
  virtual void SetParContainers();


  /** Initialisation **/
  virtual InitStatus Init();


  /** Reinitialisation **/
  virtual InitStatus ReInit();


  /** Execution **/
  virtual void Exec(Option_t* opt);



 private:

  /** Finish **/
  virtual void Finish();

  /** Read the geometry parameters **/
  InitStatus GetGeometry();


  /** Create histograms **/
  void CreateHistos();


  /** Reset histograms and counters **/
  void Reset();


  /** Fill a map from MCTrack index to number of corresponding StsHits **/
  void FillHitMap();


  /** Fill a map from MCTrack index to matched StsTrack index
   *@param nRec  Number of reconstructed tracks (return)
   *@param nGhosts  Number of ghost tracks (return)
   *@param nClones  Number of clone tracks (return)
   **/
  void FillMatchMap(Int_t& nRec, Int_t& nGhosts, Int_t& nClones);


  /** Divide histograms (reco/all) with correct error for the efficiency
   *@param histo1  reconstructed tracks
   *@param histo2  all tracks (normalisation)
   *@param histo3  efficiency
   **/
  void DivideHistos(TH1* histo1, TH1* histo2, TH1* histo3);


  /** Map from MCTrack index to number of attached StsHits **/
  std::map<Int_t, Int_t> fHitMap;


  /** Map from MCTrack index to matched StsTrack index **/
  std::map<Int_t, Int_t> fMatchMap;


  /** Map from MCTrack index to percentage of matched hits **/
  std::map<Int_t, Double_t> fQualiMap;


  /** Pointers to data arrays **/
  TClonesArray* fMCTracks;           // MCtrack
  TClonesArray* fStsPoints;          // StsPoints
  TClonesArray* fStsHits;            // StsHits
  TClonesArray* fStsTracks;          // StsTrack
  TClonesArray* fMatches;            // StsTrackMatch


  /** Geometry parameters **/
  FairGeoPassivePar* fPassGeo;             // Passive geometry parameters
  CbmGeoStsPar*     fStsGeo;              // STS geometry parameters
  TVector3 fTargetPos;                    // Target centre position
  Int_t fNStations;                       // Number of STS stations


  /** Task parameters **/
  Int_t fMinHits;   // Minimal number of StsHits for considered MCTrack
  Double_t fQuota;  // True/all hits for track to be considered reconstructed


  /** Histograms **/
  TH1F *fhMomAccAll,  *fhMomRecAll,  *fhMomEffAll;   // eff. vs. p, all
  TH1F *fhMomAccPrim, *fhMomRecPrim, *fhMomEffPrim;  // eff. vs. p, vertex
  TH1F *fhMomAccSec,  *fhMomRecSec,  *fhMomEffSec;   // eff. vs. p, non-vertex
  TH1F *fhNpAccAll,   *fhNpRecAll,   *fhNpEffAll;    // eff. vs. np, all
  TH1F *fhNpAccPrim,  *fhNpRecPrim,  *fhNpEffPrim;   // eff. vs. np, vertex
  TH1F *fhNpAccSec,   *fhNpRecSec,   *fhNpEffSec;    // eff. vs. np, non-vertex
  TH1F *fhZAccSec,    *fhZRecSec,    *fhZEffSec;     // eff. vs. z, non-vertex
  TH1F *fhNhClones,   *fhNhGhosts;              // # hits of clones and ghosts   


  /** List of histograms **/
  TList* fHistoList;


  /** Counters **/
  Int_t fNAccAll, fNAccPrim, fNAccRef, fNAccSec;
  Int_t fNRecAll, fNRecPrim, fNRecRef, fNRecSec;
  Int_t fNGhosts, fNClones;
  Int_t    fNEvents;        /** Number of events with success **/
  Int_t    fNEventsFailed;  /** Number of events with failure **/
  Double_t fTime;           /** Total real time used for good events **/

  /** Timer **/
  TStopwatch fTimer;

  CbmStsFindTracksQa(const CbmStsFindTracksQa&);
  CbmStsFindTracksQa operator=(const CbmStsFindTracksQa&);

  ClassDef(CbmStsFindTracksQa,1);

};


#endif
				 
// -------------------------------------------------------------------------
// -----                    CbmStsFitTracks header file                -----
// -----                  Created 18/02/05  by V. Friese               -----
// -------------------------------------------------------------------------


/** CbmStsFitTracks
 *@author V.Friese <v.friese@gsi.de>
 **
 ** Task class for track fitting in the STS.
 ** Input: TClonesArray of CbmStsTrack
 ** Parameters of these objects are updated
 **
 ** Uses as track fitting algorithm classes derived from CbmStsTrackFitter.
 **/


#ifndef CBMSTSFITTRACKS
#define CBMSTSFITTRACKS 1


#include "FairTask.h"

#include "TStopwatch.h"

class CbmStsTrackFitter;
class TClonesArray;

class CbmStsFitTracks : public FairTask
{

 public:

  /** Default constructor **/
  CbmStsFitTracks();


  /** Standard constructor 
   **
   *@param finder    Pointer to STS track finder concrete class
   *@param iVerbose  Verbosity level
   **/
  CbmStsFitTracks(CbmStsTrackFitter* fitter, Int_t iVerbose);


  /** Constructor with name
   **
   *@param name      Name of task
   *@param finder    Pointer to STS track finder concrete class
   *@param iVerbose  Verbosity level
   **/
  CbmStsFitTracks(const char* name, CbmStsTrackFitter* fitter,
		  Int_t iVerbose);


  /** Destructor **/
  virtual ~CbmStsFitTracks();


  /** Initialisation at beginning of each event **/
  virtual InitStatus Init();


  /** Task execution **/
  virtual void Exec(Option_t* opt);


  /** Finish at the end of each event **/
  virtual void Finish();


  /** Accessors **/
  CbmStsTrackFitter* GetFitter() { return fFitter; };


  /** Set concrete track finder **/
  void UseFitter(CbmStsTrackFitter* fitter) { fFitter = fitter; };



 private:

  CbmStsTrackFitter* fFitter;    // Pointer to TrackFinder concrete class
  TClonesArray* fTracks;         // Input array of STS tracks
  TStopwatch fTimer;             // Timer
  Int_t fNEvents;                // Number of processed events
  Int_t fNFailed;                // Number of failed events
  Double_t fTime;                // Total real time used
  Double_t fNTracks;             // Number of fitted tracks

  CbmStsFitTracks(const CbmStsFitTracks&);
  CbmStsFitTracks operator=(const CbmStsFitTracks&);


  ClassDef(CbmStsFitTracks,1);

};

#endif
// -------------------------------------------------------------------------
// -----                 CbmStsHitProducerIdel header file             -----
// -----                  Created 10/01/06  by V. Friese               -----
// -------------------------------------------------------------------------


/** CbmStsHitProducerIdeal.h
 *@author V.Friese <v.friese@gsi.de>
 **
 ** The ideal hit producer produces hits of type CbmStsMapsHit by copying
 ** the MCPoint position. The position error is set to 1 mum, much 
 ** smaller than can be obtained by any detector. Using the hits from 
 ** this HitProducer is thus equivalent to using MC information
 ** directly, but with the correct data interface.
 **/


#ifndef CBMSTSHITPRODUCERIDEAL_H
#define CBMSTSHITPRODUCERIDEAL_H 1


#include "FairTask.h"

class TClonesArray;



class CbmStsHitProducerIdeal : public FairTask
{

 public:

  /** Default constructor **/  
  CbmStsHitProducerIdeal();


  /** Destructor **/
  ~CbmStsHitProducerIdeal();


  /** Virtual method Init **/
  virtual InitStatus Init();


  /** Virtual method Exec **/
  virtual void Exec(Option_t* opt);


 private:

  /** Input array of CbmStsPoints **/
  TClonesArray* fPointArray;

  /** Output array of CbmStsHits **/
  TClonesArray* fHitArray;  

  CbmStsHitProducerIdeal(const CbmStsHitProducerIdeal&);
  CbmStsHitProducerIdeal& operator=(const CbmStsHitProducerIdeal&);

  ClassDef(CbmStsHitProducerIdeal,1);

};

#endif
//* $Id: */

// -------------------------------------------------------------------------
// -----                    CbmStsIdealMatchHits header file                -----
// -----                  Created 27/11/06  by V. Friese               -----
// -------------------------------------------------------------------------


/** CbmStsIdealMatchHits
 *@author Volker Friese <v.friese@gsi.de>
 *@since 27.11.06
 **
 ** CBM task class for matching StsHit with StsPoint.
 ** Task level RECO
 ** Sets the reference index of CbmStsHit.
 **/


#ifndef CBMSTSIDEALMATCHHIT_H
#define CBMSTSIDEALMATCHHIT_H 1

#include "FairTask.h"

#include "TStopwatch.h"

#include <map>

class TClonesArray;
class CbmGeoStsPar;
class CbmStsDigiPar;
class CbmStsDigiScheme;
class CbmStsDigiMatch;
class CbmStsHit;



class CbmStsIdealMatchHits : public FairTask 
{

 public:

  /** Default constructor **/
  CbmStsIdealMatchHits();


  /** Standard constructor **/
  CbmStsIdealMatchHits(Int_t iVerbose);


  /** Constructor with name **/
  CbmStsIdealMatchHits(const char* name, Int_t iVerbose);


  /** Destructor **/
  virtual ~CbmStsIdealMatchHits();


  /** Execution **/
  virtual void Exec(Option_t* opt);



 private:

  /** Get parameter containers **/
  virtual void SetParContainers();


  /** Intialisation **/
  virtual InitStatus Init();


  /** Reinitialisation **/
  virtual InitStatus ReInit();


  /** Run summary **/
  virtual void Finish();


  // -----  Data members ----------
  CbmGeoStsPar*     fGeoPar;      /** Geometry parameter container **/
  CbmStsDigiPar*    fDigiPar;     /** Digitisation parameter container **/
  CbmStsDigiScheme* fDigiScheme;  /** Digitisation scheme **/
  TClonesArray*     fPoints;      /** Array of CbmStsPoint **/
  TClonesArray*     fDigis;       /** Array of CbmStsDigi **/
  TClonesArray*     fDigiMatches; /** Array of CbmStsDigiMatch **/
  TClonesArray*     fHits;        /** Array of CbmStsHit **/
  TStopwatch        fTimer;       /** Timer **/
  Int_t    fNEvents;        /** Number of events with success **/
  Int_t    fNEventsFailed;  /** Number of events with failure **/
  Double_t fTime;           /** Total real time used for good events **/
  Double_t fNHits;          /** Total number of hits **/
  Double_t fNMatched;       /** Total number of matched hits **/
  Double_t fNDistant;       /** Total number of displaced hits **/
  Double_t fNBackgrd;       /** Total number of background hits **/

  /** Map from candidate point to distance to hit **/
  std::map<Double_t, Int_t> fCandMap;            //!
  std::map<Double_t, Int_t>::iterator fIter;     //!

  CbmStsIdealMatchHits(const CbmStsIdealMatchHits&);
  CbmStsIdealMatchHits operator=(const CbmStsIdealMatchHits&);

  ClassDef(CbmStsIdealMatchHits,1);

};

#endif

//* $Id: */

// -------------------------------------------------------------------------
// -----                    CbmStsMatchHits header file            -----
// -----                  Created 01/07/2008  by R. Karabowicz         -----
// -------------------------------------------------------------------------


/** CbmStsMatchHits
 *@author Volker Friese <v.friese@gsi.de>
 *@since 27.11.06
 **
 ** CBM task class for matching StsHit with StsPoint.
 ** Task level RECO
 ** Sets the reference index of CbmStsHit.
 **/


#ifndef CBMSTSMATCHHIT_H
#define CBMSTSMATCHHIT_H 1

#include <set>
//#include <map>
#include "TStopwatch.h"
#include "FairTask.h"

using std::set;
using std::map;
using std::pair;


class TClonesArray;
class FairGeoPassivePar;
class CbmGeoStsPar;
class CbmStsDigiPar;
class CbmStsDigiScheme;
class CbmStsDigiMatch;
class CbmStsHit;



class CbmStsMatchHits : public FairTask 
{

 public:

  /** Default constructor **/
  CbmStsMatchHits();


  /** Standard constructor **/
  CbmStsMatchHits(Int_t iVerbose);


  /** Constructor with name **/
  CbmStsMatchHits(const char* name, Int_t iVerbose);


  /** Destructor **/
  virtual ~CbmStsMatchHits();


  /** Execution **/
  virtual void Exec(Option_t* opt);
  virtual void ExecReal(Option_t* opt);

  virtual void SetRealisticResponse(Bool_t real=kTRUE) {fRealistic = real;}


 private:

  /** Get parameter containers **/
  virtual void SetParContainers();


  /** Intialisation **/
  virtual InitStatus Init();

  // -----   Private method GetGeometry   ------------------------------------
  InitStatus GetGeometry();

  /** Reinitialisation **/
  virtual InitStatus ReInit();

  /** Run summary **/
  virtual void Finish();


  // -----  Data members ----------
  CbmGeoStsPar*     fGeoPar;      /** Geometry parameter container **/
  CbmStsDigiPar*    fDigiPar;     /** Digitisation parameter container **/
  CbmStsDigiScheme* fDigiScheme;  /** Digitisation scheme **/
  TClonesArray*     fPoints;      /** Array of CbmStsPoint **/
  TClonesArray*     fDigis;       /** Array of CbmStsDigi **/
  TClonesArray*     fDigiMatches; /** Array of CbmStsDigiMatch **/
  TClonesArray*     fHits;        /** Array of CbmStsHit **/
  TClonesArray*     fClusters;    /*AZ* Array of CbmStsClusters **/
  TStopwatch        fTimer;       /** Timer **/
  Int_t    fNEvents;        /** Number of events with success **/
  Int_t    fNEventsFailed;  /** Number of events with failure **/
  Double_t fTime;           /** Total real time used for good events **/
  Double_t fNHits;          /** Total number of hits **/
  Double_t fNMatched;       /** Total number of matched hits **/
  Double_t fNDistant;       /** Total number of displaced hits **/
  Double_t fNBackgrd;       /** Total number of background hits **/

  /** Geometry parameters **/
  FairGeoPassivePar* fPassGeo;             // Passive geometry parameters
  TVector3 fTargetPos;                    // Target centre position
  Int_t fNStations;                       // Number of STS stations
  Int_t fStationNrFromMcId[10000];         // station number from mc id

  Bool_t fRealistic;

  /** Map from candidate point to distance to hit **/
  map<Double_t, Int_t> fCandMap;            //!
  map<Double_t, Int_t>::iterator fIter;     //!

  CbmStsMatchHits(const CbmStsMatchHits&);
  CbmStsMatchHits operator=(const CbmStsMatchHits&);

  ClassDef(CbmStsMatchHits,1);

};

#endif

// -------------------------------------------------------------------------
// -----                  CbmStsMatchTracks header file                -----
// -----                  Created 22/11/05  by V. Friese               -----
// -------------------------------------------------------------------------


/** CbmStsMatchTracks.h
 *@author V.Friese <v.friese@gsi.de>
 **
 ** Task class for matching a reconstructed CbmStsTrack with a simulated
 ** CbmMCTrack. The matching criterion is a maximal number of common
 ** hits/points. The task fills the data class CbmStsTrackMatch for
 ** each CbmStsTrack.
 **/


#ifndef CBMSTSMATCHTRACKS_H
#define CBMSTSMATCHTRACKS_H 1


#include "FairTask.h"

#include "TStopwatch.h"

#include <map>

class TClonesArray;



class CbmStsMatchTracks : public FairTask
{

 public:

  /** Default constructor **/
  CbmStsMatchTracks();


  /** Standard constructor
   **
   *@param verbose  Verbosity level
   **/
  CbmStsMatchTracks(Int_t iVerbose );


  /** Constructor with task name
   **
   *@param name     Name of task
   *@param verbose  Verbosity level
   **/
  CbmStsMatchTracks(const char* name, Int_t verbose );


  /** Destructor **/
  virtual ~CbmStsMatchTracks();


  /** Intialisation at beginning of each event **/
  virtual InitStatus Init();


  /** Execution **/
  virtual void Exec(Option_t* opt);


  /** Finishing */
  virtual void Finish();


 private:

  TClonesArray* fTracks;       // Array of CbmStsTracks
  TClonesArray* fPoints;       // Array of CbmStsPoints
  TClonesArray* fHits;         // Array of CbmStsHits
  TClonesArray* fMatches;      // Array of CbmStsTrackMatch
  TStopwatch    fTimer;        // Timer

  /** Map from MCTrackId to number of common hits **/
  std::map<Int_t, Int_t> fMatchMap;

  Int_t    fNEvents;        /** Number of events with success **/
  Int_t    fNEventsFailed;  /** Number of events with failure **/
  Double_t fTime;           /** Total real time used for good events **/
  Double_t fNTrackMatches;  /** Total number of matched tracks **/
  Double_t fNAllHits;       /** Total number of hits **/
  Double_t fNTrueHits;      /** Number pf correctly assigned hits **/
  
  CbmStsMatchTracks(const CbmStsMatchTracks&);
  CbmStsMatchTracks operator=(const CbmStsMatchTracks&);

  ClassDef(CbmStsMatchTracks,1);

};

#endif
#ifndef CBMSTSPARASCIIFILEIO_H
#define CBMSTSPARASCIIFILEIO_H

#include "FairDetParAsciiFileIo.h"

#include "TObject.h"
#include "TArrayI.h"

#include <fstream>

using namespace std;

class FairParSet;

class CbmStsParAsciiFileIo : public FairDetParAsciiFileIo {
public:
  CbmStsParAsciiFileIo(fstream*);
  ~CbmStsParAsciiFileIo() {}
  Bool_t init(FairParSet*);
  Int_t write(FairParSet*);
  template<class T> Bool_t read(T*, Int_t*, Bool_t needsClear=kFALSE);
  template<class T> Int_t writeFile2(T*);
  ClassDef(CbmStsParAsciiFileIo,0) // Class for STS parameter I/O from Ascii files
};

#endif  /* !CBMSTSPARASCIIFILEIO_H */








#ifndef CBMSTSPARROOTFILEIO_H
#define CBMSTSPARROOTFILEIO_H

#include "FairDetParRootFileIo.h"

#include "TFile.h"
#include "TArrayI.h"

class FairParRootFile;
class FairParSet;
class CbmStsDigiPar;

class CbmStsParRootFileIo : public FairDetParRootFileIo {
public:
  CbmStsParRootFileIo(FairParRootFile* f);
  ~CbmStsParRootFileIo();
  Bool_t init(FairParSet*,Int_t*);
  Bool_t read(CbmStsDigiPar*,Int_t*);
  ClassDef(CbmStsParRootFileIo,0) // Class for STS parameter I/O from ROOT file
};

#endif  /* !CBMSTSPARROOTFILEIO_H */










/** @file CbmStsRadTool.h
 ** @author Volker Friese <v.friese@gsi.de>
 ** @date 6 December 2011
 **/




#ifndef CBMSTSRADTOOL_H
#define CBMSTSRADTOOL_H 1



#include <map>

#include "TObject.h"


using namespace std;




/** @class CbmStsRadTool
 ** @author Volker Friese <v.friese@gsi.de>
 ** @date 6 December 2011
 ** @brief Tool class to calculate the non-ionising radiation damage
 ** on the STS silicon
 **
 ** This class provides some functionality to calculate the effects
 ** of non-ionising irradiation on Silicon.
 **
 ** While the calculation of the NIEL factor is independent of the
 ** type of silicon used, those of leakage current and full depletion
 ** voltage depend on the specific silicon properties (effective
 ** doping concentration 9 x 10^11 cm^-3).
 **/
class CbmStsRadTool : public TObject
{


 public:

  /**   Constructor   **/
  CbmStsRadTool();


  /**   Destructor   **/
  virtual ~CbmStsRadTool();


  /** Get leakage current
   ** @param[in] fluence       Fluence [neq/cm^2]
   ** @param[in] volume        Volume [cm^3]
   ** @param[in] temperature   Temperature [K]
   ** @return    Leakage current [A]
   **
   ** Calculates the leakage current in Silicon as function of irradiation 
   ** fluence, volume and temperature.
   **
   ** Formulae provided by S. Chatterji.
   **/
  Double_t GetLeakageCurrent(Double_t fluence,
			     Double_t volume,
			     Double_t temperatur);

  /**  Get NIEL factor
   *@param type   Particle Id (PDG code)
   *@param energy Energy in GeV
   *@return NIEL factor
   **
   ** Calculates the NIEL factor for a given particle type and energy
   ** from interpolation of the values tabulated in
   ** http://sesam.desy.de/members/gunnar/Si-dfuncs.htm
   **
   ** Will return 0 for particle types other than proton, neutron,
   ** pion or electron, or if the energy is below the lowest tabulated
   ** value. Will return an asymptotic value if the energy is above the
   ** highest tabulated value.
   **/
  Double_t GetNiel(Int_t type, Double_t energy);


  /** Get full depletion voltage
   ** @param fluence  Fluence [neq/cm^2]
   ** @param d        Thickness [cm]
   ** @return Full depletion voltage [V]
   **
   ** Calculates the full depletion voltage of Silicon as function of
   ** non-ionising dose and thickness.
   **
   ** Formulae and values provided by S. Chatterji.
   **/
  Double_t GetVfd(Double_t fluence, Double_t d);




 private:

  /** Tables of NIEL factors as fnct. of energy **/
  map<Double_t, Double_t> niel_neutron;
  map<Double_t, Double_t> niel_proton;
  map<Double_t, Double_t> niel_pion;
  map<Double_t, Double_t> niel_electron;


  /** Proportionality constant of leakage current and fluence **/
  Double_t fIAlpha;   //  [A/cm]


  /** Constants for temperature dependence of leakage current **/
  Double_t fEGap0;     // [eV]
  Double_t fEGapAlpha; // [ev?k]
  Double_t fEGapBeta;  // [K]


  /** Constants for effective doping concentration
   ** as function of fluence
   **/
  Double_t fNeff0;   // [cm^-3]
  Double_t fNeffC;   // [cm^2]
  Double_t fNeffGc;  // [1/cm]


  /** Permittivity of Silicon **/
  Double_t fEpsilon; // [F/cm]
      

  /** Initialisation
   **
   ** Reads in tabulated NIEL factors from file
   ** and sets proper constants for Silicon.
   **/
  void Init();

  /** Read data from file
   *@param file  File name (in directory input)
   *@param map   Map to be filled
   **/
  void ReadData(const char* file, map<Double_t, Double_t> &map);


  ClassDef(CbmStsRadTool,1);

};

#endif
// -------------------------------------------------------------------------
// -----                     CbmStsSensor header file                  -----
// -----                  Created 01/07/2008  by R. Karabowicz         -----
// -------------------------------------------------------------------------

/** CbmStsSensor.h
 *@author V.Friese <v.friese@gsi.de>
 *@since 28.08.06
 *@version 1.0
 **
 ** This class describes the digitisation scheme for a sensor of the STS.
 ** The sensor is rectangular with extensions fLx and fLy. The following
 ** types are implemented:
 ** 1 = pixel detector without charge sharing
 ** 2 = double sides strip detector, all channels read out
 ** 3 = double sided strip detector with double metal layer,
 **     readout at the bottom corner
 ** In case of strip detectors, the internal coordinate system sees
 ** x across and y along the front side strips.
 ** The origin of the internal sensor coordinate system is at the lower 
 ** left corner of the sensor, i.e. x runs from 0 to fLx, 
 ** and y from 0 to fLy. 
 ** For strip detectors, the readout pitch is the same on the front and 
 ** the back side, i.e. the strip pitch on the back side is smaller.
 ** The sensor can be translated and rotated in the c.s. of the station. 
 **/


#ifndef CBMSTSSENSOR_H
#define CBMSTSSENSOR_H 1

#include "TNamed.h"

#include <map>
#include <list>
#include <set>
#include <vector>

class CbmStsSensorDigiPar;


class CbmStsSensor : public TNamed
{

 public:

  /** Default constructor **/
  CbmStsSensor();


  /** Standard constructor
   *@param detId     Unique detector identifier
   *@param iType     Sensor type (1,2,3)
   *@param x0        sensor centre x coordinate in global c.s [cm]
   *@param y0        sensor centre y coordinate in global c.s [cm]
   *@param rotation  rotation in global c.s. [rad]
   *@param lx        sensor length in x [cm]
   *@param ly        sensor length in y [cm]
   *@param dx        Readout pitch (strip) or pixel width in x [cm]
   *@param dy        Pixel width in y [cm].
   *@param stereoF   StereoF angle [rad] (for double sided strip)
   *@param stereoB   StereoB angle [rad] (for double sided strip)
   **/
  CbmStsSensor(Int_t detId, Int_t iType, Double_t x0, Double_t y0,
	       Double_t rotation, Double_t lx, Double_t ly, 
	       Double_t dx, Double_t dy, Double_t stereoF, Double_t stereoB);
  CbmStsSensor(TString tempName, Int_t detId, Int_t iType, Double_t x0, Double_t y0, Double_t z0,
	       Double_t rotation, Double_t lx, Double_t ly, 
	       Double_t d, Double_t dx, Double_t dy, Double_t stereoF, Double_t stereoB);
  

  /** Destructor **/
  virtual ~CbmStsSensor();


  /** Accessors **/
  TString GetDetectorName() const { return fName.Data(); }
  Int_t    GetDetectorId() const { 
    return fDetectorId; }
  Int_t    GetSystemId()   const {  
    return ( fDetectorId & (15<<24) ) >> 24; }
  Int_t    GetStationNr()  const { 
    return ( fDetectorId & (255<<16) ) >> 16; }
  Int_t    GetSectorNr()   const {  // sector number within station
    return ( fDetectorId & (4095<<4) ) >> 4; }
  /*   Int_t    GetSensorNr()   const {  // sensor number within sector 
     return ( fDetectorId & (32767<<1) ) >> 1; } */
  Int_t    GetSensorNr()   const {  // sensor number within sector
    return ( fDetectorId & (7<<1) ) >> 1; }
  Int_t    GetType()       const { return fType; }
  Double_t GetX0()         const { return fX0; }
  Double_t GetY0()         const { return fY0; }
  Double_t GetZ0()         const { return fZ0; }
  Double_t GetRotation()   const { return fRotation; }
  Double_t GetLx()         const { return fLx; }
  Double_t GetLy()         const { return fLy; }
  Double_t GetD()          const { return fD;  }
  Double_t GetDx()         const { return fDx; }
  Double_t GetDy()         const { return fDy; }
  Double_t GetStereoF()    const { return fStereoF; }
  Double_t GetStereoB()    const { return fStereoB; }
  Double_t GetSigmaX()     const { return fSigmaX; }
  Double_t GetSigmaY()     const { return fSigmaY; }
  Double_t GetSigmaXY()    const { return fSigmaXY; }
  Int_t    GetNChannels()  const { return fNChannelsFront + fNChannelsBack; }
  Int_t    GetNChannelsFront()  const { return fNChannelsFront; }
  Int_t    GetNChannelsBack ()  const { return fNChannelsBack;  }
  Double_t GetBackStripShift()  const { return fBackStripShift; }
  Double_t GetFrontStripShift() const { return fFrontStripShift; }

  /** Calculate channel number for a coordinate pair.
   *@param x      x coordinate in global c.s. [cm]
   *@param y      y coordinate in global c.s. [cm]
   *@param iSide  0 = front side, 1 = back side
   *@value iChan  channel number. -1 if point is outside sensor.
   ** Will return the same for both sides in case of pixel sensor.
   **/
  Int_t GetChannel(Double_t x, Double_t y, Int_t iSide);

  Float_t GetChannelPlus(Double_t x, Double_t y, Int_t iSide);

  Int_t GetFrontChannel(Double_t x, Double_t y, Double_t z);
  Int_t GetBackChannel (Double_t x, Double_t y, Double_t z);

  /** Test whether a coordinate pair (x,y) in global coordinates is
   ** inside the sensor **/
  Bool_t Inside(Double_t x, Double_t y);


  /** Activate the channels corresponding to a MCPoint.
   *@param ipt   Index of MCPoint
   *@param x     x coordinate of point (global c.s.)
   *@param y     y coordinate of point (global c.s.)
   *@value  kTRUE if the point is inside the sensor, else kFALSE
   **/
  Bool_t ActivateChannels(Int_t ipt, Double_t x, Double_t y);


  /** Calculates the coordinates of the intersections of front strip i
   ** with back strip j in the global coordinate system
   *@param iFStrip   Front strip number
   *@param iBStrip   Back strip number
   *@param xCross    Vector of x coordinates of crossings [cm]
   *@param yCross    Vector of y coordinates of crossings [cm]
   *@value           Number of intersections
   **/
  Int_t Intersect(Int_t iFStrip, Int_t iBStrip,
		  std::vector<Double_t>& xCross, std::vector<Double_t>& yCross);

  Int_t Intersect(Int_t iFStrip, Int_t iBStrip, Double_t& xCross, Double_t& yCross, Double_t& zCross);

  Int_t IntersectClusters(Double_t fChan, Double_t bChan, Double_t& xCross, Double_t& yCross, Double_t& zCross);

  /** The index of the MCPoint that has caused a combination of
   ** front and back strip to be fired. Returns -1 for combinations
   ** of strips fired by different points (fake hits) 
   *@param iFStrip   Front strip number
   *@param iBStrip   Back strip number
   *@value Index of MCPoint
   **/
  Int_t PointIndex(Int_t iFStrip, Int_t IBStrip);


  /** Clear the maps of fired strips **/
  void Reset();


  /** Screen output  **/
  void Print();
  


 private:

  /** -------------   Data members   --------------------------**/

  //TString    fName;             // Station name
  Int_t    fDetectorId;   // Unique detector ID
  Int_t    fType;         // Sensor type 
  Double_t fX0, fY0, fZ0; // Coordinates of the sensor centre [cm]
  Double_t fRotation;     // Rotation angle in global c.m. [rad]
  Double_t fLx, fLy;      // Dimensions of the sensor [cm]
  Double_t fDx;           // Strip readout pitch or pixel size in x [cm]
  Double_t fDy;           // Pixel size in y [cm] for pixel sensor
  Double_t fStereoF;      // StereoF angle [rad] for strip sensor.
  Double_t fStereoB;      // StereoB angle [rad] for strip sensor.
  
  Double_t fD;            // thickness of the sensor [cm]

  /** Number of channels in front and back plane **/
  Int_t fNChannelsFront;
  Int_t fNChannelsBack;

  Double_t fBackStripShift;
  Double_t fFrontStripShift;

  /** Errors of hit coordinates. For pixel sensor: size/sqrt(12),
   ** for strip sensors RMS of overlap of front and back side strip **/
  // Logically, this belongs to the HitFinder, but it is here
  // for performance reasons: to be executed once per sensor, not for
  // each MCPoint
  Float_t fSigmaX;   // RMS in x, global c.s. [cm]
  Double_t fSigmaY;   // RMS in y, global c.s. [cm]
  Double_t fSigmaXY;  // Covariance in global c.s. [cm**2]

  Double_t fXSmearWidth;
  Double_t fZSmearSlope;

  Double_t fFrontLorentzShift;
  Double_t fBackLorentzShift;

  /** STL sets containing the active channels **/
  std::set<Int_t> fFrontActive;       //!
  std::set<Int_t> fBackActive;        //!


  /** STL map from the indizes of the fired strips to the 
   ** index of the MCPoint **/
  std::map<std::pair<Int_t,Int_t>, Int_t > fTrueHits;      //!



  /** -------------   Private methods   ------------------------**/

  /** Strip number of a point in the front plane.
   ** Returns -1 if the point is outside the sensor
   *@param x  x coordinate of point (global c.s.)
   *@param y  y coordinate of point (global c.s.)
   *@value  Number of strip hitted by the point 
   **/
  Int_t FrontStripNumber(Double_t x, Double_t y) const;


  /** Strip number of a point in the back plane.
   ** Returns -1 if the point is outside the sensor
   *@param x  x coordinate of point (global c.s.)
   *@param y  y coordinate of point (global c.s.)
   *@value  Number of strip hitted by the point 
   **/
  Int_t BackStripNumber(Double_t x, Double_t y) const;


  /** Calculate coordinates in internal coordinate system
   *@param x     x coordinate in global system
   *@param y     y coordinate in global system
   *@param xint  internal x coordinate (return)
   *@param yint  internal y coordinate (return)
   *@value kTRUE if point is inside the sensor
   **/
  Bool_t IntCoord(Double_t x, Double_t y, 
		  Double_t& xint, Double_t& yint) const;
  Bool_t IntCoord(Double_t x, Double_t y, Double_t z, 
		  Double_t& xint, Double_t& yint, Double_t& zint) const;

  
  /** Check whether a point is inside the sensor
   *@param xpt  x coordinate of point (internal system)
   *@param ypt  y coordinate of point (internal system)
   *@value kTRUE if inside sensor, else kFALSE
   **/
  Bool_t IsInside(Double_t xint, Double_t yint) const;




  ClassDef(CbmStsSensor,1);

};




#endif
// -------------------------------------------------------------------------
// -----                 CbmStsSensorDigiPar header file               -----
// -----                  Created 01/07/2008  by R. Karabowicz         -----
// -------------------------------------------------------------------------


/** CbmStsSensorDigiPar.h
 *@author V.Friese <v.friese@gsi.de>
 **
 ** Parameter container for the digitisation of a sensor of a STS
 ** strip station.
 ** Supports the following digitisation types:
 ** 1 = hybrid pixel
 ** 2 = strip, readout of all strips
 ** 3 = strip, readout at bottom corner, double metal layer
 ** Coordinates and rot. angle are in the global coordinate system. 
 ** In the internal coordinate system, x is across the front side strips
 ** and y along the front side strips. Irrelevant for pixel detectors.
 ** Angles are stored and accessed in radians, but must be given in
 ** degrees in the constructor.
 **/



#ifndef CBMSTSSENSORDIGIPAR_H
#define CBMSTSSENSORDIGIPAR_H 1



#include "TObject.h"



class CbmStsSensorDigiPar : public TObject
{

 public:

  /** Default constructor **/
  CbmStsSensorDigiPar();


  /** Standard constructor. For the parameters, see description of
   ** private data members. Angles must be given in radians. **/
  CbmStsSensorDigiPar(Int_t iSensor, Int_t iType, 
		      Double_t x0, Double_t y0, 
		      Double_t rotation, 
		      Double_t lx, Double_t ly, 
		      Double_t dx, Double_t dy,
		      Double_t stereoF, Double_t stereoB);
  CbmStsSensorDigiPar(Int_t iSensor, Int_t iType, 
		      Double_t x0, Double_t y0, Double_t z0, 
		      Double_t rotation, 
		      Double_t lx, Double_t ly, 
		      Double_t d, Double_t dx, Double_t dy,
		      Double_t stereoF, Double_t stereoB);


  /** Destructor **/
  virtual ~CbmStsSensorDigiPar();


  /** Accessors. See private data members for description **/
  Int_t    GetSensorNr()   const { return fSensorNr; }
  Int_t    GetType()       const { return fType; }       // 1, 2 or 3
  Double_t GetX0()         const { return fX0; }         // [cm]
  Double_t GetY0()         const { return fY0; }         // [cm]
  Double_t GetZ0()         const { return fZ0; }         // [cm]
  Double_t GetRotation()   const { return fRotation; }   // [rad]
  Double_t GetLx()         const { return fLx; }         // [cm]
  Double_t GetLy()         const { return fLy; }         // [cm]
  Double_t GetD()          const { return fD;  }
  Double_t GetDx()         const { return fDx; }         // [cm]
  Double_t GetDy()         const { return fDy; }         // [cm]
  Double_t GetStereoF()    const { return fStereoF; }    // [rad]
  Double_t GetStereoB()    const { return fStereoB; }    // [rad]
  void SetZ0(Double_t z0)        { fZ0 = z0; }         // [cm]
  void SetD (Double_t d)         { fD  = d;  }         // [cm]


 private:

  /** Sensor number in station **/	
  Int_t    fSensorNr;

  /** Type of sector.
   ** 1 = hybrid pixel sensor, no charge sharing;
   ** 2 = strip sensor, readout of all strips on the back side
   ** 3 = strip sensor, readout at bottom corner, double metal layer **/
  Int_t    fType;

  /** x coordinate of sector centre in the station c.s. [cm] **/
  Double_t fX0;

  /** y coordinate of sector centre in the station c.s. [cm] **/
  Double_t fY0;

  /** z coordinate of sector centre in the global c.s. [cm] **/
  Double_t fZ0;

  /** Rotation angle around z axis in the station c.s [rad] **/
  Double_t fRotation;

  /** Length of sector along x axis [cm] **/
  Double_t fLx;

  /** Length of sector along y axis [cm] **/
  Double_t fLy;

  /** Strip readout pitch or pixel size along x [cm] **/ 
  Double_t fDx;

  /** Pixel size along y [cm]. Irrelevant for strip sensor. **/
  Double_t fDy;

  /** StereoB angle of back side strips. Irrelevant for pixel sensors. **/
  Double_t fStereoF;

  /** StereoF angle of front side strips. Irrelevant for pixel sensors. **/
  Double_t fStereoB;
  
  Double_t fD;            // thickness of the sector [cm]

  ClassDef(CbmStsSensorDigiPar,1);

};


#endif
// -------------------------------------------------------------------------
// -----                     CbmStsSector header file                  -----
// -----                  Created 28/08/06  by V. Friese               -----
// -------------------------------------------------------------------------

/** CbmStsSector.h
 *@author V.Friese <v.friese@gsi.de>
 *@since 28.08.06
 *@version 1.0
 **
 ** This class describes the digitisation scheme for a sector of the STS.
 ** The sector is rectangular with extensions fLx and fLy. The following
 ** types are implemented:
 ** 1 = pixel detector without charge sharing
 ** 2 = double sides strip detector, all channels read out
 ** 3 = double sided strip detector with double metal layer,
 **     readout at the bottom corner
 ** In case of strip detectors, the internal coordinate system sees
 ** x across and y along the front side strips.
 ** The origin of the internal sector coordinate system is at the lower 
 ** left corner of the sector, i.e. x runs from 0 to fLx, 
 ** and y from 0 to fLy. 
 ** For strip detectors, the readout pitch is the same on the front and 
 ** the back side, i.e. the strip pitch on the back side is smaller.
 ** The sector can be translated and rotated in the c.s. of the station. 
 **/


#ifndef CBMSTSSECTOR_H
#define CBMSTSSECTOR_H 1

#include "TObjArray.h"
#include "TNamed.h"
#include "TString.h"

#include <map>
#include <list>
#include <set>
#include <vector>

class CbmStsSensor;
class CbmStsSensorDigiPar;

class CbmStsSector : public TNamed
{

 public:

  /** Default constructor **/
  CbmStsSector();


  /** Standard constructor
   *@param detId     Unique detector identifier
   *@param iType     Sensor type (1,2,3)
   *@param x0        sector centre x coordinate in global c.s [cm]
   *@param y0        sector centre y coordinate in global c.s [cm]
   *@param rotation  rotation in global c.s. [rad]
   *@param lx        sector length in x [cm]
   *@param ly        sector length in y [cm]
   *@param dx        Readout pitch (strip) or pixel width in x [cm]
   *@param dy        Pixel width in y [cm].
   *@param stereoF   StereoF angle [rad] (for double sided strip)
   *@param stereoB   StereoB angle [rad] (for double sided strip)
   **/
  CbmStsSector(TString tempName, Int_t detId);

  /** Destructor **/
  virtual ~CbmStsSector();


  /** Accessors **/
  TString GetDetectorName() const { return fName.Data(); }
  Int_t    GetDetectorId() const { 
    return fDetectorId; }
  Int_t    GetSystemId()   const {  
    return ( fDetectorId & (15<<24) ) >> 24; }
  Int_t    GetStationNr()  const { 
    return ( fDetectorId & (255<<16) ) >> 16; }
  Int_t    GetSectorNr()   const {  // sector number within station
    return ( fDetectorId & (4095<<4) ) >> 4; }
  Int_t    GetNChannels()  const { return fNChannelsFront + fNChannelsBack; }
  Int_t    GetNChannelsFront()  const { return fNChannelsFront; }
  Int_t    GetNChannelsBack ()  const { return fNChannelsBack;  }

  Int_t    GetNSensors()   const { return fSensors->GetEntriesFast(); }
  TObjArray* GetSensors() { return fSensors; }

  CbmStsSensor* GetSensor(Int_t iSensor) { 
    return (CbmStsSensor*) fSensors->At(iSensor); }
  CbmStsSensor* GetSensorByNr(Int_t sensorNr);

  void AddSensor(CbmStsSensorDigiPar* sensorPar);
  void AddSensor(CbmStsSensor* sensor);

  // Retrieve from sensor
  Int_t    GetType()       const { return fType; }
  Double_t GetRotation()   const { return fRotation; }
  Double_t GetDx()         const { return fDx; }
  Double_t GetDy()         const { return fDy; }
  Double_t GetStereoF()    const { return fStereoF; }
  Double_t GetStereoB()    const { return fStereoB; }
  Double_t GetSigmaX()     const { return fSigmaX; }
  Double_t GetSigmaY()     const { return fSigmaY; }
  Double_t GetSigmaXY()    const { return fSigmaXY; }

  /** The index of the MCPoint that has caused a combination of
   ** front and back strip to be fired. Returns -1 for combinations
   ** of strips fired by different points (fake hits) 
   *@param iFStrip   Front strip number
   *@param iBStrip   Back strip number
   *@value Index of MCPoint
   **/
  Int_t PointIndex(Int_t iFStrip, Int_t IBStrip);

  Int_t Intersect(Int_t iFStrip, Int_t iBStrip, Double_t& xCross, Double_t& yCross, Double_t& zCross);
  Int_t IntersectClusters(Double_t fChan, Double_t bChan, Double_t& xCross, Double_t& yCross, Double_t& zCross);

  /** Clear the maps of fired strips **/
  void Reset();


  /** Screen output  **/
  void Print();
  


 private:

  /** -------------   Data members   --------------------------**/

  Int_t    fDetectorId;   // Unique detector ID

  TObjArray* fSensors;          // Array of CbmStsSensors

  Int_t    fType;         // Sensor type 
  Double_t fRotation;     // Rotation angle in global c.m. [rad]
  Double_t fDx;           // Strip readout pitch or pixel size in x [cm]
  Double_t fDy;           // Pixel size in y [cm] for pixel sensor
  Double_t fStereoF;      // StereoB angle [rad] for strip sensor.
  Double_t fStereoB;      // StereoF angle [rad] for strip sensor.

  /** Errors of hit coordinates. For pixel sensor: size/sqrt(12),
   ** for strip sensors RMS of overlap of front and back side strip **/
  // Logically, this belongs to the HitFinder, but it is here
  // for performance reasons: to be executed once per sensor, not for
  // each MCPoint
  Double_t fSigmaX;   // RMS in x, global c.s. [cm]
  Double_t fSigmaY;   // RMS in y, global c.s. [cm]
  Double_t fSigmaXY;  // Covariance in global c.s. [cm**2]

  /** Number of channels in front and back plane **/
  Int_t fNChannelsFront;
  Int_t fNChannelsBack;

  /** STL sets containing the active channels **/
  std::set<Int_t> fFrontActive;       //!
  std::set<Int_t> fBackActive;        //!

  std::map<Int_t, Int_t> fSensorMap; //! Map from sensor number to index

  /** STL map from the indizes of the fired strips to the 
   ** index of the MCPoint **/
  std::map<std::pair<Int_t,Int_t>, Int_t > fTrueHits;      //!

  CbmStsSector(const CbmStsSector&);
  CbmStsSector operator=(const CbmStsSector&);


  ClassDef(CbmStsSector,1);

};




#endif
// -------------------------------------------------------------------------
// -----                 CbmStsSectorDigiPar header file               -----
// -----                 Created 27/06/05  by V. Friese                -----
// -------------------------------------------------------------------------


/** CbmStsSectorDigiPar.h
 *@author V.Friese <v.friese@gsi.de>
 **
 ** Parameter container for the digitisation of a sector of a STS
 ** strip station.
 ** Supports the following digitisation types:
 ** 1 = hybrid pixel
 ** 2 = strip, readout of all strips
 ** 3 = strip, readout at bottom corner, double metal layer
 ** Coordinates and rot. angle are in the global coordinate system. 
 ** In the internal coordinate system, x is across the front side strips
 ** and y along the front side strips. Irrelevant for pixel detectors.
 ** Angles are stored and accessed in radians, but must be given in
 ** degrees in the constructor.
 **/



#ifndef CBMSTSSECTORDIGIPAR_H
#define CBMSTSSECTORDIGIPAR_H 1


#include "CbmStsSensorDigiPar.h"

#include "TObjArray.h"



class CbmStsSectorDigiPar : public TObject
{

 public:

  /** Default constructor **/
  CbmStsSectorDigiPar();


  /** Standard constructor. For the parameters, see description of
   ** private data members. Angles must be given in radians. **/
  CbmStsSectorDigiPar(Int_t iSector);


  /** Destructor **/
  virtual ~CbmStsSectorDigiPar();


  /** Accessors. See private data members for description **/
  Int_t    GetSectorNr()   const { return fSectorNr; }

  /** Accessors **/
  Int_t      GetSectorNr()    { return fSectorNr; }
  Int_t      GetNSensors()    { return fSensors->GetEntries(); }
  TObjArray* GetSensorArray() { return fSensors; }
  CbmStsSensorDigiPar* GetSensor(Int_t iSensor) {
    return (CbmStsSensorDigiPar*) fSensors->At(iSensor); 
  }


  /** Add parameters of one sensor **/
  void AddSensor(CbmStsSensorDigiPar* sen) { fSensors->Add(sen); }


 private:

  /** Sector number in station **/	
  Int_t      fSectorNr;
  TObjArray* fSensors;       //  Array of sensor parameters

  CbmStsSectorDigiPar(const CbmStsSectorDigiPar&);
  CbmStsSectorDigiPar operator=(const CbmStsSectorDigiPar&);

  ClassDef(CbmStsSectorDigiPar,1);

};


#endif
// -------------------------------------------------------------------------
// -----                      CbmStsStation header file                -----
// -----                  Created 31/03/05  by V. Friese               -----
// -------------------------------------------------------------------------


/** CbmStsStation.h
 *@author V.Friese <v.friese@gsi.de>
 **
 ** This class holds the transport geometry parameters 
 ** of one STS tracking station necessary for digitisation.
 **/


#ifndef CBMSTSSTATION_H
#define CBMSTSSTATION_H 1


#include "TObjArray.h"
#include "TNamed.h"
#include "TString.h"

#include <map>

class CbmStsSector;
class CbmStsSectorDigiPar;


class CbmStsStation : public TNamed
{

 public:

  /** Default constructor **/
  CbmStsStation();


  /** Standard constructor 
  *@param name      Volume name of station
  *@param detId     Detector ID 
  *@param z         z position of station centre [cm]
  *@param d         thickness of station [cm]
  *@param rl        radiation length of material [cm]
  *@param rmin      Inner radius [cm]
  *@param rmax      Outer radius [cm]
  *@param rotation  Rotation angle in global c.s. [rad]
  **/
  CbmStsStation(const char* name, Int_t detId, Double_t z, Double_t d,
		Double_t rl, Double_t rmin, Double_t rmax, 
		Double_t rotation);


  /** Destructor **/
  virtual ~CbmStsStation();


  /** Accessors **/
  Int_t    GetDetectorId() const { return fDetectorId; }
  Int_t    GetSystemId()   const { 
    return ( ( fDetectorId & (15<<24) ) >> 24); }
  Int_t    GetStationNr()  const { 
    return ( ( fDetectorId & (255<<16) ) >> 16 ); }
  Double_t GetZ(Int_t it=0);
  Double_t GetD()          const { return fD; }
  Double_t GetRadLength()  const { return fRadLength; }
  Double_t GetRmin()       const { return fRmin; }
  Double_t GetRmax()       const { return fRmax; }
  Int_t    GetNSectors()   const { return fSectors->GetEntriesFast(); }
  Int_t    GetNChannels();
  TObjArray* GetSectors() { return fSectors; }
  CbmStsSector* GetSector(Int_t iSector) { 
    return (CbmStsSector*) fSectors->At(iSector); }
  CbmStsSector* GetSectorByNr(Int_t sectorNr);

  /** Add one sector to the array **/
  void AddSector(CbmStsSectorDigiPar* sectorPar);
  void AddSector(CbmStsSector* sector);

  Int_t GetNofZ();

  /** Reset all eventwise counters **/
  void Reset();

  /** Output to screen **/
  virtual void Print(Bool_t kLong);


 protected:

  TString    fName;             // Station name
  Int_t      fDetectorId;       // Unique detector ID
  Double32_t fZ;                // z position of station centre [cm]
  Double32_t fD;                // Thickness of station
  Double32_t fRadLength;        // Radiation length of material [cm]
  Double32_t fRmin;             // Inner radius [cm]
  Double32_t fRmax;             // Outer radius [cm]
  Double32_t fRotation;         // Rotation angle in global c.s [rad]
  TObjArray* fSectors;          // Array of CbmStsSectors
  std::map<Int_t, Int_t> fSectorMap; //! Map from sector number to index
  std::map<Int_t, Int_t> fMcIdMap;   //! Map from McId to index
  
  Double_t fSensorZ[30];
 
 private:

  CbmStsStation(const CbmStsStation&);
  CbmStsStation operator=(const CbmStsStation&);

  ClassDef(CbmStsStation,1);

};



#endif
// -------------------------------------------------------------------------
// -----                 CbmStsStationDigiPar header file              -----
// -----                  Created 27/06/05  by V. Friese               -----
// -------------------------------------------------------------------------


/** CbmStsStationDigiPar.h
 *@author V.Friese <v.friese@gsi.de>
 **
 ** Parameter container for the digitisation of a STS strip station.
 ** Holds and manages an array of CbmStsSectorDigiPar objects.
 **/


#ifndef CBMSTSSTATIONDIGIPAR_H
#define CBMSTSSTATIONDIGIPAR_H 1


#include "CbmStsSectorDigiPar.h"

#include "TObjArray.h"


class CbmStsStationDigiPar : public TObject
{

 public:

  /** Default constructor **/
  CbmStsStationDigiPar();


  /** Standard constructor
   *@param  iStation    number of station
   *@param  rotation    Rotation w.r.t. global system [degrees]
   **/
  CbmStsStationDigiPar(Int_t iStation, Double_t rotation);


  /** Destructor */
  virtual ~CbmStsStationDigiPar();


  /** Accessors **/
  Int_t      GetStationNr()   { return fStationNr; }
  Double_t   GetRotation()    { return fRotation; }
  Int_t      GetNSectors()    { return fSectors->GetEntries(); }
  TObjArray* GetSectorArray() { return fSectors; }
  CbmStsSectorDigiPar* GetSector(Int_t iSector) {
    return (CbmStsSectorDigiPar*) fSectors->At(iSector); 
  }


  /** Add parameters of one sector **/
  void AddSector(CbmStsSectorDigiPar* sec) { fSectors->Add(sec); }



 private:

  Int_t      fStationNr;     //  Station identifier
  Double_t   fRotation;      //  Rotation angle in global c.s. [rad]
  TObjArray* fSectors;       //  Array of sector parameters

  CbmStsStationDigiPar(const CbmStsStationDigiPar&);
  CbmStsStationDigiPar operator=(const CbmStsStationDigiPar&);

  ClassDef(CbmStsStationDigiPar,1);

};


#endif
// -------------------------------------------------------------------------
// -----                 CbmStsTrackFinderIdeal header file            -----
// -----                  Created 02/02/05  by V. Friese               -----
// -------------------------------------------------------------------------


/** CbmStsTrackFinderIdeal
 *@author V.Friese <v.friese@gsi.de>
 **
 ** Ideal track finder in the STS for simulated data. 
 ** For each MCTrack having at least 3 StsPoints, a StsTrack is created
 ** and the corresponding StsHits are attached using the correspondence
 ** between StsHit and StsPoint.
 **/


#ifndef CBMSTSTRACKFINDERIDEAL
#define CBMSTSTRACKFINDERIDEAL 1


#include "CbmStsTrackFinder.h"

class TClonesArray;


class CbmStsTrackFinderIdeal : public CbmStsTrackFinder
{

 public:

  /** Default constructor **/
  CbmStsTrackFinderIdeal();


  /** Standard constructor **/
  CbmStsTrackFinderIdeal(Int_t verbose);


  /** Destructor **/
  virtual ~CbmStsTrackFinderIdeal();


  /** Initialisation **/
  virtual void Init();


  /** Track finding algorithm
   ** This just reads MC truth (MCTracks and MCPoints), creates
   ** one StsTrack for each MCTrack and attaches the hits according
   ** to the MCTrack of the corresponding MCPoint
   **
   *@param mHitArray   Array of CbmStsHit
   *@param trackArray  Array of CbmStsTrack
   **
   *@value Number of tracks created
   **/
 virtual Int_t DoFind();



 private:

  /** Arrays of MC information **/
  TClonesArray* fMCTrackArray;
  TClonesArray* fMCPointArray;

  CbmStsTrackFinderIdeal(const CbmStsTrackFinderIdeal&);
  CbmStsTrackFinderIdeal operator=(const CbmStsTrackFinderIdeal&);

  ClassDef(CbmStsTrackFinderIdeal,1);

};


#endif
// -------------------------------------------------------------------------
// -----                CbmStsTrackFitterIdeal header file             -----
// -----                  Created 12/05/06  by D. Kresan               -----
// -------------------------------------------------------------------------


/** CbmStsTrackFitterIdeal
 *@author D.Kresan <D.Kresan@gsi.de>
 **/

#ifndef CBMSTSTRACKFITTERIDEAL
#define CBMSTSTRACKFITTERIDEAL

#include "CbmStsTrackFitter.h"

#include "TDatabasePDG.h"

class CbmStsPoint;
class FairTrackParam;
class CbmStsTrack;
class TClonesArray;


class CbmStsTrackFitterIdeal : public CbmStsTrackFitter
{
 public:
  /** Default constructor **/
  CbmStsTrackFitterIdeal();

  /** Destructor **/
  virtual ~CbmStsTrackFitterIdeal();

  /** Initialisation. **/
  void Init();

  /** Fitting algorithm **/
  Int_t DoFit(CbmStsTrack* pTrack, Int_t pidHypo = 211);

  void Extrapolate( CbmStsTrack* track, Double_t z,
		   FairTrackParam *param ) {}

  /** Set tracks parameters from the MC point **/
  void SetTrackParam(CbmStsPoint* point, FairTrackParam* trackParam, Int_t out = 0);

private:

  /** Data branches **/
  TClonesArray* fArrayMCTrack;
  TClonesArray* fArrayStsPoint;
  TClonesArray* fArrayStsHit;

  TDatabasePDG* dbPDG;

  CbmStsTrackFitterIdeal(const CbmStsTrackFitterIdeal&);
  CbmStsTrackFitterIdeal operator=(const CbmStsTrackFitterIdeal&);

  ClassDef(CbmStsTrackFitterIdeal,1);
};

#endif
// -------------------------------------------------------------------------
// -----                  CbmStsSimulationQa header file               -----
// -----                  Created 02/02/07  by R. Karabowicz           -----
// -------------------------------------------------------------------------


/** CbmStsSimulationQa.h
 *@author R.Karabowicz <r.karabowicz@gsi.de>
 **
 ** Quality check task for CbmStsSimulation
 **/


#ifndef CBMSTSSIMULATIONQA_H
#define CBMSTSSIMULATIONQA_H 1

#include "FairTask.h"

#include "TVector3.h"

class TCanvas;
class TPad;
class TClonesArray;
class TH1F;
class TH2F;
class TH3F;
class TList;
class FairGeoPassivePar;
class CbmGeoStsPar;



class CbmStsSimulationQa : public FairTask
{

 public:

  /** Default constructor **/
  CbmStsSimulationQa();


  /** Standard constructor 
  *@param visualizeBool   Bool to turn visualization on/off
  **/
  CbmStsSimulationQa(Bool_t visualizeBool, Int_t iVerbose = 1);


  /** Destructor **/
  virtual ~CbmStsSimulationQa();


  /** Set parameter containers **/
  virtual void SetParContainers();


  /** Initialisation **/
  virtual InitStatus Init();


  /** Reinitialisation **/
  virtual InitStatus ReInit();


  /** Execution **/
  virtual void Exec(Option_t* opt);



 private:

  /** Finish **/
  virtual void Finish();

  /** Read the geometry parameters **/
  InitStatus GetGeometry();


  /** Create histograms **/
  void CreateHistos();


  /** Reset histograms and counters **/
  void Reset();


  /** Pointers to data arrays **/
  TClonesArray* fMCTracks;           // MCtrack
  TClonesArray* fSTSPoints;          // MCpoints


  /** Geometry parameters **/
  FairGeoPassivePar* fPassGeo;             // Passive geometry parameters
  CbmGeoStsPar*     fStsGeo;              // STS geometry parameters
  TVector3 fTargetPos;                    // Target centre position
  Int_t fNStations;                       // Number of STS stations
  Int_t fStationsMCId[10];                // MC ID of the STS stations
  Int_t fStationNrFromMcId[10000];         // station number from mc id
  Float_t fStationRadius[10];
  Int_t fNSectors[10];                    // Number of STS sectors per station

  
  /** Histograms **/ 
  TH1F* fhMomAll; 
  TH2F *fhYPtMapAll; 
  TH1F *fhPdgCodeAll; 
  TH1F *fhStsPointsAll; 
  TH1F* fhMomRec; 
  TH2F *fhYPtMapRec; 
  TH1F *fhPdgCodeRec; 
  TH1F *fhStsPointsRec; 
  TH2F *fhMomStsPoints; 
  TH3F *fhStsPointsPosition; 
  TH2F *fhStationPoints[10]; 

  TH1F *fhNofEvents;
  TH1F *fhNofStsStations;

  /** List of histograms **/
  TList* fHistoList;


  /** Counters **/
  Int_t fNEvents;

  Bool_t fOnlineAnalysis;
  TCanvas* fOnlineCanvas;
  TPad*    fOnlinePad[10];

  CbmStsSimulationQa(const CbmStsSimulationQa&);
  CbmStsSimulationQa operator=(const CbmStsSimulationQa&);

  ClassDef(CbmStsSimulationQa,1);

};


#endif
				 
//* $Id: */

// -------------------------------------------------------------------------
// -----                     CbmStsFindHitsQa header file              -----
// -----                  Created 01/07/2008  by R. Karabowicz         -----
// -------------------------------------------------------------------------


/** CbmStsFindHitsQa
 *@author Volker Friese <v.friese@gsi.de>
 *@since 11.09.06
 *@version 1.0
 **
 ** CBM task class for finding hits in the STS
 ** Task level RECO
 ** Produces objects of type CbmStsHits out of CbmStsDigi.
 **/


#ifndef CBMSTSFINDHITSQA_H
#define CBMSTSFINDHITSQA_H 1


#include "FairTask.h"

#include "TStopwatch.h"

#include <map>
#include <set>


class TClonesArray;
class CbmGeoStsPar;
class CbmStsDigiPar;
class CbmStsDigiScheme;
class CbmStsSector;
class CbmStsStation;

class TCanvas;
class TPad;
class TH1;
class TH1F;
class TH2F;
class TH3F;
class TList;


class CbmStsFindHitsQa : public FairTask
{


 public :

  /** Default constructor **/
  CbmStsFindHitsQa();


  /** Standard constructor **/
  CbmStsFindHitsQa(Int_t iVerbose);


  /** Constructor with task name **/
  CbmStsFindHitsQa(const char* name, Int_t iVerbose);

  
  CbmStsFindHitsQa(Bool_t visualizeBool, Int_t iVerbose = 1);

  /** Destructor **/
  virtual ~CbmStsFindHitsQa();

  /** Create histograms **/
  void CreateHistos();


  /** Reset histograms and counters **/
  void Reset();

  /** Execution **/
  virtual void Exec(Option_t* opt);

  /** Virtual method Finish **/
  virtual void Finish();


 private:

  /** Pointers to data arrays **/
  CbmGeoStsPar*     fGeoPar;      /** Geometry parameters **/
  CbmStsDigiPar*    fDigiPar;     /** Digitisation parameters **/
  CbmStsDigiScheme* fDigiScheme;  /** Digitisation scheme **/

  TClonesArray* fMCTracks;           // MCtrack
  TClonesArray* fStsPoints;          // StsPoints
  TClonesArray* fStsHits;            // StsHits
  TClonesArray* fMatches;            // StsTrackMatch
  TClonesArray* fStsDigis;           // StsDigi
  TClonesArray* fStsClusters;        // StsCluster

  TStopwatch fTimer;


  TH2F* fhHitPointCorrelation [100];
  TH2F* fhHitPointCorrelationU[100];
  TH2F* fhHitPointCorrelationB[100];
//   TH2F* fhHitPointPuls [100];

  TH3F* fhEnergyLoss[20];
  TH3F* fhIncAngle[20];

  TH2F* fhPoints    [20];
  TH2F* fhRecoPoints[20];

  TH1F* fhHitFindingEfficiency;
  TH2F* fhEffIncAng;
  TH2F* fhEffMom;
  TH2F* fhEffPdgSec;
  TH2F* fhEffPdgPrim;
  TH2F* fhHitPointPull;
  TH2F* fhHitPointCorr;
  
  TH1F* fhNofHits      [20][300][3];     // per station, sector, sensor

  /** List of histograms **/
  TList* fHistoList;
  TList* fHistoListPS[20];

  Int_t    fNStations;
  Int_t    fNEvents;        /** Number of events with success **/
   /** Total real time used for good events **/
   Double_t  fTime1;     
 
  Int_t fNofHits      [20][300][3];     // per station, sector, sensor
   Int_t fNofDigisPChip[20][300][2][20];
  Int_t fNofPoints    [20][300][3];
  Int_t fNofRecoPoints[20][300][3];
  Int_t fNofPointsIncAng     [1000];
  Int_t fNofRecoPointsIncAng [1000];
  Int_t fNofPointsMom        [1000];
  Int_t fNofRecoPointsMom    [1000];
  Int_t fNofRecoPdgSec       [20000];
  Int_t fNofPointsPdgSec     [20000];
  Int_t fNofRecoPdgPrim      [20000];
  Int_t fNofPointsPdgPrim    [20000];
 
  Int_t fNofPointsPrim;
  Int_t fNofPointsSec;
  Int_t fNofRecoPrim;
  Int_t fNofRecoSec;
  Int_t fNofPointsMomSum;
  Int_t fNofRecoPointsMomSum;
  /** Get parameter containers **/
  virtual void SetParContainers();


  /** Intialisation **/
  virtual InitStatus Init();


  /** Reinitialisation **/
  virtual InitStatus ReInit();
  
  Bool_t fOnlineAnalysis;
  TCanvas* recoCanvas;
  TPad*    recoPad[20];

  CbmStsFindHitsQa(const CbmStsFindHitsQa&);
  CbmStsFindHitsQa operator=(const CbmStsFindHitsQa&);

  ClassDef(CbmStsFindHitsQa,1);

};

#endif
// -------------------------------------------------------------------------
// -----                  CbmStsReconstructionQa header file               -----
// -----                  Created 06/02/07  by R. Karabowicz               -----
// -------------------------------------------------------------------------


/** CbmStsReconstructionQa.h
 *@author R.Karabowicz <r.karabowicz@gsi.de>
 **
 ** Quality check task for CbmStsReconstruction
 **/


#ifndef CBMSTSRECONSTRUCTIONQA_H
#define CBMSTSRECONSTRUCTIONQA_H 1


#include "FairTask.h"

#include "TStopwatch.h"
#include "TVector3.h"

#include <map>
#include <set>
class TCanvas;
class TPad;
class TClonesArray;
class TH1;
class TH1F;
class TH2F;
class TH3F;
class TList;
class FairGeoPassivePar;
class CbmGeoStsPar;
class CbmMCTrack;


class CbmStsReconstructionQa : public FairTask
{

 public:

  /** Default constructor **/
  CbmStsReconstructionQa(Int_t iVerbose = 1);


  /** Standard constructor 
  *@param visualizeBool   Bool to turn visualization on/off
  *@param minHits         Minimal number of StsHits for considered MCTracks
  *@param quota           True/all hits for track to be considered reconstructed
  *@param iVerbose        Verbosity level
  **/
  CbmStsReconstructionQa(Bool_t visualizeBool, Int_t minHits, Double_t quota, Int_t iVerbose);


  /** Destructor **/
  virtual ~CbmStsReconstructionQa();


  /** Set parameter containers **/
  virtual void SetParContainers();

  void SetShowStation1(Int_t stNr) {fShowStation1 = stNr-1; }
  void SetShowStation2(Int_t stNr) {fShowStation2 = stNr-1; }

  /** Initialisation **/
  virtual InitStatus Init();


  /** Reinitialisation **/
  virtual InitStatus ReInit();


  /** Execution **/
  virtual void Exec(Option_t* opt);



 private:

  /** Finish **/
  virtual void Finish();

  /** Read the geometry parameters **/
  InitStatus GetGeometry();


  /** Create histograms **/
  void CreateHistos();


  /** Reset histograms and counters **/
  void Reset();


  /** Fill a map from MCTrack index to number of corresponding StsHits **/
  void FillHitMap();


  /** Fill a map from MCTrack index to matched StsTrack index
   *@param nRec  Number of reconstructed tracks (return)
   *@param nGhosts  Number of ghost tracks (return)
   *@param nClones  Number of clone tracks (return)
   **/
  void FillMatchMap(Int_t& nRec, Int_t& nGhosts, Int_t& nClones);


  /** Divide histograms (reco/all) with correct error for the efficiency
   *@param histo1  reconstructed tracks
   *@param histo2  all tracks (normalisation)
   *@param histo3  efficiency
   **/
  void DivideHistos(TH1* histo1, TH1* histo2, TH1* histo3);


  /** Map from MCTrack index to number of attached StsHits **/
  std::map<Int_t, Int_t> fHitMap;
  std::map<CbmMCTrack*, std::set<Int_t> > fHitTrackMap;

  /** Map from MCTrack index to matched StsTrack index **/
  std::map<Int_t, Int_t> fMatchMap;
  

  /** Map from MCTrack index to percentage of matched hits **/
  std::map<Int_t, Double_t> fQualiMap;


  /** Pointers to data arrays **/
  TClonesArray* fMCTracks;           // MCtrack
  TClonesArray* fStsPoints;          // StsPoints
  TClonesArray* fStsHits;            // StsHits
  TClonesArray* fStsTracks;          // StsTrack
  TClonesArray* fMatches;            // StsTrackMatch
  TClonesArray* fStsDigis;           // StsDigi

  /** Geometry parameters **/
  FairGeoPassivePar* fPassGeo;             // Passive geometry parameters
  CbmGeoStsPar*     fStsGeo;              // STS geometry parameters
  TVector3 fTargetPos;                    // Target centre position
  Int_t fNStations;                       // Number of STS stations
  Int_t fStationNrFromMcId[10000];         // station number from mc id
  Int_t fNSectors[20];                    // number of sectors per station
  Double_t fWidthSectors[20][500];        // width of the sectors to calculate nof channels
  Int_t HitSt [100000][10];
  /** Task parameters **/
  Int_t fMinHits;   // Minimal number of StsHits for considered MCTrack
  Double_t fQuota;  // True/all hits for track to be considered reconstructed


  /** Histograms **/
  TH1F* fhMomAccAll,  *fhMomRecAll,  *fhMomEffAll;   // eff. vs. p, all
  TH1F* fhMomAccPrim, *fhMomRecPrim, *fhMomEffPrim;  // eff. vs. p, vertex
  TH1F* fhMomAccSec,  *fhMomRecSec,  *fhMomEffSec;   // eff. vs. p, non-vertex
  TH1F* fhNpAccAll,   *fhNpRecAll,   *fhNpEffAll;    // eff. vs. np, all
  TH1F* fhNpAccPrim,  *fhNpRecPrim,  *fhNpEffPrim;   // eff. vs. np, vertex
  TH1F* fhNpAccSec,   *fhNpRecSec,   *fhNpEffSec;    // eff. vs. np, non-vertex
  TH1F* fhZAccSec,    *fhZRecSec,    *fhZEffSec;     // eff. vs. z, non-vertex
  TH1F* fhNhClones,   *fhNhGhosts;              // # hits of clones and ghosts   
  
  // acc., eff. vs. track direction, vertex
//   TH2F* fhDirEmiPrimM[25], *fhDirAccPrimM[25], *fhDirAcMPrimM[25], *fhDirRecPrimM[25], *fhDirEffPrimM[25];
//   TH2F* fhDirEmiPrimP[25], *fhDirAccPrimP[25], *fhDirAcMPrimP[25], *fhDirRecPrimP[25], *fhDirEffPrimP[25];
  
  Int_t fPartPdgTable[10];
  TH1F *fhMomAccPart[10], *fhMomRecPart[10], *fhMomEffPart[10];

  TH1F* fhMomClones,   *fhMomGhosts;              // # hits of clones and ghosts   

  TH2F* fhMomResAll;
  TH2F* fhMomResPrim;
  TH2F* fhMomResSec;
  TH1F* fhLowBand;
  TH1F* fhHigBand;

  //  TH2F* fhHitPointCorrelation[100];

  TH3F* fhPrimaryVertex;
  TH1F* fhRefTracks;
  TH1F* fhRecRefTracks;

/*   TH1F* fhNofDigisPChip[20][300][2][8];  // per station, sector, side, chip */
/*   TH1F* fhNofFiredDigis[20][300][2];  // per station, sector, side */
/*   TH1F* fhNofHits      [20][300];     // per station, sector */

/*   TH2F* fhEnergyLoss[20]; */

  // histograms for track reconstruction: chi2, covMatr., etc...
  TH1F* fhStsTrackFPos[3];
  TH1F* fhStsTrackLPos[3];
  TH1F* fhStsTrackFDir[2];
  TH1F* fhStsTrackLDir[2];
//   TH1F* fhStsTrackFCovEl[15];
//   TH1F* fhStsTrackLCovEl[15];
  TH1F* fhStsTrackFMom;
  TH1F* fhStsTrackLMom;
  TH1F* fhStsTrackChiSq;

  /** List of histograms **/
  TList* fHistoList;

  TList* fOccupHList;
  
  /** Counters **/
  Int_t fNAccAll, fNAccPrim, fNAccRef, fNAccSec;
  Int_t fNRecAll, fNRecPrim, fNRecRef, fNRecSec;
  Int_t fNGhosts, fNClones;
  Int_t fNStsTracks;
  Int_t    fNEvents;        /** Number of events with success **/
  Int_t    fNEventsFailed;  /** Number of events with failure **/
  Double_t fTime;           /** Total real time used for good events **/

  Bool_t fOnlineAnalysis;
  TCanvas* fOnlineCanvas;
  TPad*    fOnlinePad[10];
  Int_t fShowStation1;
  Int_t fShowStation2;

  Int_t fNofFiredDigis[20][300][2];  // per station, sector, side
  Int_t fNofDigisPChip[20][300][2][8];  // per station, sector, side, chip
  Int_t fNofHits[20][300];           // per station, sector

  /** Timer **/
  TStopwatch fTimer;

  CbmStsReconstructionQa(const CbmStsReconstructionQa&);
  CbmStsReconstructionQa operator=(const CbmStsReconstructionQa&);

  ClassDef(CbmStsReconstructionQa,1);

};


#endif
				 

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"CbmGeoSts", payloadCode, "@",
"CbmGeoStsPar", payloadCode, "@",
"CbmSts", payloadCode, "@",
"CbmStsClusterFinder", payloadCode, "@",
"CbmStsContFact", payloadCode, "@",
"CbmStsDigiPar", payloadCode, "@",
"CbmStsDigiScheme", payloadCode, "@",
"CbmStsDigitize", payloadCode, "@",
"CbmStsDigitizeTb", payloadCode, "@",
"CbmStsFindHits", payloadCode, "@",
"CbmStsFindHitsQa", payloadCode, "@",
"CbmStsFindTracks", payloadCode, "@",
"CbmStsFindTracksQa", payloadCode, "@",
"CbmStsFitTracks", payloadCode, "@",
"CbmStsHitProducerIdeal", payloadCode, "@",
"CbmStsIdealDigitize", payloadCode, "@",
"CbmStsIdealFindHits", payloadCode, "@",
"CbmStsIdealMatchHits", payloadCode, "@",
"CbmStsMatchHits", payloadCode, "@",
"CbmStsMatchTracks", payloadCode, "@",
"CbmStsParAsciiFileIo", payloadCode, "@",
"CbmStsParRootFileIo", payloadCode, "@",
"CbmStsRadTool", payloadCode, "@",
"CbmStsReconstructionQa", payloadCode, "@",
"CbmStsSector", payloadCode, "@",
"CbmStsSectorDigiPar", payloadCode, "@",
"CbmStsSensor", payloadCode, "@",
"CbmStsSensorDigiPar", payloadCode, "@",
"CbmStsSimulationQa", payloadCode, "@",
"CbmStsStation", payloadCode, "@",
"CbmStsStationDigiPar", payloadCode, "@",
"CbmStsTrackFinderIdeal", payloadCode, "@",
"CbmStsTrackFitterIdeal", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__StsDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__StsDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__StsDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__StsDict() {
  TriggerDictionaryInitialization_G__StsDict_Impl();
}
