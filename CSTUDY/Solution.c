#include <stdio.h>


int main(void)
{
	int arr[6] = { 1,2,3,4,5,6 };
	int * preptr = &arr[0];
	int * postptr = &arr[5];
	int temp;

	for (int index = 0; index < 3; index++) {
		temp = *(preptr + index);
		*(preptr + index) = *(postptr - index);
		*(postptr - index) = temp;
	}

	for (int index = 0; index < 6; index++) {
		printf("%d \n", arr[index]);
	}

	system("pause");
	return 0;
}