// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIalexdIbmnroot_devdIbmnrootdIbuilddIsilicondIG__SiliconDict

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
#include "BmnSilicon.h"
#include "BmnSiliconPoint.h"
#include "BmnSiliconLayer.h"
#include "BmnSiliconModule.h"
#include "BmnSiliconStation.h"
#include "BmnSiliconStationSet.h"
#include "BmnSiliconDigitizer.h"
#include "BmnSiliconHitMaker.h"
#include "BmnSiliconDigit.h"
#include "BmnSiliconHit.h"
#include "BmnSiliconTrack.h"

// Header files passed via #pragma extra_include

namespace BmnSiliconConfiguration {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *BmnSiliconConfiguration_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("BmnSiliconConfiguration", 0 /*version*/, "BmnSiliconConfiguration.h", 4,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &BmnSiliconConfiguration_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *BmnSiliconConfiguration_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace ROOT {
   static void *new_BmnSilicon(void *p = 0);
   static void *newArray_BmnSilicon(Long_t size, void *p);
   static void delete_BmnSilicon(void *p);
   static void deleteArray_BmnSilicon(void *p);
   static void destruct_BmnSilicon(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSilicon*)
   {
      ::BmnSilicon *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSilicon >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSilicon", ::BmnSilicon::Class_Version(), "", 20,
                  typeid(::BmnSilicon), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSilicon::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSilicon) );
      instance.SetNew(&new_BmnSilicon);
      instance.SetNewArray(&newArray_BmnSilicon);
      instance.SetDelete(&delete_BmnSilicon);
      instance.SetDeleteArray(&deleteArray_BmnSilicon);
      instance.SetDestructor(&destruct_BmnSilicon);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSilicon*)
   {
      return GenerateInitInstanceLocal((::BmnSilicon*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSilicon*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnSiliconPoint(void *p = 0);
   static void *newArray_BmnSiliconPoint(Long_t size, void *p);
   static void delete_BmnSiliconPoint(void *p);
   static void deleteArray_BmnSiliconPoint(void *p);
   static void destruct_BmnSiliconPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSiliconPoint*)
   {
      ::BmnSiliconPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSiliconPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSiliconPoint", ::BmnSiliconPoint::Class_Version(), "", 128,
                  typeid(::BmnSiliconPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSiliconPoint::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSiliconPoint) );
      instance.SetNew(&new_BmnSiliconPoint);
      instance.SetNewArray(&newArray_BmnSiliconPoint);
      instance.SetDelete(&delete_BmnSiliconPoint);
      instance.SetDeleteArray(&deleteArray_BmnSiliconPoint);
      instance.SetDestructor(&destruct_BmnSiliconPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSiliconPoint*)
   {
      return GenerateInitInstanceLocal((::BmnSiliconPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSiliconPoint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnSiliconLayer(void *p = 0);
   static void *newArray_BmnSiliconLayer(Long_t size, void *p);
   static void delete_BmnSiliconLayer(void *p);
   static void deleteArray_BmnSiliconLayer(void *p);
   static void destruct_BmnSiliconLayer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSiliconLayer*)
   {
      ::BmnSiliconLayer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSiliconLayer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSiliconLayer", ::BmnSiliconLayer::Class_Version(), "", 205,
                  typeid(::BmnSiliconLayer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSiliconLayer::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSiliconLayer) );
      instance.SetNew(&new_BmnSiliconLayer);
      instance.SetNewArray(&newArray_BmnSiliconLayer);
      instance.SetDelete(&delete_BmnSiliconLayer);
      instance.SetDeleteArray(&deleteArray_BmnSiliconLayer);
      instance.SetDestructor(&destruct_BmnSiliconLayer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSiliconLayer*)
   {
      return GenerateInitInstanceLocal((::BmnSiliconLayer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSiliconLayer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnSiliconModule(void *p = 0);
   static void *newArray_BmnSiliconModule(Long_t size, void *p);
   static void delete_BmnSiliconModule(void *p);
   static void deleteArray_BmnSiliconModule(void *p);
   static void destruct_BmnSiliconModule(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSiliconModule*)
   {
      ::BmnSiliconModule *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSiliconModule >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSiliconModule", ::BmnSiliconModule::Class_Version(), "", 374,
                  typeid(::BmnSiliconModule), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSiliconModule::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSiliconModule) );
      instance.SetNew(&new_BmnSiliconModule);
      instance.SetNewArray(&newArray_BmnSiliconModule);
      instance.SetDelete(&delete_BmnSiliconModule);
      instance.SetDeleteArray(&deleteArray_BmnSiliconModule);
      instance.SetDestructor(&destruct_BmnSiliconModule);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSiliconModule*)
   {
      return GenerateInitInstanceLocal((::BmnSiliconModule*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSiliconModule*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnSiliconStation(void *p = 0);
   static void *newArray_BmnSiliconStation(Long_t size, void *p);
   static void delete_BmnSiliconStation(void *p);
   static void deleteArray_BmnSiliconStation(void *p);
   static void destruct_BmnSiliconStation(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSiliconStation*)
   {
      ::BmnSiliconStation *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSiliconStation >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSiliconStation", ::BmnSiliconStation::Class_Version(), "", 558,
                  typeid(::BmnSiliconStation), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSiliconStation::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSiliconStation) );
      instance.SetNew(&new_BmnSiliconStation);
      instance.SetNewArray(&newArray_BmnSiliconStation);
      instance.SetDelete(&delete_BmnSiliconStation);
      instance.SetDeleteArray(&deleteArray_BmnSiliconStation);
      instance.SetDestructor(&destruct_BmnSiliconStation);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSiliconStation*)
   {
      return GenerateInitInstanceLocal((::BmnSiliconStation*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSiliconStation*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnSiliconStationSet(void *p = 0);
   static void *newArray_BmnSiliconStationSet(Long_t size, void *p);
   static void delete_BmnSiliconStationSet(void *p);
   static void deleteArray_BmnSiliconStationSet(void *p);
   static void destruct_BmnSiliconStationSet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSiliconStationSet*)
   {
      ::BmnSiliconStationSet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSiliconStationSet >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSiliconStationSet", ::BmnSiliconStationSet::Class_Version(), "", 670,
                  typeid(::BmnSiliconStationSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSiliconStationSet::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSiliconStationSet) );
      instance.SetNew(&new_BmnSiliconStationSet);
      instance.SetNewArray(&newArray_BmnSiliconStationSet);
      instance.SetDelete(&delete_BmnSiliconStationSet);
      instance.SetDeleteArray(&deleteArray_BmnSiliconStationSet);
      instance.SetDestructor(&destruct_BmnSiliconStationSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSiliconStationSet*)
   {
      return GenerateInitInstanceLocal((::BmnSiliconStationSet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSiliconStationSet*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnSiliconDigit(void *p = 0);
   static void *newArray_BmnSiliconDigit(Long_t size, void *p);
   static void delete_BmnSiliconDigit(void *p);
   static void deleteArray_BmnSiliconDigit(void *p);
   static void destruct_BmnSiliconDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSiliconDigit*)
   {
      ::BmnSiliconDigit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSiliconDigit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSiliconDigit", ::BmnSiliconDigit::Class_Version(), "BmnSiliconDigit.h", 11,
                  typeid(::BmnSiliconDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSiliconDigit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSiliconDigit) );
      instance.SetNew(&new_BmnSiliconDigit);
      instance.SetNewArray(&newArray_BmnSiliconDigit);
      instance.SetDelete(&delete_BmnSiliconDigit);
      instance.SetDeleteArray(&deleteArray_BmnSiliconDigit);
      instance.SetDestructor(&destruct_BmnSiliconDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSiliconDigit*)
   {
      return GenerateInitInstanceLocal((::BmnSiliconDigit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSiliconDigit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnSiliconDigitizer(void *p = 0);
   static void *newArray_BmnSiliconDigitizer(Long_t size, void *p);
   static void delete_BmnSiliconDigitizer(void *p);
   static void deleteArray_BmnSiliconDigitizer(void *p);
   static void destruct_BmnSiliconDigitizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSiliconDigitizer*)
   {
      ::BmnSiliconDigitizer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSiliconDigitizer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSiliconDigitizer", ::BmnSiliconDigitizer::Class_Version(), "", 747,
                  typeid(::BmnSiliconDigitizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSiliconDigitizer::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSiliconDigitizer) );
      instance.SetNew(&new_BmnSiliconDigitizer);
      instance.SetNewArray(&newArray_BmnSiliconDigitizer);
      instance.SetDelete(&delete_BmnSiliconDigitizer);
      instance.SetDeleteArray(&deleteArray_BmnSiliconDigitizer);
      instance.SetDestructor(&destruct_BmnSiliconDigitizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSiliconDigitizer*)
   {
      return GenerateInitInstanceLocal((::BmnSiliconDigitizer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSiliconDigitizer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnSiliconHit(void *p = 0);
   static void *newArray_BmnSiliconHit(Long_t size, void *p);
   static void delete_BmnSiliconHit(void *p);
   static void deleteArray_BmnSiliconHit(void *p);
   static void destruct_BmnSiliconHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSiliconHit*)
   {
      ::BmnSiliconHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSiliconHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSiliconHit", ::BmnSiliconHit::Class_Version(), "BmnSiliconHit.h", 8,
                  typeid(::BmnSiliconHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSiliconHit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSiliconHit) );
      instance.SetNew(&new_BmnSiliconHit);
      instance.SetNewArray(&newArray_BmnSiliconHit);
      instance.SetDelete(&delete_BmnSiliconHit);
      instance.SetDeleteArray(&deleteArray_BmnSiliconHit);
      instance.SetDestructor(&destruct_BmnSiliconHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSiliconHit*)
   {
      return GenerateInitInstanceLocal((::BmnSiliconHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSiliconHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnSiliconHitMaker(void *p = 0);
   static void *newArray_BmnSiliconHitMaker(Long_t size, void *p);
   static void delete_BmnSiliconHitMaker(void *p);
   static void deleteArray_BmnSiliconHitMaker(void *p);
   static void destruct_BmnSiliconHitMaker(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSiliconHitMaker*)
   {
      ::BmnSiliconHitMaker *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSiliconHitMaker >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSiliconHitMaker", ::BmnSiliconHitMaker::Class_Version(), "", 828,
                  typeid(::BmnSiliconHitMaker), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSiliconHitMaker::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSiliconHitMaker) );
      instance.SetNew(&new_BmnSiliconHitMaker);
      instance.SetNewArray(&newArray_BmnSiliconHitMaker);
      instance.SetDelete(&delete_BmnSiliconHitMaker);
      instance.SetDeleteArray(&deleteArray_BmnSiliconHitMaker);
      instance.SetDestructor(&destruct_BmnSiliconHitMaker);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSiliconHitMaker*)
   {
      return GenerateInitInstanceLocal((::BmnSiliconHitMaker*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSiliconHitMaker*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnSiliconTrack(void *p = 0);
   static void *newArray_BmnSiliconTrack(Long_t size, void *p);
   static void delete_BmnSiliconTrack(void *p);
   static void deleteArray_BmnSiliconTrack(void *p);
   static void destruct_BmnSiliconTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSiliconTrack*)
   {
      ::BmnSiliconTrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSiliconTrack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSiliconTrack", ::BmnSiliconTrack::Class_Version(), "", 1074,
                  typeid(::BmnSiliconTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSiliconTrack::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSiliconTrack) );
      instance.SetNew(&new_BmnSiliconTrack);
      instance.SetNewArray(&newArray_BmnSiliconTrack);
      instance.SetDelete(&delete_BmnSiliconTrack);
      instance.SetDeleteArray(&deleteArray_BmnSiliconTrack);
      instance.SetDestructor(&destruct_BmnSiliconTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSiliconTrack*)
   {
      return GenerateInitInstanceLocal((::BmnSiliconTrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSiliconTrack*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnSilicon::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSilicon::Class_Name()
{
   return "BmnSilicon";
}

//______________________________________________________________________________
const char *BmnSilicon::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSilicon*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSilicon::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSilicon*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSilicon::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSilicon*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSilicon::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSilicon*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnSiliconPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSiliconPoint::Class_Name()
{
   return "BmnSiliconPoint";
}

//______________________________________________________________________________
const char *BmnSiliconPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSiliconPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSiliconPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSiliconPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnSiliconLayer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSiliconLayer::Class_Name()
{
   return "BmnSiliconLayer";
}

//______________________________________________________________________________
const char *BmnSiliconLayer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconLayer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSiliconLayer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconLayer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSiliconLayer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconLayer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSiliconLayer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconLayer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnSiliconModule::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSiliconModule::Class_Name()
{
   return "BmnSiliconModule";
}

//______________________________________________________________________________
const char *BmnSiliconModule::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconModule*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSiliconModule::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconModule*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSiliconModule::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconModule*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSiliconModule::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconModule*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnSiliconStation::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSiliconStation::Class_Name()
{
   return "BmnSiliconStation";
}

//______________________________________________________________________________
const char *BmnSiliconStation::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconStation*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSiliconStation::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconStation*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSiliconStation::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconStation*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSiliconStation::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconStation*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnSiliconStationSet::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSiliconStationSet::Class_Name()
{
   return "BmnSiliconStationSet";
}

//______________________________________________________________________________
const char *BmnSiliconStationSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconStationSet*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSiliconStationSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconStationSet*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSiliconStationSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconStationSet*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSiliconStationSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconStationSet*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnSiliconDigit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSiliconDigit::Class_Name()
{
   return "BmnSiliconDigit";
}

//______________________________________________________________________________
const char *BmnSiliconDigit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconDigit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSiliconDigit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconDigit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSiliconDigit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconDigit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSiliconDigit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconDigit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnSiliconDigitizer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSiliconDigitizer::Class_Name()
{
   return "BmnSiliconDigitizer";
}

//______________________________________________________________________________
const char *BmnSiliconDigitizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconDigitizer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSiliconDigitizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconDigitizer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSiliconDigitizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconDigitizer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSiliconDigitizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconDigitizer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnSiliconHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSiliconHit::Class_Name()
{
   return "BmnSiliconHit";
}

//______________________________________________________________________________
const char *BmnSiliconHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSiliconHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSiliconHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSiliconHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnSiliconHitMaker::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSiliconHitMaker::Class_Name()
{
   return "BmnSiliconHitMaker";
}

//______________________________________________________________________________
const char *BmnSiliconHitMaker::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconHitMaker*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSiliconHitMaker::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconHitMaker*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSiliconHitMaker::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconHitMaker*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSiliconHitMaker::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconHitMaker*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnSiliconTrack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSiliconTrack::Class_Name()
{
   return "BmnSiliconTrack";
}

//______________________________________________________________________________
const char *BmnSiliconTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconTrack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSiliconTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconTrack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSiliconTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconTrack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSiliconTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconTrack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnSilicon::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSilicon.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSilicon::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSilicon::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSilicon(void *p) {
      return  p ? new(p) ::BmnSilicon : new ::BmnSilicon;
   }
   static void *newArray_BmnSilicon(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSilicon[nElements] : new ::BmnSilicon[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSilicon(void *p) {
      delete ((::BmnSilicon*)p);
   }
   static void deleteArray_BmnSilicon(void *p) {
      delete [] ((::BmnSilicon*)p);
   }
   static void destruct_BmnSilicon(void *p) {
      typedef ::BmnSilicon current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSilicon

//______________________________________________________________________________
void BmnSiliconPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSiliconPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSiliconPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSiliconPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSiliconPoint(void *p) {
      return  p ? new(p) ::BmnSiliconPoint : new ::BmnSiliconPoint;
   }
   static void *newArray_BmnSiliconPoint(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSiliconPoint[nElements] : new ::BmnSiliconPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSiliconPoint(void *p) {
      delete ((::BmnSiliconPoint*)p);
   }
   static void deleteArray_BmnSiliconPoint(void *p) {
      delete [] ((::BmnSiliconPoint*)p);
   }
   static void destruct_BmnSiliconPoint(void *p) {
      typedef ::BmnSiliconPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSiliconPoint

//______________________________________________________________________________
void BmnSiliconLayer::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSiliconLayer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSiliconLayer::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSiliconLayer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSiliconLayer(void *p) {
      return  p ? new(p) ::BmnSiliconLayer : new ::BmnSiliconLayer;
   }
   static void *newArray_BmnSiliconLayer(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSiliconLayer[nElements] : new ::BmnSiliconLayer[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSiliconLayer(void *p) {
      delete ((::BmnSiliconLayer*)p);
   }
   static void deleteArray_BmnSiliconLayer(void *p) {
      delete [] ((::BmnSiliconLayer*)p);
   }
   static void destruct_BmnSiliconLayer(void *p) {
      typedef ::BmnSiliconLayer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSiliconLayer

//______________________________________________________________________________
void BmnSiliconModule::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSiliconModule.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSiliconModule::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSiliconModule::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSiliconModule(void *p) {
      return  p ? new(p) ::BmnSiliconModule : new ::BmnSiliconModule;
   }
   static void *newArray_BmnSiliconModule(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSiliconModule[nElements] : new ::BmnSiliconModule[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSiliconModule(void *p) {
      delete ((::BmnSiliconModule*)p);
   }
   static void deleteArray_BmnSiliconModule(void *p) {
      delete [] ((::BmnSiliconModule*)p);
   }
   static void destruct_BmnSiliconModule(void *p) {
      typedef ::BmnSiliconModule current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSiliconModule

//______________________________________________________________________________
void BmnSiliconStation::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSiliconStation.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSiliconStation::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSiliconStation::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSiliconStation(void *p) {
      return  p ? new(p) ::BmnSiliconStation : new ::BmnSiliconStation;
   }
   static void *newArray_BmnSiliconStation(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSiliconStation[nElements] : new ::BmnSiliconStation[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSiliconStation(void *p) {
      delete ((::BmnSiliconStation*)p);
   }
   static void deleteArray_BmnSiliconStation(void *p) {
      delete [] ((::BmnSiliconStation*)p);
   }
   static void destruct_BmnSiliconStation(void *p) {
      typedef ::BmnSiliconStation current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSiliconStation

//______________________________________________________________________________
void BmnSiliconStationSet::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSiliconStationSet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSiliconStationSet::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSiliconStationSet::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSiliconStationSet(void *p) {
      return  p ? new(p) ::BmnSiliconStationSet : new ::BmnSiliconStationSet;
   }
   static void *newArray_BmnSiliconStationSet(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSiliconStationSet[nElements] : new ::BmnSiliconStationSet[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSiliconStationSet(void *p) {
      delete ((::BmnSiliconStationSet*)p);
   }
   static void deleteArray_BmnSiliconStationSet(void *p) {
      delete [] ((::BmnSiliconStationSet*)p);
   }
   static void destruct_BmnSiliconStationSet(void *p) {
      typedef ::BmnSiliconStationSet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSiliconStationSet

//______________________________________________________________________________
void BmnSiliconDigit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSiliconDigit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSiliconDigit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSiliconDigit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSiliconDigit(void *p) {
      return  p ? new(p) ::BmnSiliconDigit : new ::BmnSiliconDigit;
   }
   static void *newArray_BmnSiliconDigit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSiliconDigit[nElements] : new ::BmnSiliconDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSiliconDigit(void *p) {
      delete ((::BmnSiliconDigit*)p);
   }
   static void deleteArray_BmnSiliconDigit(void *p) {
      delete [] ((::BmnSiliconDigit*)p);
   }
   static void destruct_BmnSiliconDigit(void *p) {
      typedef ::BmnSiliconDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSiliconDigit

//______________________________________________________________________________
void BmnSiliconDigitizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSiliconDigitizer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSiliconDigitizer::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSiliconDigitizer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSiliconDigitizer(void *p) {
      return  p ? new(p) ::BmnSiliconDigitizer : new ::BmnSiliconDigitizer;
   }
   static void *newArray_BmnSiliconDigitizer(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSiliconDigitizer[nElements] : new ::BmnSiliconDigitizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSiliconDigitizer(void *p) {
      delete ((::BmnSiliconDigitizer*)p);
   }
   static void deleteArray_BmnSiliconDigitizer(void *p) {
      delete [] ((::BmnSiliconDigitizer*)p);
   }
   static void destruct_BmnSiliconDigitizer(void *p) {
      typedef ::BmnSiliconDigitizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSiliconDigitizer

//______________________________________________________________________________
void BmnSiliconHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSiliconHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSiliconHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSiliconHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSiliconHit(void *p) {
      return  p ? new(p) ::BmnSiliconHit : new ::BmnSiliconHit;
   }
   static void *newArray_BmnSiliconHit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSiliconHit[nElements] : new ::BmnSiliconHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSiliconHit(void *p) {
      delete ((::BmnSiliconHit*)p);
   }
   static void deleteArray_BmnSiliconHit(void *p) {
      delete [] ((::BmnSiliconHit*)p);
   }
   static void destruct_BmnSiliconHit(void *p) {
      typedef ::BmnSiliconHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSiliconHit

//______________________________________________________________________________
void BmnSiliconHitMaker::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSiliconHitMaker.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSiliconHitMaker::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSiliconHitMaker::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSiliconHitMaker(void *p) {
      return  p ? new(p) ::BmnSiliconHitMaker : new ::BmnSiliconHitMaker;
   }
   static void *newArray_BmnSiliconHitMaker(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSiliconHitMaker[nElements] : new ::BmnSiliconHitMaker[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSiliconHitMaker(void *p) {
      delete ((::BmnSiliconHitMaker*)p);
   }
   static void deleteArray_BmnSiliconHitMaker(void *p) {
      delete [] ((::BmnSiliconHitMaker*)p);
   }
   static void destruct_BmnSiliconHitMaker(void *p) {
      typedef ::BmnSiliconHitMaker current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSiliconHitMaker

//______________________________________________________________________________
void BmnSiliconTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSiliconTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSiliconTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSiliconTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSiliconTrack(void *p) {
      return  p ? new(p) ::BmnSiliconTrack : new ::BmnSiliconTrack;
   }
   static void *newArray_BmnSiliconTrack(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSiliconTrack[nElements] : new ::BmnSiliconTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSiliconTrack(void *p) {
      delete ((::BmnSiliconTrack*)p);
   }
   static void deleteArray_BmnSiliconTrack(void *p) {
      delete [] ((::BmnSiliconTrack*)p);
   }
   static void destruct_BmnSiliconTrack(void *p) {
      typedef ::BmnSiliconTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSiliconTrack

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
   static TClass *vectorlEDeadZoneOfStripLayergR_Dictionary();
   static void vectorlEDeadZoneOfStripLayergR_TClassManip(TClass*);
   static void *new_vectorlEDeadZoneOfStripLayergR(void *p = 0);
   static void *newArray_vectorlEDeadZoneOfStripLayergR(Long_t size, void *p);
   static void delete_vectorlEDeadZoneOfStripLayergR(void *p);
   static void deleteArray_vectorlEDeadZoneOfStripLayergR(void *p);
   static void destruct_vectorlEDeadZoneOfStripLayergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<DeadZoneOfStripLayer>*)
   {
      vector<DeadZoneOfStripLayer> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<DeadZoneOfStripLayer>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<DeadZoneOfStripLayer>", -2, "vector", 216,
                  typeid(vector<DeadZoneOfStripLayer>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEDeadZoneOfStripLayergR_Dictionary, isa_proxy, 0,
                  sizeof(vector<DeadZoneOfStripLayer>) );
      instance.SetNew(&new_vectorlEDeadZoneOfStripLayergR);
      instance.SetNewArray(&newArray_vectorlEDeadZoneOfStripLayergR);
      instance.SetDelete(&delete_vectorlEDeadZoneOfStripLayergR);
      instance.SetDeleteArray(&deleteArray_vectorlEDeadZoneOfStripLayergR);
      instance.SetDestructor(&destruct_vectorlEDeadZoneOfStripLayergR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<DeadZoneOfStripLayer> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<DeadZoneOfStripLayer>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEDeadZoneOfStripLayergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<DeadZoneOfStripLayer>*)0x0)->GetClass();
      vectorlEDeadZoneOfStripLayergR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEDeadZoneOfStripLayergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEDeadZoneOfStripLayergR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<DeadZoneOfStripLayer> : new vector<DeadZoneOfStripLayer>;
   }
   static void *newArray_vectorlEDeadZoneOfStripLayergR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<DeadZoneOfStripLayer>[nElements] : new vector<DeadZoneOfStripLayer>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEDeadZoneOfStripLayergR(void *p) {
      delete ((vector<DeadZoneOfStripLayer>*)p);
   }
   static void deleteArray_vectorlEDeadZoneOfStripLayergR(void *p) {
      delete [] ((vector<DeadZoneOfStripLayer>*)p);
   }
   static void destruct_vectorlEDeadZoneOfStripLayergR(void *p) {
      typedef vector<DeadZoneOfStripLayer> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<DeadZoneOfStripLayer>

namespace ROOT {
   static TClass *vectorlEBmnSiliconLayergR_Dictionary();
   static void vectorlEBmnSiliconLayergR_TClassManip(TClass*);
   static void *new_vectorlEBmnSiliconLayergR(void *p = 0);
   static void *newArray_vectorlEBmnSiliconLayergR(Long_t size, void *p);
   static void delete_vectorlEBmnSiliconLayergR(void *p);
   static void deleteArray_vectorlEBmnSiliconLayergR(void *p);
   static void destruct_vectorlEBmnSiliconLayergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnSiliconLayer>*)
   {
      vector<BmnSiliconLayer> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnSiliconLayer>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnSiliconLayer>", -2, "vector", 216,
                  typeid(vector<BmnSiliconLayer>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnSiliconLayergR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnSiliconLayer>) );
      instance.SetNew(&new_vectorlEBmnSiliconLayergR);
      instance.SetNewArray(&newArray_vectorlEBmnSiliconLayergR);
      instance.SetDelete(&delete_vectorlEBmnSiliconLayergR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnSiliconLayergR);
      instance.SetDestructor(&destruct_vectorlEBmnSiliconLayergR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnSiliconLayer> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnSiliconLayer>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnSiliconLayergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnSiliconLayer>*)0x0)->GetClass();
      vectorlEBmnSiliconLayergR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnSiliconLayergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnSiliconLayergR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnSiliconLayer> : new vector<BmnSiliconLayer>;
   }
   static void *newArray_vectorlEBmnSiliconLayergR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnSiliconLayer>[nElements] : new vector<BmnSiliconLayer>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnSiliconLayergR(void *p) {
      delete ((vector<BmnSiliconLayer>*)p);
   }
   static void deleteArray_vectorlEBmnSiliconLayergR(void *p) {
      delete [] ((vector<BmnSiliconLayer>*)p);
   }
   static void destruct_vectorlEBmnSiliconLayergR(void *p) {
      typedef vector<BmnSiliconLayer> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnSiliconLayer>

namespace ROOT {
   static TClass *vectorlEBmnMatchgR_Dictionary();
   static void vectorlEBmnMatchgR_TClassManip(TClass*);
   static void *new_vectorlEBmnMatchgR(void *p = 0);
   static void *newArray_vectorlEBmnMatchgR(Long_t size, void *p);
   static void delete_vectorlEBmnMatchgR(void *p);
   static void deleteArray_vectorlEBmnMatchgR(void *p);
   static void destruct_vectorlEBmnMatchgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnMatch>*)
   {
      vector<BmnMatch> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnMatch>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnMatch>", -2, "vector", 216,
                  typeid(vector<BmnMatch>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnMatchgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnMatch>) );
      instance.SetNew(&new_vectorlEBmnMatchgR);
      instance.SetNewArray(&newArray_vectorlEBmnMatchgR);
      instance.SetDelete(&delete_vectorlEBmnMatchgR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnMatchgR);
      instance.SetDestructor(&destruct_vectorlEBmnMatchgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnMatch> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnMatch>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnMatchgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnMatch>*)0x0)->GetClass();
      vectorlEBmnMatchgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnMatchgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnMatchgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnMatch> : new vector<BmnMatch>;
   }
   static void *newArray_vectorlEBmnMatchgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnMatch>[nElements] : new vector<BmnMatch>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnMatchgR(void *p) {
      delete ((vector<BmnMatch>*)p);
   }
   static void deleteArray_vectorlEBmnMatchgR(void *p) {
      delete [] ((vector<BmnMatch>*)p);
   }
   static void destruct_vectorlEBmnMatchgR(void *p) {
      typedef vector<BmnMatch> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnMatch>

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
   static TClass *maplETStringcOTGeoMediummUgR_Dictionary();
   static void maplETStringcOTGeoMediummUgR_TClassManip(TClass*);
   static void *new_maplETStringcOTGeoMediummUgR(void *p = 0);
   static void *newArray_maplETStringcOTGeoMediummUgR(Long_t size, void *p);
   static void delete_maplETStringcOTGeoMediummUgR(void *p);
   static void deleteArray_maplETStringcOTGeoMediummUgR(void *p);
   static void destruct_maplETStringcOTGeoMediummUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TString,TGeoMedium*>*)
   {
      map<TString,TGeoMedium*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TString,TGeoMedium*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TString,TGeoMedium*>", -2, "map", 99,
                  typeid(map<TString,TGeoMedium*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETStringcOTGeoMediummUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TString,TGeoMedium*>) );
      instance.SetNew(&new_maplETStringcOTGeoMediummUgR);
      instance.SetNewArray(&newArray_maplETStringcOTGeoMediummUgR);
      instance.SetDelete(&delete_maplETStringcOTGeoMediummUgR);
      instance.SetDeleteArray(&deleteArray_maplETStringcOTGeoMediummUgR);
      instance.SetDestructor(&destruct_maplETStringcOTGeoMediummUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TString,TGeoMedium*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TString,TGeoMedium*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETStringcOTGeoMediummUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TString,TGeoMedium*>*)0x0)->GetClass();
      maplETStringcOTGeoMediummUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETStringcOTGeoMediummUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETStringcOTGeoMediummUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,TGeoMedium*> : new map<TString,TGeoMedium*>;
   }
   static void *newArray_maplETStringcOTGeoMediummUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,TGeoMedium*>[nElements] : new map<TString,TGeoMedium*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETStringcOTGeoMediummUgR(void *p) {
      delete ((map<TString,TGeoMedium*>*)p);
   }
   static void deleteArray_maplETStringcOTGeoMediummUgR(void *p) {
      delete [] ((map<TString,TGeoMedium*>*)p);
   }
   static void destruct_maplETStringcOTGeoMediummUgR(void *p) {
      typedef map<TString,TGeoMedium*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TString,TGeoMedium*>

namespace {
  void TriggerDictionaryInitialization_G__SiliconDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/opt/fairroot/install/include",
"/home/alex/bmnroot_dev/bmnroot/bmndata",
"/home/alex/bmnroot_dev/bmnroot/alignment",
"/home/alex/bmnroot_dev/bmnroot/uni_db",
"/home/alex/bmnroot_dev/bmnroot/uni_db/db_classes",
"/home/alex/bmnroot_dev/bmnroot/silicon",
"/opt/fairsoft/install/include",
"/opt/fairsoft/install/include/root",
"/opt/fairsoft/install/include/root",
"/home/alex/bmnroot_dev/bmnroot/build/silicon/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__SiliconDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class BmnSilicon;
class BmnSiliconPoint;
class BmnSiliconLayer;
class BmnSiliconModule;
class BmnSiliconStation;
class BmnSiliconStationSet;
class __attribute__((annotate("$clingAutoload$BmnSiliconDigit.h")))  BmnSiliconDigit;
class BmnSiliconDigitizer;
class __attribute__((annotate("$clingAutoload$BmnSiliconHit.h")))  BmnSiliconHit;
class BmnSiliconHitMaker;
class BmnSiliconTrack;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__SiliconDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#ifndef BMNSILICON_H
#define BMNSILICON_H

#include "FairDetector.h"
#include "TVector3.h"
#include "TLorentzVector.h"
#include "TClonesArray.h"

#include <map>

class BmnSiliconPoint;
class FairVolume;

//------------------------------------------------------------------------------------------------------------------------
class BmnSilicon : public FairDetector {

public:

    // *@param name    detector name
    // *@param active  sensitivity flag
    BmnSilicon(const char* name, Bool_t active);

    BmnSilicon();
    virtual ~BmnSilicon();

    // Defines the action to be taken when a step is inside the
    // active volume. Creates BmnSiliconPoints and adds them to the collection.
    // @param vol Pointer to the active volume
    virtual Bool_t ProcessHits(FairVolume* vol = 0);

    // If verbosity level is set, print hit collection at the
    // end of the event and resets it afterwards.
    virtual void EndOfEvent();

    // Registers the hit collection in the ROOT manager.
    virtual void Register();

    // Accessor to the hit collection
    virtual TClonesArray* GetCollection(Int_t iColl) const;

    // Screen output of hit collection.
    virtual void Print() const;

    // Clears the hit collection
    virtual void Reset();

    // *@param cl1     Origin
    // *@param cl2     Target
    // *@param offset  Index offset
    virtual void CopyClones(TClonesArray* cl1, TClonesArray* cl2, Int_t offset);

    // Constructs the Silicon geometry
    virtual void ConstructGeometry();

    // Construct the geometry from a GDML geometry file
    virtual void ConstructGDMLGeometry();

    void ExpandNodeForGdml(TGeoNode* node);

    // Check whether a volume is sensitive.
    // The decision is based on the volume name. Only used in case
    // of GDML and ROOT geometry.
    // @param name    Volume name
    // @value         kTRUE if volume is sensitive, else kFALSE
    virtual Bool_t CheckIfSensitive(std::string name);

private:

    // Track information to be stored until the track leaves the active volume.
    Int_t          fTrackID;           //!  track index
    Int_t          fVolumeID;          //!  volume id
    TVector3       fPosIn;             //!  position (in)
    TVector3       fPosOut;            //!  position (out)
    TVector3       fMomIn;             //!  momentum (in)
    TVector3       fMomOut;            //!  momentum (out)
    Double32_t     fTime;              //!  time
    Double32_t     fLength;            //!  length
    Double32_t     fELoss;             //!  energy loss
    Int_t	   fIsPrimary;         //!  is track primary?
    Double_t       fCharge;	       //!  track charge
    Int_t          fPdgId;             //!  pdg id of particle

    Int_t fPosIndex;                   //!
    TClonesArray* fPointCollection;    //! Hit collection

    std::map<TString, TGeoMedium*> fFixedMedia; // List of media "repaired" after importing GMDL


    // Adds a BmnSiliconPoint to the HitCollection
    BmnSiliconPoint* AddHit(Int_t trackID, Int_t detID,
                            TVector3 posIn, TVector3 posOut,
                            TVector3 momIn, TVector3 momOut,
                            Double_t time, Double_t length, Double_t eLoss,
                            Int_t isPrimary, Double_t charge, Int_t pdgId);

    // Resets the private members for the track parameters
    void ResetParameters();

    ClassDef(BmnSilicon,1)
};

//------------------------------------------------------------------------------
inline void BmnSilicon::ResetParameters() {
    fTrackID = -1;
    fVolumeID = 0;
    fPosIn.SetXYZ(0.0, 0.0, 0.0);
    fPosOut.SetXYZ(0.0, 0.0, 0.0);
    fMomIn.SetXYZ(0.0, 0.0, 0.0);
    fMomOut.SetXYZ(0.0, 0.0, 0.0);
    fTime = fLength = fELoss = 0.0;
    fPosIndex = 0;
};
//------------------------------------------------------------------------------

#endif /* BMNSILICON_H */

#ifndef BMNSILICONPOINT_H
#define BMNSILICONPOINT_H

#include "FairMCPoint.h"

class BmnSiliconPoint : public FairMCPoint {

public:

    /** Constructor with arguments
    *@param trackID  Index of MCTrack
    *@param detID    Detector ID
    *@param posIn    Coordinates at entrance to active volume [cm]
    *@param posOut   Coordinates at exit of active volume [cm]
    *@param momIn    Momentum of track at entrance [GeV]
    *@param momOut   Momentum of track at exit [GeV]
    *@param tof      Time since event start [ns]
    *@param length   Track length since creation [cm]
    *@param eLoss    Energy deposit [GeV]
    **/
    BmnSiliconPoint(Int_t trackID, Int_t detID,
                    TVector3 posIn, TVector3 posOut,
                    TVector3 momIn, TVector3 momOut,
                    Double_t tof, Double_t length, Double_t eLoss,
                    Int_t isPrimary, Double_t charge, Int_t pdgId);

    BmnSiliconPoint(const BmnSiliconPoint& point) { *this = point; };

    BmnSiliconPoint();

    virtual ~BmnSiliconPoint();

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
    void MomentumIn(TVector3& mom) { mom.SetXYZ(fPx,fPy,fPz); }
    void MomentumOut(TVector3& mom) { mom.SetXYZ(fPx_out,fPy_out,fPz_out); }

    Int_t GetIsPrimary() { return fIsPrimary; }
    Double_t GetCharge() { return fCharge; }
    Double_t GetPdgId() { return fPdgId; }

    // Output to screen
    virtual void Print(const Option_t* opt) const;

protected:

    Int_t fIsPrimary;
    Double_t fCharge;
    Int_t fPdgId;

    Double_t fX_out,  fY_out,  fZ_out;
    Double_t fPx_out, fPy_out, fPz_out;


    ClassDef(BmnSiliconPoint,1)
};

#endif /* BMNSILICONPOINT_H */

#ifndef BMNSILICONLAYER_H
#define BMNSILICONLAYER_H

#include "Rtypes.h"

#include "BmnMatch.h"
#include "BmnStripData.h"

#include <vector>

using namespace std;

class BmnSiliconLayer {

public:

    //Constructors -------------------------------------------------------------
    BmnSiliconLayer();

    BmnSiliconLayer(Int_t zone_id,
                    StripLayerType layer_type, Int_t first_strip_number,
                    Double_t xsize, Double_t ysize,
                    Double_t xorig, Double_t yorig,
                    Double_t pitch, Double_t adeg);
    //--------------------------------------------------------------------------

    //Destructor
    virtual ~BmnSiliconLayer();

    void InitializeLayer();
    void ResetLayer(); //clear all data and rebuild the layer in accordance with new parameters

    Int_t GetNStrips();

    void SetVerbosity(Bool_t verb) { Verbosity = verb; }
    void SetZoneID(Int_t zone_id) { ZoneID = zone_id; }
    void SetFirstStripNumber(Int_t first_strip_number) { FirstStripNumber = first_strip_number; }
    void SetPitch(Double_t pitch);
    void SetLayerSizes(Double_t xsize, Double_t ysize, Double_t xorig=0.0, Double_t yorig=0.0);
    void SetAngleDeg(Double_t deg); // plus - clockwise from vertical

    Bool_t GetVerbosity() { return Verbosity; }
    Int_t GetZoneID() { return ZoneID; }
    Int_t GetFirstStripNumber() { return FirstStripNumber; }
    Int_t GetLastStripNumber() { return (GetNStrips()+FirstStripNumber) - 1; }
    StripLayerType GetType() { return LayerType; }
    Double_t GetPitch() { return Pitch; }
    Double_t GetAngleDeg() { return AngleDeg; }
    Double_t GetAngleRad() { return AngleRad; }
    Double_t GetXSize() { return XMaxLayer-XMinLayer; }
    Double_t GetYSize() { return YMaxLayer-YMinLayer; }
    Double_t GetXMinLayer() { return XMinLayer; }
    Double_t GetXMaxLayer() { return XMaxLayer; }
    Double_t GetYMinLayer() { return YMinLayer; }
    Double_t GetYMaxLayer() { return YMaxLayer; }

    //Strip numbering methods --------------------------------------------------
    Bool_t SetStripNumberingBorders(Double_t x_left, Double_t y_left, Double_t x_right, Double_t y_right); //or method below
    Bool_t SetStripNumberingBorders(StripBorderPoint left, StripBorderPoint right);
    Bool_t SetStripNumberingOrder(StripNumberingDirection strip_direction);

    StripNumberingDirection GetStripNumberingOrder() { return  StripOrder; }
    Double_t GetXLeftStripBorderPoint() { return XLeftPointOfStripNumbering; }
    Double_t GetYLeftStripBorderPoint() { return YLeftPointOfStripNumbering; }
    Double_t GetXRightStripBorderPoint() { return XRightPointOfStripNumbering; }
    Double_t GetYRightStripBorderPoint() { return YRightPointOfStripNumbering; }
    //--------------------------------------------------------------------------

    //Dead zones methods -------------------------------------------------------
    Bool_t AddDeadZone(Int_t n_points, Double_t *x_points, Double_t *y_points);
    Bool_t AddDeadZone(DeadZoneOfStripLayer dead_zone);
    Bool_t IsPointInsideDeadZones(Double_t x, Double_t y);
    Bool_t IsPointInsideStripLayer(Double_t x, Double_t y);

    vector<DeadZoneOfStripLayer> GetDeadZones() { return DeadZones; }
    void ResetAllDeadZones() { DeadZones.clear(); }
    //--------------------------------------------------------------------------

    //Direct strip signal manipulation -----------------------------------------
    Bool_t SetStripSignal(Int_t strip_num, Double_t signal); //replace signal
    Bool_t AddStripSignal(Int_t strip_num, Double_t signal); //add signal

    Double_t GetStripSignal(Int_t strip_num); //signal of strip_num-strip
    //--------------------------------------------------------------------------

    //Strip matches controls ---------------------------------------------------
    Bool_t SetStripMatch(Int_t strip_num, BmnMatch strip_match);
    Bool_t AddLinkToStripMatch(Int_t strip_num, Double_t weight, Int_t refID);

    BmnMatch GetStripMatch(Int_t strip_num); //match of strip_num-strip
    void ResetStripMatches();
    //--------------------------------------------------------------------------

    //Strip hits ---------------------------------------------------------------
    Int_t GetNStripHits() { return StripHits.size(); } //number of hits at the layer
    Double_t GetStripHitPos(Int_t num); //hit position
    Double_t GetStripHitTotalSignal(Int_t num); //sum signal of the hit
    Double_t GetStripHitError(Int_t num); //hit error
    Int_t GetStripHitClusterSize(Int_t num); //number of strips in the cluster for the num-hit
    void ResetStripHits();
    //--------------------------------------------------------------------------

    //Methods to convert point coordinates into strip system -------------------
    Double_t ConvertNormalPointToStripX(Double_t x, Double_t y);
    Double_t ConvertNormalPointToStripY(Double_t x, Double_t y);

    Double_t ConvertPointToStripPosition(Double_t x, Double_t y);

    Double_t CalculateStripEquationB(Double_t strip_pos);
    //--------------------------------------------------------------------------

    //Clustering and strip-hit finding methods ---------------------------------------
    void FindClustersAndStripHits();
    void MakeStripHit(StripCluster &cluster, vector<Double_t> &AnalyzableStrips, Int_t &curcnt);
    void SmoothStripSignal(vector<Double_t>& AnalyzableStrips, Int_t NIterations, Int_t SmoothWindow, Double_t Weight);

    void SetClusterFindingThreshold(Double_t threshold) { ClusterFindingThreshold = threshold; }
    Double_t GetClusterFindingThreshold() { return ClusterFindingThreshold; }

    vector<Double_t> GetSmoothStrips() { return SmoothStrips; } //for test (don't forget about FirstStripNumber when you use it)
    //--------------------------------------------------------------------------

private:
    //BmnSiliconLayer(const BmnSiliconLayer&);
    //BmnSiliconLayer& operator=(const BmnSiliconLayer&);

private:
    Bool_t Verbosity;

    Int_t ZoneID; // zone id-number to recognize the layers linked together
    Int_t FirstStripNumber; // the number that numbered strips start with
    StripLayerType LayerType; //type of the strip layer: lower or upper

    Double_t Pitch; // as a perpendicular to a strip
    Double_t AngleDeg; //Angle between two sets of parellel strips: angle from vertical
    Double_t AngleRad;

    Double_t XMinLayer;
    Double_t XMaxLayer;
    Double_t YMinLayer;
    Double_t YMaxLayer;

    vector<DeadZoneOfStripLayer> DeadZones;

    //Strip arrangement
    StripNumberingDirection StripOrder; //strip numbering order (LeftToRight or RightToLeft)
    Double_t XLeftPointOfStripNumbering;
    Double_t XRightPointOfStripNumbering;
    Double_t YLeftPointOfStripNumbering;
    Double_t YRightPointOfStripNumbering;

    //Strip layer implementation
    vector<Double_t> Strips;

    //Strip matches
    vector<BmnMatch> StripMatches; //ID-point matches for all strips

    //Strip hits (It is filled after cluster finding and fitting) --------------
    vector<Double_t> StripHits; //positions of strip hits
    vector<Double_t> StripHitsTotalSignal;
    vector<Double_t> StripHitsErrors;
    vector<Int_t> StripHitsClusterSize; //cluster size (number of strips) for each strip hit
    vector<Double_t> SmoothStrips; //smoothed signal strips (It is filled after smoothing algorithm)
    Double_t ClusterFindingThreshold; //min. threshold cut
    //--------------------------------------------------------------------------

    ClassDef(BmnSiliconLayer, 1);
};

//------------------------------------------------------------------------------

#endif /* BMNSILICONLAYER_H */

#ifndef BMNSILICONMODULE_H
#define BMNSILICONMODULE_H

#include "Rtypes.h"
#include "BmnSiliconLayer.h"
#include "BmnMatch.h"

class BmnSiliconModule {

public:
    //Constructors -------------------------------------------------------------
    BmnSiliconModule();

    BmnSiliconModule(Double_t z_start_pos);
    //--------------------------------------------------------------------------

    //Destructor
    virtual ~BmnSiliconModule();

    void SetVerbosity(Bool_t verb) { Verbosity = verb; }
    Bool_t GetVerbosity() { return Verbosity; }

    //Module parameters --------------------------------------------------------
    Double_t GetXMinModule() { return XMinModule; }
    Double_t GetXMaxModule() { return XMaxModule; }
    Double_t GetYMinModule() { return YMinModule; }
    Double_t GetYMaxModule() { return YMaxModule; }

    Double_t GetXSize() { return XMaxModule-XMinModule; }
    Double_t GetYSize() { return YMaxModule-YMinModule; }

    void SetZStartModulePosition(Double_t zpos_module) { ZStartModulePosition = zpos_module; }
    Double_t GetZStartModulePosition() { return ZStartModulePosition; }

    Double_t GetModuleThickness() { return ModuleThickness; }
    Double_t GetZPositionRegistered(); //position for all registered point (hits)

    Bool_t SetModuleRotation(Double_t angleDeg, Double_t rot_center_x, Double_t rot_center_y); //angle is counter-clockwise
    Double_t GetModuleRotationAngleDeg() { return ModuleRotationAlgleDeg; }
    Double_t GetModuleRotationCenterX() { return ModuleRotationCenterX; }
    Double_t GetModuleRotationCenterY() { return ModuleRotationCenterY; }
    //--------------------------------------------------------------------------

    //Strip layers controls ----------------------------------------------------
    void AddStripLayer(BmnSiliconLayer strip_layer);

    Bool_t SetStripSignalInLayer(Int_t layer_num, Int_t strip_num, Double_t signal);
    Bool_t AddStripSignalInLayer(Int_t layer_num, Int_t strip_num, Double_t signal);
    Bool_t SetStripMatchInLayer(Int_t layer_num, Int_t strip_num, BmnMatch strip_match);

    Bool_t SetStripSignalInLayerByZoneId(Int_t zone_id, Int_t strip_num, Double_t signal);
    Bool_t AddStripSignalInLayerByZoneId(Int_t zone_id, Int_t strip_num, Double_t signal);

    Bool_t SetStripMatchInLayerByZoneId(Int_t zone_id, Int_t strip_num, BmnMatch strip_match);
    Bool_t AddStripMatchInLayerByZoneId(Int_t zone_id, Int_t strip_num, Double_t weight, Int_t refID);

    Double_t GetStripSignalInLayer(Int_t layer_num, Int_t strip_num);
    BmnMatch GetStripMatchInLayer(Int_t layer_num, Int_t strip_num);

    Int_t GetFirstStripInZone(Int_t zone_id);
    Int_t GetLastStripInZone(Int_t zone_id);

    Double_t GetStripSignalInZone(Int_t zone_id, Int_t strip_num);

    BmnMatch GetStripMatchInZone(Int_t zone_id, Int_t strip_num);

    Int_t GetNStripLayers() { return StripLayers.size(); }
    BmnSiliconLayer& GetStripLayer(Int_t num) { return StripLayers.at(num); }
    vector<BmnSiliconLayer>& GetStripLayers() { return StripLayers; }

    void ResetModuleData(); //clear all data in the module and all layers (not delete layers!)
    //--------------------------------------------------------------------------

    //Point ownership of the module --------------------------------------------
    Bool_t IsPointInsideModule(Double_t x, Double_t y); //plane ownership
    Bool_t IsPointInsideModule(Double_t x, Double_t y, Double_t z); //volume ownership
    Bool_t IsPointInsideZThickness(Double_t z); // point with z-coord is between z_start and z_end of the module (inside module thickness)?
    //--------------------------------------------------------------------------

    //Methods to add a point to the module -------------------------------------
    Bool_t AddRealPointSimple(Double_t x, Double_t y, Double_t z,
                              Double_t px, Double_t py, Double_t pz, Double_t signal, Int_t refID);

    Bool_t AddRealPointFullOne(Double_t x, Double_t y, Double_t z,
                               Double_t px, Double_t py, Double_t pz, Double_t signal, Int_t refID);


    //make a strip cluster from a single point (with gauss smearing)
    StripCluster MakeCluster(Int_t layer_num, Double_t xcoord, Double_t ycoord, Double_t signal, Double_t radius);
    //--------------------------------------------------------------------------

    //Methods to calculate intersection points in the module -------------------
    void CalculateStripHitIntersectionPoints();

    //need for a separated test (find x,y intersection coords from strip positions)
    Bool_t SearchIntersectionPoint(Double_t &x, Double_t &y, Double_t strip_pos_layerA, Double_t strip_pos_layerB, Int_t layerA_index, Int_t layerB_index);
    //--------------------------------------------------------------------------

    //coordinate transformation (for module rotation) --------------------------
    Double_t ConvertGlobalToLocalX(Double_t xglob, Double_t yglob);
    Double_t ConvertGlobalToLocalY(Double_t xglob, Double_t yglob);
    Double_t ConvertLocalToGlobalX(Double_t xloc, Double_t yloc);
    Double_t ConvertLocalToGlobalY(Double_t xloc, Double_t yloc);
    //--------------------------------------------------------------------------

    //Added (real) points ------------------------------------------------------
    Int_t GetNRealPoints() {return RealPointsX.size();} //quantity of added points
    Double_t GetRealPointX(Int_t indx) { return RealPointsX.at(indx); } //X-coord of i-added point
    Double_t GetRealPointY(Int_t indx) { return RealPointsY.at(indx); } //Y-coord of i-added point

    void ResetRealPoints() { RealPointsX.clear(); RealPointsY.clear(); }
    //--------------------------------------------------------------------------

    //Intersection points ------------------------------------------------------
    Int_t GetNIntersectionPoints() {return IntersectionPointsX.size();} //quantity of intersections
    Double_t GetIntersectionPointX(Int_t indx) { return IntersectionPointsX.at(indx); } //X-coord of indx-intersection point
    Double_t GetIntersectionPointY(Int_t indx) { return IntersectionPointsY.at(indx); } //Y-coord of indx-intersection point
    Double_t GetIntersectionPointXError(Int_t indx) { return IntersectionPointsXErrors.at(indx); } //X-coord error of indx-intersection point
    Double_t GetIntersectionPointYError(Int_t indx) { return IntersectionPointsYErrors.at(indx); } //Y-coord error of indx-intersection point
    Int_t GetIntersectionPoint_LowerLayerClusterSize(Int_t indx) { return IntersectionPoints_LowerLayerClusterSize.at(indx); } //cluster size in the lower layer
    Int_t GetIntersectionPoint_UpperLayerClusterSize(Int_t indx) { return IntersectionPoints_UpperLayerClusterSize.at(indx); } //cluster size in the upper layer
    Double_t GetIntersectionPoint_LowerLayerSripPosition(Int_t indx) { return IntersectionPoints_LowerLayerStripPosition.at(indx); } //strip position in the lower layer
    Double_t GetIntersectionPoint_UpperLayerSripPosition(Int_t indx) { return IntersectionPoints_UpperLayerStripPosition.at(indx); } //strip position in the upper layer
    BmnMatch GetIntersectionPointMatch(Int_t indx) { return IntersectionPointMatches.at(indx); } //Intersection point match

    void ResetIntersectionPoints();
    //--------------------------------------------------------------------------

private:
    void DefineModuleBorders(); //calculate min-max coordinates of the module from layers` parameters

private:
    BmnSiliconModule(const BmnSiliconModule&);
    BmnSiliconModule& operator=(const BmnSiliconModule&);

private:
    Bool_t Verbosity;

    Double_t XMinModule;
    Double_t XMaxModule;
    Double_t YMinModule;
    Double_t YMaxModule;

    Double_t ZStartModulePosition;
    Double_t ModuleThickness;

    Double_t ModuleRotationAlgleDeg; //module rotation angle is counter-clockwise
    Double_t ModuleRotationAlgleRad;
    Double_t ModuleRotationCenterX;
    Double_t ModuleRotationCenterY;

    vector<BmnSiliconLayer> StripLayers;

    vector<Double_t> RealPointsX;
    vector<Double_t> RealPointsY;

    vector<Double_t> IntersectionPointsX;
    vector<Double_t> IntersectionPointsY;
    vector<Double_t> IntersectionPointsXErrors;
    vector<Double_t> IntersectionPointsYErrors;

    vector<Int_t> IntersectionPoints_LowerLayerClusterSize; //cluster size (number of strips) in the lower layer for each intersection point
    vector<Int_t> IntersectionPoints_UpperLayerClusterSize; //cluster size (number of strips) in the upper layer for each intersection point

    vector<Double_t> IntersectionPoints_LowerLayerStripPosition; //strip position in the lower layer for each intersection point
    vector<Double_t> IntersectionPoints_UpperLayerStripPosition; //strip position in the upper layer for each intersection point

    vector<BmnMatch> IntersectionPointMatches;

    ClassDef(BmnSiliconModule, 1);
};



#endif /* BMNSILICONMODULE_H */

#ifndef BMNSILICONSTATION_H
#define BMNSILICONSTATION_H

#include "Rtypes.h"
#include "BmnSiliconModule.h"
#include "BmnStripData.h"

#include "TDOMParser.h"
#include "TXMLNode.h"
#include "TXMLAttr.h"
#include "TList.h"

#include <iostream>

class BmnSiliconStation {

protected:

    /* station parameters */
    Int_t StationNumber;
    Int_t NModules;

    Double_t XMinStation;
    Double_t XMaxStation;
    Double_t YMinStation;
    Double_t YMaxStation;
    Double_t ZMinStation;
    Double_t ZMaxStation;

    Double_t XSize;
    Double_t YSize;
    Double_t ZSize;

    Double_t XPosition;
    Double_t YPosition;
    Double_t ZPosition;

    Double_t RotationAngleDeg; //rotation angle (deg) for the station (counter-clockwise)
    Double_t RotationCenterX; //x-rotation center for the station
    Double_t RotationCenterY; //y-rotation center for the station

    /*Shifts of modules in each station*/
    Double_t *XShiftOfModules;
    Double_t *YShiftOfModules;
    Double_t *ZShiftOfModules;

    BmnSiliconModule **Modules; //modules in the station [array]

    public:

    /* Constructor */
    BmnSiliconStation();

    BmnSiliconStation(TXMLNode *stationNode, Int_t iStation,
                       Double_t xpos_station, Double_t ypos_station, Double_t zpos_station);

    /* Destructor */
    virtual ~BmnSiliconStation();

    //Getters
    Int_t GetStationNumber() { return StationNumber; }
    Int_t GetNModules() { return NModules; }
    Double_t GetXMinStation() { return XMinStation; }
    Double_t GetXMaxStation() { return XMaxStation; }
    Double_t GetYMinStation() { return YMinStation; }
    Double_t GetYMaxStation() { return YMaxStation; }
    Double_t GetZMinStation() { return ZMinStation; }
    Double_t GetZMaxStation() { return ZMaxStation; }
    Double_t GetXSize() { return XSize; }
    Double_t GetYSize() { return YSize; }
    Double_t GetZSize() { return ZSize; }
    Double_t GetXPosition() { return XPosition; }
    Double_t GetYPosition() { return YPosition; }
    Double_t GetZPosition() { return ZPosition; }
    Double_t GetXShiftOfModule(Int_t module_num);
    Double_t GetYShiftOfModule(Int_t module_num);
    Double_t GetZShiftOfModule(Int_t module_num);
    BmnSiliconModule* GetModule(Int_t module_num);

    //Reset all data in modules of the station
    void Reset();

    Int_t AddPointToStation(Double_t xcoord, Double_t ycoord, Double_t zcoord,
                            Double_t px, Double_t py, Double_t pz,
                            Double_t dEloss, Int_t refID);

    Int_t CountNAddedToStationPoints();

    void ProcessPointsInStation();
    Int_t CountNProcessedPointInStation();

    //which module in the station does a point belong to?
        //zcoord - is unused usually, but if modules in the station are (x,y)-overlapped then zcoord is important
    Int_t GetPointModuleOwnership(Double_t xcoord, Double_t ycoord, Double_t zcoord);

    //--------------------------------------------------------------------------

protected:
    void DefineStationBorders();

private:

    Bool_t CreateConfigurationFromXMLNode(TXMLNode *node);
    Int_t CountNumberOfModules(TXMLNode *node);
    Bool_t ParseModule(TXMLNode *node, Int_t iModule);
    BmnSiliconLayer ParseLayer(TXMLNode *node, Int_t iLayer, Int_t iModule);
    DeadZoneOfStripLayer ParseDeadZone(TXMLNode *node, Int_t iModule);
    Int_t CountDeadZonePoints(TXMLNode *node);

    ClassDef(BmnSiliconStation, 1);
};

#endif /* BMNSILICONSTATION_H */

#ifndef BMNSILICONSTATIONSET_H
#define BMNSILICONSTATIONSET_H

#include "BmnSiliconStation.h"
#include "BmnStripData.h"

#include "TDOMParser.h"
#include "TXMLNode.h"
#include "TXMLAttr.h"
#include "TList.h"

class BmnSiliconStationSet {

protected:

    /* station set parameters*/
    Int_t NStations; //number of stations in the Silicon detector

    Double_t *XStationPositions; //x-position of each station [array]
    Double_t *YStationPositions; //y-position of each station [array]
    Double_t *ZStationPositions; //z-position of each station [array]

    BmnSiliconStation **SiliconStations; //Silicon stations [array]

public:

    /* Constructor */
    BmnSiliconStationSet();

    BmnSiliconStationSet(TString xml_config_file);

    /* Destructor */
    virtual ~BmnSiliconStationSet();

    /* Getters */
    Int_t GetNStations() { return NStations; };
    Double_t GetXStationPosition(Int_t station_num);
    Double_t GetYStationPosition(Int_t station_num);
    Double_t GetZStationPosition(Int_t station_num);
    Double_t GetBeamHoleRadius(Int_t station_num){return 0.;}
    BmnSiliconStation* GetSiliconStation(Int_t station_num);

    //Reset all data in stations of the station set
    void Reset();

    Bool_t AddPointToDetector(Double_t xcoord, Double_t ycoord, Double_t zcoord,
                                      Double_t px, Double_t py, Double_t pz,
                                      Double_t dEloss, Int_t refID);

    Int_t CountNAddedToDetectorPoints();

    void ProcessPointsInDetector();
    Int_t CountNProcessedPointsInDetector();

    //which station in the Silicon detector does a point belong to?
    Int_t GetPointStationOwnership(Double_t zcoord);

private:

    Bool_t CreateConfigurationFromXMLFile(TString xml_config_file);
    Int_t CountNumberOfStations(TXMLNode *node);
    Bool_t ParseStation(TXMLNode *node, Int_t iStation);

    ClassDef(BmnSiliconStationSet, 1);

};

#endif /* BMNSILICONSTATIONSET_H */

#ifndef BMNSILICONDIGITIZER_H
#define BMNSILICONDIGITIZER_H

#include <iostream>

#include "Rtypes.h"
#include "TClonesArray.h"

#include "FairTask.h"
#include "FairMCPoint.h"

#include "BmnSiliconDigit.h"
#include "BmnSiliconStationSet.h"

#include "BmnSiliconConfiguration.h"

using namespace std;

class BmnSiliconDigitizer : public FairTask {
public:

    BmnSiliconDigitizer();

    virtual ~BmnSiliconDigitizer();

    virtual InitStatus Init();

    virtual void Exec(Option_t* opt);

    virtual void Finish();

    void ProcessMCPoints();

    //Setters

    void SetOnlyPrimary(Bool_t opt = kFALSE) {
        fOnlyPrimary = opt;
    }

    void SetStripMatching(Bool_t opt = kTRUE) {
        fStripMatching = opt;
    }

    void SetCurrentConfig(BmnSiliconConfiguration::SILICON_CONFIG config) {
        fCurrentConfig = config;
    }

private:

    TString fInputBranchName;
    TString fOutputDigitsBranchName;
    TString fOutputDigitMatchesBranchName;

    /** Input array of Silicon Points **/
    TClonesArray* fBmnSiliconPointsArray;

    /** Input array of MC Tracks **/
    TClonesArray* fMCTracksArray;

    /** Output array of Silicon Digits **/
    TClonesArray* fBmnSiliconDigitsArray;

    /** Output array of Silicon Digit Matches **/
    TClonesArray* fBmnSiliconDigitMatchesArray;

    Bool_t fOnlyPrimary;
    Bool_t fStripMatching;

    BmnSiliconConfiguration::SILICON_CONFIG fCurrentConfig;

    BmnSiliconStationSet *StationSet; //Entire Silicon detector

    ClassDef(BmnSiliconDigitizer,1);
};

#endif /* BMNSILICONDIGITIZER_H */

#ifndef BMNSILICONHITMAKER_H
#define BMNSILICONHITMAKER_H

#include "Rtypes.h"

#include "FairTask.h"
#include "FairMCPoint.h"

#include "BmnSiliconDigit.h"
#include "BmnSiliconHit.h"
#include "BmnSiliconStationSet.h"
#include "BmnSiliconStation.h"
#include "BmnSiliconModule.h"
#include "BmnSiliconLayer.h"
#include <UniDbDetectorParameter.h>
#include <UniDbRun.h>
#include <BmnSiliconAlignCorrections.h>
#include <BmnEventQuality.h>

#include "BmnSiliconConfiguration.h"

class BmnSiliconHitMaker : public FairTask {
public:

    BmnSiliconHitMaker();
    BmnSiliconHitMaker(Bool_t isExp);

    virtual ~BmnSiliconHitMaker();

    virtual InitStatus Init();

    virtual void Exec(Option_t* opt);

    virtual void Finish();

    void ProcessDigits();

    void SetHitMatching(Bool_t opt = kTRUE) {
        fHitMatching = opt;
    }

    void SetCurrentConfig(BmnSiliconConfiguration::SILICON_CONFIG config) {
        fCurrentConfig = config;
    }

    void SetAlignmentCorrectionsFileName(TString filename) {
        fAlignCorrFileName = filename;
    }

    void SetAlignmentCorrectionsFileName(Int_t run_period, Int_t file_number) {
        if (run_period == 6) {
            fAlignCorrFileName = "alignment_SI.root";
            UniDbDetectorParameter::ReadRootFile(run_period, file_number, "BM@N", "alignment", (Char_t*) fAlignCorrFileName.Data());
        }
        else
            fAlignCorrFileName = "";
    }

private:

    TString fInputPointsBranchName;
    TString fInputDigitsBranchName;
    TString fInputDigitMatchesBranchName;

    TString fOutputHitsBranchName;
    TString fOutputHitMatchesBranchName;

    /** Input array of Silicon Points **/
    TClonesArray* fBmnSiliconPointsArray;
    TClonesArray* fBmnSiliconDigitsArray;
    TClonesArray* fBmnSiliconDigitMatchesArray;

    /** Output array of Silicon Hits **/
    TClonesArray* fBmnSiliconHitsArray;

    /** Output array of Silicon Hit Matches **/
    TClonesArray* fBmnSiliconHitMatchesArray;

    Bool_t fHitMatching;

    BmnSiliconConfiguration::SILICON_CONFIG fCurrentConfig;

    BmnSiliconStationSet *StationSet; //Entire Silicon detector
    
    TString fAlignCorrFileName; // a file with geometry corrections
    void ReadAlignCorrFile(TString, Double_t***); // read corrections from the file
    Double_t*** corr; // array to store the corrections

    Bool_t fIsExp;
    TString fBmnEvQualityBranchName;
    TClonesArray* fBmnEvQuality;

    ClassDef(BmnSiliconHitMaker, 1);
};

#endif /* BMNSILICONHITMAKER_H */

#ifndef BMNSILICONDIGIT_H
#define BMNSILICONDIGIT_H

#include <iostream>
#include <vector>
#include "Rtypes.h"
#include "TNamed.h"

using namespace std;

class BmnSiliconDigit : public TNamed {
private:
    Int_t fStation;
    Int_t fModule;
    Int_t fLayer; // 0 - lower layer, 1 - upper layer
    Int_t fStrip;
    Double_t fSignal;
    Bool_t fIsGoodDigit;
    
public:
    BmnSiliconDigit();
    BmnSiliconDigit(BmnSiliconDigit* digit);
    BmnSiliconDigit(Int_t iStation, Int_t iModule, Int_t iLayer, Int_t iStrip, Double_t iSignal);

    virtual ~BmnSiliconDigit();

    Int_t GetStation() {
        return fStation;
    }

    Int_t GetModule() {
        return fModule;
    }

    Int_t GetStripLayer() {
        return fLayer;
    }

    Int_t GetStripNumber() {
        return fStrip;
    }

    Double_t GetStripSignal() {
        return fSignal;
    }

    void SetStation(Int_t station) {
        fStation = station;
    }

    void SetModule(Int_t module) {
        fModule = module;
    }

    void SetStripLayer(Int_t layer) {
        fLayer = layer;
    }

    void SetStripNumber(Int_t num) {
        fStrip = num;
    }

    void SetStripSignal(Double_t signal) {
        fSignal = signal;
    }
        
    void SetIsGoodDigit(Bool_t tmp) { fIsGoodDigit = tmp; }
    Bool_t IsGoodDigit() { return fIsGoodDigit; }

    ClassDef(BmnSiliconDigit, 1);
};

#endif /* BMNSILICONDIGIT_H */

#ifndef BMNSILICONHIT_H
#define BMNSILICONHIT_H

#include "Rtypes.h"

#include "BmnHit.h"

class BmnSiliconHit : public BmnHit {
public:

    BmnSiliconHit();
    BmnSiliconHit(Int_t detID, TVector3 pos, TVector3 dpos, Int_t index);

    virtual ~BmnSiliconHit();

    void SetModule(Int_t module) {
        fModule = module;
    }

    void SetEnergyLoss(Double_t de) {
        fELoss = de;
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
    Int_t fLowerLayerClusterSize; //number of strips in the lower layer (|||) for the hit
    Int_t fUpperLayerClusterSize; //number of strips in the upper layer (\\\ or ///) for the hit
    Double_t fLowerLayerStripPos; //strip position in the lower layer (|||)
    Double_t fUpperLayerStripPos; //strip position in the upper layer (\\\ or ///)

    ClassDef(BmnSiliconHit, 1);
};




#endif /* BMNSILICONHIT_H */


/* 
 * File:   BmnSiliconTrack.h
 * Author: Sergey Merts
 *
 * Created on October 27, 2017, 10:47 AM
 */

#ifndef BMNSILICONTRACK_H
#define BMNSILICONTRACK_H

#include "BmnTrack.h"
#include "BmnFitNode.h"

class BmnSiliconTrack : public BmnTrack {
public:

    /** Default constructor **/
    BmnSiliconTrack();

    /** Destructor **/
    virtual ~BmnSiliconTrack();

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
    
private:

    vector<BmnFitNode> fFitNodes; // Array of fit nodes    
    Bool_t fStoreHits;
    Bool_t fUsed; //needed to check seeds splitting    

    ClassDef(BmnSiliconTrack, 1);

};

#endif /* BMNSILICONTRACK_H */


#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"BmnSilicon", payloadCode, "@",
"BmnSiliconConfiguration::SILICON_CONFIG", payloadCode, "@",
"BmnSiliconDigit", payloadCode, "@",
"BmnSiliconDigitizer", payloadCode, "@",
"BmnSiliconHit", payloadCode, "@",
"BmnSiliconHitMaker", payloadCode, "@",
"BmnSiliconLayer", payloadCode, "@",
"BmnSiliconModule", payloadCode, "@",
"BmnSiliconPoint", payloadCode, "@",
"BmnSiliconStation", payloadCode, "@",
"BmnSiliconStationSet", payloadCode, "@",
"BmnSiliconTrack", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__SiliconDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__SiliconDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__SiliconDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__SiliconDict() {
  TriggerDictionaryInitialization_G__SiliconDict_Impl();
}
