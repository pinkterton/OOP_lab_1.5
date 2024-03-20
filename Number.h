#pragma once
#include <string>

using namespace std;


class Number
{
	double numb;
public:
	double GetNumb() const { return numb; }
	void SetNumb(double value) { this->numb = value; }

	void Init(double numb);
	void Read();
	void Display() const;
	string toString() const;

	static Number Minus(Number l, Number r);
	static Number Multiply(Number l, Number r);
};

