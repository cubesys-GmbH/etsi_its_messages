//// SEQUENCE AlacarteContainer


#pragma once

#include <stdexcept>

#include <etsi_its_denm_coding/AlacarteContainer.h>
#include <etsi_its_denm_conversion/convertLanePosition.h>
#include <etsi_its_denm_conversion/convertImpactReductionContainer.h>
#include <etsi_its_denm_conversion/convertTemperature.h>
#include <etsi_its_denm_conversion/convertRoadWorksContainerExtended.h>
#include <etsi_its_denm_conversion/convertPositioningSolutionType.h>
#include <etsi_its_denm_conversion/convertStationaryVehicleContainer.h>
#ifdef ROS1
#include <etsi_its_denm_msgs/AlacarteContainer.h>
namespace denm_msgs = etsi_its_denm_msgs;
#else
#include <etsi_its_denm_msgs/msg/alacarte_container.hpp>
namespace denm_msgs = etsi_its_denm_msgs::msg;
#endif


namespace etsi_its_denm_conversion {

void toRos_AlacarteContainer(const AlacarteContainer_t& in, denm_msgs::AlacarteContainer& out) {
  if (in.lanePosition) {
    toRos_LanePosition(*in.lanePosition, out.lane_position);
    out.lane_position_is_present = true;
  }
  if (in.impactReduction) {
    toRos_ImpactReductionContainer(*in.impactReduction, out.impact_reduction);
    out.impact_reduction_is_present = true;
  }
  if (in.externalTemperature) {
    toRos_Temperature(*in.externalTemperature, out.external_temperature);
    out.external_temperature_is_present = true;
  }
  if (in.roadWorks) {
    toRos_RoadWorksContainerExtended(*in.roadWorks, out.road_works);
    out.road_works_is_present = true;
  }
  if (in.positioningSolution) {
    toRos_PositioningSolutionType(*in.positioningSolution, out.positioning_solution);
    out.positioning_solution_is_present = true;
  }
  if (in.stationaryVehicle) {
    toRos_StationaryVehicleContainer(*in.stationaryVehicle, out.stationary_vehicle);
    out.stationary_vehicle_is_present = true;
  }
}

void toStruct_AlacarteContainer(const denm_msgs::AlacarteContainer& in, AlacarteContainer_t& out) {
  memset(&out, 0, sizeof(AlacarteContainer_t));

  if (in.lane_position_is_present) {
    out.lanePosition = (LanePosition_t*) calloc(1, sizeof(LanePosition_t));
    toStruct_LanePosition(in.lane_position, *out.lanePosition);
  }
  if (in.impact_reduction_is_present) {
    out.impactReduction = (ImpactReductionContainer_t*) calloc(1, sizeof(ImpactReductionContainer_t));
    toStruct_ImpactReductionContainer(in.impact_reduction, *out.impactReduction);
  }
  if (in.external_temperature_is_present) {
    out.externalTemperature = (Temperature_t*) calloc(1, sizeof(Temperature_t));
    toStruct_Temperature(in.external_temperature, *out.externalTemperature);
  }
  if (in.road_works_is_present) {
    out.roadWorks = (RoadWorksContainerExtended_t*) calloc(1, sizeof(RoadWorksContainerExtended_t));
    toStruct_RoadWorksContainerExtended(in.road_works, *out.roadWorks);
  }
  if (in.positioning_solution_is_present) {
    out.positioningSolution = (PositioningSolutionType_t*) calloc(1, sizeof(PositioningSolutionType_t));
    toStruct_PositioningSolutionType(in.positioning_solution, *out.positioningSolution);
  }
  if (in.stationary_vehicle_is_present) {
    out.stationaryVehicle = (StationaryVehicleContainer_t*) calloc(1, sizeof(StationaryVehicleContainer_t));
    toStruct_StationaryVehicleContainer(in.stationary_vehicle, *out.stationaryVehicle);
  }
}

}
