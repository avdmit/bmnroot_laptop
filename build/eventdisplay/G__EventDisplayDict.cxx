// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIalexdIbmnroot_devdIbmnrootdIbuilddIeventdisplaydIG__EventDisplayDict

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
#include "MpdEventManager.h"
#include "MpdMCTracks.h"
#include "MpdMCStack.h"
#include "MpdEventManagerEditor.h"
#include "MpdMCTracksEditor.h"
#include "MpdBoxSet.h"
#include "MpdBoxSetDraw.h"
#include "MpdBoxSetEditor.h"
#include "MpdPointSetDraw.h"
#include "MpdMCPointDraw.h"
#include "MpdHitDraw.h"
#include "MpdHitPointSetDraw.h"
#include "FairXMLNode.h"
#include "MpdWebScreenshots.h"
#include "bmn/BmnTrackDrawH.h"
#include "bmn/BmnTrackDrawP.h"
#include "bmn/BmnGlobalTrackDraw.h"
#include "bmn/FairMCModuleDraw.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_FairXMLAttrib(void *p = 0);
   static void *newArray_FairXMLAttrib(Long_t size, void *p);
   static void delete_FairXMLAttrib(void *p);
   static void deleteArray_FairXMLAttrib(void *p);
   static void destruct_FairXMLAttrib(void *p);
   static void streamer_FairXMLAttrib(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::FairXMLAttrib*)
   {
      ::FairXMLAttrib *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::FairXMLAttrib >(0);
      static ::ROOT::TGenericClassInfo 
         instance("FairXMLAttrib", ::FairXMLAttrib::Class_Version(), "FairXMLNode.h", 18,
                  typeid(::FairXMLAttrib), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::FairXMLAttrib::Dictionary, isa_proxy, 16,
                  sizeof(::FairXMLAttrib) );
      instance.SetNew(&new_FairXMLAttrib);
      instance.SetNewArray(&newArray_FairXMLAttrib);
      instance.SetDelete(&delete_FairXMLAttrib);
      instance.SetDeleteArray(&deleteArray_FairXMLAttrib);
      instance.SetDestructor(&destruct_FairXMLAttrib);
      instance.SetStreamerFunc(&streamer_FairXMLAttrib);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::FairXMLAttrib*)
   {
      return GenerateInitInstanceLocal((::FairXMLAttrib*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::FairXMLAttrib*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_FairXMLNode(void *p);
   static void deleteArray_FairXMLNode(void *p);
   static void destruct_FairXMLNode(void *p);
   static void streamer_FairXMLNode(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::FairXMLNode*)
   {
      ::FairXMLNode *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::FairXMLNode >(0);
      static ::ROOT::TGenericClassInfo 
         instance("FairXMLNode", ::FairXMLNode::Class_Version(), "FairXMLNode.h", 54,
                  typeid(::FairXMLNode), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::FairXMLNode::Dictionary, isa_proxy, 16,
                  sizeof(::FairXMLNode) );
      instance.SetDelete(&delete_FairXMLNode);
      instance.SetDeleteArray(&deleteArray_FairXMLNode);
      instance.SetDestructor(&destruct_FairXMLNode);
      instance.SetStreamerFunc(&streamer_FairXMLNode);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::FairXMLNode*)
   {
      return GenerateInitInstanceLocal((::FairXMLNode*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::FairXMLNode*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MpdEventManager(void *p = 0);
   static void *newArray_MpdEventManager(Long_t size, void *p);
   static void delete_MpdEventManager(void *p);
   static void deleteArray_MpdEventManager(void *p);
   static void destruct_MpdEventManager(void *p);
   static void streamer_MpdEventManager(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdEventManager*)
   {
      ::MpdEventManager *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdEventManager >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MpdEventManager", ::MpdEventManager::Class_Version(), "", 29,
                  typeid(::MpdEventManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdEventManager::Dictionary, isa_proxy, 16,
                  sizeof(::MpdEventManager) );
      instance.SetNew(&new_MpdEventManager);
      instance.SetNewArray(&newArray_MpdEventManager);
      instance.SetDelete(&delete_MpdEventManager);
      instance.SetDeleteArray(&deleteArray_MpdEventManager);
      instance.SetDestructor(&destruct_MpdEventManager);
      instance.SetStreamerFunc(&streamer_MpdEventManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdEventManager*)
   {
      return GenerateInitInstanceLocal((::MpdEventManager*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdEventManager*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MpdMCTracks(void *p = 0);
   static void *newArray_MpdMCTracks(Long_t size, void *p);
   static void delete_MpdMCTracks(void *p);
   static void deleteArray_MpdMCTracks(void *p);
   static void destruct_MpdMCTracks(void *p);
   static void streamer_MpdMCTracks(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdMCTracks*)
   {
      ::MpdMCTracks *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdMCTracks >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MpdMCTracks", ::MpdMCTracks::Class_Version(), "", 246,
                  typeid(::MpdMCTracks), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdMCTracks::Dictionary, isa_proxy, 16,
                  sizeof(::MpdMCTracks) );
      instance.SetNew(&new_MpdMCTracks);
      instance.SetNewArray(&newArray_MpdMCTracks);
      instance.SetDelete(&delete_MpdMCTracks);
      instance.SetDeleteArray(&deleteArray_MpdMCTracks);
      instance.SetDestructor(&destruct_MpdMCTracks);
      instance.SetStreamerFunc(&streamer_MpdMCTracks);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdMCTracks*)
   {
      return GenerateInitInstanceLocal((::MpdMCTracks*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdMCTracks*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MpdMCStack(void *p = 0);
   static void *newArray_MpdMCStack(Long_t size, void *p);
   static void delete_MpdMCStack(void *p);
   static void deleteArray_MpdMCStack(void *p);
   static void destruct_MpdMCStack(void *p);
   static void streamer_MpdMCStack(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdMCStack*)
   {
      ::MpdMCStack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdMCStack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MpdMCStack", ::MpdMCStack::Class_Version(), "", 312,
                  typeid(::MpdMCStack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdMCStack::Dictionary, isa_proxy, 16,
                  sizeof(::MpdMCStack) );
      instance.SetNew(&new_MpdMCStack);
      instance.SetNewArray(&newArray_MpdMCStack);
      instance.SetDelete(&delete_MpdMCStack);
      instance.SetDeleteArray(&deleteArray_MpdMCStack);
      instance.SetDestructor(&destruct_MpdMCStack);
      instance.SetStreamerFunc(&streamer_MpdMCStack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdMCStack*)
   {
      return GenerateInitInstanceLocal((::MpdMCStack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdMCStack*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MpdEventManagerEditor(void *p = 0);
   static void *newArray_MpdEventManagerEditor(Long_t size, void *p);
   static void delete_MpdEventManagerEditor(void *p);
   static void deleteArray_MpdEventManagerEditor(void *p);
   static void destruct_MpdEventManagerEditor(void *p);
   static void streamer_MpdEventManagerEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdEventManagerEditor*)
   {
      ::MpdEventManagerEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdEventManagerEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MpdEventManagerEditor", ::MpdEventManagerEditor::Class_Version(), "", 384,
                  typeid(::MpdEventManagerEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdEventManagerEditor::Dictionary, isa_proxy, 16,
                  sizeof(::MpdEventManagerEditor) );
      instance.SetNew(&new_MpdEventManagerEditor);
      instance.SetNewArray(&newArray_MpdEventManagerEditor);
      instance.SetDelete(&delete_MpdEventManagerEditor);
      instance.SetDeleteArray(&deleteArray_MpdEventManagerEditor);
      instance.SetDestructor(&destruct_MpdEventManagerEditor);
      instance.SetStreamerFunc(&streamer_MpdEventManagerEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdEventManagerEditor*)
   {
      return GenerateInitInstanceLocal((::MpdEventManagerEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdEventManagerEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MpdMCTracksEditor(void *p = 0);
   static void *newArray_MpdMCTracksEditor(Long_t size, void *p);
   static void delete_MpdMCTracksEditor(void *p);
   static void deleteArray_MpdMCTracksEditor(void *p);
   static void destruct_MpdMCTracksEditor(void *p);
   static void streamer_MpdMCTracksEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdMCTracksEditor*)
   {
      ::MpdMCTracksEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdMCTracksEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MpdMCTracksEditor", ::MpdMCTracksEditor::Class_Version(), "", 462,
                  typeid(::MpdMCTracksEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdMCTracksEditor::Dictionary, isa_proxy, 16,
                  sizeof(::MpdMCTracksEditor) );
      instance.SetNew(&new_MpdMCTracksEditor);
      instance.SetNewArray(&newArray_MpdMCTracksEditor);
      instance.SetDelete(&delete_MpdMCTracksEditor);
      instance.SetDeleteArray(&deleteArray_MpdMCTracksEditor);
      instance.SetDestructor(&destruct_MpdMCTracksEditor);
      instance.SetStreamerFunc(&streamer_MpdMCTracksEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdMCTracksEditor*)
   {
      return GenerateInitInstanceLocal((::MpdMCTracksEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdMCTracksEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_MpdBoxSetDraw(void *p);
   static void deleteArray_MpdBoxSetDraw(void *p);
   static void destruct_MpdBoxSetDraw(void *p);
   static void streamer_MpdBoxSetDraw(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdBoxSetDraw*)
   {
      ::MpdBoxSetDraw *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdBoxSetDraw >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MpdBoxSetDraw", ::MpdBoxSetDraw::Class_Version(), "MpdBoxSetDraw.h", 31,
                  typeid(::MpdBoxSetDraw), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdBoxSetDraw::Dictionary, isa_proxy, 16,
                  sizeof(::MpdBoxSetDraw) );
      instance.SetDelete(&delete_MpdBoxSetDraw);
      instance.SetDeleteArray(&deleteArray_MpdBoxSetDraw);
      instance.SetDestructor(&destruct_MpdBoxSetDraw);
      instance.SetStreamerFunc(&streamer_MpdBoxSetDraw);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdBoxSetDraw*)
   {
      return GenerateInitInstanceLocal((::MpdBoxSetDraw*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdBoxSetDraw*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_MpdBoxSet(void *p);
   static void deleteArray_MpdBoxSet(void *p);
   static void destruct_MpdBoxSet(void *p);
   static void streamer_MpdBoxSet(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdBoxSet*)
   {
      ::MpdBoxSet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdBoxSet >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MpdBoxSet", ::MpdBoxSet::Class_Version(), "", 506,
                  typeid(::MpdBoxSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdBoxSet::Dictionary, isa_proxy, 16,
                  sizeof(::MpdBoxSet) );
      instance.SetDelete(&delete_MpdBoxSet);
      instance.SetDeleteArray(&deleteArray_MpdBoxSet);
      instance.SetDestructor(&destruct_MpdBoxSet);
      instance.SetStreamerFunc(&streamer_MpdBoxSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdBoxSet*)
   {
      return GenerateInitInstanceLocal((::MpdBoxSet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdBoxSet*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MpdBoxSetEditor(void *p = 0);
   static void *newArray_MpdBoxSetEditor(Long_t size, void *p);
   static void delete_MpdBoxSetEditor(void *p);
   static void deleteArray_MpdBoxSetEditor(void *p);
   static void destruct_MpdBoxSetEditor(void *p);
   static void streamer_MpdBoxSetEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdBoxSetEditor*)
   {
      ::MpdBoxSetEditor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdBoxSetEditor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MpdBoxSetEditor", ::MpdBoxSetEditor::Class_Version(), "", 664,
                  typeid(::MpdBoxSetEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdBoxSetEditor::Dictionary, isa_proxy, 16,
                  sizeof(::MpdBoxSetEditor) );
      instance.SetNew(&new_MpdBoxSetEditor);
      instance.SetNewArray(&newArray_MpdBoxSetEditor);
      instance.SetDelete(&delete_MpdBoxSetEditor);
      instance.SetDeleteArray(&deleteArray_MpdBoxSetEditor);
      instance.SetDestructor(&destruct_MpdBoxSetEditor);
      instance.SetStreamerFunc(&streamer_MpdBoxSetEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdBoxSetEditor*)
   {
      return GenerateInitInstanceLocal((::MpdBoxSetEditor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdBoxSetEditor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_MpdPointSetDraw(void *p);
   static void deleteArray_MpdPointSetDraw(void *p);
   static void destruct_MpdPointSetDraw(void *p);
   static void streamer_MpdPointSetDraw(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdPointSetDraw*)
   {
      ::MpdPointSetDraw *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdPointSetDraw >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MpdPointSetDraw", ::MpdPointSetDraw::Class_Version(), "", 726,
                  typeid(::MpdPointSetDraw), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdPointSetDraw::Dictionary, isa_proxy, 16,
                  sizeof(::MpdPointSetDraw) );
      instance.SetDelete(&delete_MpdPointSetDraw);
      instance.SetDeleteArray(&deleteArray_MpdPointSetDraw);
      instance.SetDestructor(&destruct_MpdPointSetDraw);
      instance.SetStreamerFunc(&streamer_MpdPointSetDraw);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdPointSetDraw*)
   {
      return GenerateInitInstanceLocal((::MpdPointSetDraw*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdPointSetDraw*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MpdMCPointDraw(void *p = 0);
   static void *newArray_MpdMCPointDraw(Long_t size, void *p);
   static void delete_MpdMCPointDraw(void *p);
   static void deleteArray_MpdMCPointDraw(void *p);
   static void destruct_MpdMCPointDraw(void *p);
   static void streamer_MpdMCPointDraw(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdMCPointDraw*)
   {
      ::MpdMCPointDraw *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdMCPointDraw >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MpdMCPointDraw", ::MpdMCPointDraw::Class_Version(), "", 793,
                  typeid(::MpdMCPointDraw), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdMCPointDraw::Dictionary, isa_proxy, 16,
                  sizeof(::MpdMCPointDraw) );
      instance.SetNew(&new_MpdMCPointDraw);
      instance.SetNewArray(&newArray_MpdMCPointDraw);
      instance.SetDelete(&delete_MpdMCPointDraw);
      instance.SetDeleteArray(&deleteArray_MpdMCPointDraw);
      instance.SetDestructor(&destruct_MpdMCPointDraw);
      instance.SetStreamerFunc(&streamer_MpdMCPointDraw);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdMCPointDraw*)
   {
      return GenerateInitInstanceLocal((::MpdMCPointDraw*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdMCPointDraw*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MpdHitDraw(void *p = 0);
   static void *newArray_MpdHitDraw(Long_t size, void *p);
   static void delete_MpdHitDraw(void *p);
   static void deleteArray_MpdHitDraw(void *p);
   static void destruct_MpdHitDraw(void *p);
   static void streamer_MpdHitDraw(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdHitDraw*)
   {
      ::MpdHitDraw *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdHitDraw >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MpdHitDraw", ::MpdHitDraw::Class_Version(), "", 828,
                  typeid(::MpdHitDraw), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdHitDraw::Dictionary, isa_proxy, 16,
                  sizeof(::MpdHitDraw) );
      instance.SetNew(&new_MpdHitDraw);
      instance.SetNewArray(&newArray_MpdHitDraw);
      instance.SetDelete(&delete_MpdHitDraw);
      instance.SetDeleteArray(&deleteArray_MpdHitDraw);
      instance.SetDestructor(&destruct_MpdHitDraw);
      instance.SetStreamerFunc(&streamer_MpdHitDraw);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdHitDraw*)
   {
      return GenerateInitInstanceLocal((::MpdHitDraw*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdHitDraw*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MpdHitPointSetDraw(void *p = 0);
   static void *newArray_MpdHitPointSetDraw(Long_t size, void *p);
   static void delete_MpdHitPointSetDraw(void *p);
   static void deleteArray_MpdHitPointSetDraw(void *p);
   static void destruct_MpdHitPointSetDraw(void *p);
   static void streamer_MpdHitPointSetDraw(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdHitPointSetDraw*)
   {
      ::MpdHitPointSetDraw *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdHitPointSetDraw >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MpdHitPointSetDraw", ::MpdHitPointSetDraw::Class_Version(), "", 861,
                  typeid(::MpdHitPointSetDraw), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdHitPointSetDraw::Dictionary, isa_proxy, 16,
                  sizeof(::MpdHitPointSetDraw) );
      instance.SetNew(&new_MpdHitPointSetDraw);
      instance.SetNewArray(&newArray_MpdHitPointSetDraw);
      instance.SetDelete(&delete_MpdHitPointSetDraw);
      instance.SetDeleteArray(&deleteArray_MpdHitPointSetDraw);
      instance.SetDestructor(&destruct_MpdHitPointSetDraw);
      instance.SetStreamerFunc(&streamer_MpdHitPointSetDraw);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdHitPointSetDraw*)
   {
      return GenerateInitInstanceLocal((::MpdHitPointSetDraw*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdHitPointSetDraw*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_MpdWebScreenshots(void *p);
   static void deleteArray_MpdWebScreenshots(void *p);
   static void destruct_MpdWebScreenshots(void *p);
   static void streamer_MpdWebScreenshots(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MpdWebScreenshots*)
   {
      ::MpdWebScreenshots *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MpdWebScreenshots >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MpdWebScreenshots", ::MpdWebScreenshots::Class_Version(), "", 1106,
                  typeid(::MpdWebScreenshots), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MpdWebScreenshots::Dictionary, isa_proxy, 16,
                  sizeof(::MpdWebScreenshots) );
      instance.SetDelete(&delete_MpdWebScreenshots);
      instance.SetDeleteArray(&deleteArray_MpdWebScreenshots);
      instance.SetDestructor(&destruct_MpdWebScreenshots);
      instance.SetStreamerFunc(&streamer_MpdWebScreenshots);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MpdWebScreenshots*)
   {
      return GenerateInitInstanceLocal((::MpdWebScreenshots*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MpdWebScreenshots*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTrackDrawH(void *p = 0);
   static void *newArray_BmnTrackDrawH(Long_t size, void *p);
   static void delete_BmnTrackDrawH(void *p);
   static void deleteArray_BmnTrackDrawH(void *p);
   static void destruct_BmnTrackDrawH(void *p);
   static void streamer_BmnTrackDrawH(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTrackDrawH*)
   {
      ::BmnTrackDrawH *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTrackDrawH >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTrackDrawH", ::BmnTrackDrawH::Class_Version(), "", 1195,
                  typeid(::BmnTrackDrawH), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTrackDrawH::Dictionary, isa_proxy, 16,
                  sizeof(::BmnTrackDrawH) );
      instance.SetNew(&new_BmnTrackDrawH);
      instance.SetNewArray(&newArray_BmnTrackDrawH);
      instance.SetDelete(&delete_BmnTrackDrawH);
      instance.SetDeleteArray(&deleteArray_BmnTrackDrawH);
      instance.SetDestructor(&destruct_BmnTrackDrawH);
      instance.SetStreamerFunc(&streamer_BmnTrackDrawH);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTrackDrawH*)
   {
      return GenerateInitInstanceLocal((::BmnTrackDrawH*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTrackDrawH*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnTrackDrawP(void *p = 0);
   static void *newArray_BmnTrackDrawP(Long_t size, void *p);
   static void delete_BmnTrackDrawP(void *p);
   static void deleteArray_BmnTrackDrawP(void *p);
   static void destruct_BmnTrackDrawP(void *p);
   static void streamer_BmnTrackDrawP(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnTrackDrawP*)
   {
      ::BmnTrackDrawP *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnTrackDrawP >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnTrackDrawP", ::BmnTrackDrawP::Class_Version(), "", 1267,
                  typeid(::BmnTrackDrawP), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnTrackDrawP::Dictionary, isa_proxy, 16,
                  sizeof(::BmnTrackDrawP) );
      instance.SetNew(&new_BmnTrackDrawP);
      instance.SetNewArray(&newArray_BmnTrackDrawP);
      instance.SetDelete(&delete_BmnTrackDrawP);
      instance.SetDeleteArray(&deleteArray_BmnTrackDrawP);
      instance.SetDestructor(&destruct_BmnTrackDrawP);
      instance.SetStreamerFunc(&streamer_BmnTrackDrawP);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnTrackDrawP*)
   {
      return GenerateInitInstanceLocal((::BmnTrackDrawP*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnTrackDrawP*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BmnGlobalTrackDraw(void *p = 0);
   static void *newArray_BmnGlobalTrackDraw(Long_t size, void *p);
   static void delete_BmnGlobalTrackDraw(void *p);
   static void deleteArray_BmnGlobalTrackDraw(void *p);
   static void destruct_BmnGlobalTrackDraw(void *p);
   static void streamer_BmnGlobalTrackDraw(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BmnGlobalTrackDraw*)
   {
      ::BmnGlobalTrackDraw *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BmnGlobalTrackDraw >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BmnGlobalTrackDraw", ::BmnGlobalTrackDraw::Class_Version(), "", 1342,
                  typeid(::BmnGlobalTrackDraw), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BmnGlobalTrackDraw::Dictionary, isa_proxy, 16,
                  sizeof(::BmnGlobalTrackDraw) );
      instance.SetNew(&new_BmnGlobalTrackDraw);
      instance.SetNewArray(&newArray_BmnGlobalTrackDraw);
      instance.SetDelete(&delete_BmnGlobalTrackDraw);
      instance.SetDeleteArray(&deleteArray_BmnGlobalTrackDraw);
      instance.SetDestructor(&destruct_BmnGlobalTrackDraw);
      instance.SetStreamerFunc(&streamer_BmnGlobalTrackDraw);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BmnGlobalTrackDraw*)
   {
      return GenerateInitInstanceLocal((::BmnGlobalTrackDraw*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BmnGlobalTrackDraw*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_FairMCModuleDraw(void *p = 0);
   static void *newArray_FairMCModuleDraw(Long_t size, void *p);
   static void delete_FairMCModuleDraw(void *p);
   static void deleteArray_FairMCModuleDraw(void *p);
   static void destruct_FairMCModuleDraw(void *p);
   static void streamer_FairMCModuleDraw(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::FairMCModuleDraw*)
   {
      ::FairMCModuleDraw *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::FairMCModuleDraw >(0);
      static ::ROOT::TGenericClassInfo 
         instance("FairMCModuleDraw", ::FairMCModuleDraw::Class_Version(), "", 1414,
                  typeid(::FairMCModuleDraw), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::FairMCModuleDraw::Dictionary, isa_proxy, 16,
                  sizeof(::FairMCModuleDraw) );
      instance.SetNew(&new_FairMCModuleDraw);
      instance.SetNewArray(&newArray_FairMCModuleDraw);
      instance.SetDelete(&delete_FairMCModuleDraw);
      instance.SetDeleteArray(&deleteArray_FairMCModuleDraw);
      instance.SetDestructor(&destruct_FairMCModuleDraw);
      instance.SetStreamerFunc(&streamer_FairMCModuleDraw);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::FairMCModuleDraw*)
   {
      return GenerateInitInstanceLocal((::FairMCModuleDraw*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::FairMCModuleDraw*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr FairXMLAttrib::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *FairXMLAttrib::Class_Name()
{
   return "FairXMLAttrib";
}

//______________________________________________________________________________
const char *FairXMLAttrib::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::FairXMLAttrib*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int FairXMLAttrib::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::FairXMLAttrib*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *FairXMLAttrib::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::FairXMLAttrib*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *FairXMLAttrib::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::FairXMLAttrib*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr FairXMLNode::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *FairXMLNode::Class_Name()
{
   return "FairXMLNode";
}

//______________________________________________________________________________
const char *FairXMLNode::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::FairXMLNode*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int FairXMLNode::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::FairXMLNode*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *FairXMLNode::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::FairXMLNode*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *FairXMLNode::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::FairXMLNode*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MpdEventManager::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdEventManager::Class_Name()
{
   return "MpdEventManager";
}

//______________________________________________________________________________
const char *MpdEventManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdEventManager*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MpdEventManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdEventManager*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdEventManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdEventManager*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdEventManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdEventManager*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MpdMCTracks::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdMCTracks::Class_Name()
{
   return "MpdMCTracks";
}

//______________________________________________________________________________
const char *MpdMCTracks::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdMCTracks*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MpdMCTracks::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdMCTracks*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdMCTracks::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdMCTracks*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdMCTracks::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdMCTracks*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MpdMCStack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdMCStack::Class_Name()
{
   return "MpdMCStack";
}

//______________________________________________________________________________
const char *MpdMCStack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdMCStack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MpdMCStack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdMCStack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdMCStack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdMCStack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdMCStack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdMCStack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MpdEventManagerEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdEventManagerEditor::Class_Name()
{
   return "MpdEventManagerEditor";
}

//______________________________________________________________________________
const char *MpdEventManagerEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdEventManagerEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MpdEventManagerEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdEventManagerEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdEventManagerEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdEventManagerEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdEventManagerEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdEventManagerEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MpdMCTracksEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdMCTracksEditor::Class_Name()
{
   return "MpdMCTracksEditor";
}

//______________________________________________________________________________
const char *MpdMCTracksEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdMCTracksEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MpdMCTracksEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdMCTracksEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdMCTracksEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdMCTracksEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdMCTracksEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdMCTracksEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MpdBoxSetDraw::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdBoxSetDraw::Class_Name()
{
   return "MpdBoxSetDraw";
}

//______________________________________________________________________________
const char *MpdBoxSetDraw::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdBoxSetDraw*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MpdBoxSetDraw::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdBoxSetDraw*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdBoxSetDraw::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdBoxSetDraw*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdBoxSetDraw::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdBoxSetDraw*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MpdBoxSet::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdBoxSet::Class_Name()
{
   return "MpdBoxSet";
}

//______________________________________________________________________________
const char *MpdBoxSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdBoxSet*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MpdBoxSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdBoxSet*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdBoxSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdBoxSet*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdBoxSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdBoxSet*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MpdBoxSetEditor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdBoxSetEditor::Class_Name()
{
   return "MpdBoxSetEditor";
}

//______________________________________________________________________________
const char *MpdBoxSetEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdBoxSetEditor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MpdBoxSetEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdBoxSetEditor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdBoxSetEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdBoxSetEditor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdBoxSetEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdBoxSetEditor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MpdPointSetDraw::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdPointSetDraw::Class_Name()
{
   return "MpdPointSetDraw";
}

//______________________________________________________________________________
const char *MpdPointSetDraw::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdPointSetDraw*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MpdPointSetDraw::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdPointSetDraw*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdPointSetDraw::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdPointSetDraw*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdPointSetDraw::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdPointSetDraw*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MpdMCPointDraw::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdMCPointDraw::Class_Name()
{
   return "MpdMCPointDraw";
}

//______________________________________________________________________________
const char *MpdMCPointDraw::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdMCPointDraw*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MpdMCPointDraw::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdMCPointDraw*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdMCPointDraw::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdMCPointDraw*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdMCPointDraw::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdMCPointDraw*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MpdHitDraw::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdHitDraw::Class_Name()
{
   return "MpdHitDraw";
}

//______________________________________________________________________________
const char *MpdHitDraw::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdHitDraw*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MpdHitDraw::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdHitDraw*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdHitDraw::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdHitDraw*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdHitDraw::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdHitDraw*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MpdHitPointSetDraw::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdHitPointSetDraw::Class_Name()
{
   return "MpdHitPointSetDraw";
}

//______________________________________________________________________________
const char *MpdHitPointSetDraw::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdHitPointSetDraw*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MpdHitPointSetDraw::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdHitPointSetDraw*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdHitPointSetDraw::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdHitPointSetDraw*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdHitPointSetDraw::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdHitPointSetDraw*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MpdWebScreenshots::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MpdWebScreenshots::Class_Name()
{
   return "MpdWebScreenshots";
}

//______________________________________________________________________________
const char *MpdWebScreenshots::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdWebScreenshots*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MpdWebScreenshots::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MpdWebScreenshots*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MpdWebScreenshots::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdWebScreenshots*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MpdWebScreenshots::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MpdWebScreenshots*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTrackDrawH::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTrackDrawH::Class_Name()
{
   return "BmnTrackDrawH";
}

//______________________________________________________________________________
const char *BmnTrackDrawH::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackDrawH*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTrackDrawH::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackDrawH*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTrackDrawH::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackDrawH*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTrackDrawH::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackDrawH*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnTrackDrawP::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnTrackDrawP::Class_Name()
{
   return "BmnTrackDrawP";
}

//______________________________________________________________________________
const char *BmnTrackDrawP::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackDrawP*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnTrackDrawP::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackDrawP*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnTrackDrawP::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackDrawP*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnTrackDrawP::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnTrackDrawP*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BmnGlobalTrackDraw::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BmnGlobalTrackDraw::Class_Name()
{
   return "BmnGlobalTrackDraw";
}

//______________________________________________________________________________
const char *BmnGlobalTrackDraw::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGlobalTrackDraw*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BmnGlobalTrackDraw::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BmnGlobalTrackDraw*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BmnGlobalTrackDraw::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGlobalTrackDraw*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BmnGlobalTrackDraw::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BmnGlobalTrackDraw*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr FairMCModuleDraw::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *FairMCModuleDraw::Class_Name()
{
   return "FairMCModuleDraw";
}

//______________________________________________________________________________
const char *FairMCModuleDraw::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::FairMCModuleDraw*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int FairMCModuleDraw::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::FairMCModuleDraw*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *FairMCModuleDraw::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::FairMCModuleDraw*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *FairMCModuleDraw::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::FairMCModuleDraw*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void FairXMLAttrib::Streamer(TBuffer &R__b)
{
   // Stream an object of class FairXMLAttrib.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      fValue.Streamer(R__b);
      fName.Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, FairXMLAttrib::IsA());
   } else {
      R__c = R__b.WriteVersion(FairXMLAttrib::IsA(), kTRUE);
      TObject::Streamer(R__b);
      fValue.Streamer(R__b);
      fName.Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_FairXMLAttrib(void *p) {
      return  p ? new(p) ::FairXMLAttrib : new ::FairXMLAttrib;
   }
   static void *newArray_FairXMLAttrib(Long_t nElements, void *p) {
      return p ? new(p) ::FairXMLAttrib[nElements] : new ::FairXMLAttrib[nElements];
   }
   // Wrapper around operator delete
   static void delete_FairXMLAttrib(void *p) {
      delete ((::FairXMLAttrib*)p);
   }
   static void deleteArray_FairXMLAttrib(void *p) {
      delete [] ((::FairXMLAttrib*)p);
   }
   static void destruct_FairXMLAttrib(void *p) {
      typedef ::FairXMLAttrib current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_FairXMLAttrib(TBuffer &buf, void *obj) {
      ((::FairXMLAttrib*)obj)->::FairXMLAttrib::Streamer(buf);
   }
} // end of namespace ROOT for class ::FairXMLAttrib

//______________________________________________________________________________
void FairXMLNode::Streamer(TBuffer &R__b)
{
   // Stream an object of class FairXMLNode.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> fChildren;
      R__b >> fAttrib;
      R__b >> fNChildren;
      R__b >> fNAttrib;
      fValue.Streamer(R__b);
      fName.Streamer(R__b);
      void *ptr_fMode = (void*)&fMode;
      R__b >> *reinterpret_cast<Int_t*>(ptr_fMode);
      R__b.CheckByteCount(R__s, R__c, FairXMLNode::IsA());
   } else {
      R__c = R__b.WriteVersion(FairXMLNode::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << fChildren;
      R__b << fAttrib;
      R__b << fNChildren;
      R__b << fNAttrib;
      fValue.Streamer(R__b);
      fName.Streamer(R__b);
      R__b << (Int_t)fMode;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_FairXMLNode(void *p) {
      delete ((::FairXMLNode*)p);
   }
   static void deleteArray_FairXMLNode(void *p) {
      delete [] ((::FairXMLNode*)p);
   }
   static void destruct_FairXMLNode(void *p) {
      typedef ::FairXMLNode current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_FairXMLNode(TBuffer &buf, void *obj) {
      ((::FairXMLNode*)obj)->::FairXMLNode::Streamer(buf);
   }
} // end of namespace ROOT for class ::FairXMLNode

//______________________________________________________________________________
void MpdEventManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdEventManager.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TEveEventManager::Streamer(R__b);
      R__b >> EveMCPoints;
      R__b >> EveMCTracks;
      R__b >> EveRecoPoints;
      R__b >> EveRecoTracks;
      void *ptr_gVisualizationColoring = (void*)&gVisualizationColoring;
      R__b >> *reinterpret_cast<Int_t*>(ptr_gVisualizationColoring);
      R__b >> background_color;
      R__b >> isDarkColor;
      R__b >> isOnline;
      R__b >> iDataSource;
      R__b >> fgShowRecoPointsIsShow;
      R__b >> fgRedrawRecoPointsReqired;
      R__b >> fRPhiView;
      R__b >> fRhoZView;
      R__b >> fMulti3DView;
      R__b >> fMultiRPhiView;
      R__b >> fMultiRhoZView;
      R__b >> fRPhiMng;
      R__b >> fRhoZMng;
      R__b >> fRPhiGeomScene;
      R__b >> fRhoZGeomScene;
      R__b >> fAxesPhi;
      R__b >> fAxesRho;
      R__b.ReadStaticArray((double*)fRPhiPlane);
      R__b.ReadStaticArray((double*)fRhoZPlane);
      R__b >> iCurrentEvent;
      R__b >> fPriOnly;
      R__b >> fCurrentPDG;
      R__b >> fMinEnergy;
      R__b >> fMaxEnergy;
      R__b >> fEvtMinEnergy;
      R__b >> fEvtMaxEnergy;
      R__b >> fLastUsedColor;
      fXMLConfig.Streamer(R__b);
      {
         map<int,int> &R__stl =  fPDGToColor;
         R__stl.clear();
         int R__i, R__n;
         R__b >> R__n;
         for (R__i = 0; R__i < R__n; R__i++) {
            int R__t;
            R__b >> R__t;
            int R__t2;
            R__b >> R__t2;
            typedef int Value_t;
            std::pair<Value_t const, int > R__t3(R__t,R__t2);
            R__stl.insert(R__t3);
         }
      }
      R__b.CheckByteCount(R__s, R__c, MpdEventManager::IsA());
   } else {
      R__c = R__b.WriteVersion(MpdEventManager::IsA(), kTRUE);
      TEveEventManager::Streamer(R__b);
      R__b << EveMCPoints;
      R__b << EveMCTracks;
      R__b << EveRecoPoints;
      R__b << EveRecoTracks;
      R__b << (Int_t)gVisualizationColoring;
      R__b << background_color;
      R__b << isDarkColor;
      R__b << isOnline;
      R__b << iDataSource;
      R__b << fgShowRecoPointsIsShow;
      R__b << fgRedrawRecoPointsReqired;
      R__b << fRPhiView;
      R__b << fRhoZView;
      R__b << fMulti3DView;
      R__b << fMultiRPhiView;
      R__b << fMultiRhoZView;
      R__b << fRPhiMng;
      R__b << fRhoZMng;
      R__b << fRPhiGeomScene;
      R__b << fRhoZGeomScene;
      R__b << fAxesPhi;
      R__b << fAxesRho;
      R__b.WriteArray(fRPhiPlane, 4);
      R__b.WriteArray(fRhoZPlane, 4);
      R__b << iCurrentEvent;
      R__b << fPriOnly;
      R__b << fCurrentPDG;
      R__b << fMinEnergy;
      R__b << fMaxEnergy;
      R__b << fEvtMinEnergy;
      R__b << fEvtMaxEnergy;
      R__b << fLastUsedColor;
      fXMLConfig.Streamer(R__b);
      {
         map<int,int> &R__stl =  fPDGToColor;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            map<int,int>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << ((*R__k).first );
            R__b << ((*R__k).second);
            }
         }
      }
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MpdEventManager(void *p) {
      return  p ? new(p) ::MpdEventManager : new ::MpdEventManager;
   }
   static void *newArray_MpdEventManager(Long_t nElements, void *p) {
      return p ? new(p) ::MpdEventManager[nElements] : new ::MpdEventManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_MpdEventManager(void *p) {
      delete ((::MpdEventManager*)p);
   }
   static void deleteArray_MpdEventManager(void *p) {
      delete [] ((::MpdEventManager*)p);
   }
   static void destruct_MpdEventManager(void *p) {
      typedef ::MpdEventManager current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_MpdEventManager(TBuffer &buf, void *obj) {
      ((::MpdEventManager*)obj)->::MpdEventManager::Streamer(buf);
   }
} // end of namespace ROOT for class ::MpdEventManager

//______________________________________________________________________________
void MpdMCTracks::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdMCTracks.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairTask::Streamer(R__b);
      R__b >> fTrPr;
      R__b >> fEveTrList;
      R__b >> MinEnergyLimit;
      R__b >> MaxEnergyLimit;
      R__b >> PEnergy;
      R__b.CheckByteCount(R__s, R__c, MpdMCTracks::IsA());
   } else {
      R__c = R__b.WriteVersion(MpdMCTracks::IsA(), kTRUE);
      FairTask::Streamer(R__b);
      R__b << fTrPr;
      R__b << fEveTrList;
      R__b << MinEnergyLimit;
      R__b << MaxEnergyLimit;
      R__b << PEnergy;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MpdMCTracks(void *p) {
      return  p ? new(p) ::MpdMCTracks : new ::MpdMCTracks;
   }
   static void *newArray_MpdMCTracks(Long_t nElements, void *p) {
      return p ? new(p) ::MpdMCTracks[nElements] : new ::MpdMCTracks[nElements];
   }
   // Wrapper around operator delete
   static void delete_MpdMCTracks(void *p) {
      delete ((::MpdMCTracks*)p);
   }
   static void deleteArray_MpdMCTracks(void *p) {
      delete [] ((::MpdMCTracks*)p);
   }
   static void destruct_MpdMCTracks(void *p) {
      typedef ::MpdMCTracks current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_MpdMCTracks(TBuffer &buf, void *obj) {
      ((::MpdMCTracks*)obj)->::MpdMCTracks::Streamer(buf);
   }
} // end of namespace ROOT for class ::MpdMCTracks

//______________________________________________________________________________
void MpdMCStack::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdMCStack.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairTask::Streamer(R__b);
      R__b >> fEveTrList;
      R__b >> fTrPr;
      R__b.ReadStaticArray((float*)x1);
      R__b.ReadStaticArray((float*)x2);
      R__b.ReadStaticArray((float*)p1);
      R__b.ReadStaticArray((float*)p2);
      R__b.ReadStaticArray((float*)ein);
      R__b >> MinEnergyLimit;
      R__b >> MaxEnergyLimit;
      R__b >> PEnergy;
      R__b.CheckByteCount(R__s, R__c, MpdMCStack::IsA());
   } else {
      R__c = R__b.WriteVersion(MpdMCStack::IsA(), kTRUE);
      FairTask::Streamer(R__b);
      R__b << fEveTrList;
      R__b << fTrPr;
      R__b.WriteArray(x1, 3);
      R__b.WriteArray(x2, 3);
      R__b.WriteArray(p1, 3);
      R__b.WriteArray(p2, 3);
      R__b.WriteArray(ein, 15);
      R__b << MinEnergyLimit;
      R__b << MaxEnergyLimit;
      R__b << PEnergy;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MpdMCStack(void *p) {
      return  p ? new(p) ::MpdMCStack : new ::MpdMCStack;
   }
   static void *newArray_MpdMCStack(Long_t nElements, void *p) {
      return p ? new(p) ::MpdMCStack[nElements] : new ::MpdMCStack[nElements];
   }
   // Wrapper around operator delete
   static void delete_MpdMCStack(void *p) {
      delete ((::MpdMCStack*)p);
   }
   static void deleteArray_MpdMCStack(void *p) {
      delete [] ((::MpdMCStack*)p);
   }
   static void destruct_MpdMCStack(void *p) {
      typedef ::MpdMCStack current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_MpdMCStack(TBuffer &buf, void *obj) {
      ((::MpdMCStack*)obj)->::MpdMCStack::Streamer(buf);
   }
} // end of namespace ROOT for class ::MpdMCStack

//______________________________________________________________________________
void MpdEventManagerEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdEventManagerEditor.

   TGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MpdEventManagerEditor(void *p) {
      return  p ? new(p) ::MpdEventManagerEditor : new ::MpdEventManagerEditor;
   }
   static void *newArray_MpdEventManagerEditor(Long_t nElements, void *p) {
      return p ? new(p) ::MpdEventManagerEditor[nElements] : new ::MpdEventManagerEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_MpdEventManagerEditor(void *p) {
      delete ((::MpdEventManagerEditor*)p);
   }
   static void deleteArray_MpdEventManagerEditor(void *p) {
      delete [] ((::MpdEventManagerEditor*)p);
   }
   static void destruct_MpdEventManagerEditor(void *p) {
      typedef ::MpdEventManagerEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_MpdEventManagerEditor(TBuffer &buf, void *obj) {
      ((::MpdEventManagerEditor*)obj)->::MpdEventManagerEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::MpdEventManagerEditor

//______________________________________________________________________________
void MpdMCTracksEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdMCTracksEditor.

   TGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MpdMCTracksEditor(void *p) {
      return  p ? new(p) ::MpdMCTracksEditor : new ::MpdMCTracksEditor;
   }
   static void *newArray_MpdMCTracksEditor(Long_t nElements, void *p) {
      return p ? new(p) ::MpdMCTracksEditor[nElements] : new ::MpdMCTracksEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_MpdMCTracksEditor(void *p) {
      delete ((::MpdMCTracksEditor*)p);
   }
   static void deleteArray_MpdMCTracksEditor(void *p) {
      delete [] ((::MpdMCTracksEditor*)p);
   }
   static void destruct_MpdMCTracksEditor(void *p) {
      typedef ::MpdMCTracksEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_MpdMCTracksEditor(TBuffer &buf, void *obj) {
      ((::MpdMCTracksEditor*)obj)->::MpdMCTracksEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::MpdMCTracksEditor

//______________________________________________________________________________
void MpdBoxSetDraw::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdBoxSetDraw.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairTask::Streamer(R__b);
      R__b >> fVerbose;
      R__b >> fX;
      R__b >> fY;
      R__b >> fZ;
      R__b >> fTimeWindowPlus;
      R__b >> fTimeWindowMinus;
      R__b >> fStartTime;
      R__b >> fUseEventTime;
      R__b >> isRedraw;
      R__b >> fStartFunctor;
      R__b >> fStopFunctor;
      R__b.CheckByteCount(R__s, R__c, MpdBoxSetDraw::IsA());
   } else {
      R__c = R__b.WriteVersion(MpdBoxSetDraw::IsA(), kTRUE);
      FairTask::Streamer(R__b);
      R__b << fVerbose;
      R__b << fX;
      R__b << fY;
      R__b << fZ;
      R__b << fTimeWindowPlus;
      R__b << fTimeWindowMinus;
      R__b << fStartTime;
      R__b << fUseEventTime;
      R__b << isRedraw;
      R__b << fStartFunctor;
      R__b << fStopFunctor;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_MpdBoxSetDraw(void *p) {
      delete ((::MpdBoxSetDraw*)p);
   }
   static void deleteArray_MpdBoxSetDraw(void *p) {
      delete [] ((::MpdBoxSetDraw*)p);
   }
   static void destruct_MpdBoxSetDraw(void *p) {
      typedef ::MpdBoxSetDraw current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_MpdBoxSetDraw(TBuffer &buf, void *obj) {
      ((::MpdBoxSetDraw*)obj)->::MpdBoxSetDraw::Streamer(buf);
   }
} // end of namespace ROOT for class ::MpdBoxSetDraw

//______________________________________________________________________________
void MpdBoxSet::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdBoxSet.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TEveBoxSet::Streamer(R__b);
      R__b >> fDraw;
      R__b.CheckByteCount(R__s, R__c, MpdBoxSet::IsA());
   } else {
      R__c = R__b.WriteVersion(MpdBoxSet::IsA(), kTRUE);
      TEveBoxSet::Streamer(R__b);
      R__b << fDraw;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_MpdBoxSet(void *p) {
      delete ((::MpdBoxSet*)p);
   }
   static void deleteArray_MpdBoxSet(void *p) {
      delete [] ((::MpdBoxSet*)p);
   }
   static void destruct_MpdBoxSet(void *p) {
      typedef ::MpdBoxSet current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_MpdBoxSet(TBuffer &buf, void *obj) {
      ((::MpdBoxSet*)obj)->::MpdBoxSet::Streamer(buf);
   }
} // end of namespace ROOT for class ::MpdBoxSet

//______________________________________________________________________________
void MpdBoxSetEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdBoxSetEditor.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TGedFrame::Streamer(R__b);
      R__b >> fInfoFrame;
      R__b >> fTimeWindowPlus;
      R__b >> fTimeWindowMinus;
      R__b >> fObject;
      R__b >> fM;
      R__b.CheckByteCount(R__s, R__c, MpdBoxSetEditor::IsA());
   } else {
      R__c = R__b.WriteVersion(MpdBoxSetEditor::IsA(), kTRUE);
      TGedFrame::Streamer(R__b);
      R__b << fInfoFrame;
      R__b << fTimeWindowPlus;
      R__b << fTimeWindowMinus;
      R__b << fObject;
      R__b << fM;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MpdBoxSetEditor(void *p) {
      return  p ? new(p) ::MpdBoxSetEditor : new ::MpdBoxSetEditor;
   }
   static void *newArray_MpdBoxSetEditor(Long_t nElements, void *p) {
      return p ? new(p) ::MpdBoxSetEditor[nElements] : new ::MpdBoxSetEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_MpdBoxSetEditor(void *p) {
      delete ((::MpdBoxSetEditor*)p);
   }
   static void deleteArray_MpdBoxSetEditor(void *p) {
      delete [] ((::MpdBoxSetEditor*)p);
   }
   static void destruct_MpdBoxSetEditor(void *p) {
      typedef ::MpdBoxSetEditor current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_MpdBoxSetEditor(TBuffer &buf, void *obj) {
      ((::MpdBoxSetEditor*)obj)->::MpdBoxSetEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::MpdBoxSetEditor

//______________________________________________________________________________
void MpdPointSetDraw::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdPointSetDraw.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairTask::Streamer(R__b);
      R__b >> fVerbose;
      R__b.CheckByteCount(R__s, R__c, MpdPointSetDraw::IsA());
   } else {
      R__c = R__b.WriteVersion(MpdPointSetDraw::IsA(), kTRUE);
      FairTask::Streamer(R__b);
      R__b << fVerbose;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_MpdPointSetDraw(void *p) {
      delete ((::MpdPointSetDraw*)p);
   }
   static void deleteArray_MpdPointSetDraw(void *p) {
      delete [] ((::MpdPointSetDraw*)p);
   }
   static void destruct_MpdPointSetDraw(void *p) {
      typedef ::MpdPointSetDraw current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_MpdPointSetDraw(TBuffer &buf, void *obj) {
      ((::MpdPointSetDraw*)obj)->::MpdPointSetDraw::Streamer(buf);
   }
} // end of namespace ROOT for class ::MpdPointSetDraw

//______________________________________________________________________________
void MpdMCPointDraw::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdMCPointDraw.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      MpdPointSetDraw::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, MpdMCPointDraw::IsA());
   } else {
      R__c = R__b.WriteVersion(MpdMCPointDraw::IsA(), kTRUE);
      MpdPointSetDraw::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MpdMCPointDraw(void *p) {
      return  p ? new(p) ::MpdMCPointDraw : new ::MpdMCPointDraw;
   }
   static void *newArray_MpdMCPointDraw(Long_t nElements, void *p) {
      return p ? new(p) ::MpdMCPointDraw[nElements] : new ::MpdMCPointDraw[nElements];
   }
   // Wrapper around operator delete
   static void delete_MpdMCPointDraw(void *p) {
      delete ((::MpdMCPointDraw*)p);
   }
   static void deleteArray_MpdMCPointDraw(void *p) {
      delete [] ((::MpdMCPointDraw*)p);
   }
   static void destruct_MpdMCPointDraw(void *p) {
      typedef ::MpdMCPointDraw current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_MpdMCPointDraw(TBuffer &buf, void *obj) {
      ((::MpdMCPointDraw*)obj)->::MpdMCPointDraw::Streamer(buf);
   }
} // end of namespace ROOT for class ::MpdMCPointDraw

//______________________________________________________________________________
void MpdHitDraw::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdHitDraw.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      MpdBoxSetDraw::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, MpdHitDraw::IsA());
   } else {
      R__c = R__b.WriteVersion(MpdHitDraw::IsA(), kTRUE);
      MpdBoxSetDraw::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MpdHitDraw(void *p) {
      return  p ? new(p) ::MpdHitDraw : new ::MpdHitDraw;
   }
   static void *newArray_MpdHitDraw(Long_t nElements, void *p) {
      return p ? new(p) ::MpdHitDraw[nElements] : new ::MpdHitDraw[nElements];
   }
   // Wrapper around operator delete
   static void delete_MpdHitDraw(void *p) {
      delete ((::MpdHitDraw*)p);
   }
   static void deleteArray_MpdHitDraw(void *p) {
      delete [] ((::MpdHitDraw*)p);
   }
   static void destruct_MpdHitDraw(void *p) {
      typedef ::MpdHitDraw current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_MpdHitDraw(TBuffer &buf, void *obj) {
      ((::MpdHitDraw*)obj)->::MpdHitDraw::Streamer(buf);
   }
} // end of namespace ROOT for class ::MpdHitDraw

//______________________________________________________________________________
void MpdHitPointSetDraw::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdHitPointSetDraw.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      MpdPointSetDraw::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, MpdHitPointSetDraw::IsA());
   } else {
      R__c = R__b.WriteVersion(MpdHitPointSetDraw::IsA(), kTRUE);
      MpdPointSetDraw::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MpdHitPointSetDraw(void *p) {
      return  p ? new(p) ::MpdHitPointSetDraw : new ::MpdHitPointSetDraw;
   }
   static void *newArray_MpdHitPointSetDraw(Long_t nElements, void *p) {
      return p ? new(p) ::MpdHitPointSetDraw[nElements] : new ::MpdHitPointSetDraw[nElements];
   }
   // Wrapper around operator delete
   static void delete_MpdHitPointSetDraw(void *p) {
      delete ((::MpdHitPointSetDraw*)p);
   }
   static void deleteArray_MpdHitPointSetDraw(void *p) {
      delete [] ((::MpdHitPointSetDraw*)p);
   }
   static void destruct_MpdHitPointSetDraw(void *p) {
      typedef ::MpdHitPointSetDraw current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_MpdHitPointSetDraw(TBuffer &buf, void *obj) {
      ((::MpdHitPointSetDraw*)obj)->::MpdHitPointSetDraw::Streamer(buf);
   }
} // end of namespace ROOT for class ::MpdHitPointSetDraw

//______________________________________________________________________________
void MpdWebScreenshots::Streamer(TBuffer &R__b)
{
   // Stream an object of class MpdWebScreenshots.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairTask::Streamer(R__b);
      R__b >> fMan;
      R__b >> iFormatFiles;
      R__b >> isMultiFiles;
      outputDir.Streamer(R__b);
      R__b >> web_port;
      R__b >> daemon;
      R__b >> isWebStarted;
      R__b >> isWeb;
      R__b.CheckByteCount(R__s, R__c, MpdWebScreenshots::IsA());
   } else {
      R__c = R__b.WriteVersion(MpdWebScreenshots::IsA(), kTRUE);
      FairTask::Streamer(R__b);
      R__b << fMan;
      R__b << iFormatFiles;
      R__b << isMultiFiles;
      outputDir.Streamer(R__b);
      R__b << web_port;
      R__b << daemon;
      R__b << isWebStarted;
      R__b << isWeb;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_MpdWebScreenshots(void *p) {
      delete ((::MpdWebScreenshots*)p);
   }
   static void deleteArray_MpdWebScreenshots(void *p) {
      delete [] ((::MpdWebScreenshots*)p);
   }
   static void destruct_MpdWebScreenshots(void *p) {
      typedef ::MpdWebScreenshots current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_MpdWebScreenshots(TBuffer &buf, void *obj) {
      ((::MpdWebScreenshots*)obj)->::MpdWebScreenshots::Streamer(buf);
   }
} // end of namespace ROOT for class ::MpdWebScreenshots

//______________________________________________________________________________
void BmnTrackDrawH::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTrackDrawH.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairTask::Streamer(R__b);
      R__b >> fTrPr;
      R__b >> MinEnergyLimit;
      R__b >> MaxEnergyLimit;
      R__b >> PEnergy;
      fHitsBranchName.Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, BmnTrackDrawH::IsA());
   } else {
      R__c = R__b.WriteVersion(BmnTrackDrawH::IsA(), kTRUE);
      FairTask::Streamer(R__b);
      R__b << fTrPr;
      R__b << MinEnergyLimit;
      R__b << MaxEnergyLimit;
      R__b << PEnergy;
      fHitsBranchName.Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTrackDrawH(void *p) {
      return  p ? new(p) ::BmnTrackDrawH : new ::BmnTrackDrawH;
   }
   static void *newArray_BmnTrackDrawH(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTrackDrawH[nElements] : new ::BmnTrackDrawH[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTrackDrawH(void *p) {
      delete ((::BmnTrackDrawH*)p);
   }
   static void deleteArray_BmnTrackDrawH(void *p) {
      delete [] ((::BmnTrackDrawH*)p);
   }
   static void destruct_BmnTrackDrawH(void *p) {
      typedef ::BmnTrackDrawH current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_BmnTrackDrawH(TBuffer &buf, void *obj) {
      ((::BmnTrackDrawH*)obj)->::BmnTrackDrawH::Streamer(buf);
   }
} // end of namespace ROOT for class ::BmnTrackDrawH

//______________________________________________________________________________
void BmnTrackDrawP::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnTrackDrawP.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairTask::Streamer(R__b);
      R__b >> fEveTrList;
      R__b.ReadStaticArray((float*)x1);
      R__b.ReadStaticArray((float*)p1);
      R__b.ReadStaticArray((float*)x2);
      R__b.ReadStaticArray((float*)p2);
      R__b >> MinEnergyLimit;
      R__b >> MaxEnergyLimit;
      R__b >> PEnergy;
      R__b.CheckByteCount(R__s, R__c, BmnTrackDrawP::IsA());
   } else {
      R__c = R__b.WriteVersion(BmnTrackDrawP::IsA(), kTRUE);
      FairTask::Streamer(R__b);
      R__b << fEveTrList;
      R__b.WriteArray(x1, 3);
      R__b.WriteArray(p1, 3);
      R__b.WriteArray(x2, 3);
      R__b.WriteArray(p2, 3);
      R__b << MinEnergyLimit;
      R__b << MaxEnergyLimit;
      R__b << PEnergy;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnTrackDrawP(void *p) {
      return  p ? new(p) ::BmnTrackDrawP : new ::BmnTrackDrawP;
   }
   static void *newArray_BmnTrackDrawP(Long_t nElements, void *p) {
      return p ? new(p) ::BmnTrackDrawP[nElements] : new ::BmnTrackDrawP[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnTrackDrawP(void *p) {
      delete ((::BmnTrackDrawP*)p);
   }
   static void deleteArray_BmnTrackDrawP(void *p) {
      delete [] ((::BmnTrackDrawP*)p);
   }
   static void destruct_BmnTrackDrawP(void *p) {
      typedef ::BmnTrackDrawP current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_BmnTrackDrawP(TBuffer &buf, void *obj) {
      ((::BmnTrackDrawP*)obj)->::BmnTrackDrawP::Streamer(buf);
   }
} // end of namespace ROOT for class ::BmnTrackDrawP

//______________________________________________________________________________
void BmnGlobalTrackDraw::Streamer(TBuffer &R__b)
{
   // Stream an object of class BmnGlobalTrackDraw.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairTask::Streamer(R__b);
      R__b >> fTrPr;
      R__b >> fEveTrList;
      R__b >> MinEnergyLimit;
      R__b >> MaxEnergyLimit;
      R__b >> PEnergy;
      R__b.CheckByteCount(R__s, R__c, BmnGlobalTrackDraw::IsA());
   } else {
      R__c = R__b.WriteVersion(BmnGlobalTrackDraw::IsA(), kTRUE);
      FairTask::Streamer(R__b);
      R__b << fTrPr;
      R__b << fEveTrList;
      R__b << MinEnergyLimit;
      R__b << MaxEnergyLimit;
      R__b << PEnergy;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BmnGlobalTrackDraw(void *p) {
      return  p ? new(p) ::BmnGlobalTrackDraw : new ::BmnGlobalTrackDraw;
   }
   static void *newArray_BmnGlobalTrackDraw(Long_t nElements, void *p) {
      return p ? new(p) ::BmnGlobalTrackDraw[nElements] : new ::BmnGlobalTrackDraw[nElements];
   }
   // Wrapper around operator delete
   static void delete_BmnGlobalTrackDraw(void *p) {
      delete ((::BmnGlobalTrackDraw*)p);
   }
   static void deleteArray_BmnGlobalTrackDraw(void *p) {
      delete [] ((::BmnGlobalTrackDraw*)p);
   }
   static void destruct_BmnGlobalTrackDraw(void *p) {
      typedef ::BmnGlobalTrackDraw current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_BmnGlobalTrackDraw(TBuffer &buf, void *obj) {
      ((::BmnGlobalTrackDraw*)obj)->::BmnGlobalTrackDraw::Streamer(buf);
   }
} // end of namespace ROOT for class ::BmnGlobalTrackDraw

//______________________________________________________________________________
void FairMCModuleDraw::Streamer(TBuffer &R__b)
{
   // Stream an object of class FairMCModuleDraw.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairTask::Streamer(R__b);
      R__b >> fVerbose;
      R__b.CheckByteCount(R__s, R__c, FairMCModuleDraw::IsA());
   } else {
      R__c = R__b.WriteVersion(FairMCModuleDraw::IsA(), kTRUE);
      FairTask::Streamer(R__b);
      R__b << fVerbose;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_FairMCModuleDraw(void *p) {
      return  p ? new(p) ::FairMCModuleDraw : new ::FairMCModuleDraw;
   }
   static void *newArray_FairMCModuleDraw(Long_t nElements, void *p) {
      return p ? new(p) ::FairMCModuleDraw[nElements] : new ::FairMCModuleDraw[nElements];
   }
   // Wrapper around operator delete
   static void delete_FairMCModuleDraw(void *p) {
      delete ((::FairMCModuleDraw*)p);
   }
   static void deleteArray_FairMCModuleDraw(void *p) {
      delete [] ((::FairMCModuleDraw*)p);
   }
   static void destruct_FairMCModuleDraw(void *p) {
      typedef ::FairMCModuleDraw current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_FairMCModuleDraw(TBuffer &buf, void *obj) {
      ((::FairMCModuleDraw*)obj)->::FairMCModuleDraw::Streamer(buf);
   }
} // end of namespace ROOT for class ::FairMCModuleDraw

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

namespace {
  void TriggerDictionaryInitialization_G__EventDisplayDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/opt/fairroot/install/include",
"/home/alex/bmnroot_dev/bmnroot/config",
"/home/alex/bmnroot_dev/bmnroot/eventdisplay",
"/home/alex/bmnroot_dev/bmnroot/bmndata",
"/home/alex/bmnroot_dev/bmnroot/globaltracking",
"/home/alex/bmnroot_dev/bmnroot/gem",
"/home/alex/bmnroot_dev/bmnroot/uni_db",
"/home/alex/bmnroot_dev/bmnroot/uni_db/db_classes",
"/home/alex/bmnroot_dev/bmnroot/silicon",
"/opt/fairsoft/install/include/root",
"/opt/fairsoft/install/include",
"/opt/fairsoft/install/include/TGeant3",
"/usr/include/libxml2",
"/opt/fairsoft/install/include/root",
"/home/alex/bmnroot_dev/bmnroot/build/eventdisplay/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__EventDisplayDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$FairXMLNode.h")))  FairXMLAttrib;
class __attribute__((annotate("$clingAutoload$FairXMLNode.h")))  FairXMLNode;
class MpdEventManager;
class MpdMCTracks;
class MpdMCStack;
class MpdEventManagerEditor;
class __attribute__((annotate(R"ATTRDUMP(Specialization of TGedEditor for proper update propagation to TEveManager.)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Specialization of TGedEditor for proper update propagation to TEveManager.)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Specialization of TGedEditor for proper update propagation to TEveManager.)ATTRDUMP"))) MpdMCTracksEditor;
class __attribute__((annotate("$clingAutoload$MpdBoxSetDraw.h")))  MpdBoxSetDraw;
class MpdBoxSet;
class MpdBoxSetEditor;
class MpdPointSetDraw;
class MpdMCPointDraw;
class MpdHitDraw;
class MpdHitPointSetDraw;
class MpdWebScreenshots;
class BmnTrackDrawH;
class BmnTrackDrawP;
class BmnGlobalTrackDraw;
class FairMCModuleDraw;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__EventDisplayDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
//MpdEventManager: class for event management and navigation

#ifndef MPDEVENTMANAGER_H
#define MPDEVENTMANAGER_H

#include "FairRunAna.h"
#include "FairTask.h"
#include "FairXMLNode.h"

#include <TEveViewer.h>
#include "TEveEventManager.h"
#include <TEveScene.h>
#include <TGeoNode.h>
#include <TEveProjectionManager.h>
#include "TGListTree.h"
#include <TEveProjectionAxes.h>

#include <vector>
using namespace std;

enum ElementList {MCPointList, MCTrackList, RecoPointList, RecoTrackList};  // enum for Event Element lists

class MpdEventManagerEditor;
class MpdEventManager : public TEveEventManager
{
  public:
    struct structSelectedColoring
    {
        TString detector_name;
        TString detector_color;
        int detector_transparency;
        bool isRecursiveColoring;

        structSelectedColoring()
        {
        }

        structSelectedColoring(TString det_name, TString det_color, int det_transparency, bool isRecursive)
        {
            detector_name = det_name;
            detector_color = det_color;
            detector_transparency = det_transparency;
            isRecursiveColoring = isRecursive;
        }
    };

    struct structLevelColoring
    {
        TString fill_color;
        bool isFillLine;
        bool visibility;
        int transparency;

        structLevelColoring()
        {
        }

        structLevelColoring(TString fill, bool isLine, bool vis, int transp)
        {
            fill_color = fill;
            isFillLine = isLine;
            visibility = vis;
            transparency = transp;
        }
    };

    static MpdEventManager* Instance();
    MpdEventManager();
    virtual ~MpdEventManager();

    virtual void Open();
    virtual void GotoEvent(Int_t event);    // *MENU*
    virtual void NextEvent();               // *MENU*
    virtual void PrevEvent();               // *MENU*
    virtual void DisplaySettings();         // *Menu*
    virtual void Close();
    void UpdateEditor();

    virtual void Init(Int_t visopt = 1, Int_t vislvl = 3, Int_t maxvisnds = 10000);
    void SetEventEditor(MpdEventManagerEditor* event_editor) { fEventEditor = event_editor; }
    MpdEventManagerEditor* GetEventEditor() { return fEventEditor; }

    // FairRunAna to init and to execute visualization tasks
    FairRunAna* fRunAna; //!
    void AddTask(FairTask* t) { fRunAna->AddTask(t); }

    // assign different colors for differrent particles
    // return integer value of color for track by particle pdg (default, white)
    virtual Int_t Color(Int_t pdg);
    virtual void AddParticlesToPdgDataBase();

    virtual void SetCurrentEvent(Int_t event_number) { iCurrentEvent = event_number; }
    virtual Int_t GetCurrentEvent() { return iCurrentEvent; }

    virtual void SetPriOnly(Bool_t Pri) { fPriOnly = Pri; }
    virtual Bool_t IsPriOnly() { return fPriOnly; }

    virtual void SelectPDG(Int_t PDG) { fCurrentPDG = PDG; }
    virtual Int_t GetCurrentPDG() { return fCurrentPDG; }

    virtual void SetMaxEnergy(Float_t max) { fMaxEnergy = max; }
    virtual void SetMinEnergy(Float_t min) { fMinEnergy = min; }
    virtual void SetEvtMaxEnergy(Float_t max) { fEvtMaxEnergy = max; }
    virtual void SetEvtMinEnergy(Float_t min) { fEvtMinEnergy = min; }
    virtual Float_t GetEvtMaxEnergy() { return fEvtMaxEnergy; }
    virtual Float_t GetEvtMinEnergy() { return fEvtMinEnergy; }
    virtual Float_t GetMaxEnergy() { return fMaxEnergy; }
    virtual Float_t GetMinEnergy() { return fMinEnergy; }

    TEveScene* GetRPhiScene() { return fRPhiGeomScene; }
    TEveScene* GetRhoZScene() { return fRhoZGeomScene; }
    virtual void SetRPhiPlane(Double_t a, Double_t b, Double_t c, Double_t d)
    { fRPhiPlane[0] = a; fRPhiPlane[1] = b; fRPhiPlane[2] = c; fRPhiPlane[3] = d; }
    virtual void SetRhoZPlane(Double_t a, Double_t b, Double_t c, Double_t d)
    { fRhoZPlane[0] = a; fRhoZPlane[1] = b; fRhoZPlane[2] = c; fRhoZPlane[3] = d; }

    // Event Elements of Event Scene
    TEveElementList* EveMCPoints, *EveMCTracks, *EveRecoPoints, *EveRecoTracks;
    void AddEventElement(TEveElement* element, ElementList element_list);

    // coloring method
    enum VisualizationColoring {selectedColoring, levelColoring, defaultColoring};
    VisualizationColoring gVisualizationColoring;
    // set high transparency for detector geometry
    void SetTransparentGeometry(bool is_on);
    virtual void SetXMLConfig(TString xml_config) { fXMLConfig = xml_config; }

    // background color of EVE Viewers
    int background_color;
    // whether background color is dark
    bool isDarkColor;
    // whether Online of Offline mode
    bool isOnline;
    // data source: 0 - simulation data; 1 - raw detector data
    int iDataSource;

    // ZDC module visibility flags. NULL if there are no ZDC modules to show
    bool* isZDCModule;  //!
    // current value of "reco points" checkbox - FOR CALORIMETER TOWERS
    bool fgShowRecoPointsIsShow;
    // require event redraw after "reco points" checkbox value is changed - FOR CALORIMETER TOWERS
    bool fgRedrawRecoPointsReqired;

 protected:
    TEveViewer* GetRPhiView() const { return fRPhiView; }
    TEveViewer* GetRhoZView() const { return fRhoZView; }
    TEveViewer* GetMultiView() const { return fMulti3DView; }
    TEveViewer* GetMultiRPhiView() const { return fMultiRPhiView; }
    TEveViewer* GetMultiRhoZView() const { return fMultiRhoZView; }
    TEveProjectionManager* GetRhoZProjManager() const { return fRhoZMng; }
    TEveProjectionManager* GetRPhiProjManager() const { return fRPhiMng; }
    TEveProjectionAxes* GetRPhiAxes() const { return fAxesPhi; }
    TEveProjectionAxes* GetRhoZAxes() const { return fAxesRho; }

    virtual void LoadXMLSettings();
    void LoadXMLDetector(TGeoNode *node, FairXMLNode *xml, Int_t depth=0);

  private:
    MpdEventManagerEditor* fEventEditor; //!
    // skeleton Singleton Instance
    static MpdEventManager* fgRinstance; //!

    MpdEventManager(const MpdEventManager&);
    MpdEventManager& operator=(const MpdEventManager&);

    // VIEWERS for RPhi and RPhoZ projections, 3D view in multi-viewer, RPhi and RPhoZ projections in multi-viewer
    TEveViewer *fRPhiView, *fRhoZView, *fMulti3DView, *fMultiRPhiView, *fMultiRhoZView;
    // projection managers for RPhi and Rho views
    TEveProjectionManager *fRPhiMng, *fRhoZMng;
    // scenes for geometry presentation in RPhi plane and RPhoZ plane
    TEveScene *fRPhiGeomScene, *fRhoZGeomScene;
    TEveProjectionAxes *fAxesPhi, *fAxesRho;
    Double_t fRPhiPlane[4]; Double_t fRhoZPlane[4];

    TGListTreeItem* fEvent; //!
    // current event number
    Int_t iCurrentEvent;
    Bool_t fPriOnly;
    Int_t fCurrentPDG;
    // the most minimum particle energy for selected event
    Float_t fMinEnergy;
    // the most maximum particle energy for selected event
    Float_t fMaxEnergy;
    // minimum energy to cut particles by energy in selected event
    Float_t fEvtMinEnergy;
    // maximum energy to cut particles by energy in selected event
    Float_t fEvtMaxEnergy;

    // the last color indice of Color Creating from rgb triple
    Int_t fLastUsedColor;

    TString fXMLConfig;
    map<int,int> fPDGToColor;

    // arrays with color sturctures for detector and hierarchical coloring
    vector<structSelectedColoring*> vecSelectedColoring;    //!
    vector<structLevelColoring*> vecLevelColoring;          //!

    void SetViewers(TEveViewer* RPhi, TEveViewer* RhoZ);

    // changing color and visibility of geometry nodes
    void InitColorStructure();
    // get color id by color name or RGB triple
    Int_t StringToColor(TString color);
    // returns loaded xml if successful of NULL if validation failed
    bool ValidateXml(const char *XMLFileName, const char *XSDFileName);
    void LevelChangeNodeProperty(TGeoNode* node, int level);
    void SelectedGeometryColoring();
    void RecursiveChangeNodeProperty(TGeoNode* parentNode, Int_t color, int transparency);
    void RecursiveChangeNodeTransparent(TGeoNode* parentNode, int transparency);

    ClassDef(MpdEventManager,1);
};

#endif
// -------------------------------------------------------------------------
// -----                      MpdMCTracks header file                 -----
// -----                Created 10/12/07  by M. Al-Turany              -----
// -------------------------------------------------------------------------

/** MpdMCTracks
 * @author M. Al-Turany
 * @since 10.12.07
 **
 **/

#ifndef MPDMCTRACKS_H
#define MPDMCTRACKS_H

#include "FairTask.h"
#include "MpdEventManager.h"

#include "TEveTrack.h"
#include "TEveTrackPropagator.h"
#include "TParticle.h"
#include "TString.h"
#include "TClonesArray.h"


class MpdMCTracks : public FairTask
{
  public:
    /** Default constructor **/
    MpdMCTracks();
    /** Standard constructor
    *@param name        Name of task
    *@param iVerbose    Verbosity level
    **/
    MpdMCTracks(const char* name, Int_t iVerbose = 0);

    /** Destructor **/
    virtual ~MpdMCTracks();

    /** Set verbosity level. For this task and all of the subtasks. **/
    void SetVerbose(Int_t iVerbose) {fVerbose = iVerbose;}
    virtual InitStatus Init();
    /** Executed task **/
    virtual void Exec(Option_t* option);
    virtual void SetParContainers();
    /** Action after each event**/
    virtual void Finish();

    void Reset();
    TEveTrackList* GetTrGroup(TParticle* P);

  protected:
    TClonesArray*  fTrackList;  //!
    TEveTrackPropagator* fTrPr;
    MpdEventManager* fEventManager;  //!
    TObjArray* fEveTrList;
    TEveTrackList* fTrList;  //!

    Double_t MinEnergyLimit;
    Double_t MaxEnergyLimit;
    Double_t PEnergy;

  private:
    MpdMCTracks(const MpdMCTracks&);
    MpdMCTracks& operator=(const MpdMCTracks&);

    ClassDef(MpdMCTracks,1);
};

#endif
// -------------------------------------------------------------------------
// -----                      MpdMCStack header file                 -----
// -----                Created 09/10/08  by M. Al-Turany              -----
// -------------------------------------------------------------------------

#ifndef MPDMCSTACK_H
#define MPDMCSTACK_H

#include "FairTask.h"
#include "FairGeanePro.h"
#include "MpdEventManager.h"
#include "FairTrajFilter.h"

#include "TEveTrackPropagator.h"
#include "TString.h"
#include "TObjArray.h"
#include "TEveTrack.h"
#include "TGeant3.h"


class MpdMCStack : public FairTask
{
  public:
    /** Default constructor **/
    MpdMCStack();
    /** Standard constructor
    *@param name        Name of task
    *@param iVerbose    Verbosity level
    **/
    MpdMCStack(const char* name, Int_t iVerbose = 0);
    /** Destructor **/
    virtual ~MpdMCStack();

    /** Set verbosity level. For this task and all of the subtasks. **/
    void SetVerbose(Int_t iVerbose);

    /** Executed task **/
    virtual void Exec(Option_t* option);
    virtual InitStatus Init();
    virtual void SetParContainers();

    /** Action after each event**/
    virtual void Finish();
    void Reset();
    TEveTrackList* GetTrGroup(TParticle* P);

  protected:
    MpdEventManager* fEventManager;  //!

    TClonesArray*  fTrackList;  //!
    TObjArray* fEveTrList;
    TEveTrackPropagator* fTrPr;
    TEveTrackList* fTrList;  //!

    Float_t x1[3], x2[3], p1[3], p2[3], ein[15];
    TGeant3* gMC3;  //!
    Double_t MinEnergyLimit, MaxEnergyLimit;
    Double_t PEnergy;
    FairGeanePro* fPro; //!
    FairTrajFilter* fTrajFilter; //!

    ClassDef(MpdMCStack,1);
};

#endif
// Specialization of TGedEditor for proper update propagation to TEveManager

#ifndef MPDEVENTMANAGEREDITOR_H
#define MPDEVENTMANAGEREDITOR_H

#include "MpdEventManager.h"

#include "TGedFrame.h"
#include "TGNumberEntry.h"
#include "TGLabel.h"
#include "TEveGValuators.h"

class MpdEventManagerEditor;
struct ThreadParam_OnlineDisplay
{
    MpdEventManager* fEventManager;
    MpdEventManagerEditor* fManagerEditor;
    FairRootManager* fRootManager;
    int iCurrentEvent;
    bool isStreamSource;
    bool isZDCRedraw;
};

// multithread functions
void* RunOnlineDisplay(void* ptr);

class MpdEventManagerEditor : public TGedFrame
{
    MpdEventManagerEditor(const MpdEventManagerEditor&);              // Not implemented
    MpdEventManagerEditor& operator=(const MpdEventManagerEditor&);   // Not implemented

  protected:
    TObject* fObject;
    MpdEventManager* fEventManager;

    TGLabel* fEventTime;
    TGNumberEntry* fCurrentPDG;
    TGCheckButton* fVizPri;
    TEveGValuator* fMinEnergy, *fMaxEnergy;
    TGHorizontalFrame* fGeometryFrame;
    TGCheckButton* ShowMagnetButton;
    // whether magnet volume was found to use the special checkbov for visibility
    bool isMagnetFound;

  public:
    MpdEventManagerEditor(const TGWindow* p = 0, Int_t width = 170, Int_t height = 30,
                           UInt_t options = kChildFrame, Pixel_t back = GetDefaultFrameBackground());
    virtual ~MpdEventManagerEditor() {}

    virtual void Init();
    void SetModel(TObject* obj) { fObject = obj; }

    virtual void SelectEvent();
    virtual void UpdateEvent();
    virtual void SelectPDG();
    void DoVizPri();
    virtual void MinEnergy();
    virtual void MaxEnergy();
    virtual void SwitchBackground(Bool_t is_on);
    virtual void SwitchTransparency(Bool_t is_on);
    virtual void ShowGeometry(Bool_t is_show);
    virtual void ShowMagnet(Bool_t is_show);
    virtual void ShowMCPoints(Bool_t is_show);
    virtual void ShowMCTracks(Bool_t is_show);
    virtual void ShowRecoPoints(Bool_t is_show);
    virtual void ShowRecoTracks(Bool_t is_show);

    bool RedrawZDC(bool isFull = false, bool isRedraw = true);

    int iThreadState;
    void BlockUI();
    void UnblockUI();

    // event count
    int iEventCount;
    // true - using event data from DAQ stream; false - using event data from file
    bool isStreamSource;

    TGPictureButton* fSave;
    // save screenshot of the EVE display
    virtual void SaveImage();    

    // 'Update' button
    TGTextButton* fUpdate; 
    // 'Current Event Number' textbox with spin buttons
    TGNumberEntry* fCurrentEvent;
    // 'Show Geometry' checkbox
    TGCheckButton* fGeometry;
    TGCheckButton *fShowMCPoints, *fShowMCTracks, *fShowRecoPoints, *fShowRecoTracks;

    ClassDef(MpdEventManagerEditor, 0);
};

#endif
#ifndef MPDMCTRACKSEDITOR_H
#define MPDMCTRACKSEDITOR_H

#include "MpdEventManager.h"

#include "TGedFrame.h"
#include "TGWindow.h"


class MpdMCTracksEditor : public TGedFrame
{
    MpdMCTracksEditor(const MpdMCTracksEditor&);            // Not implemented
    MpdMCTracksEditor& operator=(const MpdMCTracksEditor&); // Not implemented

  protected:
    TObject* fObject;
    MpdEventManager*  fManager;

  public:
    MpdMCTracksEditor(const TGWindow* p = 0, Int_t width = 170, Int_t height = 30,
                      UInt_t options = kChildFrame, Pixel_t back = GetDefaultFrameBackground());
    virtual ~MpdMCTracksEditor() {}

    virtual void SetModel( TObject* obj) { fObject = obj; }

    ClassDef(MpdMCTracksEditor, 0); // Specialization of TGedEditor for proper update propagation to TEveManager.
};

#endif
// -------------------------------------------------------------------------
// -----              MpdBoxSet header file                       -----
// -----          Created 26/03/09  by T. Stockmanns                   -----
// -------------------------------------------------------------------------

/** MpdBoxSet
 * @author T. Stockmanns
 * @since 26.3.2009
 *   Base class to display 3D Points in Eve as a BoxSet
 *   One has to overwrite the method GetVector which takes a TObject and writes out a TVector3 which is then taken as an input
 *   to place the points.
 *   If one wants to change the color of the points one has to overwrite the method GetValue. This method takes a TObject and
 *   an integer and translates this into an integer as input for the EveBoxSet method DigitValue
 **
 **/

#ifndef MPDBOXSET_H
#define MPDBOXSET_H

#include "MpdBoxSetDraw.h"
#include "TEveBoxSet.h"


class MpdBoxSet : public TEveBoxSet
{
  public:
    /** Standard constructor **/
    MpdBoxSet(MpdBoxSetDraw* drawer, const char* name = "MpdBoxSet", const char* t = "");
    /** Destructor **/
    virtual ~MpdBoxSet() {}

    void SetTimeWindowPlus(Double_t time) { fDraw->SetTimeWindowPlus(time); }
    void SetTimeWindowMinus(Double_t time) { fDraw->SetTimeWindowMinus(time); }

    Double_t GetTimeWindowPlus() { return fDraw->GetTimeWindowPlus(); }
    Double_t GetTimeWindowMinus() { return fDraw->GetTimeWindowMinus(); }

  private:
    MpdBoxSetDraw* fDraw;

    MpdBoxSet(const MpdBoxSet&);
    MpdBoxSet operator=(const MpdBoxSet&);

    ClassDef(MpdBoxSet,1);
};

#endif
// -------------------------------------------------------------------------
// -----              MpdBoxSetDraw header file                       -----
// -----          Created 26/03/09  by T. Stockmanns                   -----
// -------------------------------------------------------------------------

/** MpdBoxSetDraw
 * @author T. Stockmanns
 * @since 26.3.2009
 *   Base class to display 3D Points in Eve as a BoxSet
 *   One has to overwrite the method GetVector which takes a TObject and writes out a TVector3 which is then taken as an input
 *   to place the points.
 *   If one wants to change the color of the points one has to overwrite the method GetValue. This method takes a TObject and
 *   an integer and translates this into an integer as input for the EveBoxSet method DigitValue
 **
 **/

#ifndef MPDBOXSETDRAW_H
#define MPDBOXSETDRAW_H

#include "MpdEventManager.h"

#include "FairTask.h"
#include "FairRootManager.h"
#include "FairTSBufferFunctional.h"     // for StopTime

#include "TClonesArray.h"
#include "TVector3.h"
#include "TObject.h"

class MpdBoxSet;
class MpdBoxSetDraw : public FairTask
{
  public:
    /** Default constructor **/
    MpdBoxSetDraw();

    /** Standard constructor
    *@param name        Name of task
    *@param iVerbose    Verbosity level
    **/
    MpdBoxSetDraw(const char* name, Int_t iVerbose = 1);

    /** Destructor **/
    virtual ~MpdBoxSetDraw();

    /** Set verbosity level. For this task and all of the subtasks. **/
    virtual void SetVerbose(Int_t iVerbose) { fVerbose = iVerbose; }
    virtual void SetRedraw(Bool_t is_redraw) { isRedraw = is_redraw; }

    virtual Double_t GetTimeWindowPlus() { return fTimeWindowPlus; }
    virtual Double_t GetTimeWindowMinus() { return fTimeWindowMinus; }
    virtual void SetTimeWindowMinus(Double_t val) { fTimeWindowMinus = val; }
    virtual void SetTimeWindowPlus(Double_t val) { fTimeWindowPlus = val; }
    virtual void SetStartTime(Double_t val) { fStartTime = val; }
    virtual void UseEventTimeAsStartTime(Bool_t val = kTRUE) { fUseEventTime = val; }

    MpdBoxSet* CreateBoxSet();
    virtual void SetBoxDimensions(Double_t x, Double_t y, Double_t z)
    {
      fX = x;
      fY = y;
      fZ = z;
    }

    /** Executed task **/
    virtual void Exec(Option_t* option);

    void Reset();

  protected:
    virtual void SetParContainers();
    virtual InitStatus Init();
    /** Action after each event**/
    virtual void Finish();

    virtual TVector3 GetVector(TObject* obj) = 0;
    virtual Int_t GetValue(TObject* obj, Int_t i);
    virtual void AddBoxes(MpdBoxSet* set, TObject* obj, Int_t i = 0);

    //  Verbosity level
    Int_t fVerbose;

    TClonesArray* fList;                //!
    MpdEventManager* fEventManager;     //!
    FairRootManager* fManager;          //!
    MpdBoxSet* fq;                      //!
    Double_t fX, fY, fZ;

    Double_t fTimeWindowPlus;
    Double_t fTimeWindowMinus;
    Double_t fStartTime;
    Bool_t fUseEventTime;
    Bool_t isRedraw;

  private:
    MpdBoxSetDraw(const MpdBoxSetDraw&);
    MpdBoxSetDraw& operator=(const MpdBoxSetDraw&);
    BinaryFunctor* fStartFunctor;
    BinaryFunctor* fStopFunctor;

    ClassDef(MpdBoxSetDraw,1);
};

#endif
// -------------------------------------------------------------------------
// -----              MpdBoxSetEditor header file                       -----
// -----          Created 26/03/09  by T. Stockmanns                   -----
// -------------------------------------------------------------------------

/** MpdBoxSetEditor
 * @author T. Stockmanns
 * @since 26.3.2009
 *   Base class to display 3D Points in Eve as a BoxSet
 *   One has to overwrite the method GetVector which takes a TObject and writes out a TVector3 which is then taken as an input
 *   to place the points.
 *   If one wants to change the color of the points one has to overwrite the method GetValue. This method takes a TObject and
 *   an integer and translates this into an integer as input for the EveBoxSet method DigitValue
 **
 **/

#ifndef MPDBOXSETEDITOR_H
#define MPDBOXSETEDITOR_H

#include "MpdBoxSet.h"

#include "TGedFrame.h"
#include "TGWindow.h"
#include "GuiTypes.h"           // for Pixel_t
#include "TGFrame.h"            // for EFrameType::kChildFrame, etc
#include "TGNumberEntry.h"


class MpdBoxSetEditor : public TGedFrame
{
  public:
    MpdBoxSetEditor(const TGWindow* p = 0, Int_t width = 170, Int_t height = 30,
                    UInt_t options = kChildFrame, Pixel_t back = GetDefaultFrameBackground());
    virtual ~MpdBoxSetEditor() {}

    virtual void Init();

    virtual void SetModel(TObject* obj)
    {
        fM = dynamic_cast<MpdBoxSet*>(obj);
        if (fM)
        {
            fTimeWindowPlus->SetNumber(fM->GetTimeWindowPlus());
            fTimeWindowMinus->SetNumber(fM->GetTimeWindowMinus());
        }
    }

    virtual void TimeWindow();

    TGVerticalFrame* fInfoFrame;
    TGNumberEntry* fTimeWindowPlus;
    TGNumberEntry* fTimeWindowMinus;

  protected:
    TObject* fObject;
    MpdBoxSet* fM;

  private:
    MpdBoxSetEditor(const MpdBoxSetEditor&);
    MpdBoxSetEditor& operator=(const MpdBoxSetEditor&);

    ClassDef(MpdBoxSetEditor,2);
};

#endif
// -------------------------------------------------------------------------
// -----             MpdPointSetDraw header file                       -----
// -----          Created 10/12/07  by M. Al-Turany                    -----
// -------------------------------------------------------------------------

/** MpdPointSetDraw
 * @author M. Al-Turany
 * @since 03.01.08
 *   Task to display MC points
 **
 **/

#ifndef MPDPOINTSETDRAW_H
#define MPDPOINTSETDRAW_H

#include "MpdEventManager.h"

#include "FairTask.h"

#include "TClonesArray.h"
#include "TVector3.h"
#include "TEvePointSet.h"


class MpdPointSetDraw : public FairTask
{
  public:
    /** Default constructor **/
    MpdPointSetDraw();

    /** Standard constructor
    *@param name        Name of task
    *@param iVerbose    Verbosity level
    **/
    MpdPointSetDraw(const char* name, Color_t color, Style_t mstyle, Int_t iVerbose = 0);

    /** Destructor **/
    virtual ~MpdPointSetDraw();

    /** Set verbosity level. For this task and all of the subtasks. **/
    void SetVerbose(Int_t iVerbose) { fVerbose = iVerbose; }

    /** Executed task **/
    virtual void Exec(Option_t* option);
    void Reset();

  protected:
    virtual TVector3 GetVector(TObject* obj) = 0;
    virtual TObject* GetValue(TObject* obj, Int_t i);

    virtual void AddEveElementList() = 0;
    virtual void RemoveEveElementList() = 0;

    virtual void SetParContainers();
    virtual InitStatus Init();
    /** Action after each event**/
    virtual void Finish();

    // Verbosity level
    Int_t fVerbose;
    MpdEventManager* fEventManager;     //!
    TClonesArray* fPointList;           //!
    TEvePointSet* fq;                   //!

    Color_t fColor;                     //!
    Style_t fStyle;                     //!

  private:
    MpdPointSetDraw(const MpdPointSetDraw&);
    MpdPointSetDraw& operator=(const MpdPointSetDraw&);

    ClassDef(MpdPointSetDraw,1);
};

#endif
/*
 * FairMCPointsDraw.h
 *
 *  Created on: Apr 17, 2009
 *      Author: stockman
 */

#ifndef MPDMCPOINTDRAW_H
#define MPDMCPOINTDRAW_H

#include "MpdPointSetDraw.h"

#include "TVector3.h"


class MpdMCPointDraw : public MpdPointSetDraw
{
  public:
    MpdMCPointDraw() {}
    MpdMCPointDraw(const char* name, Color_t color, Style_t mstyle, Int_t iVerbose = 0)
        : MpdPointSetDraw(name, color, mstyle, iVerbose) {}
    virtual ~MpdMCPointDraw() {}

  protected:
    TVector3 GetVector(TObject* obj);

    void AddEveElementList();
    void RemoveEveElementList();

    ClassDef(MpdMCPointDraw,1);
};

#endif /* MPDMCPOINTDRAW_H */
/*
 * MpdHitDraw.h
 *
 *  Created on: Apr 16, 2009
 *      Author: stockman
 *
 *      Simple method to draw points derived from FairHit
 */

#ifndef MPDHITDRAW_H
#define MPDHITDRAW_H

#include "MpdBoxSetDraw.h"

#include "TVector3.h"

class MpdHitDraw: public MpdBoxSetDraw
{
  public:
    MpdHitDraw() {}
    /** Standard constructor
      *@param name        Name of task
      *@param iVerbose    Verbosity level
     **/
    MpdHitDraw(const char* name, Int_t iVerbose = 1)
        : MpdBoxSetDraw(name, iVerbose) {}

  protected:
    TVector3 GetVector(TObject* obj);

    ClassDef(MpdHitDraw,1);
};

#endif /* MPDHITDRAW_H */
/*
 * FairMCPointsDraw.h
 *
 *  Created on: Sep. 30, 2009
 *      Author: stockman
 */

#ifndef MPDHITPOINTSETDRAW_H
#define MPDHITPOINTSETDRAW_H

#include "MpdPointSetDraw.h"

#include "TVector3.h"

class MpdHitPointSetDraw : public MpdPointSetDraw
{
  public:
    MpdHitPointSetDraw() {}
    MpdHitPointSetDraw(const char* name, Color_t color, Style_t mstyle, Int_t iVerbose = 0)
        : MpdPointSetDraw(name, color, mstyle, iVerbose) {}
    virtual ~MpdHitPointSetDraw() {}

  protected:
    TVector3 GetVector(TObject* obj);
    void AddEveElementList();
    void RemoveEveElementList();

    ClassDef(MpdHitPointSetDraw,1);
};

#endif /* MPDHITPOINTSETDRAW_H */
/*
 * FairXLMNode.h
 *
 *  Created on: 13 wrz 2017
 *      Author: Daniel Wielanek
 *		E-mail: daniel.wielanek@gmail.com
 *		Warsaw University of Technology, Faculty of Physics
 */
#ifndef FAIRXLMNODE_H_
#define FAIRXLMNODE_H_
#include <TXMLNode.h>
#include <TObject.h>
#include <TList.h>
#include <TXMLAttr.h>
/**
 * class for representing node attributes
 */
class FairXMLAttrib: public TObject{
	TString fValue, fName;
public :
	/**
	 * default constructor
	 */
	FairXMLAttrib(){
		fValue = fName ="";}
	/**
	 * default constructor
	 * @param name name of attribute
	 * @param value value of attribute
	 */
	FairXMLAttrib(TString name, TString value){
		fName = name;	fValue = value;}
	/**
	 *
	 * @return value of node
	 */
	TString GetValue() const{return fValue;};
	/**
	 *
	 * @param val value of node to se
	 */
	void SetValue(TString val){val = fValue;};
	/**
	 *
	 * @return name of attribute
	 */
	const char *GetName() const {return fName.Data();};
	virtual ~FairXMLAttrib(){};
	ClassDef(FairXMLAttrib,1)
};
/**
 * class for representing XML node
 */
class FairXMLNode : public TObject{
	enum EXMLMode{
		kModeImport,
		kModeExport,
		kModeNull
	};
	TList *fChildren;
	TList *fAttrib;
	Int_t fNChildren,fNAttrib;
	TString  fValue, fName;
	static FairXMLNode *fgNullInstance;
	EXMLMode fMode;
	FairXMLNode();
public:
	/**
	 * fake copy constructor
	 * @param node
	 */
	FairXMLNode(TXMLNode *node);
	/**
	 * default constructor
	 * @param name name of node
	 * @param value value of node
	 */
	FairXMLNode(TString name,TString value);
	/**
	 *
	 * @param value new value
	 */
	void SetValue(TString value);
	/**
	 *
	 * @param name new name
	 */
	void SetName(TString name);
	/**
	 *  add child node to this node
	 * @param node node to add
	 */
	void AddChild(FairXMLNode *node);
	/**
	 * add attribute to node
	 * @param name attribute name
	 * @param value attribute value
	 */
	void AddAttrib(TString name, TString value);
	/**
	 *
	 * @return true if node is imported, false otherwise
	 */
	Bool_t IsImport() const;
	/**
	 *
	 * @return true if node is exported, false otherwise
	 */
	Bool_t IsExport() const;
	/**
	 *
	 * @return true if node is null, false otherwise
	 */
	Bool_t IsNull() const;
	/**
	 *
	 * @return instance of null node
	 */
	static FairXMLNode *NullInstance();
	/**
	 *
	 * @return number of childen nodes
	 */
	Int_t GetNChildren() const ;
	/**
	 *
	 * @return number of attributes
	 */
	Int_t GetNAttributes() const;
	/**
	 *  search for child with given name
	 * @param name name of node
	 * @return number of node with given name
	 */
	Int_t GetNChildren(TString name) const;
	/**
	 * search for attribute with given name
	 * @param name name of attribute
	 * @return number of attribute with given name
	 */
	Int_t GetNAttributes(TString name) const;
	/**
	 *
	 * @return value of node
	 */
	TString GetValue() const;
	/**
	 *
	 * @return name of this node
	 */
	const char* GetName();
	/**
	 *
	 * @return name of this node
	 */
	const char *GetTitle() const;
	/**
	 *
	 * @param name name of attribute
	 * @param count number of attribute (if more than one have given name)
	 * @return value of attribute
	 */
	TString GetAttribValue(TString name, Int_t count =0) const;
	/**
	 *
	 * @param index index of attribute
	 * @return attribute value
	 */
	TString GetAttribValue(Int_t index) const;
	/**
	 *
	 * @param index index of attribute
	 * @return name/title of attribute
	 */
	TString GetAttribTitle(Int_t index) const;
	/**
	 *
	 * @return list of child nodes
	 */
	TList *GetChildren() const;
	/**
	 *  search for node with given name
	 * @param name name of node
	 * @param count number of node (if more than one with given name exist)
	 * @return node
	 */
	FairXMLNode *GetChild(TString name, Int_t count =0) const;
	/**
	 *
	 * @param index child number
	 * @return child at given position
	 */
	FairXMLNode *GetChild(Int_t index) const;
	virtual ~FairXMLNode();
	ClassDef(FairXMLNode,1)
};

#endif /* FAIRXLMNODE_H_ */
// -------------------------------------------------------------------------
// -----                 MpdWebScreenshots header file                 -----
// -----                Created 11/12/15  by K. Smirnov                -----
// ------------------------------------------------------------------------- 

#ifndef MPDWEBSCREENSHOTS_H
#define MPDWEBSCREENSHOTS_H

#include "MpdEventManager.h"

#include "FairTask.h"

#include "TString.h"

///////////////////////////////////////////////////////////////////////////////
#define BUFFER_SIZE 512
#define MAX_FILE_SIZE 1024*1024
#define MAX_CONNECTIONS 3
///////////////////////////////////////////////////////////////////////////////

struct www_thread_par
{
    int web_port;
    TString outputDir;
    int daemon;
};


class MpdWebScreenshots : public FairTask
{    
  public:
    // Standard constructor
    //*@param name        Name of task
    //*@outputDir         Output directory
    //*@param iVerbose    Verbosity level
    MpdWebScreenshots(const char* name, char* output_dir, bool isWebServer = false, Int_t iVerbose = 0);

    // Destructor 
    virtual ~MpdWebScreenshots();

    // Set verbosity level. For this task and all of the subtasks. 
    void SetVerbose(Int_t iVerbose) { fVerbose = iVerbose; }
    // Executed task 
    virtual void Exec(Option_t* option);
    virtual InitStatus Init();
    virtual void SetParContainers();
    // Action after each event
    virtual void Finish();

    //Set format of saved files
    void SetFormatFiles(int i_format_files) { iFormatFiles = i_format_files; }
    //Set quantity of files
    void SetMultiFiles(bool is_multi_files) { isMultiFiles = is_multi_files; }
    //Set Number port
    void SetPort(int NumberPort) { web_port = NumberPort; }
    
  private:
    // Default constructor
    MpdWebScreenshots();
    MpdWebScreenshots(const MpdWebScreenshots&);
    MpdWebScreenshots& operator=(const MpdWebScreenshots&);

    static int daemonize();
    static int sendString(const char* message, int socket);
    static void sendHeader(const char* Status_code, char* Content_Type, int TotalSize, int socket);
    static void sendHTML(char* statusCode, char* contentType, char* content, int size, int socket);
    static void sendFile(FILE* fp, int connecting_socket);
    static int scan(char* input, char* output, int start, int max);
    static int checkMime(char* extension, char* mime_type);
    static int getHttpVersion(char* input, char* output);
    static int GetExtension(char* input, char* output, int max);
    static int handleHttpGET(char* input, TString output_dir, int connecting_socket);
    static int getRequestType(char* input);
    static int receive(int connecting_socket, TString output_dir);
    static int acceptConnection(int currentSocket, TString output_dir);
    static int start(int webPort, TString output_dir);
    static int start_server(void* ptr);

   MpdEventManager* fMan;

   // 0 - PNG, 1 -JPG, 2 - both types
   int iFormatFiles;
   // 0 - one (the same) file event.png; 1 - multiple files event_nnn.png (event1.png and etc.)
   bool isMultiFiles;

   TString outputDir;
   int web_port;
   int daemon;

   bool isWebStarted;
   bool isWeb;

 ClassDef(MpdWebScreenshots,1);
};

#endif
// ---------------------------------------------------------------------------
// -----                    BmnTrackDrawH header file
// -----                created 05/10/15 by K. Gertsenberger
// ----- class to visualize BmnTrack* collection by hits of neighbour bramch
// ---------------------------------------------------------------------------


#ifndef BMNTRACKDRAWH_H
#define BMNTRACKDRAWH_H

#include "FairTask.h"
#include "MpdEventManager.h"

#include "TEveTrackPropagator.h"
#include "TEveTrack.h"
#include "TClonesArray.h"
#include "TObjArray.h"
#include "TParticle.h"


class BmnTrackDrawH : public FairTask
{
  public:
    /** Default constructor **/
    BmnTrackDrawH();

    /** Standard constructor
    *@param name        Name of task and branch with BmnTrack* collection
    *@param iVerbose    Verbosity level
    **/
    BmnTrackDrawH(const char* name, TString hitsBranchName, Int_t iVerbose = 0);

    /** Destructor **/
    virtual ~BmnTrackDrawH();

    /** Set verbosity level. For this task and all of the subtasks. **/
    void SetVerbose(Int_t iVerbose) {fVerbose = iVerbose;}
    /** execute function of this task **/
    virtual void Exec(Option_t* option);

    // initialization of the track drawing task
    virtual InitStatus Init();
    virtual void SetParContainers();
    void Reset();
    virtual void Finish();

    // return pointer to EVE track list for given particle name. if list don't exist then create it
    TEveTrackList* GetTrGroup(TParticle* P);

  protected:
    // tracks collection
    TClonesArray*  fTrackList;          //!
    // hits collection corresponding tracks
    TClonesArray*  fHitList;            //!

    // EVE track propagator
    TEveTrackPropagator* fTrPr;
    MpdEventManager* fEventManager;    //!
    TObjArray* fEveTrList;              //!
    TEveTrackList* fTrList;             //!
    Double_t MinEnergyLimit;
    Double_t MaxEnergyLimit;
    Double_t PEnergy;
    TString fHitsBranchName;
    
  private:
    BmnTrackDrawH(const BmnTrackDrawH&);
    BmnTrackDrawH& operator=(const BmnTrackDrawH&);

    ClassDef(BmnTrackDrawH,1);
};
#endif
// -------------------------------------------------------------------------
// -----                     BmnTrackDrawP header file
// -----                Created 02/12/15  by K. Gertsenberger
// -----       class to draw BmnTrack* collection by Geane propagation
// -------------------------------------------------------------------------


#ifndef BMNTRACKDRAWP_H
#define BMNTRACKDRAWP_H

#include "FairTask.h"
#include "MpdEventManager.h"
#include "FairGeanePro.h"
#include "TEveTrack.h"
#include "FairTrajFilter.h"

#include "TParticle.h"
#include "TObjArray.h"

class BmnTrackDrawP : public FairTask
{
  public:
    /** Default constructor **/
    BmnTrackDrawP();

    /** Standard constructor
    *@param name        Name of task and branch with BmnTrack* collection
    *@param iVerbose    Verbosity level
    **/
    BmnTrackDrawP(const char* name, Int_t iVerbose = 0);

    /** Destructor **/
    virtual ~BmnTrackDrawP();

    /** Set verbosity level. For this task and all of the subtasks. **/
    void SetVerbose(Int_t iVerbose);
    /** Executed task **/
    virtual void Exec(Option_t* option);

    virtual InitStatus Init();
    virtual void SetParContainers();
    void Reset();
    virtual void Finish();

    // return pointer to EVE track list for given particle name. if list don't exist then create it
    TEveTrackList* GetTrGroup(TParticle* P);

    void InitGeant3();

  protected:
    MpdEventManager* fEventManager;//!
    TClonesArray*  fTrackList;      //!
    TEveTrackList* fTrList;         //!

    FairGeanePro* fPro;             //!
    TEveTrackPropagator* fTrPr;     //!
    TObjArray* fEveTrList;
    FairTrajFilter* fTrajFilter;    //!

    Float_t x1[3];
    Float_t p1[3];
    Float_t x2[3];
    Float_t p2[3];

    Double_t MinEnergyLimit;
    Double_t MaxEnergyLimit;
    Double_t PEnergy;

    ClassDef(BmnTrackDrawP,1);
};

#endif
// -------------------------------------------------------------------------
// -----                    BmnGlobalTrackDraw header file                   -----
// -----              created 10/12/13 by K. Gertsenberger             -----
// ----- class to visualize reconstructed GlobalTracks in EventDisplay -----
// -------------------------------------------------------------------------


#ifndef BmnGlobalTrackDraw_H
#define BmnGlobalTrackDraw_H

#include "FairTask.h"
#include "MpdEventManager.h"

#include "TEveTrackPropagator.h"
#include "TEveTrack.h"
#include "TClonesArray.h"
#include "TObjArray.h"
#include "TString.h"
#include "TParticle.h"


class BmnGlobalTrackDraw : public FairTask
{
  public:
    // default constructor
    BmnGlobalTrackDraw();

    // constructor: @name - name of task, @iVerbose- verbosity level
    BmnGlobalTrackDraw(const char* name, Int_t iVerbose = 0);

    // destructor
    virtual ~BmnGlobalTrackDraw();

    // set verbosity level for this task and all of the subtasks
    void SetVerbose(Int_t iVerbose) {fVerbose = iVerbose;}
    // execute function of this task
    virtual void Exec(Option_t* option);
    // initialization of the track drawing task
    virtual InitStatus Init();
    virtual void SetParContainers();

    // action after each event processing
    virtual void Finish();
    void Reset();

    // return pointer to EVE track list for given particle name. if list don't exist then create it
    TEveTrackList* GetTrGroup(TParticle* P);

  protected:
    // global tracks collection
    TClonesArray*  fTrackList;      //!
    // GEM tracks collection
    TClonesArray*  fGemTrackList;   //!
    // GEM hits collection
    TClonesArray*  fGemHitList;     //!
    // TOF1 hits collection
    TClonesArray*  fTof1HitList;     //!
    // TOF2 hits collection
    TClonesArray*  fTof2HitList;     //!
    // DCH hits collection
    TClonesArray*  fDchHitList;     //!
    // EVE track propagator
    TEveTrackPropagator* fTrPr;
    MpdEventManager* fEventManager;    //!
    TObjArray* fEveTrList;
    TEveTrackList* fTrList;             //!

    Double_t MinEnergyLimit, MaxEnergyLimit;
    Double_t PEnergy;

  private:
    BmnGlobalTrackDraw(const BmnGlobalTrackDraw&);
    BmnGlobalTrackDraw& operator=(const BmnGlobalTrackDraw&);

    ClassDef(BmnGlobalTrackDraw,1);
};
#endif
// -------------------------------------------------------------------------
// -----                      FairMCModuleDraw header file             -----
// -----                                                               -----
// -------------------------------------------------------------------------

#ifndef FAIRMCMODULEDRAW_H
#define FAIRMCMODULEDRAW_H

#include "FairTask.h"
#include "MpdEventManager.h"

#include "TClonesArray.h"
#include "TObject.h"
#include "TVector3.h"

class FairMCModuleDraw : public FairTask
{
  public:
    /** Default constructor **/
    FairMCModuleDraw();

    /** Standard constructor
    *@param name        Name of task
    *@param iVerbose    Verbosity level
    **/
    FairMCModuleDraw(const char* name, Color_t color ,Style_t mstyle, Int_t iVerbose = 0);

    /** Destructor **/
    virtual ~FairMCModuleDraw();

    /** Set verbosity level. For this task and all of the subtasks. **/
    void SetVerbose(Int_t iVerbose) { fVerbose = iVerbose; }
    /** Executed task **/
    virtual void Exec(Option_t* option);
    void Reset();

protected:
    virtual TVector3 GetVector(TObject* obj);
    virtual TObject* GetValue(TObject* obj,Int_t i);
    virtual void SetParContainers();
    virtual InitStatus Init();
    /** Action after each event**/
    virtual void Finish();

    // Verbosity level
    Int_t   fVerbose;
    MpdEventManager* fEventManager; //!
    TClonesArray* fPointList; //!
    TClonesArray* fMCTracks; //!

    Color_t fColor; //!
    Style_t fStyle; //!

  private:
    FairMCModuleDraw(const FairMCModuleDraw&);
    FairMCModuleDraw& operator=(const FairMCModuleDraw&);

    ClassDef(FairMCModuleDraw,1);
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"BmnGlobalTrackDraw", payloadCode, "@",
"BmnTrackDrawH", payloadCode, "@",
"BmnTrackDrawP", payloadCode, "@",
"FairMCModuleDraw", payloadCode, "@",
"FairXMLAttrib", payloadCode, "@",
"FairXMLNode", payloadCode, "@",
"MpdBoxSet", payloadCode, "@",
"MpdBoxSetDraw", payloadCode, "@",
"MpdBoxSetEditor", payloadCode, "@",
"MpdEventManager", payloadCode, "@",
"MpdEventManagerEditor", payloadCode, "@",
"MpdHitDraw", payloadCode, "@",
"MpdHitPointSetDraw", payloadCode, "@",
"MpdMCPointDraw", payloadCode, "@",
"MpdMCStack", payloadCode, "@",
"MpdMCTracks", payloadCode, "@",
"MpdMCTracksEditor", payloadCode, "@",
"MpdPointSetDraw", payloadCode, "@",
"MpdWebScreenshots", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__EventDisplayDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__EventDisplayDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__EventDisplayDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__EventDisplayDict() {
  TriggerDictionaryInitialization_G__EventDisplayDict_Impl();
}
