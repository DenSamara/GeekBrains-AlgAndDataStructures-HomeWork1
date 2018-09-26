#include "Main.h"
#include <stdio.h>

int main(void)
{
	//11. С клавиатуры вводятся числа, пока не будет введен 0. Подсчитать среднее арифметическое всех положительных четных чисел, оканчивающихся на 8.

	int n, a, i, sum;

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

	scanf("%d", &n);
	return 0;
}