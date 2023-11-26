//
//  TargetAltitude.cpp
//  DomainPrimitive
//
//  Created by Yoshihiro Furukawa on 2023/11/26.
//

#include "TargetAltitude.h"

TargetAltitude::TargetAltitude(double altitude)
    : altitudeMin_(0),
    altitudeMax_(50000),
    altitude_( Feet<double>(altitude) )
{
}

Feet<double> TargetAltitude::getAltitude() const
{
    return altitude_;
}
