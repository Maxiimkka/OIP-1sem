#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");


	int a;
	printf_s("������� a = ");

	scanf_s("%d", &a);

	switch (a) {

	case 1: case 2: case 12:
		printf("����\n");
		break;
	case 3: case 4: case 5:
		printf("�����\n");
		break;
	case 6: case 7: case 8:
		printf("����\n");
		break;
	case 9: case 10: case 11:
		printf("�����\n");
		break;
	default:
		printf("������\n");
		break;
	}

}