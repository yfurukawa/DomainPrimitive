//
//  Mile.h
//  DomainPrimitive
//
//  Created by Yoshihiro Furukawa on 2023/11/25.
//

#ifndef Mile_h
#define Mile_h

#include "../skills/StrongType.h"

template< typename T >
using Mile =
    StrongType<T, struct MileTag, Addable, Printable>;

#endif /* Mile_h */
