// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v2.2a_p11
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 *       http://www.cs.wustl.edu/~schmidt/doc-center.html
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       http://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     http://www.cs.wustl.edu/~schmidt/TAO.html
 **/

// TAO_IDL - Generated from
// be/be_codegen.cpp:152

#ifndef _TAO_IDL_T1TYPESUPPORTC_AK5TDF_H_
#define _TAO_IDL_T1TYPESUPPORTC_AK5TDF_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "dds/DCPS/ZeroCopyInfoSeq_T.h"
#include "dds/DCPS/ZeroCopySeq_T.h"
#include "tao/Object.h"
#include "tao/String_Manager_T.h"
#include "tao/Sequence_T.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/Seq_Var_T.h"
#include "tao/Seq_Out_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#include "T1C.h"
#include "dds/DdsDcpsInfrastructureC.h"
#include "dds/DdsDcpsPublicationC.h"
#include "dds/DdsDcpsSubscriptionExtC.h"
#include "dds/DdsDcpsTopicC.h"
#include "dds/DdsDcpsTypeSupportExtC.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 2 || TAO_BETA_VERSION != 0
#error This file should be regenerated with TAO_IDL
#endif

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO 

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:38

namespace mT1
{

  // TAO_IDL - Generated from
  // be/be_visitor_sequence/sequence_ch.cpp:102

  typedef ::TAO::DCPS::ZeroCopyDataSeq< mT1::T1, DCPS_ZERO_COPY_SEQ_DEFAULT_SIZE> T1Seq;
  

  // TAO_IDL - Generated from
  // be/be_interface.cpp:751

#if !defined (_MT1_T1TYPESUPPORT__VAR_OUT_CH_)
#define _MT1_T1TYPESUPPORT__VAR_OUT_CH_

  class T1TypeSupport;
  typedef T1TypeSupport *T1TypeSupport_ptr;

  typedef
    TAO_Objref_Var_T<
        T1TypeSupport
      >
    T1TypeSupport_var;
  
  typedef
    TAO_Objref_Out_T<
        T1TypeSupport
      >
    T1TypeSupport_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:43

  class  T1TypeSupport
    : public virtual ::OpenDDS::DCPS::TypeSupport
  
  {
  public:

    // TAO_IDL - Generated from
    // be/be_type.cpp:307

    typedef T1TypeSupport_ptr _ptr_type;
    typedef T1TypeSupport_var _var_type;
    typedef T1TypeSupport_out _out_type;

    // The static operations.
    static T1TypeSupport_ptr _duplicate (T1TypeSupport_ptr obj);

    static void _tao_release (T1TypeSupport_ptr obj);

    static T1TypeSupport_ptr _narrow (::CORBA::Object_ptr obj);
    static T1TypeSupport_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static T1TypeSupport_ptr _nil (void);

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:140

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    T1TypeSupport (void);

    

    virtual ~T1TypeSupport (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    T1TypeSupport (const T1TypeSupport &);

    void operator= (const T1TypeSupport &);
  };

  // TAO_IDL - Generated from
  // be/be_interface.cpp:751

#if !defined (_MT1_T1DATAWRITER__VAR_OUT_CH_)
#define _MT1_T1DATAWRITER__VAR_OUT_CH_

  class T1DataWriter;
  typedef T1DataWriter *T1DataWriter_ptr;

  typedef
    TAO_Objref_Var_T<
        T1DataWriter
      >
    T1DataWriter_var;
  
  typedef
    TAO_Objref_Out_T<
        T1DataWriter
      >
    T1DataWriter_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:43

  class  T1DataWriter
    : public virtual ::DDS::DataWriter
  
  {
  public:

    // TAO_IDL - Generated from
    // be/be_type.cpp:307

    typedef T1DataWriter_ptr _ptr_type;
    typedef T1DataWriter_var _var_type;
    typedef T1DataWriter_out _out_type;

    // The static operations.
    static T1DataWriter_ptr _duplicate (T1DataWriter_ptr obj);

    static void _tao_release (T1DataWriter_ptr obj);

    static T1DataWriter_ptr _narrow (::CORBA::Object_ptr obj);
    static T1DataWriter_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static T1DataWriter_ptr _nil (void);

    virtual ::DDS::InstanceHandle_t register_instance (
      const ::mT1::T1 & instance) = 0;

    virtual ::DDS::InstanceHandle_t register_instance_w_timestamp (
      const ::mT1::T1 & instance,
      const ::DDS::Time_t & timestamp) = 0;

    virtual ::DDS::ReturnCode_t unregister_instance (
      const ::mT1::T1 & instance,
      ::DDS::InstanceHandle_t handle) = 0;

    virtual ::DDS::ReturnCode_t unregister_instance_w_timestamp (
      const ::mT1::T1 & instance,
      ::DDS::InstanceHandle_t handle,
      const ::DDS::Time_t & timestamp) = 0;

    virtual ::DDS::ReturnCode_t write (
      const ::mT1::T1 & instance_data,
      ::DDS::InstanceHandle_t handle) = 0;

    virtual ::DDS::ReturnCode_t write_w_timestamp (
      const ::mT1::T1 & instance_data,
      ::DDS::InstanceHandle_t handle,
      const ::DDS::Time_t & source_timestamp) = 0;

    virtual ::DDS::ReturnCode_t dispose (
      const ::mT1::T1 & instance_data,
      ::DDS::InstanceHandle_t instance_handle) = 0;

    virtual ::DDS::ReturnCode_t dispose_w_timestamp (
      const ::mT1::T1 & instance_data,
      ::DDS::InstanceHandle_t instance_handle,
      const ::DDS::Time_t & source_timestamp) = 0;

    virtual ::DDS::ReturnCode_t get_key_value (
      ::mT1::T1 & key_holder,
      ::DDS::InstanceHandle_t handle) = 0;

    virtual ::DDS::InstanceHandle_t lookup_instance (
      const ::mT1::T1 & instance_data) = 0;

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:140

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    T1DataWriter (void);

    

    virtual ~T1DataWriter (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    T1DataWriter (const T1DataWriter &);

    void operator= (const T1DataWriter &);
  };

  // TAO_IDL - Generated from
  // be/be_interface.cpp:751

#if !defined (_MT1_T1DATAREADER__VAR_OUT_CH_)
#define _MT1_T1DATAREADER__VAR_OUT_CH_

  class T1DataReader;
  typedef T1DataReader *T1DataReader_ptr;

  typedef
    TAO_Objref_Var_T<
        T1DataReader
      >
    T1DataReader_var;
  
  typedef
    TAO_Objref_Out_T<
        T1DataReader
      >
    T1DataReader_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:43

  class  T1DataReader
    : public virtual ::OpenDDS::DCPS::DataReaderEx
  
  {
  public:

    // TAO_IDL - Generated from
    // be/be_type.cpp:307

    typedef T1DataReader_ptr _ptr_type;
    typedef T1DataReader_var _var_type;
    typedef T1DataReader_out _out_type;

    // The static operations.
    static T1DataReader_ptr _duplicate (T1DataReader_ptr obj);

    static void _tao_release (T1DataReader_ptr obj);

    static T1DataReader_ptr _narrow (::CORBA::Object_ptr obj);
    static T1DataReader_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static T1DataReader_ptr _nil (void);

    virtual ::DDS::ReturnCode_t read (
      ::mT1::T1Seq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t take (
      ::mT1::T1Seq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t read_w_condition (
      ::mT1::T1Seq & data_values,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t take_w_condition (
      ::mT1::T1Seq & data_values,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t read_next_sample (
      ::mT1::T1 & received_data,
      ::DDS::SampleInfo & sample_info) = 0;

    virtual ::DDS::ReturnCode_t take_next_sample (
      ::mT1::T1 & received_data,
      ::DDS::SampleInfo & sample_info) = 0;

    virtual ::DDS::ReturnCode_t read_instance (
      ::mT1::T1Seq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t take_instance (
      ::mT1::T1Seq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t read_instance_w_condition (
      ::mT1::T1Seq & received_data,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t take_instance_w_condition (
      ::mT1::T1Seq & received_data,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t read_next_instance (
      ::mT1::T1Seq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t take_next_instance (
      ::mT1::T1Seq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t read_next_instance_w_condition (
      ::mT1::T1Seq & data_values,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t previous_handle,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t take_next_instance_w_condition (
      ::mT1::T1Seq & data_values,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t previous_handle,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t return_loan (
      ::mT1::T1Seq & received_data,
      ::DDS::SampleInfoSeq & info_seq) = 0;

    virtual ::DDS::ReturnCode_t get_key_value (
      ::mT1::T1 & key_holder,
      ::DDS::InstanceHandle_t handle) = 0;

    virtual ::DDS::InstanceHandle_t lookup_instance (
      const ::mT1::T1 & instance_data) = 0;

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:140

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    T1DataReader (void);

    

    virtual ~T1DataReader (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    T1DataReader (const T1DataReader &);

    void operator= (const T1DataReader &);
  };

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:67

} // module mT1

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:68

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_traits.cpp:62

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{

#if !defined (_MT1_T1TYPESUPPORT__TRAITS_)
#define _MT1_T1TYPESUPPORT__TRAITS_

  template<>
  struct  Objref_Traits< ::mT1::T1TypeSupport>
  {
    static ::mT1::T1TypeSupport_ptr duplicate (
        ::mT1::T1TypeSupport_ptr p);
    static void release (
        ::mT1::T1TypeSupport_ptr p);
    static ::mT1::T1TypeSupport_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::mT1::T1TypeSupport_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_MT1_T1DATAWRITER__TRAITS_)
#define _MT1_T1DATAWRITER__TRAITS_

  template<>
  struct  Objref_Traits< ::mT1::T1DataWriter>
  {
    static ::mT1::T1DataWriter_ptr duplicate (
        ::mT1::T1DataWriter_ptr p);
    static void release (
        ::mT1::T1DataWriter_ptr p);
    static ::mT1::T1DataWriter_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::mT1::T1DataWriter_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_MT1_T1DATAREADER__TRAITS_)
#define _MT1_T1DATAREADER__TRAITS_

  template<>
  struct  Objref_Traits< ::mT1::T1DataReader>
  {
    static ::mT1::T1DataReader_ptr duplicate (
        ::mT1::T1DataReader_ptr p);
    static void release (
        ::mT1::T1DataReader_ptr p);
    static ::mT1::T1DataReader_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::mT1::T1DataReader_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1703
#if defined (__ACE_INLINE__)
#include "T1TypeSupportC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

