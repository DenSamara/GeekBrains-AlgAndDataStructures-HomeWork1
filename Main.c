#include "Main.h"

#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
	//��������� �����

	int w, index, month, age, rest;
	float h, descr;
	int a = 1, b = 2, c = 9, d = 3, max;

	//"������ ��� � ���� ��������. ���������� � ������� ������ ����� ���� �� ������� I=m/(h*h); ��� m-����� ���� � �����������, h - ���� � ������\n"
	printf("---=== 1 ===---\n");
	printf("Enter man's weight in kilo:\n");//height and 
	scanf("%d", &w);

	printf("Enter man's height in meters:\n");// 
	scanf("%f", &h);

	//������� ������
	index = w/(h*h);
	printf("I=m/(h*h): %d\n", index);//

	//"����� ������������ �� ������� �����. ������� �� ������������
	printf("\n---=== 2 ===---\n");
	printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

	max = a;
	if (max < b) max = b;
	if (max < c) max = c;
	if (max < d) max = d;

	printf("max = %d\n", max);

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

	//4. �������� ��������� ���������� ������ ��������� ����������� ���������
	// (a*x)^2+b*x+c
	// d = b^2-4*a*c, d > 0 (2 �����), d = 0 - 1 ������, d < 0 - ������ ���
	printf("\n---=== 4 ===---\n");
	a = 1, b = 5, c = 3;
	printf("a = %d, b = %d, c = %d\n", a, b, c);

	descr = b*b-4*a*c;

	if (descr > 0){
		float x1 = (-b+sqrt(descr))/2*a;
		float x2 = (-b-sqrt(descr))/2*a;
		printf("2 roots: x1 = %.2f, x2 = %.2f\n", x1, x2);
	}else if (descr == 0){
		float x = (-b-sqrt(descr))/2*a;
		printf("1 root: x1 = %.2f\n", x);
	}else{
		printf("D = %f, no roots\n", descr);
	}
	
	//6. ������ ������� �������� (�� 1 �� 150 ���) � ������� ��� ������ � ����������� ������ ����, ����� ��� ����.
	printf("---=== 6 ===---\n");
	
	do{
		printf("Enter age 1 - 150:\n");
		scanf("%d", &age);

		rest = age % 10;

		switch (rest){
			case 0:
				printf("%d let\n", age);
				break;
			case 1:
				//11 - ����������
				if (age == 11)
					printf("%d let\n", age);
				else
					printf("%d god\n", age );
				break;
			case 2:
				//12 - ����������
				if (age == 12)
					printf("%d let\n", age);
				else
					printf("%d goda\n", age );
				break;
			case 3:
				//13 - ����������
				if (age == 13)
					printf("%d let\n", age);
				else
					printf("%d goda\n", age );
				break;
			case 4:
				//14 - ����������
				if (age == 14)
					printf("%d let\n", age);
				else
					printf("%d goda\n", age );
				break;
			default:
				printf("%d let\n", age);
				break;
		}
	}while(1 <= age && age <= 150);

	//7. � ���������� �������� �������� ���������� ���� ����� ��������� ����� (x1,y1,x2,y2)
	//��������� ����������, ��������� �� ���� � ������ ����� ��� ���

	int x1, y1, x2, y2, c1, c2;

	printf("\n---=== 7 ===---\n");
	//���� ���������� 1
	printf("Please input x1: ");
	scanf("%d", &x1);
	printf("Please input y1: ");
	scanf("%d", &y1);

	//���� ���������� 2
	printf("Please input x2: ");
	scanf("%d", &x2);
	printf("Please input y2: ");
	scanf("%d", &y2);

	printf("x1 = %d, y1 = %d\nx2 = %d, y2 = %d\n", x1, y1, x2, y2);

	if (x1 == y1 || (x1 % 2 == 1 && y1 % 2 == 1)){
		printf("Colour of first poinf is black\n");
		c1 = 0;
	}
	else {
		printf("Colour of first poinf is white\n");
		c1 = 1;
	}

	if (x2 == y2 || (x2 % 2 == 1 && y2 % 2 == 1)){
		printf("Colour of second poinf is black\n");
		c2 = 0;
	}
	else {
		printf("Colour of second poinf is white\n");
		c2 = 1;
	}

	if (c1 == c2)
		printf("Colours is the same");
	else
		printf("Colours are different");

	scanf("%d", &y2);

	getchar();

	return 0;
}
