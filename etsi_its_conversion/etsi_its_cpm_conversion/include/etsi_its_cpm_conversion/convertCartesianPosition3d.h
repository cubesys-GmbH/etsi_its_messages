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

#include <etsi_its_cpm_coding/cpm_CartesianPosition3d.h>
#include <etsi_its_cpm_conversion/convertCartesianCoordinate.h>
#ifdef ROS1
#include <etsi_its_cpm_msgs/CartesianPosition3d.h>
namespace cpm_msgs = etsi_its_cpm_msgs;
#else
#include <etsi_its_cpm_msgs/msg/cartesian_position3d.hpp>
namespace cpm_msgs = etsi_its_cpm_msgs::msg;
#endif


namespace etsi_its_cpm_conversion {

void toRos_CartesianPosition3d(const cpm_CartesianPosition3d_t& in, cpm_msgs::CartesianPosition3d& out) {
  toRos_CartesianCoordinate(in.xCoordinate, out.x_coordinate);
  toRos_CartesianCoordinate(in.yCoordinate, out.y_coordinate);
  if (in.zCoordinate) {
    toRos_CartesianCoordinate(*in.zCoordinate, out.z_coordinate);
    out.z_coordinate_is_present = true;
  }
}

void toStruct_CartesianPosition3d(const cpm_msgs::CartesianPosition3d& in, cpm_CartesianPosition3d_t& out) {
  memset(&out, 0, sizeof(cpm_CartesianPosition3d_t));

  toStruct_CartesianCoordinate(in.x_coordinate, out.xCoordinate);
  toStruct_CartesianCoordinate(in.y_coordinate, out.yCoordinate);
  if (in.z_coordinate_is_present) {
    out.zCoordinate = (cpm_CartesianCoordinate_t*) calloc(1, sizeof(cpm_CartesianCoordinate_t));
    toStruct_CartesianCoordinate(in.z_coordinate, *out.zCoordinate);
  }
}

}
