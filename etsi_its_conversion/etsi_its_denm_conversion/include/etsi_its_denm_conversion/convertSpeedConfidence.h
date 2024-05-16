//// INTEGER SpeedConfidence


#pragma once

#include <stdexcept>

#include <etsi_its_denm_coding/SpeedConfidence.h>
#include <etsi_its_denm_coding/INTEGER.h>
#include <etsi_its_primitives_conversion/convertINTEGER.h>
#ifdef ROS1
#include <etsi_its_denm_msgs/SpeedConfidence.h>
namespace denm_msgs = etsi_its_denm_msgs;
#else
#include <etsi_its_denm_msgs/msg/speed_confidence.hpp>
namespace denm_msgs = etsi_its_denm_msgs::msg;
#endif


namespace etsi_its_denm_conversion {

void toRos_SpeedConfidence(const SpeedConfidence_t& in, denm_msgs::SpeedConfidence& out) {
  etsi_its_primitives_conversion::toRos_INTEGER(in, out.value);
}

void toStruct_SpeedConfidence(const denm_msgs::SpeedConfidence& in, SpeedConfidence_t& out) {
  memset(&out, 0, sizeof(SpeedConfidence_t));

  etsi_its_primitives_conversion::toStruct_INTEGER(in.value, out);
}

}
