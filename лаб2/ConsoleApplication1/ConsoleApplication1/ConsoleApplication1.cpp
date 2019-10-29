
#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;
#define C 1.231
#define D 1.152
 int main()
{
	//завдання 1
    double x = 3.2;
	double y = 2.965;
	double A;

	if (x < y) {
		x = 0.341;
		A = pow(C * x + y, 1 / 3);
	}
	else {
		x = 3.791;
		A = exp(y) + D * tan(x);
	}
	cout << A << endl;
	
}
