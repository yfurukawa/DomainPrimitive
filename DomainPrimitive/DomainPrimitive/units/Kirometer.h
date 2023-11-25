//
//  Kirometer.h
//  DomainPrimitive
//
//  Created by Yoshihiro Furukawa on 2023/11/25.
//

#ifndef Kirometer_h
#define Kirometer_h

template< typename T >
using Kirometer =
    StrongType<T, struct KirometerTag, Addable, Printable, Swappable>;

#endif /* Kirometer_h */
