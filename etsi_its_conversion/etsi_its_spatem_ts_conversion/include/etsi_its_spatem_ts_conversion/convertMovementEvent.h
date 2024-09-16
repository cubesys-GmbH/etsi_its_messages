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

#include <etsi_its_spatem_ts_coding/spatem_ts_MovementEvent.h>
#include <etsi_its_spatem_ts_coding/regional[].h>
#include <etsi_its_primitives_conversion/convertregional[].h>
#include <etsi_its_spatem_ts_conversion/convertAdvisorySpeedList.h>
#include <etsi_its_spatem_ts_conversion/convertMovementPhaseState.h>
#include <etsi_its_spatem_ts_conversion/convertTimeChangeDetails.h>
#ifdef ROS1
#include <etsi_its_spatem_ts_msgs/MovementEvent.h>
namespace spatem_ts_msgs = etsi_its_spatem_ts_msgs;
#else
#include <etsi_its_spatem_ts_msgs/msg/movement_event.hpp>
namespace spatem_ts_msgs = etsi_its_spatem_ts_msgs::msg;
#endif


namespace etsi_its_spatem_ts_conversion {

void toRos_MovementEvent(const spatem_ts_MovementEvent_t& in, spatem_ts_msgs::MovementEvent& out) {
  toRos_MovementPhaseState(in.eventState, out.event_state);
  if (in.timing) {
    toRos_TimeChangeDetails(*in.timing, out.timing);
    out.timing_is_present = true;
  }
  if (in.speeds) {
    toRos_AdvisorySpeedList(*in.speeds, out.speeds);
    out.speeds_is_present = true;
  }
  if (in.regional) {
    etsi_its_primitives_conversion::toRos_regional[](*in.regional, out.regional);
    out.regional_is_present = true;
  }
}

void toStruct_MovementEvent(const spatem_ts_msgs::MovementEvent& in, spatem_ts_MovementEvent_t& out) {
  memset(&out, 0, sizeof(spatem_ts_MovementEvent_t));

  toStruct_MovementPhaseState(in.event_state, out.eventState);
  if (in.timing_is_present) {
    out.timing = (spatem_ts_TimeChangeDetails_t*) calloc(1, sizeof(spatem_ts_TimeChangeDetails_t));
    toStruct_TimeChangeDetails(in.timing, *out.timing);
  }
  if (in.speeds_is_present) {
    out.speeds = (spatem_ts_AdvisorySpeedList_t*) calloc(1, sizeof(spatem_ts_AdvisorySpeedList_t));
    toStruct_AdvisorySpeedList(in.speeds, *out.speeds);
  }
  if (in.regional_is_present) {
    out.regional = (regional[]_t*) calloc(1, sizeof(regional[]_t));
    etsi_its_primitives_conversion::toStruct_regional[](in.regional, *out.regional);
  }
}

}
