#include <stdio.h>


int main(void)
{
	int num1 = 0, num2 = 0, temp = 0;
	printf("�� ���� ���� �Է�: ");
	scanf("%d %d", &num1, &num2);

	if (num1 > num2) {
		temp = num1;
		num1 = num2;
		num2 = temp;
	}

	for (; num1 > 0; num1--) {
		if ((num1%num1 == 0) && (num2%num1 == 0)) {
			printf("�� ���� �ִ�����: %d\n", num1);
			break;
		}
	}
	
	system("pause");
	return 0;
}