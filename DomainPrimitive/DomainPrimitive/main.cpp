//
//  main.cpp
//  DomainPrimitive
//
//  Created by Yoshihiro Furukawa on 2023/11/25.
//

#include <iostream>
#include "units/Distance.h"

int main(int argc, const char * argv[]) {
    auto m1 = Meter<long>{ 10 };
    auto m2 = Meter<long>{ 20 };
    std::cout << m1 + m2 << std::endl;
    
    return EXIT_SUCCESS;
}
