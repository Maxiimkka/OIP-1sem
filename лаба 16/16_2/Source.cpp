#include <iostream>
#include <cmath>
#include <stdarg.h>

using namespace std;

int kvadr(int num_args, ...) {
    // ���������� ���������� ���� va_list
    va_list args;

    // ������������� va_list � ������ ���������� num_args
    va_start(args, num_args);

    // ���������� ��� �������� ����������
    int count = 0;

    // ������� ����������
    for (int i = 0; i < num_args; i++) {
        // ��������� �������� ���������
        int arg = va_arg(args, int);

        // ��������, �������� �� ����� ������ ���������
        int sqrt_arg = sqrt(arg);
        if (sqrt_arg * sqrt_arg == arg) {
            count++;
        }
    }

    // ������� va_list
    va_end(args);

    return count;
}

int main() {
    // ��� ��������� � ������� � ��������� ����������� ����������
    cout << kvadr(5, 2, 4, 9, 16, 25) << endl;
    cout << kvadr(3, 1, 4, 9) << endl;
    cout << kvadr(4, 2, 4, 9, 16) << endl;


    return 0;
}