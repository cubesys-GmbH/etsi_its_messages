#pragma once

#include <etsi_its_cam_coding/CenDsrcTollingZone.h>
#include <etsi_its_cam_msgs/CenDsrcTollingZone.h>
#include <etsi_its_cam_conversion/convertLatitude.h>
#include <etsi_its_cam_conversion/convertLongitude.h>
#include <etsi_its_cam_conversion/convertCenDsrcTollingZoneID.h>

namespace etsi_its_cam_conversion
{
	etsi_its_cam_msgs::CenDsrcTollingZone convert_CenDsrcTollingZonetoRos(const CenDsrcTollingZone_t& _CenDsrcTollingZone_in)
	{
		etsi_its_cam_msgs::CenDsrcTollingZone CenDsrcTollingZone_out;
		CenDsrcTollingZone_out.protectedZoneLatitude = convert_LatitudetoRos(_CenDsrcTollingZone_in.protectedZoneLatitude);
		CenDsrcTollingZone_out.protectedZoneLongitude = convert_LongitudetoRos(_CenDsrcTollingZone_in.protectedZoneLongitude);
		if(_CenDsrcTollingZone_in.cenDsrcTollingZoneID)
		{
			CenDsrcTollingZone_out.cenDsrcTollingZoneID = convert_CenDsrcTollingZoneIDtoRos(*_CenDsrcTollingZone_in.cenDsrcTollingZoneID);
			CenDsrcTollingZone_out.cenDsrcTollingZoneID_isPresent = true;
		}
		return CenDsrcTollingZone_out;
	}
}