// Labs.cpp: определ€ет точку входа дл€ консольного приложени€.
//


#define _USE_MATH_DEFINES
#include "stdafx.h"
#include <iostream>
#include "math.h"

using namespace std;

int returnPow(int x, int a, int c) {
	return pow(x, 2) + a*x + c;
}

void calculatePow(int x, int a, int c, double &result) {
	result = pow(x, 2) + a*x + c;
}

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int a, b, c;

	cout << "¬ведите a:\n";
	cin >> a;

	cout << "¬ведите b:\n";
	cin >> b;

	cout << "¬ведите c:\n";
	cin >> c;

	int combine = pow(a, 3) + pow(a, 2) + c;

	int result = combine * ((sin(combine) / cos(combine)) - asin(1 / abs(a)));

	cout << "–езультат с A = " << a << ", B = " << b << ", C =" << c << ": \n\n" << result;


	cout << "\n\n";
	system("pause");
	return 0;
}

