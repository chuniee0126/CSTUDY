#include <stdio.h>

int main(void)
{
	int count, num, index = 0;
	float avr = 0;

	printf("How many integer what you want to input  : ");
	scanf("%d", &count);

	while (index < count) {
		printf("input%d : ", index + 1);
		scanf("%d", &num);
		avr += num;
		index++;
	}

	avr = (float)num / count;

	printf("average is %f\n", avr);

	system("pause");

	return 0;
}