/** ============================================================================
MIT License

Copyright (c) 2023-2024 Institute for Automotive Engineering (ika), RWTH Aachen University

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

#include <etsi_its_cam_ts_coding/cam_ts_CenDsrcTollingZone.h>
#include <etsi_its_cam_ts_conversion/convertLatitude.h>
#include <etsi_its_cam_ts_conversion/convertLongitude.h>
#include <etsi_its_cam_ts_conversion/convertProtectedZoneId.h>
#ifdef ROS1
#include <etsi_its_cam_ts_msgs/CenDsrcTollingZone.h>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs;
#else
#include <etsi_its_cam_ts_msgs/msg/cen_dsrc_tolling_zone.hpp>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs::msg;
#endif


namespace etsi_its_cam_ts_conversion {

void toRos_CenDsrcTollingZone(const cam_ts_CenDsrcTollingZone_t& in, cam_ts_msgs::CenDsrcTollingZone& out) {
  toRos_Latitude(in.protectedZoneLatitude, out.protected_zone_latitude);
  toRos_Longitude(in.protectedZoneLongitude, out.protected_zone_longitude);
  if (in.cenDsrcTollingZoneId) {
    toRos_ProtectedZoneId(*in.cenDsrcTollingZoneId, out.cen_dsrc_tolling_zone_id);
    out.cen_dsrc_tolling_zone_id_is_present = true;
  }
}

void toStruct_CenDsrcTollingZone(const cam_ts_msgs::CenDsrcTollingZone& in, cam_ts_CenDsrcTollingZone_t& out) {
  memset(&out, 0, sizeof(cam_ts_CenDsrcTollingZone_t));

  toStruct_Latitude(in.protected_zone_latitude, out.protectedZoneLatitude);
  toStruct_Longitude(in.protected_zone_longitude, out.protectedZoneLongitude);
  if (in.cen_dsrc_tolling_zone_id_is_present) {
    out.cenDsrcTollingZoneId = (cam_ts_ProtectedZoneId_t*) calloc(1, sizeof(cam_ts_ProtectedZoneId_t));
    toStruct_ProtectedZoneId(in.cen_dsrc_tolling_zone_id, *out.cenDsrcTollingZoneId);
  }
}

}
