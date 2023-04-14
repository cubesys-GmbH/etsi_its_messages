#pragma once

#include <etsi_its_cam_coding/VerticalAcceleration.h>
#include <etsi_its_cam_msgs/VerticalAcceleration.h>
#include <etsi_its_cam_conversion/convertVerticalAccelerationValue.h>
#include <etsi_its_cam_conversion/convertAccelerationConfidence.h>

namespace etsi_its_cam_conversion
{
	void convert_VerticalAccelerationtoRos(const VerticalAcceleration_t& _VerticalAcceleration_in, etsi_its_cam_msgs::VerticalAcceleration& _VerticalAcceleration_out)
	{
		convert_VerticalAccelerationValuetoRos(_VerticalAcceleration_in.verticalAccelerationValue, _VerticalAcceleration_out.verticalAccelerationValue);
		convert_AccelerationConfidencetoRos(_VerticalAcceleration_in.verticalAccelerationConfidence, _VerticalAcceleration_out.verticalAccelerationConfidence);
	}
	void convert_VerticalAccelerationtoC(const etsi_its_cam_msgs::VerticalAcceleration& _VerticalAcceleration_in, VerticalAcceleration_t& _VerticalAcceleration_out)
	{
		memset(&_VerticalAcceleration_out, 0, sizeof(VerticalAcceleration_t));
		convert_VerticalAccelerationValuetoC(_VerticalAcceleration_in.verticalAccelerationValue, _VerticalAcceleration_out.verticalAccelerationValue);
		convert_AccelerationConfidencetoC(_VerticalAcceleration_in.verticalAccelerationConfidence, _VerticalAcceleration_out.verticalAccelerationConfidence);
	}
}