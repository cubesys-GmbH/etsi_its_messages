/** ============================================================================
MIT License

Copyright (c) 2023 Institute for Automotive Engineering (ika), RWTH Aachen University

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

#include <etsi_its_denm_coding/LocationContainer.h>
#include <etsi_its_denm_conversion/convertSpeed.h>
#include <etsi_its_denm_conversion/convertHeading.h>
#include <etsi_its_denm_conversion/convertTraces.h>
#include <etsi_its_denm_conversion/convertRoadType.h>
#ifdef ROS1
#include <etsi_its_denm_msgs/LocationContainer.h>
namespace denm_msgs = etsi_its_denm_msgs;
#else
#include <etsi_its_denm_msgs/msg/location_container.hpp>
namespace denm_msgs = etsi_its_denm_msgs::msg;
#endif


namespace etsi_its_denm_conversion {

void toRos_LocationContainer(const LocationContainer_t& in, denm_msgs::LocationContainer& out) {

  if (in.eventSpeed) {
    toRos_Speed(*in.eventSpeed, out.event_speed);
    out.event_speed_is_present = true;
  }

  if (in.eventPositionHeading) {
    toRos_Heading(*in.eventPositionHeading, out.event_position_heading);
    out.event_position_heading_is_present = true;
  }

  toRos_Traces(in.traces, out.traces);
  if (in.roadType) {
    toRos_RoadType(*in.roadType, out.road_type);
    out.road_type_is_present = true;
  }

}

void toStruct_LocationContainer(const denm_msgs::LocationContainer& in, LocationContainer_t& out) {

  memset(&out, 0, sizeof(LocationContainer_t));

  if (in.event_speed_is_present) {
    Speed_t event_speed;
    toStruct_Speed(in.event_speed, event_speed);
    out.eventSpeed = new Speed_t(event_speed);
  }

  if (in.event_position_heading_is_present) {
    Heading_t event_position_heading;
    toStruct_Heading(in.event_position_heading, event_position_heading);
    out.eventPositionHeading = new Heading_t(event_position_heading);
  }

  toStruct_Traces(in.traces, out.traces);
  if (in.road_type_is_present) {
    RoadType_t road_type;
    toStruct_RoadType(in.road_type, road_type);
    out.roadType = new RoadType_t(road_type);
  }

}

}