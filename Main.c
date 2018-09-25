#include "Main.h"
#include <stdio.h>

int main(void)
{
	printf("---=== 1 ===---\n");
	printf("Ввести вес и рост человека. Рассчитать и вывести индекс массы тела по формуле I=m/(h*h); где m-масса тела в килограммах, h - рост в метрах\n");
	int w, index;
	float h;

	printf("Enter man's weight in kilo:\n");//height and 
	scanf("%d", &w);

	printf("Enter man's height in meters:\n");// 
	scanf("%f", &h);

	//Считаем индекс
	index = w/(h*h);
	printf("I=m/(h*h): %d\n", index);// 



	return 0;
}


