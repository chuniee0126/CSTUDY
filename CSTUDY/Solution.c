#include <stdio.h>

int main()
{
	int num1, num2, num3 = 0;
	int result = 0;

	printf("please input three integer : ");
	scanf("%d %d %d", &num1, &num2, &num3);

	result = (num1 - num2)*(num2 + num3)*(num3 % num1);

	printf("result is %d \n", result);

	return 0;
}