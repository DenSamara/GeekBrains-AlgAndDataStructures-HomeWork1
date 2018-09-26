#include "Main.h"

#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
	//Коновалов Денис

	int w, index, month, age, rest;
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
	
	//Ввести возраст человека (от 1 до 150 лет) и вывести его вместе с последующим словом «год», «года» или «лет».
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
				//11 - исключение
				if (age == 11)
					printf("%d let\n", age);
				else
					printf("%d god\n", age );
				break;
			case 2:
				//12 - исключение
				if (age == 12)
					printf("%d let\n", age);
				else
					printf("%d goda\n", age );
				break;
			case 3:
				//13 - исключение
				if (age == 13)
					printf("%d let\n", age);
				else
					printf("%d goda\n", age );
				break;
			case 4:
				//14 - исключение
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

	getchar();

	return 0;
}
