#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	int temp;
	printf("������ ����: 0���� 99���� \n");
	for (i = 0; i < 5; i) {
		temp = rand();
		if (temp >= 0 && temp <= 99) {
			printf("���� ���: %d \n", temp);
			i++;
		}
	}
	return 0;
	
}
