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

#include <etsi_its_cam_ts_coding/cam_ts_LowFrequencyContainer.h>
#include <etsi_its_cam_ts_conversion/convertBasicVehicleContainerLowFrequency.h>
#ifdef ROS1
#include <etsi_its_cam_ts_msgs/LowFrequencyContainer.h>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs;
#else
#include <etsi_its_cam_ts_msgs/msg/low_frequency_container.hpp>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs::msg;
#endif


namespace etsi_its_cam_ts_conversion {

void toRos_LowFrequencyContainer(const cam_ts_LowFrequencyContainer_t& in, cam_ts_msgs::LowFrequencyContainer& out) {
  switch (in.present) {
  case cam_ts_LowFrequencyContainer_PR_basicVehicleContainerLowFrequency:
    toRos_BasicVehicleContainerLowFrequency(in.choice.basicVehicleContainerLowFrequency, out.basic_vehicle_container_low_frequency);
    out.choice = cam_ts_msgs::LowFrequencyContainer::CHOICE_BASIC_VEHICLE_CONTAINER_LOW_FREQUENCY;
    break;
  default: break;
  }
}

void toStruct_LowFrequencyContainer(const cam_ts_msgs::LowFrequencyContainer& in, cam_ts_LowFrequencyContainer_t& out) {
  memset(&out, 0, sizeof(cam_ts_LowFrequencyContainer_t));

  switch (in.choice) {
  case cam_ts_msgs::LowFrequencyContainer::CHOICE_BASIC_VEHICLE_CONTAINER_LOW_FREQUENCY:
    toStruct_BasicVehicleContainerLowFrequency(in.basic_vehicle_container_low_frequency, out.choice.basicVehicleContainerLowFrequency);
    out.present = cam_ts_LowFrequencyContainer_PR::cam_ts_LowFrequencyContainer_PR_basicVehicleContainerLowFrequency;
    break;
  default: break;
  }
}

}
