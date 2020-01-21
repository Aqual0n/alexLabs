// Labs.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include "math.h"

using namespace std;

const double M_PI = 3.14159265359;

int main()
{
	setlocale(LC_CTYPE, "Russian");

	int array[3][5];

	double avg = 1;
	int counter = 0;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			cout << "������� ����� [" << i << "]" << "[" << j << "] \n";
			cin >> array[i][j];
		}
	}

	system("cls");

	for (int i = 0; i < 3; i++) {
		cout << "\n\n";
		for (int j = 0; j < 5; j++) {
			cout << array[i][j] << "\t";

			if (i % 2 != 0 && j % 2 != 0) {
				avg *= array[i][j];
				counter++;
			}
		}
	}
	avg = pow(avg, 1.0 / counter);

	cout << "\n\n������� �������������� �����, ��� ������� ������� �������� ����� " << avg;

	cout << "\n\n";
	system("pause");
	return 0;
}

