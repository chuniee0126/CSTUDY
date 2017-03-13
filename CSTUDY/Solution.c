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
	printf("3개의 정수 입력: ");
	scanf("%d %d %d", &a, &b, &c);

	printf("가장 큰 수 : %d, 가장 작은 수 : %d\n", max(a, b, c), min(a, b, c));

	system("pause");

	return 0;
}