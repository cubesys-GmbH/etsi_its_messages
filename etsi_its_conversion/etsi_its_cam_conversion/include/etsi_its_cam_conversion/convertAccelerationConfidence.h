//// INTEGER AccelerationConfidence


#pragma once

#include <stdexcept>

#include <etsi_its_cam_coding/AccelerationConfidence.h>
#include <etsi_its_cam_coding/INTEGER.h>
#include <etsi_its_primitives_conversion/convertINTEGER.h>
#ifdef ROS1
#include <etsi_its_cam_msgs/AccelerationConfidence.h>
namespace cam_msgs = etsi_its_cam_msgs;
#else
#include <etsi_its_cam_msgs/msg/acceleration_confidence.hpp>
namespace cam_msgs = etsi_its_cam_msgs::msg;
#endif


namespace etsi_its_cam_conversion {

void toRos_AccelerationConfidence(const AccelerationConfidence_t& in, cam_msgs::AccelerationConfidence& out) {
  etsi_its_primitives_conversion::toRos_INTEGER(in, out.value);
}

void toStruct_AccelerationConfidence(const cam_msgs::AccelerationConfidence& in, AccelerationConfidence_t& out) {
  memset(&out, 0, sizeof(AccelerationConfidence_t));

  etsi_its_primitives_conversion::toStruct_INTEGER(in.value, out);
}

}
