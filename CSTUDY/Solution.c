#include <stdio.h>

int main(void)
{
	int num, index = 0;

	printf("please input integer : ");
	scanf("%d", &num);

	while (index < num) {
		printf("Hello world!\n");
		index++;
	}

	system("pause");

	return 0;
}