// This is an example file as part of Modern-CMake

#include "simple_lib.hpp"

#include <iostream>

int main() {
    std::cout << "Simple example C++ compiled correctly and ran." << std::endl;
    std::cout << simple_lib_function() << std::endl;

    for (int i = 0; i < 10; i++)
    {
        std::cout << "value of i is: " << i << std::endl;
    }
    return 0;
}
