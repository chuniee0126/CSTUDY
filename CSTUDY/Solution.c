#include <stdio.h>
#include <string.h>


void bubble_ascending(int * arr, int len) {
	int temp;
	for (int index = 0; index < (len - 1); index++) {
		for (int index2 = 0; index2 < (len - 1 - index); index2++) {
			if (arr[index2] > arr[index2 + 1]) {
				temp = arr[index2];
				arr[index2] = arr[index2 + 1];
				arr[index2 + 1] = temp;
			}
		}
	}
}


int main(void)
{
	int arr[5];

	for (int index = 0; index < 5; index++) {
		scanf("%d", &arr[index]);
	}

	bubble_ascending(arr, 5);

	for (int index = 0; index < 5; index++) {
		printf("%d ", arr[index]);
	}

	printf("\n");

	system("pause");

	return 0;
	
}