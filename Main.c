#include "Main.h"
#include <stdio.h>

int main(void)
{
	//Task 1
	int w;
	float h, index;

	//Task 2
	int a = 1, b = 2, c = 9, d = 3, max;

	/*
	//"������ ��� � ���� ��������. ���������� � ������� ������ ����� ���� �� ������� I=m/(h*h); ��� m-����� ���� � �����������, h - ���� � ������\n"
	printf("---=== 1 ===---\n");
	
	printf("Enter man's weight in kilo:\n");//height and 
	scanf("%d", &w);

	printf("Enter man's height in meters:\n");// 
	scanf("%f", &h);

	//������� ������
	index = w/(h*h);
	printf("I=m/(h*h): %.2f\n", index);// 
	
	
	//"����� ������������ �� ������� �����. ������� �� ������������
	printf("\n---=== 2 ===---\n");
	printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

	max = a;
	if (max < b) max = b;
	if (max < c) max = c;
	if (max < d) max = d;

	printf("max = %d\n", max);
	*/

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

	scanf("%f", &h);

	return 0;
}


