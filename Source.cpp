#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x;
	double y;
	double A;
	double B;

	cout << "x = "; cin >> x;

	A = x;

	// спосіб 1: розгалуження в скороченій формі
		if (x <= -1)
			B = log10(abs(cos(5 * x))) + (exp((1 / x) + x));
		if (x > -1 && x < -0, 4)
			B = sqrt(pow((2 - x), 3) - tan(x));
		if (x >= 0, 4)
			B = sin(5 * x) - sqrt(abs(1 - x));

		 y = A + B;
		cout << "y =" << y << endl;
	// спосіб 2: розгалуження в повній формі

	/*if (x <= -1)
		B = log10(abs(cos(5 * x))) + (exp((1 / x) + x));
	else 
		if (x > -1 && x < -0, 4)
			B = sqrt(pow((2 - x), 3) - tan(x));
		else 
			if (x >= 0, 4)
				B = sin(5 * x) - sqrt(abs(1 - x));
		
		y = A + B;
		cout << "y =" << y << endl;*/
}
