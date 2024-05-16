//// OCTET-STRING PtActivationData


#pragma once

#include <stdexcept>

#include <etsi_its_denm_coding/PtActivationData.h>
#include <etsi_its_denm_coding/OCTET_STRING.h>
#include <etsi_its_primitives_conversion/convertOCTET_STRING.h>
#ifdef ROS1
#include <etsi_its_denm_msgs/PtActivationData.h>
namespace denm_msgs = etsi_its_denm_msgs;
#else
#include <etsi_its_denm_msgs/msg/pt_activation_data.hpp>
namespace denm_msgs = etsi_its_denm_msgs::msg;
#endif


namespace etsi_its_denm_conversion {

void toRos_PtActivationData(const PtActivationData_t& in, denm_msgs::PtActivationData& out) {
  etsi_its_primitives_conversion::toRos_OCTET_STRING(in, out.value);
}

void toStruct_PtActivationData(const denm_msgs::PtActivationData& in, PtActivationData_t& out) {
  memset(&out, 0, sizeof(PtActivationData_t));

  etsi_its_primitives_conversion::toStruct_OCTET_STRING(in.value, out);
}

}
