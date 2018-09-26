#include "Main.h"

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
<<<<<<< HEAD
	//Коновалов Денис

	//"Ввести вес и рост человека. Рассчитать и вывести индекс массы тела по формуле I=m/(h*h); где m-масса тела в килограммах, h - рост в метрах\n"
	int w, index;
	float h;

	//Переменные для задачи 2
	int a = 1, b = 2, c = 9, d = 3, max;

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

	int a, b, c;

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

	getchar();

	return 0;
}
