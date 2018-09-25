#include "Main.h"
#include <stdio.h>

int main(void)
{
	int a = 1, b = 2, c = 9, d = 3, max;

	//"Найти максимальное из четырех чисел. Массивы не использовать
	printf("\n---=== 2 ===---\n");
	printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

	max = a;
	if (max < b) max = b;
	if (max < c) max = c;
	if (max < d) max = d;

	printf("max = %d\n", max);

	scanf("%f", &h);

	return 0;
}


