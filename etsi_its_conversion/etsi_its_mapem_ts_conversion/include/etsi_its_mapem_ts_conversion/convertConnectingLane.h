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

#include <etsi_its_mapem_ts_coding/mapem_ts_ConnectingLane.h>
#include <etsi_its_mapem_ts_conversion/convertAllowedManeuvers.h>
#include <etsi_its_mapem_ts_conversion/convertLaneID.h>
#ifdef ROS1
#include <etsi_its_mapem_ts_msgs/ConnectingLane.h>
namespace mapem_ts_msgs = etsi_its_mapem_ts_msgs;
#else
#include <etsi_its_mapem_ts_msgs/msg/connecting_lane.hpp>
namespace mapem_ts_msgs = etsi_its_mapem_ts_msgs::msg;
#endif


namespace etsi_its_mapem_ts_conversion {

void toRos_ConnectingLane(const mapem_ts_ConnectingLane_t& in, mapem_ts_msgs::ConnectingLane& out) {
  toRos_LaneID(in.lane, out.lane);
  if (in.maneuver) {
    toRos_AllowedManeuvers(*in.maneuver, out.maneuver);
    out.maneuver_is_present = true;
  }
}

void toStruct_ConnectingLane(const mapem_ts_msgs::ConnectingLane& in, mapem_ts_ConnectingLane_t& out) {
  memset(&out, 0, sizeof(mapem_ts_ConnectingLane_t));

  toStruct_LaneID(in.lane, out.lane);
  if (in.maneuver_is_present) {
    out.maneuver = (mapem_ts_AllowedManeuvers_t*) calloc(1, sizeof(mapem_ts_AllowedManeuvers_t));
    toStruct_AllowedManeuvers(in.maneuver, *out.maneuver);
  }
}

}