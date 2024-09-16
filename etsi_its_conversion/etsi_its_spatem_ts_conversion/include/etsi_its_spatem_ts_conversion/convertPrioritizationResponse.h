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

#include <etsi_its_spatem_ts_coding/spatem_ts_PrioritizationResponse.h>
#include <etsi_its_spatem_ts_conversion/convertPrioritizationResponseStatus.h>
#include <etsi_its_spatem_ts_conversion/convertSignalGroupID.h>
#include <etsi_its_spatem_ts_conversion/convertStationID.h>
#ifdef ROS1
#include <etsi_its_spatem_ts_msgs/PrioritizationResponse.h>
namespace spatem_ts_msgs = etsi_its_spatem_ts_msgs;
#else
#include <etsi_its_spatem_ts_msgs/msg/prioritization_response.hpp>
namespace spatem_ts_msgs = etsi_its_spatem_ts_msgs::msg;
#endif


namespace etsi_its_spatem_ts_conversion {

void toRos_PrioritizationResponse(const spatem_ts_PrioritizationResponse_t& in, spatem_ts_msgs::PrioritizationResponse& out) {
  toRos_StationID(in.stationID, out.station_id);
  toRos_PrioritizationResponseStatus(in.priorState, out.prior_state);
  toRos_SignalGroupID(in.signalGroup, out.signal_group);
}

void toStruct_PrioritizationResponse(const spatem_ts_msgs::PrioritizationResponse& in, spatem_ts_PrioritizationResponse_t& out) {
  memset(&out, 0, sizeof(spatem_ts_PrioritizationResponse_t));

  toStruct_StationID(in.station_id, out.stationID);
  toStruct_PrioritizationResponseStatus(in.prior_state, out.priorState);
  toStruct_SignalGroupID(in.signal_group, out.signalGroup);
}

}
