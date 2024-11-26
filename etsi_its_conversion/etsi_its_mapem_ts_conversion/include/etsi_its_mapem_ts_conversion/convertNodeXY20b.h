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

#include <etsi_its_mapem_ts_coding/mapem_ts_Node-XY-20b.h>
#include <etsi_its_mapem_ts_conversion/convertOffsetB10.h>
#ifdef ROS1
#include <etsi_its_mapem_ts_msgs/NodeXY20b.h>
namespace mapem_ts_msgs = etsi_its_mapem_ts_msgs;
#else
#include <etsi_its_mapem_ts_msgs/msg/node_xy20b.hpp>
namespace mapem_ts_msgs = etsi_its_mapem_ts_msgs::msg;
#endif


namespace etsi_its_mapem_ts_conversion {

void toRos_NodeXY20b(const mapem_ts_Node_XY_20b_t& in, mapem_ts_msgs::NodeXY20b& out) {
  toRos_OffsetB10(in.x, out.x);
  toRos_OffsetB10(in.y, out.y);
}

void toStruct_NodeXY20b(const mapem_ts_msgs::NodeXY20b& in, mapem_ts_Node_XY_20b_t& out) {
  memset(&out, 0, sizeof(mapem_ts_Node_XY_20b_t));

  toStruct_OffsetB10(in.x, out.x);
  toStruct_OffsetB10(in.y, out.y);
}

}
