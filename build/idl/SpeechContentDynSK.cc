// This file is generated by omniidl (C++ backend) - omniORB_4_1. Do not edit.

#include "SpeechContent.hh"

OMNI_USING_NAMESPACE(omni)

static const char* _0RL_dyn_library_version = omniORB_4_1_dyn;

static ::CORBA::TypeCode::_Tracker _0RL_tcTrack(__FILE__);

#if defined(HAS_Cplusplus_Namespace) && defined(_MSC_VER)
// MSVC++ does not give the constant external linkage otherwise.
namespace Content { 
  const ::CORBA::TypeCode_ptr _tc_SpeechContent = CORBA::TypeCode::PR_interface_tc("IDL:Content/SpeechContent:1.0", "SpeechContent", &_0RL_tcTrack);
} 
#else
const ::CORBA::TypeCode_ptr Content::_tc_SpeechContent = CORBA::TypeCode::PR_interface_tc("IDL:Content/SpeechContent:1.0", "SpeechContent", &_0RL_tcTrack);
#endif

static void _0RL_Content_mSpeechContent_marshal_fn(cdrStream& _s, void* _v)
{
  omniObjRef* _o = (omniObjRef*)_v;
  omniObjRef::_marshal(_o, _s);
}
static void _0RL_Content_mSpeechContent_unmarshal_fn(cdrStream& _s, void*& _v)
{
  omniObjRef* _o = omniObjRef::_unMarshal(Content::SpeechContent::_PD_repoId, _s);
  _v = _o;
}
static void _0RL_Content_mSpeechContent_destructor_fn(void* _v)
{
  omniObjRef* _o = (omniObjRef*)_v;
  if (_o)
    omni::releaseObjRef(_o);
}

void operator<<=(::CORBA::Any& _a, Content::SpeechContent_ptr _o)
{
  Content::SpeechContent_ptr _no = Content::SpeechContent::_duplicate(_o);
  _a.PR_insert(Content::_tc_SpeechContent,
               _0RL_Content_mSpeechContent_marshal_fn,
               _0RL_Content_mSpeechContent_destructor_fn,
               _no->_PR_getobj());
}
void operator<<=(::CORBA::Any& _a, Content::SpeechContent_ptr* _op)
{
  _a.PR_insert(Content::_tc_SpeechContent,
               _0RL_Content_mSpeechContent_marshal_fn,
               _0RL_Content_mSpeechContent_destructor_fn,
               (*_op)->_PR_getobj());
  *_op = Content::SpeechContent::_nil();
}

::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, Content::SpeechContent_ptr& _o)
{
  void* _v;
  if (_a.PR_extract(Content::_tc_SpeechContent,
                    _0RL_Content_mSpeechContent_unmarshal_fn,
                    _0RL_Content_mSpeechContent_marshal_fn,
                    _0RL_Content_mSpeechContent_destructor_fn,
                    _v)) {
    omniObjRef* _r = (omniObjRef*)_v;
    if (_r)
      _o = (Content::SpeechContent_ptr)_r->_ptrToObjRef(Content::SpeechContent::_PD_repoId);
    else
      _o = Content::SpeechContent::_nil();
    return 1;
  }
  return 0;
}

