//
//  main.cpp
//  DomainPrimitive
//
//  Created by Yoshihiro Furukawa on 2023/11/25.
//

#include <iostream>
#include "units/Distance.h"
#include "CurrentAltitude.h"

int main(int argc, const char * argv[]) {
    auto m1 = Meter<double>{ 10 };
    auto m2 = Meter<double>{ 20 };
    auto m3 = Meter<double>{ 30 };
    std::cout << m1 + m2 << std::endl;
    std::cout << m1 - m2 << std::endl;
    std::cout << m1 * m2 << std::endl;
    std::cout << m1 / m2 << std::endl;
    std::cout << m1 * 2.345 << std::endl;
    std::cout << 2.234 * m1 << std::endl;
    m1 *= 3.456;
    std::cout << m1 << std::endl;

    CurrentAltitude altitude(555);
    std::cout << altitude.getAltitude() << std::endl;
    return EXIT_SUCCESS;
}

