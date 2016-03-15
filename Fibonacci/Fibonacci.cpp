// Fibonacci.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	int arg1 = 0, arg2 = 1, sum = 0;
	int i = 0, n = 0;
	cout << "Number of terms for Fibonacci series ? " << endl;
	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	while (i < n)
	{
		cout << arg1 << " + " << arg2 << " = ";
		sum = arg1 + arg2;
		arg1 = arg2;
		arg2 = sum;
		cout << sum << endl;
		++i;
	}

	cin.get();
	return 0;
}

