#include "Main.h"
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int isAutomorph(int n){
	int quad;
	quad = n * n;
	while (n > 0){
		if (quad % 10 != n % 10)
			return 0;
		n /= 10;
		quad /= 10;
	}
	return 1;
}

void printAllAutomorph(int n){
	int i = 5, quad = 1;

	while (quad < n)
    {
		quad = i * i;
		if (isAutomorph(i)){
			printf("%d * %d = %d\n", i, i, quad);
		}
		i++;
	}
}

int main(int argc, const char * argv[])
{
	int n;

	setlocale(LC_ALL, "Rus");
	
	//14 Напишите программу, которая вводит натуральное число N и выводит на экран все автоморфные числа, не превосходящие N.
	printf("\n---=== 14 ===---\n");
	printf("Введите N меньше которого должны быть автоморфные числа, 0 - выход из программы\n");

	do {
		scanf("%d", &n);

		printAllAutomorph(n);
	}while(n != 0);

	return 0;
}