// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	//1
	int A[3][3] = { 1,2,3,
				4,15,6,
				7,8,9 };

	int mini = 0, minj = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (A[i][j] < A[mini][minj])
			{
				mini = i;
				minj = j;
			}
		}
	}

	int ar[3];
	for (int i = 0; i < 3; i++) {
		ar[i] = A[i][minj];
		cout << ar[i] << endl;
	}
	
	//2
	int sum = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (A[i][j] > 5)
			{
				sum += A[i][j];
			}
		}
	}
	cout << "sum=" << sum << endl;

	return 0;
}