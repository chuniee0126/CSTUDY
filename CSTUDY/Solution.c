#include <stdio.h>

int max(int a, int b, int c) {
	int result = a;
	if (result <b)
		result = b;
	if (result < c)
		result = c;

	return result;
}

int min(int a, int b, int c) {
	int result = a;
	if (result > b)
		result = b;
	if (result > c)
		result = c;

	return result;
}

int main(void)
{
	int a = 0, b = 0, c = 0;
	printf("3���� ���� �Է�: ");
	scanf("%d %d %d", &a, &b, &c);

	printf("���� ū �� : %d, ���� ���� �� : %d\n", max(a, b, c), min(a, b, c));

	system("pause");

	return 0;
}