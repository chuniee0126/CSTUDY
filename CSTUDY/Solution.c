#include <stdio.h>

float function(int num) {
	if (num == 0)
		return 1;
	else if (num > 0)
		return 2 * function(num - 1);
	else if (num < 0)
		return 0.5 * function(num + 1);
}

int main(void)
{
	int num = 0;
	
	printf("���� �Է� : ");
	scanf("%d", &num);

	printf("2�� %d���� %f\n", num, function(num));

	system("pause");
	return 0;
}