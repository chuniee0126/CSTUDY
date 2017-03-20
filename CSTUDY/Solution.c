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
		result = "�����ϴ�!";
	else if(((user - computer) == -1) || ((user - computer) == -2))
		result = "����� �̰���ϴ�!";
	else
		result[100] = "����� �����ϴ�!";
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
		printf("������ 1, ������ 2, ���� 3: ");
		scanf("%d", &user);
		while (1) {
			computer = 1;
			if (computer >= 1 && computer <= 3)
				break;
		}
		
		cheak(user, users, rock, scissor, paper);
		cheak(computer, computers, rock, scissor, paper);

		results(user, computer, result);

		printf("����� %s ����, ��ǻ�ʹ� %s ����, %s \n", users, computers, result);

	}
	

	return 0;
	
}
