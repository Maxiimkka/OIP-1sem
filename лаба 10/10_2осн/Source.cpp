#include <iostream>
using namespace std;
//1.	���������� � ������� ������ ������ �������� ��� ������ ����� �.//
void zad1() {
	setlocale(LC_CTYPE, "Russian");
	int A, mask = 0xAA; char tmp[33];
	cout << " ������� ����� �: " << endl;
	cin >> A;
	_itoa_s(A, tmp, 2);
	cout << " ����� �: " << tmp << endl;
	_itoa_s(mask, tmp, 2);
	cout << " ����� ��� �: " << tmp << endl;
	_itoa_s(A | mask, tmp, 2);
	cout << " ���������: " << tmp << endl << endl;
}


//2.	������� 3 ���� ����� �, ������� � ������� n, � �������� � ����� �, ������� � ������� m	
void zad2() {
	setlocale(LC_CTYPE, "Russian");
	char tmp[33];
	int A, B, maskA, maskB;
	int n, m;
	cout << "������ �����="; cin >> A;
	cout << "������ �����="; cin >> B;
	_itoa_s(A, tmp, 2); cout << "A=" << tmp << endl;
	_itoa_s(B, tmp, 2); cout << "B=" << tmp << endl;
	cout << "������� n:" << endl;
	cin >> n;//n=2
	cout << "������� m:" << endl;
	cin >> m;
	_itoa_s(pow(2, n) - 1, tmp, 2);
	cout << tmp << endl;
	maskA = pow(2, n) - 1;
	_itoa_s(maskA, tmp, 2);
	cout << tmp << endl;
	maskA = maskA >> (n - 3) << (n - 3);
	_itoa_s(maskA, tmp, 2);
	cout << tmp << endl;// 11100011 & 111
	_itoa_s(A & maskA, tmp, 2); // 1 & 0=0 1&1=1 0 & 0=0 0&1=0 
	cout << "����� �" << endl;//0111
	cout << tmp << endl;
	maskB = ~maskA >> m;//0111>>2 01 = 10
	_itoa_s(B & maskB, tmp, 2);//10011101 10011100
	cout << "����� B" << endl;
	cout << tmp << endl;
	_itoa_s(((B & maskB) | ((A & maskA) >> m)), tmp, 2);//10011100 0001 =10011101
	cout << "� � ����������� ������ " << tmp;
}

void main()
{
	zad1();
	zad2();
}