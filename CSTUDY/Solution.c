#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	int temp;
	printf("난수의 범위: 0부터 99까지 \n");
	for (i = 0; i < 5; i) {
		temp = rand();
		if (temp >= 0 && temp <= 99) {
			printf("난수 출력: %d \n", temp);
			i++;
		}
	}
	return 0;
	
}
