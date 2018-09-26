#include "Main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//13. Написать функцию, генерирующую случайное число от 1 до 100
	printf("\n---=== 13 ===---\n");
	
	printf("My random is %d\n", myRand(1, 100));
	printf("System random is %d\n", systemRand(1, 100));

	getchar();

	return 0;
}

int myRand(int min, int max){
	int result = max/min;

	return result;
}

int systemRand(int min, int max){
	srand(max);
	int result = rand();

	return result;
}