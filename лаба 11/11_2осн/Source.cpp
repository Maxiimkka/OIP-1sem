#include <iostream>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "Russian");
    int  n, k, l = 0;
    bool f = false;
    cout << "������� ������ ������� x = ";
    cin >> n;
    int* x = new int(n);
    for (int i = 0; i < n; i++) {
        cout << "������� ������� x  ";
        cin >> x[i];
    }
    cout << "������� ������ ������� y = ";
    cin >> k;
    int* y = new int(k);
    for (int i = 0; i < k; i++) {
        cout << "������� ������� y  ";
        cin >> y[i];
    }
    for (int i = 0; i < k;) {
        for (int u = l; u < n; u++) {
            if (x[u] == y[i]) {
                i++;
                l = u;
            }
        }
        if (i == k) {
            f = true;
        }
    }
    if (f == true) {
        cout << "y �������� ���������������������� x";
    }
    else {
        cout << "y �� �������� ���������������������� x";
    }
}