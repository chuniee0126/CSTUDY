#include <stdio.h>

int pib(int num) {
	int pibo1 = 0, pibo2 = 1, index = 0;
	int temp;

	printf("�Ǻ���ġ���� : \n");

	for (; index < num; index++) {
		if (index == 0)
			printf("%d", pibo1);
		else if (index == 1)
			printf(", %d", pibo2);
		else {
			printf(", %d", pibo1 + pibo2);
			temp = pibo1;
			pibo1 = pibo2;
			pibo2 = temp + pibo2;
		}
	}

	printf("\n");
		
}

int main(void)
{
	int num;
	printf("�ڿ��� �Է�: ");
	scanf("%d", &num);

	pib(num);

	system("pause");

	return 0;
}