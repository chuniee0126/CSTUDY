#include <stdio.h>


int main(void)
{
	int index = 0, count = 0, sum = 0, num = 2;
	while (count < 10)
	{
		for (index = num - 1; index > 1; index--) {
			if (num % index == 0) {
				sum = 1;
			}
		}

		if (sum == 0) {
			printf("%d ", num);
			count++;
		}

		sum = 0;
		num++;
	}

	system("pause");
	return 0;
}