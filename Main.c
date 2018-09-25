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
	//"Ввести вес и рост человека. Рассчитать и вывести индекс массы тела по формуле I=m/(h*h); где m-масса тела в килограммах, h - рост в метрах\n"
	printf("---=== 1 ===---\n");
	
	printf("Enter man's weight in kilo:\n");//height and 
	scanf("%d", &w);

	printf("Enter man's height in meters:\n");// 
	scanf("%f", &h);

	//Считаем индекс
	index = w/(h*h);
	printf("I=m/(h*h): %.2f\n", index);// 
	*/
	
	//"Найти максимальное из четырех чисел. Массивы не использовать
	printf("\n---=== 2 ===---\n");
	printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

	max = a;
	if (max < b) max = b;
	if (max < c) max = c;
	if (max < d) max = d;

	printf("max = %d\n", max);

	scanf("%f", &h);

	return 0;
}


