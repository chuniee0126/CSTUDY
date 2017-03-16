#include <stdio.h>


void MaxAndMin(int ** maxDptr, int ** minDptr, int arr[], int len) {
	int i, j = 0, k = 0;

	for (i = 1; i < len; i++) {
		if (arr[j] < arr[i])
			j = i;
		if (arr[k] > arr[i])
			k = i;
	}

	*maxDptr = &arr[j];
	*minDptr = &arr[k];

}

int main(void)
{
	int * maxptr = 0;
	int * minptr = 0;
	int arr[5] = { 3, 4, 6, 9, 2 };

	MaxAndMin(&maxptr, &minptr, arr, sizeof(arr)/sizeof(int));

	printf("Max %d\n", *maxptr);
	printf("Min %d\n", *minptr);


	printf("\n");

	system("pause");

	return 0;
	
}