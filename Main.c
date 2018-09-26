#include "Main.h"

#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
<<<<<<< HEAD
	//Коновалов Денис

	int w, index, month;
	float h, descr;
	int a = 1, b = 2, c = 9, d = 3, max;

	//"Ввести вес и рост человека. Рассчитать и вывести индекс массы тела по формуле I=m/(h*h); где m-масса тела в килограммах, h - рост в метрах\n"
	printf("---=== 1 ===---\n");
	printf("Enter man's weight in kilo:\n");//height and 
	scanf("%d", &w);

	printf("Enter man's height in meters:\n");// 
	scanf("%f", &h);

	//Считаем индекс
	index = w/(h*h);
	printf("I=m/(h*h): %d\n", index);//

	//"Найти максимальное из четырех чисел. Массивы не использовать
	printf("\n---=== 2 ===---\n");
	printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

	max = a;
	if (max < b) max = b;
	if (max < c) max = c;
	if (max < d) max = d;

	printf("max = %d\n", max);

	//Написать программу обмена значениями двух целочисленных переменных:
	//a. с использованием третьей переменной;
	//b. *без использования третьей переменной.
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

	//4. Написать программу нахождения корней заданного квадратного уравнения
	// (a*x)^2+b*x+c
	// d = b^2-4*a*c, d > 0 (2 корня), d = 0 - 1 корень, d < 0 - корней нет
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

	//С клавиатуры вводится номер месяца. Требуется определить, к какому времени года он относится
	printf("---=== 5 ===---\n");
	
	do{
		printf("Enter month number 1 - 12:\n");//height and 
		scanf("%d", &month);

		switch (month){
		case 1:
		case 2:
		case 12:
			printf("Season is Winter\n");
			break;
		case 3:
		case 4:
		case 5:
			printf("Season is Spring\n");
			break;
		case 6:
		case 7:
		case 8:
			printf("Season is Summer\n");
		break;
		case 9:
		case 10:
		case 11:
			printf("Season is Autumn\n");
		break;
		default:
			break;
		}
	}while(1 <= month && month <= 12);

	getchar();

	return 0;
}
