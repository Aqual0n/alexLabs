// Labs.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "math.h"

using namespace std;

const double M_PI = 3.14159265359;

int main()
{
	setlocale(LC_CTYPE, "Russian");

	double x;
	double k;

	cout << "Введите x:\n";
	cin >> x;

	cout << "Введите k:\n";
	cin >> k;

	if (sin(tan(2 * M_PI*x / k)) > 0) {
		k *= 3;
		cout << "Значение положительное, k = " << k;
	}
	else {
		cout << "Значение отрицательное, k = " << k;
	}

	cout << "\n\n\n";
	system("pause");
	return 0;
}

