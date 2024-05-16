//// SEQUENCE DangerousGoodsExtended


#pragma once

#include <stdexcept>

#include <etsi_its_cam_coding/DangerousGoodsExtended.h>
#include <etsi_its_cam_conversion/convertDangerousGoodsBasic.h>
#include <etsi_its_cam_coding/INTEGER.h>
#include <etsi_its_primitives_conversion/convertINTEGER.h>
#include <etsi_its_cam_coding/BOOLEAN.h>
#include <etsi_its_primitives_conversion/convertBOOLEAN.h>
#include <etsi_its_cam_coding/BOOLEAN.h>
#include <etsi_its_primitives_conversion/convertBOOLEAN.h>
#include <etsi_its_cam_coding/BOOLEAN.h>
#include <etsi_its_primitives_conversion/convertBOOLEAN.h>
#include <etsi_its_cam_coding/IA5String.h>
#include <etsi_its_primitives_conversion/convertIA5String.h>
#include <etsi_its_cam_conversion/convertPhoneNumber.h>
#include <etsi_its_cam_coding/UTF8String.h>
#include <etsi_its_primitives_conversion/convertUTF8String.h>
#ifdef ROS1
#include <etsi_its_cam_msgs/DangerousGoodsExtended.h>
namespace cam_msgs = etsi_its_cam_msgs;
#else
#include <etsi_its_cam_msgs/msg/dangerous_goods_extended.hpp>
namespace cam_msgs = etsi_its_cam_msgs::msg;
#endif


namespace etsi_its_cam_conversion {

void toRos_DangerousGoodsExtended(const DangerousGoodsExtended_t& in, cam_msgs::DangerousGoodsExtended& out) {
  toRos_DangerousGoodsBasic(in.dangerousGoodsType, out.dangerous_goods_type);
  etsi_its_primitives_conversion::toRos_INTEGER(in.unNumber, out.un_number);
  etsi_its_primitives_conversion::toRos_BOOLEAN(in.elevatedTemperature, out.elevated_temperature);
  etsi_its_primitives_conversion::toRos_BOOLEAN(in.tunnelsRestricted, out.tunnels_restricted);
  etsi_its_primitives_conversion::toRos_BOOLEAN(in.limitedQuantity, out.limited_quantity);
  if (in.emergencyActionCode) {
    etsi_its_primitives_conversion::toRos_IA5String(*in.emergencyActionCode, out.emergency_action_code);
    out.emergency_action_code_is_present = true;
  }
  if (in.phoneNumber) {
    toRos_PhoneNumber(*in.phoneNumber, out.phone_number);
    out.phone_number_is_present = true;
  }
  if (in.companyName) {
    etsi_its_primitives_conversion::toRos_UTF8String(*in.companyName, out.company_name);
    out.company_name_is_present = true;
  }
}

void toStruct_DangerousGoodsExtended(const cam_msgs::DangerousGoodsExtended& in, DangerousGoodsExtended_t& out) {
  memset(&out, 0, sizeof(DangerousGoodsExtended_t));

  toStruct_DangerousGoodsBasic(in.dangerous_goods_type, out.dangerousGoodsType);
  etsi_its_primitives_conversion::toStruct_INTEGER(in.un_number, out.unNumber);
  etsi_its_primitives_conversion::toStruct_BOOLEAN(in.elevated_temperature, out.elevatedTemperature);
  etsi_its_primitives_conversion::toStruct_BOOLEAN(in.tunnels_restricted, out.tunnelsRestricted);
  etsi_its_primitives_conversion::toStruct_BOOLEAN(in.limited_quantity, out.limitedQuantity);
  if (in.emergency_action_code_is_present) {
    out.emergencyActionCode = (IA5String_t*) calloc(1, sizeof(IA5String_t));
    etsi_its_primitives_conversion::toStruct_IA5String(in.emergency_action_code, *out.emergencyActionCode);
  }
  if (in.phone_number_is_present) {
    out.phoneNumber = (PhoneNumber_t*) calloc(1, sizeof(PhoneNumber_t));
    toStruct_PhoneNumber(in.phone_number, *out.phoneNumber);
  }
  if (in.company_name_is_present) {
    out.companyName = (UTF8String_t*) calloc(1, sizeof(UTF8String_t));
    etsi_its_primitives_conversion::toStruct_UTF8String(in.company_name, *out.companyName);
  }
}

}
