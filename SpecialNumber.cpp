//
// Created by liuyi03 on 2019-04-12.
//

#include "SpecialNumber.h"

SpecialNumber SpecialNumber::operator+(const SpecialNumber& x) {
    double real = x.real + this->real;
    double plural = x.plural + this->plural;
    y.setReal(real)
    y.setPlural(plural);
    return y;
}

SpecialNumber SpecialNumber::operator-(const SpecialNumber& x) {
    double real = this->real - x.real;
    double plural = this->plural - x.plural;
    y.setReal(real)
    y.setPlural(plural);
    return y;
}

void SpecialNumber::print() {

}