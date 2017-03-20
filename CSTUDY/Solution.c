#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void cheak(int temp, char temps[], char rock[], char scissor[], char paper[]) {
	switch (temp)
	{
	case 1:
		for (int i = 0; i < 15; i++) {
			temps[i] = rock[i];
		}
		break;
	case 2: 
		for (int i = 0; i < 15; i++) {
			temps[i] = scissor[i];
		}
		break;
	case 3: 
		for (int i = 0; i < 15; i++) {
			temps[i] = paper[i];
		}
		break;
	default:
		break;
	}
}

void results(int user, int computer, char result[]) {
	char temp1[100] = "�����ϴ�!";
	char temp2[100] = "����� �̰���ϴ�!";
	char temp3[100] = "����� �����ϴ�!";
	if (user == computer)
		for (int i = 0; i < 100; i++) {
			result[i] = temp1[i];
		}
	else if(((user - computer) == -1) || ((user - computer) == 2))
		for (int i = 0; i < 100; i++) {
			result[i] = temp2[i];
		}
	else
		for (int i = 0; i < 100; i++) {
			result[i] = temp3[i];
		}
}

int main(void)
{
	char rock[15] = "����";
	char scissor[15] = "����";
	char paper[15] = "��";
	char users[15];
	char computers[15];
	int user = 0;
	int computer = 0;
	char result[100];

	srand((int)time(NULL));

	while (1) {	
		printf("������ 1, ������ 2, ���� 3: ");
		scanf("%d", &user);
		while (1) {
			computer = rand();
			if (computer >= 1 && computer <= 3)
				break;
		}
		
		cheak(user, users, rock, scissor, paper);
		cheak(computer, computers, rock, scissor, paper);

		results(user, computer, result);

		printf("����� %s ����, ��ǻ�ʹ� %s ����, %s \n", users, computers, result);

		if (((user - computer) == 1) || ((user - computer) == -2))
			break;

	}
	

	return 0;
	
}
