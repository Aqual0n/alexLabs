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
	int w, z, x, a, c, y, b;

	cout << "¬ведите x:\n";
	cin >> x;

	cout << "¬ведите a:\n";
	cin >> a;

	cout << "¬ведите z:\n";
	cin >> z;

	cout << "¬ведите w:\n";
	cin >> w;

	cout << "¬ведите c:\n";
	cin >> c;

	cout << "¬ведите y:\n";
	cin >> y;

	cout << "¬ведите b:\n";
	cin >> b;

	system("cls");

	double result = exp(returnPow(x, a, c)) - exp(returnPow(y, b, 2));
	result /= returnPow(z, 4, a);
	result *= returnPow(w, 2, 1);

	cout << "–езультат от функции, возвращающей значение: " << result;
	

	double firstVar;
	double secondVar;
	double thirdVar;
	double fourthVar;

	calculatePow(x, a, c, firstVar);
	calculatePow(y, b, 2, secondVar);
	calculatePow(z, 4, a, thirdVar);
	calculatePow(w, 2, 1, fourthVar);

	result = exp(firstVar) - exp(secondVar);
	result /= thirdVar;
	result *= fourthVar;

	cout << "\n\n–езультат от воид функции: " << result;
	

	cout << "\n\n";
	system("pause");
	return 0;
}

