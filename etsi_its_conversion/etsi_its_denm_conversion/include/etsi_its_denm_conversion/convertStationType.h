#pragma once

#include <etsi_its_denm_coding/StationType.h>
#include <etsi_its_denm_conversion/primitives/convertINTEGER.h>
#ifdef ROS2
#include <etsi_its_denm_msgs/msg/station_type.hpp>
namespace denm_msgs = etsi_its_denm_msgs::msg;
#else
#include <etsi_its_denm_msgs/StationType.h>
namespace denm_msgs = etsi_its_denm_msgs;
#endif


namespace etsi_its_denm_conversion {

void toRos_StationType(const StationType_t& in, denm_msgs::StationType& out) {

  toRos_INTEGER(in, out.value);
}

void toStruct_StationType(const denm_msgs::StationType& in, StationType_t& out) {

  memset(&out, 0, sizeof(StationType_t));
  toStruct_INTEGER(in.value, out);
}

}