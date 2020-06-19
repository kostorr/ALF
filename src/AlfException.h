// Copyright CERN and copyright holders of ALICE O2. This software is
// distributed under the terms of the GNU General Public License v3 (GPL
// Version 3), copied verbatim in the file "COPYING".
//
// See http://alice-o2.web.cern.ch/license for full licensing information.
//
// In applying this license CERN does not waive the privileges and immunities
// granted to it by virtue of its status as an Intergovernmental Organization
// or submit itself to any jurisdiction.

/// \file AlfException.h
/// \brief Definition of the ALF exceptions and related functions.
///
/// \author Pascal Boeschoten (pascal.boeschoten@cern.ch)

#ifndef ALICEO2_ALF_ALF_EXCEPTION_H_
#define ALICEO2_ALF_ALF_EXCEPTION_H_

#include <Common/Exceptions.h>

namespace AliceO2
{
namespace Alf
{

struct AlfException : AliceO2::Common::Exception {
};
struct ScaException : AliceO2::Common::Exception {
};
struct SwtException : AliceO2::Common::Exception {
};
struct IcException : AliceO2::Common::Exception {
};

namespace ErrorInfo
{
using Message = AliceO2::Common::ErrorInfo::Message;
} // namespace ErrorInfo

} // namespace Alf
} // namespace AliceO2

#endif // ALICEO2_ALF_ALF_EXCEPTION_H_