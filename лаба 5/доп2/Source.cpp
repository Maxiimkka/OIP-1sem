#include <iostream>

using namespace std;

void main() {
    setlocale(LC_CTYPE, "Russian");
    float p = 0, q = 0, x = 0;
    cout << "������� p="; cin >> p;
    cout << "������� q="; cin >> q;
    while (p < q) {
        p = p + (p * 0.03);
        x = x + 1;
    }
    cout << "�������:" << p << endl;
    cout << "���������� ����:" << x;
}