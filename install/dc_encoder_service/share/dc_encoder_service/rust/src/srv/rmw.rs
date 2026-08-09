#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "dc_encoder_service__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dc_encoder_service__srv__MotorPI_Request() -> *const std::ffi::c_void;
}

#[link(name = "dc_encoder_service__rosidl_generator_c")]
extern "C" {
    fn dc_encoder_service__srv__MotorPI_Request__init(msg: *mut MotorPI_Request) -> bool;
    fn dc_encoder_service__srv__MotorPI_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MotorPI_Request>, size: usize) -> bool;
    fn dc_encoder_service__srv__MotorPI_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MotorPI_Request>);
    fn dc_encoder_service__srv__MotorPI_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MotorPI_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<MotorPI_Request>) -> bool;
}

// Corresponds to dc_encoder_service__srv__MotorPI_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorPI_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub speed_cmd_front_left: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub speed_cmd_front_right: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub speed_cmd_back_left: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub speed_cmd_back_right: f64,

}



impl Default for MotorPI_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dc_encoder_service__srv__MotorPI_Request__init(&mut msg as *mut _) {
        panic!("Call to dc_encoder_service__srv__MotorPI_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MotorPI_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dc_encoder_service__srv__MotorPI_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dc_encoder_service__srv__MotorPI_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dc_encoder_service__srv__MotorPI_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MotorPI_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MotorPI_Request where Self: Sized {
  const TYPE_NAME: &'static str = "dc_encoder_service/srv/MotorPI_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dc_encoder_service__srv__MotorPI_Request() }
  }
}


#[link(name = "dc_encoder_service__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dc_encoder_service__srv__MotorPI_Response() -> *const std::ffi::c_void;
}

#[link(name = "dc_encoder_service__rosidl_generator_c")]
extern "C" {
    fn dc_encoder_service__srv__MotorPI_Response__init(msg: *mut MotorPI_Response) -> bool;
    fn dc_encoder_service__srv__MotorPI_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MotorPI_Response>, size: usize) -> bool;
    fn dc_encoder_service__srv__MotorPI_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MotorPI_Response>);
    fn dc_encoder_service__srv__MotorPI_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MotorPI_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<MotorPI_Response>) -> bool;
}

// Corresponds to dc_encoder_service__srv__MotorPI_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorPI_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub speed_front_left: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub speed_front_right: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub speed_back_left: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub speed_back_right: f64,

}



impl Default for MotorPI_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dc_encoder_service__srv__MotorPI_Response__init(&mut msg as *mut _) {
        panic!("Call to dc_encoder_service__srv__MotorPI_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MotorPI_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dc_encoder_service__srv__MotorPI_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dc_encoder_service__srv__MotorPI_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dc_encoder_service__srv__MotorPI_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MotorPI_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MotorPI_Response where Self: Sized {
  const TYPE_NAME: &'static str = "dc_encoder_service/srv/MotorPI_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dc_encoder_service__srv__MotorPI_Response() }
  }
}






#[link(name = "dc_encoder_service__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__dc_encoder_service__srv__MotorPI() -> *const std::ffi::c_void;
}

// Corresponds to dc_encoder_service__srv__MotorPI
#[allow(missing_docs, non_camel_case_types)]
pub struct MotorPI;

impl rosidl_runtime_rs::Service for MotorPI {
    type Request = MotorPI_Request;
    type Response = MotorPI_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__dc_encoder_service__srv__MotorPI() }
    }
}


