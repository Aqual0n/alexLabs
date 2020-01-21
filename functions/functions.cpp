// Labs.cpp: ���������� ����� ����� ��� ����������� ����������.
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

	cout << "������� x:\n";
	cin >> x;

	cout << "������� a:\n";
	cin >> a;

	cout << "������� z:\n";
	cin >> z;

	cout << "������� w:\n";
	cin >> w;

	cout << "������� c:\n";
	cin >> c;

	cout << "������� y:\n";
	cin >> y;

	cout << "������� b:\n";
	cin >> b;

	system("cls");

	double result = exp(returnPow(x, a, c)) - exp(returnPow(y, b, 2));
	result /= returnPow(z, 4, a);
	result *= returnPow(w, 2, 1);

	cout << "��������� �� �������, ������������ ��������: " << result;
	

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

	cout << "\n\n��������� �� ���� �������: " << result;
	

	cout << "\n\n";
	system("pause");
	return 0;
}

