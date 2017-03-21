#include <stdio.h>


int main(void)
{
	char str[50];
	int sum = 0;
	gets(str);

	for (int i = 0; i < 50; i++) {
		if (str[i] >= 49 && str[i] < 58)
			sum = sum + str[i] - 48;
		else if (str[i] == NULL)
			break;
	}
	
	printf("%d \n", sum);
		
	return 0;
	
}
