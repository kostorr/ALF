// Copyright CERN and copyright holders of ALICE O2. This software is
// distributed under the terms of the GNU General Public License v3 (GPL
// Version 3), copied verbatim in the file "COPYING".
//
// See http://alice-o2.web.cern.ch/license for full licensing information.
//
// In applying this license CERN does not waive the privileges and immunities
// granted to it by virtue of its status as an Intergovernmental Organization
// or submit itself to any jurisdiction.

/// \file Logger.h
/// \brief Definition of InfoLogger functions for ALF
///
/// \author Kostas Alexopoulos (kostas.alexopoulos@cern.ch)

#ifndef O2_ALF_LOGGER_H_
#define O2_ALF_LOGGER_H_

#include "InfoLogger/InfoLogger.hxx"

namespace o2
{
namespace alf
{

constexpr auto endm = AliceO2::InfoLogger::InfoLogger::endm;

class Logger
{
 public:
  static Logger& get();
  AliceO2::InfoLogger::InfoLogger& log();
  AliceO2::InfoLogger::InfoLogger& warn();
  AliceO2::InfoLogger::InfoLogger& err();

 private:
  Logger(){};                                // private, cannot be called
  Logger(Logger const&) = delete;            // copy constructor private
  Logger& operator=(Logger const&) = delete; // assignment operator private
  AliceO2::InfoLogger::InfoLogger mLogger;
};

} // namespace alf
} // namespace o2

#endif // O2_ALF_LOGGER_H_
