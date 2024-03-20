#pragma once
#include "Number.h"
#include <string>

using namespace std;

class Real
{
    Number number;
    double s;
public:
    Number GetNumber() const { return number; }
    void SetNumber(Number number) { this->number = number; }
    void SetNumb(double value) { number.SetNumb(value); }
    double GetPower() const { return s; }
    void SetPower(double s) { this->s = s; }

    void Init(Number number, double s);
    void Read();
    void Display() const;
    string toString() const;

    friend Real sqrt(const Real& number, double s);
    Real calculation_pi();
};
