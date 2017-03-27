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
			printf("That int is already there, please another int : ");
	}
}



int main(void)
{
	int arr[4][4];
	int i = 0, j = 0;
	int temp = 0;
	int checkint[16];

	for (i = 0; i < 16; i++) {
		checkint[i] = 0;
	}

	for (i = 0; i < 4; i++) {
		printf("please input %d line : ", i+1);
		for (j = 0; j < 4; j++) {
			temp = check(checkint);
			arr[i][j] = temp;
		}
	}



	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	

	return 0;
}
