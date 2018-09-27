#include "Main.h"
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

const int x = 123456789, y = 362436000, z = 521288629, c = 7654321;

int main(int argc, const char * argv[])
{
	int q = 1;

	setlocale(LC_ALL, "Rus");
	
	//13. Написать функцию, генерирующую случайное число от 1 до 100
	printf("\n---=== 13 ===---\n");
	printf("Наберите 0 для выхода, любое другое - для повтора\n");

	do {
		printf("My random is %d\n", myRand(1, 100));
		printf("System random is %d\n", systemRand(1, 100));
		scanf("%d", &q);
	}while(q != 0);

	//system("pause");
	return 0;
}

unsigned int myRand(int min, int max){
	int i = 0;
	unsigned int result = time(NULL);
	
	for (i = 1; i < 100; i++){
		if (result & 13 == 0){
			result = result * c;
		}
		else
			result = result * i;

		if (result & 11 == 0)
			result = result * i;
		else{
			result += x^(x>>6);
		}

		result *= i;

		if (result & 19 == 0)
			result = result * i;
		else{
			result += y^(y>>7);
		}

		result *= i;

		if (result & 7 == 0)
			result = result * i;
		else{
			result += z^(z<<13);
		}

		result *= i;

		if (result & 2 == 0)
			result += c^(c>>32);
		else{
			result = result * i;
			break;
		}
	}

	return (unsigned int)((double)result/((double)(x))*(double)max)+1;
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