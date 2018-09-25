#include "Main.h"

#include <math.h>
#include <stdio.h>

int main(void)
{
	int a = 1, b = 5, c = 3;
	float descr;

	//4. Ќаписать программу нахождени€ корней заданного квадратного уравнени€
	// (a*x)^2+b*x+c
	// d = b^2-4*a*c, d > 0 (2 корн€), d = 0 - 1 корень, d < 0 - корней нет
	printf("\n---=== 4 ===---\n");
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


	return 0;
}


