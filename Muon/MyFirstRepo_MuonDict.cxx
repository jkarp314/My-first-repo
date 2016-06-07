// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME MyFirstRepo_MuonDict

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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
#include "MichelSpectrum.h"
#include "MuonDecay.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *larlitecLcLMichelSpectrum_Dictionary();
   static void larlitecLcLMichelSpectrum_TClassManip(TClass*);
   static void *new_larlitecLcLMichelSpectrum(void *p = 0);
   static void *newArray_larlitecLcLMichelSpectrum(Long_t size, void *p);
   static void delete_larlitecLcLMichelSpectrum(void *p);
   static void deleteArray_larlitecLcLMichelSpectrum(void *p);
   static void destruct_larlitecLcLMichelSpectrum(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::MichelSpectrum*)
   {
      ::larlite::MichelSpectrum *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::MichelSpectrum));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::MichelSpectrum", "MichelSpectrum.h", 28,
                  typeid(::larlite::MichelSpectrum), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &larlitecLcLMichelSpectrum_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::MichelSpectrum) );
      instance.SetNew(&new_larlitecLcLMichelSpectrum);
      instance.SetNewArray(&newArray_larlitecLcLMichelSpectrum);
      instance.SetDelete(&delete_larlitecLcLMichelSpectrum);
      instance.SetDeleteArray(&deleteArray_larlitecLcLMichelSpectrum);
      instance.SetDestructor(&destruct_larlitecLcLMichelSpectrum);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::MichelSpectrum*)
   {
      return GenerateInitInstanceLocal((::larlite::MichelSpectrum*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::MichelSpectrum*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLMichelSpectrum_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::MichelSpectrum*)0x0)->GetClass();
      larlitecLcLMichelSpectrum_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLMichelSpectrum_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLMuonDecay_Dictionary();
   static void larlitecLcLMuonDecay_TClassManip(TClass*);
   static void *new_larlitecLcLMuonDecay(void *p = 0);
   static void *newArray_larlitecLcLMuonDecay(Long_t size, void *p);
   static void delete_larlitecLcLMuonDecay(void *p);
   static void deleteArray_larlitecLcLMuonDecay(void *p);
   static void destruct_larlitecLcLMuonDecay(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::MuonDecay*)
   {
      ::larlite::MuonDecay *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::MuonDecay));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::MuonDecay", "MuonDecay.h", 28,
                  typeid(::larlite::MuonDecay), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &larlitecLcLMuonDecay_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::MuonDecay) );
      instance.SetNew(&new_larlitecLcLMuonDecay);
      instance.SetNewArray(&newArray_larlitecLcLMuonDecay);
      instance.SetDelete(&delete_larlitecLcLMuonDecay);
      instance.SetDeleteArray(&deleteArray_larlitecLcLMuonDecay);
      instance.SetDestructor(&destruct_larlitecLcLMuonDecay);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::MuonDecay*)
   {
      return GenerateInitInstanceLocal((::larlite::MuonDecay*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::MuonDecay*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLMuonDecay_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::MuonDecay*)0x0)->GetClass();
      larlitecLcLMuonDecay_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLMuonDecay_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLMichelSpectrum(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::larlite::MichelSpectrum : new ::larlite::MichelSpectrum;
   }
   static void *newArray_larlitecLcLMichelSpectrum(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::larlite::MichelSpectrum[nElements] : new ::larlite::MichelSpectrum[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLMichelSpectrum(void *p) {
      delete ((::larlite::MichelSpectrum*)p);
   }
   static void deleteArray_larlitecLcLMichelSpectrum(void *p) {
      delete [] ((::larlite::MichelSpectrum*)p);
   }
   static void destruct_larlitecLcLMichelSpectrum(void *p) {
      typedef ::larlite::MichelSpectrum current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::MichelSpectrum

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLMuonDecay(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::larlite::MuonDecay : new ::larlite::MuonDecay;
   }
   static void *newArray_larlitecLcLMuonDecay(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::larlite::MuonDecay[nElements] : new ::larlite::MuonDecay[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLMuonDecay(void *p) {
      delete ((::larlite::MuonDecay*)p);
   }
   static void deleteArray_larlitecLcLMuonDecay(void *p) {
      delete [] ((::larlite::MuonDecay*)p);
   }
   static void destruct_larlitecLcLMuonDecay(void *p) {
      typedef ::larlite::MuonDecay current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::MuonDecay

namespace {
  void TriggerDictionaryInitialization_libMyFirstRepo_Muon_Impl() {
    static const char* headers[] = {
"MichelSpectrum.h",
"MuonDecay.h",
0
    };
    static const char* includePaths[] = {
"/a/home/houston/jkarp314/sw/larlite/core",
"/a/apps/local/root-6.06.04/include",
"/a/home/houston/jkarp314/sw/larlite/UserDev/MyFirstRepo/Muon/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libMyFirstRepo_Muon dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace larlite{class __attribute__((annotate("$clingAutoload$MichelSpectrum.h")))  MichelSpectrum;}
namespace larlite{class __attribute__((annotate("$clingAutoload$MuonDecay.h")))  MuonDecay;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libMyFirstRepo_Muon dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "MichelSpectrum.h"
#include "MuonDecay.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"larlite::MichelSpectrum", payloadCode, "@",
"larlite::MuonDecay", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libMyFirstRepo_Muon",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libMyFirstRepo_Muon_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libMyFirstRepo_Muon_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libMyFirstRepo_Muon() {
  TriggerDictionaryInitialization_libMyFirstRepo_Muon_Impl();
}
