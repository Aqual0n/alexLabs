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

	for (int i = 0; i <= 5; i++) {
		z += pow(i, 3) + i * x;
	}

	cout << "\nСумма при множителе" << x << "Равна " << z << "\n\n";

	

	system("pause");
    return 0;
}

