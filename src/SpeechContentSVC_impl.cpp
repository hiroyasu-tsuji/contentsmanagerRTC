// -*-C++-*-
/*!
 * @file  SpeechContentSVC_impl.cpp
 * @brief Service implementation code of SpeechContent.idl
 *
 */

#include "SpeechContentSVC_impl.h"
#include <unistd.h>
#include <cstring>

/*
 * Example implementational code for IDL interface Content::SpeechContent
 */
Content_SpeechContentSVC_impl::Content_SpeechContentSVC_impl()
{
  // Please add extra constructor code here.
}


Content_SpeechContentSVC_impl::~Content_SpeechContentSVC_impl()
{
  // Please add extra destructor code here.
}


/*
 * Methods corresponding to IDL attributes and operations
 */
void Content_SpeechContentSVC_impl::read(const char* contentdata, ::CORBA::Double priority)
{
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
  #warning "Code missing in function <void Content_SpeechContentSVC_impl::read(const char* contentdata, ::CORBA::Double priority)>"
#endif
  /*const char* aftercontentdata = contentdata;
    long afterpriority = priority;*/


  /*
  if (afterpriority > priority){
    m_contentdata = const_cast<char*>(aftercontentdata);
    sleep(1);
    m_contentdata = const_cast<char*>(contentdata);
  }
  if (afterpriority < priority){
    m_contentdata = const_cast<char*>(contentdata);
    sleep(1);
    m_contentdata = const_cast<char*>(aftercontentdata);
  }
  if (afterpriority == priority){
    m_contentdata = const_cast<char*>(aftercontentdata);
    sleep(1);
    m_contentdata = const_cast<char*>(contentdata);
    }
  */

  //Takamido
  m_contentdata = std::string(contentdata);
  Flag = 1;
}



// End of example implementational code



