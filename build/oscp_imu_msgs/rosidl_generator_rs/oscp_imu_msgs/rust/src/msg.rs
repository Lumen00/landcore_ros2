#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to oscp_imu_msgs__msg__OscpRaw
/// OSCP Raw IMU Frame
/// Corresponds to oscp_raw_t structure

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct OscpRaw {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::OscpRaw::default())
  }
}

impl rosidl_runtime_rs::Message for OscpRaw {
  type RmwMsg = super::msg::rmw::OscpRaw;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        header_byte: msg.header_byte,
        counter: msg.counter,
        timestamp_ms: msg.timestamp_ms,
        gyro_x: msg.gyro_x,
        gyro_y: msg.gyro_y,
        gyro_z: msg.gyro_z,
        accel_x: msg.accel_x,
        accel_y: msg.accel_y,
        accel_z: msg.accel_z,
        incl_x: msg.incl_x,
        incl_y: msg.incl_y,
        mag_x: msg.mag_x,
        mag_y: msg.mag_y,
        mag_z: msg.mag_z,
        temp: msg.temp,
        status: msg.status,
        crc: msg.crc,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      header_byte: msg.header_byte,
      counter: msg.counter,
      timestamp_ms: msg.timestamp_ms,
      gyro_x: msg.gyro_x,
      gyro_y: msg.gyro_y,
      gyro_z: msg.gyro_z,
      accel_x: msg.accel_x,
      accel_y: msg.accel_y,
      accel_z: msg.accel_z,
      incl_x: msg.incl_x,
      incl_y: msg.incl_y,
      mag_x: msg.mag_x,
      mag_y: msg.mag_y,
      mag_z: msg.mag_z,
      temp: msg.temp,
      status: msg.status,
      crc: msg.crc,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      header_byte: msg.header_byte,
      counter: msg.counter,
      timestamp_ms: msg.timestamp_ms,
      gyro_x: msg.gyro_x,
      gyro_y: msg.gyro_y,
      gyro_z: msg.gyro_z,
      accel_x: msg.accel_x,
      accel_y: msg.accel_y,
      accel_z: msg.accel_z,
      incl_x: msg.incl_x,
      incl_y: msg.incl_y,
      mag_x: msg.mag_x,
      mag_y: msg.mag_y,
      mag_z: msg.mag_z,
      temp: msg.temp,
      status: msg.status,
      crc: msg.crc,
    }
  }
}


// Corresponds to oscp_imu_msgs__msg__OscpRot
/// OSCP Rotation Matrix Frame
/// Corresponds to oscp_rot_mat_t structure

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct OscpRot {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::OscpRot::default())
  }
}

impl rosidl_runtime_rs::Message for OscpRot {
  type RmwMsg = super::msg::rmw::OscpRot;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        header_byte: msg.header_byte,
        counter: msg.counter,
        timestamp_ms: msg.timestamp_ms,
        rotation_matrix: msg.rotation_matrix,
        status: msg.status,
        crc: msg.crc,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      header_byte: msg.header_byte,
      counter: msg.counter,
      timestamp_ms: msg.timestamp_ms,
        rotation_matrix: msg.rotation_matrix,
      status: msg.status,
      crc: msg.crc,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      header_byte: msg.header_byte,
      counter: msg.counter,
      timestamp_ms: msg.timestamp_ms,
      rotation_matrix: msg.rotation_matrix,
      status: msg.status,
      crc: msg.crc,
    }
  }
}


// Corresponds to oscp_imu_msgs__msg__OscpQuat
/// OSCP Quaternion IMU Frame
/// Corresponds to oscp_quat_t structure

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct OscpQuat {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::OscpQuat::default())
  }
}

impl rosidl_runtime_rs::Message for OscpQuat {
  type RmwMsg = super::msg::rmw::OscpQuat;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        header_byte: msg.header_byte,
        counter: msg.counter,
        timestamp_ms: msg.timestamp_ms,
        quat_w: msg.quat_w,
        quat_x: msg.quat_x,
        quat_y: msg.quat_y,
        quat_z: msg.quat_z,
        status: msg.status,
        crc: msg.crc,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      header_byte: msg.header_byte,
      counter: msg.counter,
      timestamp_ms: msg.timestamp_ms,
      quat_w: msg.quat_w,
      quat_x: msg.quat_x,
      quat_y: msg.quat_y,
      quat_z: msg.quat_z,
      status: msg.status,
      crc: msg.crc,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      header_byte: msg.header_byte,
      counter: msg.counter,
      timestamp_ms: msg.timestamp_ms,
      quat_w: msg.quat_w,
      quat_x: msg.quat_x,
      quat_y: msg.quat_y,
      quat_z: msg.quat_z,
      status: msg.status,
      crc: msg.crc,
    }
  }
}


// Corresponds to oscp_imu_msgs__msg__OscpEuler
/// OSCP Euler IMU Frame
/// Corresponds to oscp_euler_t structure

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct OscpEuler {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::OscpEuler::default())
  }
}

impl rosidl_runtime_rs::Message for OscpEuler {
  type RmwMsg = super::msg::rmw::OscpEuler;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        header_byte: msg.header_byte,
        counter: msg.counter,
        timestamp_ms: msg.timestamp_ms,
        roll: msg.roll,
        pitch: msg.pitch,
        yaw: msg.yaw,
        status: msg.status,
        crc: msg.crc,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      header_byte: msg.header_byte,
      counter: msg.counter,
      timestamp_ms: msg.timestamp_ms,
      roll: msg.roll,
      pitch: msg.pitch,
      yaw: msg.yaw,
      status: msg.status,
      crc: msg.crc,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      header_byte: msg.header_byte,
      counter: msg.counter,
      timestamp_ms: msg.timestamp_ms,
      roll: msg.roll,
      pitch: msg.pitch,
      yaw: msg.yaw,
      status: msg.status,
      crc: msg.crc,
    }
  }
}


// Corresponds to oscp_imu_msgs__msg__OscpGnss
/// OSCP GNSS Operating Frame
/// Corresponds to oscp_gnss_t structure from manual Table 11

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct OscpGnss {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::OscpGnss::default())
  }
}

impl rosidl_runtime_rs::Message for OscpGnss {
  type RmwMsg = super::msg::rmw::OscpGnss;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        header_byte: msg.header_byte,
        counter: msg.counter,
        timestamp_ms: msg.timestamp_ms,
        fix_type: msg.fix_type,
        num_satellites: msg.num_satellites,
        longitude: msg.longitude,
        latitude: msg.latitude,
        height_mm: msg.height_mm,
        h_accuracy_mm: msg.h_accuracy_mm,
        v_accuracy_mm: msg.v_accuracy_mm,
        vel_north_mms: msg.vel_north_mms,
        vel_east_mms: msg.vel_east_mms,
        vel_down_mms: msg.vel_down_mms,
        speed_accuracy_mms: msg.speed_accuracy_mms,
        heading_motion: msg.heading_motion,
        heading_accuracy: msg.heading_accuracy,
        position_dop: msg.position_dop,
        last_correction_age: msg.last_correction_age,
        gnss_status: msg.gnss_status,
        status: msg.status,
        crc: msg.crc,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      header_byte: msg.header_byte,
      counter: msg.counter,
      timestamp_ms: msg.timestamp_ms,
      fix_type: msg.fix_type,
      num_satellites: msg.num_satellites,
      longitude: msg.longitude,
      latitude: msg.latitude,
      height_mm: msg.height_mm,
      h_accuracy_mm: msg.h_accuracy_mm,
      v_accuracy_mm: msg.v_accuracy_mm,
      vel_north_mms: msg.vel_north_mms,
      vel_east_mms: msg.vel_east_mms,
      vel_down_mms: msg.vel_down_mms,
      speed_accuracy_mms: msg.speed_accuracy_mms,
      heading_motion: msg.heading_motion,
      heading_accuracy: msg.heading_accuracy,
      position_dop: msg.position_dop,
      last_correction_age: msg.last_correction_age,
      gnss_status: msg.gnss_status,
      status: msg.status,
      crc: msg.crc,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      header_byte: msg.header_byte,
      counter: msg.counter,
      timestamp_ms: msg.timestamp_ms,
      fix_type: msg.fix_type,
      num_satellites: msg.num_satellites,
      longitude: msg.longitude,
      latitude: msg.latitude,
      height_mm: msg.height_mm,
      h_accuracy_mm: msg.h_accuracy_mm,
      v_accuracy_mm: msg.v_accuracy_mm,
      vel_north_mms: msg.vel_north_mms,
      vel_east_mms: msg.vel_east_mms,
      vel_down_mms: msg.vel_down_mms,
      speed_accuracy_mms: msg.speed_accuracy_mms,
      heading_motion: msg.heading_motion,
      heading_accuracy: msg.heading_accuracy,
      position_dop: msg.position_dop,
      last_correction_age: msg.last_correction_age,
      gnss_status: msg.gnss_status,
      status: msg.status,
      crc: msg.crc,
    }
  }
}


