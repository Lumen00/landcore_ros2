#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "oscp_imu_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__oscp_imu_msgs__msg__OscpRaw() -> *const std::ffi::c_void;
}

#[link(name = "oscp_imu_msgs__rosidl_generator_c")]
extern "C" {
    fn oscp_imu_msgs__msg__OscpRaw__init(msg: *mut OscpRaw) -> bool;
    fn oscp_imu_msgs__msg__OscpRaw__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<OscpRaw>, size: usize) -> bool;
    fn oscp_imu_msgs__msg__OscpRaw__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<OscpRaw>);
    fn oscp_imu_msgs__msg__OscpRaw__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<OscpRaw>, out_seq: *mut rosidl_runtime_rs::Sequence<OscpRaw>) -> bool;
}

// Corresponds to oscp_imu_msgs__msg__OscpRaw
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// OSCP Raw IMU Frame
/// Corresponds to oscp_raw_t structure

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct OscpRaw {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// Misalignment Correction (2b) | Operating Mode (3b) | Frame Type (3b)
    pub header_byte: u8,

    /// Wrapping frame counter [0,255]
    pub counter: u8,

    /// Timestamp in ms since last power up or reset
    pub timestamp_ms: u64,

    /// °/sec
    pub gyro_x: f32,

    /// °/sec
    pub gyro_y: f32,

    /// °/sec
    pub gyro_z: f32,

    /// g
    pub accel_x: f32,

    /// g
    pub accel_y: f32,

    /// g
    pub accel_z: f32,

    /// mg
    pub incl_x: f32,

    /// mg
    pub incl_y: f32,

    /// μT
    pub mag_x: f32,

    /// μT
    pub mag_y: f32,

    /// μT
    pub mag_z: f32,

    /// °C
    pub temp: f32,

    /// Status byte - use OSCP_STATUS_* masks
    pub status: u8,

    /// Checksum (CRC-16)
    pub crc: u16,

}



impl Default for OscpRaw {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !oscp_imu_msgs__msg__OscpRaw__init(&mut msg as *mut _) {
        panic!("Call to oscp_imu_msgs__msg__OscpRaw__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for OscpRaw {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { oscp_imu_msgs__msg__OscpRaw__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { oscp_imu_msgs__msg__OscpRaw__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { oscp_imu_msgs__msg__OscpRaw__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for OscpRaw {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for OscpRaw where Self: Sized {
  const TYPE_NAME: &'static str = "oscp_imu_msgs/msg/OscpRaw";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__oscp_imu_msgs__msg__OscpRaw() }
  }
}


#[link(name = "oscp_imu_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__oscp_imu_msgs__msg__OscpRot() -> *const std::ffi::c_void;
}

#[link(name = "oscp_imu_msgs__rosidl_generator_c")]
extern "C" {
    fn oscp_imu_msgs__msg__OscpRot__init(msg: *mut OscpRot) -> bool;
    fn oscp_imu_msgs__msg__OscpRot__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<OscpRot>, size: usize) -> bool;
    fn oscp_imu_msgs__msg__OscpRot__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<OscpRot>);
    fn oscp_imu_msgs__msg__OscpRot__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<OscpRot>, out_seq: *mut rosidl_runtime_rs::Sequence<OscpRot>) -> bool;
}

// Corresponds to oscp_imu_msgs__msg__OscpRot
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// OSCP Rotation Matrix Frame
/// Corresponds to oscp_rot_mat_t structure

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct OscpRot {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// Misalignment Correction (2b) | Operating Mode (3b) | Frame Type (3b)
    pub header_byte: u8,

    /// Wrapping frame counter [0,255]
    pub counter: u8,

    /// Timestamp in ms since last power up or reset
    pub timestamp_ms: u64,

    /// 3x3 Rotation Matrix (row-major order)
    /// [m00, m01, m02, m10, m11, m12, m20, m21, m22]
    pub rotation_matrix: [f32; 9],

    /// Status byte - use OSCP_STATUS_* masks
    pub status: u8,

    /// Checksum (CRC-16)
    pub crc: u16,

}



impl Default for OscpRot {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !oscp_imu_msgs__msg__OscpRot__init(&mut msg as *mut _) {
        panic!("Call to oscp_imu_msgs__msg__OscpRot__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for OscpRot {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { oscp_imu_msgs__msg__OscpRot__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { oscp_imu_msgs__msg__OscpRot__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { oscp_imu_msgs__msg__OscpRot__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for OscpRot {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for OscpRot where Self: Sized {
  const TYPE_NAME: &'static str = "oscp_imu_msgs/msg/OscpRot";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__oscp_imu_msgs__msg__OscpRot() }
  }
}


#[link(name = "oscp_imu_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__oscp_imu_msgs__msg__OscpQuat() -> *const std::ffi::c_void;
}

#[link(name = "oscp_imu_msgs__rosidl_generator_c")]
extern "C" {
    fn oscp_imu_msgs__msg__OscpQuat__init(msg: *mut OscpQuat) -> bool;
    fn oscp_imu_msgs__msg__OscpQuat__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<OscpQuat>, size: usize) -> bool;
    fn oscp_imu_msgs__msg__OscpQuat__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<OscpQuat>);
    fn oscp_imu_msgs__msg__OscpQuat__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<OscpQuat>, out_seq: *mut rosidl_runtime_rs::Sequence<OscpQuat>) -> bool;
}

// Corresponds to oscp_imu_msgs__msg__OscpQuat
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// OSCP Quaternion IMU Frame
/// Corresponds to oscp_quat_t structure

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct OscpQuat {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// Misalignment Correction (2b) | Operating Mode (3b) | Frame Type (3b)
    pub header_byte: u8,

    /// Wrapping frame counter [0,255]
    pub counter: u8,

    /// Timestamp in ms since last power up or reset
    pub timestamp_ms: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub quat_w: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub quat_x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub quat_y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub quat_z: f32,

    /// Status byte - use OSCP_STATUS_* masks
    pub status: u8,

    /// Checksum (CRC-16)
    pub crc: u16,

}



impl Default for OscpQuat {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !oscp_imu_msgs__msg__OscpQuat__init(&mut msg as *mut _) {
        panic!("Call to oscp_imu_msgs__msg__OscpQuat__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for OscpQuat {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { oscp_imu_msgs__msg__OscpQuat__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { oscp_imu_msgs__msg__OscpQuat__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { oscp_imu_msgs__msg__OscpQuat__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for OscpQuat {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for OscpQuat where Self: Sized {
  const TYPE_NAME: &'static str = "oscp_imu_msgs/msg/OscpQuat";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__oscp_imu_msgs__msg__OscpQuat() }
  }
}


#[link(name = "oscp_imu_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__oscp_imu_msgs__msg__OscpEuler() -> *const std::ffi::c_void;
}

#[link(name = "oscp_imu_msgs__rosidl_generator_c")]
extern "C" {
    fn oscp_imu_msgs__msg__OscpEuler__init(msg: *mut OscpEuler) -> bool;
    fn oscp_imu_msgs__msg__OscpEuler__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<OscpEuler>, size: usize) -> bool;
    fn oscp_imu_msgs__msg__OscpEuler__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<OscpEuler>);
    fn oscp_imu_msgs__msg__OscpEuler__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<OscpEuler>, out_seq: *mut rosidl_runtime_rs::Sequence<OscpEuler>) -> bool;
}

// Corresponds to oscp_imu_msgs__msg__OscpEuler
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// OSCP Euler IMU Frame
/// Corresponds to oscp_euler_t structure

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct OscpEuler {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// Misalignment Correction (2b) | Operating Mode (3b) | Frame Type (3b)
    pub header_byte: u8,

    /// Wrapping frame counter [0,255]
    pub counter: u8,

    /// Timestamp in ms since last power up or reset
    pub timestamp_ms: u64,

    /// deg
    pub roll: f32,

    /// deg
    pub pitch: f32,

    /// deg
    pub yaw: f32,

    /// Status byte - use OSCP_STATUS_* masks
    pub status: u8,

    /// Checksum (CRC-16)
    pub crc: u16,

}



impl Default for OscpEuler {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !oscp_imu_msgs__msg__OscpEuler__init(&mut msg as *mut _) {
        panic!("Call to oscp_imu_msgs__msg__OscpEuler__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for OscpEuler {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { oscp_imu_msgs__msg__OscpEuler__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { oscp_imu_msgs__msg__OscpEuler__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { oscp_imu_msgs__msg__OscpEuler__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for OscpEuler {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for OscpEuler where Self: Sized {
  const TYPE_NAME: &'static str = "oscp_imu_msgs/msg/OscpEuler";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__oscp_imu_msgs__msg__OscpEuler() }
  }
}


#[link(name = "oscp_imu_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__oscp_imu_msgs__msg__OscpGnss() -> *const std::ffi::c_void;
}

#[link(name = "oscp_imu_msgs__rosidl_generator_c")]
extern "C" {
    fn oscp_imu_msgs__msg__OscpGnss__init(msg: *mut OscpGnss) -> bool;
    fn oscp_imu_msgs__msg__OscpGnss__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<OscpGnss>, size: usize) -> bool;
    fn oscp_imu_msgs__msg__OscpGnss__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<OscpGnss>);
    fn oscp_imu_msgs__msg__OscpGnss__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<OscpGnss>, out_seq: *mut rosidl_runtime_rs::Sequence<OscpGnss>) -> bool;
}

// Corresponds to oscp_imu_msgs__msg__OscpGnss
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// OSCP GNSS Operating Frame
/// Corresponds to oscp_gnss_t structure from manual Table 11

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct OscpGnss {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// Misalignment Correction (2b) | Operating Mode (3b) | Frame Type (3b)
    pub header_byte: u8,

    /// Wrapping frame counter [0,255]
    pub counter: u8,

    /// Timestamp in ms since last power up or reset
    pub timestamp_ms: u64,

    /// GNSS Fix Type (see Table 26)
    pub fix_type: u8,

    /// Number of satellites used
    pub num_satellites: u8,

    /// degrees
    pub longitude: f32,

    /// degrees
    pub latitude: f32,

    /// mm above ellipsoid (signed)
    pub height_mm: i32,

    /// Horizontal accuracy estimate (mm)
    pub h_accuracy_mm: u32,

    /// Vertical accuracy estimate (mm)
    pub v_accuracy_mm: u32,

    /// Velocity North in mm/sec (signed)
    pub vel_north_mms: i32,

    /// Velocity East in mm/sec (signed)
    pub vel_east_mms: i32,

    /// Velocity Down in mm/sec (signed)
    pub vel_down_mms: i32,

    /// Speed Accuracy Estimate (mm/sec)
    pub speed_accuracy_mms: u32,

    /// Heading of Motion (°)
    pub heading_motion: f32,

    /// Heading Accuracy Estimate (°)
    pub heading_accuracy: f32,

    /// Position DOP
    pub position_dop: f32,

    /// Age of last correction (see Table 27)
    pub last_correction_age: u8,

    /// [7:2] RESERVED | [1] Invalid LLH | [0] GNSS Fix OK
    pub gnss_status: u8,

    /// Status byte - use OSCP_STATUS_* masks
    pub status: u8,

    /// Checksum (CRC-16)
    pub crc: u16,

}



impl Default for OscpGnss {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !oscp_imu_msgs__msg__OscpGnss__init(&mut msg as *mut _) {
        panic!("Call to oscp_imu_msgs__msg__OscpGnss__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for OscpGnss {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { oscp_imu_msgs__msg__OscpGnss__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { oscp_imu_msgs__msg__OscpGnss__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { oscp_imu_msgs__msg__OscpGnss__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for OscpGnss {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for OscpGnss where Self: Sized {
  const TYPE_NAME: &'static str = "oscp_imu_msgs/msg/OscpGnss";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__oscp_imu_msgs__msg__OscpGnss() }
  }
}


