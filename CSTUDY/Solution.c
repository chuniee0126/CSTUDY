#include <stdio.h>
#include <string.h>


int main(void)
{
	char arr[100];
	int count = 0;

	printf("���ڿ� �Է� : ");

	scanf("%s", arr);

	for (unsigned int index = 0; index < (strlen(arr) / 2); index++) {
		printf("%c, %c \n", arr[index], arr[strlen(arr) - 1 - index]);
		if (arr[index] != arr[strlen(arr)- 1 - index])
			count++;
	}

	if (count == 0)
		printf("ȸ�� �Դϴ�. \n");
	else
		printf("ȸ���� �ƴմϴ�. \n");

	printf("\n");

	system("pause");

	return 0;
	
}