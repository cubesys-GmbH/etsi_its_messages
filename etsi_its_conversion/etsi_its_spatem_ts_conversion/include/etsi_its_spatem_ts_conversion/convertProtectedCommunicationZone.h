/** ============================================================================
MIT License

Copyright (c) 2023-2024 Institute for Automotive Engineering (ika), RWTH Aachen University
Copyright (c) 2024 Instituto de Telecomunicações, Universidade de Aveiro

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
============================================================================= */

// --- Auto-generated by asn1ToConversionHeader.py -----------------------------

#pragma once

#include <etsi_its_spatem_ts_coding/spatem_ts_ProtectedCommunicationZone.h>
#include <etsi_its_spatem_ts_conversion/convertLatitude.h>
#include <etsi_its_spatem_ts_conversion/convertLongitude.h>
#include <etsi_its_spatem_ts_conversion/convertProtectedZoneID.h>
#include <etsi_its_spatem_ts_conversion/convertProtectedZoneRadius.h>
#include <etsi_its_spatem_ts_conversion/convertProtectedZoneType.h>
#include <etsi_its_spatem_ts_conversion/convertTimestampIts.h>
#ifdef ROS1
#include <etsi_its_spatem_ts_msgs/ProtectedCommunicationZone.h>
namespace spatem_ts_msgs = etsi_its_spatem_ts_msgs;
#else
#include <etsi_its_spatem_ts_msgs/msg/protected_communication_zone.hpp>
namespace spatem_ts_msgs = etsi_its_spatem_ts_msgs::msg;
#endif


namespace etsi_its_spatem_ts_conversion {

void toRos_ProtectedCommunicationZone(const spatem_ts_ProtectedCommunicationZone_t& in, spatem_ts_msgs::ProtectedCommunicationZone& out) {
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

void toStruct_ProtectedCommunicationZone(const spatem_ts_msgs::ProtectedCommunicationZone& in, spatem_ts_ProtectedCommunicationZone_t& out) {
  memset(&out, 0, sizeof(spatem_ts_ProtectedCommunicationZone_t));

  toStruct_ProtectedZoneType(in.protected_zone_type, out.protectedZoneType);
  if (in.expiry_time_is_present) {
    out.expiryTime = (spatem_ts_TimestampIts_t*) calloc(1, sizeof(spatem_ts_TimestampIts_t));
    toStruct_TimestampIts(in.expiry_time, *out.expiryTime);
  }
  toStruct_Latitude(in.protected_zone_latitude, out.protectedZoneLatitude);
  toStruct_Longitude(in.protected_zone_longitude, out.protectedZoneLongitude);
  if (in.protected_zone_radius_is_present) {
    out.protectedZoneRadius = (spatem_ts_ProtectedZoneRadius_t*) calloc(1, sizeof(spatem_ts_ProtectedZoneRadius_t));
    toStruct_ProtectedZoneRadius(in.protected_zone_radius, *out.protectedZoneRadius);
  }
  if (in.protected_zone_id_is_present) {
    out.protectedZoneID = (spatem_ts_ProtectedZoneID_t*) calloc(1, sizeof(spatem_ts_ProtectedZoneID_t));
    toStruct_ProtectedZoneID(in.protected_zone_id, *out.protectedZoneID);
  }
}

}
