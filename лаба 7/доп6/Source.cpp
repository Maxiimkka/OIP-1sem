#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_CTYPE, "rus");
	double a=0, b=1, i, x, n,l=0,k=0;
	cout << "������� �������  n= ";
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cout << "������� ����� x=";
		cin >> x;
		if (x >= 0)
		{
			a += x;
			k = 1;
		}
		else {
			b *= x;
			l = 1;
		}
	}
	if (n > 0) {
		if (k == 0) {
			cout << "���� ������������� �����" << endl;
		}
		else cout << a << endl;
		
		if (l == 0) {
			cout << "���� ������������� �����";
		}
		else cout << b;
		
	}
	else cout << "������������ ��������";
}