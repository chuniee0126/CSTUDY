#include <stdio.h>

void rotation(int (*arr)[4]) {
	int i = 0;
	int j = 0;
	int temp[4][4];
	//int * temp[4] = { &arr[0], &arr[1], &arr[2], &arr[3] };
	/*for (int index = 0; index < 4; index++) {
		for (int jndex = 0; jndex < 4; jndex++) {
			temp[index][jndex] = arr[index][jndex];
		}
	}*/

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			if (i == 0) {
				temp[j][3] = (arr)[i][j];
			}
			if (i == 1) {
				temp[j][2] = (arr)[i][j];
			}
			if (i == 2) {
				temp[j][1] = (arr)[i][j];
			}
			if (i == 3) {
				temp[j][0] = (arr)[i][j];
			}
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
	// int * arrts[4] = { arrt[0], arrt[1], arrt[2], arrt[3] };

	for (int index = 0; index < 4; index++) {
		rotation(arr);
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				printf("%2d ", arr[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}


	system("pause");

	return 0;
	
}
