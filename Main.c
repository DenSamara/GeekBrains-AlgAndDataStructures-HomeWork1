#include "Main.h"

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	//��������� �����

	//"������ ��� � ���� ��������. ���������� � ������� ������ ����� ���� �� ������� I=m/(h*h); ��� m-����� ���� � �����������, h - ���� � ������\n"
	printf("---=== 1 ===---\n");
	int w, index;
	float h;

	printf("Enter man's weight in kilo:\n");//height and 
	scanf("%d", &w);

	printf("Enter man's height in meters:\n");// 
	scanf("%f", &h);

	//������� ������
	index = w/(h*h);
	printf("I=m/(h*h): %d\n", index);//

	int a = 1, b = 2, c = 9, d = 3, max;

	//"����� ������������ �� ������� �����. ������� �� ������������
	printf("\n---=== 2 ===---\n");
	printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

	max = a;
	if (max < b) max = b;
	if (max < c) max = c;
	if (max < d) max = d;

	printf("max = %d\n", max);

	getchar();

	return 0;
}
