#include <stdio.h>


int main(void)
{
	int num;
	printf("input integer: ");
	scanf("%d", &num);

	printf("%o, %d, %x", num, num, num);

	system("pause");

	return 0;
}