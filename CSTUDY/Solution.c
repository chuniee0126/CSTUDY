#include <stdio.h>

int main(void)
{
	int index = 1;

	printf("A program that outputs a multiple of 7 and a multiple of 9 from an integer greater than or equal to 1 and less than 100 ");

	for (; index < 100; index++) {
		
		if (((index % 7) == 0) || ((index % 9) == 0))
			printf("%d\n", index);

	}

	system("pause");

	return 0;
}