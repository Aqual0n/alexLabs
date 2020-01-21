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

	int array[11];

	for (int i = 0; i < 11; i++) {
		cout << "Введите число [" << i << "]\n";
		cin >> array[i];
	}

	int sum = 0;

	for (int i = 0; i < 11; i++) {
		cout << array[i] << "\n";
		if (array[i] < -1 || array[i] > 5) {
			sum += array[i];
		}
	}
	cout << "Сумма элементов, которые не лежат в диапазоне от -1 до 5 = " << sum;


	cout << "\n\n";
	system("pause");
	return 0;
}

