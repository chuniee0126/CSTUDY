#include <stdio.h>

int main(void)
{
	char a;

	printf("please input any char : ");
	scanf("%c", &a);

	printf("%c is %d in ASCII Code\n", a, a);

	return 0;
	
}