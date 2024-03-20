#include "Real.h"
#include <iostream>

using namespace std;

int main()
{
	Number i, k;
	
	i.Read();
	k.SetNumb(152);

	Number result = Number::Minus(i, k);
	result.Display();

	Number result_two = Number::Multiply(i, k);
	result_two.Display();
	cout << endl;


	Real n;

	n.Read();

	Real m = sqrt(n, n.GetPower());
	std::cout << "(Sqrt)Number = " << m.GetNumber().GetNumb() << endl;

	Real b = n.calculation_pi();
	std::cout << "pi^" << n.GetPower() << " = " << b.GetPower() << endl;


	return 0;
}