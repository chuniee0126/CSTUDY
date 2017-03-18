#include <stdio.h>

void rotation(int (*arrt)[4], int (*(*arr)[4])) {
	int i = 0;
	int j = 0;
	int temp = 0;
	int carr[4][4];
	//int * carr[4] = { car[0], car[1], car[2], car[3] };

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			if ((j == 0 && i != 0) || (j ==1 && i == 2)) {
				carr[i - 1][j] = (*arr)[i][j];
			}
			else if ((j == 3 && i != 3) || (j == 2 && i == 1)) {
				carr[i + 1][j] = (*arr)[i][j];
			}
			else if ((i == 0 && j != 3) || (i == 1 && j == 1)) {
				carr[i][j + 1] = (*arr)[i][j];
			}
			else if ((i == 3 && j != 0) || (i == 2 && j == 2)) {
				carr[i][j - 1] = (*arr)[i][j];
			}
		}
	}
	(*arr)[0] = carr[0];
	(*arr)[1] = carr[1];
	(*arr)[2] = carr[2];
	(*arr)[3] = carr[3];
}

int main(void)
{
	int arrt[4][4] = { {1,2,3,4} , {5,6,7,8} , {9,10,11,12}, {13,14,15,16} };
	int * arrts[4];
	for (int i = 0; i < 4; i++) {
		arrts[i] = arrt[i];
	}

	for (int index = 0; index < 4; index++) {
		rotation(&arrt, &arrts);
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				printf("%d ", arrts[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}


	system("pause");

	return 0;
	
}
