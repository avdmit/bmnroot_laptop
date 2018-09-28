// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIalexdIbmnroot_devdIbmnrootdIbuilddIdecoderdIG__DecoderDict

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
#include "BmnAdcProcessor.h"
#include "BmnDchRaw2Digit.h"
#include "BmnMwpcRaw2Digit.h"
#include "BmnZDCRaw2Digit.h"
#include "BmnECALRaw2Digit.h"
#include "BmnLANDRaw2Digit.h"
#include "BmnGemRaw2Digit.h"
#include "BmnTof2Raw2Digit.h"
#include "BmnTof2Raw2DigitNew.h"
#include "BmnTof1Raw2Digit.h"
#include "BmnSiliconRaw2Digit.h"
#include "BmnRawDataDecoder.h"
#include "BmnTrigRaw2Digit.h"
#include "BmnCscRaw2Digit.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_BmnAdcProcessor(void *p = 0);
   static void *newArray_BmnAdcProcessor(Long_t size, void *p);
   static void delete_BmnAdcProcessor(void *p);
   static void deleteArray_BmnAdcProcessor(void *p);
   static void destruct_BmnAdcProcessor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnAdcProcessor*)
   {
      ::BmnAdcProcessor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnAdcProcessor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnAdcProcessor", ::BmnAdcProcessor::Class_Version(), "", 37,
                  typeid(::BmnAdcProcessor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnAdcProcessor::Dictionary, isa_proxy, 4,
                  sizeof(::BmnAdcProcessor) );
      instance.SetNew(&new_BmnAdcProcessor);
      instance.SetNewArray(&newArray_BmnAdcProcessor);
      instance.SetDelete(&delete_BmnAdcProcessor);
      instance.SetDeleteArray(&deleteArray_BmnAdcProcessor);
      instance.SetDestructor(&destruct_BmnAdcProcessor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnAdcProcessor*)
   {
      return GenerateInitInstanceLocal((::BmnAdcProcessor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnAdcProcessor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnDchRaw2Digit(void *p = 0);
   static void *newArray_BmnDchRaw2Digit(Long_t size, void *p);
   static void delete_BmnDchRaw2Digit(void *p);
   static void deleteArray_BmnDchRaw2Digit(void *p);
   static void destruct_BmnDchRaw2Digit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnDchRaw2Digit*)
   {
      ::BmnDchRaw2Digit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnDchRaw2Digit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnDchRaw2Digit", ::BmnDchRaw2Digit::Class_Version(), "", 136,
                  typeid(::BmnDchRaw2Digit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnDchRaw2Digit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnDchRaw2Digit) );
      instance.SetNew(&new_BmnDchRaw2Digit);
      instance.SetNewArray(&newArray_BmnDchRaw2Digit);
      instance.SetDelete(&delete_BmnDchRaw2Digit);
      instance.SetDeleteArray(&deleteArray_BmnDchRaw2Digit);
      instance.SetDestructor(&destruct_BmnDchRaw2Digit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnDchRaw2Digit*)
   {
      return GenerateInitInstanceLocal((::BmnDchRaw2Digit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnDchRaw2Digit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnMwpcRaw2Digit(void *p = 0);
   static void *newArray_BmnMwpcRaw2Digit(Long_t size, void *p);
   static void delete_BmnMwpcRaw2Digit(void *p);
   static void deleteArray_BmnMwpcRaw2Digit(void *p);
   static void destruct_BmnMwpcRaw2Digit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMwpcRaw2Digit*)
   {
      ::BmnMwpcRaw2Digit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnMwpcRaw2Digit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnMwpcRaw2Digit", ::BmnMwpcRaw2Digit::Class_Version(), "", 192,
                  typeid(::BmnMwpcRaw2Digit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnMwpcRaw2Digit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnMwpcRaw2Digit) );
      instance.SetNew(&new_BmnMwpcRaw2Digit);
      instance.SetNewArray(&newArray_BmnMwpcRaw2Digit);
      instance.SetDelete(&delete_BmnMwpcRaw2Digit);
      instance.SetDeleteArray(&deleteArray_BmnMwpcRaw2Digit);
      instance.SetDestructor(&destruct_BmnMwpcRaw2Digit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMwpcRaw2Digit*)
   {
      return GenerateInitInstanceLocal((::BmnMwpcRaw2Digit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMwpcRaw2Digit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnZDCRaw2Digit(void *p = 0);
   static void *newArray_BmnZDCRaw2Digit(Long_t size, void *p);
   static void delete_BmnZDCRaw2Digit(void *p);
   static void deleteArray_BmnZDCRaw2Digit(void *p);
   static void destruct_BmnZDCRaw2Digit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnZDCRaw2Digit*)
   {
      ::BmnZDCRaw2Digit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnZDCRaw2Digit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnZDCRaw2Digit", ::BmnZDCRaw2Digit::Class_Version(), "", 261,
                  typeid(::BmnZDCRaw2Digit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnZDCRaw2Digit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnZDCRaw2Digit) );
      instance.SetNew(&new_BmnZDCRaw2Digit);
      instance.SetNewArray(&newArray_BmnZDCRaw2Digit);
      instance.SetDelete(&delete_BmnZDCRaw2Digit);
      instance.SetDeleteArray(&deleteArray_BmnZDCRaw2Digit);
      instance.SetDestructor(&destruct_BmnZDCRaw2Digit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnZDCRaw2Digit*)
   {
      return GenerateInitInstanceLocal((::BmnZDCRaw2Digit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnZDCRaw2Digit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnECALRaw2Digit(void *p = 0);
   static void *newArray_BmnECALRaw2Digit(Long_t size, void *p);
   static void delete_BmnECALRaw2Digit(void *p);
   static void deleteArray_BmnECALRaw2Digit(void *p);
   static void destruct_BmnECALRaw2Digit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnECALRaw2Digit*)
   {
      ::BmnECALRaw2Digit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnECALRaw2Digit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnECALRaw2Digit", ::BmnECALRaw2Digit::Class_Version(), "", 444,
                  typeid(::BmnECALRaw2Digit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnECALRaw2Digit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnECALRaw2Digit) );
      instance.SetNew(&new_BmnECALRaw2Digit);
      instance.SetNewArray(&newArray_BmnECALRaw2Digit);
      instance.SetDelete(&delete_BmnECALRaw2Digit);
      instance.SetDeleteArray(&deleteArray_BmnECALRaw2Digit);
      instance.SetDestructor(&destruct_BmnECALRaw2Digit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnECALRaw2Digit*)
   {
      return GenerateInitInstanceLocal((::BmnECALRaw2Digit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnECALRaw2Digit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnLANDRaw2Digit(void *p);
   static void deleteArray_BmnLANDRaw2Digit(void *p);
   static void destruct_BmnLANDRaw2Digit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnLANDRaw2Digit*)
   {
      ::BmnLANDRaw2Digit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnLANDRaw2Digit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnLANDRaw2Digit", ::BmnLANDRaw2Digit::Class_Version(), "", 594,
                  typeid(::BmnLANDRaw2Digit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnLANDRaw2Digit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnLANDRaw2Digit) );
      instance.SetDelete(&delete_BmnLANDRaw2Digit);
      instance.SetDeleteArray(&deleteArray_BmnLANDRaw2Digit);
      instance.SetDestructor(&destruct_BmnLANDRaw2Digit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnLANDRaw2Digit*)
   {
      return GenerateInitInstanceLocal((::BmnLANDRaw2Digit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnLANDRaw2Digit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnGemRaw2Digit(void *p = 0);
   static void *newArray_BmnGemRaw2Digit(Long_t size, void *p);
   static void delete_BmnGemRaw2Digit(void *p);
   static void deleteArray_BmnGemRaw2Digit(void *p);
   static void destruct_BmnGemRaw2Digit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGemRaw2Digit*)
   {
      ::BmnGemRaw2Digit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGemRaw2Digit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGemRaw2Digit", ::BmnGemRaw2Digit::Class_Version(), "", 695,
                  typeid(::BmnGemRaw2Digit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGemRaw2Digit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnGemRaw2Digit) );
      instance.SetNew(&new_BmnGemRaw2Digit);
      instance.SetNewArray(&newArray_BmnGemRaw2Digit);
      instance.SetDelete(&delete_BmnGemRaw2Digit);
      instance.SetDeleteArray(&deleteArray_BmnGemRaw2Digit);
      instance.SetDestructor(&destruct_BmnGemRaw2Digit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGemRaw2Digit*)
   {
      return GenerateInitInstanceLocal((::BmnGemRaw2Digit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGemRaw2Digit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTof2Raw2Digit(void *p = 0);
   static void *newArray_BmnTof2Raw2Digit(Long_t size, void *p);
   static void delete_BmnTof2Raw2Digit(void *p);
   static void deleteArray_BmnTof2Raw2Digit(void *p);
   static void destruct_BmnTof2Raw2Digit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTof2Raw2Digit*)
   {
      ::BmnTof2Raw2Digit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTof2Raw2Digit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTof2Raw2Digit", ::BmnTof2Raw2Digit::Class_Version(), "", 775,
                  typeid(::BmnTof2Raw2Digit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTof2Raw2Digit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTof2Raw2Digit) );
      instance.SetNew(&new_BmnTof2Raw2Digit);
      instance.SetNewArray(&newArray_BmnTof2Raw2Digit);
      instance.SetDelete(&delete_BmnTof2Raw2Digit);
      instance.SetDeleteArray(&deleteArray_BmnTof2Raw2Digit);
      instance.SetDestructor(&destruct_BmnTof2Raw2Digit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTof2Raw2Digit*)
   {
      return GenerateInitInstanceLocal((::BmnTof2Raw2Digit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTof2Raw2Digit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTof2Raw2DigitNew(void *p = 0);
   static void *newArray_BmnTof2Raw2DigitNew(Long_t size, void *p);
   static void delete_BmnTof2Raw2DigitNew(void *p);
   static void deleteArray_BmnTof2Raw2DigitNew(void *p);
   static void destruct_BmnTof2Raw2DigitNew(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTof2Raw2DigitNew*)
   {
      ::BmnTof2Raw2DigitNew *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTof2Raw2DigitNew >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTof2Raw2DigitNew", ::BmnTof2Raw2DigitNew::Class_Version(), "", 972,
                  typeid(::BmnTof2Raw2DigitNew), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTof2Raw2DigitNew::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTof2Raw2DigitNew) );
      instance.SetNew(&new_BmnTof2Raw2DigitNew);
      instance.SetNewArray(&newArray_BmnTof2Raw2DigitNew);
      instance.SetDelete(&delete_BmnTof2Raw2DigitNew);
      instance.SetDeleteArray(&deleteArray_BmnTof2Raw2DigitNew);
      instance.SetDestructor(&destruct_BmnTof2Raw2DigitNew);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTof2Raw2DigitNew*)
   {
      return GenerateInitInstanceLocal((::BmnTof2Raw2DigitNew*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTof2Raw2DigitNew*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTof1Raw2Digit(void *p = 0);
   static void *newArray_BmnTof1Raw2Digit(Long_t size, void *p);
   static void delete_BmnTof1Raw2Digit(void *p);
   static void deleteArray_BmnTof1Raw2Digit(void *p);
   static void destruct_BmnTof1Raw2Digit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTof1Raw2Digit*)
   {
      ::BmnTof1Raw2Digit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTof1Raw2Digit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTof1Raw2Digit", ::BmnTof1Raw2Digit::Class_Version(), "", 1194,
                  typeid(::BmnTof1Raw2Digit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTof1Raw2Digit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTof1Raw2Digit) );
      instance.SetNew(&new_BmnTof1Raw2Digit);
      instance.SetNewArray(&newArray_BmnTof1Raw2Digit);
      instance.SetDelete(&delete_BmnTof1Raw2Digit);
      instance.SetDeleteArray(&deleteArray_BmnTof1Raw2Digit);
      instance.SetDestructor(&destruct_BmnTof1Raw2Digit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTof1Raw2Digit*)
   {
      return GenerateInitInstanceLocal((::BmnTof1Raw2Digit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTof1Raw2Digit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnSiliconRaw2Digit(void *p = 0);
   static void *newArray_BmnSiliconRaw2Digit(Long_t size, void *p);
   static void delete_BmnSiliconRaw2Digit(void *p);
   static void deleteArray_BmnSiliconRaw2Digit(void *p);
   static void destruct_BmnSiliconRaw2Digit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnSiliconRaw2Digit*)
   {
      ::BmnSiliconRaw2Digit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnSiliconRaw2Digit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnSiliconRaw2Digit", ::BmnSiliconRaw2Digit::Class_Version(), "", 1260,
                  typeid(::BmnSiliconRaw2Digit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnSiliconRaw2Digit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnSiliconRaw2Digit) );
      instance.SetNew(&new_BmnSiliconRaw2Digit);
      instance.SetNewArray(&newArray_BmnSiliconRaw2Digit);
      instance.SetDelete(&delete_BmnSiliconRaw2Digit);
      instance.SetDeleteArray(&deleteArray_BmnSiliconRaw2Digit);
      instance.SetDestructor(&destruct_BmnSiliconRaw2Digit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnSiliconRaw2Digit*)
   {
      return GenerateInitInstanceLocal((::BmnSiliconRaw2Digit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnSiliconRaw2Digit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTrigRaw2Digit(void *p = 0);
   static void *newArray_BmnTrigRaw2Digit(Long_t size, void *p);
   static void delete_BmnTrigRaw2Digit(void *p);
   static void deleteArray_BmnTrigRaw2Digit(void *p);
   static void destruct_BmnTrigRaw2Digit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTrigRaw2Digit*)
   {
      ::BmnTrigRaw2Digit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTrigRaw2Digit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTrigRaw2Digit", ::BmnTrigRaw2Digit::Class_Version(), "BmnTrigRaw2Digit.h", 40,
                  typeid(::BmnTrigRaw2Digit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTrigRaw2Digit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnTrigRaw2Digit) );
      instance.SetNew(&new_BmnTrigRaw2Digit);
      instance.SetNewArray(&newArray_BmnTrigRaw2Digit);
      instance.SetDelete(&delete_BmnTrigRaw2Digit);
      instance.SetDeleteArray(&deleteArray_BmnTrigRaw2Digit);
      instance.SetDestructor(&destruct_BmnTrigRaw2Digit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTrigRaw2Digit*)
   {
      return GenerateInitInstanceLocal((::BmnTrigRaw2Digit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTrigRaw2Digit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnCscRaw2Digit(void *p = 0);
   static void *newArray_BmnCscRaw2Digit(Long_t size, void *p);
   static void delete_BmnCscRaw2Digit(void *p);
   static void deleteArray_BmnCscRaw2Digit(void *p);
   static void destruct_BmnCscRaw2Digit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnCscRaw2Digit*)
   {
      ::BmnCscRaw2Digit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnCscRaw2Digit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnCscRaw2Digit", ::BmnCscRaw2Digit::Class_Version(), "BmnCscRaw2Digit.h", 34,
                  typeid(::BmnCscRaw2Digit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnCscRaw2Digit::Dictionary, isa_proxy, 4,
                  sizeof(::BmnCscRaw2Digit) );
      instance.SetNew(&new_BmnCscRaw2Digit);
      instance.SetNewArray(&newArray_BmnCscRaw2Digit);
      instance.SetDelete(&delete_BmnCscRaw2Digit);
      instance.SetDeleteArray(&deleteArray_BmnCscRaw2Digit);
      instance.SetDestructor(&destruct_BmnCscRaw2Digit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnCscRaw2Digit*)
   {
      return GenerateInitInstanceLocal((::BmnCscRaw2Digit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnCscRaw2Digit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *BmnRawDataDecoder_Dictionary();
   static void BmnRawDataDecoder_TClassManip(TClass*);
   static void *new_BmnRawDataDecoder(void *p = 0);
   static void *newArray_BmnRawDataDecoder(Long_t size, void *p);
   static void delete_BmnRawDataDecoder(void *p);
   static void deleteArray_BmnRawDataDecoder(void *p);
   static void destruct_BmnRawDataDecoder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnRawDataDecoder*)
   {
      ::BmnRawDataDecoder *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BmnRawDataDecoder));
      static ::ROOT::TGenericClassInfo 
         instance("BmnRawDataDecoder", "", 1392,
                  typeid(::BmnRawDataDecoder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BmnRawDataDecoder_Dictionary, isa_proxy, 4,
                  sizeof(::BmnRawDataDecoder) );
      instance.SetNew(&new_BmnRawDataDecoder);
      instance.SetNewArray(&newArray_BmnRawDataDecoder);
      instance.SetDelete(&delete_BmnRawDataDecoder);
      instance.SetDeleteArray(&deleteArray_BmnRawDataDecoder);
      instance.SetDestructor(&destruct_BmnRawDataDecoder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnRawDataDecoder*)
   {
      return GenerateInitInstanceLocal((::BmnRawDataDecoder*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnRawDataDecoder*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BmnRawDataDecoder_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BmnRawDataDecoder*)0x0)->GetClass();
      BmnRawDataDecoder_TClassManip(theClass);
   return theClass;
   }

   static void BmnRawDataDecoder_TClassManip(TClass* ){
   }

} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnAdcProcessor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnAdcProcessor::Class_Name()
{
   return "BmnAdcProcessor";
}

//______________________________________________________________________________
const char *BmnAdcProcessor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnAdcProcessor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnAdcProcessor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnAdcProcessor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnAdcProcessor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnAdcProcessor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnAdcProcessor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnAdcProcessor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnDchRaw2Digit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnDchRaw2Digit::Class_Name()
{
   return "BmnDchRaw2Digit";
}

//______________________________________________________________________________
const char *BmnDchRaw2Digit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDchRaw2Digit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnDchRaw2Digit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDchRaw2Digit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnDchRaw2Digit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDchRaw2Digit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnDchRaw2Digit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDchRaw2Digit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnMwpcRaw2Digit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnMwpcRaw2Digit::Class_Name()
{
   return "BmnMwpcRaw2Digit";
}

//______________________________________________________________________________
const char *BmnMwpcRaw2Digit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcRaw2Digit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnMwpcRaw2Digit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcRaw2Digit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnMwpcRaw2Digit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcRaw2Digit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnMwpcRaw2Digit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMwpcRaw2Digit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnZDCRaw2Digit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnZDCRaw2Digit::Class_Name()
{
   return "BmnZDCRaw2Digit";
}

//______________________________________________________________________________
const char *BmnZDCRaw2Digit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZDCRaw2Digit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnZDCRaw2Digit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnZDCRaw2Digit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnZDCRaw2Digit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZDCRaw2Digit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnZDCRaw2Digit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnZDCRaw2Digit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnECALRaw2Digit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnECALRaw2Digit::Class_Name()
{
   return "BmnECALRaw2Digit";
}

//______________________________________________________________________________
const char *BmnECALRaw2Digit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnECALRaw2Digit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnECALRaw2Digit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnECALRaw2Digit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnECALRaw2Digit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnECALRaw2Digit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnECALRaw2Digit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnECALRaw2Digit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnLANDRaw2Digit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnLANDRaw2Digit::Class_Name()
{
   return "BmnLANDRaw2Digit";
}

//______________________________________________________________________________
const char *BmnLANDRaw2Digit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnLANDRaw2Digit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnLANDRaw2Digit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnLANDRaw2Digit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnLANDRaw2Digit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnLANDRaw2Digit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnLANDRaw2Digit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnLANDRaw2Digit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnGemRaw2Digit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGemRaw2Digit::Class_Name()
{
   return "BmnGemRaw2Digit";
}

//______________________________________________________________________________
const char *BmnGemRaw2Digit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemRaw2Digit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGemRaw2Digit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGemRaw2Digit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGemRaw2Digit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemRaw2Digit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGemRaw2Digit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGemRaw2Digit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTof2Raw2Digit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTof2Raw2Digit::Class_Name()
{
   return "BmnTof2Raw2Digit";
}

//______________________________________________________________________________
const char *BmnTof2Raw2Digit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTof2Raw2Digit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTof2Raw2Digit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTof2Raw2Digit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTof2Raw2Digit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTof2Raw2Digit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTof2Raw2Digit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTof2Raw2Digit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTof2Raw2DigitNew::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTof2Raw2DigitNew::Class_Name()
{
   return "BmnTof2Raw2DigitNew";
}

//______________________________________________________________________________
const char *BmnTof2Raw2DigitNew::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTof2Raw2DigitNew*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTof2Raw2DigitNew::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTof2Raw2DigitNew*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTof2Raw2DigitNew::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTof2Raw2DigitNew*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTof2Raw2DigitNew::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTof2Raw2DigitNew*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTof1Raw2Digit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTof1Raw2Digit::Class_Name()
{
   return "BmnTof1Raw2Digit";
}

//______________________________________________________________________________
const char *BmnTof1Raw2Digit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTof1Raw2Digit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTof1Raw2Digit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTof1Raw2Digit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTof1Raw2Digit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTof1Raw2Digit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTof1Raw2Digit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTof1Raw2Digit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnSiliconRaw2Digit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnSiliconRaw2Digit::Class_Name()
{
   return "BmnSiliconRaw2Digit";
}

//______________________________________________________________________________
const char *BmnSiliconRaw2Digit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconRaw2Digit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnSiliconRaw2Digit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconRaw2Digit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnSiliconRaw2Digit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconRaw2Digit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnSiliconRaw2Digit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnSiliconRaw2Digit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTrigRaw2Digit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTrigRaw2Digit::Class_Name()
{
   return "BmnTrigRaw2Digit";
}

//______________________________________________________________________________
const char *BmnTrigRaw2Digit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrigRaw2Digit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTrigRaw2Digit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrigRaw2Digit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTrigRaw2Digit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrigRaw2Digit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTrigRaw2Digit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrigRaw2Digit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnCscRaw2Digit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnCscRaw2Digit::Class_Name()
{
   return "BmnCscRaw2Digit";
}

//______________________________________________________________________________
const char *BmnCscRaw2Digit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnCscRaw2Digit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnCscRaw2Digit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnCscRaw2Digit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnCscRaw2Digit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnCscRaw2Digit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnCscRaw2Digit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnCscRaw2Digit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnAdcProcessor::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnAdcProcessor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnAdcProcessor::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnAdcProcessor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnAdcProcessor(void *p) {
      return  p ? new(p) ::BmnAdcProcessor : new ::BmnAdcProcessor;
   }
   static void *newArray_BmnAdcProcessor(Long_t nElements, void *p) {
      return p ? new(p) ::BmnAdcProcessor[nElements] : new ::BmnAdcProcessor[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnAdcProcessor(void *p) {
      delete ((::BmnAdcProcessor*)p);
   }
   static void deleteArray_BmnAdcProcessor(void *p) {
      delete [] ((::BmnAdcProcessor*)p);
   }
   static void destruct_BmnAdcProcessor(void *p) {
      typedef ::BmnAdcProcessor current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnAdcProcessor

//______________________________________________________________________________
void BmnDchRaw2Digit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnDchRaw2Digit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnDchRaw2Digit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnDchRaw2Digit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnDchRaw2Digit(void *p) {
      return  p ? new(p) ::BmnDchRaw2Digit : new ::BmnDchRaw2Digit;
   }
   static void *newArray_BmnDchRaw2Digit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnDchRaw2Digit[nElements] : new ::BmnDchRaw2Digit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnDchRaw2Digit(void *p) {
      delete ((::BmnDchRaw2Digit*)p);
   }
   static void deleteArray_BmnDchRaw2Digit(void *p) {
      delete [] ((::BmnDchRaw2Digit*)p);
   }
   static void destruct_BmnDchRaw2Digit(void *p) {
      typedef ::BmnDchRaw2Digit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnDchRaw2Digit

//______________________________________________________________________________
void BmnMwpcRaw2Digit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnMwpcRaw2Digit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnMwpcRaw2Digit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnMwpcRaw2Digit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnMwpcRaw2Digit(void *p) {
      return  p ? new(p) ::BmnMwpcRaw2Digit : new ::BmnMwpcRaw2Digit;
   }
   static void *newArray_BmnMwpcRaw2Digit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnMwpcRaw2Digit[nElements] : new ::BmnMwpcRaw2Digit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnMwpcRaw2Digit(void *p) {
      delete ((::BmnMwpcRaw2Digit*)p);
   }
   static void deleteArray_BmnMwpcRaw2Digit(void *p) {
      delete [] ((::BmnMwpcRaw2Digit*)p);
   }
   static void destruct_BmnMwpcRaw2Digit(void *p) {
      typedef ::BmnMwpcRaw2Digit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMwpcRaw2Digit

//______________________________________________________________________________
void BmnZDCRaw2Digit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnZDCRaw2Digit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnZDCRaw2Digit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnZDCRaw2Digit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnZDCRaw2Digit(void *p) {
      return  p ? new(p) ::BmnZDCRaw2Digit : new ::BmnZDCRaw2Digit;
   }
   static void *newArray_BmnZDCRaw2Digit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnZDCRaw2Digit[nElements] : new ::BmnZDCRaw2Digit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnZDCRaw2Digit(void *p) {
      delete ((::BmnZDCRaw2Digit*)p);
   }
   static void deleteArray_BmnZDCRaw2Digit(void *p) {
      delete [] ((::BmnZDCRaw2Digit*)p);
   }
   static void destruct_BmnZDCRaw2Digit(void *p) {
      typedef ::BmnZDCRaw2Digit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnZDCRaw2Digit

//______________________________________________________________________________
void BmnECALRaw2Digit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnECALRaw2Digit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnECALRaw2Digit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnECALRaw2Digit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnECALRaw2Digit(void *p) {
      return  p ? new(p) ::BmnECALRaw2Digit : new ::BmnECALRaw2Digit;
   }
   static void *newArray_BmnECALRaw2Digit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnECALRaw2Digit[nElements] : new ::BmnECALRaw2Digit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnECALRaw2Digit(void *p) {
      delete ((::BmnECALRaw2Digit*)p);
   }
   static void deleteArray_BmnECALRaw2Digit(void *p) {
      delete [] ((::BmnECALRaw2Digit*)p);
   }
   static void destruct_BmnECALRaw2Digit(void *p) {
      typedef ::BmnECALRaw2Digit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnECALRaw2Digit

//______________________________________________________________________________
void BmnLANDRaw2Digit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnLANDRaw2Digit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnLANDRaw2Digit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnLANDRaw2Digit::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnLANDRaw2Digit(void *p) {
      delete ((::BmnLANDRaw2Digit*)p);
   }
   static void deleteArray_BmnLANDRaw2Digit(void *p) {
      delete [] ((::BmnLANDRaw2Digit*)p);
   }
   static void destruct_BmnLANDRaw2Digit(void *p) {
      typedef ::BmnLANDRaw2Digit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnLANDRaw2Digit

//______________________________________________________________________________
void BmnGemRaw2Digit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGemRaw2Digit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnGemRaw2Digit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnGemRaw2Digit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnGemRaw2Digit(void *p) {
      return  p ? new(p) ::BmnGemRaw2Digit : new ::BmnGemRaw2Digit;
   }
   static void *newArray_BmnGemRaw2Digit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnGemRaw2Digit[nElements] : new ::BmnGemRaw2Digit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnGemRaw2Digit(void *p) {
      delete ((::BmnGemRaw2Digit*)p);
   }
   static void deleteArray_BmnGemRaw2Digit(void *p) {
      delete [] ((::BmnGemRaw2Digit*)p);
   }
   static void destruct_BmnGemRaw2Digit(void *p) {
      typedef ::BmnGemRaw2Digit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnGemRaw2Digit

//______________________________________________________________________________
void BmnTof2Raw2Digit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTof2Raw2Digit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTof2Raw2Digit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTof2Raw2Digit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTof2Raw2Digit(void *p) {
      return  p ? new(p) ::BmnTof2Raw2Digit : new ::BmnTof2Raw2Digit;
   }
   static void *newArray_BmnTof2Raw2Digit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTof2Raw2Digit[nElements] : new ::BmnTof2Raw2Digit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTof2Raw2Digit(void *p) {
      delete ((::BmnTof2Raw2Digit*)p);
   }
   static void deleteArray_BmnTof2Raw2Digit(void *p) {
      delete [] ((::BmnTof2Raw2Digit*)p);
   }
   static void destruct_BmnTof2Raw2Digit(void *p) {
      typedef ::BmnTof2Raw2Digit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTof2Raw2Digit

//______________________________________________________________________________
void BmnTof2Raw2DigitNew::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTof2Raw2DigitNew.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTof2Raw2DigitNew::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTof2Raw2DigitNew::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTof2Raw2DigitNew(void *p) {
      return  p ? new(p) ::BmnTof2Raw2DigitNew : new ::BmnTof2Raw2DigitNew;
   }
   static void *newArray_BmnTof2Raw2DigitNew(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTof2Raw2DigitNew[nElements] : new ::BmnTof2Raw2DigitNew[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTof2Raw2DigitNew(void *p) {
      delete ((::BmnTof2Raw2DigitNew*)p);
   }
   static void deleteArray_BmnTof2Raw2DigitNew(void *p) {
      delete [] ((::BmnTof2Raw2DigitNew*)p);
   }
   static void destruct_BmnTof2Raw2DigitNew(void *p) {
      typedef ::BmnTof2Raw2DigitNew current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTof2Raw2DigitNew

//______________________________________________________________________________
void BmnTof1Raw2Digit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTof1Raw2Digit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTof1Raw2Digit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTof1Raw2Digit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTof1Raw2Digit(void *p) {
      return  p ? new(p) ::BmnTof1Raw2Digit : new ::BmnTof1Raw2Digit;
   }
   static void *newArray_BmnTof1Raw2Digit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTof1Raw2Digit[nElements] : new ::BmnTof1Raw2Digit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTof1Raw2Digit(void *p) {
      delete ((::BmnTof1Raw2Digit*)p);
   }
   static void deleteArray_BmnTof1Raw2Digit(void *p) {
      delete [] ((::BmnTof1Raw2Digit*)p);
   }
   static void destruct_BmnTof1Raw2Digit(void *p) {
      typedef ::BmnTof1Raw2Digit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTof1Raw2Digit

//______________________________________________________________________________
void BmnSiliconRaw2Digit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnSiliconRaw2Digit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnSiliconRaw2Digit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnSiliconRaw2Digit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnSiliconRaw2Digit(void *p) {
      return  p ? new(p) ::BmnSiliconRaw2Digit : new ::BmnSiliconRaw2Digit;
   }
   static void *newArray_BmnSiliconRaw2Digit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnSiliconRaw2Digit[nElements] : new ::BmnSiliconRaw2Digit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnSiliconRaw2Digit(void *p) {
      delete ((::BmnSiliconRaw2Digit*)p);
   }
   static void deleteArray_BmnSiliconRaw2Digit(void *p) {
      delete [] ((::BmnSiliconRaw2Digit*)p);
   }
   static void destruct_BmnSiliconRaw2Digit(void *p) {
      typedef ::BmnSiliconRaw2Digit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnSiliconRaw2Digit

//______________________________________________________________________________
void BmnTrigRaw2Digit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTrigRaw2Digit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnTrigRaw2Digit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnTrigRaw2Digit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTrigRaw2Digit(void *p) {
      return  p ? new(p) ::BmnTrigRaw2Digit : new ::BmnTrigRaw2Digit;
   }
   static void *newArray_BmnTrigRaw2Digit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTrigRaw2Digit[nElements] : new ::BmnTrigRaw2Digit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTrigRaw2Digit(void *p) {
      delete ((::BmnTrigRaw2Digit*)p);
   }
   static void deleteArray_BmnTrigRaw2Digit(void *p) {
      delete [] ((::BmnTrigRaw2Digit*)p);
   }
   static void destruct_BmnTrigRaw2Digit(void *p) {
      typedef ::BmnTrigRaw2Digit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnTrigRaw2Digit

//______________________________________________________________________________
void BmnCscRaw2Digit::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnCscRaw2Digit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnCscRaw2Digit::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnCscRaw2Digit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnCscRaw2Digit(void *p) {
      return  p ? new(p) ::BmnCscRaw2Digit : new ::BmnCscRaw2Digit;
   }
   static void *newArray_BmnCscRaw2Digit(Long_t nElements, void *p) {
      return p ? new(p) ::BmnCscRaw2Digit[nElements] : new ::BmnCscRaw2Digit[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnCscRaw2Digit(void *p) {
      delete ((::BmnCscRaw2Digit*)p);
   }
   static void deleteArray_BmnCscRaw2Digit(void *p) {
      delete [] ((::BmnCscRaw2Digit*)p);
   }
   static void destruct_BmnCscRaw2Digit(void *p) {
      typedef ::BmnCscRaw2Digit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnCscRaw2Digit

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnRawDataDecoder(void *p) {
      return  p ? new(p) ::BmnRawDataDecoder : new ::BmnRawDataDecoder;
   }
   static void *newArray_BmnRawDataDecoder(Long_t nElements, void *p) {
      return p ? new(p) ::BmnRawDataDecoder[nElements] : new ::BmnRawDataDecoder[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnRawDataDecoder(void *p) {
      delete ((::BmnRawDataDecoder*)p);
   }
   static void deleteArray_BmnRawDataDecoder(void *p) {
      delete [] ((::BmnRawDataDecoder*)p);
   }
   static void destruct_BmnRawDataDecoder(void *p) {
      typedef ::BmnRawDataDecoder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnRawDataDecoder

namespace ROOT {
   static TClass *vectorlEunsignedsPintgR_Dictionary();
   static void vectorlEunsignedsPintgR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPintgR(void *p = 0);
   static void *newArray_vectorlEunsignedsPintgR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPintgR(void *p);
   static void deleteArray_vectorlEunsignedsPintgR(void *p);
   static void destruct_vectorlEunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned int>*)
   {
      vector<unsigned int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned int>", -2, "vector", 216,
                  typeid(vector<unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<unsigned int>) );
      instance.SetNew(&new_vectorlEunsignedsPintgR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPintgR);
      instance.SetDelete(&delete_vectorlEunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPintgR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<unsigned int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<unsigned int>*)0x0)->GetClass();
      vectorlEunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned int> : new vector<unsigned int>;
   }
   static void *newArray_vectorlEunsignedsPintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned int>[nElements] : new vector<unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPintgR(void *p) {
      delete ((vector<unsigned int>*)p);
   }
   static void deleteArray_vectorlEunsignedsPintgR(void *p) {
      delete [] ((vector<unsigned int>*)p);
   }
   static void destruct_vectorlEunsignedsPintgR(void *p) {
      typedef vector<unsigned int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned int>

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
                  &vectorlETClonesArraymUgR_Dictionary, isa_proxy, 0,
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
   static TClass *vectorlEGemMapStructuregR_Dictionary();
   static void vectorlEGemMapStructuregR_TClassManip(TClass*);
   static void *new_vectorlEGemMapStructuregR(void *p = 0);
   static void *newArray_vectorlEGemMapStructuregR(Long_t size, void *p);
   static void delete_vectorlEGemMapStructuregR(void *p);
   static void deleteArray_vectorlEGemMapStructuregR(void *p);
   static void destruct_vectorlEGemMapStructuregR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<GemMapStructure>*)
   {
      vector<GemMapStructure> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<GemMapStructure>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<GemMapStructure>", -2, "vector", 216,
                  typeid(vector<GemMapStructure>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEGemMapStructuregR_Dictionary, isa_proxy, 0,
                  sizeof(vector<GemMapStructure>) );
      instance.SetNew(&new_vectorlEGemMapStructuregR);
      instance.SetNewArray(&newArray_vectorlEGemMapStructuregR);
      instance.SetDelete(&delete_vectorlEGemMapStructuregR);
      instance.SetDeleteArray(&deleteArray_vectorlEGemMapStructuregR);
      instance.SetDestructor(&destruct_vectorlEGemMapStructuregR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<GemMapStructure> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<GemMapStructure>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEGemMapStructuregR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<GemMapStructure>*)0x0)->GetClass();
      vectorlEGemMapStructuregR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEGemMapStructuregR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEGemMapStructuregR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<GemMapStructure> : new vector<GemMapStructure>;
   }
   static void *newArray_vectorlEGemMapStructuregR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<GemMapStructure>[nElements] : new vector<GemMapStructure>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEGemMapStructuregR(void *p) {
      delete ((vector<GemMapStructure>*)p);
   }
   static void deleteArray_vectorlEGemMapStructuregR(void *p) {
      delete [] ((vector<GemMapStructure>*)p);
   }
   static void destruct_vectorlEGemMapStructuregR(void *p) {
      typedef vector<GemMapStructure> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<GemMapStructure>

namespace ROOT {
   static TClass *vectorlEBmnTrigMappinggR_Dictionary();
   static void vectorlEBmnTrigMappinggR_TClassManip(TClass*);
   static void *new_vectorlEBmnTrigMappinggR(void *p = 0);
   static void *newArray_vectorlEBmnTrigMappinggR(Long_t size, void *p);
   static void delete_vectorlEBmnTrigMappinggR(void *p);
   static void deleteArray_vectorlEBmnTrigMappinggR(void *p);
   static void destruct_vectorlEBmnTrigMappinggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnTrigMapping>*)
   {
      vector<BmnTrigMapping> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnTrigMapping>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnTrigMapping>", -2, "vector", 216,
                  typeid(vector<BmnTrigMapping>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnTrigMappinggR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnTrigMapping>) );
      instance.SetNew(&new_vectorlEBmnTrigMappinggR);
      instance.SetNewArray(&newArray_vectorlEBmnTrigMappinggR);
      instance.SetDelete(&delete_vectorlEBmnTrigMappinggR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnTrigMappinggR);
      instance.SetDestructor(&destruct_vectorlEBmnTrigMappinggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnTrigMapping> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnTrigMapping>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnTrigMappinggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnTrigMapping>*)0x0)->GetClass();
      vectorlEBmnTrigMappinggR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnTrigMappinggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnTrigMappinggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnTrigMapping> : new vector<BmnTrigMapping>;
   }
   static void *newArray_vectorlEBmnTrigMappinggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnTrigMapping>[nElements] : new vector<BmnTrigMapping>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnTrigMappinggR(void *p) {
      delete ((vector<BmnTrigMapping>*)p);
   }
   static void deleteArray_vectorlEBmnTrigMappinggR(void *p) {
      delete [] ((vector<BmnTrigMapping>*)p);
   }
   static void destruct_vectorlEBmnTrigMappinggR(void *p) {
      typedef vector<BmnTrigMapping> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnTrigMapping>

namespace ROOT {
   static TClass *vectorlEBmnSiliconMappinggR_Dictionary();
   static void vectorlEBmnSiliconMappinggR_TClassManip(TClass*);
   static void *new_vectorlEBmnSiliconMappinggR(void *p = 0);
   static void *newArray_vectorlEBmnSiliconMappinggR(Long_t size, void *p);
   static void delete_vectorlEBmnSiliconMappinggR(void *p);
   static void deleteArray_vectorlEBmnSiliconMappinggR(void *p);
   static void destruct_vectorlEBmnSiliconMappinggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnSiliconMapping>*)
   {
      vector<BmnSiliconMapping> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnSiliconMapping>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnSiliconMapping>", -2, "vector", 216,
                  typeid(vector<BmnSiliconMapping>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnSiliconMappinggR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnSiliconMapping>) );
      instance.SetNew(&new_vectorlEBmnSiliconMappinggR);
      instance.SetNewArray(&newArray_vectorlEBmnSiliconMappinggR);
      instance.SetDelete(&delete_vectorlEBmnSiliconMappinggR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnSiliconMappinggR);
      instance.SetDestructor(&destruct_vectorlEBmnSiliconMappinggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnSiliconMapping> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnSiliconMapping>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnSiliconMappinggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnSiliconMapping>*)0x0)->GetClass();
      vectorlEBmnSiliconMappinggR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnSiliconMappinggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnSiliconMappinggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnSiliconMapping> : new vector<BmnSiliconMapping>;
   }
   static void *newArray_vectorlEBmnSiliconMappinggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnSiliconMapping>[nElements] : new vector<BmnSiliconMapping>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnSiliconMappinggR(void *p) {
      delete ((vector<BmnSiliconMapping>*)p);
   }
   static void deleteArray_vectorlEBmnSiliconMappinggR(void *p) {
      delete [] ((vector<BmnSiliconMapping>*)p);
   }
   static void destruct_vectorlEBmnSiliconMappinggR(void *p) {
      typedef vector<BmnSiliconMapping> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnSiliconMapping>

namespace ROOT {
   static TClass *vectorlEBmnMwpcMappinggR_Dictionary();
   static void vectorlEBmnMwpcMappinggR_TClassManip(TClass*);
   static void *new_vectorlEBmnMwpcMappinggR(void *p = 0);
   static void *newArray_vectorlEBmnMwpcMappinggR(Long_t size, void *p);
   static void delete_vectorlEBmnMwpcMappinggR(void *p);
   static void deleteArray_vectorlEBmnMwpcMappinggR(void *p);
   static void destruct_vectorlEBmnMwpcMappinggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnMwpcMapping>*)
   {
      vector<BmnMwpcMapping> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnMwpcMapping>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnMwpcMapping>", -2, "vector", 216,
                  typeid(vector<BmnMwpcMapping>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnMwpcMappinggR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnMwpcMapping>) );
      instance.SetNew(&new_vectorlEBmnMwpcMappinggR);
      instance.SetNewArray(&newArray_vectorlEBmnMwpcMappinggR);
      instance.SetDelete(&delete_vectorlEBmnMwpcMappinggR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnMwpcMappinggR);
      instance.SetDestructor(&destruct_vectorlEBmnMwpcMappinggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnMwpcMapping> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnMwpcMapping>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnMwpcMappinggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnMwpcMapping>*)0x0)->GetClass();
      vectorlEBmnMwpcMappinggR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnMwpcMappinggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnMwpcMappinggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnMwpcMapping> : new vector<BmnMwpcMapping>;
   }
   static void *newArray_vectorlEBmnMwpcMappinggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnMwpcMapping>[nElements] : new vector<BmnMwpcMapping>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnMwpcMappinggR(void *p) {
      delete ((vector<BmnMwpcMapping>*)p);
   }
   static void deleteArray_vectorlEBmnMwpcMappinggR(void *p) {
      delete [] ((vector<BmnMwpcMapping>*)p);
   }
   static void destruct_vectorlEBmnMwpcMappinggR(void *p) {
      typedef vector<BmnMwpcMapping> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnMwpcMapping>

namespace ROOT {
   static TClass *vectorlEBmnLANDRaw2DigitcLcLTCalgR_Dictionary();
   static void vectorlEBmnLANDRaw2DigitcLcLTCalgR_TClassManip(TClass*);
   static void *new_vectorlEBmnLANDRaw2DigitcLcLTCalgR(void *p = 0);
   static void *newArray_vectorlEBmnLANDRaw2DigitcLcLTCalgR(Long_t size, void *p);
   static void delete_vectorlEBmnLANDRaw2DigitcLcLTCalgR(void *p);
   static void deleteArray_vectorlEBmnLANDRaw2DigitcLcLTCalgR(void *p);
   static void destruct_vectorlEBmnLANDRaw2DigitcLcLTCalgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnLANDRaw2Digit::TCal>*)
   {
      vector<BmnLANDRaw2Digit::TCal> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnLANDRaw2Digit::TCal>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnLANDRaw2Digit::TCal>", -2, "vector", 216,
                  typeid(vector<BmnLANDRaw2Digit::TCal>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnLANDRaw2DigitcLcLTCalgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnLANDRaw2Digit::TCal>) );
      instance.SetNew(&new_vectorlEBmnLANDRaw2DigitcLcLTCalgR);
      instance.SetNewArray(&newArray_vectorlEBmnLANDRaw2DigitcLcLTCalgR);
      instance.SetDelete(&delete_vectorlEBmnLANDRaw2DigitcLcLTCalgR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnLANDRaw2DigitcLcLTCalgR);
      instance.SetDestructor(&destruct_vectorlEBmnLANDRaw2DigitcLcLTCalgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnLANDRaw2Digit::TCal> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnLANDRaw2Digit::TCal>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnLANDRaw2DigitcLcLTCalgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnLANDRaw2Digit::TCal>*)0x0)->GetClass();
      vectorlEBmnLANDRaw2DigitcLcLTCalgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnLANDRaw2DigitcLcLTCalgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnLANDRaw2DigitcLcLTCalgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnLANDRaw2Digit::TCal> : new vector<BmnLANDRaw2Digit::TCal>;
   }
   static void *newArray_vectorlEBmnLANDRaw2DigitcLcLTCalgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnLANDRaw2Digit::TCal>[nElements] : new vector<BmnLANDRaw2Digit::TCal>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnLANDRaw2DigitcLcLTCalgR(void *p) {
      delete ((vector<BmnLANDRaw2Digit::TCal>*)p);
   }
   static void deleteArray_vectorlEBmnLANDRaw2DigitcLcLTCalgR(void *p) {
      delete [] ((vector<BmnLANDRaw2Digit::TCal>*)p);
   }
   static void destruct_vectorlEBmnLANDRaw2DigitcLcLTCalgR(void *p) {
      typedef vector<BmnLANDRaw2Digit::TCal> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnLANDRaw2Digit::TCal>

namespace ROOT {
   static TClass *vectorlEBmnCscMappingmUgR_Dictionary();
   static void vectorlEBmnCscMappingmUgR_TClassManip(TClass*);
   static void *new_vectorlEBmnCscMappingmUgR(void *p = 0);
   static void *newArray_vectorlEBmnCscMappingmUgR(Long_t size, void *p);
   static void delete_vectorlEBmnCscMappingmUgR(void *p);
   static void deleteArray_vectorlEBmnCscMappingmUgR(void *p);
   static void destruct_vectorlEBmnCscMappingmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnCscMapping*>*)
   {
      vector<BmnCscMapping*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnCscMapping*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnCscMapping*>", -2, "vector", 216,
                  typeid(vector<BmnCscMapping*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnCscMappingmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<BmnCscMapping*>) );
      instance.SetNew(&new_vectorlEBmnCscMappingmUgR);
      instance.SetNewArray(&newArray_vectorlEBmnCscMappingmUgR);
      instance.SetDelete(&delete_vectorlEBmnCscMappingmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnCscMappingmUgR);
      instance.SetDestructor(&destruct_vectorlEBmnCscMappingmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnCscMapping*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnCscMapping*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnCscMappingmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnCscMapping*>*)0x0)->GetClass();
      vectorlEBmnCscMappingmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnCscMappingmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnCscMappingmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnCscMapping*> : new vector<BmnCscMapping*>;
   }
   static void *newArray_vectorlEBmnCscMappingmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnCscMapping*>[nElements] : new vector<BmnCscMapping*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnCscMappingmUgR(void *p) {
      delete ((vector<BmnCscMapping*>*)p);
   }
   static void deleteArray_vectorlEBmnCscMappingmUgR(void *p) {
      delete [] ((vector<BmnCscMapping*>*)p);
   }
   static void destruct_vectorlEBmnCscMappingmUgR(void *p) {
      typedef vector<BmnCscMapping*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnCscMapping*>

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

namespace ROOT {
   static TClass *maplEunsignedsPintcOBmnTof1TDCParametersgR_Dictionary();
   static void maplEunsignedsPintcOBmnTof1TDCParametersgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPintcOBmnTof1TDCParametersgR(void *p = 0);
   static void *newArray_maplEunsignedsPintcOBmnTof1TDCParametersgR(Long_t size, void *p);
   static void delete_maplEunsignedsPintcOBmnTof1TDCParametersgR(void *p);
   static void deleteArray_maplEunsignedsPintcOBmnTof1TDCParametersgR(void *p);
   static void destruct_maplEunsignedsPintcOBmnTof1TDCParametersgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned int,BmnTof1TDCParameters>*)
   {
      map<unsigned int,BmnTof1TDCParameters> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned int,BmnTof1TDCParameters>));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned int,BmnTof1TDCParameters>", -2, "map", 99,
                  typeid(map<unsigned int,BmnTof1TDCParameters>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPintcOBmnTof1TDCParametersgR_Dictionary, isa_proxy, 0,
                  sizeof(map<unsigned int,BmnTof1TDCParameters>) );
      instance.SetNew(&new_maplEunsignedsPintcOBmnTof1TDCParametersgR);
      instance.SetNewArray(&newArray_maplEunsignedsPintcOBmnTof1TDCParametersgR);
      instance.SetDelete(&delete_maplEunsignedsPintcOBmnTof1TDCParametersgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPintcOBmnTof1TDCParametersgR);
      instance.SetDestructor(&destruct_maplEunsignedsPintcOBmnTof1TDCParametersgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned int,BmnTof1TDCParameters> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<unsigned int,BmnTof1TDCParameters>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPintcOBmnTof1TDCParametersgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<unsigned int,BmnTof1TDCParameters>*)0x0)->GetClass();
      maplEunsignedsPintcOBmnTof1TDCParametersgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPintcOBmnTof1TDCParametersgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPintcOBmnTof1TDCParametersgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,BmnTof1TDCParameters> : new map<unsigned int,BmnTof1TDCParameters>;
   }
   static void *newArray_maplEunsignedsPintcOBmnTof1TDCParametersgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,BmnTof1TDCParameters>[nElements] : new map<unsigned int,BmnTof1TDCParameters>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPintcOBmnTof1TDCParametersgR(void *p) {
      delete ((map<unsigned int,BmnTof1TDCParameters>*)p);
   }
   static void deleteArray_maplEunsignedsPintcOBmnTof1TDCParametersgR(void *p) {
      delete [] ((map<unsigned int,BmnTof1TDCParameters>*)p);
   }
   static void destruct_maplEunsignedsPintcOBmnTof1TDCParametersgR(void *p) {
      typedef map<unsigned int,BmnTof1TDCParameters> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<unsigned int,BmnTof1TDCParameters>

namespace ROOT {
   static TClass *maplEpairlEunsignedsPintcOunsignedsPchargRcOunsignedsPintgR_Dictionary();
   static void maplEpairlEunsignedsPintcOunsignedsPchargRcOunsignedsPintgR_TClassManip(TClass*);
   static void *new_maplEpairlEunsignedsPintcOunsignedsPchargRcOunsignedsPintgR(void *p = 0);
   static void *newArray_maplEpairlEunsignedsPintcOunsignedsPchargRcOunsignedsPintgR(Long_t size, void *p);
   static void delete_maplEpairlEunsignedsPintcOunsignedsPchargRcOunsignedsPintgR(void *p);
   static void deleteArray_maplEpairlEunsignedsPintcOunsignedsPchargRcOunsignedsPintgR(void *p);
   static void destruct_maplEpairlEunsignedsPintcOunsignedsPchargRcOunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<pair<unsigned int,unsigned char>,unsigned int>*)
   {
      map<pair<unsigned int,unsigned char>,unsigned int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<pair<unsigned int,unsigned char>,unsigned int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<pair<unsigned int,unsigned char>,unsigned int>", -2, "map", 99,
                  typeid(map<pair<unsigned int,unsigned char>,unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEpairlEunsignedsPintcOunsignedsPchargRcOunsignedsPintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<pair<unsigned int,unsigned char>,unsigned int>) );
      instance.SetNew(&new_maplEpairlEunsignedsPintcOunsignedsPchargRcOunsignedsPintgR);
      instance.SetNewArray(&newArray_maplEpairlEunsignedsPintcOunsignedsPchargRcOunsignedsPintgR);
      instance.SetDelete(&delete_maplEpairlEunsignedsPintcOunsignedsPchargRcOunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_maplEpairlEunsignedsPintcOunsignedsPchargRcOunsignedsPintgR);
      instance.SetDestructor(&destruct_maplEpairlEunsignedsPintcOunsignedsPchargRcOunsignedsPintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<pair<unsigned int,unsigned char>,unsigned int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<pair<unsigned int,unsigned char>,unsigned int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEpairlEunsignedsPintcOunsignedsPchargRcOunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<pair<unsigned int,unsigned char>,unsigned int>*)0x0)->GetClass();
      maplEpairlEunsignedsPintcOunsignedsPchargRcOunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEpairlEunsignedsPintcOunsignedsPchargRcOunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEpairlEunsignedsPintcOunsignedsPchargRcOunsignedsPintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<pair<unsigned int,unsigned char>,unsigned int> : new map<pair<unsigned int,unsigned char>,unsigned int>;
   }
   static void *newArray_maplEpairlEunsignedsPintcOunsignedsPchargRcOunsignedsPintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<pair<unsigned int,unsigned char>,unsigned int>[nElements] : new map<pair<unsigned int,unsigned char>,unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEpairlEunsignedsPintcOunsignedsPchargRcOunsignedsPintgR(void *p) {
      delete ((map<pair<unsigned int,unsigned char>,unsigned int>*)p);
   }
   static void deleteArray_maplEpairlEunsignedsPintcOunsignedsPchargRcOunsignedsPintgR(void *p) {
      delete [] ((map<pair<unsigned int,unsigned char>,unsigned int>*)p);
   }
   static void destruct_maplEpairlEunsignedsPintcOunsignedsPchargRcOunsignedsPintgR(void *p) {
      typedef map<pair<unsigned int,unsigned char>,unsigned int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<pair<unsigned int,unsigned char>,unsigned int>

namespace ROOT {
   static TClass *dequelEunsignedsPintgR_Dictionary();
   static void dequelEunsignedsPintgR_TClassManip(TClass*);
   static void *new_dequelEunsignedsPintgR(void *p = 0);
   static void *newArray_dequelEunsignedsPintgR(Long_t size, void *p);
   static void delete_dequelEunsignedsPintgR(void *p);
   static void deleteArray_dequelEunsignedsPintgR(void *p);
   static void destruct_dequelEunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const deque<unsigned int>*)
   {
      deque<unsigned int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(deque<unsigned int>));
      static ::ROOT::TGenericClassInfo 
         instance("deque<unsigned int>", -2, "deque", 831,
                  typeid(deque<unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &dequelEunsignedsPintgR_Dictionary, isa_proxy, 0,
                  sizeof(deque<unsigned int>) );
      instance.SetNew(&new_dequelEunsignedsPintgR);
      instance.SetNewArray(&newArray_dequelEunsignedsPintgR);
      instance.SetDelete(&delete_dequelEunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_dequelEunsignedsPintgR);
      instance.SetDestructor(&destruct_dequelEunsignedsPintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< deque<unsigned int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const deque<unsigned int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *dequelEunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const deque<unsigned int>*)0x0)->GetClass();
      dequelEunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void dequelEunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_dequelEunsignedsPintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) deque<unsigned int> : new deque<unsigned int>;
   }
   static void *newArray_dequelEunsignedsPintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) deque<unsigned int>[nElements] : new deque<unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_dequelEunsignedsPintgR(void *p) {
      delete ((deque<unsigned int>*)p);
   }
   static void deleteArray_dequelEunsignedsPintgR(void *p) {
      delete [] ((deque<unsigned int>*)p);
   }
   static void destruct_dequelEunsignedsPintgR(void *p) {
      typedef deque<unsigned int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class deque<unsigned int>

namespace {
  void TriggerDictionaryInitialization_G__DecoderDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/opt/fairroot/install/include",
"/home/alex/bmnroot_dev/bmnroot/bmndata",
"/home/alex/bmnroot_dev/bmnroot/bmndata/math",
"/home/alex/bmnroot_dev/bmnroot/gem",
"/home/alex/bmnroot_dev/bmnroot/silicon",
"/home/alex/bmnroot_dev/bmnroot/globaltracking",
"/home/alex/bmnroot_dev/bmnroot/uni_db",
"/home/alex/bmnroot_dev/bmnroot/uni_db/db_classes",
"/home/alex/bmnroot_dev/bmnroot/decoder",
"/opt/fairsoft/install/include",
"/opt/fairsoft/install/include/root",
"/opt/fairsoft/install/include/root",
"/home/alex/bmnroot_dev/bmnroot/build/decoder/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__DecoderDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class BmnAdcProcessor;
class BmnDchRaw2Digit;
class BmnMwpcRaw2Digit;
class BmnZDCRaw2Digit;
class BmnECALRaw2Digit;
class BmnLANDRaw2Digit;
class BmnGemRaw2Digit;
class BmnTof2Raw2Digit;
class BmnTof2Raw2DigitNew;
class BmnTof1Raw2Digit;
class BmnSiliconRaw2Digit;
class __attribute__((annotate("$clingAutoload$BmnTrigRaw2Digit.h")))  BmnTrigRaw2Digit;
class __attribute__((annotate("$clingAutoload$BmnCscRaw2Digit.h")))  BmnCscRaw2Digit;
class BmnRawDataDecoder;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__DecoderDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H

//
// Base class for processing data from ADC detectors
// It's used for pedestal calculation
//

#ifndef BMNADCPROCESSOR_H
#define BMNADCPROCESSOR_H

#include "TString.h"
#include "TTree.h"
#include "TClonesArray.h"
#include <iostream>
#include "BmnADCDigit.h"
#include "BmnEnums.h"
#include "TMath.h"
#include <fstream>
#include <list>
#include <map>
#include <vector>
#include <UniDbDetectorParameter.h>
#include <UniDbDetector.h>

#define N_EV_FOR_PEDESTALS 500
#define ADC_N_CHANNELS 64 //number of ADC channels
#define ADC128_N_SAMPLES 128 //number of samples in one ADC digit //silicon
#define ADC32_N_SAMPLES 32 //number of samples in one ADC digit //gem

using namespace std;
using namespace TMath;

class BmnAdcProcessor {
public:
    BmnAdcProcessor(Int_t period, Int_t run, TString det, Int_t nCh, Int_t nSmpl, vector<UInt_t> vSer);
    BmnAdcProcessor();
    virtual ~BmnAdcProcessor();

    BmnStatus RecalculatePedestals();
    Double_t CalcCMS(Double_t* samples, Int_t size);

    Double_t**** GetPedData() {
        return fPedDat;
    }

    void SetNSerials(Int_t n) {
        fNSerials = n;
    }

    void SetNSamples(Int_t n) {
        fNSamples = n;
    }

    void SetNChannels(Int_t n) {
        fNChannels = n;
    }

    Double_t GetPedestal(Int_t ser, Int_t ch, Int_t smpl) {
        return fPedVal[ser][ch][smpl];
    }

    Double_t*** GetPedestals() {
        return fPedVal;
    }

    Double_t*** GetPedestalsRMS() {
        return fPedRms;
    }

    Int_t GetPeriod() {
        return fPeriod;
    }

    Int_t GetRun() {
        return fRun;
    }

    vector<UInt_t> GetSerials() {
        return fSerials;
    }

    UInt_t GetBoundaryRun(UInt_t nSmpl) {
        //format for SILICON data was changed during March 2017 seance (run 1542)
        //format for GEM was changed after March 2017 seance (run 1992)
        //so we have to use this crutch.
        return (nSmpl == 128) ? 1542 : 1992;
    }


private:

    vector<UInt_t> fSerials; //list of serial id for ADC-detector

    Int_t fEntriesInGlobMap; // number of entries in BD table for Global Mapping

    Int_t fPeriod;
    Int_t fRun;
    Int_t fNSerials;
    Int_t fNSamples;
    Int_t fNChannels;
    TString fDetName; //it's used for .txt files name 

    Double_t**** fPedDat; //data set to calculate pedestals
    Double_t*** fPedVal; //set of calculated pedestals
    Double_t*** fPedRms; // set of calculated pedestal errors
    UInt_t*** fAdcProfiles;

    ClassDef(BmnAdcProcessor, 1);
};

#endif /* BMNADCPROCESSOR_H */

#ifndef BMNDCHRAW2DIGIT_H
#define BMNDCHRAW2DIGIT_H 

#include "TString.h"
#include "TClonesArray.h"
#include "BmnTDCDigit.h"
#include "BmnSyncDigit.h"
#include <iostream>
#include "Riostream.h"
#include "BmnDchDigit.h"
#include "BmnEnums.h"
#include <cstdlib>
#include <bitset>
#include <map>
#include <UniDbDetectorParameter.h>

#define DCH_TDC_TYPE (0x10) //TDC64V

class BmnDchRaw2Digit {
public:
    BmnDchRaw2Digit(Int_t period, Int_t run);
    BmnDchRaw2Digit() {
        fMap1 = NULL;
        fMap2 = NULL;
    };
    ~BmnDchRaw2Digit() {
        if (fMap1) delete[] fMap1;
        if (fMap2) delete[] fMap2;
    };
    
    void FillEvent(TClonesArray *tdc, map<UInt_t, Long64_t> *ts, TClonesArray *dch, Double_t t0);

private:
    
    DchMapStructure* fMap1;
    DchMapStructure* fMap2;
    
    Int_t fEntriesInMap1; // member of entries in BD table for DCH1
    Int_t fEntriesInMap2; // member of entries in BD table for DCH2
    
    Int_t GetChTDC64v(UInt_t tdc, UInt_t ch);
    BmnStatus FindInMap(BmnTDCDigit* dig, TClonesArray* arr, Long64_t ts, Double_t t0, Int_t dchId);

    ClassDef(BmnDchRaw2Digit, 1);
};
#endif /* BMNDCHRAW2DIGIT_H */



#ifndef BMNMWPCRAW2DIGIT_H
#define BMNMWPCRAW2DIGIT_H

#include "TString.h"
#include "TClonesArray.h"
#include "BmnHRBDigit.h"
#include "BmnSyncDigit.h"
#include <iostream>
#include "Riostream.h"
#include "BmnMwpcDigit.h"
#include "BmnEnums.h"
#include <cstdlib>
#include <bitset>
#include <map>
#include <UniDbDetectorParameter.h>

#define N_WIRES_MWPC 96

struct BmnMwpcMapping {
    UInt_t serial;
    Short_t station;
    Short_t plane;
};

class BmnMwpcRaw2Digit {

private:
    
    TString fMapFileName;
    ifstream fMapFile;
    
    vector<BmnMwpcMapping> fMap;

public:
    BmnMwpcRaw2Digit(TString mapName);
    BmnMwpcRaw2Digit() {};
    ~BmnMwpcRaw2Digit() {};
    
    void SetMapFileName(TString name) {
        fMapFileName = name;
    };
    void FillEvent(TClonesArray *hrb, TClonesArray *mwpc);

    ClassDef(BmnMwpcRaw2Digit, 1);
};

#endif /* BMNMWPCRAW2DIGIT_H */

#ifndef BMNZDCRAW2DIGIT_H
#define	BMNZDCRAW2DIGIT_H 

#include "TString.h"
#include "TClonesArray.h"
#include "TMinuit.h"
#include "TH1F.h"
#include "TProfile.h"
#include "BmnTDCDigit.h"
#include "BmnADCDigit.h"
#include "BmnSyncDigit.h"
#include <iostream>
#include "Riostream.h"
#include "BmnZDCDigit.h"
#include <cstdlib> 

#define MAX_EVENTS 10000
#define MAX_CHANNELS 104
#define MAX_LOG_CHANNELS 24

static int nevents;
static float amp_array[MAX_EVENTS][MAX_CHANNELS];
static float pedestals[MAX_EVENTS][MAX_CHANNELS];
static float profile_amp[MAX_EVENTS][MAX_CHANNELS];
static float profile_err[MAX_EVENTS][MAX_CHANNELS];
static int use_log_function;

class Bmn_ZDC_map_element{
public:
  Bmn_ZDC_map_element(){ id=chan=adc_chan=size=x=y=-1; used=0;};
  void set(unsigned long v1,unsigned char v2,unsigned char v3,unsigned char v4,unsigned char v5,unsigned char v6,unsigned char v7, float v8, float v9){
    id=v1; chan=v2; adc_chan=v3; size=v4; ix=v5; iy=v6; used=v7; x=v8; y=v9;
  }; 
  unsigned long id;
  unsigned char chan;
  unsigned char adc_chan;
  unsigned char size;
  unsigned char ix;
  unsigned char iy;
  unsigned char used;
  float x;
  float y;
};

class BmnZDCRaw2Digit{

public:
    BmnZDCRaw2Digit(TString mappingFile, TString runFile, TString calibrationFile = "", TString MaxPositionFile = "");
    BmnZDCRaw2Digit();

    ~BmnZDCRaw2Digit();

    void print();

    void setParStep(Float_t p) { pstep = p;};
    Float_t getParStep() { return pstep;};

    void setParStart(Float_t p) { pstart = p;};
    Float_t getParStart() { return pstart;};

    void setThreshold(Float_t t) { thres = t;};
    Float_t getThreshold() { return thres;};

    void setEnergy(Float_t e) { shower_energy = e;};
    Float_t getEnergy() { return shower_energy;};

    void setError(Float_t s) { sigma_amp = s;};
    Float_t getError() { return sigma_amp;};

    void setNorm(Float_t n) { shower_norm = n;};
    Float_t getNorm() { return shower_norm;};

    void setType(Int_t t) { wave2amp_flag = t;};
    Int_t getType() { return wave2amp_flag;};

    void setMinSamples(Int_t m) { min_samples = m;};
    Int_t getMinSamples() { return min_samples;};

    void setPedSamples(Int_t p) { ped_samples = p;};
    Int_t getPedSamples() { return ped_samples;};

    void setUseMeanXY(Int_t u) { use_meanxy = u;};
    Int_t getUseMeanXY() { return use_meanxy;};

    void setLogFunction(Int_t u) { use_log_function = u;};
    Int_t getUseLogFunction() { return use_log_function;};

    void fillEvent(TClonesArray *data, TClonesArray *zdcdigit);

    void fillAmplitudes(TClonesArray *data);

    int fillCalibrateCluster(TClonesArray *data, Float_t x, Float_t y, Float_t e, Int_t clsize);

    int fillCalibrateNumbers(TClonesArray *data, Float_t x, Float_t y, Float_t e, Int_t ncells, Int_t *numbers);

    int fillCalibrateAll(TClonesArray *data, Float_t x, Float_t y, Float_t e);

    void fillSampleProfiles(TClonesArray *data, Float_t x, Float_t y, Float_t e, Int_t clsize);

    void fillSampleProfilesAll(TClonesArray *data, Float_t x, Float_t y, Float_t e);

    void calibrate();

    void drawzdc(int nohist = 0);

    void drawprof();

    void drawtest();

    float getAmp(int zch) { if (zch < MAX_CHANNELS) return zdc_amp[zch]; else return -1.;};

    float getLogAmp(int lch) { if (lch < MAX_LOG_CHANNELS) return log_amp[lch]; else return -1.;};

    int getLogId(int lch) { if (lch < MAX_LOG_CHANNELS) return test_id[lch]; else return -1;};

    int getLogChan(int lch) { if (lch < MAX_LOG_CHANNELS) return test_chan[lch]; else return -1;};

//    void fcn(Int_t& npar, Double_t *gin, Double_t& f, Double_t *par, Int_t iflag);

private:
    char filname_base[256];
    int maxchan;
    Bmn_ZDC_map_element zdc_map_element[256];
    float cell_size[10];
    int n_rec;
    float thres;
    int wave2amp_flag;
    int MaxPos_min, MaxPos_max;
    int min_samples;
    int ped_samples;
    int use_meanxy;
    float sigma_amp;
    float shower_energy;
    float shower_norm;
    float x_beam, y_beam;
    float x_min, y_min;
    float x_max, y_max;
    float pstart, pstep;
    int ncells;
//    int use_log_function;
//    static int nevents;

//    static float amp_array[MAX_EVENTS][MAX_CHANNELS];
//    static float profile_amp[MAX_EVENTS][MAX_CHANNELS];
//    static float profile_err[MAX_EVENTS][MAX_CHANNELS];
    float zdc_amp[MAX_CHANNELS];
    float log_amp[MAX_LOG_CHANNELS];
    int number[MAX_CHANNELS];
    int index[MAX_CHANNELS];
    int channel0[MAX_CHANNELS];
    int channel1[MAX_CHANNELS];
    float cal[MAX_CHANNELS];
    float cale[MAX_CHANNELS];
    float cal_out[MAX_CHANNELS];
    float cale_out[MAX_CHANNELS];

    void cellWeight(int ievent);
//    static void fcn1(Int_t& npar, Double_t *gin, Double_t& f, Double_t *par, Int_t iflag);
    double ch(double x, double r);
    double sh(double x, double r);
    double PP1(double x, double h);
    double PP2(double x, double h);
    double shower(double x, double h);
    float wave2amp(UChar_t ns, UShort_t *s, Float_t *p);
    float testwave2amp(UChar_t ns, UShort_t *s, Float_t *p);
    int n_test;
    int test_chan[MAX_LOG_CHANNELS];
    int test_id[MAX_LOG_CHANNELS];
    int is_test[256];
    TH1F *htest[MAX_LOG_CHANNELS];
    TProfile *TestProf[MAX_LOG_CHANNELS];
    TH1F *hsum_sim;
    TH1F *hsum_raw;
    TH1F *hsum;
    TH1F *hxmean, *hymean;
    TProfile *SampleProf[MAX_CHANNELS];

    ClassDef(BmnZDCRaw2Digit, 2);
};
#endif	/* BMNZDCRAW2DIGIT_H */


#ifndef BMNECALRAW2DIGIT_H
#define	BMNECALRAW2DIGIT_H 

#include "TString.h"
#include "TClonesArray.h"
#include "TMinuit.h"
#include "TH1F.h"
#include "TProfile.h"
#include "BmnTDCDigit.h"
#include "BmnADCDigit.h"
#include "BmnSyncDigit.h"
#include <iostream>
#include "Riostream.h"
#include "BmnECALDigit.h"
#include <cstdlib> 

#define MAX_ECAL_EVENTS 10000
#define MAX_ECAL_CHANNELS 600
#define MAX_ECAL_LOG_CHANNELS 24

static int nevents_ecal;
static float amp_array_ecal[MAX_ECAL_EVENTS][MAX_ECAL_CHANNELS];
static float pedestals_ecal[MAX_ECAL_EVENTS][MAX_ECAL_CHANNELS];
static float profile_amp_ecal[MAX_ECAL_EVENTS][MAX_ECAL_CHANNELS];
static float profile_err_ecal[MAX_ECAL_EVENTS][MAX_ECAL_CHANNELS];
static int use_log_function_ecal;

class Bmn_ECAL_map_element{
public:
  Bmn_ECAL_map_element(){ id=chan=adc_chan=size=0; x=y=-1; used=0;};
  void set(unsigned long v1,unsigned int v2,unsigned char v3,unsigned char v4,unsigned char v5,unsigned char v6,unsigned char v7, float v8, float v9){
    id=v1; chan=v2; adc_chan=v3; size=v4; ix=v5; iy=v6; used=v7; x=v8; y=v9;
  }; 
  unsigned long id;
  unsigned int chan;
  unsigned char adc_chan;
  unsigned char size;
  unsigned char ix;
  unsigned char iy;
  unsigned char used;
  float x;
  float y;
};

class BmnECALRaw2Digit{

public:
    BmnECALRaw2Digit(TString mappingFile, TString runFile, TString calibrationFile = "");
    BmnECALRaw2Digit();
    void print();

    void setParStep(Float_t p) { pstep = p;};
    Float_t getParStep() { return pstep;};

    void setParStart(Float_t p) { pstart = p;};
    Float_t getParStart() { return pstart;};

    void setThreshold(Float_t t) { thres = t;};
    Float_t getThreshold() { return thres;};

    void setEnergy(Float_t e) { shower_energy = e;};
    Float_t getEnergy() { return shower_energy;};

    void setError(Float_t s) { sigma_amp = s;};
    Float_t getError() { return sigma_amp;};

    void setNorm(Float_t n) { shower_norm = n;};
    Float_t getNorm() { return shower_norm;};

    void setType(Int_t t) { wave2amp_flag = t;};
    Int_t getType() { return wave2amp_flag;};

    void setMinSamples(Int_t m) { min_samples = m;};
    Int_t getMinSamples() { return min_samples;};

    void setPedSamples(Int_t p) { ped_samples = p;};
    Int_t getPedSamples() { return ped_samples;};

    void setUseMeanXY(Int_t u) { use_meanxy = u;};
    Int_t getUseMeanXY() { return use_meanxy;};

    void setLogFunction(Int_t u) { use_log_function_ecal = u;};
    Int_t getUseLogFunction() { return use_log_function_ecal;};

    void fillEvent(TClonesArray *data, TClonesArray *ecaldigit);

    void fillAmplitudes(TClonesArray *data);

    int fillCalibrateCluster(TClonesArray *data, Float_t x, Float_t y, Float_t e, Int_t clsize);

    int fillCalibrateNumbers(TClonesArray *data, Float_t x, Float_t y, Float_t e, Int_t ncells, Int_t *numbers);

    int fillCalibrateAll(TClonesArray *data, Float_t x, Float_t y, Float_t e);

    void fillSampleProfiles(TClonesArray *data, Float_t x, Float_t y, Float_t e, Int_t clsize);

    void fillSampleProfilesAll(TClonesArray *data, Float_t x, Float_t y, Float_t e);

    void calibrate();

    void drawecal(int nohist = 0);

    void drawprof(int achan = 0);

    void drawtest();

    float getAmp(int zch) { if (zch < MAX_ECAL_CHANNELS) return ecal_amp[zch]; else return -1.;};

    float getLogAmp(int lch) { if (lch < MAX_ECAL_LOG_CHANNELS) return log_amp[lch]; else return -1.;};

    int getLogId(int lch) { if (lch < MAX_ECAL_LOG_CHANNELS) return test_id[lch]; else return -1;};

    int getLogChan(int lch) { if (lch < MAX_ECAL_LOG_CHANNELS) return test_chan[lch]; else return -1;};

//    void fcn(Int_t& npar, Double_t *gin, Double_t& f, Double_t *par, Int_t iflag);

private:
    char filname_base[256];
    int maxchan;
    Bmn_ECAL_map_element ecal_map_element[MAX_ECAL_CHANNELS*2];
    float cell_size[10];
    int n_rec;
    float thres;
    int wave2amp_flag;
    int min_samples;
    int ped_samples;
    int use_meanxy;
    float sigma_amp;
    float shower_energy;
    float shower_norm;
    float x_beam, y_beam;
    float x_min, y_min;
    float x_max, y_max;
    float pstart, pstep;
    int ncells;
//    int use_log_function;
//    static int nevents;

//    static float amp_array[MAX_ECAL_EVENTS][MAX_ECAL_CHANNELS];
//    static float profile_amp[MAX_ECAL_EVENTS][MAX_ECAL_CHANNELS];
//    static float profile_err[MAX_ECAL_EVENTS][MAX_ECAL_CHANNELS];
    float ecal_amp[MAX_ECAL_CHANNELS];
    float log_amp[MAX_ECAL_LOG_CHANNELS];
    int number[MAX_ECAL_CHANNELS];
    int index[MAX_ECAL_CHANNELS];
    int channel0[MAX_ECAL_CHANNELS];
    int channel1[MAX_ECAL_CHANNELS];
    float cal[MAX_ECAL_CHANNELS];
    float cale[MAX_ECAL_CHANNELS];
    float cal_out[MAX_ECAL_CHANNELS];
    float cale_out[MAX_ECAL_CHANNELS];

    void cellWeight(int ievent);
//    static void fcn1(Int_t& npar, Double_t *gin, Double_t& f, Double_t *par, Int_t iflag);
    double ch(double x, double r);
    double sh(double x, double r);
    double PP1(double x, double h);
    double PP2(double x, double h);
    double shower(double x, double h);
    float wave2amp(UChar_t ns, UShort_t *s, Float_t *p);
    float testwave2amp(UChar_t ns, UShort_t *s, Float_t *p);
    int n_test;
    int test_chan[MAX_ECAL_LOG_CHANNELS];
    int test_id[MAX_ECAL_LOG_CHANNELS];
    int is_test[512];
    TH1F *htest[MAX_ECAL_LOG_CHANNELS];
    TProfile *TestProf[MAX_ECAL_LOG_CHANNELS];
    TH1F *hampl;
    TH1F *hsum_sim;
    TH1F *hsum_raw;
    TH1F *hsum;
    TH1F *hxmean, *hymean;
    TProfile *SampleProf[MAX_ECAL_CHANNELS];

    ClassDef(BmnECALRaw2Digit, 2);
};
#endif	/* BMNECALRAW2DIGIT_H */


#ifndef BMNLANDRAW2DIGIT_H
#define	BMNLANDRAW2DIGIT_H 

#include "BmnLANDDigit.h"
#include "BmnTacquilaDigit.h"
#include "TClonesArray.h"

#define LAND_PLANE_N 6
#define LAND_BAR_N 20
#define LAND_SIDE_N 2
#define TACQ_CRATE_N 2
#define TACQ_MODULE_N 10
#define TACQ_CHANNEL_N 16

class BmnLANDRaw2Digit{
  public:
    BmnLANDRaw2Digit(TString, TString, TString, TString, TString);
    void fillEvent(TClonesArray const *, TClonesArray *);
    struct TCal {
      TCal(): tdc(-1), t_ns(-1) {}
      TCal(UShort_t a_tdc, Float_t a_t_ns): tdc(a_tdc), t_ns(a_t_ns) {}
      UShort_t tdc;
      Float_t t_ns;
    };

  private:
    void SetTCal(BmnTacquilaDigit &);
    struct TacquilaRef {
      TacquilaRef(): crate(-1), module(-1), channel(-1) {}
      Char_t crate;
      Char_t module;
      Char_t channel;
    };
    struct DetectorRef {
      DetectorRef(): plane(-1), bar(-1), side(-1) {}
      Char_t plane;
      Char_t bar;
      Char_t side;
    };
    struct Pedestal {
      Pedestal(): ped(0) {}
      Float_t ped;
    };
    struct DiffSync {
      DiffSync(): time_diff(0), time_sync(0), energy_diff0(1), energy_diff1(1),
      energy_sync(1) {}
      Float_t time_diff;
      Float_t time_sync;
      Float_t energy_diff0;
      Float_t energy_diff1;
      Float_t energy_sync;
    };
    struct VScint {
      VScint(): vscint(1) {}
      Float_t vscint;
    };
    DetectorRef m_tacq2det[TACQ_CRATE_N][TACQ_MODULE_N][TACQ_CHANNEL_N];
    TacquilaRef m_det2tacq[LAND_PLANE_N][LAND_BAR_N][LAND_SIDE_N];
    Pedestal m_ped[LAND_PLANE_N][LAND_BAR_N][LAND_SIDE_N];
    std::vector<TCal> m_tcal[TACQ_CRATE_N][TACQ_MODULE_N][TACQ_CHANNEL_N + 1];
    DiffSync m_diff_sync[LAND_PLANE_N][LAND_BAR_N];
    VScint m_vscint[LAND_PLANE_N][LAND_BAR_N];
    BmnTacquilaDigit const *m_c17[TACQ_CRATE_N][TACQ_MODULE_N];
    BmnTacquilaDigit const *m_builder[LAND_PLANE_N][LAND_BAR_N][LAND_SIDE_N];

    ClassDef(BmnLANDRaw2Digit, 1);
};

#endif /* BMNLANDRAW2DIGIT_H */
#ifndef BMNGEMRAW2DIGIT_H
#define BMNGEMRAW2DIGIT_H

#include "TString.h"
#include "TTree.h"
#include "TClonesArray.h"
#include "TH1F.h"
#include <iostream>
#include "BmnGemStripDigit.h"
#include "BmnADCDigit.h"
#include "BmnEnums.h"
#include "TMath.h"
#include <fstream>
#include <list>
#include <map>
#include "BmnAdcProcessor.h"
#include <vector>
#include <UniDbDetectorParameter.h>
#include <UniDbDetector.h>

#define N_CH_IN_CRATE 2048 //number of channels in one crate (64ch x 32smpl))
#define N_CH_IN_SMALL_GEM 512 //number of channels in small GEM stations (sum of all redout channels)
#define N_CH_IN_MID_GEM 2176 //number of channels in middle GEM stations (sum of all redout channels)
#define N_CH_IN_BIG_GEM 3200 //number of channels in one part of big GEM stations (sum of all redout channels)
#define N_CH_IN_BIG_GEM_0 1023//988 //number of channels in hot zone of one part of big GEM stations (sum of redout channels from X0 and Y0)
#define N_CH_IN_BIG_GEM_1 2176//2100 //number of channels in big zone of one part of big GEM stations (sum of redout channels from X1 and Y1)
#define N_CH_BUF 4096
#define N_MODULES 2
#define N_LAYERS 4

using namespace std;
using namespace TMath;

struct BmnGemMap {
    Int_t strip;
    Int_t lay; // strip type: 0 - x, 1 - y
    Int_t mod; //hot zones: 1 - inner zone, 0 - outer zone

    BmnGemMap(Int_t s, Int_t l, Int_t m) : strip(s), lay(l), mod(m) {
    }

    BmnGemMap() : strip(0), lay(0), mod(0) {
    }
};

class BmnGemRaw2Digit : public BmnAdcProcessor {
public:
    BmnGemRaw2Digit(Int_t period, Int_t run, vector<UInt_t> vSer, TString mapFileName);
    BmnGemRaw2Digit();
    ~BmnGemRaw2Digit();

    BmnStatus FillEvent(TClonesArray *adc, TClonesArray *gem);
    BmnStatus FillProfiles(TClonesArray *adc);
    BmnStatus FillNoisyChannels();

private:

    BmnGemMap* fSmall;
    BmnGemMap* fMid;
    BmnGemMap* fBigL0;
    BmnGemMap* fBigL1;
    BmnGemMap* fBigR0;
    BmnGemMap* fBigR1;
        
    TH1F**** fSigProf;
    Bool_t**** fNoisyChannels;
    
    TString fMapFileName;

    vector<GemMapStructure> fMap;

    void ProcessDigit(BmnADCDigit* adcDig, GemMapStructure* gemM, TClonesArray *gem, Bool_t doFill);
    BmnStatus ReadMap(TString parName, BmnGemMap* m, Int_t lay, Int_t mod);

    Int_t fEntriesInGlobMap; // number of entries in BD table for Global Mapping

    Int_t fEventId;

    ClassDef(BmnGemRaw2Digit, 1);
};

#endif /* BMNGEMRAW2DIGIT_H */

#ifndef BMNTOF2RAW2DIGIT_H
#define BMNTOF2RAW2DIGIT_H

#define SLFIT0 "pol2"
#define SLFIT "pol5"
#define HPTIMEBIN 0.02344
#define INVHPTIMEBIN 42.6666

#define TOF2_MAX_STRIPS_IN_CHAMBER 32
#define TOF2_MAX_CHANNELS_IN_SLOT 64
//#define TOF2_MAX_CHANNELS_IN_MODULE TOF2_MAX_CHANNELS_IN_SLOT
#define TOF2_MAX_CHANNELS_IN_MODULE 64
#define TOF2_MAX_CRATES 5
#define TOF2_MAX_SLOTS_IN_CRATE 20
#define TOF2_MAX_CHAMBERS 60
#define TOF2_MAX_CHANNEL 4000

#include "TString.h"
#include "TProfile.h"
#include "TH2F.h"
#include "TClonesArray.h"
#include "BmnTDCDigit.h"
#include "BmnADCDigit.h"
#include "BmnSyncDigit.h"
#include <iostream>
#include "Riostream.h"
#include "BmnTof2Digit.h"
#include <cstdlib>

class Bmn_Tof2_map_element{
public:
   Bmn_Tof2_map_element(){
     plane=side=id=slot=tdc=chan=crate=strip=0;
   } 
   int crate;
   int pair;
   int plane;
   int id,slot,tdc,chan,strip;   
   char side;            
};

class BmnTof2Raw2Digit{

public:
    BmnTof2Raw2Digit(TString mappingFile, TString RunFile = "empty", UInt_t SlewingRun = 0, UInt_t SlewingChamber = 0, TString geomFile = "");
    BmnTof2Raw2Digit();

    ~BmnTof2Raw2Digit();

    void print();
    void getEventInfo(long long *ev,long long *t1,long long *t2);

    void DNL_read();

    int  get_t0() { return T0; }

    void SetWcut(int wcut) { Wcut = wcut; for (int c=0; c<MaxPlane; c++) ReBook(c); }
    int  GetWcut() { return Wcut; }
    void SetWcutc(int c, int wcut) { if (c>0&&c<=MaxPlane) { Wcutc[c-1] = wcut; ReBook(c-1); } }
    int  GetWcutc(int c) { if (c>0&&c<=MaxPlane) return Wcutc[c-1]; else return 0; }

    void SetWmax(int wm) { Wmax = wm; for (int c=0; c<MaxPlane; c++) ReBook(c); }
    int  GetWmax() { return Wmax; }
    void SetWmaxc(int c, int wm) { if (c>0&&c<=MaxPlane) { Wmaxc[c-1] = wm; ReBook(c-1); } }
    int  GetWmaxc(int c) { if (c>0&&c<=MaxPlane) return Wmaxc[c-1]; else return 0; }

    void SetW(int wcut, int wm) { Wcut = wcut;  Wmax = wm; for (int c=0; c<MaxPlane; c++) ReBook(c); }

    void SetWT0max(int wt0m) { WT0max = wt0m; for (int c=0; c<MaxPlane; c++) ReBook(c); }
    int  GetWT0max() { return WT0max; }

    void SetWT0min(int wt0m) { WT0min = wt0m; for (int c=0; c<MaxPlane; c++) ReBook(c); }
    int  GetWT0min() { return WT0min; }

    void SetWT0(int wt1, int wt2) { WT0min = wt1;  WT0max = wt2; for (int c=0; c<MaxPlane; c++) ReBook(c); }

    void SetLeadMin(int c, int leadmin) { if (c>0&&c<=MaxPlane) {LeadMin[c-1] = leadmin; ReBook(c-1);} }
    int  GetLeadMin(int c) { if (c>0&&c<=MaxPlane) return LeadMin[c-1]; else return 0;}

    void SetLeadMax(int c, int leadmax) { if (c>0&&c<=MaxPlane) {LeadMax[c-1] = leadmax; ReBook(c-1);} }
    int  GetLeadMax(int c) { if (c>0&&c<=MaxPlane) return LeadMax[c-1]; else return 0; }

    void SetLeadMinMax(int c, int leadmin, int leadmax) { if (c>0&&c<=MaxPlane) {LeadMin[c-1] = leadmin; LeadMax[c-1] = leadmax; ReBook(c-1);}; }

    void fillPreparation(TClonesArray *data, TClonesArray *sync, TClonesArray *t0);
    void fillEvent(TClonesArray *data, TClonesArray *sync, TClonesArray *t0, TClonesArray *tof2digit);
    void fillSlewingT0(TClonesArray *data,  TClonesArray *sync, TClonesArray *t0);
    void fillSlewing(TClonesArray *data, TClonesArray *sync, TClonesArray *t0);
    void readSlewingLimits();
    void SlewingT0();
    void readSlewingT0();
    void Slewing();
    void readSlewing();
    void SlewingResults();
    float slewingt0_correction(int chamber, double width, int peak);
    float slewing_correction(int chamber, double width, int peak);
    void drawprep();
    void drawprof();
    void drawproft0();
    int readGeom(char *geomFile);
    int printGeom();
    int get_strip_xyz(int chamber, int strip, float *x, float *y, float *z);
    int get_chamber_z(int chamber, float *z);
    int get_track_hits(float *xyz, float *cxyy, int *nhits, int *chamb, int *strip);
    void ReBook(int i);
    void BookSlewingResults();

private:
    char filname_base[256];
    int fSlewCham;
    int n_rec;
    Bmn_Tof2_map_element map[TOF2_MAX_CHANNEL];
    long long EVENT,TIME_SEC,TIME_NS;
    float T0;
    float T0shift;
    int Wcut;
    int Wmax;
    int Wcutc[TOF2_MAX_CHAMBERS];
    int Wmaxc[TOF2_MAX_CHAMBERS];
    int WT0min;
    int WT0max;
    int LeadMin[TOF2_MAX_CHAMBERS];
    int LeadMax[TOF2_MAX_CHAMBERS];
    int MaxPlane;
    int numstrip[TOF2_MAX_CHAMBERS];
    int numcr[TOF2_MAX_CRATES*TOF2_MAX_SLOTS_IN_CRATE], numcha[TOF2_MAX_CHAMBERS];
    int nslots, ncrates, nchambers;
    float idchambers[TOF2_MAX_CHAMBERS]; 
    int numslots[TOF2_MAX_CRATES*TOF2_MAX_SLOTS_IN_CRATE]; 
    int idcrates[TOF2_MAX_CRATES], numcrates[TOF2_MAX_CRATES]; 

    float tmean[2][TOF2_MAX_CHANNEL];
    int ntmean[2][TOF2_MAX_CHANNEL];
    float tmean_average[2][TOF2_MAX_CHAMBERS];

    int numcrate(int id);
    int nrec[TOF2_MAX_CRATES][TOF2_MAX_SLOTS_IN_CRATE][TOF2_MAX_CHANNELS_IN_SLOT];

    double DNL_Table[TOF2_MAX_CRATES][TOF2_MAX_SLOTS_IN_CRATE][72][1024];
    int dnltype[TOF2_MAX_CRATES][TOF2_MAX_SLOTS_IN_CRATE];
    char dnlname[TOF2_MAX_CRATES][TOF2_MAX_SLOTS_IN_CRATE][128];

    int wmint0[TOF2_MAX_CHAMBERS][2];
    int wmaxt0[TOF2_MAX_CHAMBERS][2];
    int tmint0[TOF2_MAX_CHAMBERS][2];
    int tmaxt0[TOF2_MAX_CHAMBERS][2];
    double TvsWt0_const[TOF2_MAX_CHAMBERS][2];
    double TvsWt0_slope[TOF2_MAX_CHAMBERS][2];
    double TvsWt0_parab[TOF2_MAX_CHAMBERS][2];

    int wmin[TOF2_MAX_CHAMBERS][2];
    int wmax[TOF2_MAX_CHAMBERS][2];
    int tmin[TOF2_MAX_CHAMBERS][2];
    int tmax[TOF2_MAX_CHAMBERS][2];
    double TvsW_const[TOF2_MAX_CHAMBERS][2];
    double TvsW_slope[TOF2_MAX_CHAMBERS][2];
    double TvsW_parab[TOF2_MAX_CHAMBERS][2];
    double TvsW_cubic[TOF2_MAX_CHAMBERS][2];
    double TvsW_four[TOF2_MAX_CHAMBERS][2];
    double TvsW_five[TOF2_MAX_CHAMBERS][2];

    TProfile *TvsW[TOF2_MAX_CHAMBERS][2];
    TProfile *TvsWt0[TOF2_MAX_CHAMBERS][2];

    TH2F *TvsS[TOF2_MAX_CHAMBERS];
    TH2F *WvsS[TOF2_MAX_CHAMBERS];

    TH1F *Wt0;
    TH1F *Wts;
    TH2F *TvsWall[TOF2_MAX_CHAMBERS];
    TH2F *TvsWallmax[TOF2_MAX_CHAMBERS];

    float halfxwidth[TOF2_MAX_CHAMBERS];
    float halfywidth[TOF2_MAX_CHAMBERS];
    float xoffs, yoffs, zoffs;
    int nstrips[TOF2_MAX_CHAMBERS];
    float zchamb[TOF2_MAX_CHAMBERS];
    float xcens[TOF2_MAX_CHAMBERS][TOF2_MAX_STRIPS_IN_CHAMBER];
    float ycens[TOF2_MAX_CHAMBERS][TOF2_MAX_STRIPS_IN_CHAMBER];
    float xmins[TOF2_MAX_CHAMBERS][TOF2_MAX_STRIPS_IN_CHAMBER];
    float xmaxs[TOF2_MAX_CHAMBERS][TOF2_MAX_STRIPS_IN_CHAMBER];
    float ymins[TOF2_MAX_CHAMBERS][TOF2_MAX_STRIPS_IN_CHAMBER];
    float ymaxs[TOF2_MAX_CHAMBERS][TOF2_MAX_STRIPS_IN_CHAMBER];

ClassDef(BmnTof2Raw2Digit, 1);
};
#endif	/* BMNTOF2RAW2DIGIT_H */


#ifndef BMNTOF2RAW2DIGITNEW_H
#define BMNTOF2RAW2DIGITNEW_H

#define SLFIT0 "pol2"
#define SLFIT "pol5"
#define HPTIMEBIN 0.02344
#define INVHPTIMEBIN 42.6666

#define TOF2_MAX_STRIPS_IN_CHAMBER 32
#define TOF2_MAX_CHANNELS_IN_SLOT 64
//#define TOF2_MAX_CHANNELS_IN_MODULE TOF2_MAX_CHANNELS_IN_SLOT
#define TOF2_MAX_CHANNELS_IN_MODULE 64
#define TOF2_MAX_CRATES 5
#define TOF2_MAX_SLOTS_IN_CRATE 20
//#define TOF2_MAX_CHAMBERS 24
#define TOF2_MAX_CHAMBERS 60
#define TOF2_MAX_CHANNEL 4000

//#define TOF700_TDC_TYPE (0x11) //TDC32VL
#define TOF700_TDC_TYPE (0x53) //TDC64VHLE

#include "TString.h"
#include "TProfile.h"
#include "TH2F.h"
#include "TClonesArray.h"
#include "BmnTDCDigit.h"
#include "BmnADCDigit.h"
#include "BmnSyncDigit.h"
#include <iostream>
#include "Riostream.h"
#include "BmnTof2Digit.h"
#include "BmnEnums.h"
#include <cstdlib>
#include <bitset>
#include <map>

class Bmn_Tof2_map_element_new{
public:
   Bmn_Tof2_map_element_new(){
     plane=side=id=slot=tdc=chan=crate=strip=0;
   } 
   int crate;
   int pair;
   int plane;
   int id,slot,tdc,chan,strip;   
   char side;            
};

class BmnTof2Raw2DigitNew{

public:
    BmnTof2Raw2DigitNew(TString mappingFile, TString RunFile = "empty", UInt_t SlewingRun = 0, UInt_t SlewingChamber = 0, TString geomFile="TOF700_geometry_run7.txt");
    BmnTof2Raw2DigitNew();

    ~BmnTof2Raw2DigitNew();

    void print();
    void getEventInfo(long long *ev,long long *t1,long long *t2);

    int get_ch_tdc32vl(unsigned int tdc,unsigned int ch);
    int get_ch_tdc64vhle(unsigned int tdc,unsigned int ch);
    int get_ch_tdc72vhl(unsigned int tdc,unsigned int ch);

    void DNL_read();

    int  get_t0() { return T0; }

    void SetWcut(int wcut) { Wcut = wcut; for (int c=0; c<MaxPlane; c++) ReBook(c); }
    int  GetWcut() { return Wcut; }
    void SetWcutc(int c, int wcut) { if (c>0&&c<=MaxPlane) { Wcutc[c-1] = wcut; ReBook(c-1); } }
    int  GetWcutc(int c) { if (c>0&&c<=MaxPlane) return Wcutc[c-1]; else return 0; }

    void SetWmax(int wm) { Wmax = wm; for (int c=0; c<MaxPlane; c++) ReBook(c); }
    int  GetWmax() { return Wmax; }
    void SetWmaxc(int c, int wm) { if (c>0&&c<=MaxPlane) { Wmaxc[c-1] = wm; ReBook(c-1); } }
    int  GetWmaxc(int c) { if (c>0&&c<=MaxPlane) return Wmaxc[c-1]; else return 0; }

    void SetW(int wcut, int wm) { Wcut = wcut;  Wmax = wm; for (int c=0; c<MaxPlane; c++) ReBook(c); }

    void SetWT0max(int wt0m) { WT0max = wt0m; for (int c=0; c<MaxPlane; c++) ReBook(c); }
    int  GetWT0max() { return WT0max; }

    void SetWT0min(int wt0m) { WT0min = wt0m; for (int c=0; c<MaxPlane; c++) ReBook(c); }
    int  GetWT0min() { return WT0min; }

    void SetWT0(int wt1, int wt2) { WT0min = wt1;  WT0max = wt2; for (int c=0; c<MaxPlane; c++) ReBook(c); }

    void SetLeadMin(int c, int leadmin) { if (c>0&&c<=MaxPlane) {LeadMin[c-1] = leadmin; ReBook(c-1);} }
    int  GetLeadMin(int c) { if (c>0&&c<=MaxPlane) return LeadMin[c-1]; else return 0;}

    void SetLeadMax(int c, int leadmax) { if (c>0&&c<=MaxPlane) {LeadMax[c-1] = leadmax; ReBook(c-1);} }
    int  GetLeadMax(int c) { if (c>0&&c<=MaxPlane) return LeadMax[c-1]; else return 0; }

    void SetLeadMinMax(int c, int leadmin, int leadmax) { if (c>0&&c<=MaxPlane) {LeadMin[c-1] = leadmin; LeadMax[c-1] = leadmax; ReBook(c-1);}; }

    void fillPreparation(TClonesArray *data, map<UInt_t,Long64_t> *ts, Double_t t0, Double_t t0width);
    void fillEvent(TClonesArray *data, map<UInt_t,Long64_t> *ts, Double_t t0, Double_t t0width, TClonesArray *tof2digit);
    void fillSlewingT0(TClonesArray *data, map<UInt_t,Long64_t> *ts, Double_t t0, Double_t t0width);
    void fillSlewing(TClonesArray *data, map<UInt_t,Long64_t> *ts, Double_t t0, Double_t t0width);
    void fillEqualization(TClonesArray *data, map<UInt_t,Long64_t> *ts, Double_t t0, Double_t t0width);
    void writeSlewingLimits();
    void readSlewingLimits();
    void SlewingT0();
    void readSlewingT0();
    void Slewing();
    void readSlewing();
    void SlewingResults();
    void InitEqualization();
    void Equalization();
    float slewingt0_correction(int chamber, double width, int peak);
    float slewing_correction(int chamber, double width, int peak);
    void drawprep();
    void drawprof();
    void drawproft0();
    int Offsets_read();
    int readGeom(char *geomFile);
    int printGeom();
    int get_strip_xyz(int chamber, int strip, float *x, float *y, float *z);
    int get_chamber_z(int chamber, float *z);
    int get_track_hits(float *xyz, float *cxyy, int *nhits, int *chamb, int *strip);
    void ReBook(int i);
    void Book();
    void BookSlewing();
    void BookSlewingResults();
    void WriteSlewingHists();
    Double_t *GetINL() { return &DNL_Table[0][0][0][0]; }

    void SetSlewingReference(Int_t chamber, Int_t refrun, Int_t refchamber);

private:
    char filname_base[256];
    char filname_slewing[TOF2_MAX_CHAMBERS][256];
    int chamber_slewing[TOF2_MAX_CHAMBERS];
    int type_slewing[TOF2_MAX_CHAMBERS];
    int fSlewCham;
    int n_rec;
    Bmn_Tof2_map_element_new mapa[TOF2_MAX_CHANNEL];
    long long EVENT,TIME_SEC,TIME_NS;
    float T0;
    float T0shift;
    int Wcut;
    int Wmax;
    int Wcutc[TOF2_MAX_CHAMBERS];
    int Wmaxc[TOF2_MAX_CHAMBERS];
    int WT0min;
    int WT0max;
    int LeadMin[TOF2_MAX_CHAMBERS];
    int LeadMax[TOF2_MAX_CHAMBERS];
    int MaxPlane;
    int numstrip[TOF2_MAX_CHAMBERS];
    int numcr[TOF2_MAX_CRATES*TOF2_MAX_SLOTS_IN_CRATE], numcha[TOF2_MAX_CHAMBERS];
    int nslots, ncrates, nchambers;
    float idchambers[TOF2_MAX_CHAMBERS]; 
    int numslots[TOF2_MAX_CRATES*TOF2_MAX_SLOTS_IN_CRATE]; 
    int idcrates[TOF2_MAX_CRATES], numcrates[TOF2_MAX_CRATES]; 
    double chtima[10][25][64];

    int numcrate(int id);
    int nrec[TOF2_MAX_CRATES][TOF2_MAX_SLOTS_IN_CRATE][TOF2_MAX_CHANNELS_IN_SLOT];

    float tmean[2][TOF2_MAX_CHANNEL];
    int ntmean[2][TOF2_MAX_CHANNEL];
    float tmean_average[2][TOF2_MAX_CHAMBERS];
    float tmeane[TOF2_MAX_CHANNEL];
    int ntmeane[TOF2_MAX_CHANNEL];
    float tmeane_average[TOF2_MAX_CHAMBERS];

    double DNL_Table[TOF2_MAX_CRATES][TOF2_MAX_SLOTS_IN_CRATE][72][1024];
    int dnltype[TOF2_MAX_CRATES][TOF2_MAX_SLOTS_IN_CRATE];
    char dnlname[TOF2_MAX_CRATES][TOF2_MAX_SLOTS_IN_CRATE][128];

    int wmint0[TOF2_MAX_CHAMBERS][2];
    int wmaxt0[TOF2_MAX_CHAMBERS][2];
    int tmint0[TOF2_MAX_CHAMBERS][2];
    int tmaxt0[TOF2_MAX_CHAMBERS][2];
    double TvsWt0_const[TOF2_MAX_CHAMBERS][2];
    double TvsWt0_slope[TOF2_MAX_CHAMBERS][2];
    double TvsWt0_parab[TOF2_MAX_CHAMBERS][2];

    int wmin[TOF2_MAX_CHAMBERS][2];
    int wmax[TOF2_MAX_CHAMBERS][2];
    int tmin[TOF2_MAX_CHAMBERS][2];
    int tmax[TOF2_MAX_CHAMBERS][2];
    double TvsW_const[TOF2_MAX_CHAMBERS][2];
    double TvsW_slope[TOF2_MAX_CHAMBERS][2];
    double TvsW_parab[TOF2_MAX_CHAMBERS][2];
    double TvsW_cubic[TOF2_MAX_CHAMBERS][2];
    double TvsW_four[TOF2_MAX_CHAMBERS][2];
    double TvsW_five[TOF2_MAX_CHAMBERS][2];

    TH2F *poffsets, *poffsets1, *poffsets2;
    TProfile *TvsW[TOF2_MAX_CHAMBERS][2];
    TProfile *TvsWt0[TOF2_MAX_CHAMBERS][2];
    TH2F *TvsSm[TOF2_MAX_CHAMBERS][2];

    TH2F *TvsS[TOF2_MAX_CHAMBERS];
    TH2F *WvsS[TOF2_MAX_CHAMBERS];

    TH1F *Wt0;
    TH1F *Wts;
    TH2F *TvsWall[TOF2_MAX_CHAMBERS];
    TH2F *TvsWallmax[TOF2_MAX_CHAMBERS];

    float halfxwidth[TOF2_MAX_CHAMBERS];
    float halfywidth[TOF2_MAX_CHAMBERS];
    float xoffs, yoffs, zoffs;
    int nstrips[TOF2_MAX_CHAMBERS];
    float zchamb[TOF2_MAX_CHAMBERS];
    float xcens[TOF2_MAX_CHAMBERS][TOF2_MAX_STRIPS_IN_CHAMBER];
    float ycens[TOF2_MAX_CHAMBERS][TOF2_MAX_STRIPS_IN_CHAMBER];
    float xmins[TOF2_MAX_CHAMBERS][TOF2_MAX_STRIPS_IN_CHAMBER];
    float xmaxs[TOF2_MAX_CHAMBERS][TOF2_MAX_STRIPS_IN_CHAMBER];
    float ymins[TOF2_MAX_CHAMBERS][TOF2_MAX_STRIPS_IN_CHAMBER];
    float ymaxs[TOF2_MAX_CHAMBERS][TOF2_MAX_STRIPS_IN_CHAMBER];

ClassDef(BmnTof2Raw2DigitNew, 1);
};
#endif	/* BMNTOF2RAW2DIGIT_H */


#ifndef BMNTOF1RAW2DIGIT_H
#define	BMNTOF1RAW2DIGIT_H 

#include "TString.h"
#include "TClonesArray.h"
#include "BmnTDCDigit.h"
#include "BmnTof1Digit.h"
#include <iostream>
#include "Riostream.h"
#include <cstdlib>
#include <UniDbDetectorParameter.h>
#include <string>
#include <map>
#include <set>
#include <utility>
#include <fstream>
#include <sstream>

//Side of the strip is stored as a bool variable
#define TOF1_LEFT true
#define TOF1_RIGHT false

#define TOF1_CHANNEL_NUMBER 72
#define TOF1_BIN_NUMBER 1024
#define TOF1_MAX_TIME (24.) //In ns
#define TOF1_TDC_TYPE (0x12) //TDC72VHL

//A simple class to compare the TDCDigits. See .cxx code
struct _Tof1TDCCompare {
	bool operator()(const BmnTDCDigit& a, const BmnTDCDigit& b);
};

//Map element
struct BmnTof1Map2 {
	Short_t plane;
	Short_t strip;
	Bool_t side;
	BmnTof1Map2(Short_t, Short_t, Bool_t);
	BmnTof1Map2();
};

//TDC parameters
struct BmnTof1TDCParameters {
	double INL[TOF1_CHANNEL_NUMBER][TOF1_BIN_NUMBER]; //INL
	BmnTof1Map2 ChannelMap[TOF1_CHANNEL_NUMBER]; //A BmnTof1Map2 for every channel
	double t[TOF1_CHANNEL_NUMBER]; //To store the value temporarily. See .cxx code
	BmnTof1TDCParameters(); //Simple constructor
};

class BmnTof1Raw2Digit {
	public:		
		BmnTof1Raw2Digit(); //BmnTof1Raw2Digit main constructor
		BmnTof1Raw2Digit(int nPeriod, int nRun); //Calls setRun(...)
		~BmnTof1Raw2Digit(); //Destructor
		
		Bool_t setRun(int nPerion, int nRun); //Load mapping and INL from the DB for run #nRun in period #nPeriod
		void setMapFromFile(TString placementMapFile, TString mapFile); //Load mapping from two files
		void saveMapToFile(std::string placementMapFile, std::string mapFile); //Save the mapping to two files
		
		void setINLFromFile(std::string INLFile);	//Load INL from an INI file
		void saveINLToFile(std::string INLFile, unsigned int TDCSerial); //Save INL for TDCSerial to an INI file
		
		void print(){} //Prints some info
		
		void FillEvent(TClonesArray *data, map<UInt_t, Long64_t> *mapTS,TClonesArray *tof1digit); //
		
		static UShort_t ToGlobalChannel(UChar_t HptdcId, UChar_t channel);
                
	private:
		ClassDef(BmnTof1Raw2Digit, 1);
		void init(); //BmnTof1Raw2Digit init function (called in BmnTof1Raw2Digit constructors)
		int RunIndex, PeriodIndex; //To store the RunIndex and PeriodIndex
		std::map<std::pair<UInt_t, UChar_t>, UInt_t> PlacementMap;	//Stores the placement map
		std::map<UInt_t, BmnTof1TDCParameters> TDCMap;			//Stores the loaded main mapping
		void plmap_insert(UInt_t Serial, UChar_t Slot, UInt_t TDCSerial); //See .cxx code
		
		//std::map provides a way to find TDC by Serial and Slot really fast (O(logN))
		//BmnTof1Parameters could also be found so fast (O(logN))
		//All other operations (extracting the INL, for example) are already fast because of the structure - O(1)
};
#endif	/* BMNTOF1RAW2DIGIT_H */


#ifndef BMNSILICONRAW2DIGIT_H
#define BMNSILICONRAW2DIGIT_H

#include "TString.h"
#include "TTree.h"
#include "TClonesArray.h"
#include <iostream>
#include "TH1F.h"
#include "BmnADCDigit.h"
#include "BmnEnums.h"
#include "TMath.h"
#include <fstream>
#include <list>
#include <map>
#include <vector>
#include <UniDbDetectorParameter.h>
#include "BmnSiliconDigit.h"
#include "BmnAdcProcessor.h"

using namespace std;
using namespace TMath;

struct BmnSiliconMapping {
    Short_t layer; //X = 0 or X' = 1
    UInt_t serial;
    Short_t module;
    Short_t channel_low;
    Short_t channel_high;
    Short_t station;
};

class BmnSiliconRaw2Digit : public BmnAdcProcessor {
public:
    BmnSiliconRaw2Digit(Int_t period, Int_t run, vector<UInt_t> vSer);
    BmnSiliconRaw2Digit();
    virtual ~BmnSiliconRaw2Digit();

    BmnStatus FillEvent(TClonesArray *adc, TClonesArray *sts);
    BmnStatus FillProfiles(TClonesArray *adc);
    BmnStatus FillNoisyChannels();
    vector<UInt_t> GetSerials() {
        return fSerials;
    }

private:

    vector<UInt_t> fSerials;
    vector<BmnSiliconMapping> fMap;
    Int_t fEventId;
    TString fMapFileName;    
        
    TH1F**** fSigProf;
    Bool_t**** fNoisyChannels;

    BmnStatus ReadMapFile();
    void ProcessDigit(BmnADCDigit* adcDig, BmnSiliconMapping* silM, TClonesArray *silicon, Bool_t doFill);

    ClassDef(BmnSiliconRaw2Digit, 1);
};

#endif /* BMNSILICONRAW2DIGIT_H */

#ifndef BMNRAWDATADECODER_H
#define BMNRAWDATADECODER_H 1

#include "TString.h"
#include "TSystem.h"
#include "BmnEnums.h"
#include "BmnTTBDigit.h"
#include "BmnTDCDigit.h"
#include "BmnHRBDigit.h"
#include "BmnADCDigit.h"
#include "BmnTacquilaDigit.h"
#include "BmnTQDCADCDigit.h"
#include "BmnLANDDigit.h"
#include "BmnSyncDigit.h"
#include "TFile.h"
#include "TTimeStamp.h"
#include "TTree.h"
#include "TClonesArray.h"
#include <iostream>
#include <vector>
#include <fstream>
//#include <regex>
#include "BmnGemRaw2Digit.h"
#include "BmnGemStripDigit.h"
#include "BmnMwpcRaw2Digit.h"
#include "BmnDchRaw2Digit.h"
#include "BmnSiliconRaw2Digit.h"
#include "BmnTof1Raw2Digit.h"
#include "BmnTof2Raw2DigitNew.h"
#include "BmnZDCRaw2Digit.h"
#include "BmnECALRaw2Digit.h"
#include "BmnLANDRaw2Digit.h"
#include "BmnTrigRaw2Digit.h"
#include "BmnCscRaw2Digit.h"
#include "BmnEventHeader.h"
#include "BmnRunHeader.h"
#include "BmnEnums.h"
#include "DigiArrays.h"
#include <bitset>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <cstdio>
#include <list>
#include <map>
#include <deque>
#include <UniDbDetectorParameter.h>
#include <UniDbRun.h>
#include "UniDbTangoData.h"

/***************** SET OF DAQ CONSTANTS *****************/
const UInt_t kSYNC1 = 0x2A502A50;
const UInt_t kSYNC2 = 0x4A624A62;
const UInt_t kRUNSTARTSYNC = 0x72617453;
const UInt_t kRUNSTOPSYNC = 0x706F7453;
const UInt_t kRUNNUMBERSYNC = 0x236E7552;
const size_t kWORDSIZE = sizeof (UInt_t);
const Short_t kNBYTESINWORD = 4;

//FVME data types
const UInt_t kMODDATAMAX = 0x7;
const UInt_t kMODHEADER = 0x8;
const UInt_t kMODTRAILER = 0x9;
const UInt_t kEVHEADER = 0xA;
const UInt_t kEVTRAILER = 0xB;
const UInt_t kSPILLHEADER = 0xC;
const UInt_t kSPILLTRAILER = 0xD;
const UInt_t kSTATUS = 0xE;
const UInt_t kPADDING = 0xF;

//module ID
const UInt_t kTDC64V = 0x10; //DCH
const UInt_t kTDC64VHLE = 0x53;
const UInt_t kTDC72VHL = 0x12;
const UInt_t kTDC32VL = 0x11;
const UInt_t kTQDC16 = 0x09;
const UInt_t kTQDC16VS = 0x56;
const UInt_t kTQDC16VS_ETH = 0xD6;
const UInt_t kTRIG = 0xA;
const UInt_t kMSC = 0xF;
const UInt_t kUT24VE = 0x49;
const UInt_t kADC64VE = 0xD4;
const UInt_t kADC64VE_XGE = 0xD9;
const UInt_t kADC64WR = 0xCA;
const UInt_t kHRB = 0xC2;
const UInt_t kFVME = 0xD1;
const UInt_t kLAND = 0xDA;
const UInt_t kU40VE_RC = 0x4C;

//event type trigger
const UInt_t kEVENTTYPESLOT = 12;
const UInt_t kGEMTRIGTYPE = 3;
const UInt_t kTRIGBEAM = 6;
const UInt_t kTRIGMINBIAS = 1;

/********************************************************/
// wait limit for input data (ms)
#define WAIT_LIMIT 40000000
using namespace std;

class BmnRawDataDecoder {
public:
    BmnRawDataDecoder(TString file, ULong_t nEvents = 0, ULong_t period = 4);
    BmnRawDataDecoder();
    virtual ~BmnRawDataDecoder();

    BmnStatus ConvertRawToRoot();
    BmnStatus ConvertRawToRootIterate(UInt_t *buf, UInt_t len);
    BmnStatus ConvertRawToRootIterateFile(UInt_t limit = WAIT_LIMIT);
    BmnStatus ClearArrays();
    BmnStatus DecodeDataToDigi();
    BmnStatus DecodeDataToDigiIterate();
    BmnStatus FinishRun();
    BmnStatus InitConverter(TString FileName);
    BmnStatus InitConverter();
    BmnStatus InitConverter(deque<UInt_t> *dq);
    BmnStatus InitDecoder();
    BmnStatus InitMaps();
    void ResetDecoder(TString file);
    BmnStatus DisposeDecoder();
    BmnStatus wait_stream(deque<UInt_t> *que, Int_t len, UInt_t limit = WAIT_LIMIT);
    BmnStatus wait_file(Int_t len, UInt_t limit = WAIT_LIMIT);
    BmnStatus SlewingTOF700Init();
    BmnStatus SlewingTOF700();

    BmnStatus PreparationTOF700Init() {
        return SlewingTOF700Init();
    };
    BmnStatus PreparationTOF700();
    BmnStatus TakeDataWordShort(UChar_t n, UInt_t *d, UInt_t i, Short_t* valI);
    BmnStatus TakeDataWordUShort(UChar_t n, UInt_t *d, UInt_t i, UShort_t* valU);

    void SetQue(deque<UInt_t> *v) {
        fDataQueue = v;
    }

    deque<UInt_t> *GetQue() {
        return fDataQueue;
    }

    DigiArrays GetDigiArraysObject() {
        //        fDigiTree->GetEntry(GetEventId());
        DigiArrays d; // = new DigiArrays();
        d.silicon = silicon;
        d.gem = gem;
        d.csc = csc;
        d.tof400 = tof400;
        d.tof700 = tof700;
        d.zdc = zdc;
        d.ecal = ecal;
        d.land = land;
        d.dch = dch;
        d.mwpc = mwpc;
        d.header = eventHeader;
        d.trigAr = NULL;
        d.trigSrcAr = NULL;
        if (fTrigMapper){
            if (fBmnSetup == kBMNSETUP)
                d.trigAr = fTrigMapper->GetTrigArrays();
            else
                d.trigSrcAr = fTrigMapper->GetTrigArrays();
        }
        return d;
    }

    TTree* GetDigiTree() {
        return fDigiTree;
    }

    void SetTOF700ReferenceRun(Int_t n) {
        fTOF700ReferenceRun = n;
    }

    void SetTOF700ReferenceChamber(Int_t n) {
        fTOF700ReferenceChamber = n;
    }

    void SetRunId(UInt_t v) {
        fRunId = v;
    }

    void SetPeriodId(UInt_t v) {
        fPeriodId = v;
    }

    map<UInt_t, Long64_t> GetTimeShifts() {
        return fTimeShifts;
    }

    UInt_t GetRunId() const {
        return fRunId;
    }

    UInt_t GetPeriodId() const {
        return fPeriodId;
    }

    UInt_t GetNevents() const {
        return fNevents;
    }

    UInt_t GetEventId() const {
        return fEventId;
    }

    BmnTof2Raw2DigitNew *GetTof700Mapper() {
        return fTof700Mapper;
    }

    BmnZDCRaw2Digit *GetZDCMapper() {
        return fZDCMapper;
    }

    BmnECALRaw2Digit *GetECALMapper() {
        return fECALMapper;
    }

    BmnLANDRaw2Digit *GetLANDMapper() {
        return fLANDMapper;
    }

    void SetTrigMapping(TString map) {
        fTrigMapFileName = map;
    }

    void SetSiliconMapping(TString map) {
        fSiliconMapFileName = map;
    }

    void SetCSCMapping(TString map) {
        fCscMapFileName = map;
    }

    void SetTrigINLFile(TString file) {
        fTrigINLFileName = file;
    }

    void SetDchMapping(TString map) {
        fDchMapFileName = map;
    }

    void SetMwpcMapping(TString map) {
        fMwpcMapFileName = map;
    }

    void SetGemMapping(TString map) {
        fGemMapFileName = map;
    }

    void SetTof400Mapping(TString PlaceMap, TString StripMap) {
        fTof400PlaceMapFileName = PlaceMap;
        fTof400StripMapFileName = StripMap;
    }

    void SetTof700Mapping(TString map) {
        fTof700MapFileName = map;
    }

    void SetTof700Geom(TString geom) {
        fTof700GeomFileName = geom;
    }

    void SetTof700SlewingReference(Int_t chamber, Int_t refrun, Int_t refchamber);

    void SetZDCMapping(TString map) {
        fZDCMapFileName = map;
    }

    void SetECALMapping(TString map) {
        fECALMapFileName = map;
    }

    void SetZDCCalibration(TString cal) {
        fZDCCalibrationFileName = cal;
    }

    void SetECALCalibration(TString cal) {
        fECALCalibrationFileName = cal;
    }

    void SetLANDMapping(TString map) {
        fLANDMapFileName = map;
    }

    void SetLANDPedestal(TString clock) {
        fLANDClockFileName = clock;
    }

    void SetLANDTCal(TString tcal) {
        fLANDTCalFileName = tcal;
    }

    void SetLANDDiffSync(TString diff_sync) {
        fLANDDiffSyncFileName = diff_sync;
    }

    void SetLANDVScint(TString vscint) {
        fLANDVScintFileName = vscint;
    }

    TString GetRootFileName() {
        return fRootFileName;
    }

    BmnStatus SetDetectorSetup(Bool_t* setup) {
        for (Int_t i = 0; i < 11; ++i) {
            fDetectorSetup[i] = setup[i];
        }

        return kBMNSUCCESS;
    }

    void SetEvForPedestals(UInt_t v) {
        this->fEvForPedestals = v;
    }

    UInt_t GetEvForPedestals() {
        return fEvForPedestals;
    }

    void SetBmnSetup(BmnSetup v) {
        this->fBmnSetup = v;
    }

    BmnSetup GetBmnSetup() const {
        return fBmnSetup;
    }

    UInt_t GetBoundaryRun(UInt_t nSmpl) {
        //format for SILICON data was changed during March 2017 seance (run 1542)
        //format for GEM was changed after March 2017 seance (run 1992)
        //so we have to use this crutch.
        return (nSmpl == 128) ? 1542 : 1992;
    }

private:

    //9 bits correspond to detectors which we need to decode
    Bool_t fDetectorSetup[11];


    Int_t fTOF700ReferenceRun;
    Int_t fTOF700ReferenceChamber;

    Int_t GetRunIdFromFile(TString name);
    vector<UInt_t> fSiliconSerials; //list of serial id for Silicon
    UInt_t fNSiliconSerials;
    vector<UInt_t> fGemSerials; //list of serial id for GEM
    UInt_t fNGemSerials;
    vector<UInt_t> fCscSerials; //list of serial id for CSC
    UInt_t fNCscSerials;
    vector<UInt_t> fZDCSerials; //list of serial id for ZDC
    UInt_t fNZDCSerials;
    vector<UInt_t> fECALSerials; //list of serial id for ECal
    UInt_t fNECALSerials;

    UInt_t fPedoCounter;

    UInt_t fRunId;
    TDatime fRunStartTime;
    TDatime fRunEndTime;
    UInt_t fPeriodId;
    UInt_t fEventId;
    UInt_t fNevents;
    //for event
    Long64_t fTime_s;
    Long64_t fTime_ns;
    //for run
    Long64_t fTimeStart_s;
    Long64_t fTimeStart_ns;
    Long64_t fTimeFinish_s;
    Long64_t fTimeFinish_ns;

    Long64_t fLengthRawFile;
    Long64_t fCurentPositionRawFile;

    TTree *fRawTree;
    TTree *fDigiTree;
    TString fRootFileName;
    TString fRawFileName;
    TString fDigiFileName;
    TString fDchMapFileName;
    TString fMwpcMapFileName;
    TString fGemMapFileName;
    TString fTof400PlaceMapFileName;
    TString fTof400StripMapFileName;
    TString fTof700MapFileName;
    TString fTof700GeomFileName;
    TString fZDCMapFileName;
    TString fZDCCalibrationFileName;
    TString fECALMapFileName;
    TString fECALCalibrationFileName;
    TString fLANDMapFileName;
    TString fLANDClockFileName;
    TString fLANDTCalFileName;
    TString fLANDDiffSyncFileName;
    TString fLANDVScintFileName;
    TString fSiliconMapFileName;
    TString fCscMapFileName;
    TString fTrigMapFileName;
    TString fTrigINLFileName;

    ifstream fDchMapFile;
    ifstream fMwpcMapFile;
    ifstream fGemMapFile;
    ifstream fCscMapFile;
    ifstream fTof400MapFile;
    ifstream fTof700MapFile;
    ifstream fZDCMapFile;
    ifstream fZDCCalibraionFile;
    ifstream fECALMapFile;
    ifstream fECALCalibraionFile;
    ifstream fTrigMapFile;
    ifstream fTrigINLFile;

    TFile *fRootFileIn;
    TFile *fRootFileOut;
    TFile *fDigiFileOut;
    FILE *fRawFileIn;

    //DAQ arrays
    TClonesArray *sync;
    TClonesArray *adc32; //gem
    TClonesArray *adc128; //sts
    TClonesArray *adc; //zdc & ecal
    TClonesArray *hrb;
    TClonesArray *tacquila; // LAND.
    TClonesArray *tdc;
    TClonesArray *tqdc_tdc;
    TClonesArray *tqdc_adc;
    TClonesArray *msc;
    TClonesArray *eventHeaderDAQ;
    BmnRunHeader *runHeaderDAQ;
    //    TClonesArray *runHeaderDAQ;
    TClonesArray *pedestalAdc;

    //Digi arrays
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

    //header array
    TClonesArray *eventHeader;
    BmnRunHeader *runHeader;
    //    TClonesArray *runHeader;

    UInt_t data[10000000];
    ULong_t fMaxEvent;

    UInt_t fDat; //current 32-bits word
    UInt_t syncCounter;
    BmnCscRaw2Digit *fCscMapper;
    BmnGemRaw2Digit *fGemMapper;
    BmnSiliconRaw2Digit *fSiliconMapper;
    BmnDchRaw2Digit *fDchMapper;
    BmnMwpcRaw2Digit *fMwpcMapper;
    BmnTrigRaw2Digit *fTrigMapper;
    BmnTof1Raw2Digit *fTof400Mapper;
    BmnTof2Raw2DigitNew *fTof700Mapper;
    BmnZDCRaw2Digit *fZDCMapper;
    BmnECALRaw2Digit *fECALMapper;
    BmnLANDRaw2Digit *fLANDMapper;
    BmnEventType fCurEventType;
    BmnEventType fPrevEventType;
    BmnSetup fBmnSetup;
    UInt_t fPedEvCntr;
    Int_t fEvForPedestals;
    Bool_t fPedEnough;
    GemMapStructure* fGemMap;
    TriggerMapStructure* fT0Map;
    deque<UInt_t> *fDataQueue;

    //Map to store pairs <Crate serial> - <crate time - T0 time>
    map<UInt_t, Long64_t> fTimeShifts;
    Double_t fT0Time; //ns
    Double_t fT0Width; //ns

    int refrun_tof700_slewing[60];
    int refchamber_tof700_slewing[60];
    int type_tof700_slewing[60];

    BmnStatus GetT0Info(Double_t& t0time, Double_t &t0width);
    BmnStatus ProcessEvent(UInt_t *data, UInt_t len);
    BmnStatus Process_ADC64VE(UInt_t *data, UInt_t len, UInt_t serial, UInt_t nSmpl, TClonesArray *arr);
    BmnStatus Process_ADC64WR(UInt_t *data, UInt_t len, UInt_t serial, TClonesArray *arr);
    BmnStatus Process_FVME(UInt_t *data, UInt_t len, UInt_t serial, BmnEventType &ped, BmnTrigInfo* spillInfo);
    BmnStatus Process_HRB(UInt_t *data, UInt_t len, UInt_t serial);
    BmnStatus Process_Tacquila(UInt_t *data, UInt_t len);
    BmnStatus FillU40VE(UInt_t *d, BmnEventType &evType, UInt_t slot, UInt_t &idx, BmnTrigInfo* spillInfo);
    BmnStatus FillTDC(UInt_t *d, UInt_t serial, UInt_t slot, UInt_t modId, UInt_t &idx);
    BmnStatus FillTQDC(UInt_t *d, UInt_t serial, UInt_t slot, UInt_t modId, UInt_t &idx);
    BmnStatus FillSYNC(UInt_t *d, UInt_t serial, UInt_t &idx);

    BmnStatus FillMSC(UInt_t *d, UInt_t serial, UInt_t &idx) {
        return kBMNSUCCESS;
    };
    BmnStatus FillTimeShiftsMap();
    BmnStatus FillTimeShiftsMapNoDB(UInt_t t0serial);

    BmnStatus CopyDataToPedMap(TClonesArray* adcGem, TClonesArray* adcSil, UInt_t ev);
};

#endif
#ifndef BMNTRIGRAWTODIGIT_H
#define BMNTRIGRAWTODIGIT_H

#include "BmnEnums.h"
#include "TString.h"
#include "TClonesArray.h"
#include "TPRegexp.h"
#include "TTree.h"
#include "BmnTDCDigit.h"
#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include "BmnTrigDigit.h"
#include "BmnTrigWaveDigit.h"
#include "TMath.h"

#define HPTIMEBIN 0.02344
#define INVHPTIMEBIN 42.6666
#define KNBDCHANNELS 40
#define ADC_CLOCK_TQDC16VS  8.0  // nano seconds
#define ADC_CLOCK          12.0
#define ADC_CLOCK_OLD      12.5
#define TDC_CLOCK          24.0
#define TDC_CLOCK_OLD      25.0

using namespace std;
using namespace TMath;

struct BmnTrigMapping {
    TString name;
    UInt_t module;
    UInt_t serial;
    Short_t slot;
    Short_t channel;
    TClonesArray* branchRef;
    TClonesArray* branchRefADC;
};

class BmnTrigRaw2Digit {
public:
    BmnTrigRaw2Digit(TString mappingFile, TString INLFile);
    BmnTrigRaw2Digit(TString mappingFile, TString INLFile, TTree *digiTree);
    BmnTrigRaw2Digit(){}

    ~BmnTrigRaw2Digit() {
        for (TClonesArray *ar : trigArrays)
            delete ar;
    };

    vector<BmnTrigMapping>* GetMap() {
        return &fMap;
    }

    BmnStatus FillEvent(TClonesArray *tdc);
    BmnStatus FillEvent(TClonesArray *tdc, TClonesArray *adc);
    BmnStatus readINLCorrections(TString INLFile);
    BmnStatus readMap(TString mappingFile);
    BmnStatus ClearArrays();
    
    vector<TClonesArray*> *GetTrigArrays(){
        return &trigArrays;
    }
        
    BmnTrigMapping GetT0Map(){        
        for (BmnTrigMapping tM : fMap){
            if (tM.name == "T0")
                return tM;
        }
        for (BmnTrigMapping tM : fMap){
            if (tM.name == "BC2")
                return tM;
        }
        BmnTrigMapping tMno;
        tMno.serial = 0;
        return tMno;
    }
    
    void SetSetup(BmnSetup stp) {
        fSetup = stp;
    }

private:

    vector<BmnTrigMapping> fMap;
    BmnSetup fSetup;
    ifstream fMapFile;
    ifstream fINLFile;
    TString fMapFileName;
    TString fINLFileName;
    Float_t fINLTable[72][1024];
//    TDirectory *fDir;
    vector<TClonesArray*> trigArrays;

    ClassDef(BmnTrigRaw2Digit, 1);
};

#endif /* BMNTRIGRAWTODIGIT_H */

#ifndef BMNCSCRAW2DIGIT_H
#define BMNCSCRAW2DIGIT_H

#include "TString.h"
#include "TTree.h"
#include "TClonesArray.h"
#include "BmnADCDigit.h"
#include "BmnCscDigit.h"
#include "BmnEnums.h"
#include "TMath.h"
#include "BmnMath.h"
#include "BmnAdcProcessor.h"
#include <UniDbDetectorParameter.h>
#include <UniDbDetector.h>
#include "TH1F.h"

#define N_CH_BUF 4096
#define N_CSC_MODULES 2
#define N_CSC_LAYERS 4

using namespace std;
using namespace TMath;

struct BmnCscMapping {
    Short_t layer; //X = 0 or X' = 1
    UInt_t serial;
    Short_t zone;
    Short_t module;
    Int_t channel_low;
    Int_t channel_high;
    Short_t station;
};

class BmnCscRaw2Digit : public BmnAdcProcessor {
public:
    BmnCscRaw2Digit(Int_t period, Int_t run, vector<UInt_t> vSer);
    BmnCscRaw2Digit();
    ~BmnCscRaw2Digit();

    BmnStatus FillEvent(TClonesArray *adc, TClonesArray *csc);
    BmnStatus FillProfiles(TClonesArray *adc);
    BmnStatus FillNoisyChannels();

private:

    TString fMapFileName;
    vector<BmnCscMapping*> fMap;    
    vector<UInt_t> fSerials;
    Int_t fEventId; 
        
    TH1F**** fSigProf;
    Bool_t**** fNoisyChannels;

    BmnCscMapping* FindMapEntry(BmnADCDigit* adcDig);
    void ProcessDigit(BmnADCDigit* adcDig, BmnCscMapping* cscM, TClonesArray *csc, Bool_t doFill);
    BmnStatus ReadMapFile();

    ClassDef(BmnCscRaw2Digit, 2);
};

#endif /* BMNCSCRAW2DIGIT_H */


#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"BmnAdcProcessor", payloadCode, "@",
"BmnCscRaw2Digit", payloadCode, "@",
"BmnDchRaw2Digit", payloadCode, "@",
"BmnECALRaw2Digit", payloadCode, "@",
"BmnGemRaw2Digit", payloadCode, "@",
"BmnLANDRaw2Digit", payloadCode, "@",
"BmnMwpcRaw2Digit", payloadCode, "@",
"BmnRawDataDecoder", payloadCode, "@",
"BmnSiliconRaw2Digit", payloadCode, "@",
"BmnTof1Raw2Digit", payloadCode, "@",
"BmnTof2Raw2Digit", payloadCode, "@",
"BmnTof2Raw2DigitNew", payloadCode, "@",
"BmnTrigRaw2Digit", payloadCode, "@",
"BmnZDCRaw2Digit", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__DecoderDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__DecoderDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__DecoderDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__DecoderDict() {
  TriggerDictionaryInitialization_G__DecoderDict_Impl();
}
