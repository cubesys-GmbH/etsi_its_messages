//// SEQUENCE BasicVehicleContainerHighFrequency


#pragma once

#include <stdexcept>

#include <etsi_its_cam_coding/BasicVehicleContainerHighFrequency.h>
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
#ifdef ROS1
#include <etsi_its_cam_msgs/BasicVehicleContainerHighFrequency.h>
namespace cam_msgs = etsi_its_cam_msgs;
#else
#include <etsi_its_cam_msgs/msg/basic_vehicle_container_high_frequency.hpp>
namespace cam_msgs = etsi_its_cam_msgs::msg;
#endif


namespace etsi_its_cam_conversion {

void toRos_BasicVehicleContainerHighFrequency(const BasicVehicleContainerHighFrequency_t& in, cam_msgs::BasicVehicleContainerHighFrequency& out) {
  toRos_Heading(in.heading, out.heading);
  toRos_Speed(in.speed, out.speed);
  toRos_DriveDirection(in.driveDirection, out.drive_direction);
  toRos_VehicleLength(in.vehicleLength, out.vehicle_length);
  toRos_VehicleWidth(in.vehicleWidth, out.vehicle_width);
  toRos_LongitudinalAcceleration(in.longitudinalAcceleration, out.longitudinal_acceleration);
  toRos_Curvature(in.curvature, out.curvature);
  toRos_CurvatureCalculationMode(in.curvatureCalculationMode, out.curvature_calculation_mode);
  toRos_YawRate(in.yawRate, out.yaw_rate);
  if (in.accelerationControl) {
    toRos_AccelerationControl(*in.accelerationControl, out.acceleration_control);
    out.acceleration_control_is_present = true;
  }
  if (in.lanePosition) {
    toRos_LanePosition(*in.lanePosition, out.lane_position);
    out.lane_position_is_present = true;
  }
  if (in.steeringWheelAngle) {
    toRos_SteeringWheelAngle(*in.steeringWheelAngle, out.steering_wheel_angle);
    out.steering_wheel_angle_is_present = true;
  }
  if (in.lateralAcceleration) {
    toRos_LateralAcceleration(*in.lateralAcceleration, out.lateral_acceleration);
    out.lateral_acceleration_is_present = true;
  }
  if (in.verticalAcceleration) {
    toRos_VerticalAcceleration(*in.verticalAcceleration, out.vertical_acceleration);
    out.vertical_acceleration_is_present = true;
  }
  if (in.performanceClass) {
    toRos_PerformanceClass(*in.performanceClass, out.performance_class);
    out.performance_class_is_present = true;
  }
  if (in.cenDsrcTollingZone) {
    toRos_CenDsrcTollingZone(*in.cenDsrcTollingZone, out.cen_dsrc_tolling_zone);
    out.cen_dsrc_tolling_zone_is_present = true;
  }
}

void toStruct_BasicVehicleContainerHighFrequency(const cam_msgs::BasicVehicleContainerHighFrequency& in, BasicVehicleContainerHighFrequency_t& out) {
  memset(&out, 0, sizeof(BasicVehicleContainerHighFrequency_t));

  toStruct_Heading(in.heading, out.heading);
  toStruct_Speed(in.speed, out.speed);
  toStruct_DriveDirection(in.drive_direction, out.driveDirection);
  toStruct_VehicleLength(in.vehicle_length, out.vehicleLength);
  toStruct_VehicleWidth(in.vehicle_width, out.vehicleWidth);
  toStruct_LongitudinalAcceleration(in.longitudinal_acceleration, out.longitudinalAcceleration);
  toStruct_Curvature(in.curvature, out.curvature);
  toStruct_CurvatureCalculationMode(in.curvature_calculation_mode, out.curvatureCalculationMode);
  toStruct_YawRate(in.yaw_rate, out.yawRate);
  if (in.acceleration_control_is_present) {
    out.accelerationControl = (AccelerationControl_t*) calloc(1, sizeof(AccelerationControl_t));
    toStruct_AccelerationControl(in.acceleration_control, *out.accelerationControl);
  }
  if (in.lane_position_is_present) {
    out.lanePosition = (LanePosition_t*) calloc(1, sizeof(LanePosition_t));
    toStruct_LanePosition(in.lane_position, *out.lanePosition);
  }
  if (in.steering_wheel_angle_is_present) {
    out.steeringWheelAngle = (SteeringWheelAngle_t*) calloc(1, sizeof(SteeringWheelAngle_t));
    toStruct_SteeringWheelAngle(in.steering_wheel_angle, *out.steeringWheelAngle);
  }
  if (in.lateral_acceleration_is_present) {
    out.lateralAcceleration = (LateralAcceleration_t*) calloc(1, sizeof(LateralAcceleration_t));
    toStruct_LateralAcceleration(in.lateral_acceleration, *out.lateralAcceleration);
  }
  if (in.vertical_acceleration_is_present) {
    out.verticalAcceleration = (VerticalAcceleration_t*) calloc(1, sizeof(VerticalAcceleration_t));
    toStruct_VerticalAcceleration(in.vertical_acceleration, *out.verticalAcceleration);
  }
  if (in.performance_class_is_present) {
    out.performanceClass = (PerformanceClass_t*) calloc(1, sizeof(PerformanceClass_t));
    toStruct_PerformanceClass(in.performance_class, *out.performanceClass);
  }
  if (in.cen_dsrc_tolling_zone_is_present) {
    out.cenDsrcTollingZone = (CenDsrcTollingZone_t*) calloc(1, sizeof(CenDsrcTollingZone_t));
    toStruct_CenDsrcTollingZone(in.cen_dsrc_tolling_zone, *out.cenDsrcTollingZone);
  }
}

}
