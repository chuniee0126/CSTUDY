#include <stdio.h>
#include <string.h>



int main(void)
{
	int * arr = (int *)malloc(sizeof(int) * 5);
	int count = 0, lenght = 5;


	while (1)
	{
		if (count < lenght) {
			printf("%d번 숫자를 입력하세요 : ", count+1);
			scanf("%d", &arr[count]);
			if (arr[count] == -1)
				break;
			count++;
		}
		else
		{
			arr = (int*)realloc(arr, sizeof(int) * (count + 3));
			lenght = count + 3;
		}
	}

	for (int i = 0; i <= count; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	free(arr);

	return 0;
}
