

#include "pch.h"
#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	double t, f, y;
	const double l = 5.17 , d = 0.18 , a=0.19 , b=0.33 ,x=1.67 ;

	t = 5 * l + pow(sin(l + 4 * d), 2);
	f = abs(l - 12 * d) + (2 - 5 * d) / (4 + pow(l, 2));
	y = log(acos(a*x)) + exp(2) * pow(tan((pow(x, 2) + b)),4);
    cout << t<<endl;
	cout << f << endl;
	cout << y << endl;

}

