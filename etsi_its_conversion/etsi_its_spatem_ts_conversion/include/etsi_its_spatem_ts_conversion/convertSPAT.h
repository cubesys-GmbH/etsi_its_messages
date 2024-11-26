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

#include <etsi_its_spatem_ts_coding/spatem_ts_SPAT.h>
#include <etsi_its_spatem_ts_conversion/convertDescriptiveName.h>
#include <etsi_its_spatem_ts_conversion/convertIntersectionStateList.h>
#include <etsi_its_spatem_ts_conversion/convertMinuteOfTheYear.h>
#ifdef ROS1
#include <etsi_its_spatem_ts_msgs/SPAT.h>
namespace spatem_ts_msgs = etsi_its_spatem_ts_msgs;
#else
#include <etsi_its_spatem_ts_msgs/msg/spat.hpp>
namespace spatem_ts_msgs = etsi_its_spatem_ts_msgs::msg;
#endif


namespace etsi_its_spatem_ts_conversion {

void toRos_SPAT(const spatem_ts_SPAT_t& in, spatem_ts_msgs::SPAT& out) {
  if (in.timeStamp) {
    toRos_MinuteOfTheYear(*in.timeStamp, out.time_stamp);
    out.time_stamp_is_present = true;
  }
  if (in.name) {
    toRos_DescriptiveName(*in.name, out.name);
    out.name_is_present = true;
  }
  toRos_IntersectionStateList(in.intersections, out.intersections);
}

void toStruct_SPAT(const spatem_ts_msgs::SPAT& in, spatem_ts_SPAT_t& out) {
  memset(&out, 0, sizeof(spatem_ts_SPAT_t));

  if (in.time_stamp_is_present) {
    out.timeStamp = (spatem_ts_MinuteOfTheYear_t*) calloc(1, sizeof(spatem_ts_MinuteOfTheYear_t));
    toStruct_MinuteOfTheYear(in.time_stamp, *out.timeStamp);
  }
  if (in.name_is_present) {
    out.name = (spatem_ts_DescriptiveName_t*) calloc(1, sizeof(spatem_ts_DescriptiveName_t));
    toStruct_DescriptiveName(in.name, *out.name);
  }
  toStruct_IntersectionStateList(in.intersections, out.intersections);
}

}
