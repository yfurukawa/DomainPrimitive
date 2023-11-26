//
//  Aircraft.h
//  DomainPrimitive
//
//  Created by Yoshihiro Furukawa on 2023/11/26.
//

#ifndef Aircraft_h
#define Aircraft_h

#include "CurrentAltitude.h"
#include "TargetAltitude.h"

class Aircraft {
private:
    Aircraft() = delete;
public:
    Aircraft(double currentAltitude, double targetAltitude);
    CurrentAltitude currentAltitude() const;
    
private:
    CurrentAltitude currentAltitude_;
    TargetAltitude  targetAltitude_;
};

#endif /* Aircraft_h */
