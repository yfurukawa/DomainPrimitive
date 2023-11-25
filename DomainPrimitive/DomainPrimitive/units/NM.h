//
//  NM.h
//  DomainPrimitive
//
//  Created by Yoshihiro Furukawa on 2023/11/25.
//

#ifndef NM_h
#define NM_h

template< typename T >
using NM =
    StrongType<T, struct NMTag, Addable, Printable>;

#endif /* NM_h */
