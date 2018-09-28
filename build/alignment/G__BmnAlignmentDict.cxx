// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIalexdIbmnroot_devdIbmnrootdIbuilddIalignmentdIG__BmnAlignmentDict

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
#include "BmnGlobalAlignment.h"
#include "BmnGemAlignCorrections.h"
#include "BmnDchAlignCorrections.h"
#include "BmnMwpcAlignCorrections.h"
#include "BmnSiliconAlignCorrections.h"
#include "BmnMille.h"
#include "BmnAlignCorrections.h"
#include "BmnGemResiduals.h"
#include "BmnSiResiduals.h"
#include "BmnResiduals.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *BmnMille_Dictionary();
   static void BmnMille_TClassManip(TClass*);
   static void delete_BmnMille(void *p);
   static void deleteArray_BmnMille(void *p);
   static void destruct_BmnMille(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMille*)
   {
      ::BmnMille *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BmnMille));
      static ::ROOT::TGenericClassInfo 
         instance("BmnMille", "BmnMille.h", 11,
                  typeid(::BmnMille), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BmnMille_Dictionary, isa_proxy, 4,
                  sizeof(::BmnMille) );
      instance.SetDelete(&delete_BmnMille);
      instance.SetDeleteArray(&deleteArray_BmnMille);
      instance.SetDestructor(&destruct_BmnMille);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMille*)
   {
      return GenerateInitInstanceLocal((::BmnMille*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMille*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BmnMille_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BmnMille*)0x0)->GetClass();
      BmnMille_TClassManip(theClass);
   return theClass;
   }

   static void BmnMille_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnAlignCorrections(void *p = 0);
   static void *newArray_BmnAlignCorrections(Long_t size, void *p);
   static void delete_BmnAlignCorrections(void *p);
   static void deleteArray_BmnAlignCorrections(void *p);
   static void destruct_BmnAlignCorrections(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnAlignCorrections*)
   {
      ::BmnAlignCorrections *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnAlignCorrections >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnAlignCorrections", ::BmnAlignCorrections::Class_Version(), "BmnAlignCorrections.h", 10,
                  typeid(::BmnAlignCorrections), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnAlignCorrections::Dictionary, isa_proxy, 4,
                  sizeof(::BmnAlignCorrections) );
      instance.SetNew(&new_BmnAlignCorrections);
      instance.SetNewArray(&newArray_BmnAlignCorrections);
      instance.SetDelete(&delete_BmnAlignCorrections);
      instance.SetDeleteArray(&deleteArray_BmnAlignCorrections);
      instance.SetDestructor(&destruct_BmnAlignCorrections);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnAlignCorrections*)
   {
      return GenerateInitInstanceLocal((::BmnAlignCorrections*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnAlignCorrections*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnMwpcAlignCorrections(void *p = 0);
   static void *newArray_BmnMwpcAlignCorrections(Long_t size, void *p);
   static void delete_BmnMwpcAlignCorrections(void *p);
   static void deleteArray_BmnMwpcAlignCorrections(void *p);
   static void destruct_BmnMwpcAlignCorrections(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMwpcAlignCorrections*)
   {
      ::BmnMwpcAlignCorrections *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnMwpcAlignCorrections >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnMwpcAlignCorrections", ::BmnMwpcAlignCorrections::Class_Version(), "BmnMwpcAlignCorrections.h", 11,
                  typeid(::BmnMwpcAlignCorrections), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnMwpcAlignCorrections::Dictionary, isa_proxy, 4,
                  sizeof(::BmnMwpcAlignCorrections) );
      instance.SetNew(&new_BmnMwpcAlignCorrections);
      instance.SetNewArray(&newArray_BmnMwpcAlignCorrections);
      instance.SetDelete(&delete_BmnMwpcAlignCorrections);
      instance.SetDeleteArray(&deleteArray_BmnMwpcAlignCorrections);
      instance.SetDestructor(&destruct_BmnMwpcAlignCorrections);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMwpcAlignCorrections*)
   {
      return GenerateInitInstanceLocal((::BmnMwpcAlignCorrections*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMwpcAlignCorrections*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnGemAlignCorrections(void *p = 0);
   static void *newArray_BmnGemAlignCorrections(Long_t size, void *p);
   static void delete_BmnGemAlignCorrections(void *p);
   static void deleteArray_BmnGemAlignCorrections(void *p);
   static void destruct_BmnGemAlignCorrections(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemAlignCorrections*)
   {
      ::BmnGemAlignCorrections *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGemAlignCorrections >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemAlignCorrections", ::BmnGemAlignCorrections::Class_Version(), "BmnGemAlignCorrections.h", 11,
                  typeid(::BmnGemAlignCorrections), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGemAlignCorrections::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemAlignCorrections) );
      instance.SetNew(&new_BmnGemAlignCorrections);
      instance.SetNewArray(&newArray_BmnGemAlignCorrections);
      instance.SetDelete(&delete_BmnGemAlignCorrections);
      instance.SetDeleteArray(&deleteArray_BmnGemAlignCorrections);
      instance.SetDestructor(&destruct_BmnGemAlignCorrections);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemAlignCorrections*)
   {
      return GenerateInitInstanceLocal((::BmnGemAlignCorrections*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemAlignCorrections*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnDchAlignCorrections(void *p = 0);
   static void *newArray_BmnDchAlignCorrections(Long_t size, void *p);
   static void delete_BmnDchAlignCorrections(void *p);
   static void deleteArray_BmnDchAlignCorrections(void *p);
   static void destruct_BmnDchAlignCorrections(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnDchAlignCorrections*)
   {
      ::BmnDchAlignCorrections *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnDchAlignCorrections >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnDchAlignCorrections", ::BmnDchAlignCorrections::Class_Version(), "BmnDchAlignCorrections.h", 11,
                  typeid(::BmnDchAlignCorrections), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnDchAlignCorrections::Dictionary, isa_proxy, 4,
                  sizeof(::BmnDchAlignCorrections) );
      instance.SetNew(&new_BmnDchAlignCorrections);
      instance.SetNewArray(&newArray_BmnDchAlignCorrections);
      instance.SetDelete(&delete_BmnDchAlignCorrections);
      instance.SetDeleteArray(&deleteArray_BmnDchAlignCorrections);
      instance.SetDestructor(&destruct_BmnDchAlignCorrections);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnDchAlignCorrections*)
   {
      return GenerateInitInstanceLocal((::BmnDchAlignCorrections*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnDchAlignCorrections*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnSiliconAlignCorrections(void *p = 0);
   static void *newArray_BmnSiliconAlignCorrections(Long_t size, void *p);
   static void delete_BmnSiliconAlignCorrections(void *p);
   static void deleteArray_BmnSiliconAlignCorrections(void *p);
   static void destruct_BmnSiliconAlignCorrections(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSiliconAlignCorrections*)
   {
      ::BmnSiliconAlignCorrections *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSiliconAlignCorrections >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSiliconAlignCorrections", ::BmnSiliconAlignCorrections::Class_Version(), "BmnSiliconAlignCorrections.h", 11,
                  typeid(::BmnSiliconAlignCorrections), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSiliconAlignCorrections::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSiliconAlignCorrections) );
      instance.SetNew(&new_BmnSiliconAlignCorrections);
      instance.SetNewArray(&newArray_BmnSiliconAlignCorrections);
      instance.SetDelete(&delete_BmnSiliconAlignCorrections);
      instance.SetDeleteArray(&deleteArray_BmnSiliconAlignCorrections);
      instance.SetDestructor(&destruct_BmnSiliconAlignCorrections);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSiliconAlignCorrections*)
   {
      return GenerateInitInstanceLocal((::BmnSiliconAlignCorrections*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSiliconAlignCorrections*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnGlobalAlignment(void *p);
   static void deleteArray_BmnGlobalAlignment(void *p);
   static void destruct_BmnGlobalAlignment(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGlobalAlignment*)
   {
      ::BmnGlobalAlignment *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGlobalAlignment >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGlobalAlignment", ::BmnGlobalAlignment::Class_Version(), "", 61,
                  typeid(::BmnGlobalAlignment), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGlobalAlignment::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGlobalAlignment) );
      instance.SetDelete(&delete_BmnGlobalAlignment);
      instance.SetDeleteArray(&deleteArray_BmnGlobalAlignment);
      instance.SetDestructor(&destruct_BmnGlobalAlignment);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGlobalAlignment*)
   {
      return GenerateInitInstanceLocal((::BmnGlobalAlignment*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGlobalAlignment*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnResiduals(void *p = 0);
   static void *newArray_BmnResiduals(Long_t size, void *p);
   static void delete_BmnResiduals(void *p);
   static void deleteArray_BmnResiduals(void *p);
   static void destruct_BmnResiduals(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnResiduals*)
   {
      ::BmnResiduals *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnResiduals >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnResiduals", ::BmnResiduals::Class_Version(), "BmnResiduals.h", 10,
                  typeid(::BmnResiduals), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnResiduals::Dictionary, isa_proxy, 4,
                  sizeof(::BmnResiduals) );
      instance.SetNew(&new_BmnResiduals);
      instance.SetNewArray(&newArray_BmnResiduals);
      instance.SetDelete(&delete_BmnResiduals);
      instance.SetDeleteArray(&deleteArray_BmnResiduals);
      instance.SetDestructor(&destruct_BmnResiduals);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnResiduals*)
   {
      return GenerateInitInstanceLocal((::BmnResiduals*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnResiduals*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnGemResiduals(void *p = 0);
   static void *newArray_BmnGemResiduals(Long_t size, void *p);
   static void delete_BmnGemResiduals(void *p);
   static void deleteArray_BmnGemResiduals(void *p);
   static void destruct_BmnGemResiduals(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemResiduals*)
   {
      ::BmnGemResiduals *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGemResiduals >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemResiduals", ::BmnGemResiduals::Class_Version(), "", 648,
                  typeid(::BmnGemResiduals), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGemResiduals::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemResiduals) );
      instance.SetNew(&new_BmnGemResiduals);
      instance.SetNewArray(&newArray_BmnGemResiduals);
      instance.SetDelete(&delete_BmnGemResiduals);
      instance.SetDeleteArray(&deleteArray_BmnGemResiduals);
      instance.SetDestructor(&destruct_BmnGemResiduals);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemResiduals*)
   {
      return GenerateInitInstanceLocal((::BmnGemResiduals*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemResiduals*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnSiResiduals(void *p = 0);
   static void *newArray_BmnSiResiduals(Long_t size, void *p);
   static void delete_BmnSiResiduals(void *p);
   static void deleteArray_BmnSiResiduals(void *p);
   static void destruct_BmnSiResiduals(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSiResiduals*)
   {
      ::BmnSiResiduals *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSiResiduals >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSiResiduals", ::BmnSiResiduals::Class_Version(), "", 737,
                  typeid(::BmnSiResiduals), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSiResiduals::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSiResiduals) );
      instance.SetNew(&new_BmnSiResiduals);
      instance.SetNewArray(&newArray_BmnSiResiduals);
      instance.SetDelete(&delete_BmnSiResiduals);
      instance.SetDeleteArray(&deleteArray_BmnSiResiduals);
      instance.SetDestructor(&destruct_BmnSiResiduals);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSiResiduals*)
   {
      return GenerateInitInstanceLocal((::BmnSiResiduals*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSiResiduals*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnAlignCorrections::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnAlignCorrections::Class_Name()
{
   return "BmnAlignCorrections";
}

//______________________________________________________________________________
const char *BmnAlignCorrections::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnAlignCorrections*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnAlignCorrections::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnAlignCorrections*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnAlignCorrections::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnAlignCorrections*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnAlignCorrections::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnAlignCorrections*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnMwpcAlignCorrections::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnMwpcAlignCorrections::Class_Name()
{
   return "BmnMwpcAlignCorrections";
}

//______________________________________________________________________________
const char *BmnMwpcAlignCorrections::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcAlignCorrections*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnMwpcAlignCorrections::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcAlignCorrections*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnMwpcAlignCorrections::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcAlignCorrections*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnMwpcAlignCorrections::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcAlignCorrections*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnGemAlignCorrections::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGemAlignCorrections::Class_Name()
{
   return "BmnGemAlignCorrections";
}

//______________________________________________________________________________
const char *BmnGemAlignCorrections::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemAlignCorrections*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGemAlignCorrections::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemAlignCorrections*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGemAlignCorrections::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemAlignCorrections*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGemAlignCorrections::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemAlignCorrections*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnDchAlignCorrections::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnDchAlignCorrections::Class_Name()
{
   return "BmnDchAlignCorrections";
}

//______________________________________________________________________________
const char *BmnDchAlignCorrections::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDchAlignCorrections*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnDchAlignCorrections::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDchAlignCorrections*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnDchAlignCorrections::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDchAlignCorrections*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnDchAlignCorrections::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDchAlignCorrections*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnSiliconAlignCorrections::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSiliconAlignCorrections::Class_Name()
{
   return "BmnSiliconAlignCorrections";
}

//______________________________________________________________________________
const char *BmnSiliconAlignCorrections::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconAlignCorrections*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSiliconAlignCorrections::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconAlignCorrections*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSiliconAlignCorrections::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconAlignCorrections*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSiliconAlignCorrections::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconAlignCorrections*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnGlobalAlignment::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGlobalAlignment::Class_Name()
{
   return "BmnGlobalAlignment";
}

//______________________________________________________________________________
const char *BmnGlobalAlignment::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGlobalAlignment*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGlobalAlignment::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGlobalAlignment*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGlobalAlignment::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGlobalAlignment*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGlobalAlignment::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGlobalAlignment*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnResiduals::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnResiduals::Class_Name()
{
   return "BmnResiduals";
}

//______________________________________________________________________________
const char *BmnResiduals::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnResiduals*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnResiduals::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnResiduals*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnResiduals::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnResiduals*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnResiduals::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnResiduals*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnGemResiduals::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGemResiduals::Class_Name()
{
   return "BmnGemResiduals";
}

//______________________________________________________________________________
const char *BmnGemResiduals::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemResiduals*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGemResiduals::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemResiduals*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGemResiduals::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemResiduals*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGemResiduals::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemResiduals*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnSiResiduals::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSiResiduals::Class_Name()
{
   return "BmnSiResiduals";
}

//______________________________________________________________________________
const char *BmnSiResiduals::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiResiduals*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSiResiduals::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiResiduals*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSiResiduals::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiResiduals*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSiResiduals::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiResiduals*)0x0)->GetClass(); }
   return fgIsA;
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnMille(void *p) {
      delete ((::BmnMille*)p);
   }
   static void deleteArray_BmnMille(void *p) {
      delete [] ((::BmnMille*)p);
   }
   static void destruct_BmnMille(void *p) {
      typedef ::BmnMille current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMille

//______________________________________________________________________________
void BmnAlignCorrections::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnAlignCorrections.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnAlignCorrections::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnAlignCorrections::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnAlignCorrections(void *p) {
      return  p ? new(p) ::BmnAlignCorrections : new ::BmnAlignCorrections;
   }
   static void *newArray_BmnAlignCorrections(Long_t nElements, void *p) {
      return p ? new(p) ::BmnAlignCorrections[nElements] : new ::BmnAlignCorrections[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnAlignCorrections(void *p) {
      delete ((::BmnAlignCorrections*)p);
   }
   static void deleteArray_BmnAlignCorrections(void *p) {
      delete [] ((::BmnAlignCorrections*)p);
   }
   static void destruct_BmnAlignCorrections(void *p) {
      typedef ::BmnAlignCorrections current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnAlignCorrections

//______________________________________________________________________________
void BmnMwpcAlignCorrections::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnMwpcAlignCorrections.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnMwpcAlignCorrections::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnMwpcAlignCorrections::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnMwpcAlignCorrections(void *p) {
      return  p ? new(p) ::BmnMwpcAlignCorrections : new ::BmnMwpcAlignCorrections;
   }
   static void *newArray_BmnMwpcAlignCorrections(Long_t nElements, void *p) {
      return p ? new(p) ::BmnMwpcAlignCorrections[nElements] : new ::BmnMwpcAlignCorrections[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnMwpcAlignCorrections(void *p) {
      delete ((::BmnMwpcAlignCorrections*)p);
   }
   static void deleteArray_BmnMwpcAlignCorrections(void *p) {
      delete [] ((::BmnMwpcAlignCorrections*)p);
   }
   static void destruct_BmnMwpcAlignCorrections(void *p) {
      typedef ::BmnMwpcAlignCorrections current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMwpcAlignCorrections

//______________________________________________________________________________
void BmnGemAlignCorrections::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGemAlignCorrections.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGemAlignCorrections::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGemAlignCorrections::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnGemAlignCorrections(void *p) {
      return  p ? new(p) ::BmnGemAlignCorrections : new ::BmnGemAlignCorrections;
   }
   static void *newArray_BmnGemAlignCorrections(Long_t nElements, void *p) {
      return p ? new(p) ::BmnGemAlignCorrections[nElements] : new ::BmnGemAlignCorrections[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnGemAlignCorrections(void *p) {
      delete ((::BmnGemAlignCorrections*)p);
   }
   static void deleteArray_BmnGemAlignCorrections(void *p) {
      delete [] ((::BmnGemAlignCorrections*)p);
   }
   static void destruct_BmnGemAlignCorrections(void *p) {
      typedef ::BmnGemAlignCorrections current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGemAlignCorrections

//______________________________________________________________________________
void BmnDchAlignCorrections::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnDchAlignCorrections.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnDchAlignCorrections::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnDchAlignCorrections::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnDchAlignCorrections(void *p) {
      return  p ? new(p) ::BmnDchAlignCorrections : new ::BmnDchAlignCorrections;
   }
   static void *newArray_BmnDchAlignCorrections(Long_t nElements, void *p) {
      return p ? new(p) ::BmnDchAlignCorrections[nElements] : new ::BmnDchAlignCorrections[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnDchAlignCorrections(void *p) {
      delete ((::BmnDchAlignCorrections*)p);
   }
   static void deleteArray_BmnDchAlignCorrections(void *p) {
      delete [] ((::BmnDchAlignCorrections*)p);
   }
   static void destruct_BmnDchAlignCorrections(void *p) {
      typedef ::BmnDchAlignCorrections current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnDchAlignCorrections

//______________________________________________________________________________
void BmnSiliconAlignCorrections::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSiliconAlignCorrections.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSiliconAlignCorrections::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSiliconAlignCorrections::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSiliconAlignCorrections(void *p) {
      return  p ? new(p) ::BmnSiliconAlignCorrections : new ::BmnSiliconAlignCorrections;
   }
   static void *newArray_BmnSiliconAlignCorrections(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSiliconAlignCorrections[nElements] : new ::BmnSiliconAlignCorrections[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSiliconAlignCorrections(void *p) {
      delete ((::BmnSiliconAlignCorrections*)p);
   }
   static void deleteArray_BmnSiliconAlignCorrections(void *p) {
      delete [] ((::BmnSiliconAlignCorrections*)p);
   }
   static void destruct_BmnSiliconAlignCorrections(void *p) {
      typedef ::BmnSiliconAlignCorrections current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSiliconAlignCorrections

//______________________________________________________________________________
void BmnGlobalAlignment::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGlobalAlignment.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGlobalAlignment::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGlobalAlignment::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnGlobalAlignment(void *p) {
      delete ((::BmnGlobalAlignment*)p);
   }
   static void deleteArray_BmnGlobalAlignment(void *p) {
      delete [] ((::BmnGlobalAlignment*)p);
   }
   static void destruct_BmnGlobalAlignment(void *p) {
      typedef ::BmnGlobalAlignment current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGlobalAlignment

//______________________________________________________________________________
void BmnResiduals::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnResiduals.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnResiduals::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnResiduals::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnResiduals(void *p) {
      return  p ? new(p) ::BmnResiduals : new ::BmnResiduals;
   }
   static void *newArray_BmnResiduals(Long_t nElements, void *p) {
      return p ? new(p) ::BmnResiduals[nElements] : new ::BmnResiduals[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnResiduals(void *p) {
      delete ((::BmnResiduals*)p);
   }
   static void deleteArray_BmnResiduals(void *p) {
      delete [] ((::BmnResiduals*)p);
   }
   static void destruct_BmnResiduals(void *p) {
      typedef ::BmnResiduals current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnResiduals

//______________________________________________________________________________
void BmnGemResiduals::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGemResiduals.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGemResiduals::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGemResiduals::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnGemResiduals(void *p) {
      return  p ? new(p) ::BmnGemResiduals : new ::BmnGemResiduals;
   }
   static void *newArray_BmnGemResiduals(Long_t nElements, void *p) {
      return p ? new(p) ::BmnGemResiduals[nElements] : new ::BmnGemResiduals[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnGemResiduals(void *p) {
      delete ((::BmnGemResiduals*)p);
   }
   static void deleteArray_BmnGemResiduals(void *p) {
      delete [] ((::BmnGemResiduals*)p);
   }
   static void destruct_BmnGemResiduals(void *p) {
      typedef ::BmnGemResiduals current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGemResiduals

//______________________________________________________________________________
void BmnSiResiduals::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSiResiduals.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSiResiduals::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSiResiduals::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSiResiduals(void *p) {
      return  p ? new(p) ::BmnSiResiduals : new ::BmnSiResiduals;
   }
   static void *newArray_BmnSiResiduals(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSiResiduals[nElements] : new ::BmnSiResiduals[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSiResiduals(void *p) {
      delete ((::BmnSiResiduals*)p);
   }
   static void deleteArray_BmnSiResiduals(void *p) {
      delete [] ((::BmnSiResiduals*)p);
   }
   static void destruct_BmnSiResiduals(void *p) {
      typedef ::BmnSiResiduals current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSiResiduals

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

namespace {
  void TriggerDictionaryInitialization_G__BmnAlignmentDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/opt/fairroot/install/include",
"/home/alex/bmnroot_dev/bmnroot/bmndata",
"/home/alex/bmnroot_dev/bmnroot/bmndata/cbm",
"/home/alex/bmnroot_dev/bmnroot/bmndata/math",
"/home/alex/bmnroot_dev/bmnroot/bmnfield",
"/home/alex/bmnroot_dev/bmnroot/globaltracking",
"/home/alex/bmnroot_dev/bmnroot/silicon",
"/home/alex/bmnroot_dev/bmnroot/mwpc",
"/home/alex/bmnroot_dev/bmnroot/dch",
"/home/alex/bmnroot_dev/bmnroot/uni_db",
"/home/alex/bmnroot_dev/bmnroot/uni_db/db_classes",
"/home/alex/bmnroot_dev/bmnroot/alignment",
"/home/alex/bmnroot_dev/bmnroot/gem",
"/opt/fairsoft/install/include",
"/opt/fairsoft/install/include/root",
"/opt/fairsoft/install/include/root",
"/home/alex/bmnroot_dev/bmnroot/build/alignment/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__BmnAlignmentDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$BmnMille.h")))  BmnMille;
class __attribute__((annotate("$clingAutoload$BmnAlignCorrections.h")))  __attribute__((annotate("$clingAutoload$BmnMwpcAlignCorrections.h")))  BmnAlignCorrections;
class __attribute__((annotate("$clingAutoload$BmnMwpcAlignCorrections.h")))  BmnMwpcAlignCorrections;
class __attribute__((annotate("$clingAutoload$BmnGemAlignCorrections.h")))  BmnGemAlignCorrections;
class __attribute__((annotate("$clingAutoload$BmnDchAlignCorrections.h")))  BmnDchAlignCorrections;
class __attribute__((annotate("$clingAutoload$BmnSiliconAlignCorrections.h")))  BmnSiliconAlignCorrections;
class BmnGlobalAlignment;
class __attribute__((annotate("$clingAutoload$BmnResiduals.h")))  BmnResiduals;
class BmnGemResiduals;
class BmnSiResiduals;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__BmnAlignmentDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// @(#)bmnroot/alignment:$Id$
// Author: Pavel Batyuk <pavel.batyuk@jinr.ru> 2017-03-31

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
// BmnGlobalAlignment                                                         //
//                                                                            //
// Alignment of tracking detectors.                                           //
//                                                                            //
// Uses Volker Blobel and Claus Kleinwort Millepede II                        //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////
#ifndef BMNGLOBALALIGNMENT_H
#define BMNGLOBALALIGNMENT_H 1

#include <vector>
#include <fstream>
#include <sstream>
#include <TMath.h>
#include <TCanvas.h>
#include <TNamed.h>
#include <TClonesArray.h>
#include <TFitResult.h>
#include <TFitResultPtr.h>
#include <TGeoManager.h>
#include <TString.h>
#include "FairTask.h"
#include "FairRootManager.h"
#include "FairEventHeader.h"
#include  "BmnGlobalTrack.h"
#include  "BmnMwpcTrack.h"
#include  "BmnMwpcGeometry.h"
#include  "BmnGemTrack.h"
#include  "BmnMwpcHit.h"
#include  "BmnDchHit.h"
#include  "BmnGemStripHit.h"
#include  "BmnSiliconHit.h"
#include  "BmnDchTrack.h"
#include  "BmnMille.h"
#include  "BmnMwpcAlignCorrections.h"
#include  "BmnGemAlignCorrections.h"
#include  "BmnDchAlignCorrections.h"
#include  "BmnSiliconAlignCorrections.h"
#include <BmnSiliconStationSet.h>
#include <BmnGemStripStationSet.h>
#include <UniDbDetectorParameter.h>
#include <UniDbRun.h>
#include <BmnKalmanFilter.h>
#include <BmnFieldMap.h>
#include <BmnNewFieldMap.h>
#include <FairField.h>

using namespace std;
using namespace TMath;

class BmnGlobalAlignment : public FairTask {
public:

    BmnGlobalAlignment(TString);
    virtual ~BmnGlobalAlignment();

    virtual InitStatus Init();

    virtual void Exec(Option_t* opt);

    virtual void Finish();

    void SetDetectors(Bool_t gem, Bool_t mwpc, Bool_t dch, Bool_t vp, Bool_t si) {
        fDetectorSet[0] = kTRUE;
        fDetectorSet[1] = mwpc;
        fDetectorSet[2] = dch;
        fDetectorSet[3] = vp;
        fDetectorSet[4] = si;
        
        fUseGemConstraints = gem;
        fUseSiliconConstraints = si;
    }

    void SetUseRealHitErrors(Bool_t flag) {
        fUseRealHitErrors = flag;
    }

    void SetPreSigma(Double_t presigma) {
        fPreSigma = presigma;
    }

    void SetAccuracy(Double_t accuracy) {
        fAccuracy = accuracy;
    }

    void SetUseRegularization(Bool_t flag) {
        fUseRegularization = flag;
    }

    void SetOutlierDownweighting(Int_t n) {
        fOutlierdownweighting = n;
    }

    void SetDwfractionCut(Double_t fraction) {
        fDwfractioncut = fraction;
    }

    void SetChi2MaxPerNDF(Double_t val) {
        fChi2MaxPerNDF = val;
    }

    void SetMinHitsAccepted(Int_t val) {
        fMinHitsAccepted = val;
    }

    void SetTxMinMax(Double_t min, Double_t max) {
        fTxMin = min;
        fTxMax = max;
    }

    void SetTyMinMax(Double_t min, Double_t max) {
        fTyMin = min;
        fTyMax = max;
    }

    void SetDebug(Bool_t flag) {
        fDebug = flag;
    }

    void SetHugecut(Double_t val) {
        fHugecut = val;
    }

    void SetChisqcut(Double_t val1, Double_t val2) {
        fChisqcut[0] = val1;
        fChisqcut[1] = val2;
    }

    void SetEntriesPerParam(Int_t entries) {
        fEntries = entries;
    }

    void SetGemFixedRun6(Bool_t st0_0, Bool_t st1_0, Bool_t st2_0,
            Bool_t st3_0, Bool_t st3_1, Bool_t st4_0,
            Bool_t st4_1, Bool_t st5_0, Bool_t st5_1) {

        cout << "GEM" << endl;
        const Int_t nModulMax = 2; // To be fixed         
        Bool_t** gems = new Bool_t*[fDetectorGEM->GetNStations()];
        for (Int_t iStat = 0; iStat < fDetectorGEM->GetNStations(); iStat++)
            gems[iStat] = new Bool_t[nModulMax];
        gems[0][0] = st0_0;
        gems[1][0] = st1_0;
        gems[2][0] = st2_0;
        gems[3][0] = st3_0;
        gems[3][1] = st3_1;
        gems[4][0] = st4_0;
        gems[4][1] = st4_1;
        gems[5][0] = st5_0;
        gems[5][1] = st5_1;

        for (Int_t iStat = 0; iStat < fDetectorGEM->GetNStations(); iStat++)
            for (Int_t iMod = 0; iMod < fDetectorGEM->GetGemStation(iStat)->GetNModules(); iMod++)
                if (gems[iStat][iMod])
                    fixedGemElements[iStat][iMod] = kTRUE;

        if (fDebug)
            for (Int_t iStat = 0; iStat < fDetectorGEM->GetNStations(); iStat++)
                for (Int_t iMod = 0; iMod < fDetectorGEM->GetGemStation(iStat)->GetNModules(); iMod++)
                    cout << "Stat = " << iStat << " Mod = " << iMod << " isFixed (true / false) " << fixedGemElements[iStat][iMod] << endl;
    }

    void SetSiFixedRun6(Bool_t st0_0, Bool_t st0_1, Bool_t st0_2, Bool_t st0_3,
            Bool_t st0_4, Bool_t st0_5, Bool_t st0_6, Bool_t st0_7) {
        cout << "SI" << endl;
        const Int_t nModulMax = 8; // FIXME         
        Bool_t** si = new Bool_t*[fDetectorSI->GetNStations()];
        for (Int_t iStat = 0; iStat < fDetectorSI->GetNStations(); iStat++)
            si[iStat] = new Bool_t[nModulMax];
        si[0][0] = st0_0;
        si[0][1] = st0_1;
        si[0][2] = st0_2;
        si[0][3] = st0_3;
        si[0][4] = st0_4;
        si[0][5] = st0_5;
        si[0][6] = st0_6;
        si[0][7] = st0_7;

        for (Int_t iStat = 0; iStat < fDetectorSI->GetNStations(); iStat++)
            for (Int_t iMod = 0; iMod < fDetectorSI->GetSiliconStation(iStat)->GetNModules(); iMod++)
                if (si[iStat][iMod])
                    fixedSiElements[iStat][iMod] = kTRUE;

        if (fDebug)
            for (Int_t iStat = 0; iStat < fDetectorSI->GetNStations(); iStat++)
                for (Int_t iMod = 0; iMod < fDetectorSI->GetSiliconStation(iStat)->GetNModules(); iMod++)
                    cout << "Stat = " << iStat << " Mod = " << iMod << " isFixed (true / false) " << fixedSiElements[iStat][iMod] << endl;
    }

    void SetUseTrackWithMinChi2(Bool_t flag) {
        fUseTrackWithMinChi2 = flag;
    }

    void SetExclusionRangeTx(Double_t min, Double_t max) {
        fIsExcludedTx = kTRUE;
        fTxLeft = min;
        fTxRight = max;
    }

    void SetExclusionRangeTy(Double_t min, Double_t max) {
        fIsExcludedTy = kTRUE;
        fTyLeft = min;
        fTyRight = max;
    }

    void SetRoughPrimaryVertex(TVector3 Vp) {
        fRoughVertex = Vp;
    }

    void SetUsePrimaryVertex(Bool_t flag) {
        fUseVp = flag;
    }

private:
    void CreateDetectorGeometries();
    void PrintToFullFormat(TString, Char_t*);
    const Int_t MakeBinFile();
    void MakeSteerFile();
    void MilleNoFieldRuns(BmnGlobalTrack*, Int_t, Int_t, Char_t*);
    Bool_t MilleFieldRuns(Int_t, Int_t, Char_t*);
    void Pede();
    void ReadPedeOutput(ifstream&);
    void ExtractCorrValues(ifstream&, Double_t*);
    FairTrackParam UseKalman(BmnGemTrack*, Int_t, Int_t);

    static Int_t fCurrentEvent;
    static Int_t trackCounter;
    Bool_t fIsField;
    Int_t fRunId;

    BmnMwpcGeometry* mwpcGeo;
    BmnGemStripStationSet* fDetectorGEM; // GEM-geometry
    BmnSiliconStationSet* fDetectorSI; // SI-geometry

    TClonesArray* fMwpcAlignCorr;
    TClonesArray* fGemAlignCorr;
    TClonesArray* fTofAlignCorr;
    TClonesArray* fDchAlignCorr;
    TClonesArray* fSiAlignCorr;

    TString fBranchMwpcAlignCorr;
    TString fBranchGemAlignCorr;
    TString fBranchTofAlignCorr;
    TString fBranchDchAlignCorr;
    TString fBranchSiAlignCorr;

    Bool_t* fDetectorSet;

    TString fBranchMwpcHits;
    TString fBranchSiHits;
    TString fBranchGemHits;
    TString fBranchTof1Hits;
    TString fBranchDchHits;

    TString fBranchMwpcTracks;
    TString fBranchGemTracks;
    TString fBranchDchTracks;

    TString fBranchGlobalTracks;
    TString fBranchGemResiduals;
    TString fBranchFairEventHeader;

    TClonesArray* fMwpcHits;
    TClonesArray* fSiHits;
    TClonesArray* fGemHits;
    TClonesArray* fTof1Hits;
    TClonesArray* fDchHits;

    TClonesArray* fMwpcTracks;
    TClonesArray* fGemTracks;
    TClonesArray* fDchTracks;

    TClonesArray* fGlobalTracks;
    TClonesArray* fGemResiduals;

    FILE* fin_txt;
    TString fRecoFileName;
    TChain* fChain;

    FairEventHeader* fFairEventHeader;

    Bool_t fUseRealHitErrors; // errors are taken from hit finder algorithm
    Bool_t fUseTrackWithMinChi2; // in case of target select track with minimal value of chi2

    // Restrictions on track params
    Double_t fChi2MaxPerNDF;
    Double_t fMinHitsAccepted;
    Double_t fTxMin;
    Double_t fTxMax;
    Double_t fTyMin;
    Double_t fTyMax;
    // Range to be exluded in case of "beam-target" alignment...
    Bool_t fIsExcludedTx; // do exclusion (true) or not, manipulated by SetExclusionRangeTx
    Bool_t fIsExcludedTy; // do exclusion (true) or not, manipulated by SetExclusionRangeTy
    Double_t fTxLeft;
    Double_t fTxRight;
    Double_t fTyLeft;
    Double_t fTyRight;

    Int_t nSelectedTracks;

    UInt_t fNumOfIterations;
    Double_t fAccuracy;
    Double_t fPreSigma;

    // Millepede params
    Bool_t fUseRegularization; // use regularization or not
    Double_t fHugecut; // cut factor in iteration 0
    Double_t fChisqcut[2]; // cut factor in iterations 1 and 2
    Int_t fEntries; // lower limit on number of entries/parameter
    Int_t fOutlierdownweighting; // number of internal iterations (> 1)
    Double_t fDwfractioncut; // reject all cases with a down-weight fraction >= val

    Int_t fNGL;
    Int_t fNLC;
    Int_t nDetectors;

    vector <Int_t> fFixedStats;
    Bool_t** fixedGemElements;
    Bool_t** fixedSiElements;

    Bool_t fDebug;
    Int_t* Labels; //array containing a fixed param. number for each detector. 
    // GEMs: 1 - 27; MWPC: 28 - 30; DCH: 31 - 33; VERTEX: 34 - 36; SILICON: 37 - 60

    TCanvas* fCanv;

    FairField* fField;
    BmnFieldMap* fMagField;
    BmnKalmanFilter* fKalman;

    Bool_t fUseVp;
    TVector3 fRoughVertex;

    TString fBranchVertex;
    TClonesArray* fVertex;
    
    // Use constraints or not
    Bool_t fUseGemConstraints;
    Bool_t fUseSiliconConstraints;

    ClassDef(BmnGlobalAlignment, 1)
};

#endif
#ifndef BMNGEMALIGNCORRECTIONS_H
#define BMNGEMALIGNCORRECTIONS_H 1

#include <iostream>
#include <TNamed.h>
#include <TVector3.h>
#include "BmnAlignCorrections.h"

using namespace std;

class BmnGemAlignCorrections : public BmnAlignCorrections {
public:

    BmnGemAlignCorrections() {
    };

    BmnGemAlignCorrections(Int_t, Int_t, TVector3);
    
    virtual ~BmnGemAlignCorrections() { };

    void SetStation(Int_t num) {
        fStation = num;
    }

    void SetModule(Int_t num) {
        fModule = num;
    }
    
    Int_t GetStation() {
        return fStation;
    }
    
    Int_t GetModule() {
        return fModule;
    }

private:
    Int_t fStation;
    Int_t fModule;
   
    ClassDef(BmnGemAlignCorrections, 1)
};

#endif
#ifndef BMNDCHALIGNCORRECTIONS_H
#define BMNDCHALIGNCORRECTIONS_H 1

#include <iostream>
#include <TNamed.h>
#include <TVector3.h>
#include "BmnAlignCorrections.h"

using namespace std;

class BmnDchAlignCorrections : public BmnAlignCorrections {
public:

    BmnDchAlignCorrections() {
    };

    BmnDchAlignCorrections(Int_t, TVector3);
    
    virtual ~BmnDchAlignCorrections() { };

    void SetDchId(Int_t num) {
        fDchId = num;
    }
    
    Int_t GetDchId() {
        return fDchId;
    }

private:
    Int_t fDchId;
   
    ClassDef(BmnDchAlignCorrections, 1)
};

#endif
#ifndef BMNMWPCALIGNCORRECTIONS_H
#define BMNMWPCALIGNCORRECTIONS_H 1

#include <iostream>
#include <TNamed.h>
#include <TVector3.h>
#include "BmnAlignCorrections.h"

using namespace std;

class BmnMwpcAlignCorrections : public BmnAlignCorrections {
public:

    BmnMwpcAlignCorrections() {};

    BmnMwpcAlignCorrections(Int_t, TVector3);
    
    virtual ~BmnMwpcAlignCorrections() { };

    void SetMwpcId(Int_t num) {
        fMwpcId = num;
    }
    
    Int_t GetMwpcId() {
        return fMwpcId;
    }

private:
    Int_t fMwpcId;
   
    ClassDef(BmnMwpcAlignCorrections, 1)
};

#endif
#ifndef BMNSILICONALIGNCORRECTIONS_H
#define BMNSILICONALIGNCORRECTIONS_H 1

#include <iostream>
#include <TNamed.h>
#include <TVector3.h>
#include "BmnAlignCorrections.h"

using namespace std;

class BmnSiliconAlignCorrections : public BmnAlignCorrections {
public:

    BmnSiliconAlignCorrections() {
    };

    BmnSiliconAlignCorrections(TVector3);
    BmnSiliconAlignCorrections(Int_t, Int_t, TVector3);
    
    virtual ~BmnSiliconAlignCorrections() { };
    
    void SetStation(Int_t num) {
        fStation = num;
    }

    void SetModule(Int_t num) {
        fModule = num;
    }
    
    Int_t GetStation() {
        return fStation;
    }
    
    Int_t GetModule() {
        return fModule;
    }

private:
    Int_t fStation;
    Int_t fModule;
  
    ClassDef(BmnSiliconAlignCorrections, 1)
};

#endif
#ifndef BMNMILLE_H
#define BMNMILLE_H 1

#include <fstream>
#include <iostream>
#include <Rtypes.h>
#include <math.h>

using namespace std;

class BmnMille {
public:
    BmnMille(const Char_t* outFileName, Bool_t asBinary = kTRUE, Bool_t writeZero = kFALSE);
    ~BmnMille();

    void mille(Int_t NLC, const Double_t* derLc, Int_t NGL, const Double_t* derGl,
            const Int_t* label, Double_t rMeas, Double_t sigma);
    void special(Int_t nSpecial, const Double_t* floatings, const Int_t* integers);
    void kill();
    void end();

private:
    void newSet();
    Bool_t checkBufferSize(Int_t nLocal, Int_t nGlobal);

    std::ofstream myOutFile; ///< C-binary for output
    Bool_t myAsBinary; ///< if false output as text
    Bool_t myWriteZero; ///< if true also write out derivatives/labels ==0
    /// buffer size for ints and floats

    enum {
        myBufferSize = 500000
    }; ///< buffer size for ints and floats
    Int_t myBufferInt[myBufferSize]; ///< to collect labels etc.
    Float_t myBufferFloat[myBufferSize]; ///< to collect derivatives etc.
    Int_t myBufferPos; ///< position in buffer
    Bool_t myHasSpecial; ///< if true, special(..) already called for this record
    /// largest label allowed: 2^31 - 1

    enum {
        myMaxLabel = (0xFFFFFFFF - (1 << 31))
    };
};
#endif
#ifndef BMNALIGNCORRECTIONS_H
#define BMNALIGNCORRECTIONS_H 1

#include <iostream>
#include <TNamed.h>
#include <TVector3.h>

using namespace std;

class BmnAlignCorrections : public TNamed {
public:

    BmnAlignCorrections() {
    };

    BmnAlignCorrections(TVector3);

    virtual ~BmnAlignCorrections() {};

    void SetCorrections(Double_t x, Double_t y, Double_t z) {
        fX = x;
        fY = y;
        fZ = z;
    }
    
    void SetCorrections(Double_t* corrs) {
        fX = corrs[0];
        fY = corrs[1];
        fZ = corrs[2];
    }
    
    void SetX(Double_t x) {
        fX = x;
    }

    void SetY(Double_t y) {
        fY = y;
    }

    void SetZ(Double_t z) {
        fZ = z;
    }

    TVector3 GetCorrections() {
        return TVector3(fX, fY, fZ);
    }

private:
    Double_t fX;
    Double_t fY;
    Double_t fZ;

    ClassDef(BmnAlignCorrections, 1)
};

#endif
#ifndef BMNGEMRESIDUALS_H
#define BMNGEMRESIDUALS_H 1

#include <fstream>
#include <sstream>
#include <TMath.h>
#include <TNamed.h>
#include <TClonesArray.h>
#include <TString.h>
#include <TH1.h>
#include <TFitResult.h>
#include "FairTask.h"
#include "FairRootManager.h"
#include "FairEventHeader.h"

#include  "BmnGemStripStationSet.h"
#include  "BmnGemStripStationSet_RunWinter2016.h"
#include  "BmnGemStripStationSet_RunSpring2017.h"

#include "BmnResiduals.h"
#include "BmnGemTrack.h"
#include "BmnGemStripHit.h"
#include "BmnMath.h"

using namespace std;
using namespace TMath;

class BmnGemResiduals : public FairTask {
public:

    BmnGemResiduals() {
    };
    BmnGemResiduals(Int_t, Int_t, Double_t);

    virtual ~BmnGemResiduals() {
    };

    virtual InitStatus Init();

    virtual void Exec(Option_t* opt);

    virtual void Finish();

    void SetUseDistance(Bool_t flag) {
        if (flag)
            isResid = kFALSE;
    }

    void SetPrintResToFile(TString fileName) {
        isPrintToFile = kTRUE;
        outRes = fopen(fileName.Data(), "w");
    }

  private:
    void ResidualsAndDistances();
    
    Int_t fPeriod;
    Int_t fNumber;

    Bool_t fDebug;

    Bool_t isField;
    Bool_t isResid; // true --> resid, false --> dist

    TString fBranchGemHits;
    TString fBranchGemTracks;
    TString fBranchResiduals;
    TString fBranchFairEventHeader;

    TClonesArray* fGemTracks;
    TClonesArray* fGemHits;

    TClonesArray* fGemResiduals;
    
    FairEventHeader* fFairEventHeader;

    BmnGemStripStationSet* fDetector; // Detector geometry
    BmnGemStripConfiguration::GEM_CONFIG fGeometry;

    // tmp histos to fit resid. 
    TH1F* hRes[6][2][2]; //! stat -- mod -- resX (Y)

    Bool_t isPrintToFile;
    Bool_t isMergedDigits; // file with merged digits from different files
    FILE* outRes;

    ClassDef(BmnGemResiduals, 1)
};

#endif
#ifndef BMNSIRESIDUALS_H
#define BMNSIRESIDUALS_H 1

#include <fstream>
#include <sstream>
#include <TMath.h>
#include <TNamed.h>
#include "TSystem.h"
#include <TClonesArray.h>
#include <TString.h>
#include <TH1.h>
#include <TFitResult.h>
#include "FairTask.h"
#include "FairRootManager.h"
#include "FairEventHeader.h"

#include "BmnResiduals.h"
#include "BmnMath.h"
#include <BmnSiliconStationSet.h>
#include <BmnSiliconHit.h>
#include <BmnGlobalTrack.h>

using namespace std;
using namespace TMath;

class BmnSiResiduals : public FairTask {
public:

    BmnSiResiduals() {
    };
    BmnSiResiduals(Int_t, Int_t, Double_t);

    virtual ~BmnSiResiduals() {
    };

    virtual InitStatus Init();

    virtual void Exec(Option_t* opt);

    virtual void Finish();

//    void SetUseDistance(Bool_t flag) {
//        if (flag)
//            isResid = kFALSE;
//    }
//
//    void SetPrintResToFile(TString fileName) {
//        isPrintToFile = kTRUE;
//        outRes = fopen(fileName.Data(), "w");
//    }

  private:
    void Residuals();
    
    Int_t fPeriod;
    Int_t fNumber;

    Bool_t fDebug;

    Bool_t isField;

    TString fBranchSiHits;
//    TString fBranchGemHits;
    TString fBranchGlobalTracks;
//    TString fBranchGemTracks;
    TString fBranchResiduals;
    TString fBranchFairEventHeader;

    TClonesArray* fGlobalTracks;
    //TClonesArray* fGemTracks;
    //TClonesArray* fGemHits;
    TClonesArray* fSiHits;

    TClonesArray* fSiResiduals;
    
    FairEventHeader* fFairEventHeader;

    BmnSiliconStationSet* fDetector;

    // tmp histos to fit resid. 
    TH1F* hRes[1][8][2]; //! stat -- mod -- resX (Y)

    Bool_t isPrintToFile;
    Bool_t isMergedDigits; // file with merged digits from different files
    FILE* outRes;

    ClassDef(BmnSiResiduals, 1)
};

#endif
#ifndef BMNRESIDUALS_H
#define BMNRESIDUALS_H 1

#include <iostream>
#include <TNamed.h>
#include <TVector3.h>

using namespace std;

class BmnResiduals : public TNamed {
public:

    BmnResiduals();

    BmnResiduals(Int_t, Int_t, Double_t, Double_t, Double_t, Bool_t, Bool_t flag = kTRUE);

    virtual ~BmnResiduals() {
    };

    void SetResiduals(Double_t dx, Double_t dy, Double_t dz) {
        fdX = dx;
        fdY = dy;
        fdZ = dz;
    }

    void SetdX(Double_t dx) {
        fdX = dx;
    }

    void SetdY(Double_t dy) {
        fdY = dy;
    }

    void SetdZ(Double_t dz) {
        fdZ = dz;
    }

    TVector3 GetResiduals() {
        return TVector3(fdX, fdY, fdZ);
    }

    Int_t GetStation() {
        return fStation;
    }

    Int_t GetModule() {
        return fModule;
    }

    void SetTrackId(Int_t id) {
        fTrackId = id;
    }

    void SetHitId(Int_t id) {
        fHitId = id;
    }

    void SetIsMergedDigits(Bool_t flag) {
        isMergedDigits = flag;
    }

    Bool_t GetIsMergedDigits() {
        return isMergedDigits;
    }

    Int_t GetHitId() {
        return fHitId;
    }
    
    Int_t GetTrackId() {
        return fTrackId;   
    }

private:
    Double_t fdX;
    Double_t fdY;
    Double_t fdZ;

    Int_t fStation;
    Int_t fModule;

    Int_t fTrackId;
    Int_t fHitId;

    Bool_t isResid; // Calculate resid. or distance
    Bool_t isField; // Is mag. field or not
    Bool_t isMergedDigits; // Is reco file obtained from merged digits or not

    ClassDef(BmnResiduals, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"BmnAlignCorrections", payloadCode, "@",
"BmnDchAlignCorrections", payloadCode, "@",
"BmnGemAlignCorrections", payloadCode, "@",
"BmnGemResiduals", payloadCode, "@",
"BmnGlobalAlignment", payloadCode, "@",
"BmnMille", payloadCode, "@",
"BmnMwpcAlignCorrections", payloadCode, "@",
"BmnResiduals", payloadCode, "@",
"BmnSiResiduals", payloadCode, "@",
"BmnSiliconAlignCorrections", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__BmnAlignmentDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__BmnAlignmentDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__BmnAlignmentDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__BmnAlignmentDict() {
  TriggerDictionaryInitialization_G__BmnAlignmentDict_Impl();
}
