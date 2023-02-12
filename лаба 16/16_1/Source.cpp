#include <iostream>
#include <vector>

using namespace std;

// �������, ������� ��������� ��� �������� ������� � ������� �����
void halveColumn(vector<vector<int>>& matrix, int col) {
    for (int i = 0; i < matrix.size(); i++) {
        matrix[i][col] /= 2;
    }
}

int main() {
    // ��������� ������� �������
    int n, m;
    cin >> n >> m;

    // ������� ������������ ��������� ������
    vector<vector<int>> matrix(n, vector<int>(m));

    // ��������� �������� �������
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    // �������� �� ������� �������
    for (int i = 0; i < n; i++) {
        // ���������, ��� �� �������� ������ ����� ����
        bool allZeros = true;
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] != 0) {
                allZeros = false;
                break;
            }
        }

        // ���� ��� �������� ������ ����� ����, �� ��������� ��� �������� �������
        // ����� � ��������� ������ �����
        if (allZeros) {
            halveColumn(matrix, i);
            break;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
