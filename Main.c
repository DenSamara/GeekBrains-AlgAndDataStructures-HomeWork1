#include "Main.h"
#include <stdio.h>

int main(void)
{
	int a, b, c;

	//�������� ��������� ������ ���������� ���� ������������� ����������:
	//a. � �������������� ������� ����������;
	//b. *��� ������������� ������� ����������.
	printf("\n---=== 3a ===---\n");
	
	a = 1, b = 2, c = 0;
	printf("a = %d, b = %d\n", a, b, c);
	c = a;
	a = b;
	b = c;
	printf("a = %d, b = %d\n", a, b, c);
	
	printf("\n---=== 3b ===---\n");
	a = 1, b = 2;
	printf("a = %d, b = %d\n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;

	printf("a = %d, b = %d\n", a, b);

	return 0;
}


