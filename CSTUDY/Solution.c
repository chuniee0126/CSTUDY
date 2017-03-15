#include <stdio.h>


int main(void)
{
	int arr[5] = { 1,2,3,4,5 };
	int * ptr = arr;
	
	for (int index = 0; index < 5; index++) {
		*(ptr + index) += 2;
	}

	for (int index = 0; index < 5; index++) {
		printf("%d \n", arr[index]);
	}

	system("pause");
	return 0;
}