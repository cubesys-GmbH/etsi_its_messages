#pragma once

#include <etsi_its_cam_coding/ItsPduHeader.h>
#include <etsi_its_cam_conversion/primitives/convertINTEGER.h>
#include <etsi_its_cam_conversion/primitives/convertINTEGER.h>
#include <etsi_its_cam_conversion/convertStationID.h>
#include <etsi_its_cam_msgs/ItsPduHeader.h>


namespace etsi_its_cam_conversion {

void toRos_ItsPduHeader(const ItsPduHeader_t& in, etsi_its_cam_msgs::ItsPduHeader& out) {

  toRos_INTEGER(in.protocol_version, out.protocol_version);
  toRos_INTEGER(in.message_i_d, out.message_i_d);
  toRos_StationID(in.station_i_d, out.station_i_d);
}

void toStruct_ItsPduHeader(const etsi_its_cam_msgs::ItsPduHeader& in, ItsPduHeader_t& out) {
    
  memset(&out, 0, sizeof(ItsPduHeader_t));

  toStruct_INTEGER(in.protocol_version, out.protocol_version);
  toStruct_INTEGER(in.message_i_d, out.message_i_d);
  toStruct_StationID(in.station_i_d, out.station_i_d);
}

}