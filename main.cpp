#include <iostream>
#include "TNumber.h"

int main() {
//    std::cout << "Hello, World!" << std::endl;
//    return 0;
    std::cout << "start" << std::endl;
    TNumber x(1);
    TNumber y(3);
    TNumber z = x + y;
    z.print();
    std::cout << "end" << std::endl;

    int a = 100;
    int b;

    b = a;
    while (b)
    {
        cout<< (b & 0x0001);
        b >>= 1;
    }
    cout<<endl;
    return 0;
}