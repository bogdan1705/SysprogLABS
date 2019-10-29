
#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double a = 2.1, b = 3.4, x = 1.2, f;
	int s;
	cout << "s=";
	cin >> s;
	switch (s){
	case 0:  f = a + b * x; break;
	case 1:  f = pow(a,2)+pow(b,2)+pow(x,2); break;
	case 2:  f = exp(x); break;
	default:f = 0;break;
	}
	cout << f;
}

