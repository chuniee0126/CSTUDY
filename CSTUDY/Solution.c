#include <stdio.h>


int main(void)
{
	int num1 = 0, num2 = 0, temp = 0;
	printf("input two integer: ");
	scanf("%d %d", &num1, &num2);

	if (num1 > num2) {
		temp = num1;
		num1 = num2;
		num2 = temp;
	}

	printf("\n");

	for (; num1 <= num2; num1++) {
		printf("%d단을 출력합니다.\n", num1);
		for (int index = 1; index <= 9; index++) {
			printf("%d X %d = %d\n", num1, index, num1*index);
		}
		printf("\n");
	}
	
	system("pause");
	return 0;
}