//// OCTET-STRING PtActivationData


#pragma once

#include <stdexcept>

#include <etsi_its_cam_coding/PtActivationData.h>
#include <etsi_its_cam_coding/OCTET_STRING.h>
#include <etsi_its_primitives_conversion/convertOCTET_STRING.h>
#ifdef ROS1
#include <etsi_its_cam_msgs/PtActivationData.h>
namespace cam_msgs = etsi_its_cam_msgs;
#else
#include <etsi_its_cam_msgs/msg/pt_activation_data.hpp>
namespace cam_msgs = etsi_its_cam_msgs::msg;
#endif


namespace etsi_its_cam_conversion {

void toRos_PtActivationData(const PtActivationData_t& in, cam_msgs::PtActivationData& out) {
  etsi_its_primitives_conversion::toRos_OCTET_STRING(in, out.value);
}

void toStruct_PtActivationData(const cam_msgs::PtActivationData& in, PtActivationData_t& out) {
  memset(&out, 0, sizeof(PtActivationData_t));

  etsi_its_primitives_conversion::toStruct_OCTET_STRING(in.value, out);
}

}
