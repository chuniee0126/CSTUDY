#include <stdio.h>


int main(void)
{
	int count = 0, index = 1, num = 0;
	
	printf("��� n �Է� : ");
	scanf("%d", &num);

	if (num <= 1) {
		printf("�Է°��� ��� 1���� ū ���ڸ� �־��ּ���\n");
		return 0;
	}
	
	while (index <= num) {
		index = index * 2;
		count++;
	}

	printf("������ �����ϴ� K�� �ִ��� %d\n", count-1);
	

	system("pause");
	return 0;
}