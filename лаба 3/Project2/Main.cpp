
#include <stdio.h> 
#include <conio.h>
#include <clocale>

void main()

{
	setlocale(LC_CTYPE, "Russian");
	int i, n;
	float cost, p, buf;
	{
		printf("������� �������������� ��������� : "); scanf_s("%f", &cost);
		printf("������� ������� p % : "); scanf_s("%f", &p);
		printf("������� n ����� ��� : "); scanf_s("%u", &n);

		for (int i = 0; i < n; i++)
		{
			printf("��� %u\n", i + 1);
			buf = cost * p / 100;
			printf("��������� �� ���� +: %f\n", cost += buf);
			
			printf("��������� �� ���� -: %f\n", cost -= buf);
		}
		printf("��������� %u ��� %f", i, cost); 
	} 

}
