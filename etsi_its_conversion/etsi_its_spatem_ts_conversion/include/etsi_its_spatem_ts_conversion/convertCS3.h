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

#include <etsi_its_spatem_ts_coding/spatem_ts_CS3.h>
#include <etsi_its_spatem_ts_conversion/convertGeoGraphicalLimit.h>
#include <etsi_its_spatem_ts_conversion/convertServiceApplicationLimit.h>
#include <etsi_its_spatem_ts_conversion/convertStartTime.h>
#include <etsi_its_spatem_ts_conversion/convertStopTime.h>
#ifdef ROS1
#include <etsi_its_spatem_ts_msgs/CS3.h>
namespace spatem_ts_msgs = etsi_its_spatem_ts_msgs;
#else
#include <etsi_its_spatem_ts_msgs/msg/cs3.hpp>
namespace spatem_ts_msgs = etsi_its_spatem_ts_msgs::msg;
#endif


namespace etsi_its_spatem_ts_conversion {

void toRos_CS3(const spatem_ts_CS3_t& in, spatem_ts_msgs::CS3& out) {
  toRos_StartTime(in.startTime, out.start_time);
  toRos_StopTime(in.stopTime, out.stop_time);
  toRos_GeoGraphicalLimit(in.geographLimit, out.geograph_limit);
  toRos_ServiceApplicationLimit(in.serviceAppLimit, out.service_app_limit);
}

void toStruct_CS3(const spatem_ts_msgs::CS3& in, spatem_ts_CS3_t& out) {
  memset(&out, 0, sizeof(spatem_ts_CS3_t));

  toStruct_StartTime(in.start_time, out.startTime);
  toStruct_StopTime(in.stop_time, out.stopTime);
  toStruct_GeoGraphicalLimit(in.geograph_limit, out.geographLimit);
  toStruct_ServiceApplicationLimit(in.service_app_limit, out.serviceAppLimit);
}

}
