//// ENUMERATED TrafficRule


#pragma once

#include <stdexcept>

#include <etsi_its_cam_coding/TrafficRule.h>

#ifdef ROS1
#include <etsi_its_cam_msgs/TrafficRule.h>
namespace cam_msgs = etsi_its_cam_msgs;
#else
#include <etsi_its_cam_msgs/msg/traffic_rule.hpp>
namespace cam_msgs = etsi_its_cam_msgs::msg;
#endif


namespace etsi_its_cam_conversion {

void toRos_TrafficRule(const TrafficRule_t& in, cam_msgs::TrafficRule& out) {
  out.value = in;
}

void toStruct_TrafficRule(const cam_msgs::TrafficRule& in, TrafficRule_t& out) {
  memset(&out, 0, sizeof(TrafficRule_t));

  out = in.value;
}

}
