#include "Main.h"

#include <math.h>
#include <stdio.h>

int main(void)
{
	int age;
	//������� �� �������
	int rest;

	//������ ������� �������� (�� 1 �� 150 ���) � ������� ��� ������ � ����������� ������ ����, ����� ��� ����.
	printf("---=== 6 ===---\n");
	
	do{
		printf("Enter age 1 - 150:\n");
		scanf("%d", &age);

		rest = age % 10;

		switch (rest){
			case 0:
				printf("%d let\n", age);
				break;
			case 1:
				//11 - ����������
				if (age == 11)
					printf("%d let\n", age);
				else
					printf("%d god\n", age );
				break;
			case 2:
				//12 - ����������
				if (age == 12)
					printf("%d let\n", age);
				else
					printf("%d goda\n", age );
				break;
			case 3:
				//13 - ����������
				if (age == 13)
					printf("%d let\n", age);
				else
					printf("%d goda\n", age );
				break;
			case 4:
				//14 - ����������
				if (age == 14)
					printf("%d let\n", age);
				else
					printf("%d goda\n", age );
				break;
			default:
				printf("%d let\n", age);
				break;
		}
	}while(1 <= age && age <= 150);

	return 0;
}


