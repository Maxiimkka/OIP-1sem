#include <iostream>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "rus");
    int sz, num = 0;
    cout << "������� sz: ";
    cin >> sz;
    int* a = new int[sz];
    for (int i = 0; i < sz; i++)
    {
        cout << "������� �������� ������� =";
        cin >> a[i];
    }
    for (int i = 0; i < sz; i++) {
        if (a[i] = a[i + 1]) {
            num++;
        }
       
    cout << "���������� ��� �������� ��������� ������� � ����������� ���������� =" << num;
}