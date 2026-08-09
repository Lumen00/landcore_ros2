#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to dc_encoder_service__srv__MotorPI_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::MotorPI_Request::default())
  }
}

impl rosidl_runtime_rs::Message for MotorPI_Request {
  type RmwMsg = super::srv::rmw::MotorPI_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        speed_cmd_front_left: msg.speed_cmd_front_left,
        speed_cmd_front_right: msg.speed_cmd_front_right,
        speed_cmd_back_left: msg.speed_cmd_back_left,
        speed_cmd_back_right: msg.speed_cmd_back_right,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      speed_cmd_front_left: msg.speed_cmd_front_left,
      speed_cmd_front_right: msg.speed_cmd_front_right,
      speed_cmd_back_left: msg.speed_cmd_back_left,
      speed_cmd_back_right: msg.speed_cmd_back_right,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      speed_cmd_front_left: msg.speed_cmd_front_left,
      speed_cmd_front_right: msg.speed_cmd_front_right,
      speed_cmd_back_left: msg.speed_cmd_back_left,
      speed_cmd_back_right: msg.speed_cmd_back_right,
    }
  }
}


// Corresponds to dc_encoder_service__srv__MotorPI_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::MotorPI_Response::default())
  }
}

impl rosidl_runtime_rs::Message for MotorPI_Response {
  type RmwMsg = super::srv::rmw::MotorPI_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        speed_front_left: msg.speed_front_left,
        speed_front_right: msg.speed_front_right,
        speed_back_left: msg.speed_back_left,
        speed_back_right: msg.speed_back_right,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      speed_front_left: msg.speed_front_left,
      speed_front_right: msg.speed_front_right,
      speed_back_left: msg.speed_back_left,
      speed_back_right: msg.speed_back_right,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      speed_front_left: msg.speed_front_left,
      speed_front_right: msg.speed_front_right,
      speed_back_left: msg.speed_back_left,
      speed_back_right: msg.speed_back_right,
    }
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


