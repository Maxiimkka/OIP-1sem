#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "russian");
	int a, b;
	char c;
	do
	{
		cout << "������� ����� a = "; cin >> a;
		cout << "������� ����� b = "; cin >> b;
		cout << "������� �������� (%, /, +. -. *) : "; cin >> c;
		switch (c)
		{
		case '+': cout << "�����: " << a + b; break;
		case '-': cout << "�����: " << a - b; break;
		case '%': cout << "�����: " << a % b; break;
		case '*': cout << "�����: " << a * b; break;
		case '/': cout << "�����: " << a*1.0 / b; break;
		}
		cout << endl;
	} while (a > 0);
}