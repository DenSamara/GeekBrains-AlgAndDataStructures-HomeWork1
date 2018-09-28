#include "Main.h"
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, const char * argv[])
{
	unsigned short myLastRandom = 1;
	int q = 1;

	setlocale(LC_ALL, "Rus");
	
	//13. Написать функцию, генерирующую случайное число от 1 до 100
	printf("\n---=== 13 ===---\n");
	printf("Наберите 0 для выхода, любое другое - для повтора\n");

	do {
		myLastRandom = myRand(myLastRandom, 100);
		printf("My random is %d\n", myLastRandom);
		printf("System random is %d\n", systemRand(1, 100));
		scanf("%d", &q);
	}while(q != 0);

	//system("pause");
	return 0;
}

//xn+1 = (A*Xn+B)%M
unsigned int myRand(int min, int max){
	int a=2, b=3;
	return (a*min+b)%max;
}

unsigned int systemRand(int min, int max){
	errno_t err;
	unsigned result;

	err = rand_s(&result);
	if (err != 0)
    {
		printf_s("The rand_s function failed!\n");
		return -1;
	}

	return (unsigned int)((double)result/((double)(UINT_MAX))*(double)max)+min;
}