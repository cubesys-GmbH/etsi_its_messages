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

#include <etsi_its_cpm_ts_coding/cpm_ts_Velocity3dWithConfidence.h>
#include <etsi_its_cpm_ts_conversion/convertVelocityCartesian.h>
#include <etsi_its_cpm_ts_conversion/convertVelocityPolarWithZ.h>
#ifdef ROS1
#include <etsi_its_cpm_ts_msgs/Velocity3dWithConfidence.h>
namespace cpm_ts_msgs = etsi_its_cpm_ts_msgs;
#else
#include <etsi_its_cpm_ts_msgs/msg/velocity3d_with_confidence.hpp>
namespace cpm_ts_msgs = etsi_its_cpm_ts_msgs::msg;
#endif


namespace etsi_its_cpm_ts_conversion {

void toRos_Velocity3dWithConfidence(const cpm_ts_Velocity3dWithConfidence_t& in, cpm_ts_msgs::Velocity3dWithConfidence& out) {
  switch (in.present) {
  case cpm_ts_Velocity3dWithConfidence_PR_polarVelocity:
    toRos_VelocityPolarWithZ(in.choice.polarVelocity, out.polar_velocity);
    out.choice = cpm_ts_msgs::Velocity3dWithConfidence::CHOICE_POLAR_VELOCITY;
    break;
  case cpm_ts_Velocity3dWithConfidence_PR_cartesianVelocity:
    toRos_VelocityCartesian(in.choice.cartesianVelocity, out.cartesian_velocity);
    out.choice = cpm_ts_msgs::Velocity3dWithConfidence::CHOICE_CARTESIAN_VELOCITY;
    break;
  default: break;
  }
}

void toStruct_Velocity3dWithConfidence(const cpm_ts_msgs::Velocity3dWithConfidence& in, cpm_ts_Velocity3dWithConfidence_t& out) {
  memset(&out, 0, sizeof(cpm_ts_Velocity3dWithConfidence_t));

  switch (in.choice) {
  case cpm_ts_msgs::Velocity3dWithConfidence::CHOICE_POLAR_VELOCITY:
    toStruct_VelocityPolarWithZ(in.polar_velocity, out.choice.polarVelocity);
    out.present = cpm_ts_Velocity3dWithConfidence_PR::cpm_ts_Velocity3dWithConfidence_PR_polarVelocity;
    break;
  case cpm_ts_msgs::Velocity3dWithConfidence::CHOICE_CARTESIAN_VELOCITY:
    toStruct_VelocityCartesian(in.cartesian_velocity, out.choice.cartesianVelocity);
    out.present = cpm_ts_Velocity3dWithConfidence_PR::cpm_ts_Velocity3dWithConfidence_PR_cartesianVelocity;
    break;
  default: break;
  }
}

}
