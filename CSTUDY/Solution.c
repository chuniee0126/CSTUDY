#include <stdio.h>

int main(void)
{
	int index = 1;
	int result = 0;

	while (index <= 100) {
		if ((index % 2) == 0)
			result += index;
		index++;
	}

	printf("result is %d\n", result);

	system("pause");

	return 0;
}