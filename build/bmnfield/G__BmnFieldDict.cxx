// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIalexdIbmnroot_devdIbmnrootdIbuilddIbmnfielddIG__BmnFieldDict

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
#include "BmnNewFieldMap.h"
#include "BmnFieldConst.h"
#include "BmnFieldContFact.h"
#include "BmnFieldMap.h"
#include "BmnFieldMapCreator.h"
#include "BmnFieldMapData.h"
#include "BmnFieldMapSym3.h"
#include "BmnFieldPar.h"
#include "BmnFieldCreator.h"
#include "BmnSP41FieldMapCreator.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_BmnFieldMap(void *p = 0);
   static void *newArray_BmnFieldMap(Long_t size, void *p);
   static void delete_BmnFieldMap(void *p);
   static void deleteArray_BmnFieldMap(void *p);
   static void destruct_BmnFieldMap(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnFieldMap*)
   {
      ::BmnFieldMap *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnFieldMap >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnFieldMap", ::BmnFieldMap::Class_Version(), "BmnFieldMap.h", 34,
                  typeid(::BmnFieldMap), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnFieldMap::Dictionary, isa_proxy, 4,
                  sizeof(::BmnFieldMap) );
      instance.SetNew(&new_BmnFieldMap);
      instance.SetNewArray(&newArray_BmnFieldMap);
      instance.SetDelete(&delete_BmnFieldMap);
      instance.SetDeleteArray(&deleteArray_BmnFieldMap);
      instance.SetDestructor(&destruct_BmnFieldMap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnFieldMap*)
   {
      return GenerateInitInstanceLocal((::BmnFieldMap*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnFieldMap*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnNewFieldMap(void *p = 0);
   static void *newArray_BmnNewFieldMap(Long_t size, void *p);
   static void delete_BmnNewFieldMap(void *p);
   static void deleteArray_BmnNewFieldMap(void *p);
   static void destruct_BmnNewFieldMap(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnNewFieldMap*)
   {
      ::BmnNewFieldMap *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnNewFieldMap >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnNewFieldMap", ::BmnNewFieldMap::Class_Version(), "", 26,
                  typeid(::BmnNewFieldMap), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnNewFieldMap::Dictionary, isa_proxy, 4,
                  sizeof(::BmnNewFieldMap) );
      instance.SetNew(&new_BmnNewFieldMap);
      instance.SetNewArray(&newArray_BmnNewFieldMap);
      instance.SetDelete(&delete_BmnNewFieldMap);
      instance.SetDeleteArray(&deleteArray_BmnNewFieldMap);
      instance.SetDestructor(&destruct_BmnNewFieldMap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnNewFieldMap*)
   {
      return GenerateInitInstanceLocal((::BmnNewFieldMap*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnNewFieldMap*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnFieldConst(void *p = 0);
   static void *newArray_BmnFieldConst(Long_t size, void *p);
   static void delete_BmnFieldConst(void *p);
   static void deleteArray_BmnFieldConst(void *p);
   static void destruct_BmnFieldConst(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnFieldConst*)
   {
      ::BmnFieldConst *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnFieldConst >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnFieldConst", ::BmnFieldConst::Class_Version(), "", 84,
                  typeid(::BmnFieldConst), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnFieldConst::Dictionary, isa_proxy, 4,
                  sizeof(::BmnFieldConst) );
      instance.SetNew(&new_BmnFieldConst);
      instance.SetNewArray(&newArray_BmnFieldConst);
      instance.SetDelete(&delete_BmnFieldConst);
      instance.SetDeleteArray(&deleteArray_BmnFieldConst);
      instance.SetDestructor(&destruct_BmnFieldConst);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnFieldConst*)
   {
      return GenerateInitInstanceLocal((::BmnFieldConst*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnFieldConst*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnFieldContFact(void *p = 0);
   static void *newArray_BmnFieldContFact(Long_t size, void *p);
   static void delete_BmnFieldContFact(void *p);
   static void deleteArray_BmnFieldContFact(void *p);
   static void destruct_BmnFieldContFact(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnFieldContFact*)
   {
      ::BmnFieldContFact *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnFieldContFact >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnFieldContFact", ::BmnFieldContFact::Class_Version(), "", 203,
                  typeid(::BmnFieldContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnFieldContFact::Dictionary, isa_proxy, 4,
                  sizeof(::BmnFieldContFact) );
      instance.SetNew(&new_BmnFieldContFact);
      instance.SetNewArray(&newArray_BmnFieldContFact);
      instance.SetDelete(&delete_BmnFieldContFact);
      instance.SetDeleteArray(&deleteArray_BmnFieldContFact);
      instance.SetDestructor(&destruct_BmnFieldContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnFieldContFact*)
   {
      return GenerateInitInstanceLocal((::BmnFieldContFact*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnFieldContFact*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnFieldMapCreator(void *p = 0);
   static void *newArray_BmnFieldMapCreator(Long_t size, void *p);
   static void delete_BmnFieldMapCreator(void *p);
   static void deleteArray_BmnFieldMapCreator(void *p);
   static void destruct_BmnFieldMapCreator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnFieldMapCreator*)
   {
      ::BmnFieldMapCreator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnFieldMapCreator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnFieldMapCreator", ::BmnFieldMapCreator::Class_Version(), "", 500,
                  typeid(::BmnFieldMapCreator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnFieldMapCreator::Dictionary, isa_proxy, 4,
                  sizeof(::BmnFieldMapCreator) );
      instance.SetNew(&new_BmnFieldMapCreator);
      instance.SetNewArray(&newArray_BmnFieldMapCreator);
      instance.SetDelete(&delete_BmnFieldMapCreator);
      instance.SetDeleteArray(&deleteArray_BmnFieldMapCreator);
      instance.SetDestructor(&destruct_BmnFieldMapCreator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnFieldMapCreator*)
   {
      return GenerateInitInstanceLocal((::BmnFieldMapCreator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnFieldMapCreator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnFieldMapData(void *p = 0);
   static void *newArray_BmnFieldMapData(Long_t size, void *p);
   static void delete_BmnFieldMapData(void *p);
   static void deleteArray_BmnFieldMapData(void *p);
   static void destruct_BmnFieldMapData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnFieldMapData*)
   {
      ::BmnFieldMapData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnFieldMapData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnFieldMapData", ::BmnFieldMapData::Class_Version(), "", 612,
                  typeid(::BmnFieldMapData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnFieldMapData::Dictionary, isa_proxy, 4,
                  sizeof(::BmnFieldMapData) );
      instance.SetNew(&new_BmnFieldMapData);
      instance.SetNewArray(&newArray_BmnFieldMapData);
      instance.SetDelete(&delete_BmnFieldMapData);
      instance.SetDeleteArray(&deleteArray_BmnFieldMapData);
      instance.SetDestructor(&destruct_BmnFieldMapData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnFieldMapData*)
   {
      return GenerateInitInstanceLocal((::BmnFieldMapData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnFieldMapData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnFieldMapSym3(void *p = 0);
   static void *newArray_BmnFieldMapSym3(Long_t size, void *p);
   static void delete_BmnFieldMapSym3(void *p);
   static void deleteArray_BmnFieldMapSym3(void *p);
   static void destruct_BmnFieldMapSym3(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnFieldMapSym3*)
   {
      ::BmnFieldMapSym3 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnFieldMapSym3 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnFieldMapSym3", ::BmnFieldMapSym3::Class_Version(), "", 716,
                  typeid(::BmnFieldMapSym3), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnFieldMapSym3::Dictionary, isa_proxy, 4,
                  sizeof(::BmnFieldMapSym3) );
      instance.SetNew(&new_BmnFieldMapSym3);
      instance.SetNewArray(&newArray_BmnFieldMapSym3);
      instance.SetDelete(&delete_BmnFieldMapSym3);
      instance.SetDeleteArray(&deleteArray_BmnFieldMapSym3);
      instance.SetDestructor(&destruct_BmnFieldMapSym3);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnFieldMapSym3*)
   {
      return GenerateInitInstanceLocal((::BmnFieldMapSym3*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnFieldMapSym3*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnFieldPar(void *p = 0);
   static void *newArray_BmnFieldPar(Long_t size, void *p);
   static void delete_BmnFieldPar(void *p);
   static void deleteArray_BmnFieldPar(void *p);
   static void destruct_BmnFieldPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnFieldPar*)
   {
      ::BmnFieldPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnFieldPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnFieldPar", ::BmnFieldPar::Class_Version(), "", 799,
                  typeid(::BmnFieldPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnFieldPar::Dictionary, isa_proxy, 4,
                  sizeof(::BmnFieldPar) );
      instance.SetNew(&new_BmnFieldPar);
      instance.SetNewArray(&newArray_BmnFieldPar);
      instance.SetDelete(&delete_BmnFieldPar);
      instance.SetDeleteArray(&deleteArray_BmnFieldPar);
      instance.SetDestructor(&destruct_BmnFieldPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnFieldPar*)
   {
      return GenerateInitInstanceLocal((::BmnFieldPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnFieldPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnFieldCreator(void *p = 0);
   static void *newArray_BmnFieldCreator(Long_t size, void *p);
   static void delete_BmnFieldCreator(void *p);
   static void deleteArray_BmnFieldCreator(void *p);
   static void destruct_BmnFieldCreator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnFieldCreator*)
   {
      ::BmnFieldCreator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnFieldCreator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnFieldCreator", ::BmnFieldCreator::Class_Version(), "", 916,
                  typeid(::BmnFieldCreator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnFieldCreator::Dictionary, isa_proxy, 4,
                  sizeof(::BmnFieldCreator) );
      instance.SetNew(&new_BmnFieldCreator);
      instance.SetNewArray(&newArray_BmnFieldCreator);
      instance.SetDelete(&delete_BmnFieldCreator);
      instance.SetDeleteArray(&deleteArray_BmnFieldCreator);
      instance.SetDestructor(&destruct_BmnFieldCreator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnFieldCreator*)
   {
      return GenerateInitInstanceLocal((::BmnFieldCreator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnFieldCreator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnSP41FieldMapCreator(void *p = 0);
   static void *newArray_BmnSP41FieldMapCreator(Long_t size, void *p);
   static void delete_BmnSP41FieldMapCreator(void *p);
   static void deleteArray_BmnSP41FieldMapCreator(void *p);
   static void destruct_BmnSP41FieldMapCreator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSP41FieldMapCreator*)
   {
      ::BmnSP41FieldMapCreator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSP41FieldMapCreator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSP41FieldMapCreator", ::BmnSP41FieldMapCreator::Class_Version(), "", 958,
                  typeid(::BmnSP41FieldMapCreator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSP41FieldMapCreator::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSP41FieldMapCreator) );
      instance.SetNew(&new_BmnSP41FieldMapCreator);
      instance.SetNewArray(&newArray_BmnSP41FieldMapCreator);
      instance.SetDelete(&delete_BmnSP41FieldMapCreator);
      instance.SetDeleteArray(&deleteArray_BmnSP41FieldMapCreator);
      instance.SetDestructor(&destruct_BmnSP41FieldMapCreator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSP41FieldMapCreator*)
   {
      return GenerateInitInstanceLocal((::BmnSP41FieldMapCreator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSP41FieldMapCreator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnFieldMap::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnFieldMap::Class_Name()
{
   return "BmnFieldMap";
}

//______________________________________________________________________________
const char *BmnFieldMap::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldMap*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnFieldMap::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldMap*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnFieldMap::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldMap*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnFieldMap::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldMap*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnNewFieldMap::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnNewFieldMap::Class_Name()
{
   return "BmnNewFieldMap";
}

//______________________________________________________________________________
const char *BmnNewFieldMap::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnNewFieldMap*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnNewFieldMap::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnNewFieldMap*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnNewFieldMap::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnNewFieldMap*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnNewFieldMap::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnNewFieldMap*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnFieldConst::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnFieldConst::Class_Name()
{
   return "BmnFieldConst";
}

//______________________________________________________________________________
const char *BmnFieldConst::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldConst*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnFieldConst::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldConst*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnFieldConst::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldConst*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnFieldConst::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldConst*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnFieldContFact::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnFieldContFact::Class_Name()
{
   return "BmnFieldContFact";
}

//______________________________________________________________________________
const char *BmnFieldContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldContFact*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnFieldContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldContFact*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnFieldContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldContFact*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnFieldContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldContFact*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnFieldMapCreator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnFieldMapCreator::Class_Name()
{
   return "BmnFieldMapCreator";
}

//______________________________________________________________________________
const char *BmnFieldMapCreator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldMapCreator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnFieldMapCreator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldMapCreator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnFieldMapCreator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldMapCreator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnFieldMapCreator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldMapCreator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnFieldMapData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnFieldMapData::Class_Name()
{
   return "BmnFieldMapData";
}

//______________________________________________________________________________
const char *BmnFieldMapData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldMapData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnFieldMapData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldMapData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnFieldMapData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldMapData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnFieldMapData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldMapData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnFieldMapSym3::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnFieldMapSym3::Class_Name()
{
   return "BmnFieldMapSym3";
}

//______________________________________________________________________________
const char *BmnFieldMapSym3::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldMapSym3*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnFieldMapSym3::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldMapSym3*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnFieldMapSym3::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldMapSym3*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnFieldMapSym3::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldMapSym3*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnFieldPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnFieldPar::Class_Name()
{
   return "BmnFieldPar";
}

//______________________________________________________________________________
const char *BmnFieldPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnFieldPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnFieldPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnFieldPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnFieldCreator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnFieldCreator::Class_Name()
{
   return "BmnFieldCreator";
}

//______________________________________________________________________________
const char *BmnFieldCreator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldCreator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnFieldCreator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldCreator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnFieldCreator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldCreator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnFieldCreator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnFieldCreator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnSP41FieldMapCreator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSP41FieldMapCreator::Class_Name()
{
   return "BmnSP41FieldMapCreator";
}

//______________________________________________________________________________
const char *BmnSP41FieldMapCreator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSP41FieldMapCreator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSP41FieldMapCreator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSP41FieldMapCreator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSP41FieldMapCreator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSP41FieldMapCreator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSP41FieldMapCreator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSP41FieldMapCreator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnFieldMap::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnFieldMap.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnFieldMap::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnFieldMap::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnFieldMap(void *p) {
      return  p ? new(p) ::BmnFieldMap : new ::BmnFieldMap;
   }
   static void *newArray_BmnFieldMap(Long_t nElements, void *p) {
      return p ? new(p) ::BmnFieldMap[nElements] : new ::BmnFieldMap[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnFieldMap(void *p) {
      delete ((::BmnFieldMap*)p);
   }
   static void deleteArray_BmnFieldMap(void *p) {
      delete [] ((::BmnFieldMap*)p);
   }
   static void destruct_BmnFieldMap(void *p) {
      typedef ::BmnFieldMap current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnFieldMap

//______________________________________________________________________________
void BmnNewFieldMap::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnNewFieldMap.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnNewFieldMap::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnNewFieldMap::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnNewFieldMap(void *p) {
      return  p ? new(p) ::BmnNewFieldMap : new ::BmnNewFieldMap;
   }
   static void *newArray_BmnNewFieldMap(Long_t nElements, void *p) {
      return p ? new(p) ::BmnNewFieldMap[nElements] : new ::BmnNewFieldMap[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnNewFieldMap(void *p) {
      delete ((::BmnNewFieldMap*)p);
   }
   static void deleteArray_BmnNewFieldMap(void *p) {
      delete [] ((::BmnNewFieldMap*)p);
   }
   static void destruct_BmnNewFieldMap(void *p) {
      typedef ::BmnNewFieldMap current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnNewFieldMap

//______________________________________________________________________________
void BmnFieldConst::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnFieldConst.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnFieldConst::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnFieldConst::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnFieldConst(void *p) {
      return  p ? new(p) ::BmnFieldConst : new ::BmnFieldConst;
   }
   static void *newArray_BmnFieldConst(Long_t nElements, void *p) {
      return p ? new(p) ::BmnFieldConst[nElements] : new ::BmnFieldConst[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnFieldConst(void *p) {
      delete ((::BmnFieldConst*)p);
   }
   static void deleteArray_BmnFieldConst(void *p) {
      delete [] ((::BmnFieldConst*)p);
   }
   static void destruct_BmnFieldConst(void *p) {
      typedef ::BmnFieldConst current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnFieldConst

//______________________________________________________________________________
void BmnFieldContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnFieldContFact.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnFieldContFact::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnFieldContFact::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnFieldContFact(void *p) {
      return  p ? new(p) ::BmnFieldContFact : new ::BmnFieldContFact;
   }
   static void *newArray_BmnFieldContFact(Long_t nElements, void *p) {
      return p ? new(p) ::BmnFieldContFact[nElements] : new ::BmnFieldContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnFieldContFact(void *p) {
      delete ((::BmnFieldContFact*)p);
   }
   static void deleteArray_BmnFieldContFact(void *p) {
      delete [] ((::BmnFieldContFact*)p);
   }
   static void destruct_BmnFieldContFact(void *p) {
      typedef ::BmnFieldContFact current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnFieldContFact

//______________________________________________________________________________
void BmnFieldMapCreator::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnFieldMapCreator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnFieldMapCreator::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnFieldMapCreator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnFieldMapCreator(void *p) {
      return  p ? new(p) ::BmnFieldMapCreator : new ::BmnFieldMapCreator;
   }
   static void *newArray_BmnFieldMapCreator(Long_t nElements, void *p) {
      return p ? new(p) ::BmnFieldMapCreator[nElements] : new ::BmnFieldMapCreator[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnFieldMapCreator(void *p) {
      delete ((::BmnFieldMapCreator*)p);
   }
   static void deleteArray_BmnFieldMapCreator(void *p) {
      delete [] ((::BmnFieldMapCreator*)p);
   }
   static void destruct_BmnFieldMapCreator(void *p) {
      typedef ::BmnFieldMapCreator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnFieldMapCreator

//______________________________________________________________________________
void BmnFieldMapData::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnFieldMapData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnFieldMapData::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnFieldMapData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnFieldMapData(void *p) {
      return  p ? new(p) ::BmnFieldMapData : new ::BmnFieldMapData;
   }
   static void *newArray_BmnFieldMapData(Long_t nElements, void *p) {
      return p ? new(p) ::BmnFieldMapData[nElements] : new ::BmnFieldMapData[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnFieldMapData(void *p) {
      delete ((::BmnFieldMapData*)p);
   }
   static void deleteArray_BmnFieldMapData(void *p) {
      delete [] ((::BmnFieldMapData*)p);
   }
   static void destruct_BmnFieldMapData(void *p) {
      typedef ::BmnFieldMapData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnFieldMapData

//______________________________________________________________________________
void BmnFieldMapSym3::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnFieldMapSym3.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnFieldMapSym3::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnFieldMapSym3::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnFieldMapSym3(void *p) {
      return  p ? new(p) ::BmnFieldMapSym3 : new ::BmnFieldMapSym3;
   }
   static void *newArray_BmnFieldMapSym3(Long_t nElements, void *p) {
      return p ? new(p) ::BmnFieldMapSym3[nElements] : new ::BmnFieldMapSym3[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnFieldMapSym3(void *p) {
      delete ((::BmnFieldMapSym3*)p);
   }
   static void deleteArray_BmnFieldMapSym3(void *p) {
      delete [] ((::BmnFieldMapSym3*)p);
   }
   static void destruct_BmnFieldMapSym3(void *p) {
      typedef ::BmnFieldMapSym3 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnFieldMapSym3

//______________________________________________________________________________
void BmnFieldPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnFieldPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnFieldPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnFieldPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnFieldPar(void *p) {
      return  p ? new(p) ::BmnFieldPar : new ::BmnFieldPar;
   }
   static void *newArray_BmnFieldPar(Long_t nElements, void *p) {
      return p ? new(p) ::BmnFieldPar[nElements] : new ::BmnFieldPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnFieldPar(void *p) {
      delete ((::BmnFieldPar*)p);
   }
   static void deleteArray_BmnFieldPar(void *p) {
      delete [] ((::BmnFieldPar*)p);
   }
   static void destruct_BmnFieldPar(void *p) {
      typedef ::BmnFieldPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnFieldPar

//______________________________________________________________________________
void BmnFieldCreator::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnFieldCreator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnFieldCreator::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnFieldCreator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnFieldCreator(void *p) {
      return  p ? new(p) ::BmnFieldCreator : new ::BmnFieldCreator;
   }
   static void *newArray_BmnFieldCreator(Long_t nElements, void *p) {
      return p ? new(p) ::BmnFieldCreator[nElements] : new ::BmnFieldCreator[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnFieldCreator(void *p) {
      delete ((::BmnFieldCreator*)p);
   }
   static void deleteArray_BmnFieldCreator(void *p) {
      delete [] ((::BmnFieldCreator*)p);
   }
   static void destruct_BmnFieldCreator(void *p) {
      typedef ::BmnFieldCreator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnFieldCreator

//______________________________________________________________________________
void BmnSP41FieldMapCreator::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSP41FieldMapCreator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSP41FieldMapCreator::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSP41FieldMapCreator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSP41FieldMapCreator(void *p) {
      return  p ? new(p) ::BmnSP41FieldMapCreator : new ::BmnSP41FieldMapCreator;
   }
   static void *newArray_BmnSP41FieldMapCreator(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSP41FieldMapCreator[nElements] : new ::BmnSP41FieldMapCreator[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSP41FieldMapCreator(void *p) {
      delete ((::BmnSP41FieldMapCreator*)p);
   }
   static void deleteArray_BmnSP41FieldMapCreator(void *p) {
      delete [] ((::BmnSP41FieldMapCreator*)p);
   }
   static void destruct_BmnSP41FieldMapCreator(void *p) {
      typedef ::BmnSP41FieldMapCreator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSP41FieldMapCreator

namespace {
  void TriggerDictionaryInitialization_G__BmnFieldDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/opt/fairroot/install/include",
"/home/alex/bmnroot_dev/bmnroot/bmnfield",
"/opt/fairsoft/install/include/root",
"/opt/fairsoft/install/include/root",
"/home/alex/bmnroot_dev/bmnroot/build/bmnfield/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__BmnFieldDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$BmnFieldMap.h")))  BmnFieldMap;
class BmnNewFieldMap;
class BmnFieldConst;
class BmnFieldContFact;
class BmnFieldMapCreator;
class BmnFieldMapData;
class BmnFieldMapSym3;
class BmnFieldPar;
class BmnFieldCreator;
class BmnSP41FieldMapCreator;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__BmnFieldDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// -------------------------------------------------------------------------
// -----                    BmnNewFieldMap header file                 -----
// -----                   Created 03/02/2015  by P. Batyuk            -----
// -----                        JINR, batyuk@jinr.ru                   -----
// -------------------------------------------------------------------------


/** 
 * Field Map used does not have any symmetries w.r.t coordinate axises
 **/


#ifndef BMNNEWFIELDMAP_H
#define BMNNEWFIELDMAP_H 1

#include "BmnFieldMap.h"
#include "TArrayF.h"

class BmnFieldPar;

class BmnNewFieldMap : public BmnFieldMap {
public:

    BmnNewFieldMap();
    BmnNewFieldMap(const char* mapName);
    BmnNewFieldMap(BmnFieldPar* fieldPar);

    virtual ~BmnNewFieldMap();

    Double_t GetBx(Double_t x, Double_t y, Double_t z);
    Double_t GetBy(Double_t x, Double_t y, Double_t z);
    Double_t GetBz(Double_t x, Double_t y, Double_t z);

    Bool_t IsInside(Double_t x, Double_t y, Double_t z,
            Int_t& ix, Int_t& iy, Int_t& iz,
            Double_t& dx, Double_t& dy, Double_t& dz);

    void FillParContainer() {
    };

protected:

    Double_t FieldInterpolate(TArrayF* fcomp, Double_t x, Double_t y, Double_t z);

    ClassDef(BmnNewFieldMap, 1)

};


#endif
// -------------------------------------------------------------------------
// -----                    BmnFieldConst header file                  -----
// -----                Created 12/01/04  by M. Al-Turany              -----
// -----                Redesign 13/02/06  by V. Friese                -----
// -------------------------------------------------------------------------


/** BmnFieldConst.h
 ** @author M.Al-Turany <m.al/turany@gsi.de>
 ** @author V.Friese <v.friese@gsi.de>
 ** @since 12.01.2004
 ** @version1.0
 **
 ** A constant (homogeneous) magnetic field
 **/


#ifndef CBMFIELDCONST_H
#define CBMFIELDCONST_H 1


#include "FairField.h"


class BmnFieldPar;


class BmnFieldConst : public FairField
{

 public:    

  /** Default constructor **/
  BmnFieldConst();


  /** Standard constructor 
   ** @param name   Object name
   ** @param xMin,xMax   x region of field (global coordinates)
   ** @param yMin,yMax   y region of field (global coordinates)
   ** @param zMin,zMax   z region of field (global coordinates)
   ** @param bX,bY,bZ    Field values [kG]
   **/
  BmnFieldConst(const char* name, Double_t xMin, Double_t xMax,
		Double_t yMin, Double_t yMax, Double_t zMin,
		Double_t zMax, Double_t bX, Double_t bY, Double_t bZ);


  /** Constructor from BmnFieldPar **/
  BmnFieldConst(BmnFieldPar* fieldPar);


  /** Destructor **/
  virtual ~BmnFieldConst();


  /** Set the field region
   ** @param xMin,xMax   x region of field (global coordinates)
   ** @param yMin,yMax   y region of field (global coordinates)
   ** @param zMin,zMax   z region of field (global coordinates)
   **/
  void SetFieldRegion(Double_t xMin, Double_t xMax, Double_t yMin, 
		      Double_t yMax, Double_t zMin, Double_t zMax);


  /** Set the field values
   ** @param bX,bY,bZ    Field values [kG]
   **/
  void SetField(Double_t bX, Double_t bY, Double_t bZ);
  

  /** Get components of field at a given point 
   ** @param x,y,z   Point coordinates [cm]
   **/
  virtual Double_t GetBx(Double_t x, Double_t y, Double_t z);
  virtual Double_t GetBy(Double_t x, Double_t y, Double_t z);
  virtual Double_t GetBz(Double_t x, Double_t y, Double_t z);


  /** Accessors to field region **/
  Double_t GetXmin() const { return fXmin; }
  Double_t GetXmax() const { return fXmax; }
  Double_t GetYmin() const { return fYmin; }
  Double_t GetYmax() const { return fYmax; }
  Double_t GetZmin() const { return fZmin; }
  Double_t GetZmax() const { return fZmax; }


  /** Accessors to field values **/
  Double_t GetBx() const { return fBx; }
  Double_t GetBy() const { return fBy; }
  Double_t GetBz() const { return fBz; }


  /** Screen output **/
  virtual void Print();


 private:

  /** Limits of the field region **/
  Double_t fXmin;   
  Double_t fXmax;
  Double_t fYmin;
  Double_t fYmax;
  Double_t fZmin;
  Double_t fZmax;
  
  /** Field components inside the field region **/
  Double_t fBx;
  Double_t fBy;
  Double_t fBz;

  ClassDef(BmnFieldConst, 1);

};


#endif
// -------------------------------------------------------------------------
// -----                    BmnFieldContFact header file               -----
// -----                   Created 20/02/06  by V. Friese              -----
// -------------------------------------------------------------------------


/** BmnFieldContFact.h
 ** @author V.Friese <v.friese@gsi.de>
 ** @since 20.02.2006
 ** @version 1.0
 **
 ** Parameter container factory for field parameter container
 **/


#ifndef CBMFIELDCONTFACT_H
#define CBMFIELDCONTFACT_H 1


#include "FairContFact.h"


class FairContainer;
class FairParSet;


class BmnFieldContFact : public FairContFact
{

 public:

  /** Constructor **/
  BmnFieldContFact();


  /** Destructor **/
  ~BmnFieldContFact();


  /** Create containers
   ** Creates the requested parameter sets (BmnFieldPar) 
   **/
  FairParSet* createContainer(FairContainer* container);


 private:

  /** Set all containers  
   ** Creates container objects with all accepted contexts and adds them
   ** to the list of containers for the field library. 
   **/
  void SetAllContainers();


  ClassDef(BmnFieldContFact,1);

};

#endif
// ---------------------------------------------------------------------------------
// -----                    BmnFieldMap header file                    -------- ----
// -----                   Created 03/02/2015  by P. Batyuk            -------------
// ----- Modified 28/07/2016  by A. Zelenov   (Summer student practice - 2017)------
// -----                        JINR, batyuk@jinr.ru                   -------------
// ---------------------------------------------------------------------------------
#ifndef BMNFIELDMAP_H
#define BMNFIELDMAP_H 1

#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <string.h>
#include "FairField.h"
#include "TVector3.h"

class TArrayF;
class BmnFieldMapCreator;
class BmnFieldMapData;
class BmnFieldPar;
// class BmnNewFieldMap;


using namespace std;

typedef struct {
    Int_t N;
    Float_t min;
    Float_t max;
    Float_t step;
} coordinate_info_t;

class BmnFieldMap : public FairField {
public:

    BmnFieldMap();
    BmnFieldMap(const char* mapName);
    BmnFieldMap(BmnFieldPar* fieldPar);
    BmnFieldMap(BmnFieldMapCreator* creator);

    virtual ~BmnFieldMap();

    virtual void Init();

    virtual Double_t GetBx(Double_t x, Double_t y, Double_t z) {
        cout << "X, to be implemented in BmnNewFieldMap";
        return 0.;
    }

    virtual Double_t GetBy(Double_t x, Double_t y, Double_t z) {
        cout << "Y, to be implemented in BmnNewFieldMap";
        return 0.;
    }

    virtual Double_t GetBz(Double_t x, Double_t y, Double_t z) {
        cout << "Z, to be implemented in BmnNewFieldMap";
        return 0.;
    }

    virtual Bool_t IsInside(Double_t x, Double_t y, Double_t z,
            Int_t& ix, Int_t& iy, Int_t& iz,
            Double_t& dx, Double_t& dy, Double_t& dz) {
        cout << "XYZ, To be implemented in BmnNewFieldMap";
        return 0.;
    };


    /** Write the field map to an ASCII file **/
    void WriteAsciiFile(const char* fileName);

    /** Write field map data to a ROOT file **/
    void WriteRootFile(const char* fileName, const char* mapName);

    /** Set the position of the field centre **/
    void SetPosition(Double_t x, Double_t y, Double_t z);

    /** Set a global field scaling factor **/
    void SetScale(Double_t factor) {
        fScale = factor;
    }

    /** Accessors to field parameters in local coordinate system **/
    Double_t GetXmin() const {
        return fXmin;
    }

    Double_t GetYmin() const {
        return fYmin;
    }

    Double_t GetZmin() const {
        return fZmin;
    }

    Double_t GetXmax() const {
        return fXmax;
    }

    Double_t GetYmax() const {
        return fYmax;
    }

    Double_t GetZmax() const {
        return fZmax;
    }

    Double_t GetXstep() const {
        return fXstep;
    }

    Double_t GetYstep() const {
        return fYstep;
    }

    Double_t GetZstep() const {
        return fZstep;
    }

    Int_t GetNx() const {
        return fNx;
    }

    Int_t GetNy() const {
        return fNy;
    }

    Int_t GetNz() const {
        return fNz;
    }

    /** Accessor to field centre position in global system **/
    Double_t GetPositionX() const {
        return fPosX;
    }

    Double_t GetPositionY() const {
        return fPosY;
    }

    Double_t GetPositionZ() const {
        return fPosZ;
    }

    /** Accessor to global scaling factor  **/
    Double_t GetScale() const {
        return fScale;
    }

    /** Accessors to the field value arrays **/
    TArrayF* GetBx() const {
        return fBx;
    }

    TArrayF* GetBy() const {
        return fBy;
    }

    TArrayF* GetBz() const {
        return fBz;
    }

    /** Accessor to field map file **/
    const char* GetFileName() {
        return fFileName.Data();
    }

    /** Screen output **/
    void Print();

    virtual void FillParContainer() {
        cout << "To be implemented in BmnNewFieldMap";
    }


protected:

    /** Reset the field parameters and data **/
    void Reset();

    /** Read the field map from an ASCII file **/
    void ReadAsciiFile(const char* fileName);

    /** Read field map from a ROOT file **/
    void ReadRootFile(const char* fileName);

    /** Set field parameters and data **/
    void SetField(const BmnFieldMapData* data);

    /** Get field values by interpolation of the grid.
     ** @param dx,dy,dz  Relative distance from grid point [cell units]
     **/
    Double_t Interpolate(Double_t dx, Double_t dy, Double_t dz);

    /** Map file name **/
    TString fFileName;

    /** Global scaling factor (w.r.t. map on file) **/
    Double_t fScale;

    /** Field centre position in global coordinates  **/
    Double_t fPosX, fPosY, fPosZ;

    /** Field limits in local coordinate system **/
    Double_t fXmin, fXmax, fXstep;
    Double_t fYmin, fYmax, fYstep;
    Double_t fZmin, fZmax, fZstep;

    /** Number of grid points  **/
    Int_t fNx, fNy, fNz;

    /** Arrays with the field values  **/
    TArrayF* fBx;
    TArrayF* fBy;
    TArrayF* fBz;

    /** Variables for temporary storage 
     ** Used in the very frequently called method GetFieldValue  **/
    Double_t fHa[2][2][2]; //! Field at corners of a grid cell
    Double_t fHb[2][2]; //! Interpolated field (2-dim)
    Double_t fHc[2]; //! Interpolated field (1-dim)

    Bool_t fDebugInfo;

private:

    BmnFieldMap(const BmnFieldMap&);
    BmnFieldMap& operator=(const BmnFieldMap&);

    ClassDef(BmnFieldMap, 1)

};


#endif
// -------------------------------------------------------------------------
// -----                   BmnFieldMapCreator header file              -----
// -----                Created 15/01/08       by V. Friese            -----
// -------------------------------------------------------------------------



/** BmnFieldMapCreator.h
 **@author V.Friese <v.friese@gsi.de>
 **@since 15.01.2008
 **@version1.0
 **
 ** Auxiliary class to create a field map out of other magnetic fields
 ** of type BmnField.
 **/


#ifndef CBMFIELDMAPCREATOR_H
#define CBMFIELDMAPCREATOR_H 1

#include "TList.h"

class TArrayF;
class FairField;



class BmnFieldMapCreator 
{


 public:

  /** Default constructor **/
  BmnFieldMapCreator();


  /** Standard constructor 
   **@param mapName  Name of field map. Defines also the output file name.**/
  BmnFieldMapCreator(const char* mapName);


  /** Destructor **/
  virtual ~BmnFieldMapCreator();


  /** Set parameters 
   **@param nx,ny,nz   Number of grid cells in x,y,z
   **@param xmin,xmax  Extension in x coordinate
   **@param ymin,ymax  Extension in y coordinate
   **@param zmin,zmax  Extension in z coordinate
   **/
  void SetGridParameters(Int_t nx, Double_t xmin, Double_t xmax,
			 Int_t ny, Double_t ymin, Double_t ymax,
			 Int_t nz, Double_t zmin, Double_t zmax);


  /** Add an input field **/
  void AddField(FairField* field) { fFieldList.Add(field); }


  /** Create the field map 
   ** By default, the output file name is defined by the map name plus
   ** the extension .root. Other file names can be choosen.
   **@param fileName   Name of output file
   **@value  Success of map creation
   **/
  Bool_t CreateMap(const char* fileName = "");


  /** Accessors **/
  TString  GetMapName() const { return fMapName; }
  Int_t    GetNx()      const { return fNx; }
  Int_t    GetNy()      const { return fNy; }
  Int_t    GetNz()      const { return fNz; }
  Double_t GetXmin()    const { return fXmin; }
  Double_t GetXmax()    const { return fXmax; }
  Double_t GetYmin()    const { return fYmin; }
  Double_t GetYmax()    const { return fYmax; }
  Double_t GetZmin()    const { return fZmin; }
  Double_t GetZmax()    const { return fZmax; }
  TArrayF* GetBx()      const { return fBx; }
  TArrayF* GetBy()      const { return fBy; }
  TArrayF* GetBz()      const { return fBz; }


 private:

  TString  fMapName;        // Name of field map to be created
  Int_t    fNx, fNy, fNz;   // Number of grid points in each dimension
  Double_t fXmin, fXmax;    // Field limits in x
  Double_t fYmin, fYmax;    // Field limits in y
  Double_t fZmin, fZmax;    // Field limits in z
  TArrayF* fBx;             // Array of Bx values;
  TArrayF* fBy;             // Array of By values;
  TArrayF* fBz;             // Array of Bz values;
  TList    fFieldList;      // List of input fields;
  Bool_t   fInit;           // Flag whether map is initialised

  BmnFieldMapCreator(const BmnFieldMapCreator&);
  BmnFieldMapCreator& operator=(const BmnFieldMapCreator&);

  ClassDef(BmnFieldMapCreator,1);

};

#endif
// -------------------------------------------------------------------------
// -----                    BmnFieldMapData header file                -----
// -----                V. Friese                 13/02/06             -----
// -------------------------------------------------------------------------


/** BmnFieldMapData.h
 ** @author V.Friese <v.friese@gsi.de>
 ** @since 14.02.2006
 ** @version1.0
 **
 ** This class holds the real data arrays of a magnetic field map,
 ** which are read from / written to file. Nota bene: Field values
 ** are in Tesla, in contrast to BmnFieldMap, whcih holds the
 ** field in kG.
 **/


#ifndef CBMMAGFIELDMAPDATA_H
#define CBMMAGFIELDMAPDATA_H


#include "TNamed.h"


class TArrayF;

class BmnFieldMap;



class BmnFieldMapData : public TNamed {

public:


  /** Default constructor **/
  BmnFieldMapData();


  /** Standard constructor **/
  BmnFieldMapData(const char* name);


  /** Constructor from an existing BmnFieldMap **/
  BmnFieldMapData(const char* name, const BmnFieldMap& map);
  

  /** Destructor **/
  virtual ~BmnFieldMapData();


  /** Accessors to field parameters in local coordinate system **/
  Int_t    GetType()  const { return fType; }
  Double_t GetXmin()  const { return fXmin; } 
  Double_t GetYmin()  const { return fYmin; }
  Double_t GetZmin()  const { return fZmin; }
  Double_t GetXmax()  const { return fXmax; }  
  Double_t GetYmax()  const { return fYmax; }
  Double_t GetZmax()  const { return fZmax; }
  Int_t    GetNx()    const { return fNx; }
  Int_t    GetNy()    const { return fNy; }
  Int_t    GetNz()    const { return fNz; }


  /** Accessors to the field value arrays **/
  TArrayF* GetBx() const { return fBx; }
  TArrayF* GetBy() const { return fBy; }
  TArrayF* GetBz() const { return fBz; }

	
	
 private:

  /** Type of map. 1 = BmnFieldMap, 2 = Sym2, 3 = Sym3 **/
  Int_t fType;

  /** Field limits in local coordinate system **/
  Double_t fXmin, fXmax;
  Double_t fYmin, fYmax;
  Double_t fZmin, fZmax;


  /** Number of grid points  **/
  Int_t fNx, fNy, fNz;


  /** Arrays with the field values in T **/
  TArrayF* fBx;
  TArrayF* fBy;
  TArrayF* fBz;

  BmnFieldMapData(const BmnFieldMapData&);
  BmnFieldMapData& operator=(const BmnFieldMapData&);

  ClassDef(BmnFieldMapData,1) 

};


#endif
// -------------------------------------------------------------------------
// -----                    BmnFieldMapSym3 header file                -----
// -----          Created 12/01/04  by M. Al/Turany (BmnField.h)       -----
// -----                Redesign 20/02/06  by V. Friese                -----
// -------------------------------------------------------------------------


/** BmnFieldMapSym3.h
 ** @author M.Al/Turany <m.al-turany@gsi.de>
 ** @author V.Friese <v.friese@gsi.de>
 ** @since 12.01.2004
 ** @version1.0
 **
 ** Magnetic field map on a 3-D grid with symmetries w.r.t. the three
 ** coordinate axes. The map is only stored in the octant x>0, y>0, z>0.
 ** The symmetries are:
 ** - Bx is antisymmetric in x and symmetric in y and z
 ** - By is symmetric in x, y and z
 ** - Bz is antisymmetric in x and z and symmetric in y
 **
 ** Field values are hold and returned in kG.
 **/


#ifndef BMNMAGFIELDMAPSYM3_H
#define BMNMAGFIELDMAPSYM3_H 1


#include "BmnFieldMap.h"


class BmnFieldPar;

class BmnFieldMapSym3 : public BmnFieldMap {


public:


  /** Default constructor **/
  BmnFieldMapSym3();


  /** Standard constructor
   ** @param name       Name of field map
   ** @param fileType   R = ROOT file, A = ASCII
   **/
  BmnFieldMapSym3(const char* mapName);


  /** Constructor from BmnFieldPar  **/
  BmnFieldMapSym3(BmnFieldPar* fieldPar);


  /** Destructor **/
  virtual ~BmnFieldMapSym3();


  /** Get the field components at a certain point 
   ** @param x,y,z     Point coordinates (global) [cm]
   ** @value Bx,By,Bz  Field components [kG]
   **/
  virtual Double_t GetBx(Double_t x, Double_t y, Double_t z);
  virtual Double_t GetBy(Double_t x, Double_t y, Double_t z);
  virtual Double_t GetBz(Double_t x, Double_t y, Double_t z);


  /** Determine whether a point is inside the field map
   ** @param x,y,z              Point coordinates (global) [cm]
   ** @param ix,iy,iz (return)  Grid cell
   ** @param dx,dy,dz (return)  Distance from grid point [cm] if inside
   ** @value kTRUE if inside map, else kFALSE
   **/
  virtual Bool_t IsInside(Double_t x, Double_t y, Double_t z,
			  Int_t& ix, Int_t& iy, Int_t& iz,
			  Double_t& dx, Double_t& dy, Double_t& dz);

protected:

  /** Hemispheres of a point (for temporary use)  **/
  Double_t fHemiX, fHemiY, fHemiZ;   //!


  ClassDef(BmnFieldMapSym3,1) 

};


#endif
// -------------------------------------------------------------------------
// -----                      BmnFieldPar header file                  -----
// -----                   Created 20/02/06  by V. Friese              -----
// -------------------------------------------------------------------------


/** BmnFieldPar.h
 ** @author V.Friese <v.friese@gsi.de>
 ** @since 20.02.2006
 ** @version 1.0
 **
 ** Parameter set for the CBM magnetic field. For the runtime database.
 **/


#ifndef CBMFIELDPAR_H
#define CBMFIELDPAR_H 1

#include "FairParGenericSet.h"

class FairField;
class FairParamList;

const int kMaxFieldMapType = 5;        
const int kTypeDistorted = 4;        

class BmnFieldPar : public FairParGenericSet
{

 public:

  
  /** Standard constructor  **/
  BmnFieldPar(const char* name, const char* title, const char* context);

/** default constructor  **/
  BmnFieldPar();
  
  /** Destructor **/
  ~BmnFieldPar();


  /** Put parameters **/
  virtual void putParams(FairParamList* list);


  /** Get parameters **/
  virtual Bool_t getParams(FairParamList* list);


  /** Set parameters from BmnField  **/
  void SetParameters(FairField* field);


  /** Accessors **/
  Int_t    GetType()      const { return fType; }
  Double_t GetXmin()      const { return fXmin; }
  Double_t GetXmax()      const { return fXmax; }
  Double_t GetYmin()      const { return fYmin; }
  Double_t GetYmax()      const { return fYmax; }
  Double_t GetZmin()      const { return fZmin; }
  Double_t GetZmax()      const { return fZmax; }
  Double_t GetBx()        const { return fBx; }
  Double_t GetBy()        const { return fBy; }
  Double_t GetBz()        const { return fBz; }
  void MapName(TString& name) { name = fMapName; }
  Double_t GetPositionX() const { return fPosX; }
  Double_t GetPositionY() const { return fPosY; }
  Double_t GetPositionZ() const { return fPosZ; }
  Double_t GetScale()     const { return fScale; }

  void     GetDistortionFilename(TString& filename) { filename = fDistortionFilename; }
  void     GetParentName(TString& parentname) { parentname = fParentName; }
  Int_t    GetTypeOfParent()      const { return fTypeOfParent; }

 private:

  /** Field type
   ** 0 = constant field
   ** 1 = field map
   ** 2 = field map sym2 (symmetries in x and y)
   ** 3 = field map sym3 (symmetries in x, y and z)
   ** kTypeDistorted = distorted field map (its parent field can be field map or constant field)
   **/
  Int_t fType;


  /** Field limits in case of constant field **/
  Double_t fXmin, fXmax;
  Double_t fYmin, fYmax;
  Double_t fZmin, fZmax;


  /** Field values in case of constant field [kG] **/
  Double_t fBx, fBy, fBz;


  /** Field map name in case of field map **/
  TString fMapName;


  /** Field centre position for field map **/
  Double_t fPosX, fPosY, fPosZ;


  /** Scaling factor for field map **/
  Double_t fScale;

  /** Field map distortion filename (in case of distorted field map) **/
  TString fDistortionFilename;

  /** Field name of parent field (in case of distorted field map) **/
  TString fParentName;

  /** Field type of parent field (in case of distorted field map) **/
  Int_t fTypeOfParent;


  BmnFieldPar(const BmnFieldPar&);
  BmnFieldPar& operator=(const BmnFieldPar&);

  ClassDef(BmnFieldPar,1);

};


#endif
// -------------------------------------------------------------------------
// -----                    BmnFieldCreator header file                  -----
// -----                Created 15/01/07  by M. Al-Turany              -----
// -------------------------------------------------------------------------


#ifndef CBMFIELDCREATOR_H
#define CBMFIELDCREATOR_H

#include "FairFieldFactory.h"

class BmnFieldPar;

class FairField;

class BmnFieldCreator : public FairFieldFactory 
{

 public:
  BmnFieldCreator();
  virtual ~BmnFieldCreator();
  virtual FairField* createFairField();
  virtual void SetParm();
  ClassDef(BmnFieldCreator,1);
  
 protected:
  BmnFieldPar* fFieldPar;
  
 private:
  BmnFieldCreator(const BmnFieldCreator&);
  BmnFieldCreator& operator=(const BmnFieldCreator&);

};
#endif //CBMFIELDCREATOR_H
#ifndef BMNSP41FIELDMAPCREATOR_H
#define BMNSP41FIELDMAPCREATOR_H 1

#include <TCanvas.h>
#include <TPad.h>
#include <TFile.h>
#include <TAxis.h>
#include <TMath.h>
#include <TNamed.h>
#include <TF1.h>
#include <TGraph.h>
#include <TGraph2D.h>
#include <TVector3.h>
#include <TFitResult.h>
#include <TFitResultPtr.h>
#include <TString.h>
#include "BmnFieldMap.h"
#include "BmnNewFieldMap.h"

using namespace std;
using namespace TMath;

class BmnSP41FieldMapCreator : public TNamed {
public:

    BmnSP41FieldMapCreator() {
    };
    BmnSP41FieldMapCreator(TString);
    virtual ~BmnSP41FieldMapCreator();

    void AnalyzeFieldProfiles(Int_t, Int_t);
    void CreateNewMap(TString name = "");

    void SetOutParamFileName(TString name) {
        fParamFileName = name;
    }
    
    void SetDrawProfiles(Bool_t flag) {
        isDrawProfile = flag;
    }
    
    void SetDebug(Bool_t flag) {
        fDebug = flag;
    }
    
    void SetNodeNumber(Int_t nNodes) {
        dimGrid = nNodes;
    }

private:
    TString nameOutput;
    
    Bool_t isDrawProfile;
    Bool_t fDebug;

    Double_t Zmax; // Upper Z-limit of the used extrapolation
    Double_t Zmin; // Lower Z-limit of the used extrapolation

    Double_t Zmin_RIGHT; // Lower Z-limit to find extrapolation functions 
    Double_t Zmax_RIGHT; // Upper Z-limit to find extrapolation functions 

    Double_t Zmin_LEFT; // Lower Z-limit to find extrapolation functions 
    Double_t Zmax_LEFT; // Upper Z-limit to find extrapolation functions 

    Int_t Npoints; // Number of nodes along Z-axis
    Int_t dimGrid; // dimGrid x dimGrid corresponds to number of nodes to build a grid along X(Y)-axis 
    Int_t dimNhist; // dimNhist corresponds to number of profiles drawn

    Double_t const_restrict; // ??? DO WE NEED IT?
    Double_t factor; // Transition from T to kG
    Double_t WinXmin;
    Double_t WinXmax;
    Double_t WinYmin;
    Double_t WinYmax;
    Double_t winXstep;
    Double_t winYstep;

    Int_t nComponents;
    Int_t nParts;

    TGraph2D*** constant;
    TGraph2D*** mean;
    TGraph2D*** sigma;

    BmnFieldMap* fMap;

    TString fParamFileName;

    void DrawProfileExtrap(Int_t, TGraph***, TF1***, TString, TString, Double_t, Double_t, Double_t, Double_t);
    Double_t FieldExtrapolate(Double_t, Double_t, Double_t, TGraph2D*, TGraph2D*, TGraph2D*);
    void Print(BmnFieldMap*);
   
    ClassDef(BmnSP41FieldMapCreator, 1)
};

#endif
#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"BmnFieldConst", payloadCode, "@",
"BmnFieldContFact", payloadCode, "@",
"BmnFieldCreator", payloadCode, "@",
"BmnFieldMap", payloadCode, "@",
"BmnFieldMapCreator", payloadCode, "@",
"BmnFieldMapData", payloadCode, "@",
"BmnFieldMapSym3", payloadCode, "@",
"BmnFieldPar", payloadCode, "@",
"BmnNewFieldMap", payloadCode, "@",
"BmnSP41FieldMapCreator", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__BmnFieldDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__BmnFieldDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__BmnFieldDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__BmnFieldDict() {
  TriggerDictionaryInitialization_G__BmnFieldDict_Impl();
}
