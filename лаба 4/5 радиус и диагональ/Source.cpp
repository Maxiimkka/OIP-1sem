#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "russian");
	double r, p, q;
	cout << "������� ������ r = "; cin >> r;
	cout << endl << "�������  ��������� p = "; cin >> p;
	cout << endl << "�������  ��������� q = "; cin >> q;
	if (r < sqrt(p / 2 * q / 2))
		cout << endl << "�����";
	else cout << endl << "�� �����";
}