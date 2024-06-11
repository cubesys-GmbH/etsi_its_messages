/** ============================================================================
MIT License

Copyright (c) 2023 Institute for Automotive Engineering (ika), RWTH Aachen University
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

#include <etsi_its_cam_coding/CoopAwareness.h>
#include <etsi_its_cam_conversion/convertCamParameters.h>
#include <etsi_its_cam_conversion/convertGenerationDeltaTime.h>
#ifdef ROS1
#include <etsi_its_cam_msgs/CoopAwareness.h>
namespace cam_msgs = etsi_its_cam_msgs;
#else
#include <etsi_its_cam_msgs/msg/coop_awareness.hpp>
namespace cam_msgs = etsi_its_cam_msgs::msg;
#endif


namespace etsi_its_cam_conversion {

void toRos_CoopAwareness(const CoopAwareness_t& in, cam_msgs::CoopAwareness& out) {
  toRos_GenerationDeltaTime(in.generationDeltaTime, out.generation_delta_time);
  toRos_CamParameters(in.camParameters, out.cam_parameters);
}

void toStruct_CoopAwareness(const cam_msgs::CoopAwareness& in, CoopAwareness_t& out) {
  memset(&out, 0, sizeof(CoopAwareness_t));

  toStruct_GenerationDeltaTime(in.generation_delta_time, out.generationDeltaTime);
  toStruct_CamParameters(in.cam_parameters, out.camParameters);
}

}
