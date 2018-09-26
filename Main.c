#include "Main.h"
#include <stdio.h>

int main(void)
{
	//С клавиатуры вводятся числовые координаты двух полей шахматной доски (x1,y1,x2,y2)
	//Требуется определить, относятся ли поля к одному цвету или нет

	int x1, y1, x2, y2, c1, c2;

	printf("\n---=== 7 ===---\n");
	//Берём координаты 1
	printf("Please input x1: ");
	scanf("%d", &x1);
	printf("Please input y1: ");
	scanf("%d", &y1);

	//Берём координаты 2
	printf("Please input x2: ");
	scanf("%d", &x2);
	printf("Please input y2: ");
	scanf("%d", &y2);

	printf("x1 = %d, y1 = %d\nx2 = %d, y2 = %d\n", x1, y1, x2, y2);

	if (x1 == y1 || (x1 % 2 == 1 && y1 % 2 == 1)){
		printf("Colour of first poinf is black\n");
		c1 = 0;
	}
	else {
		printf("Colour of first poinf is white\n");
		c1 = 1;
	}

	if (x2 == y2 || (x2 % 2 == 1 && y2 % 2 == 1)){
		printf("Colour of second poinf is black\n");
		c2 = 0;
	}
	else {
		printf("Colour of second poinf is white\n");
		c2 = 1;
	}

	if (c1 == c2)
		printf("Colours is the same");
	else
		printf("Colours are different");

	scanf("%d", &y2);

	return 0;
}


