#include "Main.h"
#include <stdio.h>

int main(void)
{
	//Даны целые положительные числа N и K. Используя только операции сложения и вычитания, найти частное от деления нацело N на K, а также остаток от этого деления

	int n, k;
	//Частное и остаток
	int quotient = 0, rest;

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

	scanf("%d", &n);
	return 0;
}