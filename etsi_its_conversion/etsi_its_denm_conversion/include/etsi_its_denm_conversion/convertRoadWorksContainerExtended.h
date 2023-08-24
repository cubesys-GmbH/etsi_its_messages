#pragma once

#include <etsi_its_denm_coding/RoadWorksContainerExtended.h>
#include <etsi_its_denm_conversion/convertLightBarSirenInUse.h>
#include <etsi_its_denm_conversion/convertClosedLanes.h>
#include <etsi_its_denm_conversion/convertRestrictedTypes.h>
#include <etsi_its_denm_conversion/convertSpeedLimit.h>
#include <etsi_its_denm_conversion/convertCauseCode.h>
#include <etsi_its_denm_conversion/convertItineraryPath.h>
#include <etsi_its_denm_conversion/convertDeltaReferencePosition.h>
#include <etsi_its_denm_conversion/convertTrafficRule.h>
#include <etsi_its_denm_conversion/convertReferenceDenms.h>
#ifdef ROS2
#include <etsi_its_denm_msgs/msg/road_works_container_extended.hpp>
namespace denm_msgs = etsi_its_denm_msgs::msg;
#else
#include <etsi_its_denm_msgs/RoadWorksContainerExtended.h>
namespace denm_msgs = etsi_its_denm_msgs;
#endif


namespace etsi_its_denm_conversion {

void toRos_RoadWorksContainerExtended(const RoadWorksContainerExtended_t& in, denm_msgs::RoadWorksContainerExtended& out) {

  if (in.lightBarSirenInUse) {
    toRos_LightBarSirenInUse(*in.lightBarSirenInUse, out.light_bar_siren_in_use);
    out.light_bar_siren_in_use_is_present = true;
  }

  if (in.closedLanes) {
    toRos_ClosedLanes(*in.closedLanes, out.closed_lanes);
    out.closed_lanes_is_present = true;
  }

  if (in.restriction) {
    toRos_RestrictedTypes(*in.restriction, out.restriction);
    out.restriction_is_present = true;
  }

  if (in.speedLimit) {
    toRos_SpeedLimit(*in.speedLimit, out.speed_limit);
    out.speed_limit_is_present = true;
  }

  if (in.incidentIndication) {
    toRos_CauseCode(*in.incidentIndication, out.incident_indication);
    out.incident_indication_is_present = true;
  }

  if (in.recommendedPath) {
    toRos_ItineraryPath(*in.recommendedPath, out.recommended_path);
    out.recommended_path_is_present = true;
  }

  if (in.startingPointSpeedLimit) {
    toRos_DeltaReferencePosition(*in.startingPointSpeedLimit, out.starting_point_speed_limit);
    out.starting_point_speed_limit_is_present = true;
  }

  if (in.trafficFlowRule) {
    toRos_TrafficRule(*in.trafficFlowRule, out.traffic_flow_rule);
    out.traffic_flow_rule_is_present = true;
  }

  if (in.referenceDenms) {
    toRos_ReferenceDenms(*in.referenceDenms, out.reference_denms);
    out.reference_denms_is_present = true;
  }

}

void toStruct_RoadWorksContainerExtended(const denm_msgs::RoadWorksContainerExtended& in, RoadWorksContainerExtended_t& out) {
    
  memset(&out, 0, sizeof(RoadWorksContainerExtended_t));

  if (in.light_bar_siren_in_use_is_present) {
    LightBarSirenInUse_t light_bar_siren_in_use;
    toStruct_LightBarSirenInUse(in.light_bar_siren_in_use, light_bar_siren_in_use);
    out.lightBarSirenInUse = new LightBarSirenInUse_t(light_bar_siren_in_use);
  }

  if (in.closed_lanes_is_present) {
    ClosedLanes_t closed_lanes;
    toStruct_ClosedLanes(in.closed_lanes, closed_lanes);
    out.closedLanes = new ClosedLanes_t(closed_lanes);
  }

  if (in.restriction_is_present) {
    RestrictedTypes_t restriction;
    toStruct_RestrictedTypes(in.restriction, restriction);
    out.restriction = new RestrictedTypes_t(restriction);
  }

  if (in.speed_limit_is_present) {
    SpeedLimit_t speed_limit;
    toStruct_SpeedLimit(in.speed_limit, speed_limit);
    out.speedLimit = new SpeedLimit_t(speed_limit);
  }

  if (in.incident_indication_is_present) {
    CauseCode_t incident_indication;
    toStruct_CauseCode(in.incident_indication, incident_indication);
    out.incidentIndication = new CauseCode_t(incident_indication);
  }

  if (in.recommended_path_is_present) {
    ItineraryPath_t recommended_path;
    toStruct_ItineraryPath(in.recommended_path, recommended_path);
    out.recommendedPath = new ItineraryPath_t(recommended_path);
  }

  if (in.starting_point_speed_limit_is_present) {
    DeltaReferencePosition_t starting_point_speed_limit;
    toStruct_DeltaReferencePosition(in.starting_point_speed_limit, starting_point_speed_limit);
    out.startingPointSpeedLimit = new DeltaReferencePosition_t(starting_point_speed_limit);
  }

  if (in.traffic_flow_rule_is_present) {
    TrafficRule_t traffic_flow_rule;
    toStruct_TrafficRule(in.traffic_flow_rule, traffic_flow_rule);
    out.trafficFlowRule = new TrafficRule_t(traffic_flow_rule);
  }

  if (in.reference_denms_is_present) {
    ReferenceDenms_t reference_denms;
    toStruct_ReferenceDenms(in.reference_denms, reference_denms);
    out.referenceDenms = new ReferenceDenms_t(reference_denms);
  }

}

}