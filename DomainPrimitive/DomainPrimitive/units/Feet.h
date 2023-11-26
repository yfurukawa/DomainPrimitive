//
//  Feet.h
//  DomainPrimitive
//
//  Created by Yoshihiro Furukawa on 2023/11/25.
//

#ifndef Feet_h
#define Feet_h

#include "../skills/StrongType.h"

template< typename T >
using Feet =
StrongType<T, struct FeetTag, Subtractable, MultipliableWithNumber, Printable, Swappable>;

#endif /* Feet_h */
