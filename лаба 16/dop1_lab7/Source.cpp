#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int n, k, i = 0, sum = 0;
	cout << "������� ���������� �������� k= ";
	cin >> k;
	for (i; i < k; i++)
	{
		cout << "������� n=";
		cin >> n;
		if (n % 2 == 0)
		{
			sum += n;
		}

	}
	cout << sum;
}