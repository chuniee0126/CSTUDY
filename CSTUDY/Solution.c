#include <stdio.h>
#include <math.h>

int check(int * arrt) {

	int temp = 0;

	while (1) {
		scanf("%d", &temp);

		if (arrt[temp - 1] == 0 && temp > 0 && temp <= 16) {
			arrt[temp - 1] = 1;
			return temp;
		}
		else
			printf("please another input : ");
	}
}

int BINGO(int rdn, int (*arr)[4], int (*bingo)[4], int (*bingocheck)[2]) {
	
	int i = 0, j = 0, h = 0;
	int num = 0;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			if (arr[i][j] == rdn) {
				h = 1;
				break;
			}
		}
		if (h == 1)
			break;
	}

	bingo[i][j] = arr[i][j];

	bingocheck[i][0]++;
	bingocheck[j][1]++;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 2; j++) {
			if (bingocheck[i][j] >= 4)
				num++;
		}
	}

	return num;

}


int main(void)
{
	int arr[4][4];
	int i = 0, j = 0;
	int temp = 0, rdn = 0;
	int checkint[16];
	int checkint2[16];
	int bingo[4][4];
	int bingocheck[4][2];

	srand((int)time(NULL));

	for (i = 0; i < 16; i++) {
		checkint[i] = 0;
		checkint2[i] = 0;
	}

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 2; j++) {
			bingocheck[i][j] = 0;
		}
	}

	for (i = 0; i < 4; i++) {
		printf("please input %d line : ", i+1);
		for (j = 0; j < 4; j++) {
			temp = check(checkint);
			arr[i][j] = temp;
			bingo[i][j] = 0;
		}
	}

	printf("만들어진 빙고판\n");

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}


	while (1) {
		rdn = rand() % 16;
		if (rdn < 0 && rdn > 16 || checkint2[rdn] != 0)
			continue;
		else if(checkint2[rdn] == 0)
		{
			checkint2[rdn]++;
			if (BINGO(rdn + 1, arr, bingo, bingocheck) >= 3)
				break;
		}
	}

	printf("빙고완료\n");

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%3d ", bingo[i][j]);
		}
		printf("\n");
	}
	
	

	return 0;
}
