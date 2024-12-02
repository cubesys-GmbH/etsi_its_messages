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

#include <etsi_its_mapem_ts_coding/mapem_ts_LaneDataAttribute.h>
#include <etsi_its_mapem_ts_conversion/convertDeltaAngle.h>
#include <etsi_its_mapem_ts_conversion/convertMergeDivergeNodeAngle.h>
#include <etsi_its_mapem_ts_conversion/convertRoadwayCrownAngle.h>
#include <etsi_its_mapem_ts_conversion/convertSpeedLimitList.h>
#ifdef ROS1
#include <etsi_its_mapem_ts_msgs/LaneDataAttribute.h>
namespace mapem_ts_msgs = etsi_its_mapem_ts_msgs;
#else
#include <etsi_its_mapem_ts_msgs/msg/lane_data_attribute.hpp>
namespace mapem_ts_msgs = etsi_its_mapem_ts_msgs::msg;
#endif


namespace etsi_its_mapem_ts_conversion {

void toRos_LaneDataAttribute(const mapem_ts_LaneDataAttribute_t& in, mapem_ts_msgs::LaneDataAttribute& out) {
  switch (in.present) {
  case mapem_ts_LaneDataAttribute_PR_pathEndPointAngle:
    toRos_DeltaAngle(in.choice.pathEndPointAngle, out.path_end_point_angle);
    out.choice = mapem_ts_msgs::LaneDataAttribute::CHOICE_PATH_END_POINT_ANGLE;
    break;
  case mapem_ts_LaneDataAttribute_PR_laneCrownPointCenter:
    toRos_RoadwayCrownAngle(in.choice.laneCrownPointCenter, out.lane_crown_point_center);
    out.choice = mapem_ts_msgs::LaneDataAttribute::CHOICE_LANE_CROWN_POINT_CENTER;
    break;
  case mapem_ts_LaneDataAttribute_PR_laneCrownPointLeft:
    toRos_RoadwayCrownAngle(in.choice.laneCrownPointLeft, out.lane_crown_point_left);
    out.choice = mapem_ts_msgs::LaneDataAttribute::CHOICE_LANE_CROWN_POINT_LEFT;
    break;
  case mapem_ts_LaneDataAttribute_PR_laneCrownPointRight:
    toRos_RoadwayCrownAngle(in.choice.laneCrownPointRight, out.lane_crown_point_right);
    out.choice = mapem_ts_msgs::LaneDataAttribute::CHOICE_LANE_CROWN_POINT_RIGHT;
    break;
  case mapem_ts_LaneDataAttribute_PR_laneAngle:
    toRos_MergeDivergeNodeAngle(in.choice.laneAngle, out.lane_angle);
    out.choice = mapem_ts_msgs::LaneDataAttribute::CHOICE_LANE_ANGLE;
    break;
  case mapem_ts_LaneDataAttribute_PR_speedLimits:
    toRos_SpeedLimitList(in.choice.speedLimits, out.speed_limits);
    out.choice = mapem_ts_msgs::LaneDataAttribute::CHOICE_SPEED_LIMITS;
    break;
  default: break;
  }
}

void toStruct_LaneDataAttribute(const mapem_ts_msgs::LaneDataAttribute& in, mapem_ts_LaneDataAttribute_t& out) {
  memset(&out, 0, sizeof(mapem_ts_LaneDataAttribute_t));

  switch (in.choice) {
  case mapem_ts_msgs::LaneDataAttribute::CHOICE_PATH_END_POINT_ANGLE:
    toStruct_DeltaAngle(in.path_end_point_angle, out.choice.pathEndPointAngle);
    out.present = mapem_ts_LaneDataAttribute_PR::mapem_ts_LaneDataAttribute_PR_pathEndPointAngle;
    break;
  case mapem_ts_msgs::LaneDataAttribute::CHOICE_LANE_CROWN_POINT_CENTER:
    toStruct_RoadwayCrownAngle(in.lane_crown_point_center, out.choice.laneCrownPointCenter);
    out.present = mapem_ts_LaneDataAttribute_PR::mapem_ts_LaneDataAttribute_PR_laneCrownPointCenter;
    break;
  case mapem_ts_msgs::LaneDataAttribute::CHOICE_LANE_CROWN_POINT_LEFT:
    toStruct_RoadwayCrownAngle(in.lane_crown_point_left, out.choice.laneCrownPointLeft);
    out.present = mapem_ts_LaneDataAttribute_PR::mapem_ts_LaneDataAttribute_PR_laneCrownPointLeft;
    break;
  case mapem_ts_msgs::LaneDataAttribute::CHOICE_LANE_CROWN_POINT_RIGHT:
    toStruct_RoadwayCrownAngle(in.lane_crown_point_right, out.choice.laneCrownPointRight);
    out.present = mapem_ts_LaneDataAttribute_PR::mapem_ts_LaneDataAttribute_PR_laneCrownPointRight;
    break;
  case mapem_ts_msgs::LaneDataAttribute::CHOICE_LANE_ANGLE:
    toStruct_MergeDivergeNodeAngle(in.lane_angle, out.choice.laneAngle);
    out.present = mapem_ts_LaneDataAttribute_PR::mapem_ts_LaneDataAttribute_PR_laneAngle;
    break;
  case mapem_ts_msgs::LaneDataAttribute::CHOICE_SPEED_LIMITS:
    toStruct_SpeedLimitList(in.speed_limits, out.choice.speedLimits);
    out.present = mapem_ts_LaneDataAttribute_PR::mapem_ts_LaneDataAttribute_PR_speedLimits;
    break;
  default: break;
  }
}

}