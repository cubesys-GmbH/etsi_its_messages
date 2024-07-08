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

#include <etsi_its_cpm_coding/cpm_YawRate.h>
#include <etsi_its_cpm_conversion/convertYawRateConfidence.h>
#include <etsi_its_cpm_conversion/convertYawRateValue.h>
#ifdef ROS1
#include <etsi_its_cpm_msgs/YawRate.h>
namespace cpm_msgs = etsi_its_cpm_msgs;
#else
#include <etsi_its_cpm_msgs/msg/yaw_rate.hpp>
namespace cpm_msgs = etsi_its_cpm_msgs::msg;
#endif


namespace etsi_its_cpm_conversion {

void toRos_YawRate(const cpm_YawRate_t& in, cpm_msgs::YawRate& out) {
  toRos_YawRateValue(in.yawRateValue, out.yaw_rate_value);
  toRos_YawRateConfidence(in.yawRateConfidence, out.yaw_rate_confidence);
}

void toStruct_YawRate(const cpm_msgs::YawRate& in, cpm_YawRate_t& out) {
  memset(&out, 0, sizeof(cpm_YawRate_t));

  toStruct_YawRateValue(in.yaw_rate_value, out.yawRateValue);
  toStruct_YawRateConfidence(in.yaw_rate_confidence, out.yawRateConfidence);
}

}
