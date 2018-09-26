#include "Main.h"

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
	//Коновалов Денис

	int w, index, month, age, rest, i, result, sum;
	float h, descr;
	//Задача 2
	int a, b, c, d, max;
	//Задача 7
	int x1, y1, x2, y2, c1, c2;
	//Задача 9. Частное
	int quotient = 0;
	//Задача 10
	int n, k;

	//1. Ввести вес и рост человека. Рассчитать и вывести индекс массы тела по формуле I=m/(h*h); где m-масса тела в килограммах, h - рост в метрах\n"
	printf("---=== 1 ===---\n");
	printf("Enter man's weight in kilo:\n");//height and 
	scanf("%d", &w);

	printf("Enter man's height in meters:\n");// 
	scanf("%f", &h);

	//Считаем индекс
	index = w/(h*h);
	printf("I=m/(h*h): %d\n", index);//

	//2. Найти максимальное из четырех чисел. Массивы не использовать
	printf("\n---=== 2 ===---\n");
	a = 1, b = 2, c = 9, d = 3, max;
	printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

	max = a;
	if (max < b) max = b;
	if (max < c) max = c;
	if (max < d) max = d;

	printf("max = %d\n", max);

	//3. Написать программу обмена значениями двух целочисленных переменных:
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

	//5. С клавиатуры вводится номер месяца. Требуется определить, к какому времени года он относится
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
	
	//6. Ввести возраст человека (от 1 до 150 лет) и вывести его вместе с последующим словом «год», «года» или «лет».
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

	//7. С клавиатуры вводятся числовые координаты двух полей шахматной доски (x1,y1,x2,y2)
	//Требуется определить, относятся ли поля к одному цвету или нет

	printf("\n---=== 7 ===---\n");
	//Берём координаты 1
	printf("Please input x1: ");
	scanf("%d", &x1);
	printf("Please input y1: ");
	scanf("%d", &y1);

	//Берём координаты 2
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

	//8. Ввести a и b и вывести квадраты и кубы чисел от a до b
	printf("\n---=== 8 ===---\n");
	
	do{
		printf("Please input a: ");
		scanf("%d", &a);
		printf("Please input b: ");
		scanf("%d", &b);

		//Можно не делать контроль ввода, а начать цикл с меньшего числа, например
		if (a > b) printf("a must be more than b\n");
	} while (a > b);

	for (i = a; i <= b; i++){
		printf("%d ^ 2 = %d, %d ^ 3 = %d\n", i, i*i, i, i*i*i);
	}


	//9. Даны целые положительные числа N и K. Используя только операции сложения и вычитания, найти частное от деления нацело N на K, а также остаток от этого деления

	printf("\n---=== 8 ===---\n");
	
	do{
		printf("Please input n: ");
		scanf("%d", &n);
		printf("Please input k: ");
		scanf("%d", &k);
		if (n < k) printf("n must be more than k\n");
	}while (n < k);

	rest = n;
	do{
		rest -= k;
		quotient++;
	}while (rest >= k);


	printf("%d/%d = %d (%d)\n", n, k, quotient, rest);

	//10. Дано целое число N (> 0). С помощью операций деления нацело и взятия остатка от деления определить,
	//имеются ли в записи числа N нечетные цифры. Если имеются, то вывести True, если нет — вывести False.
	
	//10 и 11 решения пришлось закомментировать, потому что для функции div просит div_t вместо int. А в отдельном файле всё работает

	/*
	printf("\n---=== 10 ===---\n");
	result = 0;
	
	do{
		printf("Please input n: ");
		scanf("%d", &n);
		
		if (n <= 0) printf("n must be more than 0\n");
	}while (n <= 0);

	do{
		rest = n % 10;
		//Если нашли нечётное число - выходим
		if (rest % 2 == 1){
			result = 1;
			break;
		}
	}while (n != 0);


		n = div(n-rest, 10);
	}while (n > 0);

	printf(result == 1 ? "true" : "false");
	

	//11. С клавиатуры вводятся числа, пока не будет введен 0.
	//Подсчитать среднее арифметическое всех положительных четных чисел,
	//оканчивающихся на 8.

	printf("\n---=== 11 ===---\n");
	i = 0;
	sum = 0;
	do{
		printf("Please input n: ");
		scanf("%d", &n);
		
		if ( n > 0 && (n - div(n, 10) * 10) == 8 ){
			sum += n;
			i++;
		}
	}while (n != 0);

	if (i > 0)
		printf("Was entered numbers end with 8: %d, avg is %d\n", i, sum/i);
	else
		printf("Was entered zero numbers ends with 8\n");
	*/

	//12. Написать функцию нахождения максимального из трех чисел

	printf("\n---=== 12 ===---\n");
	
	printf("Please input first number: ");
	scanf("%d", &a);

	printf("Please input first number: ");
	scanf("%d", &b);

	printf("Please input first number: ");
	scanf("%d", &c);
		
	printf("\nMaximum number is %d\n", findmax(a, b, c));

	getchar();

	return 0;
}

//Функция нахождения большего из 3 чисел для задачи 12
int findmax(int a, int b, int c){
	int result = a;

	if (result < b) result = b;
	if (result < c) result = c;

	return result;
}
