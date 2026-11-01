#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "oscp_imu_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__oscp_imu_driver__srv__ZeroOrientation_Request() -> *const std::ffi::c_void;
}

#[link(name = "oscp_imu_driver__rosidl_generator_c")]
extern "C" {
    fn oscp_imu_driver__srv__ZeroOrientation_Request__init(msg: *mut ZeroOrientation_Request) -> bool;
    fn oscp_imu_driver__srv__ZeroOrientation_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ZeroOrientation_Request>, size: usize) -> bool;
    fn oscp_imu_driver__srv__ZeroOrientation_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ZeroOrientation_Request>);
    fn oscp_imu_driver__srv__ZeroOrientation_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ZeroOrientation_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ZeroOrientation_Request>) -> bool;
}

// Corresponds to oscp_imu_driver__srv__ZeroOrientation_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ZeroOrientation_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for ZeroOrientation_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !oscp_imu_driver__srv__ZeroOrientation_Request__init(&mut msg as *mut _) {
        panic!("Call to oscp_imu_driver__srv__ZeroOrientation_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ZeroOrientation_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { oscp_imu_driver__srv__ZeroOrientation_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { oscp_imu_driver__srv__ZeroOrientation_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { oscp_imu_driver__srv__ZeroOrientation_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ZeroOrientation_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ZeroOrientation_Request where Self: Sized {
  const TYPE_NAME: &'static str = "oscp_imu_driver/srv/ZeroOrientation_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__oscp_imu_driver__srv__ZeroOrientation_Request() }
  }
}


#[link(name = "oscp_imu_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__oscp_imu_driver__srv__ZeroOrientation_Response() -> *const std::ffi::c_void;
}

#[link(name = "oscp_imu_driver__rosidl_generator_c")]
extern "C" {
    fn oscp_imu_driver__srv__ZeroOrientation_Response__init(msg: *mut ZeroOrientation_Response) -> bool;
    fn oscp_imu_driver__srv__ZeroOrientation_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ZeroOrientation_Response>, size: usize) -> bool;
    fn oscp_imu_driver__srv__ZeroOrientation_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ZeroOrientation_Response>);
    fn oscp_imu_driver__srv__ZeroOrientation_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ZeroOrientation_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ZeroOrientation_Response>) -> bool;
}

// Corresponds to oscp_imu_driver__srv__ZeroOrientation_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ZeroOrientation_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for ZeroOrientation_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !oscp_imu_driver__srv__ZeroOrientation_Response__init(&mut msg as *mut _) {
        panic!("Call to oscp_imu_driver__srv__ZeroOrientation_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ZeroOrientation_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { oscp_imu_driver__srv__ZeroOrientation_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { oscp_imu_driver__srv__ZeroOrientation_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { oscp_imu_driver__srv__ZeroOrientation_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ZeroOrientation_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ZeroOrientation_Response where Self: Sized {
  const TYPE_NAME: &'static str = "oscp_imu_driver/srv/ZeroOrientation_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__oscp_imu_driver__srv__ZeroOrientation_Response() }
  }
}


#[link(name = "oscp_imu_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__oscp_imu_driver__srv__StationaryCalibrate_Request() -> *const std::ffi::c_void;
}

#[link(name = "oscp_imu_driver__rosidl_generator_c")]
extern "C" {
    fn oscp_imu_driver__srv__StationaryCalibrate_Request__init(msg: *mut StationaryCalibrate_Request) -> bool;
    fn oscp_imu_driver__srv__StationaryCalibrate_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StationaryCalibrate_Request>, size: usize) -> bool;
    fn oscp_imu_driver__srv__StationaryCalibrate_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StationaryCalibrate_Request>);
    fn oscp_imu_driver__srv__StationaryCalibrate_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StationaryCalibrate_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<StationaryCalibrate_Request>) -> bool;
}

// Corresponds to oscp_imu_driver__srv__StationaryCalibrate_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StationaryCalibrate_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub duration: f32,

}



impl Default for StationaryCalibrate_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !oscp_imu_driver__srv__StationaryCalibrate_Request__init(&mut msg as *mut _) {
        panic!("Call to oscp_imu_driver__srv__StationaryCalibrate_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StationaryCalibrate_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { oscp_imu_driver__srv__StationaryCalibrate_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { oscp_imu_driver__srv__StationaryCalibrate_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { oscp_imu_driver__srv__StationaryCalibrate_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StationaryCalibrate_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StationaryCalibrate_Request where Self: Sized {
  const TYPE_NAME: &'static str = "oscp_imu_driver/srv/StationaryCalibrate_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__oscp_imu_driver__srv__StationaryCalibrate_Request() }
  }
}


#[link(name = "oscp_imu_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__oscp_imu_driver__srv__StationaryCalibrate_Response() -> *const std::ffi::c_void;
}

#[link(name = "oscp_imu_driver__rosidl_generator_c")]
extern "C" {
    fn oscp_imu_driver__srv__StationaryCalibrate_Response__init(msg: *mut StationaryCalibrate_Response) -> bool;
    fn oscp_imu_driver__srv__StationaryCalibrate_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StationaryCalibrate_Response>, size: usize) -> bool;
    fn oscp_imu_driver__srv__StationaryCalibrate_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StationaryCalibrate_Response>);
    fn oscp_imu_driver__srv__StationaryCalibrate_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StationaryCalibrate_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<StationaryCalibrate_Response>) -> bool;
}

// Corresponds to oscp_imu_driver__srv__StationaryCalibrate_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StationaryCalibrate_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for StationaryCalibrate_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !oscp_imu_driver__srv__StationaryCalibrate_Response__init(&mut msg as *mut _) {
        panic!("Call to oscp_imu_driver__srv__StationaryCalibrate_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StationaryCalibrate_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { oscp_imu_driver__srv__StationaryCalibrate_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { oscp_imu_driver__srv__StationaryCalibrate_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { oscp_imu_driver__srv__StationaryCalibrate_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StationaryCalibrate_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StationaryCalibrate_Response where Self: Sized {
  const TYPE_NAME: &'static str = "oscp_imu_driver/srv/StationaryCalibrate_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__oscp_imu_driver__srv__StationaryCalibrate_Response() }
  }
}


#[link(name = "oscp_imu_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__oscp_imu_driver__srv__GetIMUConfig_Request() -> *const std::ffi::c_void;
}

#[link(name = "oscp_imu_driver__rosidl_generator_c")]
extern "C" {
    fn oscp_imu_driver__srv__GetIMUConfig_Request__init(msg: *mut GetIMUConfig_Request) -> bool;
    fn oscp_imu_driver__srv__GetIMUConfig_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetIMUConfig_Request>, size: usize) -> bool;
    fn oscp_imu_driver__srv__GetIMUConfig_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetIMUConfig_Request>);
    fn oscp_imu_driver__srv__GetIMUConfig_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetIMUConfig_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetIMUConfig_Request>) -> bool;
}

// Corresponds to oscp_imu_driver__srv__GetIMUConfig_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetIMUConfig_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetIMUConfig_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !oscp_imu_driver__srv__GetIMUConfig_Request__init(&mut msg as *mut _) {
        panic!("Call to oscp_imu_driver__srv__GetIMUConfig_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetIMUConfig_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { oscp_imu_driver__srv__GetIMUConfig_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { oscp_imu_driver__srv__GetIMUConfig_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { oscp_imu_driver__srv__GetIMUConfig_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetIMUConfig_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetIMUConfig_Request where Self: Sized {
  const TYPE_NAME: &'static str = "oscp_imu_driver/srv/GetIMUConfig_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__oscp_imu_driver__srv__GetIMUConfig_Request() }
  }
}


#[link(name = "oscp_imu_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__oscp_imu_driver__srv__GetIMUConfig_Response() -> *const std::ffi::c_void;
}

#[link(name = "oscp_imu_driver__rosidl_generator_c")]
extern "C" {
    fn oscp_imu_driver__srv__GetIMUConfig_Response__init(msg: *mut GetIMUConfig_Response) -> bool;
    fn oscp_imu_driver__srv__GetIMUConfig_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetIMUConfig_Response>, size: usize) -> bool;
    fn oscp_imu_driver__srv__GetIMUConfig_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetIMUConfig_Response>);
    fn oscp_imu_driver__srv__GetIMUConfig_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetIMUConfig_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetIMUConfig_Response>) -> bool;
}

// Corresponds to oscp_imu_driver__srv__GetIMUConfig_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetIMUConfig_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub config_summary: rosidl_runtime_rs::String,

}



impl Default for GetIMUConfig_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !oscp_imu_driver__srv__GetIMUConfig_Response__init(&mut msg as *mut _) {
        panic!("Call to oscp_imu_driver__srv__GetIMUConfig_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetIMUConfig_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { oscp_imu_driver__srv__GetIMUConfig_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { oscp_imu_driver__srv__GetIMUConfig_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { oscp_imu_driver__srv__GetIMUConfig_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetIMUConfig_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetIMUConfig_Response where Self: Sized {
  const TYPE_NAME: &'static str = "oscp_imu_driver/srv/GetIMUConfig_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__oscp_imu_driver__srv__GetIMUConfig_Response() }
  }
}


#[link(name = "oscp_imu_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__oscp_imu_driver__srv__ApplyMagConfig_Request() -> *const std::ffi::c_void;
}

#[link(name = "oscp_imu_driver__rosidl_generator_c")]
extern "C" {
    fn oscp_imu_driver__srv__ApplyMagConfig_Request__init(msg: *mut ApplyMagConfig_Request) -> bool;
    fn oscp_imu_driver__srv__ApplyMagConfig_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ApplyMagConfig_Request>, size: usize) -> bool;
    fn oscp_imu_driver__srv__ApplyMagConfig_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ApplyMagConfig_Request>);
    fn oscp_imu_driver__srv__ApplyMagConfig_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ApplyMagConfig_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ApplyMagConfig_Request>) -> bool;
}

// Corresponds to oscp_imu_driver__srv__ApplyMagConfig_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ApplyMagConfig_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub config_path: rosidl_runtime_rs::String,

}



impl Default for ApplyMagConfig_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !oscp_imu_driver__srv__ApplyMagConfig_Request__init(&mut msg as *mut _) {
        panic!("Call to oscp_imu_driver__srv__ApplyMagConfig_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ApplyMagConfig_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { oscp_imu_driver__srv__ApplyMagConfig_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { oscp_imu_driver__srv__ApplyMagConfig_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { oscp_imu_driver__srv__ApplyMagConfig_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ApplyMagConfig_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ApplyMagConfig_Request where Self: Sized {
  const TYPE_NAME: &'static str = "oscp_imu_driver/srv/ApplyMagConfig_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__oscp_imu_driver__srv__ApplyMagConfig_Request() }
  }
}


#[link(name = "oscp_imu_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__oscp_imu_driver__srv__ApplyMagConfig_Response() -> *const std::ffi::c_void;
}

#[link(name = "oscp_imu_driver__rosidl_generator_c")]
extern "C" {
    fn oscp_imu_driver__srv__ApplyMagConfig_Response__init(msg: *mut ApplyMagConfig_Response) -> bool;
    fn oscp_imu_driver__srv__ApplyMagConfig_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ApplyMagConfig_Response>, size: usize) -> bool;
    fn oscp_imu_driver__srv__ApplyMagConfig_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ApplyMagConfig_Response>);
    fn oscp_imu_driver__srv__ApplyMagConfig_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ApplyMagConfig_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ApplyMagConfig_Response>) -> bool;
}

// Corresponds to oscp_imu_driver__srv__ApplyMagConfig_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ApplyMagConfig_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for ApplyMagConfig_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !oscp_imu_driver__srv__ApplyMagConfig_Response__init(&mut msg as *mut _) {
        panic!("Call to oscp_imu_driver__srv__ApplyMagConfig_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ApplyMagConfig_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { oscp_imu_driver__srv__ApplyMagConfig_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { oscp_imu_driver__srv__ApplyMagConfig_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { oscp_imu_driver__srv__ApplyMagConfig_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ApplyMagConfig_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ApplyMagConfig_Response where Self: Sized {
  const TYPE_NAME: &'static str = "oscp_imu_driver/srv/ApplyMagConfig_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__oscp_imu_driver__srv__ApplyMagConfig_Response() }
  }
}






#[link(name = "oscp_imu_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__oscp_imu_driver__srv__ZeroOrientation() -> *const std::ffi::c_void;
}

// Corresponds to oscp_imu_driver__srv__ZeroOrientation
#[allow(missing_docs, non_camel_case_types)]
pub struct ZeroOrientation;

impl rosidl_runtime_rs::Service for ZeroOrientation {
    type Request = ZeroOrientation_Request;
    type Response = ZeroOrientation_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__oscp_imu_driver__srv__ZeroOrientation() }
    }
}




#[link(name = "oscp_imu_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__oscp_imu_driver__srv__StationaryCalibrate() -> *const std::ffi::c_void;
}

// Corresponds to oscp_imu_driver__srv__StationaryCalibrate
#[allow(missing_docs, non_camel_case_types)]
pub struct StationaryCalibrate;

impl rosidl_runtime_rs::Service for StationaryCalibrate {
    type Request = StationaryCalibrate_Request;
    type Response = StationaryCalibrate_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__oscp_imu_driver__srv__StationaryCalibrate() }
    }
}




#[link(name = "oscp_imu_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__oscp_imu_driver__srv__GetIMUConfig() -> *const std::ffi::c_void;
}

// Corresponds to oscp_imu_driver__srv__GetIMUConfig
#[allow(missing_docs, non_camel_case_types)]
pub struct GetIMUConfig;

impl rosidl_runtime_rs::Service for GetIMUConfig {
    type Request = GetIMUConfig_Request;
    type Response = GetIMUConfig_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__oscp_imu_driver__srv__GetIMUConfig() }
    }
}




#[link(name = "oscp_imu_driver__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__oscp_imu_driver__srv__ApplyMagConfig() -> *const std::ffi::c_void;
}

// Corresponds to oscp_imu_driver__srv__ApplyMagConfig
#[allow(missing_docs, non_camel_case_types)]
pub struct ApplyMagConfig;

impl rosidl_runtime_rs::Service for ApplyMagConfig {
    type Request = ApplyMagConfig_Request;
    type Response = ApplyMagConfig_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__oscp_imu_driver__srv__ApplyMagConfig() }
    }
}


