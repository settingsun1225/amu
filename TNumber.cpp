//
// Created by liuyi03 on 2019-04-12.
//

#include "TNumber.h"

int main() {
    std::cout << "start" << std::endl;
    TNumber x = new TNumber(1);
    TNumber y = new TNumber(3);
    TNumber z = x + y;
    z.print();
    std::cout << "end" << std::endl;
    return 0;
}
