
#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	//1
	int s = 0, a;
	cout << "a=";
	cin >> a;
	for (int i = 1; i < 4 ; i++)
	{
		s += pow(a, i) + 3 * pow(i, a);
	}
	cout << s << endl;
	//2
	double d = 1;
	for (int i = 1; i < 8 ; i++)
	{
		d *= (i + 2) / (a + i);
	}
	cout << d;
}

