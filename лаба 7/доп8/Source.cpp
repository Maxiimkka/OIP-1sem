#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_CTYPE, "rus");
	int n, k, i = 1, sum = 0, m;
	float av;
	cout << "������� ������� k= ";
	cin >> k;
	m = k;
	  
	for (i; i <= k; i++)
	{
		cout << "������� ����� n=";
		cin >> n;
		if (n % 2 != 0)
		{
			sum += n;
		}
		else m = m - 1;
	}
	av = (sum*1.0) / m;

	if (k <= 0) {
		cout << "������������ ��������";
	}
	else cout << av;
	

}