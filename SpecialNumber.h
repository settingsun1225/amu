//
// Created by liuyi03 on 2019-04-12.
//
#include <iostream>
#include <string>

using namespace std;

class SpecialNumber {
public:
    double real; // 实数
    double plural = 0; // 复数
    bool sign = true; // 是否有符号
    int total = 0; // 总位数
    int decimal = 0; // 小数点后有几位
    bool round = true; // 是否四舍五入

    SpecialNumber() {}

    void setReal(double real) {
        this->real = real;
    }

    void setPlural(double plural) {
        this->plural = plural;
    }

    void setSign(bool sign) {
        this->sign = sign;
    }

    void setTotal(int total) {
        this->total = total;
    }

    void setDecimal(int decimal) {
        this->decimal = decimal;
    }

    void setRound(bool round) {
        this->round = round;
    }

    // 按照精度打印
    void print();

    SpecialNumber operator+(const SpecialNumber& x);
    SpecialNumber operator-(const SpecialNumber& x);

private:


};
