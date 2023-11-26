//
//  CurrentAltitude.h
//  DomainPrimitive
//
//  Created by Yoshihiro Furukawa on 2023/11/26.
//

#ifndef CurrentAltitude_h
#define CurrentAltitude_h

#include "units/Feet.h"

class CurrentAltitude {
private:
    CurrentAltitude() = delete;
public:
    explicit CurrentAltitude( double altitude );
    ~CurrentAltitude() = default;
    
    Feet<double> getAltitude();
private:
    double altitudeMin_;
    double altitudeMax_;
    Feet<double> altitude_;
};

#endif /* CurrentAltitude_h */
