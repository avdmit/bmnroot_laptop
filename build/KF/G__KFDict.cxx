// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIalexdIbmnroot_devdIbmnrootdIbuilddIKFdIG__KFDict

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
#include "CbmKF.h"
#include "CbmKFFieldMath.h"
#include "CbmKFHit.h"
#include "CbmKFMaterial.h"
#include "CbmKFMath.h"
#include "CbmKFPixelMeasurement.h"
#include "CbmKFPrimaryVertexFinder.h"
#include "CbmKFTrackInterface.h"
#include "CbmKFUMeasurement.h"
#include "CbmKFVertexInterface.h"
#include "CbmKFParticle.h"
#include "Interface/CbmKFStsHit.h"
#include "Interface/CbmKFTrack.h"
#include "Interface/CbmKFVertex.h"
#include "Interface/CbmPVFinderKF.h"
#include "Interface/CbmStsKFTrackFitter.h"
#include "KFQA/KFParticleMatch.h"
#include "KFQA/KFMCParticle.h"
#include "KFQA/CbmKFPartEfficiencies.h"
#include "KFParticlesFinder/CbmKFParticleDatabase.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_CbmKFTrackInterface(void *p = 0);
   static void *newArray_CbmKFTrackInterface(Long_t size, void *p);
   static void delete_CbmKFTrackInterface(void *p);
   static void deleteArray_CbmKFTrackInterface(void *p);
   static void destruct_CbmKFTrackInterface(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmKFTrackInterface*)
   {
      ::CbmKFTrackInterface *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmKFTrackInterface >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmKFTrackInterface", ::CbmKFTrackInterface::Class_Version(), "CbmKFTrackInterface.h", 26,
                  typeid(::CbmKFTrackInterface), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmKFTrackInterface::Dictionary, isa_proxy, 4,
                  sizeof(::CbmKFTrackInterface) );
      instance.SetNew(&new_CbmKFTrackInterface);
      instance.SetNewArray(&newArray_CbmKFTrackInterface);
      instance.SetDelete(&delete_CbmKFTrackInterface);
      instance.SetDeleteArray(&deleteArray_CbmKFTrackInterface);
      instance.SetDestructor(&destruct_CbmKFTrackInterface);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmKFTrackInterface*)
   {
      return GenerateInitInstanceLocal((::CbmKFTrackInterface*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmKFTrackInterface*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmKFMaterial(void *p = 0);
   static void *newArray_CbmKFMaterial(Long_t size, void *p);
   static void delete_CbmKFMaterial(void *p);
   static void deleteArray_CbmKFMaterial(void *p);
   static void destruct_CbmKFMaterial(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmKFMaterial*)
   {
      ::CbmKFMaterial *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmKFMaterial >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmKFMaterial", ::CbmKFMaterial::Class_Version(), "CbmKFMaterial.h", 17,
                  typeid(::CbmKFMaterial), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmKFMaterial::Dictionary, isa_proxy, 4,
                  sizeof(::CbmKFMaterial) );
      instance.SetNew(&new_CbmKFMaterial);
      instance.SetNewArray(&newArray_CbmKFMaterial);
      instance.SetDelete(&delete_CbmKFMaterial);
      instance.SetDeleteArray(&deleteArray_CbmKFMaterial);
      instance.SetDestructor(&destruct_CbmKFMaterial);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmKFMaterial*)
   {
      return GenerateInitInstanceLocal((::CbmKFMaterial*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmKFMaterial*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmKFWall(void *p = 0);
   static void *newArray_CbmKFWall(Long_t size, void *p);
   static void delete_CbmKFWall(void *p);
   static void deleteArray_CbmKFWall(void *p);
   static void destruct_CbmKFWall(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmKFWall*)
   {
      ::CbmKFWall *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmKFWall >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmKFWall", ::CbmKFWall::Class_Version(), "CbmKFMaterial.h", 69,
                  typeid(::CbmKFWall), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmKFWall::Dictionary, isa_proxy, 4,
                  sizeof(::CbmKFWall) );
      instance.SetNew(&new_CbmKFWall);
      instance.SetNewArray(&newArray_CbmKFWall);
      instance.SetDelete(&delete_CbmKFWall);
      instance.SetDeleteArray(&deleteArray_CbmKFWall);
      instance.SetDestructor(&destruct_CbmKFWall);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmKFWall*)
   {
      return GenerateInitInstanceLocal((::CbmKFWall*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmKFWall*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmKFTube(void *p = 0);
   static void *newArray_CbmKFTube(Long_t size, void *p);
   static void delete_CbmKFTube(void *p);
   static void deleteArray_CbmKFTube(void *p);
   static void destruct_CbmKFTube(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmKFTube*)
   {
      ::CbmKFTube *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmKFTube >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmKFTube", ::CbmKFTube::Class_Version(), "CbmKFMaterial.h", 77,
                  typeid(::CbmKFTube), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmKFTube::Dictionary, isa_proxy, 4,
                  sizeof(::CbmKFTube) );
      instance.SetNew(&new_CbmKFTube);
      instance.SetNewArray(&newArray_CbmKFTube);
      instance.SetDelete(&delete_CbmKFTube);
      instance.SetDeleteArray(&deleteArray_CbmKFTube);
      instance.SetDestructor(&destruct_CbmKFTube);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmKFTube*)
   {
      return GenerateInitInstanceLocal((::CbmKFTube*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmKFTube*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmKFBox(void *p = 0);
   static void *newArray_CbmKFBox(Long_t size, void *p);
   static void delete_CbmKFBox(void *p);
   static void deleteArray_CbmKFBox(void *p);
   static void destruct_CbmKFBox(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmKFBox*)
   {
      ::CbmKFBox *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmKFBox >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmKFBox", ::CbmKFBox::Class_Version(), "CbmKFMaterial.h", 97,
                  typeid(::CbmKFBox), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmKFBox::Dictionary, isa_proxy, 4,
                  sizeof(::CbmKFBox) );
      instance.SetNew(&new_CbmKFBox);
      instance.SetNewArray(&newArray_CbmKFBox);
      instance.SetDelete(&delete_CbmKFBox);
      instance.SetDeleteArray(&deleteArray_CbmKFBox);
      instance.SetDestructor(&destruct_CbmKFBox);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmKFBox*)
   {
      return GenerateInitInstanceLocal((::CbmKFBox*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmKFBox*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmKFCone(void *p = 0);
   static void *newArray_CbmKFCone(Long_t size, void *p);
   static void delete_CbmKFCone(void *p);
   static void deleteArray_CbmKFCone(void *p);
   static void destruct_CbmKFCone(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmKFCone*)
   {
      ::CbmKFCone *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmKFCone >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmKFCone", ::CbmKFCone::Class_Version(), "CbmKFMaterial.h", 112,
                  typeid(::CbmKFCone), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmKFCone::Dictionary, isa_proxy, 4,
                  sizeof(::CbmKFCone) );
      instance.SetNew(&new_CbmKFCone);
      instance.SetNewArray(&newArray_CbmKFCone);
      instance.SetDelete(&delete_CbmKFCone);
      instance.SetDeleteArray(&deleteArray_CbmKFCone);
      instance.SetDestructor(&destruct_CbmKFCone);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmKFCone*)
   {
      return GenerateInitInstanceLocal((::CbmKFCone*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmKFCone*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmKF(void *p = 0);
   static void *newArray_CbmKF(Long_t size, void *p);
   static void delete_CbmKF(void *p);
   static void deleteArray_CbmKF(void *p);
   static void destruct_CbmKF(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmKF*)
   {
      ::CbmKF *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmKF >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmKF", ::CbmKF::Class_Version(), "", 36,
                  typeid(::CbmKF), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmKF::Dictionary, isa_proxy, 4,
                  sizeof(::CbmKF) );
      instance.SetNew(&new_CbmKF);
      instance.SetNewArray(&newArray_CbmKF);
      instance.SetDelete(&delete_CbmKF);
      instance.SetDeleteArray(&deleteArray_CbmKF);
      instance.SetDestructor(&destruct_CbmKF);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmKF*)
   {
      return GenerateInitInstanceLocal((::CbmKF*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmKF*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmKFFieldMath(void *p = 0);
   static void *newArray_CbmKFFieldMath(Long_t size, void *p);
   static void delete_CbmKFFieldMath(void *p);
   static void deleteArray_CbmKFFieldMath(void *p);
   static void destruct_CbmKFFieldMath(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmKFFieldMath*)
   {
      ::CbmKFFieldMath *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmKFFieldMath >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmKFFieldMath", ::CbmKFFieldMath::Class_Version(), "", 139,
                  typeid(::CbmKFFieldMath), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmKFFieldMath::Dictionary, isa_proxy, 4,
                  sizeof(::CbmKFFieldMath) );
      instance.SetNew(&new_CbmKFFieldMath);
      instance.SetNewArray(&newArray_CbmKFFieldMath);
      instance.SetDelete(&delete_CbmKFFieldMath);
      instance.SetDeleteArray(&deleteArray_CbmKFFieldMath);
      instance.SetDestructor(&destruct_CbmKFFieldMath);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmKFFieldMath*)
   {
      return GenerateInitInstanceLocal((::CbmKFFieldMath*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmKFFieldMath*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_CbmKFHit(void *p);
   static void deleteArray_CbmKFHit(void *p);
   static void destruct_CbmKFHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmKFHit*)
   {
      ::CbmKFHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmKFHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmKFHit", ::CbmKFHit::Class_Version(), "", 202,
                  typeid(::CbmKFHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmKFHit::Dictionary, isa_proxy, 4,
                  sizeof(::CbmKFHit) );
      instance.SetDelete(&delete_CbmKFHit);
      instance.SetDeleteArray(&deleteArray_CbmKFHit);
      instance.SetDestructor(&destruct_CbmKFHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmKFHit*)
   {
      return GenerateInitInstanceLocal((::CbmKFHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmKFHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmKFMath(void *p = 0);
   static void *newArray_CbmKFMath(Long_t size, void *p);
   static void delete_CbmKFMath(void *p);
   static void deleteArray_CbmKFMath(void *p);
   static void destruct_CbmKFMath(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmKFMath*)
   {
      ::CbmKFMath *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmKFMath >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmKFMath", ::CbmKFMath::Class_Version(), "", 372,
                  typeid(::CbmKFMath), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmKFMath::Dictionary, isa_proxy, 4,
                  sizeof(::CbmKFMath) );
      instance.SetNew(&new_CbmKFMath);
      instance.SetNewArray(&newArray_CbmKFMath);
      instance.SetDelete(&delete_CbmKFMath);
      instance.SetDeleteArray(&deleteArray_CbmKFMath);
      instance.SetDestructor(&destruct_CbmKFMath);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmKFMath*)
   {
      return GenerateInitInstanceLocal((::CbmKFMath*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmKFMath*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmKFPixelMeasurement(void *p = 0);
   static void *newArray_CbmKFPixelMeasurement(Long_t size, void *p);
   static void delete_CbmKFPixelMeasurement(void *p);
   static void deleteArray_CbmKFPixelMeasurement(void *p);
   static void destruct_CbmKFPixelMeasurement(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmKFPixelMeasurement*)
   {
      ::CbmKFPixelMeasurement *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmKFPixelMeasurement >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmKFPixelMeasurement", ::CbmKFPixelMeasurement::Class_Version(), "", 435,
                  typeid(::CbmKFPixelMeasurement), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmKFPixelMeasurement::Dictionary, isa_proxy, 4,
                  sizeof(::CbmKFPixelMeasurement) );
      instance.SetNew(&new_CbmKFPixelMeasurement);
      instance.SetNewArray(&newArray_CbmKFPixelMeasurement);
      instance.SetDelete(&delete_CbmKFPixelMeasurement);
      instance.SetDeleteArray(&deleteArray_CbmKFPixelMeasurement);
      instance.SetDestructor(&destruct_CbmKFPixelMeasurement);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmKFPixelMeasurement*)
   {
      return GenerateInitInstanceLocal((::CbmKFPixelMeasurement*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmKFPixelMeasurement*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmKFVertexInterface(void *p = 0);
   static void *newArray_CbmKFVertexInterface(Long_t size, void *p);
   static void delete_CbmKFVertexInterface(void *p);
   static void deleteArray_CbmKFVertexInterface(void *p);
   static void destruct_CbmKFVertexInterface(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmKFVertexInterface*)
   {
      ::CbmKFVertexInterface *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmKFVertexInterface >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmKFVertexInterface", ::CbmKFVertexInterface::Class_Version(), "CbmKFVertexInterface.h", 24,
                  typeid(::CbmKFVertexInterface), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmKFVertexInterface::Dictionary, isa_proxy, 4,
                  sizeof(::CbmKFVertexInterface) );
      instance.SetNew(&new_CbmKFVertexInterface);
      instance.SetNewArray(&newArray_CbmKFVertexInterface);
      instance.SetDelete(&delete_CbmKFVertexInterface);
      instance.SetDeleteArray(&deleteArray_CbmKFVertexInterface);
      instance.SetDestructor(&destruct_CbmKFVertexInterface);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmKFVertexInterface*)
   {
      return GenerateInitInstanceLocal((::CbmKFVertexInterface*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmKFVertexInterface*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmKFPrimaryVertexFinder(void *p = 0);
   static void *newArray_CbmKFPrimaryVertexFinder(Long_t size, void *p);
   static void delete_CbmKFPrimaryVertexFinder(void *p);
   static void deleteArray_CbmKFPrimaryVertexFinder(void *p);
   static void destruct_CbmKFPrimaryVertexFinder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmKFPrimaryVertexFinder*)
   {
      ::CbmKFPrimaryVertexFinder *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmKFPrimaryVertexFinder >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmKFPrimaryVertexFinder", ::CbmKFPrimaryVertexFinder::Class_Version(), "", 472,
                  typeid(::CbmKFPrimaryVertexFinder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmKFPrimaryVertexFinder::Dictionary, isa_proxy, 4,
                  sizeof(::CbmKFPrimaryVertexFinder) );
      instance.SetNew(&new_CbmKFPrimaryVertexFinder);
      instance.SetNewArray(&newArray_CbmKFPrimaryVertexFinder);
      instance.SetDelete(&delete_CbmKFPrimaryVertexFinder);
      instance.SetDeleteArray(&deleteArray_CbmKFPrimaryVertexFinder);
      instance.SetDestructor(&destruct_CbmKFPrimaryVertexFinder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmKFPrimaryVertexFinder*)
   {
      return GenerateInitInstanceLocal((::CbmKFPrimaryVertexFinder*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmKFPrimaryVertexFinder*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmKFUMeasurement(void *p = 0);
   static void *newArray_CbmKFUMeasurement(Long_t size, void *p);
   static void delete_CbmKFUMeasurement(void *p);
   static void deleteArray_CbmKFUMeasurement(void *p);
   static void destruct_CbmKFUMeasurement(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmKFUMeasurement*)
   {
      ::CbmKFUMeasurement *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmKFUMeasurement >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmKFUMeasurement", ::CbmKFUMeasurement::Class_Version(), "", 649,
                  typeid(::CbmKFUMeasurement), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmKFUMeasurement::Dictionary, isa_proxy, 4,
                  sizeof(::CbmKFUMeasurement) );
      instance.SetNew(&new_CbmKFUMeasurement);
      instance.SetNewArray(&newArray_CbmKFUMeasurement);
      instance.SetDelete(&delete_CbmKFUMeasurement);
      instance.SetDeleteArray(&deleteArray_CbmKFUMeasurement);
      instance.SetDestructor(&destruct_CbmKFUMeasurement);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmKFUMeasurement*)
   {
      return GenerateInitInstanceLocal((::CbmKFUMeasurement*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmKFUMeasurement*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmKFParticle(void *p = 0);
   static void *newArray_CbmKFParticle(Long_t size, void *p);
   static void delete_CbmKFParticle(void *p);
   static void deleteArray_CbmKFParticle(void *p);
   static void destruct_CbmKFParticle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmKFParticle*)
   {
      ::CbmKFParticle *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmKFParticle >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmKFParticle", ::CbmKFParticle::Class_Version(), "", 752,
                  typeid(::CbmKFParticle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmKFParticle::Dictionary, isa_proxy, 4,
                  sizeof(::CbmKFParticle) );
      instance.SetNew(&new_CbmKFParticle);
      instance.SetNewArray(&newArray_CbmKFParticle);
      instance.SetDelete(&delete_CbmKFParticle);
      instance.SetDeleteArray(&deleteArray_CbmKFParticle);
      instance.SetDestructor(&destruct_CbmKFParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmKFParticle*)
   {
      return GenerateInitInstanceLocal((::CbmKFParticle*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmKFParticle*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmKFStsHit(void *p = 0);
   static void *newArray_CbmKFStsHit(Long_t size, void *p);
   static void delete_CbmKFStsHit(void *p);
   static void deleteArray_CbmKFStsHit(void *p);
   static void destruct_CbmKFStsHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmKFStsHit*)
   {
      ::CbmKFStsHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmKFStsHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmKFStsHit", ::CbmKFStsHit::Class_Version(), "", 892,
                  typeid(::CbmKFStsHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmKFStsHit::Dictionary, isa_proxy, 4,
                  sizeof(::CbmKFStsHit) );
      instance.SetNew(&new_CbmKFStsHit);
      instance.SetNewArray(&newArray_CbmKFStsHit);
      instance.SetDelete(&delete_CbmKFStsHit);
      instance.SetDeleteArray(&deleteArray_CbmKFStsHit);
      instance.SetDestructor(&destruct_CbmKFStsHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmKFStsHit*)
   {
      return GenerateInitInstanceLocal((::CbmKFStsHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmKFStsHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmKFTrack(void *p = 0);
   static void *newArray_CbmKFTrack(Long_t size, void *p);
   static void delete_CbmKFTrack(void *p);
   static void deleteArray_CbmKFTrack(void *p);
   static void destruct_CbmKFTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmKFTrack*)
   {
      ::CbmKFTrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmKFTrack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmKFTrack", ::CbmKFTrack::Class_Version(), "", 950,
                  typeid(::CbmKFTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmKFTrack::Dictionary, isa_proxy, 4,
                  sizeof(::CbmKFTrack) );
      instance.SetNew(&new_CbmKFTrack);
      instance.SetNewArray(&newArray_CbmKFTrack);
      instance.SetDelete(&delete_CbmKFTrack);
      instance.SetDeleteArray(&deleteArray_CbmKFTrack);
      instance.SetDestructor(&destruct_CbmKFTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmKFTrack*)
   {
      return GenerateInitInstanceLocal((::CbmKFTrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmKFTrack*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmKFVertex(void *p = 0);
   static void *newArray_CbmKFVertex(Long_t size, void *p);
   static void delete_CbmKFVertex(void *p);
   static void deleteArray_CbmKFVertex(void *p);
   static void destruct_CbmKFVertex(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmKFVertex*)
   {
      ::CbmKFVertex *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmKFVertex >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmKFVertex", ::CbmKFVertex::Class_Version(), "", 999,
                  typeid(::CbmKFVertex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmKFVertex::Dictionary, isa_proxy, 4,
                  sizeof(::CbmKFVertex) );
      instance.SetNew(&new_CbmKFVertex);
      instance.SetNewArray(&newArray_CbmKFVertex);
      instance.SetDelete(&delete_CbmKFVertex);
      instance.SetDeleteArray(&deleteArray_CbmKFVertex);
      instance.SetDestructor(&destruct_CbmKFVertex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmKFVertex*)
   {
      return GenerateInitInstanceLocal((::CbmKFVertex*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmKFVertex*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmPVFinderKF(void *p = 0);
   static void *newArray_CbmPVFinderKF(Long_t size, void *p);
   static void delete_CbmPVFinderKF(void *p);
   static void deleteArray_CbmPVFinderKF(void *p);
   static void destruct_CbmPVFinderKF(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmPVFinderKF*)
   {
      ::CbmPVFinderKF *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmPVFinderKF >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmPVFinderKF", ::CbmPVFinderKF::Class_Version(), "", 1039,
                  typeid(::CbmPVFinderKF), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmPVFinderKF::Dictionary, isa_proxy, 4,
                  sizeof(::CbmPVFinderKF) );
      instance.SetNew(&new_CbmPVFinderKF);
      instance.SetNewArray(&newArray_CbmPVFinderKF);
      instance.SetDelete(&delete_CbmPVFinderKF);
      instance.SetDeleteArray(&deleteArray_CbmPVFinderKF);
      instance.SetDestructor(&destruct_CbmPVFinderKF);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmPVFinderKF*)
   {
      return GenerateInitInstanceLocal((::CbmPVFinderKF*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmPVFinderKF*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmStsKFTrackFitter(void *p = 0);
   static void *newArray_CbmStsKFTrackFitter(Long_t size, void *p);
   static void delete_CbmStsKFTrackFitter(void *p);
   static void deleteArray_CbmStsKFTrackFitter(void *p);
   static void destruct_CbmStsKFTrackFitter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmStsKFTrackFitter*)
   {
      ::CbmStsKFTrackFitter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmStsKFTrackFitter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmStsKFTrackFitter", ::CbmStsKFTrackFitter::Class_Version(), "", 1077,
                  typeid(::CbmStsKFTrackFitter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmStsKFTrackFitter::Dictionary, isa_proxy, 4,
                  sizeof(::CbmStsKFTrackFitter) );
      instance.SetNew(&new_CbmStsKFTrackFitter);
      instance.SetNewArray(&newArray_CbmStsKFTrackFitter);
      instance.SetDelete(&delete_CbmStsKFTrackFitter);
      instance.SetDeleteArray(&deleteArray_CbmStsKFTrackFitter);
      instance.SetDestructor(&destruct_CbmStsKFTrackFitter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmStsKFTrackFitter*)
   {
      return GenerateInitInstanceLocal((::CbmStsKFTrackFitter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmStsKFTrackFitter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KFParticleMatch(void *p = 0);
   static void *newArray_KFParticleMatch(Long_t size, void *p);
   static void delete_KFParticleMatch(void *p);
   static void deleteArray_KFParticleMatch(void *p);
   static void destruct_KFParticleMatch(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KFParticleMatch*)
   {
      ::KFParticleMatch *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KFParticleMatch >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KFParticleMatch", ::KFParticleMatch::Class_Version(), "", 1172,
                  typeid(::KFParticleMatch), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::KFParticleMatch::Dictionary, isa_proxy, 4,
                  sizeof(::KFParticleMatch) );
      instance.SetNew(&new_KFParticleMatch);
      instance.SetNewArray(&newArray_KFParticleMatch);
      instance.SetDelete(&delete_KFParticleMatch);
      instance.SetDeleteArray(&deleteArray_KFParticleMatch);
      instance.SetDestructor(&destruct_KFParticleMatch);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KFParticleMatch*)
   {
      return GenerateInitInstanceLocal((::KFParticleMatch*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::KFParticleMatch*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_KFMCParticle(void *p = 0);
   static void *newArray_KFMCParticle(Long_t size, void *p);
   static void delete_KFMCParticle(void *p);
   static void deleteArray_KFMCParticle(void *p);
   static void destruct_KFMCParticle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::KFMCParticle*)
   {
      ::KFMCParticle *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::KFMCParticle >(0);
      static ::ROOT::TGenericClassInfo 
         instance("KFMCParticle", ::KFMCParticle::Class_Version(), "", 1239,
                  typeid(::KFMCParticle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::KFMCParticle::Dictionary, isa_proxy, 4,
                  sizeof(::KFMCParticle) );
      instance.SetNew(&new_KFMCParticle);
      instance.SetNewArray(&newArray_KFMCParticle);
      instance.SetDelete(&delete_KFMCParticle);
      instance.SetDeleteArray(&deleteArray_KFMCParticle);
      instance.SetDestructor(&destruct_KFMCParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::KFMCParticle*)
   {
      return GenerateInitInstanceLocal((::KFMCParticle*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::KFMCParticle*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CbmKFPartEfficiencies(void *p = 0);
   static void *newArray_CbmKFPartEfficiencies(Long_t size, void *p);
   static void delete_CbmKFPartEfficiencies(void *p);
   static void deleteArray_CbmKFPartEfficiencies(void *p);
   static void destruct_CbmKFPartEfficiencies(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CbmKFPartEfficiencies*)
   {
      ::CbmKFPartEfficiencies *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CbmKFPartEfficiencies >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CbmKFPartEfficiencies", ::CbmKFPartEfficiencies::Class_Version(), "", 1282,
                  typeid(::CbmKFPartEfficiencies), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CbmKFPartEfficiencies::Dictionary, isa_proxy, 4,
                  sizeof(::CbmKFPartEfficiencies) );
      instance.SetNew(&new_CbmKFPartEfficiencies);
      instance.SetNewArray(&newArray_CbmKFPartEfficiencies);
      instance.SetDelete(&delete_CbmKFPartEfficiencies);
      instance.SetDeleteArray(&deleteArray_CbmKFPartEfficiencies);
      instance.SetDestructor(&destruct_CbmKFPartEfficiencies);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CbmKFPartEfficiencies*)
   {
      return GenerateInitInstanceLocal((::CbmKFPartEfficiencies*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CbmKFPartEfficiencies*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr CbmKFTrackInterface::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmKFTrackInterface::Class_Name()
{
   return "CbmKFTrackInterface";
}

//______________________________________________________________________________
const char *CbmKFTrackInterface::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFTrackInterface*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmKFTrackInterface::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFTrackInterface*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmKFTrackInterface::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFTrackInterface*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmKFTrackInterface::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFTrackInterface*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmKFMaterial::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmKFMaterial::Class_Name()
{
   return "CbmKFMaterial";
}

//______________________________________________________________________________
const char *CbmKFMaterial::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFMaterial*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmKFMaterial::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFMaterial*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmKFMaterial::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFMaterial*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmKFMaterial::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFMaterial*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmKFWall::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmKFWall::Class_Name()
{
   return "CbmKFWall";
}

//______________________________________________________________________________
const char *CbmKFWall::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFWall*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmKFWall::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFWall*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmKFWall::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFWall*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmKFWall::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFWall*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmKFTube::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmKFTube::Class_Name()
{
   return "CbmKFTube";
}

//______________________________________________________________________________
const char *CbmKFTube::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFTube*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmKFTube::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFTube*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmKFTube::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFTube*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmKFTube::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFTube*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmKFBox::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmKFBox::Class_Name()
{
   return "CbmKFBox";
}

//______________________________________________________________________________
const char *CbmKFBox::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFBox*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmKFBox::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFBox*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmKFBox::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFBox*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmKFBox::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFBox*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmKFCone::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmKFCone::Class_Name()
{
   return "CbmKFCone";
}

//______________________________________________________________________________
const char *CbmKFCone::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFCone*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmKFCone::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFCone*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmKFCone::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFCone*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmKFCone::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFCone*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmKF::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmKF::Class_Name()
{
   return "CbmKF";
}

//______________________________________________________________________________
const char *CbmKF::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKF*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmKF::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKF*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmKF::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKF*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmKF::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKF*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmKFFieldMath::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmKFFieldMath::Class_Name()
{
   return "CbmKFFieldMath";
}

//______________________________________________________________________________
const char *CbmKFFieldMath::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFFieldMath*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmKFFieldMath::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFFieldMath*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmKFFieldMath::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFFieldMath*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmKFFieldMath::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFFieldMath*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmKFHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmKFHit::Class_Name()
{
   return "CbmKFHit";
}

//______________________________________________________________________________
const char *CbmKFHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmKFHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmKFHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmKFHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmKFMath::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmKFMath::Class_Name()
{
   return "CbmKFMath";
}

//______________________________________________________________________________
const char *CbmKFMath::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFMath*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmKFMath::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFMath*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmKFMath::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFMath*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmKFMath::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFMath*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmKFPixelMeasurement::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmKFPixelMeasurement::Class_Name()
{
   return "CbmKFPixelMeasurement";
}

//______________________________________________________________________________
const char *CbmKFPixelMeasurement::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFPixelMeasurement*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmKFPixelMeasurement::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFPixelMeasurement*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmKFPixelMeasurement::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFPixelMeasurement*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmKFPixelMeasurement::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFPixelMeasurement*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmKFVertexInterface::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmKFVertexInterface::Class_Name()
{
   return "CbmKFVertexInterface";
}

//______________________________________________________________________________
const char *CbmKFVertexInterface::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFVertexInterface*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmKFVertexInterface::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFVertexInterface*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmKFVertexInterface::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFVertexInterface*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmKFVertexInterface::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFVertexInterface*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmKFPrimaryVertexFinder::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmKFPrimaryVertexFinder::Class_Name()
{
   return "CbmKFPrimaryVertexFinder";
}

//______________________________________________________________________________
const char *CbmKFPrimaryVertexFinder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFPrimaryVertexFinder*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmKFPrimaryVertexFinder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFPrimaryVertexFinder*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmKFPrimaryVertexFinder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFPrimaryVertexFinder*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmKFPrimaryVertexFinder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFPrimaryVertexFinder*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmKFUMeasurement::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmKFUMeasurement::Class_Name()
{
   return "CbmKFUMeasurement";
}

//______________________________________________________________________________
const char *CbmKFUMeasurement::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFUMeasurement*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmKFUMeasurement::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFUMeasurement*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmKFUMeasurement::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFUMeasurement*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmKFUMeasurement::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFUMeasurement*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmKFParticle::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmKFParticle::Class_Name()
{
   return "CbmKFParticle";
}

//______________________________________________________________________________
const char *CbmKFParticle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFParticle*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmKFParticle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFParticle*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmKFParticle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFParticle*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmKFParticle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFParticle*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmKFStsHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmKFStsHit::Class_Name()
{
   return "CbmKFStsHit";
}

//______________________________________________________________________________
const char *CbmKFStsHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFStsHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmKFStsHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFStsHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmKFStsHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFStsHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmKFStsHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFStsHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmKFTrack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmKFTrack::Class_Name()
{
   return "CbmKFTrack";
}

//______________________________________________________________________________
const char *CbmKFTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFTrack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmKFTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFTrack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmKFTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFTrack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmKFTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFTrack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmKFVertex::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmKFVertex::Class_Name()
{
   return "CbmKFVertex";
}

//______________________________________________________________________________
const char *CbmKFVertex::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFVertex*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmKFVertex::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFVertex*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmKFVertex::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFVertex*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmKFVertex::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFVertex*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmPVFinderKF::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmPVFinderKF::Class_Name()
{
   return "CbmPVFinderKF";
}

//______________________________________________________________________________
const char *CbmPVFinderKF::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmPVFinderKF*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmPVFinderKF::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmPVFinderKF*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmPVFinderKF::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmPVFinderKF*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmPVFinderKF::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmPVFinderKF*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmStsKFTrackFitter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmStsKFTrackFitter::Class_Name()
{
   return "CbmStsKFTrackFitter";
}

//______________________________________________________________________________
const char *CbmStsKFTrackFitter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsKFTrackFitter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmStsKFTrackFitter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmStsKFTrackFitter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmStsKFTrackFitter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsKFTrackFitter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmStsKFTrackFitter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmStsKFTrackFitter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KFParticleMatch::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KFParticleMatch::Class_Name()
{
   return "KFParticleMatch";
}

//______________________________________________________________________________
const char *KFParticleMatch::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KFParticleMatch*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KFParticleMatch::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KFParticleMatch*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KFParticleMatch::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KFParticleMatch*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KFParticleMatch::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KFParticleMatch*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr KFMCParticle::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KFMCParticle::Class_Name()
{
   return "KFMCParticle";
}

//______________________________________________________________________________
const char *KFMCParticle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KFMCParticle*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KFMCParticle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::KFMCParticle*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KFMCParticle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KFMCParticle*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KFMCParticle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::KFMCParticle*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CbmKFPartEfficiencies::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CbmKFPartEfficiencies::Class_Name()
{
   return "CbmKFPartEfficiencies";
}

//______________________________________________________________________________
const char *CbmKFPartEfficiencies::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFPartEfficiencies*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CbmKFPartEfficiencies::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CbmKFPartEfficiencies*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CbmKFPartEfficiencies::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFPartEfficiencies*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CbmKFPartEfficiencies::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CbmKFPartEfficiencies*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void CbmKFTrackInterface::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmKFTrackInterface.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmKFTrackInterface::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmKFTrackInterface::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmKFTrackInterface(void *p) {
      return  p ? new(p) ::CbmKFTrackInterface : new ::CbmKFTrackInterface;
   }
   static void *newArray_CbmKFTrackInterface(Long_t nElements, void *p) {
      return p ? new(p) ::CbmKFTrackInterface[nElements] : new ::CbmKFTrackInterface[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmKFTrackInterface(void *p) {
      delete ((::CbmKFTrackInterface*)p);
   }
   static void deleteArray_CbmKFTrackInterface(void *p) {
      delete [] ((::CbmKFTrackInterface*)p);
   }
   static void destruct_CbmKFTrackInterface(void *p) {
      typedef ::CbmKFTrackInterface current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmKFTrackInterface

//______________________________________________________________________________
void CbmKFMaterial::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmKFMaterial.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmKFMaterial::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmKFMaterial::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmKFMaterial(void *p) {
      return  p ? new(p) ::CbmKFMaterial : new ::CbmKFMaterial;
   }
   static void *newArray_CbmKFMaterial(Long_t nElements, void *p) {
      return p ? new(p) ::CbmKFMaterial[nElements] : new ::CbmKFMaterial[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmKFMaterial(void *p) {
      delete ((::CbmKFMaterial*)p);
   }
   static void deleteArray_CbmKFMaterial(void *p) {
      delete [] ((::CbmKFMaterial*)p);
   }
   static void destruct_CbmKFMaterial(void *p) {
      typedef ::CbmKFMaterial current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmKFMaterial

//______________________________________________________________________________
void CbmKFWall::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmKFWall.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmKFWall::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmKFWall::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmKFWall(void *p) {
      return  p ? new(p) ::CbmKFWall : new ::CbmKFWall;
   }
   static void *newArray_CbmKFWall(Long_t nElements, void *p) {
      return p ? new(p) ::CbmKFWall[nElements] : new ::CbmKFWall[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmKFWall(void *p) {
      delete ((::CbmKFWall*)p);
   }
   static void deleteArray_CbmKFWall(void *p) {
      delete [] ((::CbmKFWall*)p);
   }
   static void destruct_CbmKFWall(void *p) {
      typedef ::CbmKFWall current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmKFWall

//______________________________________________________________________________
void CbmKFTube::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmKFTube.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmKFTube::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmKFTube::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmKFTube(void *p) {
      return  p ? new(p) ::CbmKFTube : new ::CbmKFTube;
   }
   static void *newArray_CbmKFTube(Long_t nElements, void *p) {
      return p ? new(p) ::CbmKFTube[nElements] : new ::CbmKFTube[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmKFTube(void *p) {
      delete ((::CbmKFTube*)p);
   }
   static void deleteArray_CbmKFTube(void *p) {
      delete [] ((::CbmKFTube*)p);
   }
   static void destruct_CbmKFTube(void *p) {
      typedef ::CbmKFTube current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmKFTube

//______________________________________________________________________________
void CbmKFBox::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmKFBox.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmKFBox::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmKFBox::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmKFBox(void *p) {
      return  p ? new(p) ::CbmKFBox : new ::CbmKFBox;
   }
   static void *newArray_CbmKFBox(Long_t nElements, void *p) {
      return p ? new(p) ::CbmKFBox[nElements] : new ::CbmKFBox[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmKFBox(void *p) {
      delete ((::CbmKFBox*)p);
   }
   static void deleteArray_CbmKFBox(void *p) {
      delete [] ((::CbmKFBox*)p);
   }
   static void destruct_CbmKFBox(void *p) {
      typedef ::CbmKFBox current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmKFBox

//______________________________________________________________________________
void CbmKFCone::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmKFCone.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmKFCone::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmKFCone::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmKFCone(void *p) {
      return  p ? new(p) ::CbmKFCone : new ::CbmKFCone;
   }
   static void *newArray_CbmKFCone(Long_t nElements, void *p) {
      return p ? new(p) ::CbmKFCone[nElements] : new ::CbmKFCone[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmKFCone(void *p) {
      delete ((::CbmKFCone*)p);
   }
   static void deleteArray_CbmKFCone(void *p) {
      delete [] ((::CbmKFCone*)p);
   }
   static void destruct_CbmKFCone(void *p) {
      typedef ::CbmKFCone current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmKFCone

//______________________________________________________________________________
void CbmKF::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmKF.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmKF::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmKF::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmKF(void *p) {
      return  p ? new(p) ::CbmKF : new ::CbmKF;
   }
   static void *newArray_CbmKF(Long_t nElements, void *p) {
      return p ? new(p) ::CbmKF[nElements] : new ::CbmKF[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmKF(void *p) {
      delete ((::CbmKF*)p);
   }
   static void deleteArray_CbmKF(void *p) {
      delete [] ((::CbmKF*)p);
   }
   static void destruct_CbmKF(void *p) {
      typedef ::CbmKF current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmKF

//______________________________________________________________________________
void CbmKFFieldMath::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmKFFieldMath.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmKFFieldMath::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmKFFieldMath::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmKFFieldMath(void *p) {
      return  p ? new(p) ::CbmKFFieldMath : new ::CbmKFFieldMath;
   }
   static void *newArray_CbmKFFieldMath(Long_t nElements, void *p) {
      return p ? new(p) ::CbmKFFieldMath[nElements] : new ::CbmKFFieldMath[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmKFFieldMath(void *p) {
      delete ((::CbmKFFieldMath*)p);
   }
   static void deleteArray_CbmKFFieldMath(void *p) {
      delete [] ((::CbmKFFieldMath*)p);
   }
   static void destruct_CbmKFFieldMath(void *p) {
      typedef ::CbmKFFieldMath current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmKFFieldMath

//______________________________________________________________________________
void CbmKFHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmKFHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmKFHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmKFHit::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_CbmKFHit(void *p) {
      delete ((::CbmKFHit*)p);
   }
   static void deleteArray_CbmKFHit(void *p) {
      delete [] ((::CbmKFHit*)p);
   }
   static void destruct_CbmKFHit(void *p) {
      typedef ::CbmKFHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmKFHit

//______________________________________________________________________________
void CbmKFMath::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmKFMath.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmKFMath::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmKFMath::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmKFMath(void *p) {
      return  p ? new(p) ::CbmKFMath : new ::CbmKFMath;
   }
   static void *newArray_CbmKFMath(Long_t nElements, void *p) {
      return p ? new(p) ::CbmKFMath[nElements] : new ::CbmKFMath[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmKFMath(void *p) {
      delete ((::CbmKFMath*)p);
   }
   static void deleteArray_CbmKFMath(void *p) {
      delete [] ((::CbmKFMath*)p);
   }
   static void destruct_CbmKFMath(void *p) {
      typedef ::CbmKFMath current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmKFMath

//______________________________________________________________________________
void CbmKFPixelMeasurement::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmKFPixelMeasurement.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmKFPixelMeasurement::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmKFPixelMeasurement::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmKFPixelMeasurement(void *p) {
      return  p ? new(p) ::CbmKFPixelMeasurement : new ::CbmKFPixelMeasurement;
   }
   static void *newArray_CbmKFPixelMeasurement(Long_t nElements, void *p) {
      return p ? new(p) ::CbmKFPixelMeasurement[nElements] : new ::CbmKFPixelMeasurement[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmKFPixelMeasurement(void *p) {
      delete ((::CbmKFPixelMeasurement*)p);
   }
   static void deleteArray_CbmKFPixelMeasurement(void *p) {
      delete [] ((::CbmKFPixelMeasurement*)p);
   }
   static void destruct_CbmKFPixelMeasurement(void *p) {
      typedef ::CbmKFPixelMeasurement current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmKFPixelMeasurement

//______________________________________________________________________________
void CbmKFVertexInterface::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmKFVertexInterface.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmKFVertexInterface::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmKFVertexInterface::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmKFVertexInterface(void *p) {
      return  p ? new(p) ::CbmKFVertexInterface : new ::CbmKFVertexInterface;
   }
   static void *newArray_CbmKFVertexInterface(Long_t nElements, void *p) {
      return p ? new(p) ::CbmKFVertexInterface[nElements] : new ::CbmKFVertexInterface[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmKFVertexInterface(void *p) {
      delete ((::CbmKFVertexInterface*)p);
   }
   static void deleteArray_CbmKFVertexInterface(void *p) {
      delete [] ((::CbmKFVertexInterface*)p);
   }
   static void destruct_CbmKFVertexInterface(void *p) {
      typedef ::CbmKFVertexInterface current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmKFVertexInterface

//______________________________________________________________________________
void CbmKFPrimaryVertexFinder::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmKFPrimaryVertexFinder.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmKFPrimaryVertexFinder::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmKFPrimaryVertexFinder::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmKFPrimaryVertexFinder(void *p) {
      return  p ? new(p) ::CbmKFPrimaryVertexFinder : new ::CbmKFPrimaryVertexFinder;
   }
   static void *newArray_CbmKFPrimaryVertexFinder(Long_t nElements, void *p) {
      return p ? new(p) ::CbmKFPrimaryVertexFinder[nElements] : new ::CbmKFPrimaryVertexFinder[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmKFPrimaryVertexFinder(void *p) {
      delete ((::CbmKFPrimaryVertexFinder*)p);
   }
   static void deleteArray_CbmKFPrimaryVertexFinder(void *p) {
      delete [] ((::CbmKFPrimaryVertexFinder*)p);
   }
   static void destruct_CbmKFPrimaryVertexFinder(void *p) {
      typedef ::CbmKFPrimaryVertexFinder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmKFPrimaryVertexFinder

//______________________________________________________________________________
void CbmKFUMeasurement::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmKFUMeasurement.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmKFUMeasurement::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmKFUMeasurement::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmKFUMeasurement(void *p) {
      return  p ? new(p) ::CbmKFUMeasurement : new ::CbmKFUMeasurement;
   }
   static void *newArray_CbmKFUMeasurement(Long_t nElements, void *p) {
      return p ? new(p) ::CbmKFUMeasurement[nElements] : new ::CbmKFUMeasurement[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmKFUMeasurement(void *p) {
      delete ((::CbmKFUMeasurement*)p);
   }
   static void deleteArray_CbmKFUMeasurement(void *p) {
      delete [] ((::CbmKFUMeasurement*)p);
   }
   static void destruct_CbmKFUMeasurement(void *p) {
      typedef ::CbmKFUMeasurement current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmKFUMeasurement

//______________________________________________________________________________
void CbmKFParticle::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmKFParticle.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmKFParticle::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmKFParticle::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmKFParticle(void *p) {
      return  p ? new(p) ::CbmKFParticle : new ::CbmKFParticle;
   }
   static void *newArray_CbmKFParticle(Long_t nElements, void *p) {
      return p ? new(p) ::CbmKFParticle[nElements] : new ::CbmKFParticle[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmKFParticle(void *p) {
      delete ((::CbmKFParticle*)p);
   }
   static void deleteArray_CbmKFParticle(void *p) {
      delete [] ((::CbmKFParticle*)p);
   }
   static void destruct_CbmKFParticle(void *p) {
      typedef ::CbmKFParticle current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmKFParticle

//______________________________________________________________________________
void CbmKFStsHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmKFStsHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmKFStsHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmKFStsHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmKFStsHit(void *p) {
      return  p ? new(p) ::CbmKFStsHit : new ::CbmKFStsHit;
   }
   static void *newArray_CbmKFStsHit(Long_t nElements, void *p) {
      return p ? new(p) ::CbmKFStsHit[nElements] : new ::CbmKFStsHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmKFStsHit(void *p) {
      delete ((::CbmKFStsHit*)p);
   }
   static void deleteArray_CbmKFStsHit(void *p) {
      delete [] ((::CbmKFStsHit*)p);
   }
   static void destruct_CbmKFStsHit(void *p) {
      typedef ::CbmKFStsHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmKFStsHit

//______________________________________________________________________________
void CbmKFTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmKFTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmKFTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmKFTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmKFTrack(void *p) {
      return  p ? new(p) ::CbmKFTrack : new ::CbmKFTrack;
   }
   static void *newArray_CbmKFTrack(Long_t nElements, void *p) {
      return p ? new(p) ::CbmKFTrack[nElements] : new ::CbmKFTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmKFTrack(void *p) {
      delete ((::CbmKFTrack*)p);
   }
   static void deleteArray_CbmKFTrack(void *p) {
      delete [] ((::CbmKFTrack*)p);
   }
   static void destruct_CbmKFTrack(void *p) {
      typedef ::CbmKFTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmKFTrack

//______________________________________________________________________________
void CbmKFVertex::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmKFVertex.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmKFVertex::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmKFVertex::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmKFVertex(void *p) {
      return  p ? new(p) ::CbmKFVertex : new ::CbmKFVertex;
   }
   static void *newArray_CbmKFVertex(Long_t nElements, void *p) {
      return p ? new(p) ::CbmKFVertex[nElements] : new ::CbmKFVertex[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmKFVertex(void *p) {
      delete ((::CbmKFVertex*)p);
   }
   static void deleteArray_CbmKFVertex(void *p) {
      delete [] ((::CbmKFVertex*)p);
   }
   static void destruct_CbmKFVertex(void *p) {
      typedef ::CbmKFVertex current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmKFVertex

//______________________________________________________________________________
void CbmPVFinderKF::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmPVFinderKF.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmPVFinderKF::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmPVFinderKF::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmPVFinderKF(void *p) {
      return  p ? new(p) ::CbmPVFinderKF : new ::CbmPVFinderKF;
   }
   static void *newArray_CbmPVFinderKF(Long_t nElements, void *p) {
      return p ? new(p) ::CbmPVFinderKF[nElements] : new ::CbmPVFinderKF[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmPVFinderKF(void *p) {
      delete ((::CbmPVFinderKF*)p);
   }
   static void deleteArray_CbmPVFinderKF(void *p) {
      delete [] ((::CbmPVFinderKF*)p);
   }
   static void destruct_CbmPVFinderKF(void *p) {
      typedef ::CbmPVFinderKF current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmPVFinderKF

//______________________________________________________________________________
void CbmStsKFTrackFitter::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmStsKFTrackFitter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmStsKFTrackFitter::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmStsKFTrackFitter::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmStsKFTrackFitter(void *p) {
      return  p ? new(p) ::CbmStsKFTrackFitter : new ::CbmStsKFTrackFitter;
   }
   static void *newArray_CbmStsKFTrackFitter(Long_t nElements, void *p) {
      return p ? new(p) ::CbmStsKFTrackFitter[nElements] : new ::CbmStsKFTrackFitter[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmStsKFTrackFitter(void *p) {
      delete ((::CbmStsKFTrackFitter*)p);
   }
   static void deleteArray_CbmStsKFTrackFitter(void *p) {
      delete [] ((::CbmStsKFTrackFitter*)p);
   }
   static void destruct_CbmStsKFTrackFitter(void *p) {
      typedef ::CbmStsKFTrackFitter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmStsKFTrackFitter

//______________________________________________________________________________
void KFParticleMatch::Streamer(TBuffer &R__b)
{
   // Stream an object of class KFParticleMatch.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KFParticleMatch::Class(),this);
   } else {
      R__b.WriteClassBuffer(KFParticleMatch::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KFParticleMatch(void *p) {
      return  p ? new(p) ::KFParticleMatch : new ::KFParticleMatch;
   }
   static void *newArray_KFParticleMatch(Long_t nElements, void *p) {
      return p ? new(p) ::KFParticleMatch[nElements] : new ::KFParticleMatch[nElements];
   }
   // Wrapper around operator delete
   static void delete_KFParticleMatch(void *p) {
      delete ((::KFParticleMatch*)p);
   }
   static void deleteArray_KFParticleMatch(void *p) {
      delete [] ((::KFParticleMatch*)p);
   }
   static void destruct_KFParticleMatch(void *p) {
      typedef ::KFParticleMatch current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KFParticleMatch

//______________________________________________________________________________
void KFMCParticle::Streamer(TBuffer &R__b)
{
   // Stream an object of class KFMCParticle.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(KFMCParticle::Class(),this);
   } else {
      R__b.WriteClassBuffer(KFMCParticle::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_KFMCParticle(void *p) {
      return  p ? new(p) ::KFMCParticle : new ::KFMCParticle;
   }
   static void *newArray_KFMCParticle(Long_t nElements, void *p) {
      return p ? new(p) ::KFMCParticle[nElements] : new ::KFMCParticle[nElements];
   }
   // Wrapper around operator delete
   static void delete_KFMCParticle(void *p) {
      delete ((::KFMCParticle*)p);
   }
   static void deleteArray_KFMCParticle(void *p) {
      delete [] ((::KFMCParticle*)p);
   }
   static void destruct_KFMCParticle(void *p) {
      typedef ::KFMCParticle current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::KFMCParticle

//______________________________________________________________________________
void CbmKFPartEfficiencies::Streamer(TBuffer &R__b)
{
   // Stream an object of class CbmKFPartEfficiencies.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CbmKFPartEfficiencies::Class(),this);
   } else {
      R__b.WriteClassBuffer(CbmKFPartEfficiencies::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CbmKFPartEfficiencies(void *p) {
      return  p ? new(p) ::CbmKFPartEfficiencies : new ::CbmKFPartEfficiencies;
   }
   static void *newArray_CbmKFPartEfficiencies(Long_t nElements, void *p) {
      return p ? new(p) ::CbmKFPartEfficiencies[nElements] : new ::CbmKFPartEfficiencies[nElements];
   }
   // Wrapper around operator delete
   static void delete_CbmKFPartEfficiencies(void *p) {
      delete ((::CbmKFPartEfficiencies*)p);
   }
   static void deleteArray_CbmKFPartEfficiencies(void *p) {
      delete [] ((::CbmKFPartEfficiencies*)p);
   }
   static void destruct_CbmKFPartEfficiencies(void *p) {
      typedef ::CbmKFPartEfficiencies current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CbmKFPartEfficiencies

namespace ROOT {
   static TClass *vectorlEvectorlEintgRsPgR_Dictionary();
   static void vectorlEvectorlEintgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEintgRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEintgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEintgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEintgRsPgR(void *p);
   static void destruct_vectorlEvectorlEintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<int> >*)
   {
      vector<vector<int> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<int> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<int> >", -2, "vector", 216,
                  typeid(vector<vector<int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEintgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<int> >) );
      instance.SetNew(&new_vectorlEvectorlEintgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEintgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEintgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEintgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<int> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<int> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<int> >*)0x0)->GetClass();
      vectorlEvectorlEintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<int> > : new vector<vector<int> >;
   }
   static void *newArray_vectorlEvectorlEintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<int> >[nElements] : new vector<vector<int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEintgRsPgR(void *p) {
      delete ((vector<vector<int> >*)p);
   }
   static void deleteArray_vectorlEvectorlEintgRsPgR(void *p) {
      delete [] ((vector<vector<int> >*)p);
   }
   static void destruct_vectorlEvectorlEintgRsPgR(void *p) {
      typedef vector<vector<int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<int> >

namespace ROOT {
   static TClass *vectorlEintgR_Dictionary();
   static void vectorlEintgR_TClassManip(TClass*);
   static void *new_vectorlEintgR(void *p = 0);
   static void *newArray_vectorlEintgR(Long_t size, void *p);
   static void delete_vectorlEintgR(void *p);
   static void deleteArray_vectorlEintgR(void *p);
   static void destruct_vectorlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<int>*)
   {
      vector<int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<int>", -2, "vector", 216,
                  typeid(vector<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<int>) );
      instance.SetNew(&new_vectorlEintgR);
      instance.SetNewArray(&newArray_vectorlEintgR);
      instance.SetDelete(&delete_vectorlEintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEintgR);
      instance.SetDestructor(&destruct_vectorlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<int>*)0x0)->GetClass();
      vectorlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int> : new vector<int>;
   }
   static void *newArray_vectorlEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int>[nElements] : new vector<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEintgR(void *p) {
      delete ((vector<int>*)p);
   }
   static void deleteArray_vectorlEintgR(void *p) {
      delete [] ((vector<int>*)p);
   }
   static void destruct_vectorlEintgR(void *p) {
      typedef vector<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<int>

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

namespace ROOT {
   static TClass *vectorlECbmKFWallgR_Dictionary();
   static void vectorlECbmKFWallgR_TClassManip(TClass*);
   static void *new_vectorlECbmKFWallgR(void *p = 0);
   static void *newArray_vectorlECbmKFWallgR(Long_t size, void *p);
   static void delete_vectorlECbmKFWallgR(void *p);
   static void deleteArray_vectorlECbmKFWallgR(void *p);
   static void destruct_vectorlECbmKFWallgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<CbmKFWall>*)
   {
      vector<CbmKFWall> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<CbmKFWall>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<CbmKFWall>", -2, "vector", 216,
                  typeid(vector<CbmKFWall>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlECbmKFWallgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<CbmKFWall>) );
      instance.SetNew(&new_vectorlECbmKFWallgR);
      instance.SetNewArray(&newArray_vectorlECbmKFWallgR);
      instance.SetDelete(&delete_vectorlECbmKFWallgR);
      instance.SetDeleteArray(&deleteArray_vectorlECbmKFWallgR);
      instance.SetDestructor(&destruct_vectorlECbmKFWallgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<CbmKFWall> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<CbmKFWall>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlECbmKFWallgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<CbmKFWall>*)0x0)->GetClass();
      vectorlECbmKFWallgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlECbmKFWallgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlECbmKFWallgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CbmKFWall> : new vector<CbmKFWall>;
   }
   static void *newArray_vectorlECbmKFWallgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CbmKFWall>[nElements] : new vector<CbmKFWall>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlECbmKFWallgR(void *p) {
      delete ((vector<CbmKFWall>*)p);
   }
   static void deleteArray_vectorlECbmKFWallgR(void *p) {
      delete [] ((vector<CbmKFWall>*)p);
   }
   static void destruct_vectorlECbmKFWallgR(void *p) {
      typedef vector<CbmKFWall> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<CbmKFWall>

namespace ROOT {
   static TClass *vectorlECbmKFTubegR_Dictionary();
   static void vectorlECbmKFTubegR_TClassManip(TClass*);
   static void *new_vectorlECbmKFTubegR(void *p = 0);
   static void *newArray_vectorlECbmKFTubegR(Long_t size, void *p);
   static void delete_vectorlECbmKFTubegR(void *p);
   static void deleteArray_vectorlECbmKFTubegR(void *p);
   static void destruct_vectorlECbmKFTubegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<CbmKFTube>*)
   {
      vector<CbmKFTube> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<CbmKFTube>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<CbmKFTube>", -2, "vector", 216,
                  typeid(vector<CbmKFTube>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlECbmKFTubegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<CbmKFTube>) );
      instance.SetNew(&new_vectorlECbmKFTubegR);
      instance.SetNewArray(&newArray_vectorlECbmKFTubegR);
      instance.SetDelete(&delete_vectorlECbmKFTubegR);
      instance.SetDeleteArray(&deleteArray_vectorlECbmKFTubegR);
      instance.SetDestructor(&destruct_vectorlECbmKFTubegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<CbmKFTube> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<CbmKFTube>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlECbmKFTubegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<CbmKFTube>*)0x0)->GetClass();
      vectorlECbmKFTubegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlECbmKFTubegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlECbmKFTubegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CbmKFTube> : new vector<CbmKFTube>;
   }
   static void *newArray_vectorlECbmKFTubegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CbmKFTube>[nElements] : new vector<CbmKFTube>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlECbmKFTubegR(void *p) {
      delete ((vector<CbmKFTube>*)p);
   }
   static void deleteArray_vectorlECbmKFTubegR(void *p) {
      delete [] ((vector<CbmKFTube>*)p);
   }
   static void destruct_vectorlECbmKFTubegR(void *p) {
      typedef vector<CbmKFTube> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<CbmKFTube>

namespace ROOT {
   static TClass *vectorlECbmKFTrackInterfacemUgR_Dictionary();
   static void vectorlECbmKFTrackInterfacemUgR_TClassManip(TClass*);
   static void *new_vectorlECbmKFTrackInterfacemUgR(void *p = 0);
   static void *newArray_vectorlECbmKFTrackInterfacemUgR(Long_t size, void *p);
   static void delete_vectorlECbmKFTrackInterfacemUgR(void *p);
   static void deleteArray_vectorlECbmKFTrackInterfacemUgR(void *p);
   static void destruct_vectorlECbmKFTrackInterfacemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<CbmKFTrackInterface*>*)
   {
      vector<CbmKFTrackInterface*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<CbmKFTrackInterface*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<CbmKFTrackInterface*>", -2, "vector", 216,
                  typeid(vector<CbmKFTrackInterface*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlECbmKFTrackInterfacemUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<CbmKFTrackInterface*>) );
      instance.SetNew(&new_vectorlECbmKFTrackInterfacemUgR);
      instance.SetNewArray(&newArray_vectorlECbmKFTrackInterfacemUgR);
      instance.SetDelete(&delete_vectorlECbmKFTrackInterfacemUgR);
      instance.SetDeleteArray(&deleteArray_vectorlECbmKFTrackInterfacemUgR);
      instance.SetDestructor(&destruct_vectorlECbmKFTrackInterfacemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<CbmKFTrackInterface*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<CbmKFTrackInterface*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlECbmKFTrackInterfacemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<CbmKFTrackInterface*>*)0x0)->GetClass();
      vectorlECbmKFTrackInterfacemUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlECbmKFTrackInterfacemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlECbmKFTrackInterfacemUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CbmKFTrackInterface*> : new vector<CbmKFTrackInterface*>;
   }
   static void *newArray_vectorlECbmKFTrackInterfacemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CbmKFTrackInterface*>[nElements] : new vector<CbmKFTrackInterface*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlECbmKFTrackInterfacemUgR(void *p) {
      delete ((vector<CbmKFTrackInterface*>*)p);
   }
   static void deleteArray_vectorlECbmKFTrackInterfacemUgR(void *p) {
      delete [] ((vector<CbmKFTrackInterface*>*)p);
   }
   static void destruct_vectorlECbmKFTrackInterfacemUgR(void *p) {
      typedef vector<CbmKFTrackInterface*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<CbmKFTrackInterface*>

namespace ROOT {
   static TClass *vectorlECbmKFStsHitgR_Dictionary();
   static void vectorlECbmKFStsHitgR_TClassManip(TClass*);
   static void *new_vectorlECbmKFStsHitgR(void *p = 0);
   static void *newArray_vectorlECbmKFStsHitgR(Long_t size, void *p);
   static void delete_vectorlECbmKFStsHitgR(void *p);
   static void deleteArray_vectorlECbmKFStsHitgR(void *p);
   static void destruct_vectorlECbmKFStsHitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<CbmKFStsHit>*)
   {
      vector<CbmKFStsHit> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<CbmKFStsHit>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<CbmKFStsHit>", -2, "vector", 216,
                  typeid(vector<CbmKFStsHit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlECbmKFStsHitgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<CbmKFStsHit>) );
      instance.SetNew(&new_vectorlECbmKFStsHitgR);
      instance.SetNewArray(&newArray_vectorlECbmKFStsHitgR);
      instance.SetDelete(&delete_vectorlECbmKFStsHitgR);
      instance.SetDeleteArray(&deleteArray_vectorlECbmKFStsHitgR);
      instance.SetDestructor(&destruct_vectorlECbmKFStsHitgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<CbmKFStsHit> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<CbmKFStsHit>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlECbmKFStsHitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<CbmKFStsHit>*)0x0)->GetClass();
      vectorlECbmKFStsHitgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlECbmKFStsHitgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlECbmKFStsHitgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CbmKFStsHit> : new vector<CbmKFStsHit>;
   }
   static void *newArray_vectorlECbmKFStsHitgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CbmKFStsHit>[nElements] : new vector<CbmKFStsHit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlECbmKFStsHitgR(void *p) {
      delete ((vector<CbmKFStsHit>*)p);
   }
   static void deleteArray_vectorlECbmKFStsHitgR(void *p) {
      delete [] ((vector<CbmKFStsHit>*)p);
   }
   static void destruct_vectorlECbmKFStsHitgR(void *p) {
      typedef vector<CbmKFStsHit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<CbmKFStsHit>

namespace ROOT {
   static TClass *vectorlECbmKFMaterialmUgR_Dictionary();
   static void vectorlECbmKFMaterialmUgR_TClassManip(TClass*);
   static void *new_vectorlECbmKFMaterialmUgR(void *p = 0);
   static void *newArray_vectorlECbmKFMaterialmUgR(Long_t size, void *p);
   static void delete_vectorlECbmKFMaterialmUgR(void *p);
   static void deleteArray_vectorlECbmKFMaterialmUgR(void *p);
   static void destruct_vectorlECbmKFMaterialmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<CbmKFMaterial*>*)
   {
      vector<CbmKFMaterial*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<CbmKFMaterial*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<CbmKFMaterial*>", -2, "vector", 216,
                  typeid(vector<CbmKFMaterial*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlECbmKFMaterialmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<CbmKFMaterial*>) );
      instance.SetNew(&new_vectorlECbmKFMaterialmUgR);
      instance.SetNewArray(&newArray_vectorlECbmKFMaterialmUgR);
      instance.SetDelete(&delete_vectorlECbmKFMaterialmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlECbmKFMaterialmUgR);
      instance.SetDestructor(&destruct_vectorlECbmKFMaterialmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<CbmKFMaterial*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<CbmKFMaterial*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlECbmKFMaterialmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<CbmKFMaterial*>*)0x0)->GetClass();
      vectorlECbmKFMaterialmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlECbmKFMaterialmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlECbmKFMaterialmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CbmKFMaterial*> : new vector<CbmKFMaterial*>;
   }
   static void *newArray_vectorlECbmKFMaterialmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CbmKFMaterial*>[nElements] : new vector<CbmKFMaterial*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlECbmKFMaterialmUgR(void *p) {
      delete ((vector<CbmKFMaterial*>*)p);
   }
   static void deleteArray_vectorlECbmKFMaterialmUgR(void *p) {
      delete [] ((vector<CbmKFMaterial*>*)p);
   }
   static void destruct_vectorlECbmKFMaterialmUgR(void *p) {
      typedef vector<CbmKFMaterial*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<CbmKFMaterial*>

namespace ROOT {
   static TClass *vectorlECbmKFHitmUgR_Dictionary();
   static void vectorlECbmKFHitmUgR_TClassManip(TClass*);
   static void *new_vectorlECbmKFHitmUgR(void *p = 0);
   static void *newArray_vectorlECbmKFHitmUgR(Long_t size, void *p);
   static void delete_vectorlECbmKFHitmUgR(void *p);
   static void deleteArray_vectorlECbmKFHitmUgR(void *p);
   static void destruct_vectorlECbmKFHitmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<CbmKFHit*>*)
   {
      vector<CbmKFHit*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<CbmKFHit*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<CbmKFHit*>", -2, "vector", 216,
                  typeid(vector<CbmKFHit*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlECbmKFHitmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<CbmKFHit*>) );
      instance.SetNew(&new_vectorlECbmKFHitmUgR);
      instance.SetNewArray(&newArray_vectorlECbmKFHitmUgR);
      instance.SetDelete(&delete_vectorlECbmKFHitmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlECbmKFHitmUgR);
      instance.SetDestructor(&destruct_vectorlECbmKFHitmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<CbmKFHit*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<CbmKFHit*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlECbmKFHitmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<CbmKFHit*>*)0x0)->GetClass();
      vectorlECbmKFHitmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlECbmKFHitmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlECbmKFHitmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CbmKFHit*> : new vector<CbmKFHit*>;
   }
   static void *newArray_vectorlECbmKFHitmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CbmKFHit*>[nElements] : new vector<CbmKFHit*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlECbmKFHitmUgR(void *p) {
      delete ((vector<CbmKFHit*>*)p);
   }
   static void deleteArray_vectorlECbmKFHitmUgR(void *p) {
      delete [] ((vector<CbmKFHit*>*)p);
   }
   static void destruct_vectorlECbmKFHitmUgR(void *p) {
      typedef vector<CbmKFHit*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<CbmKFHit*>

namespace ROOT {
   static TClass *vectorlECbmKFConegR_Dictionary();
   static void vectorlECbmKFConegR_TClassManip(TClass*);
   static void *new_vectorlECbmKFConegR(void *p = 0);
   static void *newArray_vectorlECbmKFConegR(Long_t size, void *p);
   static void delete_vectorlECbmKFConegR(void *p);
   static void deleteArray_vectorlECbmKFConegR(void *p);
   static void destruct_vectorlECbmKFConegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<CbmKFCone>*)
   {
      vector<CbmKFCone> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<CbmKFCone>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<CbmKFCone>", -2, "vector", 216,
                  typeid(vector<CbmKFCone>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlECbmKFConegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<CbmKFCone>) );
      instance.SetNew(&new_vectorlECbmKFConegR);
      instance.SetNewArray(&newArray_vectorlECbmKFConegR);
      instance.SetDelete(&delete_vectorlECbmKFConegR);
      instance.SetDeleteArray(&deleteArray_vectorlECbmKFConegR);
      instance.SetDestructor(&destruct_vectorlECbmKFConegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<CbmKFCone> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<CbmKFCone>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlECbmKFConegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<CbmKFCone>*)0x0)->GetClass();
      vectorlECbmKFConegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlECbmKFConegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlECbmKFConegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CbmKFCone> : new vector<CbmKFCone>;
   }
   static void *newArray_vectorlECbmKFConegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CbmKFCone>[nElements] : new vector<CbmKFCone>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlECbmKFConegR(void *p) {
      delete ((vector<CbmKFCone>*)p);
   }
   static void deleteArray_vectorlECbmKFConegR(void *p) {
      delete [] ((vector<CbmKFCone>*)p);
   }
   static void destruct_vectorlECbmKFConegR(void *p) {
      typedef vector<CbmKFCone> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<CbmKFCone>

namespace ROOT {
   static TClass *vectorlECbmKFBoxgR_Dictionary();
   static void vectorlECbmKFBoxgR_TClassManip(TClass*);
   static void *new_vectorlECbmKFBoxgR(void *p = 0);
   static void *newArray_vectorlECbmKFBoxgR(Long_t size, void *p);
   static void delete_vectorlECbmKFBoxgR(void *p);
   static void deleteArray_vectorlECbmKFBoxgR(void *p);
   static void destruct_vectorlECbmKFBoxgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<CbmKFBox>*)
   {
      vector<CbmKFBox> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<CbmKFBox>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<CbmKFBox>", -2, "vector", 216,
                  typeid(vector<CbmKFBox>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlECbmKFBoxgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<CbmKFBox>) );
      instance.SetNew(&new_vectorlECbmKFBoxgR);
      instance.SetNewArray(&newArray_vectorlECbmKFBoxgR);
      instance.SetDelete(&delete_vectorlECbmKFBoxgR);
      instance.SetDeleteArray(&deleteArray_vectorlECbmKFBoxgR);
      instance.SetDestructor(&destruct_vectorlECbmKFBoxgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<CbmKFBox> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<CbmKFBox>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlECbmKFBoxgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<CbmKFBox>*)0x0)->GetClass();
      vectorlECbmKFBoxgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlECbmKFBoxgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlECbmKFBoxgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CbmKFBox> : new vector<CbmKFBox>;
   }
   static void *newArray_vectorlECbmKFBoxgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<CbmKFBox>[nElements] : new vector<CbmKFBox>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlECbmKFBoxgR(void *p) {
      delete ((vector<CbmKFBox>*)p);
   }
   static void deleteArray_vectorlECbmKFBoxgR(void *p) {
      delete [] ((vector<CbmKFBox>*)p);
   }
   static void destruct_vectorlECbmKFBoxgR(void *p) {
      typedef vector<CbmKFBox> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<CbmKFBox>

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

namespace {
  void TriggerDictionaryInitialization_G__KFDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/opt/fairroot/install/include",
"/home/alex/bmnroot_dev/bmnroot/passive",
"/home/alex/bmnroot_dev/bmnroot/bmndata",
"/home/alex/bmnroot_dev/bmnroot/bmndata/cbm",
"/home/alex/bmnroot_dev/bmnroot/bmnfield",
"/home/alex/bmnroot_dev/bmnroot/tof",
"/home/alex/bmnroot_dev/bmnroot/sts",
"/home/alex/bmnroot_dev/bmnroot/cat",
"/home/alex/bmnroot_dev/bmnroot/KF",
"/home/alex/bmnroot_dev/bmnroot/KF/Interface",
"/home/alex/bmnroot_dev/bmnroot/KF/KFQA",
"/home/alex/bmnroot_dev/bmnroot/KF/KFParticle",
"/home/alex/bmnroot_dev/bmnroot/KF/KFParticlesFinder",
"/opt/fairsoft/install/include",
"/opt/fairsoft/install/include/root",
"/opt/fairsoft/install/include/root",
"/home/alex/bmnroot_dev/bmnroot/build/KF/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__KFDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$CbmKFTrackInterface.h")))  __attribute__((annotate("$clingAutoload$CbmKFMaterial.h")))  CbmKFTrackInterface;
class __attribute__((annotate("$clingAutoload$CbmKFMaterial.h")))  CbmKFMaterial;
class __attribute__((annotate("$clingAutoload$CbmKFMaterial.h")))  CbmKFWall;
class __attribute__((annotate("$clingAutoload$CbmKFMaterial.h")))  CbmKFTube;
class __attribute__((annotate("$clingAutoload$CbmKFMaterial.h")))  CbmKFBox;
class __attribute__((annotate("$clingAutoload$CbmKFMaterial.h")))  CbmKFCone;
class CbmKF;
class CbmKFFieldMath;
class CbmKFHit;
class CbmKFMath;
class CbmKFPixelMeasurement;
class __attribute__((annotate("$clingAutoload$CbmKFVertexInterface.h")))  CbmKFVertexInterface;
class CbmKFPrimaryVertexFinder;
class CbmKFUMeasurement;
class CbmKFParticle;
class CbmKFStsHit;
class CbmKFTrack;
class CbmKFVertex;
class CbmPVFinderKF;
class CbmStsKFTrackFitter;
class KFParticleMatch;
class KFMCParticle;
class CbmKFPartEfficiencies;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__KFDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H

/** The CbmKF Kalman Filter algorithm
 *
 * @author  S.Gorbunov
 * @version 0.0
 * @since   02.12.05
 * 
 * Description will be here
 *
 * To be used by high-level utilites like StsTrackFitter
 *
 */

#ifndef CBMKF_H
#define CBMKF_H

#include "CbmKFMaterial.h"

#include "FairField.h"
#include "FairTask.h"
#include "CbmStsDigiScheme.h"

#include <iostream>
#include <map>
#include <vector>

class CbmKFTrackInterface;
class CbmKFVertexInterface;
class FairGeoNode;

class CbmKF :public FairTask {

 public:

  CbmKF(const char *name="KF", Int_t iVerbose = 1 );
  ~CbmKF();

  static CbmKF *Instance(){ return fInstance; }

  /// * FairTask methods
  
  void SetParContainers();
  InitStatus ReInit();
  InitStatus Init();
 
  /// * Utilites  
  
  Int_t GetMaterialIndex( Int_t uid );  
  
  /**  Propagation of (T, C) to z_out without material, using linearisation at qp0
   */
  
  Int_t Propagate( Double_t *T, Double_t *C, Double_t z_out, Double_t QP0 );

  Int_t PassMaterial( CbmKFTrackInterface &track, Double_t &QP0, Int_t ifst, Int_t ilst );
  Int_t PassMaterialBetween( CbmKFTrackInterface &track, Double_t &QP0, Int_t ifst, Int_t ilst );
  Int_t PassMaterialBetween( CbmKFTrackInterface &track, Double_t &QP0, CbmKFHit *fst, CbmKFHit *lst );
  
  /// * Stored materials
  
  std::vector<CbmKFMaterial*> vMaterial; 
  
  std::vector<CbmKFTube> vMvdMaterial;
  std::vector<CbmKFTube> vStsMaterial;
  std::vector<CbmKFWall> vSttMaterial;
  std::vector<CbmKFTube> vTargets;
  std::vector<CbmKFCone> vPipe;

  std::vector<CbmKFTube> vPassiveTube;
  std::vector<CbmKFWall> vPassiveWall;
  std::vector<CbmKFBox> vPassiveBox;
 
  /// * Usefull information 
  
  FairField *GetMagneticField(){ return fMagneticField; }

  std::map<Int_t,Int_t> MvdStationIDMap;
  std::map<Int_t,Int_t> StsStationIDMap;
  std::map<Int_t,Int_t> SttStationIDMap;

  Int_t GetMethod(){ return fMethod; }

  CbmStsDigiScheme StsDigi;

  int GetNMvdStations() const { return CbmKF::Instance()->vMvdMaterial.size(); }
  int GetNStsStations() const { return const_cast<CbmStsDigiScheme*>(&StsDigi)->GetNStations();}

 private:
  
  static CbmKF *fInstance;
  
  FairField *fMagneticField;

  
  Int_t fMethod; /* 0 = straight line,
		    1 = AnalyticLight
		    2 = Runge-Kutta 4 order, 
		 */
 
  std::map<Int_t,Int_t> fMaterialID2IndexMap;

  Int_t ReadTube( CbmKFTube &tube, FairGeoNode *node);
  CbmKFMaterial *ReadPassive( FairGeoNode *node);

 private:
  CbmKF(const CbmKF&);
  void operator=(const CbmKF&);
 public: 
  
  ClassDef( CbmKF, 1 );

};

#endif /* !CBMKF_H */
/** Collection of mathematical routines for track extrapolation in magnetic field
 *
 * @author  S.Gorbunov
 * @version 0.0
 * @since   02.12.05
 * 
 * Description will be here 
 *
 */

#ifndef CBMKFFIELDMATH_H
#define CBMKFFIELDMATH_H 1

#include "TObject.h"

class FairField;
class FairTrackParam;

class CbmKFFieldMath :public TObject
{
 public:
  CbmKFFieldMath(){}
  ~CbmKFFieldMath(){}
  
  static void ExtrapolateLine( const Double_t T_in[], const Double_t C_in[], 
			       Double_t T_out[], Double_t C_out[],
			       Double_t z_out
			       );
  
  static Int_t ExtrapolateRK4( const Double_t T_in[], const Double_t C_in[],
			       Double_t T_out[], Double_t C_out[],
			       Double_t z_out , Double_t qp0, FairField *MF );
  /*
  static void ExtrapolateAnalytic( const Double_t T_in[], const Double_t C_in[],
				   Double_t T_out[], Double_t C_out[],
				   Double_t z_out, Double_t qp0, CbmMagField *MF, 
				   Int_t order=3 );
  
  static void ExtrapolateACentral( const Double_t T_in[], const Double_t C_in[],
				   Double_t T_out[], Double_t C_out[],
				   Double_t z_out, Double_t qp0, CbmMagField *MF);
  */
  static Int_t ExtrapolateALight( const Double_t T_in[], const Double_t C_in[],
				 Double_t T_out[], Double_t C_out[],
				 Double_t z_out, Double_t qp0, FairField *MF);
  /*
  static void IntegrateField( 
			     CbmMagField *MF,      
			     Double_t r0[], Double_t r1[], Double_t r2[],
			     Double_t si  [3]      =0, Double_t Si  [3]      =0,
			     Double_t sii [3][3]   =0, Double_t Sii [3][3]   =0, 
			     Double_t siii[3][3][3]=0, Double_t Siii[3][3][3]=0
			     );
  
  static void GetCoefficients( 
			      Double_t tx, Double_t ty,
			      Double_t Xi  [3][3]      =0, Double_t Yi  [3][3]      =0,
			      Double_t Xii [3][3][3]   =0, Double_t Yii [3][3][3]   =0,
			      Double_t Xiii[3][3][3][3]=0, Double_t Yiii[3][3][3][3]=0
			      );
  */ 
  ClassDef(CbmKFFieldMath, 1)
};

#endif /* ! CBMKFFIELDMATH_H */
/** Abstract base class for hit is being used by the CbmKF Kalman Filter 
 *
 * @author  S.Gorbunov
 * @version 0.0
 * @since   02.12.05
 * 
 * Description will be here 
 *
 */

#ifndef CBMKFHIT_H
#define CBMKFHIT_H 1

#include "CbmKFTrackInterface.h"

class CbmKFHit :public TObject { 
  
 public:

  CbmKFHit():MaterialIndex(0) {};
  virtual ~CbmKFHit(){ }

  Int_t MaterialIndex;

  virtual Int_t Filter( CbmKFTrackInterface &track, Bool_t downstream, Double_t &QP0 ) = 0;

  ClassDef( CbmKFHit, 1 )
};

#endif /* !CBMKFHIT_H */
/** Base class for material is being used by the CbmKF Kalman Filter 
 *
 * @author  S.Gorbunov
 * @version 0.0
 * @since   02.12.05
 * 
 * Description will be here 
 *
 */

#ifndef CBMKFMATERIAL_H
#define CBMKFMATERIAL_H 1

#include "CbmKFTrackInterface.h"
class TString;

class CbmKFMaterial :public TObject
{
 public:

  CbmKFMaterial():
    ID(-1),
    ZReference(-1),
    ZThickness(-1),
    RadLength(-1),
    F(1),
    Fe(0.02145)
  {}
  virtual ~CbmKFMaterial(){};

  Int_t ID;
  Double_t ZReference ;
  Double_t ZThickness ;
  Double_t RadLength  ;
  Double_t F;
  Double_t Fe;
  virtual Bool_t IsOutside( Double_t x, Double_t y ){ return 0; }
 
  virtual Int_t Pass( Double_t ZCross, Double_t ZThick, 
		      CbmKFTrackInterface &track,		    
		      Bool_t downstream, Double_t &QP0       );
 
  virtual Int_t Pass( CbmKFTrackInterface &track, Bool_t downstream, Double_t &QP0 ){
    return Pass( ZReference,  ZThickness, track, downstream, QP0);
  }
  
  virtual Int_t Pass( CbmKFTrackInterface &track, Bool_t downstream ){
    Double_t QP0 = track.GetTrack()[4];
    return Pass( ZReference,  ZThickness, track, downstream, QP0);
  }

  virtual TString Info() const;

  static Bool_t comparePDown( const CbmKFMaterial *a, const CbmKFMaterial *b ){
    return a->ZReference < b->ZReference;
  }

  static Bool_t compareP_z( const CbmKFMaterial *a, Double_t z ){
    return (a->ZReference + a->ZThickness/2) < z ;
  }
  
  static Bool_t compareP_Z( Double_t z, const CbmKFMaterial *a ){
    return z < (a->ZReference + a->ZThickness/2) ;
  }

  ClassDef(CbmKFMaterial,1)
};

class CbmKFWall: public CbmKFMaterial{
 public:
  CbmKFWall(){ }
  ~CbmKFWall(){ }

  ClassDef(CbmKFWall,1)
};

class CbmKFTube: public CbmKFMaterial{
 public:
  CbmKFTube():x(0),y(0),z(0),dz(0),r(0),R(0),rr(0),RR(0){}
  CbmKFTube(Int_t ID, Double_t x, Double_t y, Double_t z, Double_t dz, Double_t r, Double_t R, Double_t radL);
  ~CbmKFTube(){}

  TString Info() const;

  Double_t x,y,z, dz;
  Double_t r, R, rr, RR;

  Bool_t IsOutside( Double_t X, Double_t Y ){
    X-=x;
    Y-=y;
    Double_t r2 = X*X + Y*Y;
    return ( r2<rr || RR<r2 ) ;
  }
  ClassDef(CbmKFTube, 1)
};

class CbmKFBox: public CbmKFMaterial{
 public:
  CbmKFBox():x(0),y(0),z(0),dx05(0),dy05(0),dz(0){}
  CbmKFBox(Int_t ID, Double_t x, Double_t y, Double_t z, Double_t dx, Double_t dy, Double_t dz, Double_t radL);  
  ~CbmKFBox(){}

  TString Info() const;

  Double_t x,y,z, dx05,dy05,dz;

  Bool_t IsOutside( Double_t X, Double_t Y );

  ClassDef(CbmKFBox, 1)
};

class CbmKFCone :public CbmKFMaterial{
 public:
  CbmKFCone(): z1(0), z2(0), r1(0), R1(0), r2(0), R2(0) {};
  ~CbmKFCone(){}

  Double_t z1, z2;
  Double_t r1, R1, r2, R2;

  Int_t Pass( Double_t ZCross, Double_t ZThick, 
	      CbmKFTrackInterface &track, Bool_t downstream, Double_t &QP0  );  
 
  Int_t Pass( CbmKFTrackInterface &track, Bool_t downstream, Double_t &QP0 ){
    return Pass( ZReference,  ZThickness, track, downstream, QP0);
  }
  
  Int_t Pass( CbmKFTrackInterface &track, Bool_t downstream ){
    Double_t QP0 = track.GetTrack()[4];
    return Pass( ZReference,  ZThickness, track, downstream, QP0);
  }
  ClassDef(CbmKFCone, 1)
};


#endif /* !CBMKFMATERIAL_H */
/** Collection of mathematical routines for the CbmKF Kalman Filter 
 *
 * @author  S.Gorbunov
 * @version 0.0
 * @since   02.12.05
 * 
 * Description will be here 
 *
 */

#ifndef CBMKFMATH_H
#define CBMKFMATH_H 1

#include "TObject.h"

class FairField;
class FairTrackParam;

class CbmKFMath :public TObject
{
 public:
  CbmKFMath(){}
  ~CbmKFMath(){}

  static Bool_t GetThickness( Double_t z1, Double_t z2, Double_t mz, Double_t mthick, 
			    Double_t *mz_out, Double_t *mthick_out );

  static Bool_t intersectCone( Double_t zCone, Double_t ZCone, Double_t rCone, Double_t RCone ,
			     const Double_t x[], 
			     Double_t *z1, Double_t *z2
			       );

  static Int_t indexS( Int_t i, Int_t j )
  {
    return ( j<=i ) ? i*(i+1)/2+j :j*(j+1)/2+i;
  }
  
  static void multQSQt( Int_t N, const Double_t Q[], const Double_t S[], Double_t S_out[] );
  static void multQtSQ( Int_t N, const Double_t Q[], const Double_t S[], Double_t S_out[] );
  static void multSSQ( const Double_t *A, const Double_t *B, Double_t *C, Int_t n );
  static void four_dim_inv( Double_t a[4][4] );
  static void five_dim_inv(Double_t a[5][5]);
  static Bool_t invS( Double_t A[], Int_t N );
  static Double_t getDeviation( Double_t x, Double_t y, Double_t C[], Double_t vx, Double_t vy, Double_t Cv[]=0 ); 
  static Double_t AnalyticQP(
			     const Double_t T[], // track parameters (x,y,tx,ty,Q/p,z)
			     const Double_t V[], // vertex parameters (x,y,z)
			     FairField *MagneticField       // magnetic field
			     );

  static Int_t GetNoise( Double_t Lrl, Double_t F, Double_t Fe,
			 Double_t tx, Double_t ty, Double_t qp, 
			 Double_t mass, Bool_t is_electron, 
			 Bool_t downstream_direction, 
			 Double_t *Q5, Double_t *Q8, Double_t *Q9, Double_t *Ecor );

  static void CopyTrackParam2TC( FairTrackParam* par, Double_t T[], Double_t C[] );
  static void CopyTC2TrackParam( FairTrackParam* par, Double_t T[], Double_t C[] );
  
  ClassDef(CbmKFMath, 1)
};

#endif /* ! CBMKFMATH_H */
/** Class for Pixel-type measurement calculations for CbmKFHit hits 
 *
 * @author  S.Gorbunov
 * @version 0.0
 * @since   02.12.05
 * 
 * Description will be here 
 *
 */

#ifndef CBMKFPIXELMEASUREMENT_H
#define CBMKFPIXELMEASUREMENT_H 1

#include "CbmKFTrackInterface.h"

#include <vector>

class CbmKFPixelMeasurement :public TObject{
 public:
  CbmKFPixelMeasurement():z(0),x(0),y(0){}
  ~CbmKFPixelMeasurement(){}

  Double_t z;
  Double_t x;
  Double_t y;
  Double_t V[3];
  Int_t Filter( CbmKFTrackInterface &track );
  static void FilterPDAF(  CbmKFTrackInterface &track, 
			   std::vector<CbmKFPixelMeasurement*> &vm,
			   double gateX, double gateY, 
			   std::vector<double> &vProb              );

  ClassDef(CbmKFPixelMeasurement, 1)
};

#endif /* !CBMKFPIXELMEASUREMENT_H */
/** The CbmKFPrimaryVertexFinder class
 *
 * @author  S.Gorbunov, I.Kisel
 * @version 1.0
 * @since   06.02.06
 * 
 * Class to find primary vertex with the Kalman Filter method
 *
 */
#ifndef CBMKFPRIMARYVERTEXFINDER_H
#define CBMKFPRIMARYVERTEXFINDER_H

#include "CbmKFTrackInterface.h"
#include "CbmKFVertexInterface.h"

#include <vector>

class CbmKFPrimaryVertexFinder:public TObject {
  
  std::vector<CbmKFTrackInterface*> Tracks;

 public:

  CbmKFPrimaryVertexFinder():Tracks() { Clear(); };
  ~CbmKFPrimaryVertexFinder(){};

  void Clear();
  void AddTrack( CbmKFTrackInterface* Track );
  void SetTracks( std::vector<CbmKFTrackInterface*> &vTracks );
  void Fit(CbmKFVertexInterface &vtx );

  ClassDef( CbmKFPrimaryVertexFinder, 1 );
};
#endif /* !CBMKFPRIMARYVERTEXFINDER_H */

/** Abstract base class for track is being used by the CbmKF Kalman Filter 
 *
 * @author  S.Gorbunov
 * @version 0.0
 * @since   02.12.05
 * 
 * The class members describes to the CbmKF Kalman Filter routines 
 * how to get acces to data in a derived (or user) class.
 *
 * To be used by high-level utilites like StsTrackFitter
 *
 * IMPORTANT : you should keep your hits sorted downstream 
 *
 * See how-to-use-it below.
 */

#ifndef CBMKFTRACKINTERFACE_H
#define CBMKFTRACKINTERFACE_H

#include "TObject.h"

class CbmKFHit;
class CbmKFVertexInterface;

class CbmKFTrackInterface {
  
 public:  

  CbmKFTrackInterface():fId(){}
  virtual ~CbmKFTrackInterface(){}

  /** Information not to be changed
   */

  virtual Double_t  GetMass()   { return 0.1396; } /// Mass hypothesis
  virtual Bool_t    IsElectron(){ return 0; }      /// Is it electron

  /** I/O parameters for extrapolation routines
   */

  virtual Double_t *GetTrack()    ; /// array[6] of track parameters(x,y,tx,ty,qp,z)
  virtual Double_t *GetCovMatrix(); /// array[15] of covariance matrix

  /** Parameters during and after the track fit
   */

  virtual Double_t &GetRefChi2(); /// Chi^2 after fit
  virtual Int_t    &GetRefNDF() ; /// Number of Degrees of Freedom after fit

  /** Accessors to the track hits during track fit
   */

  virtual Int_t     GetNOfHits()     { return 0; } /// Number of hits
  virtual CbmKFHit *GetHit( Int_t i ){ return 0; } /// Access to i-th hit

  /** Methods
   */
  Int_t Extrapolate( Double_t z, Double_t *QP0=0 );
  Int_t Fit( Bool_t downstream = 1 );
  void Smooth( Double_t Z );
  void Fit2Vertex( CbmKFVertexInterface  &vtx );

  Int_t Propagate( Double_t z_out, Double_t QP0 );
  Int_t Propagate( Double_t z_out );

  int Id() const { return fId; };
  void SetId( int id ){ fId = id; };
  
 protected:
  
  int fId;
  
  ClassDef( CbmKFTrackInterface, 1 )
};



/******************************************************************
 *
 *  There are few ways to let the Kalman Filter treat your track.
 *
 ******************************************************************
 *
 * // The first way: inherit the CbmKFTrackInterface, like :
 *
 * class CbmMyTrack :public CbmKFTrackInterface{
 *  public:
 *   // here overwrite CbmKF virtual methods
 *   Double_t *GetTrack(){ return fT; } 
 *   ...
 *   // Here is my methods
 *   ...
 *  private:
 *   Double_t fT[6]; 
 *   Double_t fVariablesForMyNeeds;
 * };
 *
 * // Then use your track directly:
 *
 * CbmMyTrack my_track;
 * ...
 * CbmKF::Instance()->FitTrack( my_track );
 *
 *
 ******************************************************************
 *
 *
 * // The second way: make interface class to your track, like:
 *
 * class CbmMyTrack{
 *  public:
 *   Double_t *GetFittedTrackParametersAtThePrimaryVertex();
 *   ...
 * };
 *
 * class CbmMyTrackInterface : public CbmKFTrackInterface{
 *  public:
 *   CbmMyTrackInterface( CbmMyTrack *track ):fTrack(track){}
 *   Double_t *GetTrack(){ 
 *     return ((CbmMyTrack*)fTrack)->GetFittedTrackParametersAtThePrimaryVertex(); 
 *   } 
 *   ...
 *  private:
 *   CbmMyTrackTrack *fTrack;
 * };
 *
 * // Then call the KF routines through the interface, like:
 *
 * CbmMyTrack my_track;
 * ...
 * CbmMyTrackInterface I(my_track);
 * CbmKF::Instance()->FitTrack( I );
 *
 ******************************************************************
 *
 *
 * // Other ways...
 *
 *
 */

#endif /* !CBMKFTRACKINTERFACE_H */
/** Class for 1-D measurement calculations for CbmKFHit hits 
 *
 * @author  S.Gorbunov
 * @version 0.0
 * @since   02.12.05
 * 
 * Description will be here 
 *
 */

#ifndef CBMKFMEASUREMENT_H
#define CBMKFMEASUREMENT_H 1

#include "CbmKFTrackInterface.h"

class CbmKFUMeasurement :public TObject
{
 public:
  CbmKFUMeasurement():
    z(),
    u(),
    sigma2(),
    phi(),
    phi_s(),
    phi_c(),
    phi_ss(),
    phi_cc(),
    phi_2sc()
  {}
  ~CbmKFUMeasurement(){}

  Double_t z;
  Double_t u;
  Double_t sigma2;
  Double_t phi;

  void Set( Double_t z, Double_t u, Double_t phi, Double_t sigma2 );
  Int_t Filter( CbmKFTrackInterface &track );

  Double_t phi_s;
  Double_t phi_c;
  Double_t phi_ss;
  Double_t phi_cc;
  Double_t phi_2sc;
  
  ClassDef(CbmKFUMeasurement,1)
};

#endif /* !CBMKFUMEASUREMENT_H */

/** Abstract base class for vertex is being used by the CbmKF Kalman Filter 
 *
 * @author  S.Gorbunov
 * @version 0.0
 * @since   02.12.05
 * 
 * The class members describes to the CbmKF Kalman Filter routines 
 * how to get acces to data in a derived (or user) class.
 *
 * To be used by high-level utilites like StsTrackFitter
 *
 * Usage is similar to CbmKFTrackInterface class
 *
 */

#ifndef CBMKFVERTEXINTERFACE_H
#define CBMKFVERTEXINTERFACE_H

#include "TObject.h"

class CbmVertex;

class CbmKFVertexInterface :public TObject{

 public:  

  CbmKFVertexInterface(){}
  virtual ~CbmKFVertexInterface(){}

  /** I/O parameters for vertex fit routines
   */

  virtual Double_t &GetRefX(); 
  virtual Double_t &GetRefY(); 
  virtual Double_t &GetRefZ(); 
  virtual Double_t *GetCovMatrix();    /// Array[6] of covariance matrix
  virtual Double_t &GetRefChi2();      /// Chi^2 after fit
  virtual Int_t    &GetRefNDF();       /// Number of Degrees of Freedom after fit
  virtual Int_t    &GetRefNTracks();   /// Number of tracks used during fit

  void SetVertex( CbmVertex &v );
  void GetVertex( CbmVertex &v );


  ClassDef( CbmKFVertexInterface, 1 )
};

#endif /* !CBMKFVERTEXINTERFACE_H */
/** The CbmKFParticle class
 *
 * @author  S.Gorbunov, I.Kisel
 * @version 1.0
 * @since   24.11.06
 * 
 * Class to fit decayed particle with the Kalman Filter method
 *
 */
#ifndef CBMKFPARTICLE_H
#define CBMKFPARTICLE_H

#include "CbmKFTrackInterface.h"
#include "CbmKFVertexInterface.h"

#include <vector>
using namespace std;

class CbmKFParticle: public TObject {

 public:
  int Id() const { return fId; };
  int NDaughters() const { return fDaughtersIds.size(); };
  const vector<int>& DaughterIds() const { return fDaughtersIds; };
  
  void SetId( int id ){ fId = id; } // should be always used (manualy)
  void SetNDaughters( int n ) { fDaughtersIds.reserve(n); }
  void AddDaughter( int id ){ fDaughtersIds.push_back(id); }
  void CleanDaughtersId() { fDaughtersIds.clear(); }

 private:
  
  int fId;                   // id of particle
  vector<int> fDaughtersIds; // id of particles it created from. if size == 1 then this is id of track. TODO use in functions. why unsigned short int doesn't work???

  int fPDG; // pdg hypothesis
  
 public:

  Double_t r[8], C[36];
  Int_t NDF;
  Double_t Chi2, Q;
  Bool_t AtProductionVertex;

  float fieldRegion[10];

  CbmKFParticle():fId(-1), fDaughtersIds(), fPDG(0), NDF(0), Chi2(0), Q(0), AtProductionVertex(0) {};
  CbmKFParticle( CbmKFTrackInterface* Track, Double_t *z0=0,  Int_t *qHypo=0, Int_t *pdg=0);

  ~CbmKFParticle(){};

  // Construction

  void Construct( vector<CbmKFTrackInterface*> &vDaughters, 
		  CbmKFVertexInterface *Parent=0, 
		  Double_t Mass=-1, Double_t CutChi2=-1  );

  void ConstructFromKFParticle( vector<CbmKFParticle*> &vDaughters, CbmKFVertexInterface *Parent=0, Double_t Mass=-1, Double_t CutChi2=-1  );

  // Transportation

  void TransportToProductionVertex();  
  void TransportToDecayVertex();

  Double_t GetDStoPoint( const Double_t xyz[] ) const;

  // Accessors ?

  //* Simple accessors 
  Double_t GetX    ()  const { return r[0]; }
  Double_t GetY    ()  const { return r[1]; }
  Double_t GetZ    ()  const { return r[2]; }
  Double_t GetPx   ()  const { return r[3]; }
  Double_t GetPy   ()  const { return r[4]; }
  Double_t GetPz   ()  const { return r[5]; }
  Double_t GetE    ()  const { return r[6]; }
  Double_t GetS    ()  const { return r[7]; }
  Double_t GetQ    ()  const { return Q;    }
  Double_t GetChi2 ()  const { return Chi2; }
  Int_t    GetNDF  ()  const { return NDF;  }
  Double_t *GetParameters()  { return r; }
  Double_t *GetCovMatrix()   { return C; }

  Bool_t GetAtProductionVertex() const { return AtProductionVertex; }

  
  Double_t GetParameter ( Int_t i )          const { return r[i]; }
  Double_t GetCovariance( Int_t i )          const { return C[i]; }
  Double_t GetCovariance( Int_t i, Int_t j ) const { return C[IJ(i,j)]; }

  //*
  //*  MODIFIERS
  //*
  
  Double_t & rX    () { return r[0]; }
  Double_t & rY    () { return r[1]; }
  Double_t & rZ    () { return r[2]; }
  Double_t & rPx   () { return r[3]; }
  Double_t & rPy   () { return r[4]; }
  Double_t & rPz   () { return r[5]; }
  Double_t & rE    () { return r[6]; }
  Double_t & rS    () { return r[7]; }
  Double_t & rQ    () { return Q;    }
  Double_t & rChi2 () { return Chi2; }
  Int_t    & rNDF  () { return NDF;  }

  Double_t & rParameter ( Int_t i )        { return r[i];       }
  Double_t & rCovariance( Int_t i )        { return C[i];       }
  Double_t & rCovariance( Int_t i, Int_t j ) { return C[IJ(i,j)]; }

  //* Accessor with calculations

  void GetKFTrack( CbmKFTrackInterface* Track);
  void GetKFVertex( CbmKFVertexInterface  &vtx );
  void GetMomentum( Double_t &P, Double_t &Error );
  void GetMass( Double_t &M, Double_t &Error );
  void GetDecayLength( Double_t &L, Double_t &Error );
  void GetLifeTime( Double_t &T, Double_t &Error );

  Double_t GetRapidity() const;
  Double_t GetPt()       const;
  Double_t GetTheta()    const;
  Double_t GetPhi()      const;

  void Extrapolate( Double_t r0[], double T );
  void ExtrapolateLine( Double_t r0[], double T );


  void SetPDG ( int pdg ) { fPDG = pdg; }
  int GetPDG () const { return fPDG; }
 protected:

  Double_t& Cij( Int_t i, Int_t j ){ 
    return C[( j<=i ) ? i*(i+1)/2+j :j*(j+1)/2+i];
  }
  static Int_t IJ( Int_t i, Int_t j ){ 
    return ( j<=i ) ? i*(i+1)/2+j :j*(j+1)/2+i;
  }

  void MeasureMass( Double_t r0[], Double_t Mass );
  void MeasureProductionVertex( Double_t r0[], CbmKFVertexInterface *Parent);
  void Convert( Double_t r0[], bool ToProduction );

  
  ClassDef( CbmKFParticle, 1 );
};
#endif /* !CBMKFPARTICLE_H */
#ifndef CbmKFStsHit_H
#define CbmKFStsHit_H 1 

#include "CbmKFHit.h"
#include "CbmKFPixelMeasurement.h"
#include "CbmKFMaterial.h"

class CbmStsHit;
class CbmMvdHit;

class CbmKFStsHit : public CbmKFHit { 

 public:

  CbmKFStsHit():FitPoint(),tube(0){};
  ~CbmKFStsHit(){};

  CbmKFPixelMeasurement FitPoint;
  CbmKFTube *tube;

  void Create( CbmStsHit *h );
  void Create( CbmMvdHit *h );

  Int_t Filter( CbmKFTrackInterface &track, Bool_t downstream, Double_t &QP0 );

  static void FilterPDAF( CbmKFTrackInterface &track, 
			  std::vector<CbmKFStsHit*> &vpHits,
			  Bool_t downstream, Double_t *QP0,
			  double gateX, double gateY, int &best_hit_idx );

  
  const CbmKFStsHit& operator=(const CbmKFStsHit& a) {
    tube = a.tube;
    FitPoint = a.FitPoint;
    return *this;
  };

  CbmKFStsHit(const CbmKFStsHit& a):
    FitPoint(a.FitPoint),
    tube(a.tube)    
  {};

  
  ClassDef(CbmKFStsHit, 1);
};

#endif
/** 
 *
 * @author S.Gorbunov
 * @version 0.0
 * @since 02.12.05
 * 
 */

#ifndef CBMKFTRACK_H
#define CBMKFTRACK_H

#include "CbmKFTrackInterface.h"
#include "CbmKFHit.h"

#include <vector>

class CbmKFHit;
class FairTrackParam;
class CbmStsTrack;

class CbmKFTrack : public CbmKFTrackInterface{

 private:

  Double_t fT[6], fC[15], fMass, fChi2;
  Bool_t   fIsElectron;
  Int_t fNDF;

 public:  

  std::vector<CbmKFHit*> fHits;

  CbmKFTrack();
  ~CbmKFTrack(){ }

  CbmKFTrack( CbmKFTrackInterface &track ): fMass(0), fChi2(0), fIsElectron(0), fNDF(0), fHits() { SetTrack( track ); }

  CbmKFTrack( FairTrackParam &track ): fMass(0), fChi2(0), fIsElectron(0), fNDF(0), fHits() {    SetTrackParam( track ); }

  CbmKFTrack( CbmStsTrack &track, bool first=1 ): fMass(0), fChi2(0), fIsElectron(0), fNDF(0), fHits() { SetStsTrack( track, first ); }

  void SetTrack( CbmKFTrackInterface &track );
  void SetTrackParam( FairTrackParam &track );
  void SetStsTrack( CbmStsTrack &track, bool first=1 );

  void GetTrackParam( FairTrackParam &track );
  void GetStsTrack( CbmStsTrack &track, bool first=1 );

  void SetPID( Int_t pidHypo );

  Double_t *GetTrack()       { return fT; }
  Double_t *GetCovMatrix()   { return fC; }
  Double_t &GetRefChi2()     { return fChi2; }
  Int_t    &GetRefNDF()      { return fNDF; }
  Double_t GetMass()         { return fMass; }
  Bool_t   IsElectron()      { return fIsElectron; }
  Int_t    GetNOfHits()      { return fHits.size(); }
  CbmKFHit *GetHit( Int_t i ){ return fHits[i]; }

  ClassDef(CbmKFTrack, 1)
};

#endif
#ifndef CBMKFVERTEX_H
#define CBMKFVERTEX_H

#include "CbmKFVertexInterface.h"

class CbmKFVertex :public CbmKFVertexInterface {

 private:

  Double_t fX, fY, fZ, fC[6], fChi2;
  Int_t  fNDF, fNTracks;

 public:  

  CbmKFVertex(): fX(0), fY(0), fZ(0), fChi2(0), fNDF(0), fNTracks(0) { for( int i = 0; i < 6; ++i ) fC[i] = 0; };
  CbmKFVertex(CbmVertex &v): fX(0), fY(0), fZ(0), fChi2(0), fNDF(0), fNTracks(0){ SetVertex(v); }
  ~CbmKFVertex(){}

  Double_t &GetRefX(){ return fX; } 
  Double_t &GetRefY(){ return fY; }  
  Double_t &GetRefZ(){ return fZ; }  
  Double_t *GetCovMatrix(){ return fC; }
  Double_t &GetRefChi2(){ return fChi2; }  
  Int_t    &GetRefNDF(){ return fNDF; }
  Int_t    &GetRefNTracks(){ return fNTracks; }

  ClassDef( CbmKFVertex, 1 )
};

#endif

/** CbmPVFinderKF
 *@author S.Gorbunov
 **
 **/


#ifndef CBMKFPVFINDERKF_H
#define CBMKFPVFINDERKF_H 1


#include "CbmPrimaryVertexFinder.h"


class CbmPVFinderKF : public CbmPrimaryVertexFinder
{

 public:

  /** Default constructor **/
  CbmPVFinderKF() { };


  /** Destructor **/
  ~CbmPVFinderKF() { };


  /** Execution of PV finding.
   *@param tracks   TClonesArray of CbmStsTracks
   *@param vertex   Primary vertex (output)
   **/
  Int_t FindPrimaryVertex(TClonesArray* tracks, CbmVertex* vertex);

  ClassDef(CbmPVFinderKF,1);

};

#endif
#ifndef CBMSTSKFTRACKFITTER
#define CBMSTSKFTRACKFITTER 1

#include "CbmKFStsHit.h"

#include "CbmStsTrackFitter.h"
#include "TClonesArray.h"

#include <vector>

class CbmKFTrack;
class CbmVertex;

class CbmStsKFTrackFitter : public CbmStsTrackFitter{

 public:

  /** Default constructor 
   */
  CbmStsKFTrackFitter();
  
  /** Destructor 
   */
  ~CbmStsKFTrackFitter() { };


  /** Initialisation 
   */
  void Init();

  /** Fit given track using Kalman Filter algorithm 
   */
  Int_t DoFit( CbmStsTrack* track, Int_t pidHypo=211 );
 
  /** Extrapolate track to any Z position 
   *
   * @param track    already fitted STS track
   * @param z        new z-position
   * @param e_track  (return value) extrapolated track parameters
   */
  void Extrapolate( CbmStsTrack* track, Double_t z, FairTrackParam *e_track );

  /** Extrapolate track param. to any Z position 
   *
   * @param track    already fitted STS track
   * @param z        new z-position
   * @param e_track  (return value) extrapolated track parameters
   */
  void Extrapolate( FairTrackParam* trackPar, Double_t z, FairTrackParam *e_track );

  /** Get normalized (in sigma's) impact parameter form vertex vtx
   *  if no vtx given, return deviation from primary vertex
   */
  Double_t GetChiToVertex( CbmStsTrack* track,  CbmVertex *vtx = 0 );

  /** Fit track to a vertex
   *
   * @param track    already fitted STS track
   * @param vtx      vertex
   * @param v_track  (return value) fitted track parameters
   * @param retrun   sqrt(Chi^2/NDF)
   */
  Double_t FitToVertex( CbmStsTrack* track, CbmVertex *vtx, FairTrackParam *v_track );

 private:

  void SetKFHits(CbmKFTrack &T, CbmStsTrack* track);
  Bool_t CheckTrack( CbmKFTrack &T );

  std::vector<CbmKFStsHit>   fHits;

  TClonesArray *fMvdHitsArray;
  TClonesArray *fStsHitsArray;

  Bool_t fIsInitialised;

 public:
  
  ClassDef( CbmStsKFTrackFitter, 1 );
 private:
  CbmStsKFTrackFitter(const CbmStsKFTrackFitter&);
  void operator=(const CbmStsKFTrackFitter&);
};

#endif
/*
 *====================================================================
 *
 *  CBM KF Track Quality
 *  
 *  Authors: M.Zyzak
 *
 *  e-mail : 
 *
 *====================================================================
 *
 *  KF Particles Finder performance 
 *
 *====================================================================
 */

#ifndef _KFParticleMatch_h_
#define _KFParticleMatch_h_

#include "TObject.h"
#include <vector>

class KFParticleMatch: public TObject
{
 public:

  KFParticleMatch();
  ~KFParticleMatch();

  Int_t GetMatch() const { return fMatch; }
  void SetMatch(Int_t i) { fMatch=i; }

  void SetMatchType(Short_t i) { fMatchType=i; }

  Bool_t IsCombinatorialBG() const {return (fMatchType==0);}
  Bool_t IsPhysicsBG() const {return (fMatchType==1);}
  Bool_t IsRecoParticle() const {return (fMatchType==2);}

 private:
  Int_t fMatch;
  Short_t fMatchType; // 0 - combinatorial BG, 1 - physics BG, 2 - reconstructed particle

  ClassDef(KFParticleMatch,1);
};


struct KFMatchParticles // used for Reco to MC match as well as for MC to Reco
{
  KFMatchParticles():ids(),idsMI(){};
  
  bool IsMatched() const { return ids.size() != 0 || idsMI.size() != 0; };
  bool IsMatchedWithPdg() const { return ids.size() != 0; };
  int  GetBestMatch() const { 
    if      (ids.size()   != 0) return ids[0];
    else if (idsMI.size() != 0) return idsMI[0];
    else return -1;
  };
  int  GetBestMatchWithPdg() const { 
    if      (ids.size()   != 0) return ids[0];
    else return -1;
  };
  std::vector<int> ids;
  std::vector<int> idsMI; // matched but pdg is different - miss identification
};

#endif // _KFParticleMatch_h_
/*
 *====================================================================
 *
 *  CBM KF Track Quality
 *  
 *  Authors: M.Zyzak
 *
 *  e-mail : 
 *
 *====================================================================
 *
 *  KF Particles Finder performance 
 *
 *====================================================================
 */

#ifndef _KFMCParticle_h_
#define _KFMCParticle_h_

#include "TObject.h"
#include <vector>

class KFMCParticle: public TObject
{
 public:
  KFMCParticle();
  ~KFMCParticle();

  void AddDaughter( int i );
  int  NDaughters() const { return fDaughterIds.size(); };
  const std::vector<int>&  GetDaughterIds() const { return fDaughterIds; };
  void FindCommonMC(){}

  void SetPDG(int pdg) {fPDG = pdg;}
  void SetMCTrackID(int id) {fMCTrackID = id;}
  void SetMotherId(int id) {fMotherId = id;}
  
  int  GetMCTrackID()      const {return fMCTrackID;}
  int  GetMotherId()       const {return fMotherId;}
  int  GetPDG()            const {return fPDG;}
  bool IsReconstructable() const {return fIsReconstructable;}
  void SetAsReconstructable() { fIsReconstructable = 1;}
  
  void CalculateIsReconstructable(unsigned int NDaughters = 2){}
  void CalculateIsRecRec(unsigned int NDaughters = 2){}
  
 private: //data
  std::vector<int> fDaughterIds;
  int fMCTrackID; // sim id of MC track, which corresponds to the particle
  int fMotherId;  // index in L1 array of mother particle
  int fPDG;
  
  bool fIsReconstructable;

  ClassDef(KFMCParticle,1);
};

#endif // _KFMCParticle_h_
#ifndef CbmKFPartEfficiencies_H
#define CbmKFPartEfficiencies_H

#include "TNamed.h"
#include "CbmL1Counters.h"

class CbmKFPartEfficiencies: public TNamed
{
 public:

  CbmKFPartEfficiencies():
  partDaughterPdg(),
    names(),
    indices(),
    fPdgToIndex(),
    ratio_reco(),
    mc(),
    reco(),
    ratio_ghost(),
    ratio_bg(),
    ratio_clone(),
    ghost(),
    bg(),
    clone()
  {
          // add total efficiency
    // AddCounter("piPlus"  ,"PiPlus  efficiency");
    // AddCounter("piMinus" ,"PiMinus efficiency");
    int mPartPDG[nParticles] = {310,3122,-3122,3312,-3312,3322,-3322,3334,-3334,3212,-3212,3222,-3222, //strange meson and hyperons
                                313,-313,323,-323, //K* resonances
                                3224,3114,-3114,-3224, 3214, -3214,//sigma resonances
                                3124,-3124, //Lambda resonances
                                3324, -3324, 1003314, -1003314, 3314, -3314, //Xi resonances
                                1003334, -1003334, //Omega resonances
                                3000, //exotics
                                333,113, //vector mesons, hadron chanel
                                100113, 200113, //light vector mesons
                                22, //dielectrons
                                111,221, //pi0, eta
                                443,100443, // J/Psi
                                421,-421,100421,-100421, //D0
                                411,-411, //D+, D-
                                431,-431, //Ds+, Ds-
                                4122,-4122, //Lambdac
                                10421, -10421, 10411, -10411, 20411, -20411,
                                3001 //H->Lambda p pi
                               };
    TString mPartName[nParticles] = {"ks","lambda","lambdab","xi-","xi+","xi0","xi0b","omega-","omega+","#Sigma^0","#Sigma^0b", "#Sigma^+", "#Sigma^+b",
                                     "k*0","k*0b","k*+","k*-",
                                     "sigma*+","sigma*-","sigma*+b","sigma*-b","sigma*0","sigma*0b",
                                     "lambda*","lambda*b",
                                     "xi*0", "xi*0b", "xi*-_{#Lambda,K}", "xi*+_{#Lambda,K}", "xi*-_{#xi-,#pi0}", "xi*+_{#xi+,#pi0}",
                                     "omega*-","omega*+",
                                     "Hdb",
                                     "phi_{KK}", "rho_{#pi#pi}",
                                     "rho_{ee}", "rho_{#mu#mu}",
                                     "gamma",
                                     "#pi^{0}","eta",
                                     "J#Psi_ee","J#Psi_#mu#mu",
                                     "D0","D0b","D0_4","D0b_4",
                                     "D+","D-",
                                     "Ds+","Ds-",
                                     "lambdac", "lambdacb",
                                     "D*0", "D*0b", "D*+", "D*-", "D*+_4", "D*-_4",
                                     "H0"
                                    };
    TString mPartTitle[nParticles] = {"KShort   ", //0
                                      "Lambda   ", //1
                                      "Lambda b ", //2
                                      "Xi-      ", //3
                                      "Xi+      ", //4
                                      "Xi0      ", //5
                                      "Xi0 b    ", //6
                                      "Omega-   ", //7
                                      "Omega+   ", //8
                                      "Sigma0   ", //9
                                      "Sigma0 b ", //10
                                      "Sigma+   ", //11
                                      "Sigma+ b ", //12
                                      "K*0      ", //13
                                      "K*0 b    ", //14
                                      "K*+      ", //15
                                      "K*-      ", //16
                                      "Sigma*+  ", //17
                                      "Sigma*-  ", //18
                                      "Sigma*+ b", //19
                                      "Sigma*- b", //20
                                      "Sigma*0  ", //21
                                      "Sigma*0 b", //22
                                      "Lambda*  ", //23
                                      "Lambda* b", //24
                                      "Xi*0     ", //25
                                      "Xi*0 b   ", //26
                                      "Xi*-_lk  ", //27
                                      "Xi*+_lk  ", //28
                                      "Xi*-_XiPi", //29
                                      "Xi*+_XiPi", //30
                                      "Omega*-  ", //31
                                      "Omega*+  ", //32
                                      "Hdb      ", //33
                                      "phi_kk   ", //34
                                      "rho_pipi ", //35
                                      "rho_ee   ", //36
                                      "rho_mm   ", //37
                                      "gamma    ", //38
                                      "Pi0      ", //39
                                      "eta      ", //40
                                      "JPsi_ee  ", //41
                                      "JPsi_mm  ", //42
                                      "D0       ", //43
                                      "D0b      ", //44
                                      "D0_4     ", //45
                                      "D0b_4    ", //46
                                      "D+       ", //47
                                      "D-       ", //48
                                      "Ds+      ", //49
                                      "Ds-      ", //50
                                      "Lambdac  ", //51
                                      "Lambdac b", //52
                                      "D*0      ", //53
                                      "D*0 b    ", //54
                                      "D*+      ", //55
                                      "D*-      ", //56
                                      "D*+_4    ", //57
                                      "D*-_4    ", //58
                                      "H0       " //59
                                     };

    float mPartMHistoMin[nParticles] = {0.3, 1., 1., 1., 1., 1., 1.,1.,1.,1.,1.,1.,1.,
                                        0.6, 0.6, 0.6, 0.6,
                                        1.,1.,1.,1.,1.,1.,
                                        1.4, 1.4,
                                        1.4, 1.4, 1.4, 1.4, 1.4, 1.4,
                                        1.8,1.8,
                                        1.,
                                        0.6, 0.1,
                                        0.1, 0.1,
                                        0.,
                                        0.,0.,
                                        1.,1.,
                                        1.,1.,1.,1.,
                                        1.,1.,
                                        1.,1.,
                                        1.8,1.8,
                                        1.8,1.8,1.8,1.8,1.8,1.8,
                                        1.};
    float mPartMHistoMax[nParticles] = {1.3, 2., 2., 3., 3., 3., 3., 3., 3.,3.,3.,3.,3.,
                                        2.6, 2.6, 2.6, 2.6,
                                        3., 3., 3., 3.,3.,3.,
                                        3.4, 3.4,
                                        3.4, 3.4, 3.4, 3.4, 3.4, 3.4,
                                        3.8, 3.8,
                                        3.,
                                        1.6, 2.1,
                                        2.1, 2.1,
                                        3.,
                                        3.,3.,
                                        4.,4.,
                                        3.,3.,3.,3.,
                                        3.,3.,
                                        3.,3.,
                                        3.8,3.8,
                                        3.8,3.8,3.8,3.8,3.8,3.8,
                                        3.};
    //set decay mode
    partDaughterPdg.resize(nParticles);

    partDaughterPdg[ 0].push_back(  211); //K0s -> pi+ pi-
    partDaughterPdg[ 0].push_back( -211);

    partDaughterPdg[ 1].push_back( 2212); //Lambda -> p pi-
    partDaughterPdg[ 1].push_back( -211);

    partDaughterPdg[ 2].push_back(-2212); //Lambda_bar -> p- pi+
    partDaughterPdg[ 2].push_back(  211);

    partDaughterPdg[ 3].push_back( 3122); //Xi- -> Lambda pi-
    partDaughterPdg[ 3].push_back( -211);

    partDaughterPdg[ 4].push_back(-3122); //Xi+ -> Lambda_bar pi+
    partDaughterPdg[ 4].push_back(  211);

    partDaughterPdg[ 5].push_back( 3122); //Xi0 -> Lambda pi0
    partDaughterPdg[ 5].push_back(  111);

    partDaughterPdg[ 6].push_back(-3122); //Xi0_bar -> Lambda_bar pi0
    partDaughterPdg[ 6].push_back(  111);

    partDaughterPdg[ 7].push_back( 3122); //Omega- -> Lambda K-
    partDaughterPdg[ 7].push_back( -321);

    partDaughterPdg[ 8].push_back(-3122); //Omega+ -> Lambda_bar K+
    partDaughterPdg[ 8].push_back(  321);

    partDaughterPdg[ 9].push_back(   22); //Sigma0 -> Lambda Gamma
    partDaughterPdg[ 9].push_back( 3122);

    partDaughterPdg[10].push_back(   22); //Sigma0_bar -> Lambda_bar Gamma
    partDaughterPdg[10].push_back(-3122);

    partDaughterPdg[11].push_back(  111); //Sigma+ -> p pi0
    partDaughterPdg[11].push_back( 2212);

    partDaughterPdg[12].push_back(  111); //Sigma+_bar -> p- pi0
    partDaughterPdg[12].push_back(-2212);

    partDaughterPdg[13].push_back(  321); //K*0 -> K+ pi-
    partDaughterPdg[13].push_back( -211);

    partDaughterPdg[14].push_back( -321); //K*0_bar -> K- pi+
    partDaughterPdg[14].push_back(  211);

    partDaughterPdg[15].push_back(  310); //K*+ -> K0s pi+
    partDaughterPdg[15].push_back(  211);

    partDaughterPdg[16].push_back(  310); //K*- -> K0s pi-
    partDaughterPdg[16].push_back( -211);

    partDaughterPdg[17].push_back( 3122); //Sigma+ -> Lambda pi+
    partDaughterPdg[17].push_back(  211);

    partDaughterPdg[18].push_back( 3122); //Sigma- -> Lambda pi-
    partDaughterPdg[18].push_back( -211);

    partDaughterPdg[19].push_back(-3122); //Sigma+_bar -> Lambda_bar pi+
    partDaughterPdg[19].push_back(  211);

    partDaughterPdg[20].push_back(-3122); //Sigma-_bar -> Lambda_bar pi-
    partDaughterPdg[20].push_back( -211);

    partDaughterPdg[21].push_back( 3122); //Sigma*0 -> Lambda pi0
    partDaughterPdg[21].push_back(  111);

    partDaughterPdg[22].push_back(-3122); //Sigma*0_bar -> Lambda_bar pi0
    partDaughterPdg[22].push_back(  111);

    partDaughterPdg[23].push_back( 2212); //Lambda* -> p K-
    partDaughterPdg[23].push_back( -321);

    partDaughterPdg[24].push_back(-2212); //Lambda*_bar -> p- K+
    partDaughterPdg[24].push_back(  321);

    partDaughterPdg[25].push_back( 3312); //Xi*0 -> Xi- pi+
    partDaughterPdg[25].push_back(  211);

    partDaughterPdg[26].push_back(-3312); //Xi*0_bar -> Xi+ pi-
    partDaughterPdg[26].push_back( -211);

    partDaughterPdg[27].push_back( 3122); //Xi*- -> Lambda K-
    partDaughterPdg[27].push_back( -321);

    partDaughterPdg[28].push_back(-3122); //Xi*+ -> Lambda_bar K+
    partDaughterPdg[28].push_back(  321);

    partDaughterPdg[29].push_back( 3312); //Xi*- -> Xi- pi0
    partDaughterPdg[29].push_back(  111);

    partDaughterPdg[30].push_back(-3312); //Xi*+ -> Xi+ pi0
    partDaughterPdg[30].push_back(  111);

    partDaughterPdg[31].push_back( 3312); //Omega*- -> Xi- pi+ K-
    partDaughterPdg[31].push_back(  211);
    partDaughterPdg[31].push_back( -321);

    partDaughterPdg[32].push_back(-3312); //Omega*- -> Xi+ pi- K+
    partDaughterPdg[32].push_back( -211);
    partDaughterPdg[32].push_back(  321);

    partDaughterPdg[33].push_back( 3122); //H-dibar -> Lambda Lambda
    partDaughterPdg[33].push_back( 3122);

    partDaughterPdg[34].push_back(  321); //phi -> K+ K-
    partDaughterPdg[34].push_back( -321);

    partDaughterPdg[35].push_back(  211); //rho, omega, phi -> pi+ pi-
    partDaughterPdg[35].push_back( -211);

    partDaughterPdg[36].push_back(   11); //rho, omega, phi -> e+ e-
    partDaughterPdg[36].push_back(  -11);

    partDaughterPdg[37].push_back(   13); //rho, omega, phi -> mu+ mu-
    partDaughterPdg[37].push_back(  -13);

    partDaughterPdg[38].push_back(   11); //gamma -> e+ e-
    partDaughterPdg[38].push_back(  -11);

    partDaughterPdg[39].push_back(   22); //pi0 -> gamma gamma
    partDaughterPdg[39].push_back(   22);

    partDaughterPdg[40].push_back(  111); //eta -> pi0 pi0
    partDaughterPdg[40].push_back(  111);
    partDaughterPdg[40].push_back(  111);

    partDaughterPdg[41].push_back(   11); //JPsi -> e+ e-
    partDaughterPdg[41].push_back(  -11);

    partDaughterPdg[42].push_back(   13); //JPsi -> mu+ mu-
    partDaughterPdg[42].push_back(  -13);

    partDaughterPdg[43].push_back(  211); //D0 -> pi+ K-
    partDaughterPdg[43].push_back( -321);

    partDaughterPdg[44].push_back( -211); //D0_bar -> K+ pi-
    partDaughterPdg[44].push_back(  321);

    partDaughterPdg[45].push_back(  211); //D0 -> pi+ pi+ pi- K-
    partDaughterPdg[45].push_back(  211);
    partDaughterPdg[45].push_back( -211);
    partDaughterPdg[45].push_back( -321);

    partDaughterPdg[46].push_back( -211); //D0_bar -> pi- pi- pi+ K+
    partDaughterPdg[46].push_back( -211);
    partDaughterPdg[46].push_back(  211);
    partDaughterPdg[46].push_back(  321);

    partDaughterPdg[47].push_back( -321); //D+ -> K- pi+ pi+
    partDaughterPdg[47].push_back(  211);
    partDaughterPdg[47].push_back(  211);

    partDaughterPdg[48].push_back(  321); //D- -> K+ pi- pi-
    partDaughterPdg[48].push_back( -211);
    partDaughterPdg[48].push_back( -211);

    partDaughterPdg[49].push_back( -321); //Ds+ -> K- K+ pi+
    partDaughterPdg[49].push_back(  321);
    partDaughterPdg[49].push_back(  211);

    partDaughterPdg[50].push_back(  321); //Ds- -> K+ K- pi-
    partDaughterPdg[50].push_back( -321);
    partDaughterPdg[50].push_back( -211);

    partDaughterPdg[51].push_back(  211); //Lambdac -> pi+ K- p
    partDaughterPdg[51].push_back( -321);
    partDaughterPdg[51].push_back( 2212);

    partDaughterPdg[52].push_back( -211); //Lambdac_bar -> pi- K+ p-
    partDaughterPdg[52].push_back(  321);
    partDaughterPdg[52].push_back(-2212);

    partDaughterPdg[53].push_back(  411); //D*0 -> D+ pi-
    partDaughterPdg[53].push_back( -211);

    partDaughterPdg[54].push_back( -411); //D*0_bar -> D- pi+
    partDaughterPdg[54].push_back(  211);

    partDaughterPdg[55].push_back(  421); //D*+ -> D0 pi+
    partDaughterPdg[55].push_back(  211);

    partDaughterPdg[56].push_back( -421); //D*- -> D0_bar pi-
    partDaughterPdg[56].push_back( -211);

    partDaughterPdg[57].push_back(  421); //D*+ -> D04 pi+
    partDaughterPdg[57].push_back(  211);

    partDaughterPdg[58].push_back( -421); //D*- -> D04_bar pi-
    partDaughterPdg[58].push_back( -211);

    partDaughterPdg[59].push_back( 3122); //H0-> Lambda pi- p
    partDaughterPdg[59].push_back( -211);
    partDaughterPdg[59].push_back( 2212);

    for(int iP=0; iP<nParticles; iP++)
    {
      partPDG[iP] = mPartPDG[iP];
      partName[iP] = mPartName[iP];
      partTitle[iP] = mPartTitle[iP];
      partMHistoMin[iP] = mPartMHistoMin[iP];
      partMHistoMax[iP] = mPartMHistoMax[iP];
    }

    for(int iP=0; iP<nParticles; iP++)
    {
      AddCounter(Form("%s",partName[iP].Data()), Form("%-*s",14,partTitle[iP].Data()));
      AddCounter(Form("%s_prim",partName[iP].Data()), Form("%s Prim",partTitle[iP].Data()));
      AddCounter(Form("%s_sec",partName[iP].Data()), Form("%s Sec ",partTitle[iP].Data()));
    }

    for(int iP=0; iP<nParticles; iP++)
      fPdgToIndex[mPartPDG[iP]] = iP;
  }

  virtual ~CbmKFPartEfficiencies(){};

  int GetParticleIndex(int pdg)
  {
    std::map<int, int>::iterator it;
    it=fPdgToIndex.find(pdg);
    if(it != fPdgToIndex.end()) return it->second;
    else return -1;
  }

  virtual void AddCounter(TString shortname, TString name){
    indices[shortname] = names.size();
    names.push_back(name);

    ratio_reco.AddCounter();
    mc.AddCounter();
    reco.AddCounter();

    ratio_ghost.AddCounter();
    ratio_bg.AddCounter();
    ratio_clone.AddCounter();
    ghost.AddCounter();
    bg.AddCounter();
    clone.AddCounter();
  };

  CbmKFPartEfficiencies& operator+=(CbmKFPartEfficiencies& a){
    mc += a.mc; reco += a.reco;
    ghost += a.ghost; bg += a.bg; clone += a.clone;
    return *this;
  };
  
  void CalcEff(){
    ratio_reco = reco/mc;

    TL1TracksCatCounters<int> allReco = reco + ghost + bg;
    ratio_ghost = ghost/allReco;
    ratio_bg  = bg/allReco;
    ratio_clone  = clone/allReco;
  };
  

  void Inc(bool isReco, int nClones, TString name)
  {
    const int index = indices[name];
    
    mc.counters[index]++;
    if (isReco) reco.counters[index]++;
    if(nClones > 0)
      clone.counters[index] += nClones;
  };

  void IncReco(bool isGhost, bool isBg, TString name){
    const int index = indices[name];

    if (isGhost) ghost.     counters[index]++;
    if (isBg)    bg.counters[index]++;
  };

  void PrintEff(){
    std::cout.setf(ios::fixed);
    std::cout.setf(ios::showpoint);
    std::cout.precision(3);
    std::cout << "Particle     : "
         << "   Eff "
         <<" / "<< " Ghost "
         <<" / "<< "BackGr "
         <<" / "<< "N Ghost"
         <<" / "<< "N BackGr"
         <<" / "<< "N Reco "
         <<" / "<< "N Clone "
         <<" | "<< "  N MC "  << std::endl;
    
    int NCounters = mc.NCounters;
    for (int iC = 0; iC < NCounters; iC++){
        std::cout << names[iC]
             << "  : " << setw(6) << ratio_reco.counters[iC]              
             << "  / " << setw(6) << ratio_ghost.counters[iC]  // particles w\o MCParticle
             << "  / " << setw(6) << ratio_bg.counters[iC]     // particles with incorrect MCParticle
             << "  / " << setw(6) << ghost.counters[iC]
             << "  / " << setw(7) << bg.counters[iC]
             << "  / " << setw(6) << reco.counters[iC]
             << "  / " << setw(7) << clone.counters[iC]
             << "  | " << setw(6) << mc.counters[iC]  << std::endl;
    }
  };

  friend std::fstream & operator<<(std::fstream &strm, CbmKFPartEfficiencies &a) {

    strm << a.ratio_reco;
    strm << a.mc;
    strm << a.reco;
    strm << a.ratio_ghost;
    strm << a.ratio_bg;
    strm << a.ratio_clone;
    strm << a.ghost;
    strm << a.bg;
    strm << a.clone;

    return strm;
  }

  friend std::fstream & operator>>(std::fstream &strm, CbmKFPartEfficiencies &a){

    strm >> a.ratio_reco;
    strm >> a.mc;
    strm >> a.reco;
    strm >> a.ratio_ghost;
    strm >> a.ratio_bg;
    strm >> a.ratio_clone;
    strm >> a.ghost;
    strm >> a.bg;
    strm >> a.clone;

    return strm;
  }

  void AddFromFile(TString fileName)
  {
    std::fstream file(fileName.Data(),fstream::in);
    file >> *this;
  }

  static const int nParticles = 60;
  int partPDG[nParticles];
  TString partName[nParticles];
  TString partTitle[nParticles];
  vector<vector<int> > partDaughterPdg;
  float partMHistoMin[nParticles];
  float partMHistoMax[nParticles];

  ClassDef(CbmKFPartEfficiencies,1);

 private:
  vector<TString> names; // names counters indexed by index of counter
  map<TString, int> indices; // indices of counters indexed by a counter shortname

  map<int, int> fPdgToIndex;

  TL1TracksCatCounters<double> ratio_reco;

  TL1TracksCatCounters<int> mc;
  TL1TracksCatCounters<int> reco;

  TL1TracksCatCounters<double> ratio_ghost;
  TL1TracksCatCounters<double> ratio_bg;
  TL1TracksCatCounters<double> ratio_clone;

  TL1TracksCatCounters<int> ghost;
  TL1TracksCatCounters<int> bg; // background
  TL1TracksCatCounters<int> clone; // background
};

#endif
#ifndef CbmKFParticleDatabase_H
#define CbmKFParticleDatabase_H

#include <map>

class CbmKFParticleDatabase
{
 public:
  CbmKFParticleDatabase();

  ~CbmKFParticleDatabase() {};

  float GetMass(int pdg)
  {
    std::map<int, float>::iterator it;
    it=fMass.find(pdg);
    if(it != fMass.end()) return it->second;
    else return 0.13957;
  }

  static CbmKFParticleDatabase* Instance() { return fDatabase; }

 private:
  std::map<int, float> fMass;

  static CbmKFParticleDatabase* fDatabase;
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"CbmKF", payloadCode, "@",
"CbmKFBox", payloadCode, "@",
"CbmKFCone", payloadCode, "@",
"CbmKFFieldMath", payloadCode, "@",
"CbmKFHit", payloadCode, "@",
"CbmKFMaterial", payloadCode, "@",
"CbmKFMath", payloadCode, "@",
"CbmKFPartEfficiencies", payloadCode, "@",
"CbmKFParticle", payloadCode, "@",
"CbmKFPixelMeasurement", payloadCode, "@",
"CbmKFPrimaryVertexFinder", payloadCode, "@",
"CbmKFStsHit", payloadCode, "@",
"CbmKFTrack", payloadCode, "@",
"CbmKFTrackInterface", payloadCode, "@",
"CbmKFTube", payloadCode, "@",
"CbmKFUMeasurement", payloadCode, "@",
"CbmKFVertex", payloadCode, "@",
"CbmKFVertexInterface", payloadCode, "@",
"CbmKFWall", payloadCode, "@",
"CbmPVFinderKF", payloadCode, "@",
"CbmStsKFTrackFitter", payloadCode, "@",
"KFMCParticle", payloadCode, "@",
"KFParticleMatch", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__KFDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__KFDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__KFDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__KFDict() {
  TriggerDictionaryInitialization_G__KFDict_Impl();
}
