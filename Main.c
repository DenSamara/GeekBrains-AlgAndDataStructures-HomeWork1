#include "Main.h"
#include <stdio.h>

int main(void)
{
	printf("---=== 1 ===---\n");
	printf("������ ��� � ���� ��������. ���������� � ������� ������ ����� ���� �� ������� I=m/(h*h); ��� m-����� ���� � �����������, h - ���� � ������\n");
	int w, index;
	float h;

	printf("Enter man's weight in kilo:\n");//height and 
	scanf("%d", &w);

	printf("Enter man's height in meters:\n");// 
	scanf("%f", &h);

	//������� ������
	index = w/(h*h);
	printf("I=m/(h*h): %d\n", index);// 



	return 0;
}


