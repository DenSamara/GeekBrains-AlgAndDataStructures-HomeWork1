#include "Main.h"

#include <math.h>
#include <stdio.h>

int main(void)
{
	int month;

	//С клавиатуры вводится номер месяца. Требуется определить, к какому времени года он относится
	printf("---=== 5 ===---\n");
	
	do{
		printf("Enter month number 1 - 12:\n");//height and 
		scanf("%d", &month);

		switch (month){
		case 1:
		case 2:
		case 12:
			printf("Season is Winter\n");
			break;
		case 3:
		case 4:
		case 5:
			printf("Season is Spring\n");
			break;
		case 6:
		case 7:
		case 8:
			printf("Season is Summer\n");
		break;
		case 9:
		case 10:
		case 11:
			printf("Season is Autumn\n");
		break;
		default:
			break;
		}
	}while(1 <= month && month <= 12);

	return 0;
}


