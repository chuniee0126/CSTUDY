#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void cheak(int temp, char (*temps)[15], char (*rock)[15], char (*scissor)[15], char (*paper)[15]) {
	switch (temp)
	{
	case 1: (*temps)[0] = rock[0];
		break;
	case 2: (*temps)[0] = scissor[0];
		break;
	case 3: (*temps)[0] = paper[0];
		break;
	default:
		break;
	}
}

void results(int user, int computer, char result[]) {
	if (user == computer)
		result = "비겼습니다!";
	else if(((user - computer) == -1) || ((user - computer) == -2))
		result = "당신이 이겼습니다!";
	else
		result[100] = "당신이 졌습니다!";
}

int main(void)
{
	char (*rock)[15] = "1";
	char (*scissor)[15] = "2";
	char (*paper)[15] = "3";
	char users[1][15];
	char computers[1][15];
	int user = 0;
	int computer = 0;
	char result[1][100];

	srand((int)time(NULL));

	while (1) {	
		printf("바위는 1, 가위는 2, 보는 3: ");
		scanf("%d", &user);
		while (1) {
			computer = 1;
			if (computer >= 1 && computer <= 3)
				break;
		}
		
		cheak(user, users, rock, scissor, paper);
		cheak(computer, computers, rock, scissor, paper);

		results(user, computer, result);

		printf("당신은 %s 선택, 컴퓨터는 %s 선택, %s \n", users, computers, result);

	}
	

	return 0;
	
}
