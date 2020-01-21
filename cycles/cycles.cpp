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
	double z = 0;

	cout << "Введите x:\n";
	cin >> x;

	for (int i = 1; i <= 5; i++) {
		z += pow(i, 3) + i * x;
	}

	cout << "\n FOR: Сумма при множителе " << x << " равна " << z << "\n\n";
	z = 0;

	int n = 1;
	while (n <= 5) {
		z += pow(n, 3) + n * x;
		n++;
	}

	cout << "\n WHILE: Сумма при множителе " << x << " равна " << z << "\n\n";
	z = 0;
	n = 1;

	do {
		z += pow(n, 3) + n * x;
		n++;
	} while (n <= 5);

	cout << "\n DO WHILE: Сумма при множителе " << x << " равна " << z << "\n\n";
	z = 0;


	system("pause");
	return 0;
}

