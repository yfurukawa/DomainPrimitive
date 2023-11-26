//
//  TargetAltitude.h
//  DomainPrimitive
//
//  Created by Yoshihiro Furukawa on 2023/11/26.
//

#ifndef TargetAltitude_h
#define TargetAltitude_h

#include "units/Feet.h"

class TargetAltitude {
private:
    TargetAltitude() = delete;
public:
    explicit TargetAltitude(double altitude);
    ~TargetAltitude() = default;
    
    Feet<double> getAltitude() const;
private:
    const double altitudeMin_;     //!< 対象ドメインでこの変数が取り得る最小値
    const double altitudeMax_;     //!< 対象ドメインでこの変数が取り得る最小値
    Feet<double> altitude_;        //!< 強く型付けされた本ドメインプリミティブの実際の値
};

#endif /* TargetAltitude_h */
