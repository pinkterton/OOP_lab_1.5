#include "Number.h"
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

void Number::Init(double numb)
{
	SetNumb(numb);
}

void Number::Read()
{
		cout << "Write Number = "; cin >> numb;
		Init(numb);
}

void Number::Display() const
{
	cout << endl;
	cout << "Number = " << numb << endl;
}

string Number::toString() const 
{
	stringstream sout;
	sout << "(String)Number =  " << GetNumb();
	return sout.str();
}

Number Number::Minus(Number l, Number r)
{
	Number t;
	if (l.numb >= r.numb)
	{
		t.numb = l.numb- r.numb;
		return t;
	}
	else if (l.numb < r.numb)
	{
		t.numb = r.numb - l.numb;
		return t;
	}
}

Number Number::Multiply(Number l, Number r)
{
	Number t;
	t.numb = l.numb * r.numb;
	return t;
}
