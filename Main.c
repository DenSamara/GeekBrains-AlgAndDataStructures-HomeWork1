#include "Main.h"
#include <stdio.h>

int main(void)
{
	//������ a � b � ������� �������� � ���� ����� �� a �� b

	int a, b, i;

	printf("\n---=== 8 ===---\n");
	
	do{
		printf("Please input a: ");
		scanf("%d", &a);
		printf("Please input b: ");
		scanf("%d", &b);

		//����� �� ������ �������� �����, � ������ ���� � �������� �����, ��������
		if (a > b) printf("a must be more than b\n");
	} while (a > b);

	for (i = a; i <= b; i++){
		printf("%d ^ 2 = %d, %d ^ 3 = %d\n", i, i*i, i, i*i*i);
	}

	return 0;
}


