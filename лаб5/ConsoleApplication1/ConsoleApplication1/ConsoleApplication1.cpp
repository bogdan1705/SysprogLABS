

#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	//1
	int A[20];
	int sum=0; 
	 


	for (int i = 0; i < 20; i++){
		cout <<"A["<<i<<"]=" ;
		cin >> A[i];

		if (A[i] > 0)
			sum ++;
	}
	cout << sum << endl;
	//2
	double d=1;
	
	if (A[19]>0)
	{
		for ( int i = 0; i < 20; i++) {
			
			if (A[i] < 0) {
				d *= A[i];
			}
			
		}
	}
	else
	{
		for (int i = 0; i < 20; i++) {
			if ((i % 2) == 0) {
				d *= A[i];
			}
		}
	}
	cout << d << endl;


}

