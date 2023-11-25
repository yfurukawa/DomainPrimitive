//
//  Meter.h
//  DomainPrimitive
//
//  Created by Yoshihiro Furukawa on 2023/11/25.
//

#ifndef Meter_h
#define Meter_h

#include "../skills/StrongType.h"

template< typename T >
using Meter =
    StrongType<T, struct MeterTag, Addable, Subtractable, Multipliable, Dividable, Printable, Swappable>;

#endif /* Meter_h */
