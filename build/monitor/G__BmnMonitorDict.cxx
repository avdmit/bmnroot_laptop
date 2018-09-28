// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIalexdIbmnroot_devdIbmnrootdIbuilddImonitordIG__BmnMonitorDict

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
#include "BmnRunInfo.h"
#include "BmnMonitor.h"
#include "BmnDataReceiver.h"
#include "BmnOnlineDecoder.h"
#include "BmnHist.h"
#include "BmnHistGem.h"
#include "BmnHistSilicon.h"
#include "BmnHistDch.h"
#include "BmnHistMwpc.h"
#include "BmnHistZDC.h"
#include "BmnHistECAL.h"
#include "BmnHistTrigger.h"
#include "BmnHistToF.h"
#include "BmnHistToF700.h"
#include "BmnHistSrc.h"
#include "BmnHistLAND.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_BmnRunInfo(void *p = 0);
   static void *newArray_BmnRunInfo(Long_t size, void *p);
   static void delete_BmnRunInfo(void *p);
   static void deleteArray_BmnRunInfo(void *p);
   static void destruct_BmnRunInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnRunInfo*)
   {
      ::BmnRunInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnRunInfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnRunInfo", ::BmnRunInfo::Class_Version(), "", 14,
                  typeid(::BmnRunInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnRunInfo::Dictionary, isa_proxy, 4,
                  sizeof(::BmnRunInfo) );
      instance.SetNew(&new_BmnRunInfo);
      instance.SetNewArray(&newArray_BmnRunInfo);
      instance.SetDelete(&delete_BmnRunInfo);
      instance.SetDeleteArray(&deleteArray_BmnRunInfo);
      instance.SetDestructor(&destruct_BmnRunInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnRunInfo*)
   {
      return GenerateInitInstanceLocal((::BmnRunInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnRunInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnDataReceiver(void *p = 0);
   static void *newArray_BmnDataReceiver(Long_t size, void *p);
   static void delete_BmnDataReceiver(void *p);
   static void deleteArray_BmnDataReceiver(void *p);
   static void destruct_BmnDataReceiver(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnDataReceiver*)
   {
      ::BmnDataReceiver *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnDataReceiver >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnDataReceiver", ::BmnDataReceiver::Class_Version(), "BmnDataReceiver.h", 33,
                  typeid(::BmnDataReceiver), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnDataReceiver::Dictionary, isa_proxy, 4,
                  sizeof(::BmnDataReceiver) );
      instance.SetNew(&new_BmnDataReceiver);
      instance.SetNewArray(&newArray_BmnDataReceiver);
      instance.SetDelete(&delete_BmnDataReceiver);
      instance.SetDeleteArray(&deleteArray_BmnDataReceiver);
      instance.SetDestructor(&destruct_BmnDataReceiver);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnDataReceiver*)
   {
      return GenerateInitInstanceLocal((::BmnDataReceiver*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnDataReceiver*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_PadInfo(void *p = 0);
   static void *newArray_PadInfo(Long_t size, void *p);
   static void delete_PadInfo(void *p);
   static void deleteArray_PadInfo(void *p);
   static void destruct_PadInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::PadInfo*)
   {
      ::PadInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::PadInfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("PadInfo", ::PadInfo::Class_Version(), "BmnHist.h", 38,
                  typeid(::PadInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::PadInfo::Dictionary, isa_proxy, 4,
                  sizeof(::PadInfo) );
      instance.SetNew(&new_PadInfo);
      instance.SetNewArray(&newArray_PadInfo);
      instance.SetDelete(&delete_PadInfo);
      instance.SetDeleteArray(&deleteArray_PadInfo);
      instance.SetDestructor(&destruct_PadInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::PadInfo*)
   {
      return GenerateInitInstanceLocal((::PadInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::PadInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnHist(void *p);
   static void deleteArray_BmnHist(void *p);
   static void destruct_BmnHist(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnHist*)
   {
      ::BmnHist *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnHist >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnHist", ::BmnHist::Class_Version(), "BmnHist.h", 62,
                  typeid(::BmnHist), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnHist::Dictionary, isa_proxy, 4,
                  sizeof(::BmnHist) );
      instance.SetDelete(&delete_BmnHist);
      instance.SetDeleteArray(&deleteArray_BmnHist);
      instance.SetDestructor(&destruct_BmnHist);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnHist*)
   {
      return GenerateInitInstanceLocal((::BmnHist*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnHist*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnHistToF(void *p);
   static void deleteArray_BmnHistToF(void *p);
   static void destruct_BmnHistToF(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnHistToF*)
   {
      ::BmnHistToF *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnHistToF >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnHistToF", ::BmnHistToF::Class_Version(), "BmnHistToF.h", 40,
                  typeid(::BmnHistToF), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnHistToF::Dictionary, isa_proxy, 4,
                  sizeof(::BmnHistToF) );
      instance.SetDelete(&delete_BmnHistToF);
      instance.SetDeleteArray(&deleteArray_BmnHistToF);
      instance.SetDestructor(&destruct_BmnHistToF);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnHistToF*)
   {
      return GenerateInitInstanceLocal((::BmnHistToF*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnHistToF*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnHistToF700(void *p = 0);
   static void *newArray_BmnHistToF700(Long_t size, void *p);
   static void delete_BmnHistToF700(void *p);
   static void deleteArray_BmnHistToF700(void *p);
   static void destruct_BmnHistToF700(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnHistToF700*)
   {
      ::BmnHistToF700 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnHistToF700 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnHistToF700", ::BmnHistToF700::Class_Version(), "BmnHistToF700.h", 33,
                  typeid(::BmnHistToF700), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnHistToF700::Dictionary, isa_proxy, 4,
                  sizeof(::BmnHistToF700) );
      instance.SetNew(&new_BmnHistToF700);
      instance.SetNewArray(&newArray_BmnHistToF700);
      instance.SetDelete(&delete_BmnHistToF700);
      instance.SetDeleteArray(&deleteArray_BmnHistToF700);
      instance.SetDestructor(&destruct_BmnHistToF700);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnHistToF700*)
   {
      return GenerateInitInstanceLocal((::BmnHistToF700*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnHistToF700*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnHistTrigger(void *p = 0);
   static void *newArray_BmnHistTrigger(Long_t size, void *p);
   static void delete_BmnHistTrigger(void *p);
   static void deleteArray_BmnHistTrigger(void *p);
   static void destruct_BmnHistTrigger(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnHistTrigger*)
   {
      ::BmnHistTrigger *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnHistTrigger >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnHistTrigger", ::BmnHistTrigger::Class_Version(), "BmnHistTrigger.h", 37,
                  typeid(::BmnHistTrigger), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnHistTrigger::Dictionary, isa_proxy, 4,
                  sizeof(::BmnHistTrigger) );
      instance.SetNew(&new_BmnHistTrigger);
      instance.SetNewArray(&newArray_BmnHistTrigger);
      instance.SetDelete(&delete_BmnHistTrigger);
      instance.SetDeleteArray(&deleteArray_BmnHistTrigger);
      instance.SetDestructor(&destruct_BmnHistTrigger);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnHistTrigger*)
   {
      return GenerateInitInstanceLocal((::BmnHistTrigger*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnHistTrigger*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnHistDch(void *p);
   static void deleteArray_BmnHistDch(void *p);
   static void destruct_BmnHistDch(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnHistDch*)
   {
      ::BmnHistDch *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnHistDch >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnHistDch", ::BmnHistDch::Class_Version(), "BmnHistDch.h", 48,
                  typeid(::BmnHistDch), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnHistDch::Dictionary, isa_proxy, 4,
                  sizeof(::BmnHistDch) );
      instance.SetDelete(&delete_BmnHistDch);
      instance.SetDeleteArray(&deleteArray_BmnHistDch);
      instance.SetDestructor(&destruct_BmnHistDch);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnHistDch*)
   {
      return GenerateInitInstanceLocal((::BmnHistDch*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnHistDch*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnHistMwpc(void *p);
   static void deleteArray_BmnHistMwpc(void *p);
   static void destruct_BmnHistMwpc(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnHistMwpc*)
   {
      ::BmnHistMwpc *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnHistMwpc >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnHistMwpc", ::BmnHistMwpc::Class_Version(), "BmnHistMwpc.h", 41,
                  typeid(::BmnHistMwpc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnHistMwpc::Dictionary, isa_proxy, 4,
                  sizeof(::BmnHistMwpc) );
      instance.SetDelete(&delete_BmnHistMwpc);
      instance.SetDeleteArray(&deleteArray_BmnHistMwpc);
      instance.SetDestructor(&destruct_BmnHistMwpc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnHistMwpc*)
   {
      return GenerateInitInstanceLocal((::BmnHistMwpc*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnHistMwpc*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnHistGem(void *p);
   static void deleteArray_BmnHistGem(void *p);
   static void destruct_BmnHistGem(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnHistGem*)
   {
      ::BmnHistGem *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnHistGem >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnHistGem", ::BmnHistGem::Class_Version(), "BmnHistGem.h", 45,
                  typeid(::BmnHistGem), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnHistGem::Dictionary, isa_proxy, 4,
                  sizeof(::BmnHistGem) );
      instance.SetDelete(&delete_BmnHistGem);
      instance.SetDeleteArray(&deleteArray_BmnHistGem);
      instance.SetDestructor(&destruct_BmnHistGem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnHistGem*)
   {
      return GenerateInitInstanceLocal((::BmnHistGem*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnHistGem*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnOnlineDecoder(void *p = 0);
   static void *newArray_BmnOnlineDecoder(Long_t size, void *p);
   static void delete_BmnOnlineDecoder(void *p);
   static void deleteArray_BmnOnlineDecoder(void *p);
   static void destruct_BmnOnlineDecoder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnOnlineDecoder*)
   {
      ::BmnOnlineDecoder *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnOnlineDecoder >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnOnlineDecoder", ::BmnOnlineDecoder::Class_Version(), "BmnOnlineDecoder.h", 52,
                  typeid(::BmnOnlineDecoder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnOnlineDecoder::Dictionary, isa_proxy, 4,
                  sizeof(::BmnOnlineDecoder) );
      instance.SetNew(&new_BmnOnlineDecoder);
      instance.SetNewArray(&newArray_BmnOnlineDecoder);
      instance.SetDelete(&delete_BmnOnlineDecoder);
      instance.SetDeleteArray(&deleteArray_BmnOnlineDecoder);
      instance.SetDestructor(&destruct_BmnOnlineDecoder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnOnlineDecoder*)
   {
      return GenerateInitInstanceLocal((::BmnOnlineDecoder*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnOnlineDecoder*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnHistZDC(void *p = 0);
   static void *newArray_BmnHistZDC(Long_t size, void *p);
   static void delete_BmnHistZDC(void *p);
   static void deleteArray_BmnHistZDC(void *p);
   static void destruct_BmnHistZDC(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnHistZDC*)
   {
      ::BmnHistZDC *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnHistZDC >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnHistZDC", ::BmnHistZDC::Class_Version(), "BmnHistZDC.h", 23,
                  typeid(::BmnHistZDC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnHistZDC::Dictionary, isa_proxy, 4,
                  sizeof(::BmnHistZDC) );
      instance.SetNew(&new_BmnHistZDC);
      instance.SetNewArray(&newArray_BmnHistZDC);
      instance.SetDelete(&delete_BmnHistZDC);
      instance.SetDeleteArray(&deleteArray_BmnHistZDC);
      instance.SetDestructor(&destruct_BmnHistZDC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnHistZDC*)
   {
      return GenerateInitInstanceLocal((::BmnHistZDC*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnHistZDC*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnHistECAL(void *p);
   static void deleteArray_BmnHistECAL(void *p);
   static void destruct_BmnHistECAL(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnHistECAL*)
   {
      ::BmnHistECAL *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnHistECAL >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnHistECAL", ::BmnHistECAL::Class_Version(), "BmnHistECAL.h", 23,
                  typeid(::BmnHistECAL), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnHistECAL::Dictionary, isa_proxy, 4,
                  sizeof(::BmnHistECAL) );
      instance.SetDelete(&delete_BmnHistECAL);
      instance.SetDeleteArray(&deleteArray_BmnHistECAL);
      instance.SetDestructor(&destruct_BmnHistECAL);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnHistECAL*)
   {
      return GenerateInitInstanceLocal((::BmnHistECAL*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnHistECAL*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnHistLAND(void *p);
   static void deleteArray_BmnHistLAND(void *p);
   static void destruct_BmnHistLAND(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnHistLAND*)
   {
      ::BmnHistLAND *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnHistLAND >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnHistLAND", ::BmnHistLAND::Class_Version(), "BmnHistLAND.h", 37,
                  typeid(::BmnHistLAND), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnHistLAND::Dictionary, isa_proxy, 4,
                  sizeof(::BmnHistLAND) );
      instance.SetDelete(&delete_BmnHistLAND);
      instance.SetDeleteArray(&deleteArray_BmnHistLAND);
      instance.SetDestructor(&destruct_BmnHistLAND);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnHistLAND*)
   {
      return GenerateInitInstanceLocal((::BmnHistLAND*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnHistLAND*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnHistSilicon(void *p);
   static void deleteArray_BmnHistSilicon(void *p);
   static void destruct_BmnHistSilicon(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnHistSilicon*)
   {
      ::BmnHistSilicon *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnHistSilicon >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnHistSilicon", ::BmnHistSilicon::Class_Version(), "BmnHistSilicon.h", 37,
                  typeid(::BmnHistSilicon), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnHistSilicon::Dictionary, isa_proxy, 4,
                  sizeof(::BmnHistSilicon) );
      instance.SetDelete(&delete_BmnHistSilicon);
      instance.SetDeleteArray(&deleteArray_BmnHistSilicon);
      instance.SetDestructor(&destruct_BmnHistSilicon);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnHistSilicon*)
   {
      return GenerateInitInstanceLocal((::BmnHistSilicon*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnHistSilicon*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BmnHistSrc(void *p);
   static void deleteArray_BmnHistSrc(void *p);
   static void destruct_BmnHistSrc(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnHistSrc*)
   {
      ::BmnHistSrc *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnHistSrc >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnHistSrc", ::BmnHistSrc::Class_Version(), "BmnHistSrc.h", 26,
                  typeid(::BmnHistSrc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnHistSrc::Dictionary, isa_proxy, 4,
                  sizeof(::BmnHistSrc) );
      instance.SetDelete(&delete_BmnHistSrc);
      instance.SetDeleteArray(&deleteArray_BmnHistSrc);
      instance.SetDestructor(&destruct_BmnHistSrc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnHistSrc*)
   {
      return GenerateInitInstanceLocal((::BmnHistSrc*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnHistSrc*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnMonitor(void *p = 0);
   static void *newArray_BmnMonitor(Long_t size, void *p);
   static void delete_BmnMonitor(void *p);
   static void deleteArray_BmnMonitor(void *p);
   static void destruct_BmnMonitor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnMonitor*)
   {
      ::BmnMonitor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnMonitor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnMonitor", ::BmnMonitor::Class_Version(), "", 176,
                  typeid(::BmnMonitor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnMonitor::Dictionary, isa_proxy, 4,
                  sizeof(::BmnMonitor) );
      instance.SetNew(&new_BmnMonitor);
      instance.SetNewArray(&newArray_BmnMonitor);
      instance.SetDelete(&delete_BmnMonitor);
      instance.SetDeleteArray(&deleteArray_BmnMonitor);
      instance.SetDestructor(&destruct_BmnMonitor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnMonitor*)
   {
      return GenerateInitInstanceLocal((::BmnMonitor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnMonitor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr BmnRunInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnRunInfo::Class_Name()
{
   return "BmnRunInfo";
}

//______________________________________________________________________________
const char *BmnRunInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnRunInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnRunInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnRunInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnRunInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnRunInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnRunInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnRunInfo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnDataReceiver::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnDataReceiver::Class_Name()
{
   return "BmnDataReceiver";
}

//______________________________________________________________________________
const char *BmnDataReceiver::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDataReceiver*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnDataReceiver::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnDataReceiver*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnDataReceiver::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDataReceiver*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnDataReceiver::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnDataReceiver*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr PadInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *PadInfo::Class_Name()
{
   return "PadInfo";
}

//______________________________________________________________________________
const char *PadInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PadInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int PadInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PadInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PadInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PadInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PadInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PadInfo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnHist::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnHist::Class_Name()
{
   return "BmnHist";
}

//______________________________________________________________________________
const char *BmnHist::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHist*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnHist::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHist*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnHist::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHist*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnHist::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHist*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnHistToF::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnHistToF::Class_Name()
{
   return "BmnHistToF";
}

//______________________________________________________________________________
const char *BmnHistToF::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistToF*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnHistToF::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistToF*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnHistToF::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistToF*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnHistToF::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistToF*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnHistToF700::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnHistToF700::Class_Name()
{
   return "BmnHistToF700";
}

//______________________________________________________________________________
const char *BmnHistToF700::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistToF700*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnHistToF700::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistToF700*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnHistToF700::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistToF700*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnHistToF700::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistToF700*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnHistTrigger::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnHistTrigger::Class_Name()
{
   return "BmnHistTrigger";
}

//______________________________________________________________________________
const char *BmnHistTrigger::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistTrigger*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnHistTrigger::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistTrigger*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnHistTrigger::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistTrigger*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnHistTrigger::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistTrigger*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnHistDch::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnHistDch::Class_Name()
{
   return "BmnHistDch";
}

//______________________________________________________________________________
const char *BmnHistDch::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistDch*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnHistDch::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistDch*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnHistDch::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistDch*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnHistDch::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistDch*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnHistMwpc::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnHistMwpc::Class_Name()
{
   return "BmnHistMwpc";
}

//______________________________________________________________________________
const char *BmnHistMwpc::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistMwpc*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnHistMwpc::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistMwpc*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnHistMwpc::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistMwpc*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnHistMwpc::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistMwpc*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnHistGem::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnHistGem::Class_Name()
{
   return "BmnHistGem";
}

//______________________________________________________________________________
const char *BmnHistGem::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistGem*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnHistGem::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistGem*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnHistGem::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistGem*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnHistGem::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistGem*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnOnlineDecoder::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnOnlineDecoder::Class_Name()
{
   return "BmnOnlineDecoder";
}

//______________________________________________________________________________
const char *BmnOnlineDecoder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnOnlineDecoder*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnOnlineDecoder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnOnlineDecoder*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnOnlineDecoder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnOnlineDecoder*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnOnlineDecoder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnOnlineDecoder*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnHistZDC::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnHistZDC::Class_Name()
{
   return "BmnHistZDC";
}

//______________________________________________________________________________
const char *BmnHistZDC::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistZDC*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnHistZDC::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistZDC*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnHistZDC::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistZDC*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnHistZDC::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistZDC*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnHistECAL::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnHistECAL::Class_Name()
{
   return "BmnHistECAL";
}

//______________________________________________________________________________
const char *BmnHistECAL::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistECAL*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnHistECAL::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistECAL*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnHistECAL::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistECAL*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnHistECAL::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistECAL*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnHistLAND::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnHistLAND::Class_Name()
{
   return "BmnHistLAND";
}

//______________________________________________________________________________
const char *BmnHistLAND::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistLAND*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnHistLAND::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistLAND*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnHistLAND::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistLAND*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnHistLAND::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistLAND*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnHistSilicon::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnHistSilicon::Class_Name()
{
   return "BmnHistSilicon";
}

//______________________________________________________________________________
const char *BmnHistSilicon::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistSilicon*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnHistSilicon::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistSilicon*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnHistSilicon::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistSilicon*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnHistSilicon::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistSilicon*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnHistSrc::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnHistSrc::Class_Name()
{
   return "BmnHistSrc";
}

//______________________________________________________________________________
const char *BmnHistSrc::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistSrc*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnHistSrc::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnHistSrc*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnHistSrc::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistSrc*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnHistSrc::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnHistSrc*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnMonitor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnMonitor::Class_Name()
{
   return "BmnMonitor";
}

//______________________________________________________________________________
const char *BmnMonitor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMonitor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnMonitor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnMonitor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnMonitor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMonitor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnMonitor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnMonitor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void BmnRunInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnRunInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnRunInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnRunInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnRunInfo(void *p) {
      return  p ? new(p) ::BmnRunInfo : new ::BmnRunInfo;
   }
   static void *newArray_BmnRunInfo(Long_t nElements, void *p) {
      return p ? new(p) ::BmnRunInfo[nElements] : new ::BmnRunInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnRunInfo(void *p) {
      delete ((::BmnRunInfo*)p);
   }
   static void deleteArray_BmnRunInfo(void *p) {
      delete [] ((::BmnRunInfo*)p);
   }
   static void destruct_BmnRunInfo(void *p) {
      typedef ::BmnRunInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnRunInfo

//______________________________________________________________________________
void BmnDataReceiver::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnDataReceiver.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnDataReceiver::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnDataReceiver::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnDataReceiver(void *p) {
      return  p ? new(p) ::BmnDataReceiver : new ::BmnDataReceiver;
   }
   static void *newArray_BmnDataReceiver(Long_t nElements, void *p) {
      return p ? new(p) ::BmnDataReceiver[nElements] : new ::BmnDataReceiver[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnDataReceiver(void *p) {
      delete ((::BmnDataReceiver*)p);
   }
   static void deleteArray_BmnDataReceiver(void *p) {
      delete [] ((::BmnDataReceiver*)p);
   }
   static void destruct_BmnDataReceiver(void *p) {
      typedef ::BmnDataReceiver current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnDataReceiver

//______________________________________________________________________________
void PadInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class PadInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(PadInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(PadInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_PadInfo(void *p) {
      return  p ? new(p) ::PadInfo : new ::PadInfo;
   }
   static void *newArray_PadInfo(Long_t nElements, void *p) {
      return p ? new(p) ::PadInfo[nElements] : new ::PadInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_PadInfo(void *p) {
      delete ((::PadInfo*)p);
   }
   static void deleteArray_PadInfo(void *p) {
      delete [] ((::PadInfo*)p);
   }
   static void destruct_PadInfo(void *p) {
      typedef ::PadInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::PadInfo

//______________________________________________________________________________
void BmnHist::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnHist.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnHist::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnHist::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnHist(void *p) {
      delete ((::BmnHist*)p);
   }
   static void deleteArray_BmnHist(void *p) {
      delete [] ((::BmnHist*)p);
   }
   static void destruct_BmnHist(void *p) {
      typedef ::BmnHist current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnHist

//______________________________________________________________________________
void BmnHistToF::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnHistToF.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnHistToF::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnHistToF::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnHistToF(void *p) {
      delete ((::BmnHistToF*)p);
   }
   static void deleteArray_BmnHistToF(void *p) {
      delete [] ((::BmnHistToF*)p);
   }
   static void destruct_BmnHistToF(void *p) {
      typedef ::BmnHistToF current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnHistToF

//______________________________________________________________________________
void BmnHistToF700::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnHistToF700.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnHistToF700::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnHistToF700::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnHistToF700(void *p) {
      return  p ? new(p) ::BmnHistToF700 : new ::BmnHistToF700;
   }
   static void *newArray_BmnHistToF700(Long_t nElements, void *p) {
      return p ? new(p) ::BmnHistToF700[nElements] : new ::BmnHistToF700[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnHistToF700(void *p) {
      delete ((::BmnHistToF700*)p);
   }
   static void deleteArray_BmnHistToF700(void *p) {
      delete [] ((::BmnHistToF700*)p);
   }
   static void destruct_BmnHistToF700(void *p) {
      typedef ::BmnHistToF700 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnHistToF700

//______________________________________________________________________________
void BmnHistTrigger::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnHistTrigger.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnHistTrigger::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnHistTrigger::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnHistTrigger(void *p) {
      return  p ? new(p) ::BmnHistTrigger : new ::BmnHistTrigger;
   }
   static void *newArray_BmnHistTrigger(Long_t nElements, void *p) {
      return p ? new(p) ::BmnHistTrigger[nElements] : new ::BmnHistTrigger[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnHistTrigger(void *p) {
      delete ((::BmnHistTrigger*)p);
   }
   static void deleteArray_BmnHistTrigger(void *p) {
      delete [] ((::BmnHistTrigger*)p);
   }
   static void destruct_BmnHistTrigger(void *p) {
      typedef ::BmnHistTrigger current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnHistTrigger

//______________________________________________________________________________
void BmnHistDch::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnHistDch.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnHistDch::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnHistDch::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnHistDch(void *p) {
      delete ((::BmnHistDch*)p);
   }
   static void deleteArray_BmnHistDch(void *p) {
      delete [] ((::BmnHistDch*)p);
   }
   static void destruct_BmnHistDch(void *p) {
      typedef ::BmnHistDch current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnHistDch

//______________________________________________________________________________
void BmnHistMwpc::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnHistMwpc.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnHistMwpc::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnHistMwpc::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnHistMwpc(void *p) {
      delete ((::BmnHistMwpc*)p);
   }
   static void deleteArray_BmnHistMwpc(void *p) {
      delete [] ((::BmnHistMwpc*)p);
   }
   static void destruct_BmnHistMwpc(void *p) {
      typedef ::BmnHistMwpc current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnHistMwpc

//______________________________________________________________________________
void BmnHistGem::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnHistGem.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnHistGem::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnHistGem::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnHistGem(void *p) {
      delete ((::BmnHistGem*)p);
   }
   static void deleteArray_BmnHistGem(void *p) {
      delete [] ((::BmnHistGem*)p);
   }
   static void destruct_BmnHistGem(void *p) {
      typedef ::BmnHistGem current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnHistGem

//______________________________________________________________________________
void BmnOnlineDecoder::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnOnlineDecoder.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnOnlineDecoder::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnOnlineDecoder::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnOnlineDecoder(void *p) {
      return  p ? new(p) ::BmnOnlineDecoder : new ::BmnOnlineDecoder;
   }
   static void *newArray_BmnOnlineDecoder(Long_t nElements, void *p) {
      return p ? new(p) ::BmnOnlineDecoder[nElements] : new ::BmnOnlineDecoder[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnOnlineDecoder(void *p) {
      delete ((::BmnOnlineDecoder*)p);
   }
   static void deleteArray_BmnOnlineDecoder(void *p) {
      delete [] ((::BmnOnlineDecoder*)p);
   }
   static void destruct_BmnOnlineDecoder(void *p) {
      typedef ::BmnOnlineDecoder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnOnlineDecoder

//______________________________________________________________________________
void BmnHistZDC::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnHistZDC.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnHistZDC::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnHistZDC::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnHistZDC(void *p) {
      return  p ? new(p) ::BmnHistZDC : new ::BmnHistZDC;
   }
   static void *newArray_BmnHistZDC(Long_t nElements, void *p) {
      return p ? new(p) ::BmnHistZDC[nElements] : new ::BmnHistZDC[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnHistZDC(void *p) {
      delete ((::BmnHistZDC*)p);
   }
   static void deleteArray_BmnHistZDC(void *p) {
      delete [] ((::BmnHistZDC*)p);
   }
   static void destruct_BmnHistZDC(void *p) {
      typedef ::BmnHistZDC current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnHistZDC

//______________________________________________________________________________
void BmnHistECAL::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnHistECAL.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnHistECAL::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnHistECAL::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnHistECAL(void *p) {
      delete ((::BmnHistECAL*)p);
   }
   static void deleteArray_BmnHistECAL(void *p) {
      delete [] ((::BmnHistECAL*)p);
   }
   static void destruct_BmnHistECAL(void *p) {
      typedef ::BmnHistECAL current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnHistECAL

//______________________________________________________________________________
void BmnHistLAND::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnHistLAND.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnHistLAND::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnHistLAND::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnHistLAND(void *p) {
      delete ((::BmnHistLAND*)p);
   }
   static void deleteArray_BmnHistLAND(void *p) {
      delete [] ((::BmnHistLAND*)p);
   }
   static void destruct_BmnHistLAND(void *p) {
      typedef ::BmnHistLAND current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnHistLAND

//______________________________________________________________________________
void BmnHistSilicon::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnHistSilicon.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnHistSilicon::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnHistSilicon::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnHistSilicon(void *p) {
      delete ((::BmnHistSilicon*)p);
   }
   static void deleteArray_BmnHistSilicon(void *p) {
      delete [] ((::BmnHistSilicon*)p);
   }
   static void destruct_BmnHistSilicon(void *p) {
      typedef ::BmnHistSilicon current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnHistSilicon

//______________________________________________________________________________
void BmnHistSrc::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnHistSrc.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnHistSrc::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnHistSrc::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BmnHistSrc(void *p) {
      delete ((::BmnHistSrc*)p);
   }
   static void deleteArray_BmnHistSrc(void *p) {
      delete [] ((::BmnHistSrc*)p);
   }
   static void destruct_BmnHistSrc(void *p) {
      typedef ::BmnHistSrc current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnHistSrc

//______________________________________________________________________________
void BmnMonitor::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnMonitor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BmnMonitor::Class(),this);
   } else {
      R__b.WriteClassBuffer(BmnMonitor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnMonitor(void *p) {
      return  p ? new(p) ::BmnMonitor : new ::BmnMonitor;
   }
   static void *newArray_BmnMonitor(Long_t nElements, void *p) {
      return p ? new(p) ::BmnMonitor[nElements] : new ::BmnMonitor[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnMonitor(void *p) {
      delete ((::BmnMonitor*)p);
   }
   static void deleteArray_BmnMonitor(void *p) {
      delete [] ((::BmnMonitor*)p);
   }
   static void destruct_BmnMonitor(void *p) {
      typedef ::BmnMonitor current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BmnMonitor

namespace ROOT {
   static TClass *vectorlEvectorlEvectorlEintmUgRsPgRsPgR_Dictionary();
   static void vectorlEvectorlEvectorlEintmUgRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEvectorlEintmUgRsPgRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEvectorlEintmUgRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEvectorlEintmUgRsPgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEvectorlEintmUgRsPgRsPgR(void *p);
   static void destruct_vectorlEvectorlEvectorlEintmUgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<vector<int*> > >*)
   {
      vector<vector<vector<int*> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<vector<int*> > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<vector<int*> > >", -2, "vector", 216,
                  typeid(vector<vector<vector<int*> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEvectorlEintmUgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<vector<vector<int*> > >) );
      instance.SetNew(&new_vectorlEvectorlEvectorlEintmUgRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEvectorlEintmUgRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEvectorlEintmUgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEvectorlEintmUgRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEvectorlEintmUgRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<vector<int*> > > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<vector<int*> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEvectorlEintmUgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<vector<int*> > >*)0x0)->GetClass();
      vectorlEvectorlEvectorlEintmUgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEvectorlEintmUgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEvectorlEintmUgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<vector<int*> > > : new vector<vector<vector<int*> > >;
   }
   static void *newArray_vectorlEvectorlEvectorlEintmUgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<vector<int*> > >[nElements] : new vector<vector<vector<int*> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEvectorlEintmUgRsPgRsPgR(void *p) {
      delete ((vector<vector<vector<int*> > >*)p);
   }
   static void deleteArray_vectorlEvectorlEvectorlEintmUgRsPgRsPgR(void *p) {
      delete [] ((vector<vector<vector<int*> > >*)p);
   }
   static void destruct_vectorlEvectorlEvectorlEintmUgRsPgRsPgR(void *p) {
      typedef vector<vector<vector<int*> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<vector<int*> > >

namespace ROOT {
   static TClass *vectorlEvectorlEvectorlETH1FgRsPgRsPgR_Dictionary();
   static void vectorlEvectorlEvectorlETH1FgRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEvectorlETH1FgRsPgRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEvectorlETH1FgRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEvectorlETH1FgRsPgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEvectorlETH1FgRsPgRsPgR(void *p);
   static void destruct_vectorlEvectorlEvectorlETH1FgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<vector<TH1F> > >*)
   {
      vector<vector<vector<TH1F> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<vector<TH1F> > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<vector<TH1F> > >", -2, "vector", 216,
                  typeid(vector<vector<vector<TH1F> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEvectorlETH1FgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<vector<vector<TH1F> > >) );
      instance.SetNew(&new_vectorlEvectorlEvectorlETH1FgRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEvectorlETH1FgRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEvectorlETH1FgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEvectorlETH1FgRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEvectorlETH1FgRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<vector<TH1F> > > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<vector<TH1F> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEvectorlETH1FgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<vector<TH1F> > >*)0x0)->GetClass();
      vectorlEvectorlEvectorlETH1FgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEvectorlETH1FgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEvectorlETH1FgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<vector<TH1F> > > : new vector<vector<vector<TH1F> > >;
   }
   static void *newArray_vectorlEvectorlEvectorlETH1FgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<vector<TH1F> > >[nElements] : new vector<vector<vector<TH1F> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEvectorlETH1FgRsPgRsPgR(void *p) {
      delete ((vector<vector<vector<TH1F> > >*)p);
   }
   static void deleteArray_vectorlEvectorlEvectorlETH1FgRsPgRsPgR(void *p) {
      delete [] ((vector<vector<vector<TH1F> > >*)p);
   }
   static void destruct_vectorlEvectorlEvectorlETH1FgRsPgRsPgR(void *p) {
      typedef vector<vector<vector<TH1F> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<vector<TH1F> > >

namespace ROOT {
   static TClass *vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR_Dictionary();
   static void vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR(void *p);
   static void destruct_vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<vector<TH1F*> > >*)
   {
      vector<vector<vector<TH1F*> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<vector<TH1F*> > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<vector<TH1F*> > >", -2, "vector", 216,
                  typeid(vector<vector<vector<TH1F*> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<vector<vector<TH1F*> > >) );
      instance.SetNew(&new_vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<vector<TH1F*> > > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<vector<TH1F*> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<vector<TH1F*> > >*)0x0)->GetClass();
      vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<vector<TH1F*> > > : new vector<vector<vector<TH1F*> > >;
   }
   static void *newArray_vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<vector<TH1F*> > >[nElements] : new vector<vector<vector<TH1F*> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR(void *p) {
      delete ((vector<vector<vector<TH1F*> > >*)p);
   }
   static void deleteArray_vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR(void *p) {
      delete [] ((vector<vector<vector<TH1F*> > >*)p);
   }
   static void destruct_vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR(void *p) {
      typedef vector<vector<vector<TH1F*> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<vector<TH1F*> > >

namespace ROOT {
   static TClass *vectorlEvectorlEintmUgRsPgR_Dictionary();
   static void vectorlEvectorlEintmUgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEintmUgRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEintmUgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEintmUgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEintmUgRsPgR(void *p);
   static void destruct_vectorlEvectorlEintmUgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<int*> >*)
   {
      vector<vector<int*> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<int*> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<int*> >", -2, "vector", 216,
                  typeid(vector<vector<int*> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEintmUgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<vector<int*> >) );
      instance.SetNew(&new_vectorlEvectorlEintmUgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEintmUgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEintmUgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEintmUgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEintmUgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<int*> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<int*> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEintmUgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<int*> >*)0x0)->GetClass();
      vectorlEvectorlEintmUgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEintmUgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEintmUgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<int*> > : new vector<vector<int*> >;
   }
   static void *newArray_vectorlEvectorlEintmUgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<int*> >[nElements] : new vector<vector<int*> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEintmUgRsPgR(void *p) {
      delete ((vector<vector<int*> >*)p);
   }
   static void deleteArray_vectorlEvectorlEintmUgRsPgR(void *p) {
      delete [] ((vector<vector<int*> >*)p);
   }
   static void destruct_vectorlEvectorlEintmUgRsPgR(void *p) {
      typedef vector<vector<int*> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<int*> >

namespace ROOT {
   static TClass *vectorlEvectorlETH1FgRsPgR_Dictionary();
   static void vectorlEvectorlETH1FgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlETH1FgRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlETH1FgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlETH1FgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlETH1FgRsPgR(void *p);
   static void destruct_vectorlEvectorlETH1FgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<TH1F> >*)
   {
      vector<vector<TH1F> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<TH1F> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<TH1F> >", -2, "vector", 216,
                  typeid(vector<vector<TH1F> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlETH1FgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<vector<TH1F> >) );
      instance.SetNew(&new_vectorlEvectorlETH1FgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlETH1FgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlETH1FgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlETH1FgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlETH1FgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<TH1F> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<TH1F> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlETH1FgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<TH1F> >*)0x0)->GetClass();
      vectorlEvectorlETH1FgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlETH1FgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlETH1FgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<TH1F> > : new vector<vector<TH1F> >;
   }
   static void *newArray_vectorlEvectorlETH1FgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<TH1F> >[nElements] : new vector<vector<TH1F> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlETH1FgRsPgR(void *p) {
      delete ((vector<vector<TH1F> >*)p);
   }
   static void deleteArray_vectorlEvectorlETH1FgRsPgR(void *p) {
      delete [] ((vector<vector<TH1F> >*)p);
   }
   static void destruct_vectorlEvectorlETH1FgRsPgR(void *p) {
      typedef vector<vector<TH1F> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<TH1F> >

namespace ROOT {
   static TClass *vectorlEvectorlETH1FmUgRsPgR_Dictionary();
   static void vectorlEvectorlETH1FmUgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlETH1FmUgRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlETH1FmUgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlETH1FmUgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlETH1FmUgRsPgR(void *p);
   static void destruct_vectorlEvectorlETH1FmUgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<TH1F*> >*)
   {
      vector<vector<TH1F*> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<TH1F*> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<TH1F*> >", -2, "vector", 216,
                  typeid(vector<vector<TH1F*> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlETH1FmUgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<vector<TH1F*> >) );
      instance.SetNew(&new_vectorlEvectorlETH1FmUgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlETH1FmUgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlETH1FmUgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlETH1FmUgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlETH1FmUgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<TH1F*> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<TH1F*> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlETH1FmUgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<TH1F*> >*)0x0)->GetClass();
      vectorlEvectorlETH1FmUgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlETH1FmUgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlETH1FmUgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<TH1F*> > : new vector<vector<TH1F*> >;
   }
   static void *newArray_vectorlEvectorlETH1FmUgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<TH1F*> >[nElements] : new vector<vector<TH1F*> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlETH1FmUgRsPgR(void *p) {
      delete ((vector<vector<TH1F*> >*)p);
   }
   static void deleteArray_vectorlEvectorlETH1FmUgRsPgR(void *p) {
      delete [] ((vector<vector<TH1F*> >*)p);
   }
   static void destruct_vectorlEvectorlETH1FmUgRsPgR(void *p) {
      typedef vector<vector<TH1F*> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<TH1F*> >

namespace ROOT {
   static TClass *vectorlEintmUgR_Dictionary();
   static void vectorlEintmUgR_TClassManip(TClass*);
   static void *new_vectorlEintmUgR(void *p = 0);
   static void *newArray_vectorlEintmUgR(Long_t size, void *p);
   static void delete_vectorlEintmUgR(void *p);
   static void deleteArray_vectorlEintmUgR(void *p);
   static void destruct_vectorlEintmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<int*>*)
   {
      vector<int*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<int*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<int*>", -2, "vector", 216,
                  typeid(vector<int*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEintmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<int*>) );
      instance.SetNew(&new_vectorlEintmUgR);
      instance.SetNewArray(&newArray_vectorlEintmUgR);
      instance.SetDelete(&delete_vectorlEintmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEintmUgR);
      instance.SetDestructor(&destruct_vectorlEintmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<int*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<int*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEintmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<int*>*)0x0)->GetClass();
      vectorlEintmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEintmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEintmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int*> : new vector<int*>;
   }
   static void *newArray_vectorlEintmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int*>[nElements] : new vector<int*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEintmUgR(void *p) {
      delete ((vector<int*>*)p);
   }
   static void deleteArray_vectorlEintmUgR(void *p) {
      delete [] ((vector<int*>*)p);
   }
   static void destruct_vectorlEintmUgR(void *p) {
      typedef vector<int*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<int*>

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
   static TClass *vectorlETSocketmUgR_Dictionary();
   static void vectorlETSocketmUgR_TClassManip(TClass*);
   static void *new_vectorlETSocketmUgR(void *p = 0);
   static void *newArray_vectorlETSocketmUgR(Long_t size, void *p);
   static void delete_vectorlETSocketmUgR(void *p);
   static void deleteArray_vectorlETSocketmUgR(void *p);
   static void destruct_vectorlETSocketmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TSocket*>*)
   {
      vector<TSocket*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TSocket*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TSocket*>", -2, "vector", 216,
                  typeid(vector<TSocket*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETSocketmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<TSocket*>) );
      instance.SetNew(&new_vectorlETSocketmUgR);
      instance.SetNewArray(&newArray_vectorlETSocketmUgR);
      instance.SetDelete(&delete_vectorlETSocketmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETSocketmUgR);
      instance.SetDestructor(&destruct_vectorlETSocketmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TSocket*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TSocket*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETSocketmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TSocket*>*)0x0)->GetClass();
      vectorlETSocketmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETSocketmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETSocketmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TSocket*> : new vector<TSocket*>;
   }
   static void *newArray_vectorlETSocketmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TSocket*>[nElements] : new vector<TSocket*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETSocketmUgR(void *p) {
      delete ((vector<TSocket*>*)p);
   }
   static void deleteArray_vectorlETSocketmUgR(void *p) {
      delete [] ((vector<TSocket*>*)p);
   }
   static void destruct_vectorlETSocketmUgR(void *p) {
      typedef vector<TSocket*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TSocket*>

namespace ROOT {
   static TClass *vectorlETH2FmUgR_Dictionary();
   static void vectorlETH2FmUgR_TClassManip(TClass*);
   static void *new_vectorlETH2FmUgR(void *p = 0);
   static void *newArray_vectorlETH2FmUgR(Long_t size, void *p);
   static void delete_vectorlETH2FmUgR(void *p);
   static void deleteArray_vectorlETH2FmUgR(void *p);
   static void destruct_vectorlETH2FmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TH2F*>*)
   {
      vector<TH2F*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TH2F*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TH2F*>", -2, "vector", 216,
                  typeid(vector<TH2F*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETH2FmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TH2F*>) );
      instance.SetNew(&new_vectorlETH2FmUgR);
      instance.SetNewArray(&newArray_vectorlETH2FmUgR);
      instance.SetDelete(&delete_vectorlETH2FmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETH2FmUgR);
      instance.SetDestructor(&destruct_vectorlETH2FmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TH2F*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TH2F*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETH2FmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TH2F*>*)0x0)->GetClass();
      vectorlETH2FmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETH2FmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETH2FmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TH2F*> : new vector<TH2F*>;
   }
   static void *newArray_vectorlETH2FmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TH2F*>[nElements] : new vector<TH2F*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETH2FmUgR(void *p) {
      delete ((vector<TH2F*>*)p);
   }
   static void deleteArray_vectorlETH2FmUgR(void *p) {
      delete [] ((vector<TH2F*>*)p);
   }
   static void destruct_vectorlETH2FmUgR(void *p) {
      typedef vector<TH2F*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TH2F*>

namespace ROOT {
   static TClass *vectorlETH1ImUgR_Dictionary();
   static void vectorlETH1ImUgR_TClassManip(TClass*);
   static void *new_vectorlETH1ImUgR(void *p = 0);
   static void *newArray_vectorlETH1ImUgR(Long_t size, void *p);
   static void delete_vectorlETH1ImUgR(void *p);
   static void deleteArray_vectorlETH1ImUgR(void *p);
   static void destruct_vectorlETH1ImUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TH1I*>*)
   {
      vector<TH1I*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TH1I*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TH1I*>", -2, "vector", 216,
                  typeid(vector<TH1I*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETH1ImUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TH1I*>) );
      instance.SetNew(&new_vectorlETH1ImUgR);
      instance.SetNewArray(&newArray_vectorlETH1ImUgR);
      instance.SetDelete(&delete_vectorlETH1ImUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETH1ImUgR);
      instance.SetDestructor(&destruct_vectorlETH1ImUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TH1I*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TH1I*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETH1ImUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TH1I*>*)0x0)->GetClass();
      vectorlETH1ImUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETH1ImUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETH1ImUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TH1I*> : new vector<TH1I*>;
   }
   static void *newArray_vectorlETH1ImUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TH1I*>[nElements] : new vector<TH1I*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETH1ImUgR(void *p) {
      delete ((vector<TH1I*>*)p);
   }
   static void deleteArray_vectorlETH1ImUgR(void *p) {
      delete [] ((vector<TH1I*>*)p);
   }
   static void destruct_vectorlETH1ImUgR(void *p) {
      typedef vector<TH1I*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TH1I*>

namespace ROOT {
   static TClass *vectorlETH1FgR_Dictionary();
   static void vectorlETH1FgR_TClassManip(TClass*);
   static void *new_vectorlETH1FgR(void *p = 0);
   static void *newArray_vectorlETH1FgR(Long_t size, void *p);
   static void delete_vectorlETH1FgR(void *p);
   static void deleteArray_vectorlETH1FgR(void *p);
   static void destruct_vectorlETH1FgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TH1F>*)
   {
      vector<TH1F> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TH1F>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TH1F>", -2, "vector", 216,
                  typeid(vector<TH1F>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETH1FgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<TH1F>) );
      instance.SetNew(&new_vectorlETH1FgR);
      instance.SetNewArray(&newArray_vectorlETH1FgR);
      instance.SetDelete(&delete_vectorlETH1FgR);
      instance.SetDeleteArray(&deleteArray_vectorlETH1FgR);
      instance.SetDestructor(&destruct_vectorlETH1FgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TH1F> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TH1F>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETH1FgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TH1F>*)0x0)->GetClass();
      vectorlETH1FgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETH1FgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETH1FgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TH1F> : new vector<TH1F>;
   }
   static void *newArray_vectorlETH1FgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TH1F>[nElements] : new vector<TH1F>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETH1FgR(void *p) {
      delete ((vector<TH1F>*)p);
   }
   static void deleteArray_vectorlETH1FgR(void *p) {
      delete [] ((vector<TH1F>*)p);
   }
   static void destruct_vectorlETH1FgR(void *p) {
      typedef vector<TH1F> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TH1F>

namespace ROOT {
   static TClass *vectorlETH1FmUgR_Dictionary();
   static void vectorlETH1FmUgR_TClassManip(TClass*);
   static void *new_vectorlETH1FmUgR(void *p = 0);
   static void *newArray_vectorlETH1FmUgR(Long_t size, void *p);
   static void delete_vectorlETH1FmUgR(void *p);
   static void deleteArray_vectorlETH1FmUgR(void *p);
   static void destruct_vectorlETH1FmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TH1F*>*)
   {
      vector<TH1F*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TH1F*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TH1F*>", -2, "vector", 216,
                  typeid(vector<TH1F*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETH1FmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<TH1F*>) );
      instance.SetNew(&new_vectorlETH1FmUgR);
      instance.SetNewArray(&newArray_vectorlETH1FmUgR);
      instance.SetDelete(&delete_vectorlETH1FmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETH1FmUgR);
      instance.SetDestructor(&destruct_vectorlETH1FmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TH1F*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TH1F*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETH1FmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TH1F*>*)0x0)->GetClass();
      vectorlETH1FmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETH1FmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETH1FmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TH1F*> : new vector<TH1F*>;
   }
   static void *newArray_vectorlETH1FmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TH1F*>[nElements] : new vector<TH1F*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETH1FmUgR(void *p) {
      delete ((vector<TH1F*>*)p);
   }
   static void deleteArray_vectorlETH1FmUgR(void *p) {
      delete [] ((vector<TH1F*>*)p);
   }
   static void destruct_vectorlETH1FmUgR(void *p) {
      typedef vector<TH1F*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TH1F*>

namespace ROOT {
   static TClass *vectorlEPadInfomUgR_Dictionary();
   static void vectorlEPadInfomUgR_TClassManip(TClass*);
   static void *new_vectorlEPadInfomUgR(void *p = 0);
   static void *newArray_vectorlEPadInfomUgR(Long_t size, void *p);
   static void delete_vectorlEPadInfomUgR(void *p);
   static void deleteArray_vectorlEPadInfomUgR(void *p);
   static void destruct_vectorlEPadInfomUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<PadInfo*>*)
   {
      vector<PadInfo*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<PadInfo*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<PadInfo*>", -2, "vector", 216,
                  typeid(vector<PadInfo*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEPadInfomUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<PadInfo*>) );
      instance.SetNew(&new_vectorlEPadInfomUgR);
      instance.SetNewArray(&newArray_vectorlEPadInfomUgR);
      instance.SetDelete(&delete_vectorlEPadInfomUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEPadInfomUgR);
      instance.SetDestructor(&destruct_vectorlEPadInfomUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<PadInfo*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<PadInfo*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEPadInfomUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<PadInfo*>*)0x0)->GetClass();
      vectorlEPadInfomUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEPadInfomUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEPadInfomUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<PadInfo*> : new vector<PadInfo*>;
   }
   static void *newArray_vectorlEPadInfomUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<PadInfo*>[nElements] : new vector<PadInfo*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEPadInfomUgR(void *p) {
      delete ((vector<PadInfo*>*)p);
   }
   static void deleteArray_vectorlEPadInfomUgR(void *p) {
      delete [] ((vector<PadInfo*>*)p);
   }
   static void destruct_vectorlEPadInfomUgR(void *p) {
      typedef vector<PadInfo*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<PadInfo*>

namespace ROOT {
   static TClass *vectorlEBmnTrigWaveDigitmUgR_Dictionary();
   static void vectorlEBmnTrigWaveDigitmUgR_TClassManip(TClass*);
   static void *new_vectorlEBmnTrigWaveDigitmUgR(void *p = 0);
   static void *newArray_vectorlEBmnTrigWaveDigitmUgR(Long_t size, void *p);
   static void delete_vectorlEBmnTrigWaveDigitmUgR(void *p);
   static void deleteArray_vectorlEBmnTrigWaveDigitmUgR(void *p);
   static void destruct_vectorlEBmnTrigWaveDigitmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnTrigWaveDigit*>*)
   {
      vector<BmnTrigWaveDigit*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnTrigWaveDigit*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnTrigWaveDigit*>", -2, "vector", 216,
                  typeid(vector<BmnTrigWaveDigit*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnTrigWaveDigitmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<BmnTrigWaveDigit*>) );
      instance.SetNew(&new_vectorlEBmnTrigWaveDigitmUgR);
      instance.SetNewArray(&newArray_vectorlEBmnTrigWaveDigitmUgR);
      instance.SetDelete(&delete_vectorlEBmnTrigWaveDigitmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnTrigWaveDigitmUgR);
      instance.SetDestructor(&destruct_vectorlEBmnTrigWaveDigitmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnTrigWaveDigit*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnTrigWaveDigit*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnTrigWaveDigitmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnTrigWaveDigit*>*)0x0)->GetClass();
      vectorlEBmnTrigWaveDigitmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnTrigWaveDigitmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnTrigWaveDigitmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnTrigWaveDigit*> : new vector<BmnTrigWaveDigit*>;
   }
   static void *newArray_vectorlEBmnTrigWaveDigitmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnTrigWaveDigit*>[nElements] : new vector<BmnTrigWaveDigit*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnTrigWaveDigitmUgR(void *p) {
      delete ((vector<BmnTrigWaveDigit*>*)p);
   }
   static void deleteArray_vectorlEBmnTrigWaveDigitmUgR(void *p) {
      delete [] ((vector<BmnTrigWaveDigit*>*)p);
   }
   static void destruct_vectorlEBmnTrigWaveDigitmUgR(void *p) {
      typedef vector<BmnTrigWaveDigit*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnTrigWaveDigit*>

namespace ROOT {
   static TClass *vectorlEBmnHistmUgR_Dictionary();
   static void vectorlEBmnHistmUgR_TClassManip(TClass*);
   static void *new_vectorlEBmnHistmUgR(void *p = 0);
   static void *newArray_vectorlEBmnHistmUgR(Long_t size, void *p);
   static void delete_vectorlEBmnHistmUgR(void *p);
   static void deleteArray_vectorlEBmnHistmUgR(void *p);
   static void destruct_vectorlEBmnHistmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<BmnHist*>*)
   {
      vector<BmnHist*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<BmnHist*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<BmnHist*>", -2, "vector", 216,
                  typeid(vector<BmnHist*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEBmnHistmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<BmnHist*>) );
      instance.SetNew(&new_vectorlEBmnHistmUgR);
      instance.SetNewArray(&newArray_vectorlEBmnHistmUgR);
      instance.SetDelete(&delete_vectorlEBmnHistmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEBmnHistmUgR);
      instance.SetDestructor(&destruct_vectorlEBmnHistmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<BmnHist*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<BmnHist*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEBmnHistmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<BmnHist*>*)0x0)->GetClass();
      vectorlEBmnHistmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEBmnHistmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEBmnHistmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnHist*> : new vector<BmnHist*>;
   }
   static void *newArray_vectorlEBmnHistmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<BmnHist*>[nElements] : new vector<BmnHist*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEBmnHistmUgR(void *p) {
      delete ((vector<BmnHist*>*)p);
   }
   static void deleteArray_vectorlEBmnHistmUgR(void *p) {
      delete [] ((vector<BmnHist*>*)p);
   }
   static void destruct_vectorlEBmnHistmUgR(void *p) {
      typedef vector<BmnHist*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<BmnHist*>

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
  void TriggerDictionaryInitialization_G__BmnMonitorDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/opt/fairroot/install/include",
"/home/alex/bmnroot_dev/bmnroot/bmndata",
"/home/alex/bmnroot_dev/bmnroot/bmndata/math",
"/home/alex/bmnroot_dev/bmnroot/bmnfield",
"/home/alex/bmnroot_dev/bmnroot/gem",
"/home/alex/bmnroot_dev/bmnroot/silicon",
"/home/alex/bmnroot_dev/bmnroot/dch",
"/home/alex/bmnroot_dev/bmnroot/globaltracking",
"/home/alex/bmnroot_dev/bmnroot/decoder",
"/home/alex/bmnroot_dev/bmnroot/monitor",
"/home/alex/bmnroot_dev/bmnroot/uni_db",
"/home/alex/bmnroot_dev/bmnroot/uni_db/db_classes",
"/opt/fairsoft/install/include",
"/opt/fairsoft/install/include/root",
"/usr/include/libxml2",
"/opt/fairsoft/install/include/root",
"/home/alex/bmnroot_dev/bmnroot/build/monitor/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__BmnMonitorDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$TH1.h")))  __attribute__((annotate("$clingAutoload$BmnRawDataDecoder.h")))  TH1F;
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
class __attribute__((annotate("$clingAutoload$BmnHist.h")))  __attribute__((annotate("$clingAutoload$BmnHistToF.h")))  BmnHist;
class __attribute__((annotate("$clingAutoload$BmnTrigWaveDigit.h")))  __attribute__((annotate("$clingAutoload$BmnRawDataDecoder.h")))  BmnTrigWaveDigit;
class __attribute__((annotate("$clingAutoload$TSocket.h")))  __attribute__((annotate("$clingAutoload$TServerSocket.h")))  TSocket;
class BmnRunInfo;
class __attribute__((annotate("$clingAutoload$BmnDataReceiver.h")))  BmnDataReceiver;
class __attribute__((annotate("$clingAutoload$BmnHist.h")))  __attribute__((annotate("$clingAutoload$BmnHistToF.h")))  PadInfo;
class __attribute__((annotate("$clingAutoload$BmnHistToF.h")))  BmnHistToF;
class __attribute__((annotate("$clingAutoload$BmnHistToF700.h")))  BmnHistToF700;
class __attribute__((annotate("$clingAutoload$BmnHistTrigger.h")))  BmnHistTrigger;
class __attribute__((annotate("$clingAutoload$BmnHistDch.h")))  BmnHistDch;
class __attribute__((annotate("$clingAutoload$BmnHistMwpc.h")))  BmnHistMwpc;
class __attribute__((annotate("$clingAutoload$BmnHistGem.h")))  BmnHistGem;
class __attribute__((annotate("$clingAutoload$BmnOnlineDecoder.h")))  BmnOnlineDecoder;
class __attribute__((annotate("$clingAutoload$BmnHistZDC.h")))  BmnHistZDC;
class __attribute__((annotate("$clingAutoload$BmnHistECAL.h")))  BmnHistECAL;
class __attribute__((annotate("$clingAutoload$BmnHistLAND.h")))  BmnHistLAND;
class __attribute__((annotate("$clingAutoload$BmnHistSilicon.h")))  BmnHistSilicon;
class __attribute__((annotate("$clingAutoload$BmnHistSrc.h")))  BmnHistSrc;
class BmnMonitor;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__BmnMonitorDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif
#ifndef BOOST_FOUND
  #define BOOST_FOUND 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#ifndef BMNRUNINFO_H
#define BMNRUNINFO_H

#include "UniDbRun.h"

class BmnRunInfo : public TObject {
public:
    BmnRunInfo();
    BmnRunInfo(UniDbRun* orig);
    virtual ~BmnRunInfo();// Getters
	/// get period number of the current run
	Int_t GetPeriodNumber() {return i_period_number;}
	/// get run number of the current run
	Int_t GetRunNumber() {return i_run_number;}
	/// get file path of the current run
	TString GetFilePath() {return str_file_path;}
	/// get beam particle of the current run
	TString GetBeamParticle() {return str_beam_particle;}
	/// get target particle of the current run
	TString GetTargetParticle() {return str_target_particle;}
	/// get energy of the current run
	Double_t GetEnergy() {return d_energy;}
//	/// get start datetime of the current run
//	TDatime GetStartDatetime() {return dt_start_datetime;}
//	/// get end datetime of the current run
//	TDatime GetEndDatetime() {return dt_end_datetime;}
	/// get event count of the current run
	Int_t GetEventCount() {return i_event_count;}
	/// get field voltage of the current run
	Double_t GetFieldVoltage() {return d_field_voltage;}
	/// get geometry id of the current run
	Int_t GetGeometryId() {return i_geometry_id;}

	// Setters
	/// set period number of the current run
    void SetPeriodNumber(Int_t period_number){
            i_period_number = period_number;
        }
	/// set run number of the current run
    void SetRunNumber(Int_t run_number){
            i_run_number = run_number;
        }
	/// set file path of the current run
    void SetFilePath(TString file_path){
            str_file_path = file_path;
        }
	/// set beam particle of the current run
    void SetBeamParticle(TString beam_particle){
            str_beam_particle = beam_particle;
        }
	/// set target particle of the current run
    void SetTargetParticle(TString target_particle){
            str_target_particle = target_particle;
        }
	/// set energy of the current run
    void SetEnergy(Double_t energy){
            d_energy = energy;
        }
//	/// set start datetime of the current run
//	void SetStartDatetime(TDatime start_datetime){
//            dt_start_datetime = start_datetime;
//        }
//	/// set end datetime of the current run
//	void SetEndDatetime(TDatime end_datetime){
//            dt_end_datetime = end_datetime;
//        }
	/// set event count of the current run
    void SetEventCount(Int_t event_count){
            i_event_count = event_count;
        }
	/// set field voltage of the current run
    void SetFieldVoltage(Double_t field_voltage){
            d_field_voltage = field_voltage;
        }
	/// set geometry id of the current run
    void SetGeometryId(Int_t geometry_id){
            i_geometry_id = geometry_id;
        }
	/// set geometry id of the current run
    void SetTriggerId(Int_t trigger_id){
            i_trigger_id = trigger_id;
        }
private:
	/// period number
	Int_t i_period_number;
	/// run number
	Int_t i_run_number;
	/// file path
	TString str_file_path;
	/// beam particle
	TString str_beam_particle;
	/// target particle
	TString str_target_particle;
	/// energy
	Double_t d_energy;
	/// start datetime
	//TDatime dt_start_datetime;
	/// end datetime
	//TDatime dt_end_datetime;
	/// event count
	Int_t i_event_count;
	/// field voltage
	Double_t d_field_voltage;
	/// geometry id
	Int_t i_geometry_id;
	/// trigger id
	Int_t i_trigger_id;
        
    ClassDef(BmnRunInfo, 1)

};

#endif /* BMNRUNINFO_H */

#ifndef BMNMONITOR_H
#define BMNMONITOR_H 1
// STL
#include <iostream>
#include <iterator>
#include <regex>
#include <exception>
// FairSoft
#include <TNamed.h>
#include "TFile.h"
#include "TChain.h"
#include "TClonesArray.h"
#include "TColor.h"
#include "TFolder.h"
#include "THttpServer.h"
#include "TMessage.h"
#include "TMonitor.h"
#include "TString.h"
#include "TSystemDirectory.h"
#include "TList.h"
#include "TSystemFile.h"
#include "TServerSocket.h"
// BmnRoot
#include <BmnTrigDigit.h>
#include <BmnTof1Digit.h>
#include <BmnGemStripDigit.h>
#include <BmnDchDigit.h>
#include "BmnDataReceiver.h"
#include <BmnRawDataDecoder.h>
#include "BmnEventHeader.h"
#include "elog_classes/ElogDbRecord.h"
// BmnRoot Monitor
#include "BmnRunInfo.h"
#include "BmnHistToF.h"
#include "BmnHistToF700.h"
#include "BmnHistTrigger.h"
#include "BmnHistDch.h"
#include "BmnHistMwpc.h"
#include "BmnHistGem.h"
#include "BmnOnlineDecoder.h"
#include "BmnHistZDC.h"
#include "BmnHistECAL.h"
#include "BmnHistLAND.h"
#include "BmnOnlineDecoder.h"
#include "BmnHistSilicon.h"
#include "BmnHistSrc.h"

#define TTREE_MAX_SIZE          3e11

using namespace std;
using namespace TMath;

class BmnMonitor : public TNamed {
public:

    BmnMonitor();
    virtual ~BmnMonitor();
    void MonitorStreamZ(TString dir, TString refDir = "", TString decoAddr = "localhost", Int_t webPort = 9000);
    static void threadDecodeWrapper(TString dirname, TString startFile, Bool_t runCurrent);
    static void threadCmdWrapper(string cmd);
    TObjArray* GetAlikeRunsByElog(Int_t periodID, Int_t rinID);
    TObjArray* GetAlikeRunsByUniDB(Int_t periodID, Int_t rinID);
    
    // Getters
    deque<UInt_t> * GetDataQue() { return fDataQue;}

    // Setters
    void SetDataQue(deque<UInt_t> * v) { fDataQue = v;}

    void SetPeriodID(Int_t v) {
        this->fPeriodID = v;
    }

    Int_t GetPeriodID() const {
        return fPeriodID;
    }

private:
    void InitServer();
    void ProcessDigi(Int_t iEv);
    void RegisterAll();
    void UpdateRuns();
    BmnStatus CreateFile(Int_t runID = 0);
    BmnStatus OpenStream();
    void FinishRun();
    
    
    void * _ctx;
    void * _decoSocket;
    deque<UInt_t> * fDataQue;
    TString _curFile;
    TString _curDir;
    TString _refDir;
    TString fRawDecoAddr;
    TTree *fRecoTree;
    TTree *fRecoTree4Show;
    TFile *fHistOut;
    TFile *fHistOutTemp;
    THttpServer * fServer;
    TSocket *fRawDecoSocket;
    DigiArrays *fDigiArrays;

    vector < BmnHist* > bhVec;
    vector < BmnHist* > bhVec4show;
    
    TCanvas *infoCanvas;
//    TList *refList;
    TList *refTable;
    TList *runPub;
    BmnRunInfo *CurRun;

    BmnDataReceiver *dataReceiver;
    BmnOnlineDecoder *onlineDecoder;

    Bool_t keepWorking;
    Int_t _webPort;
    Int_t fTest;
    Int_t fPeriodID;
    Int_t fRunID;
    Int_t fEvents;
    BmnWorkerState fState;
    Int_t itersToUpdate;
    Int_t decoTimeout;
    


    ClassDef(BmnMonitor, 1)
};

#endif/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BmnDataReceiver.h
 * Author: ilnur
 *
 * Created on October 18, 2016, 5:22 PM
 */

#ifndef BMNDATARECEIVER_H
#define BMNDATARECEIVER_H 1
#include <stdlib.h>
#include <deque>
#include <TNamed.h>

#define PNP_DISCOVER_PORT  33304
#define PNP_DISCOVER_IP_ADDR "239.192.1.2"
#define INPUT_IFACE "eno1"
#define MAX_BUF_LEN 32 * 1024 * 1024//1048576
#define MAX_ADDR_LEN 255
#define MAX_PORT_LEN 7
#define MSG_TIMEOUT       400000
#define CONN_TIMEOUT     3000000
#define DBG(a) printf("\e[1mTrace %s: %s\e[0m (%s:%d)\n", __func__, a, __FILE__, __LINE__);
#define DBGERR(a) printf("\e[1m!!! %s error in %s: %s\e[0m (%s:%d)\n", a, __func__, strerror(errno), __FILE__, __LINE__);

using namespace std;

class BmnDataReceiver: public TNamed {
public:
    BmnDataReceiver();
    virtual ~BmnDataReceiver();
    
    Int_t ConnectRaw();
    Int_t Connect();
    Int_t SendHello();
    Int_t InitRecvStream();
    void  FreeRecvStream();
    Int_t IterRecvStream();
    Int_t RecvData();

    void SetDataQueue(deque<UInt_t> v) {
        this->data_queue = v;
    }

    deque<UInt_t>* GetDataQueue() {
        return &data_queue;
    }
    
//    void *GetQueMutex(){ return _deque_mutex;}
//    void SetQueMutex(void *v){_deque_mutex = v;}
    
private:
    //zmq::context_t _ctx;
    //zmq::socket_t _socket_mcast;
    struct serverIface
    {
        Bool_t enabled;
        Bool_t isFree;
        Int_t id;
        UShort_t port;
        Char_t type[MAX_ADDR_LEN];
    };
    struct serverInfo
    {
        Char_t hostName[MAX_ADDR_LEN];
        Char_t index[MAX_ADDR_LEN];
        Char_t name[MAX_ADDR_LEN];
        Char_t type[MAX_ADDR_LEN];
        vector<serverIface> interfaces;
    };
    
    deque<UInt_t> data_queue;
    void * _ctx;
    void * _socket_mcast;
    void * _socket_data;
    Int_t _sfd;
    struct serverInfo _dataServer;
    struct addrinfo *dataAddrInfo;
    Bool_t isListening;
    Bool_t isAddr = kFALSE;
//    void *_deque_mutex; // actually std::mutex
    //static void HandleSignal(int signal);
    void InitSocks();
    void DeinitSocks();
    static Int_t ParsePNPMsg(char *msgStr, serverInfo *sInfo);
    
    
    
    ClassDef(BmnDataReceiver, 1)

};

#endif /* BMNDATARECEIVER_H */

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BmnOnlineDecoder.h
 * Author: ilnur
 *
 * Created on January 11, 2017, 11:08 AM
 */

#ifndef BMNONLINEDECODER_H
#define BMNONLINEDECODER_H 1
#include <climits>
//FairSoft
#include "TNamed.h"
#include "TFile.h"
#include "TChain.h"
#include "TClonesArray.h"
#include "TMessage.h"
#include "TServerSocket.h"
#include "TSocket.h"
#include "TString.h"
#include "TBuffer.h"
#include <root/TPRegexp.h>
#include "TObjString.h"
// BmnRoot
#include <BmnTrigDigit.h>
#include <BmnTof1Digit.h>
#include <BmnGemStripDigit.h>
#include <BmnDchDigit.h>
#include "BmnDataReceiver.h"
#include <BmnRawDataDecoder.h>
#include "BmnEventHeader.h"

#define RAW_DECODER_SOCKET_PORT 5555
#define RUN_FILE_CHECK_PERIOD    1e5
#define RUN_FILE_CHECK_PERIOD    1e5
#define DECO_SOCK_WAIT_PERIOD     10
#define DECO_SOCK_WAIT_LIMIT     5*60e3
#define INOTIF_BUF_LEN (255 * (sizeof(struct inotify_event) + 255))
#define DAQ_ADDR     "bmn-daq"  //"bmn-hrb-3.jinr.ru"
#define DAQ_IP         "10.18.11.200"//"10.18.11.193"//
#define DAQ_PORT               32999
#define MPD_EVENT_HEAD_WORDS       3 // sync + payload lenght + iEv
#define UNKNOWN_RUNID           9999

using namespace std;

class BmnOnlineDecoder : public TNamed {
public:
    BmnOnlineDecoder();
    virtual ~BmnOnlineDecoder();
    BmnStatus Decode(TString dirname, TString startFile, Bool_t runCurrent);
    BmnStatus DecodeStream();
    BmnStatus OpenStream();
    void ProcessStream();
    BmnStatus CloseStream();
    BmnStatus BatchDirectory(TString dirname);
    void SetBmnSetup(BmnSetup v) {
        this->fBmnSetup = v;
    }
    BmnSetup GetBmnSetup() const {
        return fBmnSetup;
    }
    void SetPeriodID(Int_t v) {
        this->fPeriodID = v;
    }
    Int_t GetPeriodID() const {
        return fPeriodID;
    }
private:
    BmnStatus InitDecoder(TString);
    BmnStatus InitDecoder(Int_t runID);
    void ProcessFileRun(TString digiName, UInt_t timeLimit = WAIT_LIMIT);
    static TString WatchNext(TString dirname, TString filename, Int_t cycleWait);
    static TString WatchNext(Int_t inotifDir, Int_t cycleWait);
    static void threadReceiveWrapper(BmnDataReceiver * dr);
    static Int_t GetRunIdFromName(TString name);
    
    void * _ctx;
    void * _decoSocket;
    BmnSetup fBmnSetup;
    BmnRawDataDecoder *rawDataDecoder;
    TString _curFile;
    TString _curDir;
    Int_t fEvents;
    Int_t fPeriodID;
    UInt_t fRunID;
    BmnDataReceiver *dataReceiver;
    Int_t _inotifDir;
    Int_t _inotifDirW;
    Int_t _inotifFile;
    Int_t _inotifFileW;
    
    deque<UInt_t> data_queue;
    void * _socket_mcast;
    void * _socket_data;
    Byte_t buf[MAX_BUF_LEN];
//    UInt_t buf[MAX_BUF_LEN];

    ClassDef(BmnOnlineDecoder, 1)
};

#endif /* BMNONLINEDECODER_H */

/* 
 * File:   BmnHist.h
 * Author: ilnur
 *
 * Created on February 2, 2017, 2:10 PM
 * 
 * Base class for histogram sets
 */

#ifndef BMNHIST_H
#define BMNHIST_H 1

#include <stdlib.h>
#include <vector>

#include <TNamed.h>
#include "TH1F.h"
#include "TH1D.h"
#include "TH2F.h"
#include "THStack.h"
#include "TCanvas.h"
#include "TChain.h"
#include "TFolder.h"
#include "TString.h"
#include "THttpServer.h"
#include "TFile.h"
#include "TFolder.h"

#include "BmnEventHeader.h"
#include "DigiArrays.h"

#define PAD_WIDTH   256
#define PAD_HEIGHT  192

using namespace std;

//template <class HH>
class PadInfo : public TObject {
public:
    PadInfo() {
        current = NULL;
        ref = NULL;
        ref2 = NULL;
    }

    ~PadInfo() {
        if (current) delete current;
        if (ref) delete ref;
        current = NULL;
        ref = NULL;
        ref2 = NULL;
    }
    TH1* current;
    TH1* ref;
    TH1* ref2;
    TString opt;
private:
    ClassDef(PadInfo, 1)
};
ClassImp(PadInfo)

class BmnHist : public TNamed {
public:

    BmnHist(Int_t periodID = 7);
    virtual ~BmnHist();
    virtual void Reset() = 0;
    virtual void Register(THttpServer *serv) = 0;
    virtual void SetDir(TFile *outFile = NULL, TTree *recoTree = NULL) = 0;
    virtual void DrawBoth() = 0;
    virtual void FillFromDigi(DigiArrays *fDigiArrays) = 0;
    virtual void ClearRefRun() = 0;
//    virtual BmnStatus LoadRefRun(TString FileName) = 0;
//    template <class HH>
    static void DrawRef(TCanvas *canGemStrip, vector<PadInfo*> *canGemStripPads);
    static BmnStatus LoadRefRun(Int_t refID, TString FullName, TString fTitle, vector<PadInfo*> canPads, vector<TString> Names);

    void SetRefRunName(TString v) {
        this->refRunName = v;
    }

    TString GetRefRunName() const {
        return refRunName;
    }

    void SetRefID(Int_t v) {
        this->refID = v;
    }

    Int_t GetRefID() const {
        return refID;
    }

    void SetRefPath(TString v) {
        this->refPath = v;
    }

    TString GetRefPath() const {
        return refPath;
    }

    void SetperiodID(Int_t v) {
        this->fPeriodID = v;
    }

    Int_t GetperiodID() const {
        return fPeriodID;
    }
    
    void SetBmnSetup(BmnSetup v) {
        this->fBmnSetup = v;
    }

    BmnSetup GetBmnSetup() const {
        return fBmnSetup;
    }
    
protected:

    Bool_t isShown = kFALSE;
    THttpServer *fServer;
    TTree *frecoTree;
    TDirectory *fDir;
    TString refPath;
    TString refRunName;
    Int_t refID;
    TFile *refFile;
    Int_t fPeriodID;
    BmnSetup fBmnSetup = kBMNSETUP;

    ClassDef(BmnHist, 1)

};

#endif /* BMNHIST_H */

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BmnMonHists.h
 * Author: ilnur
 *
 * Created on November 15, 2016, 12:57 PM
 */
#ifndef BMNHISTGEM_H
#define BMNHISTGEM_H 1
#include <TNamed.h>
#include <exception>
#include <stdlib.h>
#include <vector>
#include "TChain.h"
#include "TClonesArray.h"
#include "TH1F.h"
#include "TH1D.h"
#include "TH2F.h"
#include "TCanvas.h"
#include "TFile.h"
#include "TFolder.h"
#include "TString.h"
#include "THttpServer.h"

#include "BmnHist.h"
#include "BmnGemStripDigit.h"
#include "BmnGemStripStationSet.h"
#include "BmnGemStripConfiguration.h"
#include "BmnGemStripStationSet_RunSpring2017.h"
#include "BmnGemStripStationSet_RunSummer2016.h"
#include "BmnGemStripStationSet_RunWinter2016.h"

using namespace std;

struct histNmask{
    TH1F*  hist;
    Int_t* mask;
};

class BmnHistGem : public BmnHist {
public:

    BmnHistGem(TString title, TString path = "", Int_t periodID = 7);
    virtual ~BmnHistGem();
    void Reset();
    void Register(THttpServer *serv);
    void SetDir(TFile *outFile = NULL, TTree *recoTree = NULL);
    void DrawBoth();
    void FillFromDigi(DigiArrays *fDigiArrays);
    void ClearRefRun();
    BmnStatus  SetRefRun(Int_t id);
    
private:
    BmnGemStripConfiguration::GEM_CONFIG gemStationConfig;
    BmnGemStripStationSet *gemStationSet;
    vector<TString> Names;
    vector<vector<vector<TH1F*  > > > histGemStrip;
    TCanvas *canGemStrip;
//    vector<PadInfo<TH1>*> canGemStripPads;
    vector<PadInfo*> canStripPads;
    UInt_t sumMods;
    UInt_t maxLayers;

    ClassDef(BmnHistGem, 1)
};

#endif /* BMNMONHISTS_H */

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BmnHistSilicon.h
 * Author: ilnur
 *
 * Created on March 9, 2017, 10:39 AM
 */

#ifndef BMNHISTSILICON_H
#define BMNHISTSILICON_H
#include <TNamed.h>
#include <exception>
#include <stdlib.h>
#include <vector>
#include "TChain.h"
#include "TClonesArray.h"
#include "TH1F.h"
#include "TH1D.h"
#include "TH2F.h"
#include "TCanvas.h"
#include "TFile.h"
#include "TFolder.h"
#include "TString.h"
#include "THttpServer.h"

#include "BmnHist.h"
#include "BmnSiliconDigit.h"
#include "BmnSiliconStationSet.h"

using namespace std;

class BmnHistSilicon : public BmnHist {
public:
    BmnHistSilicon(TString title, TString path = "", Int_t periodID = 7);
    virtual ~BmnHistSilicon();
    void Reset();
    void Register(THttpServer *serv);
    void SetDir(TFile *outFile = NULL, TTree *recoTree = NULL);
    void DrawBoth();
    void FillFromDigi(DigiArrays *fDigiArrays);
    void ClearRefRun();
    BmnStatus  SetRefRun(Int_t id);
private:
    TCanvas *canStrip;
    vector<PadInfo*> canStripPads;
//    BmnGemStripConfiguration::GEM_CONFIG gemStationConfig;
//    BmnGemStripStationSet *gemStationSet;
    vector<TString> Names;
    vector<vector<vector<TH1F*  > > > histSiliconStrip;
    UInt_t nStations;
    UInt_t nMods;
    UInt_t nLayers;
    UInt_t sumMods;
    UInt_t maxLayers;

    ClassDef(BmnHistSilicon, 1)
};

#endif /* BMNHISTSILICON_H */

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BmnHistDch.h
 * Author: ilnur
 *
 * Created on November 29, 2016, 2:44 PM
 */

#ifndef BMNHISTDCH_H
#define BMNHISTDCH_H 1
#include <TNamed.h>
#include <exception>
#include <stdlib.h>
#include <vector>
#include "TChain.h"
#include "TColor.h"
#include "TClonesArray.h"
#include "TH1F.h"
#include "TH1D.h"
#include "TH2F.h"
#include "TCanvas.h"
#include "TFile.h"
#include "TFolder.h"
#include "TString.h"
#include "THttpServer.h"
#include "TGaxis.h"

#include "BmnHist.h"
#include "BmnDchDigit.h"
#include "BmnDchHit.h"
#include "BmnEventHeader.h"

#define kNPLANES     16
#define kNREALWIRES 240
#define kNWIRES     256
#define Number        4
#define DCH_WDTH    150
#define PLANE_ROWS    4
#define PLANE_COLS    (kNPLANES/PLANE_ROWS)

using namespace std;

class BmnHistDch : public BmnHist {
public:
    BmnHistDch(TString title, TString path = "");
    virtual ~BmnHistDch();
    void Reset();
    void Register(THttpServer *serv);
    void SetDir(TFile *outFile, TTree *recoTree);
    void FillFromDigi(DigiArrays *fDigiArrays);
    void DrawBoth();
    void ClearRefRun();
    BmnStatus  SetRefRun(Int_t id);

private:
    vector<TString> NamesWires;
    vector<TString> NamesTimes;
    TClonesArray* fDchHits;
    TH1F * h_wires[kNPLANES];
    TH1F * h_times[kNPLANES];
    TH2F* h_DCH1;
    TH2F* h_DCH2;
    TCanvas *canWires;
    TCanvas *canTimes;
    vector<PadInfo*> canWiresPads;
    vector<PadInfo*> canTimesPads;



    ClassDef(BmnHistDch, 1)
};

#endif /* BMNHISTDCH_H */

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BmnHistMwpc.h
 * Author: ilnur
 *
 * Created on December 13, 2016, 2:47 PM
 */

#ifndef BMNHISTMWPC_H
#define BMNHISTMWPC_H 1

#include <TNamed.h>
#include "TChain.h"
#include "TColor.h"
#include "TClonesArray.h"
#include "TH1F.h"
#include "TH1D.h"
#include "TH2F.h"
#include "TCanvas.h"
#include "TFile.h"
#include "TFolder.h"
#include "TString.h"
#include "THttpServer.h"

#include "BmnHist.h"
#include "BmnMwpcDigit.h"
#include "BmnEventHeader.h"

//#define MWPC_PLANES 12
#define MWPC_STATIONS 4
#define MWPC_MODS 6
#define MWPC_WIRES 96
//#define MWPC_ROWS    4
//#define MWPC_COLS    (MWPC_PLANES/MWPC_ROWS)

class BmnHistMwpc : public BmnHist {
public:
    BmnHistMwpc(TString title, TString path = "");
    virtual ~BmnHistMwpc();
    void Reset();
    void Register(THttpServer *serv);
    void SetDir(TFile *outFile, TTree *recoTree);
    void DrawBoth();
    void FillFromDigi(DigiArrays *fDigiArrays);
    void ClearRefRun();
    BmnStatus  SetRefRun(Int_t id);

private:
    vector<TString> NamesWires;
    vector<TString> NamesTimes;
//    TH1F * h_wires[MWPC_PLANES];
//    TH1F * h_times[MWPC_PLANES];
    vector<vector<TH1F* > > h_wires;
    vector<vector<TH1F* > > h_times;
    vector < TH2F* > h_2d;
    TClonesArray* MwpcHits;
    TH2F* h_MWPC0;
    TH2F* h_MWPC1;
    TH2F* h_MWPC2;
    TH2F* h_MWPC3;
    TCanvas *canWires;
    TCanvas *canTimes;
    TCanvas *can2d;
    vector<PadInfo*> canWiresPads;
    vector<PadInfo*> canTimesPads;
    vector<PadInfo*> can2dPads;

    ClassDef(BmnHistMwpc, 1)
};

#endif /* BMNHISTMWPC_H */

#ifndef BMNHISTZDC_H
#define BMNHISTZDC_H 1

#include <TNamed.h>
#include "TChain.h"
#include "TColor.h"
#include "TClonesArray.h"
#include "TH1F.h"
#include "TH1D.h"
#include "TH2F.h"
#include "TCanvas.h"
#include "TFile.h"
#include "TFolder.h"
#include "TString.h"
#include "THttpServer.h"

#include "BmnHist.h"
#include "BmnZDCDigit.h"
#define ZDC_ROWS    1
#define ZDC_COLS    2


class BmnHistZDC : public BmnHist {
public:
    BmnHistZDC(TString title = "ZDC", TString path = "");
    virtual ~BmnHistZDC();
    void Reset();
    void Register(THttpServer *serv);
    void SetDir(TFile *outFile, TTree *recoTree);
    void DrawBoth();
    void ClearRefRun();
    void FillFromDigi(DigiArrays *fDigiArrays);
    BmnStatus  SetRefRun(Int_t id);
private:
    TClonesArray* ZDCHits;
    TH2D* h2d_grid;
    TH2D* h2d_profile;
    TH1D* hx;
    TH1D* hy;
    TCanvas *canAmps;
    vector<PadInfo*> canAmpsPads;
    vector<TString> NamesAmps;

    ClassDef(BmnHistZDC, 1)
};

#endif /* BMNHISTZDC_H */

#ifndef BMNHISTECAL_H
#define BMNHISTECAL_H 1

#include <TNamed.h>
#include "TChain.h"
#include "TColor.h"
#include "TClonesArray.h"
#include "TH1F.h"
#include "TH1D.h"
#include "TH2F.h"
#include "TCanvas.h"
#include "TFile.h"
#include "TFolder.h"
#include "TString.h"
#include "THttpServer.h"

#include "BmnHist.h"
#include "../bmndata/BmnECALDigit.h"
#define ECAL_ROWS    1
#define ECAL_COLS    2


class BmnHistECAL : public BmnHist {
public:
    BmnHistECAL(TString title, TString path = "");
    virtual ~BmnHistECAL();
    void Reset();
    void Register(THttpServer *serv);
    void SetDir(TFile *outFile, TTree *recoTree);
    void DrawBoth();
    void FillFromDigi(DigiArrays *fDigiArrays);
    void ClearRefRun();
    BmnStatus  SetRefRun(Int_t id);
private:
    TClonesArray* ZDCHits;
    TH2D* h2d_grid;
    TH2D* h2d_profile;
    TH1D* hx;
    TH1D* hy;
    TCanvas *canAmps;
    vector<PadInfo*> canAmpsPads;
    vector<TString> NamesAmps;

    ClassDef(BmnHistECAL, 1)
};

#endif /* BMNHISTECAL_H */

/* 
 * File:   BmnHistTrigger.h
 * Author: ilnur
 *
 * Created on November 27, 2016, 4:18 PM
 */

#ifndef BMNHISTTRIGGER_H
#define BMNHISTTRIGGER_H 1
#include <TNamed.h>
#include <exception>
#include <stdlib.h>
#include <algorithm> 
#include <vector>
#include "TChain.h"
#include "TClonesArray.h"
#include "TH1F.h"
#include "TH1D.h"
#include "TH2F.h"
#include "TCanvas.h"
#include "TFile.h"
#include "THttpServer.h"

#include "BmnRawDataDecoder.h"
#include "BmnHist.h"
#include "BmnTrigDigit.h"
#include "BmnTrigRaw2Digit.h"
#include "BmnEventHeader.h"
#define TRIG_TIME_WIN 6000
#define AMP_WIN       3000
#define TRIG_MULTIPL    40
#define BD_CHANNELS     40
#define SI_CHANNELS     64
#define TRIG_ROWS        3
#define TRIG_COLS        3

class BmnHistTrigger : public BmnHist {
public:
    BmnHistTrigger(TString title = "Triggers", TString path = "", Int_t periodID = 7);
    virtual ~BmnHistTrigger();

    void Register(THttpServer *serv);
    void SetDir(TFile *outFile, TTree *recoTree);
    void FillFromDigi(DigiArrays *fDigiArrays);
    void Reset();
    void DrawBoth();
    void ClearRefRun();
    BmnStatus  SetRefRun(Int_t id);

    void SetBDChannel(Int_t iSelChannel);

    Int_t GetBDChannel() {
        return fSelectedBDChannel;
    }

private:
    void InitHistsFromArr(vector<TClonesArray*> *trigAr);
    void SetDir(TDirectory *Dir);
    Int_t fRows = 0;
    Int_t fCols = 0;
    vector<TString> histNames;
    vector<TString> trigNames;
    vector<TString> shortNames;
    TClonesArray *BDEvents;
//    TH1D *histBC1TimeLen;
//    TH1D *histBC2TimeLen;
//    TH1D *histSDTimeLen;
//    TH1D *histVDTimeLen;
//    TH1D *histFDTimeLen;
//    TH1I *histBDTime;
    TH1I *histTriggers;
    TH2I *histTrigTimeByChannel;
    TH2I *histBDTimeByChannel;
    TH1I *histBDChannels;
    TH1I *histBDSimult;
    TH1I *histBDCircular;
    TH2I *histSiTimeByChannel;
    TH1I *histSiChannels;
    TH1I *histSiSimult;
    TH1I *histSiCircular;
    TH1I *histSiBSum;
    TH2I *histCorrBCBC;
    TH2I *histCorrBCVC;
    TH2I *histCorrSiBD;
    TCanvas *can2d;
    TCanvas *canProfile;
    TCanvas *canTimes;
    vector<TH1I*> hists;
    vector<PadInfo*> canProfilePads;
    vector<PadInfo*> canTimesPads;
    vector<PadInfo*> can2dPads;
    Int_t fSelectedBDChannel;

    ClassDef(BmnHistTrigger, 1)
};

#endif /* BMNHISTTRIGGER_H */

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BmnHistToF.h
 * Author: ilnur
 *
 * Created on November 27, 2016, 4:24 PM
 */

#ifndef BMNHISTTOF_H
#define BMNHISTTOF_H 1
// STL
#include <exception>
#include <stdlib.h>
#include <vector>
// FairSoft
#include <TNamed.h>
#include "TChain.h"
#include "TClonesArray.h"
#include "TGaxis.h"
#include "TH1F.h"
#include "TH1D.h"
#include "TH2F.h"
#include "TCanvas.h"
#include "TFile.h"
#include "TFolder.h"
#include "THttpServer.h"
// BmnRoot
#include "BmnHist.h"
#include "BmnTof1Digit.h"
#define TOF400_PLANE_COUNT 20
#define TOF400_STRIP_COUNT 48
#define TOF_COLS    3
#define TOF_ROWS    2

class BmnHistToF : public BmnHist {
public:
    BmnHistToF(TString title, TString path = "");
    virtual ~BmnHistToF();
    
    void Register(THttpServer *serv);
    void SetDir(TFile *outFile = NULL, TTree *recoTree = NULL);
    void Reset();
    void DrawBoth();
    void ClearRefRun();
    BmnStatus  SetRefRun(Int_t id);
        
    void FillFromDigi(DigiArrays *fDigiArrays);
    void SetSelection(Int_t Plane, Int_t Strip, Int_t Side);
    
    void  SetPlane(Int_t v){ fSelectedPlane = v;}
    void  SetSide (Int_t v){ fSelectedSide  = v;}
    void  SetStrip(Int_t v){ fSelectedStrip = v;}
    Int_t GetPlane() { return fSelectedPlane;}
    Int_t GetSide () { return fSelectedSide ;}
    Int_t GetStrip() { return fSelectedStrip;}
private:
//    TBranch * fEventsBranch;
    TClonesArray *Events;
    TH1D *histLeadingTime;
    TH1D *histLeadingTimeSpecific;
    TH1D *histAmp;
    TH1D *histAmpSpecific;
    TH1I *histStrip;
    TH1I *histStripSimult;
    TH2I *histStrip2d;
    TH2F *histState;
    Int_t fSelectedPlane;
    Int_t fSelectedStrip;
    Int_t fSelectedSide;
    TH1I *histL = new TH1I("", "", TOF400_STRIP_COUNT, 0, TOF400_STRIP_COUNT);
    TH1I *histR = new TH1I("", "", TOF400_STRIP_COUNT, 0, TOF400_STRIP_COUNT);
    TH1I histSimultaneous;
    vector<TString> Names;
    TCanvas *canTimes;
    TCanvas *can2d;
    vector<PadInfo*> canTimesPads;
    vector<PadInfo*> can2dPads;
    
    ClassDef(BmnHistToF, 1)
};

#endif /* BMNHISTTOF_H */

/* 
 * File:   BmnHistToF700.h
 * Author: ilnur
 *
 * Created on November 29, 2016, 1:24 PM
 */

#ifndef BMNHISTTOF700_H
#define BMNHISTTOF700_H 1
//STL
#include <exception>
#include <stdlib.h>
#include <vector>
// FairSoft
#include <TNamed.h>
#include "TChain.h"
#include "TClonesArray.h"
#include "TH1F.h"
#include "TH1D.h"
#include "TH2F.h"
#include "TCanvas.h"
#include "TFile.h"
#include "TFolder.h"
#include "THttpServer.h"
#include "BmnEventHeader.h"
// BmnRoot
#include "BmnHist.h"
#include "BmnTof2Digit.h"
#include "BmnTof2Raw2Digit.h"
#define TOF_COLS    3
#define TOF_ROWS    2

class BmnHistToF700 : public BmnHist {
public:
    BmnHistToF700(TString title = "ToF700", TString path = "");
    virtual ~BmnHistToF700();
    void Register(THttpServer *serv);
    void SetDir(TFile *outFile = NULL, TTree *recoTree = NULL);
    void Reset();
    void DrawBoth();
    void ClearRefRun();
    BmnStatus  SetRefRun(Int_t id);    
    
    void FillFromDigi(DigiArrays *fDigiArrays);
    void SetSelection(Int_t Plane, Int_t Strip);
    
    void  SetPlane(Int_t v){ fSelectedPlane = v;}
    void  SetSide (Int_t v){ fSelectedSide  = v;}
    void  SetStrip(Int_t v){ fSelectedStrip = v;}
    Int_t GetPlane() { return fSelectedPlane;}
    Int_t GetSide () { return fSelectedSide ;}
    Int_t GetStrip() { return fSelectedStrip;}    
private:
    TClonesArray *Events;
    TH1D *histLeadingTime;
    TH1D *histLeadingTimeSpecific;
    TH1D *histAmp;
    TH1D *histAmpSpecific;
    TH1I *histStrip;
//    TH1I *histStripSimult;
//    TH2F *histState;
    Int_t fSelectedPlane;
    Int_t fSelectedStrip;
    Int_t fSelectedSide;
    TH1I *histL = new TH1I("", "", TOF2_MAX_STRIPS_IN_CHAMBER, 0, TOF2_MAX_STRIPS_IN_CHAMBER);
    TH1I *histR = new TH1I("", "", TOF2_MAX_STRIPS_IN_CHAMBER, 0, TOF2_MAX_STRIPS_IN_CHAMBER);
    TH1I histSimultaneous;
    vector<TString> Names;
    TCanvas *canTimes;
    vector<PadInfo*> canTimesPads;
    
void SaveHist(TH1 *hist, TString path) {
    TCanvas *c0 = new TCanvas("c0", hist->GetTitle());
    hist->Draw();
    c0->SaveAs(TString(path + TString(hist->GetTitle()) + ".png").Data());
    delete c0;
}
    
    ClassDef(BmnHistToF700, 1)
};
#endif /* BMNHISTTOF700_H */

#ifndef BMNHISTSRC_H
#define BMNHISTSRC_H 1
#include <TNamed.h>
#include <exception>
#include <stdlib.h>
#include <vector>
#include "TChain.h"
#include "TClonesArray.h"
#include "TH1F.h"
#include "TH1D.h"
#include "TH2F.h"
#include "TCanvas.h"
#include "TFile.h"
#include "TFolder.h"
#include "TString.h"
#include "THttpServer.h"

#include "BmnHist.h"
#include "BmnTrigDigit.h"
#include "BmnTrigWaveDigit.h"

#define SRC_COLS  3

using namespace std;

class BmnHistSrc : public BmnHist {
public:

    BmnHistSrc(TString title, TString path = "");
    virtual ~BmnHistSrc();
    void Reset();
    void Register(THttpServer *serv);
    void SetDir(TFile *outFile = NULL, TTree *recoTree = NULL);
    void DrawBoth();
    void FillFromDigi(DigiArrays *fDigiArrays);
    void ClearRefRun();
    BmnStatus  SetRefRun(Int_t id);
    
private:
    void InitHistsFromArr(vector<TClonesArray*> *trigAr);
    void SetDir(TDirectory *Dir);
    vector<TString> Names;
    vector<vector<TH1F*> > hists;
    TCanvas *canvas;
    vector<PadInfo*> canPads;
    Int_t fSrcRows = 0;
    Int_t fSrcCols = 0;
    vector<TString> trigNames;
//    const TString trigNames[13] = 
//    {
//        "BC1", "BC2", "BC3", "BC4", "VC",
//        "X1_Left", "X1_Right", "X2_Left", "X2_Right",
//        "Y1_Left", "Y1_Right", "Y2_Left", "Y2_Right"
//    };
    //BmnTrigRaw2Digit fTrigMapper;

    ClassDef(BmnHistSrc, 1)
};

#endif /* BMNHISTSRC_H */

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BmnHistLAND.h
 * Author: ilnur
 *
 * Created on 23 января 2018 г., 12:50
 */

#ifndef BMNHISTLAND_H
#define BMNHISTLAND_H
// FairSoft
#include <TNamed.h>
#include "TChain.h"
#include "TClonesArray.h"
#include "TGaxis.h"
#include "TH1F.h"
#include "TH1D.h"
#include "TH2F.h"
#include "TCanvas.h"
#include "TFile.h"
#include "TFolder.h"
#include "THttpServer.h"
// BmnRoot
#include "BmnHist.h"
#include "BmnLANDDigit.h"
#define BAR_COUNT   120
#define TOF_MIN    -100
#define TOF_MAX     100
#define CANVAS_ROWS   3
#define CANVAS_COLS   2

class BmnHistLAND : public BmnHist {
public:
    BmnHistLAND(TString title, TString path = "");
    virtual ~BmnHistLAND();
    
    void Register(THttpServer *serv);
    void SetDir(TFile *outFile = NULL, TTree *recoTree = NULL);
    void Reset();
    void DrawBoth();
    void ClearRefRun();
    BmnStatus  SetRefRun(Int_t id);
        
    void FillFromDigi(DigiArrays *fDigiArrays);
private:
    TH2F *Q0vsBar;
    TH2F *Q1vsBar;
    TH2F *T0vsBar;
    TH2F *T1vsBar;
    TH2F *TDiffvsBar;
    TH2F *QvsToF;
    vector<TString> Names;
    TCanvas *can;
    vector<PadInfo*> canPads;

    ClassDef(BmnHistLAND, 1)
};

#endif /* BMNHISTLAND_H */


#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"BmnDataReceiver", payloadCode, "@",
"BmnHist", payloadCode, "@",
"BmnHistDch", payloadCode, "@",
"BmnHistECAL", payloadCode, "@",
"BmnHistGem", payloadCode, "@",
"BmnHistLAND", payloadCode, "@",
"BmnHistMwpc", payloadCode, "@",
"BmnHistSilicon", payloadCode, "@",
"BmnHistSrc", payloadCode, "@",
"BmnHistToF", payloadCode, "@",
"BmnHistToF700", payloadCode, "@",
"BmnHistTrigger", payloadCode, "@",
"BmnHistZDC", payloadCode, "@",
"BmnMonitor", payloadCode, "@",
"BmnOnlineDecoder", payloadCode, "@",
"BmnRunInfo", payloadCode, "@",
"PadInfo", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__BmnMonitorDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__BmnMonitorDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__BmnMonitorDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__BmnMonitorDict() {
  TriggerDictionaryInitialization_G__BmnMonitorDict_Impl();
}
