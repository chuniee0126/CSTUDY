#include <stdio.h>


int main(void)
{
	int money = 0, useful = 0, useful2 = 0, useful3 = 0;
	int a = 0, b = 0, c = 0;
	printf("���� ����� �����ϰ� �ִ� �ݾ�(��): ");
	scanf("%d", &money);

	useful = (money - 1600)/100;

	for (a = 0; a <= (useful / 5); a++) {
		useful2 = useful - a * 5;
		if (useful2 > 0) {
			for (b = 0; b <= (useful2 / 7); b++) {
				useful3 = useful2 - b * 7;
				if (useful3 > 0) {
					for (c = 0; c <= (useful3 / 4); c++) {
						if ((useful3 - c * 4) == 0) {
							printf("ũ���� %d��, ����� %d��, �� �� %d��\n", a + 1, b + 1, c + 1);
						}
					}
				}
				else if (useful3 == 0) {
					printf("ũ���� %d��, ����� %d��, �� �� %d��\n", a + 1, b + 1, c + 1);
				}
				c = 0;
			}
		}
		else if (useful2 == 0) {
			printf("ũ���� %d��, ����� %d��, �� �� %d��\n", a + 1, b + 1, c + 1);
		}
		b = 0;
	}
	printf("��� �����Ͻðڽ��ϱ�?");

	system("pause");
	return 0;
}