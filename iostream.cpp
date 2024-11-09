//
//  iostream.cpp
//  CppPrimer
//
//  Created by DAN on 2024/10/2.
//

#include "iostream.hpp"

void useIoStream() {
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and " << v2
     << " is " << (v1 + v2) << std::endl;
}
