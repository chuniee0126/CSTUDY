#include <stdio.h>

void rotation(int (*arr)[4]) {
	int i = 0;
	int j = 0;
	int temp[4][4];

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			temp[j][3-i] = (arr)[i][j];
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			(arr)[i][j] = temp[i][j];
		}
	}
}

int main(void)
{
	int arr[4][4] = { {1,2,3,4} , {5,6,7,8} , {9,10,11,12}, {13,14,15,16} };

	for (int index = 0; index < 4; index++) {
		
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				printf("%2d ", arr[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		rotation(arr);
	}


	system("pause");

	return 0;
	
}
