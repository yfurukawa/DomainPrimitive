//
//  Aircraft.cpp
//  DomainPrimitive
//
//  Created by Yoshihiro Furukawa on 2023/11/26.
//

#include "Aircraft.h"

Aircraft::Aircraft(double currentAltitude, double targetAltitude)
    : currentAltitude_(currentAltitude),
    targetAltitude_(targetAltitude)
{
}

CurrentAltitude Aircraft::currentAltitude() const
{
    return currentAltitude_;
}
