//// INTEGER Temperature


#pragma once

#include <stdexcept>

#include <etsi_its_cam_coding/Temperature.h>
#include <etsi_its_cam_coding/INTEGER.h>
#include <etsi_its_primitives_conversion/convertINTEGER.h>
#ifdef ROS1
#include <etsi_its_cam_msgs/Temperature.h>
namespace cam_msgs = etsi_its_cam_msgs;
#else
#include <etsi_its_cam_msgs/msg/temperature.hpp>
namespace cam_msgs = etsi_its_cam_msgs::msg;
#endif


namespace etsi_its_cam_conversion {

void toRos_Temperature(const Temperature_t& in, cam_msgs::Temperature& out) {
  etsi_its_primitives_conversion::toRos_INTEGER(in, out.value);
}

void toStruct_Temperature(const cam_msgs::Temperature& in, Temperature_t& out) {
  memset(&out, 0, sizeof(Temperature_t));

  etsi_its_primitives_conversion::toStruct_INTEGER(in.value, out);
}

}
