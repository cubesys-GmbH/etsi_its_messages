//// INTEGER AdverseWeatherConditionExtremeWeatherConditionSubCauseCode


#pragma once

#include <stdexcept>

#include <etsi_its_denm_coding/AdverseWeatherCondition-ExtremeWeatherConditionSubCauseCode.h>
#include <etsi_its_denm_coding/INTEGER.h>
#include <etsi_its_primitives_conversion/convertINTEGER.h>
#ifdef ROS1
#include <etsi_its_denm_msgs/AdverseWeatherConditionExtremeWeatherConditionSubCauseCode.h>
namespace denm_msgs = etsi_its_denm_msgs;
#else
#include <etsi_its_denm_msgs/msg/adverse_weather_condition_extreme_weather_condition_sub_cause_code.hpp>
namespace denm_msgs = etsi_its_denm_msgs::msg;
#endif


namespace etsi_its_denm_conversion {

void toRos_AdverseWeatherConditionExtremeWeatherConditionSubCauseCode(const AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_t& in, denm_msgs::AdverseWeatherConditionExtremeWeatherConditionSubCauseCode& out) {
  etsi_its_primitives_conversion::toRos_INTEGER(in, out.value);
}

void toStruct_AdverseWeatherConditionExtremeWeatherConditionSubCauseCode(const denm_msgs::AdverseWeatherConditionExtremeWeatherConditionSubCauseCode& in, AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_t& out) {
  memset(&out, 0, sizeof(AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode_t));

  etsi_its_primitives_conversion::toStruct_INTEGER(in.value, out);
}

}
