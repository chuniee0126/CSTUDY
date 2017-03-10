#include <stdio.h>

int main()
{
	int num1, num2 = 0;
	int result1, result2 = 0;

	printf("please input two integer : ");
	scanf("%d %d", &num1, &num2);

	result1 = num1 + num2;
	result2 = num1 * num2;

	printf("sum : %d, verb : %d \n", result1, result2);

	return 0;
}