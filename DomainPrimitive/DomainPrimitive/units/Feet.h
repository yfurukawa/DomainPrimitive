//
//  Feet.h
//  DomainPrimitive
//
//  Created by Yoshihiro Furukawa on 2023/11/25.
//

#ifndef Feet_h
#define Feet_h

template< typename T >
using Feet =
    StrongType<T, struct FeetTag, Addable, Printable>;

#endif /* Feet_h */
