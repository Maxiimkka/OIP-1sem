#include <iostream>
#include <stdio.h>
#include <cstring>
#include <string>
#include <string.h>

using namespace std;


//Dop 5. ��������������� �������� �����������, ������ �� ���� ��� ����� � ������� �������� � ������������� ����� � ��������� ��������. 

void main()
{
    const int N = 100;
    char str[N];
    cout << "Enter string: ";
    cin.getline(str, N);
    unsigned int m;
    m = strlen(str);

    for (int i = m - 1 ; i >= 0; i--)
    {
        cout << str[i];
        if (str[i] == ' ')
        {
            i--;
            while (str[i] != ' ')
            {
                i--;
            }
        }
    }
}

