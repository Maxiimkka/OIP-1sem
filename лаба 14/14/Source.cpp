#include <iostream>

using namespace std;
void zad1();
void zad2();

int main(void)
{
    setlocale(LC_CTYPE, "Russian");
    int c;
    do
    {
        cout << endl;
        cout << "�������" << endl;
        cout << "1-���������� ������" << endl;
        cout << "2-������ � ��������" << endl;
        cout << "3-�����" << endl;
        cin >> c;
        switch (c)
        {
        case 1: zad1(); break;
        case 2: zad2(); break;
        case 3: break;
        }
    } while (c != 3);
}




void zad1()
{

    int n, count = 0, imin = 0;
    float  min = 0, sum = 0;
    cout << "������� ������ �������: ";
    cin >> n;
    float* p = new float(n);
    for (int i = 0; i < n; i++) {
        cout << "������� �������: ";
        cin >> p[i];
    }
    for (int i = 0; i < n; i++) {
        if (p[i] == 0) {
            count++;
        }
    }
    cout << "�������� ������� = 0: " << count << endl;
    min = p[0];
    for (int i = 0; i < n; i++) {
        if (p[i] < min) {
            min = p[i];
            imin = i;
        }
    }
    cout << "����������� �������: " << min << endl;


    for (int i = imin + 1; i < n; i++) {
        sum += p[i];
    }
    cout << "����� ��������� ������������� ����� ������������: " << sum << endl;
}

void zad2() {


    int A[20][20], n, m, max = 0;
    int i, j, t = 0, k = 0;
    cout << "������� ������ �������" << endl;
    cout << "���������� ����� = ";
    cin >> n;
    cout << "���������� �������� = ";
    cin >> m;
    cout << "������� �������� �������" << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cout << "A[" << j << "," << i << "]=";
            cin >> A[i][j];
        }
        cout << endl;
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }
    cout << endl;
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)

            if (A[i][j] == 0)
            {
                k++;
                i++;
            }
    cout << "���������� �������� � ������� ��������� =" << k << endl;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
        {

            if (A[i][j] == A[i][j + 1])
            {
                i++;
                cout << "����� ������ = " << i << endl;
              
                break;
            }
        }
    }
}