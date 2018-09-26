#include "Main.h"
#include <stdio.h>

int main(void)
{
	//Ввести a и b и вывести квадраты и кубы чисел от a до b

	int a, b, i;

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

	return 0;
}


