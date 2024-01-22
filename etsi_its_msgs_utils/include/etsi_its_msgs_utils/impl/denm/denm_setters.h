/*
=============================================================================
MIT License

Copyright (c) 2023 Institute for Automotive Engineering (ika), RWTH Aachen University

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
=============================================================================
*/

/**
 * @file impl/denm/denm_setters.h
 * @brief Setter functions for the ETSI ITS DENM
 */

#pragma once

#include <etsi_its_msgs_utils/impl/constants.h>

namespace cdd = etsi_its_msgs::cdd_access;
namespace etsi_its_denm_msgs {

namespace access {

  /**
   * @brief Set the ItsPduHeader-object for a DENM
   *
   * @param denm DENM-Message to set the ItsPduHeader
   * @param station_id
   * @param protocol_version
   */
  inline void setItsPduHeader(DENM& denm, const uint32_t station_id, const uint8_t protocol_version = 0){
    cdd::setItsPduHeader(denm.header, ItsPduHeader::MESSAGE_ID_DENM, station_id, protocol_version);
  }

  /**
   * @brief Set the ReferenceTime-value
   * 
   * @param denm DENM to set the ReferenceTime-Value for
   * @param unix_nanosecs Timestamp in unix-nanoseconds to set the ReferenceTime-Value from
   * @param n_leap_seconds Number of leap seconds since 2004 for the given timestamp  (Default: etsi_its_msgs::N_LEAP_SECONDS)
   */
  inline void setReferenceTime(DENM& denm, const uint64_t unix_nanosecs, const uint16_t n_leap_seconds = etsi_its_msgs::LEAP_SECOND_INSERTIONS_SINCE_2004.end()->second){
    TimestampIts t_its;
    cdd::setTimestampITS(t_its, unix_nanosecs, n_leap_seconds);
    cdd::throwIfOutOfRange(t_its.value, TimestampIts::MIN, TimestampIts::MAX, "TimestampIts");
    denm.denm.management.reference_time = t_its;
  }

} // namespace access

} // namespace etsi_its_denm_msgs
