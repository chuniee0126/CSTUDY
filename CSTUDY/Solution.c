#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int dice1 = 0;
	int dice2 = 0;
	int i = 0;
	srand((int)time(NULL));

	while (i != 1) {	
		dice1 = rand();
		if (dice1 >= 1 && dice1 <= 6) {
			printf("주사위 1의 결과 %d \n", dice1);
			i++;
		}
	}
	while (i != 2) {
		dice2 = rand();
		if (dice2 >= 1 && dice2 <= 6) {
			printf("주사위 1의 결과 %d \n", dice2);
			i++;
		}
	}

	return 0;
	
}
