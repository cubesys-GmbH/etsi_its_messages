//// SEQUENCE ProtectedCommunicationZone


#pragma once

#include <stdexcept>

#include <etsi_its_cam_coding/ProtectedCommunicationZone.h>
#include <etsi_its_cam_conversion/convertProtectedZoneType.h>
#include <etsi_its_cam_conversion/convertTimestampIts.h>
#include <etsi_its_cam_conversion/convertLatitude.h>
#include <etsi_its_cam_conversion/convertLongitude.h>
#include <etsi_its_cam_conversion/convertProtectedZoneRadius.h>
#include <etsi_its_cam_conversion/convertProtectedZoneID.h>
#ifdef ROS1
#include <etsi_its_cam_msgs/ProtectedCommunicationZone.h>
namespace cam_msgs = etsi_its_cam_msgs;
#else
#include <etsi_its_cam_msgs/msg/protected_communication_zone.hpp>
namespace cam_msgs = etsi_its_cam_msgs::msg;
#endif


namespace etsi_its_cam_conversion {

void toRos_ProtectedCommunicationZone(const ProtectedCommunicationZone_t& in, cam_msgs::ProtectedCommunicationZone& out) {
  toRos_ProtectedZoneType(in.protectedZoneType, out.protected_zone_type);
  if (in.expiryTime) {
    toRos_TimestampIts(*in.expiryTime, out.expiry_time);
    out.expiry_time_is_present = true;
  }
  toRos_Latitude(in.protectedZoneLatitude, out.protected_zone_latitude);
  toRos_Longitude(in.protectedZoneLongitude, out.protected_zone_longitude);
  if (in.protectedZoneRadius) {
    toRos_ProtectedZoneRadius(*in.protectedZoneRadius, out.protected_zone_radius);
    out.protected_zone_radius_is_present = true;
  }
  if (in.protectedZoneID) {
    toRos_ProtectedZoneID(*in.protectedZoneID, out.protected_zone_id);
    out.protected_zone_id_is_present = true;
  }
}

void toStruct_ProtectedCommunicationZone(const cam_msgs::ProtectedCommunicationZone& in, ProtectedCommunicationZone_t& out) {
  memset(&out, 0, sizeof(ProtectedCommunicationZone_t));

  toStruct_ProtectedZoneType(in.protected_zone_type, out.protectedZoneType);
  if (in.expiry_time_is_present) {
    out.expiryTime = (TimestampIts_t*) calloc(1, sizeof(TimestampIts_t));
    toStruct_TimestampIts(in.expiry_time, *out.expiryTime);
  }
  toStruct_Latitude(in.protected_zone_latitude, out.protectedZoneLatitude);
  toStruct_Longitude(in.protected_zone_longitude, out.protectedZoneLongitude);
  if (in.protected_zone_radius_is_present) {
    out.protectedZoneRadius = (ProtectedZoneRadius_t*) calloc(1, sizeof(ProtectedZoneRadius_t));
    toStruct_ProtectedZoneRadius(in.protected_zone_radius, *out.protectedZoneRadius);
  }
  if (in.protected_zone_id_is_present) {
    out.protectedZoneID = (ProtectedZoneID_t*) calloc(1, sizeof(ProtectedZoneID_t));
    toStruct_ProtectedZoneID(in.protected_zone_id, *out.protectedZoneID);
  }
}

}
