#include <stdio.h>

int main(void)
{
	int x1, x2, y1, y2 = 0;
	int scale = 0;

	printf("���� �ϴ� ��ǥ �Է� : ");
	scanf("%d %d", &x1, &y1);
	printf("���� ��� ��ǥ �Է� : ");
	scanf("%d %d", &x2, &y2);

	scale = (x2 - x1)*(y2 - y1);

	printf("result is %d\n", scale);

	return 0;
	
}