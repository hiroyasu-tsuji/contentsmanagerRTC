// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.
#ifndef __SpeechContent_hh__
#define __SpeechContent_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_SpeechContent
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_SpeechContent
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_SpeechContent
#endif






#ifdef USE_stub_in_nt_dll
# ifndef USE_core_stub_in_nt_dll
#  define USE_core_stub_in_nt_dll
# endif
# ifndef USE_dyn_stub_in_nt_dll
#  define USE_dyn_stub_in_nt_dll
# endif
#endif

#ifdef _core_attr
# error "A local CPP macro _core_attr has already been defined."
#else
# ifdef  USE_core_stub_in_nt_dll
#  define _core_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _core_attr
# endif
#endif

#ifdef _dyn_attr
# error "A local CPP macro _dyn_attr has already been defined."
#else
# ifdef  USE_dyn_stub_in_nt_dll
#  define _dyn_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _dyn_attr
# endif
#endif





_CORBA_MODULE Content

_CORBA_MODULE_BEG

#ifndef __Content_mSpeechContent__
#define __Content_mSpeechContent__

  class SpeechContent;
  class _objref_SpeechContent;
  class _impl_SpeechContent;
  
  typedef _objref_SpeechContent* SpeechContent_ptr;
  typedef SpeechContent_ptr SpeechContentRef;

  class SpeechContent_Helper {
  public:
    typedef SpeechContent_ptr _ptr_type;

    static _ptr_type _nil();
    static _CORBA_Boolean is_nil(_ptr_type);
    static void release(_ptr_type);
    static void duplicate(_ptr_type);
    static void marshalObjRef(_ptr_type, cdrStream&);
    static _ptr_type unmarshalObjRef(cdrStream&);
  };

  typedef _CORBA_ObjRef_Var<_objref_SpeechContent, SpeechContent_Helper> SpeechContent_var;
  typedef _CORBA_ObjRef_OUT_arg<_objref_SpeechContent,SpeechContent_Helper > SpeechContent_out;

#endif

  // interface SpeechContent
  class SpeechContent {
  public:
    // Declarations for this interface type.
    typedef SpeechContent_ptr _ptr_type;
    typedef SpeechContent_var _var_type;

    static _ptr_type _duplicate(_ptr_type);
    static _ptr_type _narrow(::CORBA::Object_ptr);
    static _ptr_type _unchecked_narrow(::CORBA::Object_ptr);
    
    static _ptr_type _nil();

    static inline void _marshalObjRef(_ptr_type, cdrStream&);

    static inline _ptr_type _unmarshalObjRef(cdrStream& s) {
      omniObjRef* o = omniObjRef::_unMarshal(_PD_repoId,s);
      if (o)
        return (_ptr_type) o->_ptrToObjRef(_PD_repoId);
      else
        return _nil();
    }

    static _core_attr const char* _PD_repoId;

    // Other IDL defined within this scope.
    
  };

  class _objref_SpeechContent :
    public virtual ::CORBA::Object,
    public virtual omniObjRef
  {
  public:
    void read(const char* contentdata, ::CORBA::Double priority);

    inline _objref_SpeechContent()  { _PR_setobj(0); }  // nil
    _objref_SpeechContent(omniIOR*, omniIdentity*);

  protected:
    virtual ~_objref_SpeechContent();

    
  private:
    virtual void* _ptrToObjRef(const char*);

    _objref_SpeechContent(const _objref_SpeechContent&);
    _objref_SpeechContent& operator = (const _objref_SpeechContent&);
    // not implemented

    friend class SpeechContent;
  };

  class _pof_SpeechContent : public _OMNI_NS(proxyObjectFactory) {
  public:
    inline _pof_SpeechContent() : _OMNI_NS(proxyObjectFactory)(SpeechContent::_PD_repoId) {}
    virtual ~_pof_SpeechContent();

    virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
    virtual _CORBA_Boolean is_a(const char*) const;
  };

  class _impl_SpeechContent :
    public virtual omniServant
  {
  public:
    virtual ~_impl_SpeechContent();

    virtual void read(const char* contentdata, ::CORBA::Double priority) = 0;
    
  public:  // Really protected, workaround for xlC
    virtual _CORBA_Boolean _dispatch(omniCallHandle&);

  private:
    virtual void* _ptrToInterface(const char*);
    virtual const char* _mostDerivedRepoId();
    
  };


  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_SpeechContent;

_CORBA_MODULE_END



_CORBA_MODULE POA_Content
_CORBA_MODULE_BEG

  class SpeechContent :
    public virtual Content::_impl_SpeechContent,
    public virtual ::PortableServer::ServantBase
  {
  public:
    virtual ~SpeechContent();

    inline ::Content::SpeechContent_ptr _this() {
      return (::Content::SpeechContent_ptr) _do_this(::Content::SpeechContent::_PD_repoId);
    }
  };

_CORBA_MODULE_END



_CORBA_MODULE OBV_Content
_CORBA_MODULE_BEG

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr

void operator<<=(::CORBA::Any& _a, Content::SpeechContent_ptr _s);
void operator<<=(::CORBA::Any& _a, Content::SpeechContent_ptr* _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, Content::SpeechContent_ptr& _s);



inline void
Content::SpeechContent::_marshalObjRef(::Content::SpeechContent_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}




#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_SpeechContent
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_SpeechContent
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_SpeechContent
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_SpeechContent
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_SpeechContent
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_SpeechContent
#endif

#endif  // __SpeechContent_hh__
