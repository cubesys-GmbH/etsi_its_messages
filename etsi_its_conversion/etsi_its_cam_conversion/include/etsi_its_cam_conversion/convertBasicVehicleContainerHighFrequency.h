#pragma once

#include <etsi_its_cam_coding/BasicVehicleContainerHighFrequency.h>
#include <etsi_its_cam_msgs/BasicVehicleContainerHighFrequency.h>
#include <etsi_its_cam_conversion/convertHeading.h>
#include <etsi_its_cam_conversion/convertSpeed.h>
#include <etsi_its_cam_conversion/convertDriveDirection.h>
#include <etsi_its_cam_conversion/convertVehicleLength.h>
#include <etsi_its_cam_conversion/convertVehicleWidth.h>
#include <etsi_its_cam_conversion/convertLongitudinalAcceleration.h>
#include <etsi_its_cam_conversion/convertCurvature.h>
#include <etsi_its_cam_conversion/convertCurvatureCalculationMode.h>
#include <etsi_its_cam_conversion/convertYawRate.h>
#include <etsi_its_cam_conversion/convertAccelerationControl.h>
#include <etsi_its_cam_conversion/convertLanePosition.h>
#include <etsi_its_cam_conversion/convertSteeringWheelAngle.h>
#include <etsi_its_cam_conversion/convertLateralAcceleration.h>
#include <etsi_its_cam_conversion/convertVerticalAcceleration.h>
#include <etsi_its_cam_conversion/convertPerformanceClass.h>
#include <etsi_its_cam_conversion/convertCenDsrcTollingZone.h>

namespace etsi_its_cam_conversion
{
	etsi_its_cam_msgs::BasicVehicleContainerHighFrequency convert_BasicVehicleContainerHighFrequencytoRos(const BasicVehicleContainerHighFrequency_t& _BasicVehicleContainerHighFrequency_in)
	{
		etsi_its_cam_msgs::BasicVehicleContainerHighFrequency BasicVehicleContainerHighFrequency_out;
		BasicVehicleContainerHighFrequency_out.heading = convert_HeadingtoRos(_BasicVehicleContainerHighFrequency_in.heading);
		BasicVehicleContainerHighFrequency_out.speed = convert_SpeedtoRos(_BasicVehicleContainerHighFrequency_in.speed);
		BasicVehicleContainerHighFrequency_out.driveDirection = convert_DriveDirectiontoRos(_BasicVehicleContainerHighFrequency_in.driveDirection);
		BasicVehicleContainerHighFrequency_out.vehicleLength = convert_VehicleLengthtoRos(_BasicVehicleContainerHighFrequency_in.vehicleLength);
		BasicVehicleContainerHighFrequency_out.vehicleWidth = convert_VehicleWidthtoRos(_BasicVehicleContainerHighFrequency_in.vehicleWidth);
		BasicVehicleContainerHighFrequency_out.longitudinalAcceleration = convert_LongitudinalAccelerationtoRos(_BasicVehicleContainerHighFrequency_in.longitudinalAcceleration);
		BasicVehicleContainerHighFrequency_out.curvature = convert_CurvaturetoRos(_BasicVehicleContainerHighFrequency_in.curvature);
		BasicVehicleContainerHighFrequency_out.curvatureCalculationMode = convert_CurvatureCalculationModetoRos(_BasicVehicleContainerHighFrequency_in.curvatureCalculationMode);
		BasicVehicleContainerHighFrequency_out.yawRate = convert_YawRatetoRos(_BasicVehicleContainerHighFrequency_in.yawRate);
		if(_BasicVehicleContainerHighFrequency_in.accelerationControl)
		{
			BasicVehicleContainerHighFrequency_out.accelerationControl = convert_AccelerationControltoRos(*_BasicVehicleContainerHighFrequency_in.accelerationControl);
			BasicVehicleContainerHighFrequency_out.accelerationControl_isPresent = true;
		}
		if(_BasicVehicleContainerHighFrequency_in.lanePosition)
		{
			BasicVehicleContainerHighFrequency_out.lanePosition = convert_LanePositiontoRos(*_BasicVehicleContainerHighFrequency_in.lanePosition);
			BasicVehicleContainerHighFrequency_out.lanePosition_isPresent = true;
		}
		if(_BasicVehicleContainerHighFrequency_in.steeringWheelAngle)
		{
			BasicVehicleContainerHighFrequency_out.steeringWheelAngle = convert_SteeringWheelAngletoRos(*_BasicVehicleContainerHighFrequency_in.steeringWheelAngle);
			BasicVehicleContainerHighFrequency_out.steeringWheelAngle_isPresent = true;
		}
		if(_BasicVehicleContainerHighFrequency_in.lateralAcceleration)
		{
			BasicVehicleContainerHighFrequency_out.lateralAcceleration = convert_LateralAccelerationtoRos(*_BasicVehicleContainerHighFrequency_in.lateralAcceleration);
			BasicVehicleContainerHighFrequency_out.lateralAcceleration_isPresent = true;
		}
		if(_BasicVehicleContainerHighFrequency_in.verticalAcceleration)
		{
			BasicVehicleContainerHighFrequency_out.verticalAcceleration = convert_VerticalAccelerationtoRos(*_BasicVehicleContainerHighFrequency_in.verticalAcceleration);
			BasicVehicleContainerHighFrequency_out.verticalAcceleration_isPresent = true;
		}
		if(_BasicVehicleContainerHighFrequency_in.performanceClass)
		{
			BasicVehicleContainerHighFrequency_out.performanceClass = convert_PerformanceClasstoRos(*_BasicVehicleContainerHighFrequency_in.performanceClass);
			BasicVehicleContainerHighFrequency_out.performanceClass_isPresent = true;
		}
		if(_BasicVehicleContainerHighFrequency_in.cenDsrcTollingZone)
		{
			BasicVehicleContainerHighFrequency_out.cenDsrcTollingZone = convert_CenDsrcTollingZonetoRos(*_BasicVehicleContainerHighFrequency_in.cenDsrcTollingZone);
			BasicVehicleContainerHighFrequency_out.cenDsrcTollingZone_isPresent = true;
		}
		return BasicVehicleContainerHighFrequency_out;
	}
}