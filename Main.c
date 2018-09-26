#include "Main.h"
#include <stdio.h>

int main(void)
{
	//12. Написать функцию нахождения максимального из трех чисел

	int a, b, c;

	printf("\n---=== 12 ===---\n");
	
	printf("Please input first number: ");
	scanf("%d", &a);

	printf("Please input first number: ");
	scanf("%d", &b);

	printf("Please input first number: ");
	scanf("%d", &c);
		
	printf("\nMaximum number is %d\n", max(a, b, c));

	return 0;
}

int max(int a, int b, int c){
	int result = a;
	if (result < b) result = b;
	if (result < c) result = c;

	return result;
}