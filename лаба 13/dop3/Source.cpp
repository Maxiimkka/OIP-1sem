#include <iostream>
#include <ctime>
#include <iomanip> 

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int n, m, sum = 0, i = 0, j = 0, k1 = 1, k2 = 1, k3 = 1, k4 = 1, k5 = 1, k6 = 1;
	int A[5][5] = { 2,4,6,8,10,
					4,1,0,8,1,
					6,0,0,9,1,
					8,8,9,3,7,
					10,1,1,7,0 };

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			cout << A[i][j] << " ";
		}
		cout << endl;
	}

	for (i = 0, j = 0; j < 5; j++)
	{
		if (A[i][j] == A[j][i]) {
			k1++;
		}
	}
	if (k1 == 6) cout << "1 ������ ��������� � 1 ��������.\n";
	for (i = 1, j = 0; j < 5; j++)
	{
		if (A[i][j] == A[j][i]) {
			k2++;
		}
	}
	if (k2 == 6) cout << "2 ������ ��������� �� 2 ��������.\n";
	for (i = 2, j = 0; j < 5; j++)
	{
		if (A[i][j] == A[j][i]) {
			k3++;
		}
	}
	if (k3 == 6) cout << "3 ������ ��������� � 3 ��������.\n";
	for (i = 3, j = 0; j < 5; j++)
	{
		if (A[i][j] == A[j][i]) {
			k4++;
		}
	}
	if (k4 == 6) cout << "4 ������ ��������� � 4 ��������.\n";
	for (i = 4, j = 0; j < 5; j++)
	{
		if (A[i][j] == A[j][i]) {
			k5++;
		}
	}
	if (k5 == 6) cout << "5 ������ ��������� � 5 ��������.\n";
	for (i = 5, j = 0; j < 5; j++)
	{
		if (A[i][j] == A[j][i]) {
			k6++;
		}
	}
	if (k6 == 6) cout << "6 ������ ��������� � 6 ��������.\n";
}
