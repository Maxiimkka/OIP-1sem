
#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	double a = 0, b = 1, x, i, n, m = 0;

	cout << "������� n= ";
	cin >> n;

	for (i = 0; i < n; i++)
	{
		cout << "������� x= ";
		cin >> x;
		if (x < 0) {
			cout << "���������� �����=" << i + 1 << endl;
			return 0;
		}
	}
}