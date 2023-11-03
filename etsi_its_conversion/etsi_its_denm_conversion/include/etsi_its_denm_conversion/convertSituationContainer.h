/** ============================================================================
MIT License

Copyright (c) 2023 Institute for Automotive Engineering (ika), RWTH Aachen University

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

#include <etsi_its_denm_coding/SituationContainer.h>
#include <etsi_its_denm_conversion/convertInformationQuality.h>
#include <etsi_its_denm_conversion/convertCauseCode.h>
#include <etsi_its_denm_conversion/convertCauseCode.h>
#include <etsi_its_denm_conversion/convertEventHistory.h>
#ifdef ROS1
#include <etsi_its_denm_msgs/SituationContainer.h>
namespace denm_msgs = etsi_its_denm_msgs;
#else
#include <etsi_its_denm_msgs/msg/situation_container.hpp>
namespace denm_msgs = etsi_its_denm_msgs::msg;
#endif


namespace etsi_its_denm_conversion {

void toRos_SituationContainer(const SituationContainer_t& in, denm_msgs::SituationContainer& out) {

  toRos_InformationQuality(in.informationQuality, out.information_quality);
  toRos_CauseCode(in.eventType, out.event_type);
  if (in.linkedCause) {
    toRos_CauseCode(*in.linkedCause, out.linked_cause);
    out.linked_cause_is_present = true;
  }

  if (in.eventHistory) {
    toRos_EventHistory(*in.eventHistory, out.event_history);
    out.event_history_is_present = true;
  }

}

void toStruct_SituationContainer(const denm_msgs::SituationContainer& in, SituationContainer_t& out) {

  memset(&out, 0, sizeof(SituationContainer_t));

  toStruct_InformationQuality(in.information_quality, out.informationQuality);
  toStruct_CauseCode(in.event_type, out.eventType);
  if (in.linked_cause_is_present) {
    CauseCode_t linked_cause;
    toStruct_CauseCode(in.linked_cause, linked_cause);
    out.linkedCause = new CauseCode_t(linked_cause);
  }

  if (in.event_history_is_present) {
    EventHistory_t event_history;
    toStruct_EventHistory(in.event_history, event_history);
    out.eventHistory = new EventHistory_t(event_history);
  }

}

}