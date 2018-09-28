// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIalexdIbmnroot_devdIbmnrootdIbuilddIgeneratorsdIG__MpdGenDict

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
#include "MpdMCEventHeader.h"
#include "MpdLAQGSMGenerator.h"
#include "MpdHypYPtGenerator.h"
#include "MpdRainGenerator.h"
#include "MpdPHSDGenerator.h"
#include "MpdUrqmdGenerator.h"
#include "MpdGetNumEvents.h"
#include "MpdHistoGenerator.h"
#include "Mpd3fdGenerator.h"
#include "MpdVHLLEGenerator.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_MpdMCEventHeader(void *p = 0);
   static void *newArray_MpdMCEventHeader(Long_t size, void *p);
   static void delete_MpdMCEventHeader(void *p);
   static void deleteArray_MpdMCEventHeader(void *p);
   static void destruct_MpdMCEventHeader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdMCEventHeader*)
   {
      ::MpdMCEventHeader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdMCEventHeader >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MpdMCEventHeader", ::MpdMCEventHeader::Class_Version(), "", 17,
                  typeid(::MpdMCEventHeader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdMCEventHeader::Dictionary, isa_proxy, 4,
                  sizeof(::MpdMCEventHeader) );
      instance.SetNew(&new_MpdMCEventHeader);
      instance.SetNewArray(&newArray_MpdMCEventHeader);
      instance.SetDelete(&delete_MpdMCEventHeader);
      instance.SetDeleteArray(&deleteArray_MpdMCEventHeader);
      instance.SetDestructor(&destruct_MpdMCEventHeader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdMCEventHeader*)
   {
      return GenerateInitInstanceLocal((::MpdMCEventHeader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdMCEventHeader*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MpdLAQGSMGenerator(void *p = 0);
   static void *newArray_MpdLAQGSMGenerator(Long_t size, void *p);
   static void delete_MpdLAQGSMGenerator(void *p);
   static void deleteArray_MpdLAQGSMGenerator(void *p);
   static void destruct_MpdLAQGSMGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdLAQGSMGenerator*)
   {
      ::MpdLAQGSMGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdLAQGSMGenerator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MpdLAQGSMGenerator", ::MpdLAQGSMGenerator::Class_Version(), "", 95,
                  typeid(::MpdLAQGSMGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdLAQGSMGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::MpdLAQGSMGenerator) );
      instance.SetNew(&new_MpdLAQGSMGenerator);
      instance.SetNewArray(&newArray_MpdLAQGSMGenerator);
      instance.SetDelete(&delete_MpdLAQGSMGenerator);
      instance.SetDeleteArray(&deleteArray_MpdLAQGSMGenerator);
      instance.SetDestructor(&destruct_MpdLAQGSMGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdLAQGSMGenerator*)
   {
      return GenerateInitInstanceLocal((::MpdLAQGSMGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdLAQGSMGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MpdHypYPtGenerator(void *p = 0);
   static void *newArray_MpdHypYPtGenerator(Long_t size, void *p);
   static void delete_MpdHypYPtGenerator(void *p);
   static void deleteArray_MpdHypYPtGenerator(void *p);
   static void destruct_MpdHypYPtGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdHypYPtGenerator*)
   {
      ::MpdHypYPtGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdHypYPtGenerator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MpdHypYPtGenerator", ::MpdHypYPtGenerator::Class_Version(), "", 208,
                  typeid(::MpdHypYPtGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdHypYPtGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::MpdHypYPtGenerator) );
      instance.SetNew(&new_MpdHypYPtGenerator);
      instance.SetNewArray(&newArray_MpdHypYPtGenerator);
      instance.SetDelete(&delete_MpdHypYPtGenerator);
      instance.SetDeleteArray(&deleteArray_MpdHypYPtGenerator);
      instance.SetDestructor(&destruct_MpdHypYPtGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdHypYPtGenerator*)
   {
      return GenerateInitInstanceLocal((::MpdHypYPtGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdHypYPtGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MpdRainGenerator(void *p = 0);
   static void *newArray_MpdRainGenerator(Long_t size, void *p);
   static void delete_MpdRainGenerator(void *p);
   static void deleteArray_MpdRainGenerator(void *p);
   static void destruct_MpdRainGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdRainGenerator*)
   {
      ::MpdRainGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdRainGenerator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MpdRainGenerator", ::MpdRainGenerator::Class_Version(), "", 268,
                  typeid(::MpdRainGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdRainGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::MpdRainGenerator) );
      instance.SetNew(&new_MpdRainGenerator);
      instance.SetNewArray(&newArray_MpdRainGenerator);
      instance.SetDelete(&delete_MpdRainGenerator);
      instance.SetDeleteArray(&deleteArray_MpdRainGenerator);
      instance.SetDestructor(&destruct_MpdRainGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdRainGenerator*)
   {
      return GenerateInitInstanceLocal((::MpdRainGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdRainGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MpdPHSDGenerator(void *p = 0);
   static void *newArray_MpdPHSDGenerator(Long_t size, void *p);
   static void delete_MpdPHSDGenerator(void *p);
   static void deleteArray_MpdPHSDGenerator(void *p);
   static void destruct_MpdPHSDGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdPHSDGenerator*)
   {
      ::MpdPHSDGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdPHSDGenerator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MpdPHSDGenerator", ::MpdPHSDGenerator::Class_Version(), "", 322,
                  typeid(::MpdPHSDGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdPHSDGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::MpdPHSDGenerator) );
      instance.SetNew(&new_MpdPHSDGenerator);
      instance.SetNewArray(&newArray_MpdPHSDGenerator);
      instance.SetDelete(&delete_MpdPHSDGenerator);
      instance.SetDeleteArray(&deleteArray_MpdPHSDGenerator);
      instance.SetDestructor(&destruct_MpdPHSDGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdPHSDGenerator*)
   {
      return GenerateInitInstanceLocal((::MpdPHSDGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdPHSDGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MpdUrqmdGenerator(void *p = 0);
   static void *newArray_MpdUrqmdGenerator(Long_t size, void *p);
   static void delete_MpdUrqmdGenerator(void *p);
   static void deleteArray_MpdUrqmdGenerator(void *p);
   static void destruct_MpdUrqmdGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdUrqmdGenerator*)
   {
      ::MpdUrqmdGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdUrqmdGenerator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MpdUrqmdGenerator", ::MpdUrqmdGenerator::Class_Version(), "", 391,
                  typeid(::MpdUrqmdGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdUrqmdGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::MpdUrqmdGenerator) );
      instance.SetNew(&new_MpdUrqmdGenerator);
      instance.SetNewArray(&newArray_MpdUrqmdGenerator);
      instance.SetDelete(&delete_MpdUrqmdGenerator);
      instance.SetDeleteArray(&deleteArray_MpdUrqmdGenerator);
      instance.SetDestructor(&destruct_MpdUrqmdGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdUrqmdGenerator*)
   {
      return GenerateInitInstanceLocal((::MpdUrqmdGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdUrqmdGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_MpdLibZ(void *p);
   static void deleteArray_MpdLibZ(void *p);
   static void destruct_MpdLibZ(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdLibZ*)
   {
      ::MpdLibZ *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdLibZ >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MpdLibZ", ::MpdLibZ::Class_Version(), "", 468,
                  typeid(::MpdLibZ), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdLibZ::Dictionary, isa_proxy, 4,
                  sizeof(::MpdLibZ) );
      instance.SetDelete(&delete_MpdLibZ);
      instance.SetDeleteArray(&deleteArray_MpdLibZ);
      instance.SetDestructor(&destruct_MpdLibZ);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdLibZ*)
   {
      return GenerateInitInstanceLocal((::MpdLibZ*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdLibZ*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdGetNumEvents*)
   {
      ::MpdGetNumEvents *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdGetNumEvents >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MpdGetNumEvents", ::MpdGetNumEvents::Class_Version(), "", 497,
                  typeid(::MpdGetNumEvents), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdGetNumEvents::Dictionary, isa_proxy, 4,
                  sizeof(::MpdGetNumEvents) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdGetNumEvents*)
   {
      return GenerateInitInstanceLocal((::MpdGetNumEvents*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdGetNumEvents*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MpdHistoGenerator(void *p = 0);
   static void *newArray_MpdHistoGenerator(Long_t size, void *p);
   static void delete_MpdHistoGenerator(void *p);
   static void deleteArray_MpdHistoGenerator(void *p);
   static void destruct_MpdHistoGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdHistoGenerator*)
   {
      ::MpdHistoGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdHistoGenerator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MpdHistoGenerator", ::MpdHistoGenerator::Class_Version(), "", 538,
                  typeid(::MpdHistoGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdHistoGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::MpdHistoGenerator) );
      instance.SetNew(&new_MpdHistoGenerator);
      instance.SetNewArray(&newArray_MpdHistoGenerator);
      instance.SetDelete(&delete_MpdHistoGenerator);
      instance.SetDeleteArray(&deleteArray_MpdHistoGenerator);
      instance.SetDestructor(&destruct_MpdHistoGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdHistoGenerator*)
   {
      return GenerateInitInstanceLocal((::MpdHistoGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdHistoGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_Mpd3fdGenerator(void *p = 0);
   static void *newArray_Mpd3fdGenerator(Long_t size, void *p);
   static void delete_Mpd3fdGenerator(void *p);
   static void deleteArray_Mpd3fdGenerator(void *p);
   static void destruct_Mpd3fdGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Mpd3fdGenerator*)
   {
      ::Mpd3fdGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Mpd3fdGenerator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Mpd3fdGenerator", ::Mpd3fdGenerator::Class_Version(), "", 589,
                  typeid(::Mpd3fdGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Mpd3fdGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::Mpd3fdGenerator) );
      instance.SetNew(&new_Mpd3fdGenerator);
      instance.SetNewArray(&newArray_Mpd3fdGenerator);
      instance.SetDelete(&delete_Mpd3fdGenerator);
      instance.SetDeleteArray(&deleteArray_Mpd3fdGenerator);
      instance.SetDestructor(&destruct_Mpd3fdGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Mpd3fdGenerator*)
   {
      return GenerateInitInstanceLocal((::Mpd3fdGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Mpd3fdGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MpdVHLLEGenerator(void *p = 0);
   static void *newArray_MpdVHLLEGenerator(Long_t size, void *p);
   static void delete_MpdVHLLEGenerator(void *p);
   static void deleteArray_MpdVHLLEGenerator(void *p);
   static void destruct_MpdVHLLEGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdVHLLEGenerator*)
   {
      ::MpdVHLLEGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdVHLLEGenerator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MpdVHLLEGenerator", ::MpdVHLLEGenerator::Class_Version(), "", 663,
                  typeid(::MpdVHLLEGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdVHLLEGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::MpdVHLLEGenerator) );
      instance.SetNew(&new_MpdVHLLEGenerator);
      instance.SetNewArray(&newArray_MpdVHLLEGenerator);
      instance.SetDelete(&delete_MpdVHLLEGenerator);
      instance.SetDeleteArray(&deleteArray_MpdVHLLEGenerator);
      instance.SetDestructor(&destruct_MpdVHLLEGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdVHLLEGenerator*)
   {
      return GenerateInitInstanceLocal((::MpdVHLLEGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdVHLLEGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MpdMCEventHeader::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdMCEventHeader::Class_Name()
{
   return "MpdMCEventHeader";
}

//______________________________________________________________________________
const char *MpdMCEventHeader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdMCEventHeader*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MpdMCEventHeader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdMCEventHeader*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdMCEventHeader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdMCEventHeader*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdMCEventHeader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdMCEventHeader*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MpdLAQGSMGenerator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdLAQGSMGenerator::Class_Name()
{
   return "MpdLAQGSMGenerator";
}

//______________________________________________________________________________
const char *MpdLAQGSMGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdLAQGSMGenerator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MpdLAQGSMGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdLAQGSMGenerator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdLAQGSMGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdLAQGSMGenerator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdLAQGSMGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdLAQGSMGenerator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MpdHypYPtGenerator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdHypYPtGenerator::Class_Name()
{
   return "MpdHypYPtGenerator";
}

//______________________________________________________________________________
const char *MpdHypYPtGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdHypYPtGenerator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MpdHypYPtGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdHypYPtGenerator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdHypYPtGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdHypYPtGenerator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdHypYPtGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdHypYPtGenerator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MpdRainGenerator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdRainGenerator::Class_Name()
{
   return "MpdRainGenerator";
}

//______________________________________________________________________________
const char *MpdRainGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdRainGenerator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MpdRainGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdRainGenerator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdRainGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdRainGenerator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdRainGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdRainGenerator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MpdPHSDGenerator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdPHSDGenerator::Class_Name()
{
   return "MpdPHSDGenerator";
}

//______________________________________________________________________________
const char *MpdPHSDGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdPHSDGenerator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MpdPHSDGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdPHSDGenerator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdPHSDGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdPHSDGenerator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdPHSDGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdPHSDGenerator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MpdUrqmdGenerator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdUrqmdGenerator::Class_Name()
{
   return "MpdUrqmdGenerator";
}

//______________________________________________________________________________
const char *MpdUrqmdGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdUrqmdGenerator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MpdUrqmdGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdUrqmdGenerator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdUrqmdGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdUrqmdGenerator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdUrqmdGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdUrqmdGenerator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MpdLibZ::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdLibZ::Class_Name()
{
   return "MpdLibZ";
}

//______________________________________________________________________________
const char *MpdLibZ::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdLibZ*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MpdLibZ::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdLibZ*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdLibZ::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdLibZ*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdLibZ::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdLibZ*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MpdGetNumEvents::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdGetNumEvents::Class_Name()
{
   return "MpdGetNumEvents";
}

//______________________________________________________________________________
const char *MpdGetNumEvents::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdGetNumEvents*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MpdGetNumEvents::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdGetNumEvents*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdGetNumEvents::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdGetNumEvents*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdGetNumEvents::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdGetNumEvents*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MpdHistoGenerator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdHistoGenerator::Class_Name()
{
   return "MpdHistoGenerator";
}

//______________________________________________________________________________
const char *MpdHistoGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdHistoGenerator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MpdHistoGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdHistoGenerator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdHistoGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdHistoGenerator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdHistoGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdHistoGenerator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Mpd3fdGenerator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Mpd3fdGenerator::Class_Name()
{
   return "Mpd3fdGenerator";
}

//______________________________________________________________________________
const char *Mpd3fdGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Mpd3fdGenerator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Mpd3fdGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Mpd3fdGenerator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Mpd3fdGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Mpd3fdGenerator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Mpd3fdGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Mpd3fdGenerator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MpdVHLLEGenerator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdVHLLEGenerator::Class_Name()
{
   return "MpdVHLLEGenerator";
}

//______________________________________________________________________________
const char *MpdVHLLEGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdVHLLEGenerator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MpdVHLLEGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdVHLLEGenerator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdVHLLEGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdVHLLEGenerator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdVHLLEGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdVHLLEGenerator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MpdMCEventHeader::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdMCEventHeader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MpdMCEventHeader::Class(),this);
   } else {
      R__b.WriteClassBuffer(MpdMCEventHeader::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MpdMCEventHeader(void *p) {
      return  p ? new(p) ::MpdMCEventHeader : new ::MpdMCEventHeader;
   }
   static void *newArray_MpdMCEventHeader(Long_t nElements, void *p) {
      return p ? new(p) ::MpdMCEventHeader[nElements] : new ::MpdMCEventHeader[nElements];
   }
   // Wrapper around operator delete
   static void delete_MpdMCEventHeader(void *p) {
      delete ((::MpdMCEventHeader*)p);
   }
   static void deleteArray_MpdMCEventHeader(void *p) {
      delete [] ((::MpdMCEventHeader*)p);
   }
   static void destruct_MpdMCEventHeader(void *p) {
      typedef ::MpdMCEventHeader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MpdMCEventHeader

//______________________________________________________________________________
void MpdLAQGSMGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdLAQGSMGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MpdLAQGSMGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(MpdLAQGSMGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MpdLAQGSMGenerator(void *p) {
      return  p ? new(p) ::MpdLAQGSMGenerator : new ::MpdLAQGSMGenerator;
   }
   static void *newArray_MpdLAQGSMGenerator(Long_t nElements, void *p) {
      return p ? new(p) ::MpdLAQGSMGenerator[nElements] : new ::MpdLAQGSMGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_MpdLAQGSMGenerator(void *p) {
      delete ((::MpdLAQGSMGenerator*)p);
   }
   static void deleteArray_MpdLAQGSMGenerator(void *p) {
      delete [] ((::MpdLAQGSMGenerator*)p);
   }
   static void destruct_MpdLAQGSMGenerator(void *p) {
      typedef ::MpdLAQGSMGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MpdLAQGSMGenerator

//______________________________________________________________________________
void MpdHypYPtGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdHypYPtGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MpdHypYPtGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(MpdHypYPtGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MpdHypYPtGenerator(void *p) {
      return  p ? new(p) ::MpdHypYPtGenerator : new ::MpdHypYPtGenerator;
   }
   static void *newArray_MpdHypYPtGenerator(Long_t nElements, void *p) {
      return p ? new(p) ::MpdHypYPtGenerator[nElements] : new ::MpdHypYPtGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_MpdHypYPtGenerator(void *p) {
      delete ((::MpdHypYPtGenerator*)p);
   }
   static void deleteArray_MpdHypYPtGenerator(void *p) {
      delete [] ((::MpdHypYPtGenerator*)p);
   }
   static void destruct_MpdHypYPtGenerator(void *p) {
      typedef ::MpdHypYPtGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MpdHypYPtGenerator

//______________________________________________________________________________
void MpdRainGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdRainGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MpdRainGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(MpdRainGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MpdRainGenerator(void *p) {
      return  p ? new(p) ::MpdRainGenerator : new ::MpdRainGenerator;
   }
   static void *newArray_MpdRainGenerator(Long_t nElements, void *p) {
      return p ? new(p) ::MpdRainGenerator[nElements] : new ::MpdRainGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_MpdRainGenerator(void *p) {
      delete ((::MpdRainGenerator*)p);
   }
   static void deleteArray_MpdRainGenerator(void *p) {
      delete [] ((::MpdRainGenerator*)p);
   }
   static void destruct_MpdRainGenerator(void *p) {
      typedef ::MpdRainGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MpdRainGenerator

//______________________________________________________________________________
void MpdPHSDGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdPHSDGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MpdPHSDGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(MpdPHSDGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MpdPHSDGenerator(void *p) {
      return  p ? new(p) ::MpdPHSDGenerator : new ::MpdPHSDGenerator;
   }
   static void *newArray_MpdPHSDGenerator(Long_t nElements, void *p) {
      return p ? new(p) ::MpdPHSDGenerator[nElements] : new ::MpdPHSDGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_MpdPHSDGenerator(void *p) {
      delete ((::MpdPHSDGenerator*)p);
   }
   static void deleteArray_MpdPHSDGenerator(void *p) {
      delete [] ((::MpdPHSDGenerator*)p);
   }
   static void destruct_MpdPHSDGenerator(void *p) {
      typedef ::MpdPHSDGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MpdPHSDGenerator

//______________________________________________________________________________
void MpdUrqmdGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdUrqmdGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MpdUrqmdGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(MpdUrqmdGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MpdUrqmdGenerator(void *p) {
      return  p ? new(p) ::MpdUrqmdGenerator : new ::MpdUrqmdGenerator;
   }
   static void *newArray_MpdUrqmdGenerator(Long_t nElements, void *p) {
      return p ? new(p) ::MpdUrqmdGenerator[nElements] : new ::MpdUrqmdGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_MpdUrqmdGenerator(void *p) {
      delete ((::MpdUrqmdGenerator*)p);
   }
   static void deleteArray_MpdUrqmdGenerator(void *p) {
      delete [] ((::MpdUrqmdGenerator*)p);
   }
   static void destruct_MpdUrqmdGenerator(void *p) {
      typedef ::MpdUrqmdGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MpdUrqmdGenerator

//______________________________________________________________________________
void MpdLibZ::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdLibZ.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MpdLibZ::Class(),this);
   } else {
      R__b.WriteClassBuffer(MpdLibZ::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_MpdLibZ(void *p) {
      delete ((::MpdLibZ*)p);
   }
   static void deleteArray_MpdLibZ(void *p) {
      delete [] ((::MpdLibZ*)p);
   }
   static void destruct_MpdLibZ(void *p) {
      typedef ::MpdLibZ current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MpdLibZ

//______________________________________________________________________________
void MpdGetNumEvents::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdGetNumEvents.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MpdGetNumEvents::Class(),this);
   } else {
      R__b.WriteClassBuffer(MpdGetNumEvents::Class(),this);
   }
}

namespace ROOT {
} // end of namespace ROOT for class ::MpdGetNumEvents

//______________________________________________________________________________
void MpdHistoGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdHistoGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MpdHistoGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(MpdHistoGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MpdHistoGenerator(void *p) {
      return  p ? new(p) ::MpdHistoGenerator : new ::MpdHistoGenerator;
   }
   static void *newArray_MpdHistoGenerator(Long_t nElements, void *p) {
      return p ? new(p) ::MpdHistoGenerator[nElements] : new ::MpdHistoGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_MpdHistoGenerator(void *p) {
      delete ((::MpdHistoGenerator*)p);
   }
   static void deleteArray_MpdHistoGenerator(void *p) {
      delete [] ((::MpdHistoGenerator*)p);
   }
   static void destruct_MpdHistoGenerator(void *p) {
      typedef ::MpdHistoGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MpdHistoGenerator

//______________________________________________________________________________
void Mpd3fdGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class Mpd3fdGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Mpd3fdGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(Mpd3fdGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Mpd3fdGenerator(void *p) {
      return  p ? new(p) ::Mpd3fdGenerator : new ::Mpd3fdGenerator;
   }
   static void *newArray_Mpd3fdGenerator(Long_t nElements, void *p) {
      return p ? new(p) ::Mpd3fdGenerator[nElements] : new ::Mpd3fdGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_Mpd3fdGenerator(void *p) {
      delete ((::Mpd3fdGenerator*)p);
   }
   static void deleteArray_Mpd3fdGenerator(void *p) {
      delete [] ((::Mpd3fdGenerator*)p);
   }
   static void destruct_Mpd3fdGenerator(void *p) {
      typedef ::Mpd3fdGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Mpd3fdGenerator

//______________________________________________________________________________
void MpdVHLLEGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdVHLLEGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MpdVHLLEGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(MpdVHLLEGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MpdVHLLEGenerator(void *p) {
      return  p ? new(p) ::MpdVHLLEGenerator : new ::MpdVHLLEGenerator;
   }
   static void *newArray_MpdVHLLEGenerator(Long_t nElements, void *p) {
      return p ? new(p) ::MpdVHLLEGenerator[nElements] : new ::MpdVHLLEGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_MpdVHLLEGenerator(void *p) {
      delete ((::MpdVHLLEGenerator*)p);
   }
   static void deleteArray_MpdVHLLEGenerator(void *p) {
      delete [] ((::MpdVHLLEGenerator*)p);
   }
   static void destruct_MpdVHLLEGenerator(void *p) {
      typedef ::MpdVHLLEGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MpdVHLLEGenerator

namespace ROOT {
   static TClass *maplETStringcOFairIonmUgR_Dictionary();
   static void maplETStringcOFairIonmUgR_TClassManip(TClass*);
   static void *new_maplETStringcOFairIonmUgR(void *p = 0);
   static void *newArray_maplETStringcOFairIonmUgR(Long_t size, void *p);
   static void delete_maplETStringcOFairIonmUgR(void *p);
   static void deleteArray_maplETStringcOFairIonmUgR(void *p);
   static void destruct_maplETStringcOFairIonmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TString,FairIon*>*)
   {
      map<TString,FairIon*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TString,FairIon*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TString,FairIon*>", -2, "map", 99,
                  typeid(map<TString,FairIon*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETStringcOFairIonmUgR_Dictionary, isa_proxy, 4,
                  sizeof(map<TString,FairIon*>) );
      instance.SetNew(&new_maplETStringcOFairIonmUgR);
      instance.SetNewArray(&newArray_maplETStringcOFairIonmUgR);
      instance.SetDelete(&delete_maplETStringcOFairIonmUgR);
      instance.SetDeleteArray(&deleteArray_maplETStringcOFairIonmUgR);
      instance.SetDestructor(&destruct_maplETStringcOFairIonmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TString,FairIon*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TString,FairIon*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETStringcOFairIonmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TString,FairIon*>*)0x0)->GetClass();
      maplETStringcOFairIonmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETStringcOFairIonmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETStringcOFairIonmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,FairIon*> : new map<TString,FairIon*>;
   }
   static void *newArray_maplETStringcOFairIonmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,FairIon*>[nElements] : new map<TString,FairIon*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETStringcOFairIonmUgR(void *p) {
      delete ((map<TString,FairIon*>*)p);
   }
   static void deleteArray_maplETStringcOFairIonmUgR(void *p) {
      delete [] ((map<TString,FairIon*>*)p);
   }
   static void destruct_maplETStringcOFairIonmUgR(void *p) {
      typedef map<TString,FairIon*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TString,FairIon*>

namespace {
  void TriggerDictionaryInitialization_G__MpdGenDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/opt/fairroot/install/include",
"/home/alex/bmnroot_dev/bmnroot/config",
"/home/alex/bmnroot_dev/bmnroot/generators",
"/opt/fairsoft/install/include/root",
"/opt/fairsoft/install/include/root",
"/home/alex/bmnroot_dev/bmnroot/build/generators/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__MpdGenDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class MpdMCEventHeader;
class __attribute__((annotate("$clingAutoload$TString.h")))  __attribute__((annotate("$clingAutoload$FairMCEventHeader.h")))  TString;
class FairIon;
namespace std{template <typename _Tp> struct __attribute__((annotate("$clingAutoload$bits/stl_function.h")))  __attribute__((annotate("$clingAutoload$string")))  less;
}
namespace std{template <typename _T1, typename _T2> struct __attribute__((annotate("$clingAutoload$bits/stl_pair.h")))  __attribute__((annotate("$clingAutoload$string")))  pair;
}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
class MpdLAQGSMGenerator;
class MpdHypYPtGenerator;
class MpdRainGenerator;
class MpdPHSDGenerator;
class MpdUrqmdGenerator;
class MpdLibZ;
class MpdGetNumEvents;
class MpdHistoGenerator;
class Mpd3fdGenerator;
class MpdVHLLEGenerator;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__MpdGenDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
/** MpdMCEventHeader.h
 ** @author V.Voronyuk, origin CBMRoot
 ** Data class (level MC) containing information about the input event.
 ** New MPD class derived from FairMCEventHeader
 **/

#ifndef MPDMCEVENTHEADER_H
#define MPDMCEVENTHEADER_H 1

#include "FairMCEventHeader.h"

class MpdMCEventHeader : public FairMCEventHeader
{

 public:

  /** Default constructor **/
  MpdMCEventHeader();

  /** Constructor with all members
   **
   *@param runId    run identifier
   *@param iEvent   event identifier
   *@param x,y,z    vertex oordinates [cm]
   *@param t        event time [ns]
   *@param b        impact parameter [fm] (if relevant)
   *@param phi      event plane angle [rad]
   *@param nPrim    number of input tracks
   **/
  MpdMCEventHeader(UInt_t runId, Int_t iEvent, 
      Double_t x, Double_t y, Double_t z, Double_t t, 
      Double_t b, Double_t phi, Int_t nPrim);

  /** Standard constructor with run identifier **/
  MpdMCEventHeader(UInt_t runId);

  /** Destructor **/
  virtual ~MpdMCEventHeader();

  /** Accessors **/
  Double_t GetPhi()   const { return fPhi; }       // event plane angle [rad]

  /** Modifiers **/
  void SetPhi(Double_t phi) { fPhi = phi;  }

  /** Reset all members **/
  virtual void Reset();

  /** Register the class as data branch to the poutput */
  virtual void Register();

  ClassDef(MpdMCEventHeader,1);
 
 private:

  Double32_t fPhi;         //  Event plane angle [rad] (if relevant)
};

#endif
// -------------------------------------------------------------------------
// -----                MpdLAQGSMGenerator header file                 -----
// -------------------------------------------------------------------------

/** MpdLAQGSMGenerator
 *@author Elena Litvinenko  <litvin@nf.jinr.ru>
 *@version 15.02.2016
 *
 ** The MpdLAQGSMGenerator uses the ASCII input 
 ** provided by K.Gudima LAQGSM event generator.
**/

#ifndef MPDLAQGSMGENERATOR_H
#define MPDLAQGSMGENERATOR_H 1

#include "FairGenerator.h"

#include <fstream>
#include <map>
#include <vector>

#ifndef __CINT__
#include <zlib.h>
#endif

class TDatabasePDG;
class FairPrimaryGenerator;
class FairIon;

class MpdLAQGSMGenerator : public FairGenerator
{

struct la_tab_t {
  Int_t pdg;
  Int_t Z;
  Int_t strange;
  Int_t lepton;
  Int_t A;
  Float_t mass;
  char  name[10];
};

 public: 

  /** Default constructor without arguments should not be used. **/
  MpdLAQGSMGenerator();

  /** Standard constructor. 
   ** @param fileName The input file name
   **/
  MpdLAQGSMGenerator(const char* fileName, const Bool_t use_collider_system=kTRUE, Int_t QGSM_format_ID=0,Int_t Max_Event_Number=0);

  /** Destructor. **/
  virtual ~MpdLAQGSMGenerator();

  //  static la_tab_t la_tab[78];    //!  list of light particles known for MpdLAQGSMGenerator

  void Init (const char *light_particles_filename=0);  // fill list of known light particles
	
  /** Reads on event from the input file and pushes the tracks onto
   ** the stack. Abstract method in base class.
   ** @param primGen  pointer to the FairPrimaryGenerator
   **/
  virtual Bool_t ReadEvent(FairPrimaryGenerator* primGen);

  virtual Bool_t GetEventHeader(char *ss);

  Bool_t SkipEvents(Int_t nSkip); //AZ

  Bool_t general_fgets (char *ss, Int_t nn=250, FILE* p=0);
  Bool_t general_feof (void *p);
    
  void SetXYZ (Double_t x = 0., Double_t y = 0., Double_t z = 0.) {
        fX = x;
        fY = y;
        fZ = z;
  }

 private:

  FILE* fInputFile;                    //!  Input file
  #ifndef __CINT__
  gzFile fGZInputFile;                 //!  GZ Input file
  #endif
  const Char_t*  fFileName;           //! Input file Name
  TDatabasePDG*  fPDG;                //!  PDG database
  Int_t fQGSM_format_ID;              //   Reflect format changes
  Bool_t fUseColliderSystem;          //   kTRUE- for NICA/MPD, kFALSE - for lab system (CBM)
  //la_tab_t la_tab[84];                //!  list of light particles known for MpdLAQGSMGenerator
  std::vector<la_tab_t*> fLa_tab;     //!  list of light particles known for MpdLAQGSMGenerator
  Bool_t fGZ_input;                   //!  0: ascii input, 1: gzipped input
  
  Double_t fX, fY, fZ; // Point vertex coordinates [cm]
	
  /** Private method CloseInput. Just for convenience. Closes the 
   ** input file properly. Called from destructor and from ReadEvent. **/
  void CloseInput();

  /** Private method RegisterIons. Goes through the input file and registers
   ** any ion needed. **/
  Int_t RegisterIons(Int_t Max_Event_Number=0);
  Int_t RegisterIons1(); //AZ

  Int_t CreatePdgCode(Int_t Z, Int_t A, Int_t Strange,Int_t user=0);
  Bool_t FindParticle (Int_t Z, Int_t strange, Int_t lepton, Int_t A, Float_t mass, Int_t &PDG, char name[11]);
  Bool_t CreateNucleus (Int_t Z, Float_t mass, Int_t pdgCode, char pdgName[11]);

  /** STL map from ion name to FairIon **/
  std::map<TString, FairIon*> fIonMap;       //!
	
  ClassDef(MpdLAQGSMGenerator,1);

};

#endif
// -------------------------------------------------------------------------
// -----             CbmAnaHypYPtGenerator header file                 -----
// -----              Created 03/10/04  by E. Kryshen                  -----
// -----  Updated 10/02/10  by A. Zinchenko for MPD (with name change) -----
// -------------------------------------------------------------------------

/** CbmAnaHypYPtGenerator.h
 ** @author Evgeny Kryshen <e.kryshen@gsi.de>
 **
 ** The CbmAnaHypYPtGenerator generates particles with a given
 ** distribution over pt (dn/dpt = pt*exp(-mt/T)
 ** and rapidity (Gaussian) with fixed multiplicity per event.
 ** Derived from FairGenerator.
 */


#ifndef MPDHYPYPTGENERATOR_H
#define MPDHYPYPTGENERATOR_H

#include "FairGenerator.h"
#include "TF1.h"

using namespace std;

class FairPrimaryGenerator;

class MpdHypYPtGenerator : public FairGenerator
{
public:

  /** Default constructor. */
  MpdHypYPtGenerator();

  /** Constructor with PDG-ID, multiplicity
   **@param pdgid Particle type (PDG encoding)
   **@param mult  Multiplicity (default is 1)
   **/
  MpdHypYPtGenerator(Int_t pdgid, Int_t mult=1);

  /** Destructor */
  virtual ~MpdHypYPtGenerator() {};

  /** Modifiers */
  inline void SetPDGType        (Int_t pdg)  {fPDGType = pdg;  };
  inline void SetMultiplicity   (Int_t mult) {fMult    = mult; };
  //inline void SetDistributionPt (Double_t T=0.154319) {fT=T;};
  inline void SetDistributionPt (Double_t T=0.223) {fT=T;}; //AZ - for Omega- @ 9 GeV/n AuAu UrQMD
  //inline void SetDistributionY  (Double_t y0=1.98604, Double_t sigma=0.617173) {fY0=y0;fSigma=sigma;};
  inline void SetDistributionY  (Double_t y0=0, Double_t sigma=0.72) {fY0=y0;fSigma=sigma;}; // AZ - for Omega- @ 9 GeV/n AuAu UrQMD
  inline void SetRangePt        (Double_t ptMin=0, Double_t ptMax=3) {fPtMin=ptMin;fPtMax=ptMax;};


  /** Initializer */
  Bool_t  Init();    // EL

  /** Creates an event with given type and multiplicity.
   **@param primGen  pointer to the CbmPrimaryGenerator
   */
  virtual Bool_t ReadEvent(FairPrimaryGenerator* primGen);

private:
  Int_t    fPDGType;             ///< Particle type (PDG encoding)
  Int_t    fMult;                ///< Multiplicity
  Double_t fT;                   ///< Temperature in the Pt distribution
  Double_t fY0;                  ///< Mean rapidity
  Double_t fSigma;               ///< Simga in the rapidity distribution
  Double_t fPtMin;               ///< Max value of Pt
  Double_t fPtMax;               ///< Min value of Pt
  Double_t fPDGMass;             ///< Particle mass [GeV]
  TF1*     fDistPt;              //! Pointer to the Pt function

ClassDef(MpdHypYPtGenerator,1);
};

#endif
#ifndef MPDRAINGENERATOR_H
#define MPDRAINGENERATOR_H


#include "FairGenerator.h"

class FairPrimaryGenerator;



class MpdRainGenerator : public FairGenerator
{
private:    
    Int_t         _PDGType;     // Particle type (PDG encoding)
    Int_t         _N;                 // Size of shower
    Double_t _p;                  // Momentum
    Double_t _theta;            // angle from z axis
    Double_t _phi;               // angle in XoY plain
    Double_t _height;         // Height at which rain starts
    Double_t _d;                 // distance between tracks
    

public:
  MpdRainGenerator();

  // pdgid - Particle ID
  // p - momentum of particle
  // theta, phi - angles of rain (particles)
  // d - distance between particles
  // n - (2*n)^2 number of particles
  MpdRainGenerator(Int_t pdgid, Double_t p, Double_t theta, Double_t phi, Double_t d, Double_t height, Int_t n);
  virtual ~MpdRainGenerator() {};

  // Create an Event
  virtual Bool_t ReadEvent(FairPrimaryGenerator* primGen);

    ClassDef(MpdRainGenerator,1);

};


#endif
   

/**
 *@class MpdPHSDGenerator
 *@author V.Voronyuk <vadimv@jinr.ru>
 * MpdPHSDGenerator reads newer (instead of default) output (phsd.dat/phsd.dat.gz)
 * of HSD/PHSD transport model.
 **/

#ifndef Mpd_PHSDGENERATOR_H
#define Mpd_PHSDGENERATOR_H

#ifndef __CINT__
#include <zlib.h>
#endif

#include <TRandom2.h>

#include "FairGenerator.h"
#include "FairPrimaryGenerator.h"

class MpdPHSDGenerator : public FairGenerator
{
 public:
  MpdPHSDGenerator();
  /** Default constructor **/
  MpdPHSDGenerator(const char *filename);
  /** Destructor **/
  virtual ~MpdPHSDGenerator();
  /** Read event **/
  Bool_t ReadEvent(FairPrimaryGenerator *primGen);
  /** Skip n events, return kTRUE if successful **/
  Bool_t SkipEvents(Int_t n);

  /** Set fixed reaction plane angle **/
  void SetPsiRP(Double_t PsiRP) {fPsiRP=PsiRP; fisRP=kFALSE;};

 private:
  Int_t fntr; //! number of tracks in given event
  Float_t fb; //! impact parameter in given event
  #ifndef __CINT__
  gzFile    fgzFile; //! file
  #endif
  char fbuffer[256]; //! reading buffer

  TRandom2 *frandom; //!
  Double_t  fPsiRP;  //! reaction plane angle
  Bool_t    fisRP;   //! random/fixed reaction plane

  Bool_t ReadHeader(); //! read event header, return kTRUE if successful
  void   SkipTrack();  //! skip one track

 ClassDef(MpdPHSDGenerator,0);
};
#endif
// -------------------------------------------------------------------------
// -----                MpdUrqmdGenerator header file                  -----
// -----          Created 11/06/04  by V. Friese / D.Bertini           -----
// -------------------------------------------------------------------------


/** MpdUrqmdGenerator.h
 *@ author V.Friese <v.friese@gsi.de>
 *@author D.Bertini <d.bertini@gsi.de>
 *
 The MpdUrqmdGenerator reads the output file 14 (ftn14) from UrQMD. The UrQMD
 calculation has to be performed in the CM system of the collision; Lorentz
 transformation into the lab is performed by this class.
 Derived from FairGenerator.
**/
#define GZIP_SUPPORT // version with gz support

#ifndef MPDURQMDGENERATOR_H
#define MPDURQMDGENERATOR_H

#include "FairGenerator.h"

#include <fstream>
#include <map>

#ifdef GZIP_SUPPORT
#ifndef __CINT__
#include <zlib.h>
#endif
#endif

class TVirtualMCStack;
class FairPrimaryGenerator;

class MpdUrqmdGenerator : public FairGenerator
{
  public:

    /** Default constructor without arguments should not be used. **/
    MpdUrqmdGenerator();


    /** Standard constructor.
     * @param fileName The input file name
     **/
    MpdUrqmdGenerator(const char* fileName);


    /** Destructor. **/
    ~MpdUrqmdGenerator();


    /** Reads on event from the input file and pushes the tracks onto
     ** the stack. Abstract method in base class.
     ** @param pStack    pointer to the stack
     ** @param ver       not used
     **/
    Bool_t ReadEvent(FairPrimaryGenerator* primGen);

    //Skip some events in file
    Bool_t SkipEvents(Int_t count);

    void SetEventPlane(Double_t phiMin, Double_t phiMax);

    void SetXYZ (Double32_t x = 0., Double32_t y = 0., Double32_t z = 0.) {
        fX = x;
        fY = y;
        fZ = z;
    }

  private:

#ifdef GZIP_SUPPORT
    #ifndef __CINT__
    gzFile fInputFile;                    //!  Input file
    #endif
#else
    FILE* fInputFile;                     //!  Input file
#endif

    std::map<Int_t,Int_t> fParticleTable;      //!  Map from UrQMD PID to PDGPID

    Double32_t fPhiMin, fPhiMax; // Limits of event plane angle
    Bool_t fEventPlaneSet; // Flag whether event plane angle is used

    const Char_t* fFileName;              //!  Input file name

    Double32_t fX, fY, fZ; // Point vertex coordinates [cm]

    /** Private method ReadConversionTable. Reads the conversion table
        from UrQMD particle code to PDG particle code and fills the
        conversion map. Is called from the constructor. **/
    void ReadConversionTable();

    MpdUrqmdGenerator(const MpdUrqmdGenerator&);
    MpdUrqmdGenerator& operator=(const MpdUrqmdGenerator&);

    ClassDef(MpdUrqmdGenerator,1);

};

#endif


#include "TROOT.h"

#ifndef __CLING__
#include <zlib.h>
#endif

class MpdLibZ
{
  public:
    MpdLibZ (const char* filename);
    ~MpdLibZ();
   
    int open(const char* mode);
    int eof();
    int close();
    #ifndef __CLING__
    int write(voidpc buf, unsigned len);
    int read(voidp buf, unsigned len);
    #endif
    char* gets(char* buf, int len);
    int puts(char* s);
    #ifndef __CLING__
    off_t tell ();
    off_t seek (off_t pos, int whence);
    #endif

  private:
    const char* fileName;
    #ifndef __CLING__
    gzFile file;
    #endif

    ClassDef(MpdLibZ, 1);
};

class MpdGetNumEvents
{
  private:
    MpdGetNumEvents(){}
    ~MpdGetNumEvents(){}

    static bool GetQGSMEventHeader(char* ss, MpdLibZ* libz, Int_t& fQGSM_format_ID);

  public:
    static Int_t GetNumROOTEvents(const char* filename);
    static Int_t GetNumPHSDEvents(const char* filename);
    static Int_t GetNumQGSMEvents(const char* fileName);
    static Int_t GetNumURQMDEvents(const char* fileName);

    ClassDef(MpdGetNumEvents, 1);
};
// -------------------------------------------------------------------------
// -----              MpdHistoGenerator header file                    -----
// -----           Created 03/06/2014  by M.Ilieva, A.Zinchenko        -----
// -------------------------------------------------------------------------

/** MpdHistoGenerator.h
 ** @author 
 **
 ** The MpdHistoGenerator generates particles according
 ** to Eta-Pt histogram.
 ** Derived from FairGenerator.
 */


#ifndef MPDHISTOGENERATOR_H
#define MPDHISTOGENERATOR_H

#include "FairGenerator.h"
#include "TH2D.h"

using namespace std;

class FairPrimaryGenerator;

class MpdHistoGenerator : public FairGenerator
{
public:

  /** Default constructor. */
  MpdHistoGenerator();

  /** Constructor with PDG-ID, multiplicity
   **@param pdgid Particle type (PDG encoding)
   **@param mult  Multiplicity (default is 1)
   **/
  MpdHistoGenerator(Int_t pdgid, Int_t mult = 1);

  /** Destructor */
  virtual ~MpdHistoGenerator();

  /** Creates an event with given type and multiplicity.
   **@param primGen  pointer to the CbmPrimaryGenerator
   */
  virtual Bool_t ReadEvent(FairPrimaryGenerator* primGen);

private:
  Int_t fPdgCode;               //! particle PDG code
  Int_t fMult;                  //! particle multiplicity
  TH2D*     fHist;              //! Pointer to the histogram

ClassDef(MpdHistoGenerator,1);
};

#endif
/* 
 * File:   Mpd3fdGenerator.h
 * Author: Sergei Merts
 *
 * Created on June 22, 2015, 2:06 PM
 */

#ifndef MPD3FDGENERATOR_H
#define	MPD3FDGENERATOR_H

#include "FairGenerator.h"
#include "TFile.h"
#include "TChain.h"
#include <fstream>

const UInt_t kBatyukConst = 1e5;

class TVirtualMCStack;
class FairPrimaryGenerator;

class Mpd3fdGenerator : public FairGenerator {
public:

    /** Default constructor without arguments should not be used. **/
    Mpd3fdGenerator();


    /** Standard constructor.
     * @param fileName The input file name
     **/
    Mpd3fdGenerator(TString fileName);


    /** Destructor. **/
    ~Mpd3fdGenerator();

    Bool_t ReadEvent(FairPrimaryGenerator* primGen);

    void SkipEvents(Int_t ev) {
        fEventNumber = ev;
    }

private:

    TFile* fInputFile; //!  Input file
    TString fFileName; //!  Input file name
    TChain *fDstTree; //!
    Double_t fPx[kBatyukConst]; //!
    Double_t fPy[kBatyukConst]; //!
    Double_t fPz[kBatyukConst]; //!
    Double_t fX[kBatyukConst]; //!
    Double_t fY[kBatyukConst]; //!
    Double_t fZ[kBatyukConst]; //!
    Double_t fE[kBatyukConst]; //!
    Int_t fPID[kBatyukConst]; //!
    UInt_t fNpart; //!
    Int_t fEventNumber; //!


    Mpd3fdGenerator(const Mpd3fdGenerator&);
    Mpd3fdGenerator& operator=(const Mpd3fdGenerator&);

    ClassDef(Mpd3fdGenerator, 1);

};

#endif	/* MPD3FDGENERATOR_H */

/* 
 * File:   MpdVHLLEGenerator.h
 * Author: Pavel Batyuk
 *
 * Created on April 27, 2016
 */

#ifndef MPDVHLLEGENERATOR_H
#define MPDVHLLEGENERATOR_H

#include <iostream>
#include "FairGenerator.h"
#include "FairMCEventHeader.h"
#include "FairPrimaryGenerator.h"
#include "TFile.h"
#include "TChain.h"

using namespace std;
using namespace TMath;

const UInt_t dim = 1e5;

class TVirtualMCStack;
class FairPrimaryGenerator;

class MpdVHLLEGenerator : public FairGenerator {
public:

    MpdVHLLEGenerator();
    MpdVHLLEGenerator(TString fileName, Bool_t isCascade);
    ~MpdVHLLEGenerator();

    Bool_t ReadEvent(FairPrimaryGenerator* primGen);

    void SkipEvents(Int_t ev) {
        fEventNumber = ev;
        cout << "NUMBER OF SKIPPED EVENTS = " << ev << endl;
    }

private:
    TFile* fInputFile; //!  Input file
    TString fFileName; //!  Input file name
    TChain* fDstTree; //!
    Float_t fPx[dim]; //!
    Float_t fPy[dim]; //!
    Float_t fPz[dim]; //!
    Float_t fX[dim]; //!
    Float_t fY[dim]; //!
    Float_t fZ[dim]; //!
    Float_t fE[dim]; //!
    Int_t fPID[dim]; //!
    Int_t fNpart; //!
    Int_t fEventNumber; //!
    TString fBranch; //! treefin corresponds to hydro + cascade, treeini -- to hydro calculations only
    
    void SetCascade(Bool_t flag) {
        fBranch = (flag) ? "treefin" : "treeini";
    }

    MpdVHLLEGenerator(const MpdVHLLEGenerator&);
    MpdVHLLEGenerator& operator=(const MpdVHLLEGenerator&);

    ClassDef(MpdVHLLEGenerator, 1);
};
#endif 

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"Mpd3fdGenerator", payloadCode, "@",
"MpdGetNumEvents", payloadCode, "@",
"MpdHistoGenerator", payloadCode, "@",
"MpdHypYPtGenerator", payloadCode, "@",
"MpdLAQGSMGenerator", payloadCode, "@",
"MpdLibZ", payloadCode, "@",
"MpdMCEventHeader", payloadCode, "@",
"MpdPHSDGenerator", payloadCode, "@",
"MpdRainGenerator", payloadCode, "@",
"MpdUrqmdGenerator", payloadCode, "@",
"MpdVHLLEGenerator", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__MpdGenDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__MpdGenDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__MpdGenDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__MpdGenDict() {
  TriggerDictionaryInitialization_G__MpdGenDict_Impl();
}
