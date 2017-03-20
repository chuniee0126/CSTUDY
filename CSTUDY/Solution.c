#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random() {

	srand((int)time(NULL));

	int temp = 0;
	
	while (1) {
		temp = rand();
		if (temp >= 0 && temp <= 9)
			break;
	}

	return temp;
}


int main(void)
{
	int cnum[3];
	int unum[3];
	int strike = 0, ball = 0, count = 1;

	cnum[0] = random();
	
	while (1) {
		cnum[1] = random();
		if (cnum[1] != cnum[0])
			break;
	}
	
	while (1) {
		cnum[2] = random();
		if (cnum[2] != cnum[0] && cnum[2] != cnum[1])
			break;
	}

	printf("Start Game!\n");

	while (1) {
		printf("3개의 숫자 선택 : ");
		scanf("%d %d %d", &unum[0], &unum[1], &unum[2]);
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (cnum[i] == unum[j]) {
					if (i == j)
						strike++;
					else
						ball++;
					break;
				}
			}
		}
		printf("%d번째 도전 결과 : %dstrike, %dball!!\n", count, strike, ball);
		
		if (strike == 3)
			break;
		
		strike = 0;
		ball = 0;
	}

	printf("Game over!\n");

	return 0;
	
}
