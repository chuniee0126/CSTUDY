#include <stdio.h>
#include <string.h>


void emptyBuffer(void) {
	while (getchar() != '\n');
}

struct employee
{
	char name[10];
	char perId[16];
	long pee;
} per[3];

int main(void)
{
	int i;

	for (i = 0; i < 3; i++) {

		printf("%d��° ����� ������ �Է��ϼ���.\n", i+1);

		fputs("please input name : ", stdout);
		fgets(per[i].name, sizeof(per[i].name), stdin);
		per[i].name[strlen(per[i].name) - 1] = 0;

		fputs("please input personal ID : ", stdout);
		fgets(per[i].perId, sizeof(per[i].perId), stdin);
		per[i].perId[strlen(per[i].perId) - 1] = 0;

		fputs("please input pee : ", stdout);
		scanf("%ld", &per[i].pee);
		
		puts("");

		emptyBuffer();
	}

	
	for (i = 0; i < 3; i++) {
		printf("%d�� ����� �̸��� %s, �ֹι�ȣ�� %s, �ް��ִ� �޿��� %ld�� �Դϴ�.\n", i+1, per[i].name, per[i].perId, per[i].pee);
	}
	


	return 0;
	
}
