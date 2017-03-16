#include <stdio.h>
#include <string.h>


void bubble_descending(int ary[], int len) {
	int index, index2;
	int temp;
	for (index = 0; index < (len - 1); index++) {
		for (index2 = 0; index2 < (len - 1 - index); index2++) {
			if (ary[index2] < ary[index2 + 1]) {
				temp = ary[index2];
				ary[index2] = ary[index2 + 1];
				ary[index2 + 1] = temp;
			}
		}
	}
}


int main(void)
{
	int arr[7];

	for (int index = 0; index < 7; index++) {
		printf("ют╥б : ");
		scanf("%d", &arr[index]);
	}

	bubble_ascending(arr, 7);

	for (int index = 0; index < 7; index++) {
		printf("%d ", arr[index]);
	}

	printf("\n");

	system("pause");

	return 0;
	
}