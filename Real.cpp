#include "Real.h"
#include <iostream>
#include <sstream>
#include <string>
#include <cmath>

using namespace std;

void Real::Init(Number number, double s)
{
	SetNumber(number);
	SetPower(s);
}

void Real::Read()
{
	Number n;
	n.Read();
	cout << "Write Power = ";
	cin >> s;
	Init(n, s);
}

void Real::Display() const
{
	cout << endl;
	cout << "Number = ";
	number.Display(); cout << endl;
	cout << "Power = " << s << endl;
	
}

string Real::toString() const
{
	stringstream sout;
	sout << "(String)Number =  " << number.GetNumb() 
		 << endl << "Power = " << GetPower();
	return sout.str();
}

Real sqrt(const Real& number, double s)
{
	Real result;
	double value = pow(number.GetNumber().GetNumb(), 1.0 / s);
	result.SetNumb(value);
	return result;
}

Real Real::calculation_pi()
{
	Real result;
	double const PI = 3.14159265;
	double result_one = pow(PI, s);
	result.s = result_one;
	return result;
}