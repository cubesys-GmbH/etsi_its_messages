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

#include <etsi_its_spatem_ts_coding/spatem_ts_AdvisorySpeed.h>
#include <etsi_its_spatem_ts_conversion/convertAdvisorySpeedType.h>
#include <etsi_its_spatem_ts_conversion/convertRestrictionClassID.h>
#include <etsi_its_spatem_ts_conversion/convertSpeedAdvice.h>
#include <etsi_its_spatem_ts_conversion/convertSpeedConfidenceDSRC.h>
#include <etsi_its_spatem_ts_conversion/convertZoneLength.h>
#ifdef ROS1
#include <etsi_its_spatem_ts_msgs/AdvisorySpeed.h>
namespace spatem_ts_msgs = etsi_its_spatem_ts_msgs;
#else
#include <etsi_its_spatem_ts_msgs/msg/advisory_speed.hpp>
namespace spatem_ts_msgs = etsi_its_spatem_ts_msgs::msg;
#endif


namespace etsi_its_spatem_ts_conversion {

void toRos_AdvisorySpeed(const spatem_ts_AdvisorySpeed_t& in, spatem_ts_msgs::AdvisorySpeed& out) {
  toRos_AdvisorySpeedType(in.type, out.type);
  if (in.speed) {
    toRos_SpeedAdvice(*in.speed, out.speed);
    out.speed_is_present = true;
  }
  if (in.confidence) {
    toRos_SpeedConfidenceDSRC(*in.confidence, out.confidence);
    out.confidence_is_present = true;
  }
  if (in.distance) {
    toRos_ZoneLength(*in.distance, out.distance);
    out.distance_is_present = true;
  }
  if (in.Class) {
    toRos_RestrictionClassID(*in.Class, out.cls);
    out.cls_is_present = true;
  }
}

void toStruct_AdvisorySpeed(const spatem_ts_msgs::AdvisorySpeed& in, spatem_ts_AdvisorySpeed_t& out) {
  memset(&out, 0, sizeof(spatem_ts_AdvisorySpeed_t));

  toStruct_AdvisorySpeedType(in.type, out.type);
  if (in.speed_is_present) {
    out.speed = (spatem_ts_SpeedAdvice_t*) calloc(1, sizeof(spatem_ts_SpeedAdvice_t));
    toStruct_SpeedAdvice(in.speed, *out.speed);
  }
  if (in.confidence_is_present) {
    out.confidence = (spatem_ts_SpeedConfidenceDSRC_t*) calloc(1, sizeof(spatem_ts_SpeedConfidenceDSRC_t));
    toStruct_SpeedConfidenceDSRC(in.confidence, *out.confidence);
  }
  if (in.distance_is_present) {
    out.distance = (spatem_ts_ZoneLength_t*) calloc(1, sizeof(spatem_ts_ZoneLength_t));
    toStruct_ZoneLength(in.distance, *out.distance);
  }
  if (in.cls_is_present) {
    out.Class = (spatem_ts_RestrictionClassID_t*) calloc(1, sizeof(spatem_ts_RestrictionClassID_t));
    toStruct_RestrictionClassID(in.cls, *out.Class);
  }
}

}