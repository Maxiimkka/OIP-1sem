#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

void zad1()
{
    setlocale(LC_CTYPE, "Russian");
    char tmp[33];

    int A, null = 0, B, ed = 0, i = 0, counter = 1;
    cout << " ������� ����� �: " << endl;
    cin >> A;
    _itoa_s(A, tmp, 2);
    cout << " ����� �: " << tmp << endl;

    const unsigned int mask = 1 << 31;
    B = A;
    while (B != 1) // ������� ���������� �����
    {
        B /= 2;
        counter++;
    }

    for (i = 1; i <= 32; i++) // ���������� � ������� 1
    {
        if (mask & A)

            ed++;


        A <<= 1;
        if (i % 8 == 0) putchar(' ');
    }
    null = counter - ed;
    cout << endl << "null: " << null;
    cout << endl << "ed: " << ed;
    cout << endl << "ed-null: " << ed - null << endl;
}

// 2.   ���������� � 1 � ����� � n ����� ������ �� ������� p, �������� ��� m ����� ����� �, ������� � ������� q.
void zad2() {
    int A, B, i = 0, counter = 1, mask = 0, p, n, q, m;
    char tmp[33];
    //cin
    cout << "---------- A ----------" << endl;
    n = 3; cout << "n: " << n << endl;
    p = 3; cout << "p: " << p << endl;
    cout << endl << "---------- B ----------" << endl;
    m = 4; cout << "m: " << m << endl;
    q = 5; cout << "q: " << q << endl;
    cout << endl << "-----------------------" << endl;


    cout << "A: ";
    cin >> A;
    _itoa_s(A, tmp, 2);
    cout << tmp << endl << "----------------------------------------" << endl;

    for (i = p - 1; i < p - 1 + n; i++)
    {
        mask += pow(2, i);
    } // ����� A

    _itoa_s(mask, tmp, 2);
    cout << "Mask A: " << tmp << endl;
    _itoa_s(A | mask, tmp, 2);
    cout << "A | Mask: " << tmp << endl;

    cout << tmp << endl << "----------------------------------------" << endl;

    cout << "B: ";
    cin >> B;
    _itoa_s(B, tmp, 2);
    cout << tmp << endl << "----------------------------------------" << endl;

    mask = 0;
    for (i = q - 1; i < q - 1 + m; i++)
    {
        mask += pow(2, i);
    } // ����� B

    _itoa_s(mask, tmp, 2);
    cout << "Mask B: " << tmp << endl;
    _itoa_s(B | mask, tmp, 2);
    cout << "B | Mask: " << tmp << endl;
}

void main()
{
    zad1();
    zad2();
}