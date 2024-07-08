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

#include <etsi_its_cpm_coding/cpm_LongitudinalLanePosition.h>
#include <etsi_its_cpm_conversion/convertLongitudinalLanePositionConfidence.h>
#include <etsi_its_cpm_conversion/convertLongitudinalLanePositionValue.h>
#ifdef ROS1
#include <etsi_its_cpm_msgs/LongitudinalLanePosition.h>
namespace cpm_msgs = etsi_its_cpm_msgs;
#else
#include <etsi_its_cpm_msgs/msg/longitudinal_lane_position.hpp>
namespace cpm_msgs = etsi_its_cpm_msgs::msg;
#endif


namespace etsi_its_cpm_conversion {

void toRos_LongitudinalLanePosition(const cpm_LongitudinalLanePosition_t& in, cpm_msgs::LongitudinalLanePosition& out) {
  toRos_LongitudinalLanePositionValue(in.longitudinalLanePositionValue, out.longitudinal_lane_position_value);
  toRos_LongitudinalLanePositionConfidence(in.longitudinalLanePositionConfidence, out.longitudinal_lane_position_confidence);
}

void toStruct_LongitudinalLanePosition(const cpm_msgs::LongitudinalLanePosition& in, cpm_LongitudinalLanePosition_t& out) {
  memset(&out, 0, sizeof(cpm_LongitudinalLanePosition_t));

  toStruct_LongitudinalLanePositionValue(in.longitudinal_lane_position_value, out.longitudinalLanePositionValue);
  toStruct_LongitudinalLanePositionConfidence(in.longitudinal_lane_position_confidence, out.longitudinalLanePositionConfidence);
}

}
