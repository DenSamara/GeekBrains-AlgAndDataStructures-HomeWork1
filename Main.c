#include "Main.h"

#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
	// оновалов ƒенис

	int w, index;
	float h, descr;
	int a = 1, b = 2, c = 9, d = 3, max;

	//"¬вести вес и рост человека. –ассчитать и вывести индекс массы тела по формуле I=m/(h*h); где m-масса тела в килограммах, h - рост в метрах\n"
	printf("---=== 1 ===---\n");
	printf("Enter man's weight in kilo:\n");//height and 
	scanf("%d", &w);

	printf("Enter man's height in meters:\n");// 
	scanf("%f", &h);

	//—читаем индекс
	index = w/(h*h);
	printf("I=m/(h*h): %d\n", index);//

	//"Ќайти максимальное из четырех чисел. ћассивы не использовать
	printf("\n---=== 2 ===---\n");
	printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

	max = a;
	if (max < b) max = b;
	if (max < c) max = c;
	if (max < d) max = d;

	printf("max = %d\n", max);

	//Ќаписать программу обмена значени€ми двух целочисленных переменных:
	//a. с использованием третьей переменной;
	//b. *без использовани€ третьей переменной.
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

	//4. Ќаписать программу нахождени€ корней заданного квадратного уравнени€
	// (a*x)^2+b*x+c
	// d = b^2-4*a*c, d > 0 (2 корн€), d = 0 - 1 корень, d < 0 - корней нет
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

	getchar();

	return 0;
}
