//
//  StrongType.h
//  DomainPrimitive
//
//  Created by Yoshihiro Furukawa on 2023/11/25.
//  本コードは書籍「C++ソフトウェア設計」 ISBN 9784814400454　からの引用である。
//

#ifndef StrongType_h
#define StrongType_h

#include <utility>

ttemplate< typename T, typename Tag, template<typename> class... Skills >
struct StrongType : private Skills< StrongType<T, Tag, Skills...> >...
{
public:
    using value_type = T;
    
    explicit StrongType( T const& value ) : value_( value ) {}
    
    T&       get()       { return value_; }
    T const& get() const { return value_; }
private:
    T value_;
};

#endif /* StrongType_h */
