#include <iostream>
#include <array>
#include <stdio.h>

int main(void) {
    std::array<int, 5> arr = {1,2,3,4,5};
    std::cerr << "Hello, World!" << std::endl;
    int x = 5;
    int* p = &x;
    int y = *p;
    std::cout << x;
    // std::cout << a;
    x = 10;
    std::cout << y;
    std::cout << std::endl;
    return 0;
}