#include <iostream>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "Russian");
    int  n, m,max=0,k=0;
    cout << "������� ������ ������� A = ";
    cin >> n;
    double* A = new double(n);
    for (int i = 0; i < n; i++) {
        cout << "������� ������� � ";
        cin >> A[i];
    }
    cout << "������� ������ ������� B = ";
    cin >> m;
    double* B = new double(m);
    for (int i = 0; i < m; i++) {
        cout << "������� ������� � ";
        cin >> B[i];
    }
    for (int i = 0; i < n; i++) {
        if (A[0]<A[i]) {
            A[i] = max;
        }
    }
    for (int i = 0; i < m; i++) {
        if (B[i] == max) {
            cout << "���������� ������� ������� A ���������� � ������� �";
            k = 1;
            i = m;
        }
    }
    if (k == 0) {
        cout << "���������� ������� ������� A �� ���������� � ������� �";
        }
    


}