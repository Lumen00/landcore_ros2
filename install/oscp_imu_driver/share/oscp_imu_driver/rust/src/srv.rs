#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to oscp_imu_driver__srv__ZeroOrientation_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ZeroOrientation_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for ZeroOrientation_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ZeroOrientation_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ZeroOrientation_Request {
  type RmwMsg = super::srv::rmw::ZeroOrientation_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to oscp_imu_driver__srv__ZeroOrientation_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ZeroOrientation_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for ZeroOrientation_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ZeroOrientation_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ZeroOrientation_Response {
  type RmwMsg = super::srv::rmw::ZeroOrientation_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to oscp_imu_driver__srv__StationaryCalibrate_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StationaryCalibrate_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub duration: f32,

}



impl Default for StationaryCalibrate_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::StationaryCalibrate_Request::default())
  }
}

impl rosidl_runtime_rs::Message for StationaryCalibrate_Request {
  type RmwMsg = super::srv::rmw::StationaryCalibrate_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        duration: msg.duration,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      duration: msg.duration,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      duration: msg.duration,
    }
  }
}


// Corresponds to oscp_imu_driver__srv__StationaryCalibrate_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StationaryCalibrate_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for StationaryCalibrate_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::StationaryCalibrate_Response::default())
  }
}

impl rosidl_runtime_rs::Message for StationaryCalibrate_Response {
  type RmwMsg = super::srv::rmw::StationaryCalibrate_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to oscp_imu_driver__srv__GetIMUConfig_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetIMUConfig_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetIMUConfig_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetIMUConfig_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetIMUConfig_Request {
  type RmwMsg = super::srv::rmw::GetIMUConfig_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to oscp_imu_driver__srv__GetIMUConfig_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetIMUConfig_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub config_summary: std::string::String,

}



impl Default for GetIMUConfig_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetIMUConfig_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetIMUConfig_Response {
  type RmwMsg = super::srv::rmw::GetIMUConfig_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        config_summary: msg.config_summary.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        config_summary: msg.config_summary.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      config_summary: msg.config_summary.to_string(),
    }
  }
}


// Corresponds to oscp_imu_driver__srv__ApplyMagConfig_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ApplyMagConfig_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub config_path: std::string::String,

}



impl Default for ApplyMagConfig_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ApplyMagConfig_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ApplyMagConfig_Request {
  type RmwMsg = super::srv::rmw::ApplyMagConfig_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        config_path: msg.config_path.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        config_path: msg.config_path.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      config_path: msg.config_path.to_string(),
    }
  }
}


// Corresponds to oscp_imu_driver__srv__ApplyMagConfig_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ApplyMagConfig_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for ApplyMagConfig_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ApplyMagConfig_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ApplyMagConfig_Response {
  type RmwMsg = super::srv::rmw::ApplyMagConfig_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
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


