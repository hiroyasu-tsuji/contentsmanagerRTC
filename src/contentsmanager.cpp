// -*- C++ -*-
/*!
 * @file  contentsmanager.cpp
 * @brief contentsmanager
 * @date $Date$
 *
 * $Id$
 */

#include "contentsmanager.h"

#include <sstream>

// Module specification
// <rtc-template block="module_spec">
static const char* contentsmanager_spec[] =
  {
    "implementation_id", "contentsmanager",
    "type_name",         "contentsmanager",
    "description",       "contentsmanager",
    "version",           "1.0.0",
    "vendor",            "tsuji",
    "category",          "Category",
    "activity_type",     "PERIODIC",
    "kind",              "DataFlowComponent",
    "max_instance",      "1",
    "language",          "C++",
    "lang_type",         "compile",
    ""
  };
// </rtc-template>

/*!
 * @brief constructor
 * @param manager Maneger Object
 */
contentsmanager::contentsmanager(RTC::Manager* manager)
    // <rtc-template block="initializer">
  : RTC::DataFlowComponentBase(manager),
    m_stringdataOut("stringdata", m_stringdata),
    m_speechcontentPort("speechcontent")

    // </rtc-template>
{
}

/*!
 * @brief destructor
 */
contentsmanager::~contentsmanager()
{
}



RTC::ReturnCode_t contentsmanager::onInitialize()
{
  // Registration: InPort/OutPort/Service
  // <rtc-template block="registration">
  // Set InPort buffers
  
  // Set OutPort buffer
  addOutPort("stringdata", m_stringdataOut);
  
  // Set service provider to Ports
  m_speechcontentPort.registerProvider("SpeechContent", "Content::SpeechContent", m_SpeechContentProvider);
  
  // Set service consumers to Ports
  
  // Set CORBA Service Ports
  addPort(m_speechcontentPort);
  
  // </rtc-template>

  // <rtc-template block="bind_config">
  // </rtc-template>
  
  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t contentsmanager::onFinalize()
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t contentsmanager::onStartup(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t contentsmanager::onShutdown(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}stringdata
*/


RTC::ReturnCode_t contentsmanager::onActivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}


RTC::ReturnCode_t contentsmanager::onDeactivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}


RTC::ReturnCode_t contentsmanager::onExecute(RTC::UniqueId ec_id)
{
  // std::cout << "providerdata10" <<  << std::endl;
  //m_stringdata.data = m_SpeechContentProvider.getStringData();
  //std::cout << "providerdata20" << m_stringdata.data << std::endl;
  //m_stringdataOut.write();
  if (m_SpeechContentProvider.Flag == 1){
    m_stringdata.data = m_SpeechContentProvider.m_contentdata.c_str();
    std::cout << "providerdata" << m_stringdata.data << std::endl;
    m_stringdataOut.write();
    m_SpeechContentProvider.Flag = 0;
  }
  
  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t contentsmanager::onAborting(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t contentsmanager::onError(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t contentsmanager::onReset(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t contentsmanager::onStateUpdate(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t contentsmanager::onRateChanged(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/



extern "C"
{
 
  void contentsmanagerInit(RTC::Manager* manager)
  {
    coil::Properties profile(contentsmanager_spec);
    manager->registerFactory(profile,
                             RTC::Create<contentsmanager>,
                             RTC::Delete<contentsmanager>);
  }
  
};


