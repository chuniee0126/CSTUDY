#include <stdio.h>


int main(void)
{
	int arr[10];
	int temp;
	int countf = 0, countp = sizeof(arr) / sizeof(int) - 1;

	printf("총 10개의 숫자 입력\n");

	for (int index = 0; index < 10; index++) {
		printf("입력 : ");
		scanf("%d", &temp);
		if (temp % 2 == 1) {
			arr[countf] = temp;
			countf++;
		}
		else {
			arr[countp] = temp;
			countp--;
		}
	}

	printf("배열 요소의 출력 : ");

	for (int index = 0; index < 10; index++) {
		printf("%d ", arr[index]);
	}

	printf("\n");

	system("pause");

	return 0;
	
}