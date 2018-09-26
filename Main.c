#include "Main.h"
#include <stdio.h>

int main(void)
{
	//���� ����� ����� N (> 0). � ������� �������� ������� ������ � ������ ������� �� ������� ����������,
	//������� �� � ������ ����� N �������� �����. ���� �������, �� ������� True, ���� ��� � ������� False.

	int n;
	//������� � �������
	int result = 0, rest;

	printf("\n---=== 10 ===---\n");
	
	do{
		printf("Please input n: ");
		scanf("%d", &n);
		
		if (n <= 0) printf("n must be more than 0\n");
	}while (n <= 0);

	do{
		rest = n % 10;
		//���� ����� �������� ����� - �������
		if (rest % 2 == 1){
			result = 1;
			break;
		}

		n = div(n-rest, 10);
	}while (n > 0);

	printf(result == 1 ? "true" : "false");

	scanf("%d", &n);
	return 0;
}