#include <stdio.h>
#include <string.h>

struct employee
{
	char name[10];
	char perId[16];
	long pee;
} per1, per2;

int main(void)
{
	fputs("please input name : ", stdout);
	fgets(per1.name, sizeof(per1.name), stdin);
	per1.name[strlen(per1.name) - 1] = 0;

	fputs("please input personal ID : ", stdout);
	fgets(per1.perId, sizeof(per1.perId), stdin);
	per1.perId[strlen(per1.perId) - 1] = 0;

	fputs("please input pee : ", stdout);
	scanf("%ld", &per1.pee);

	printf("�̸��� %s, �ֹι�ȣ�� %s, �ް��ִ� �޿��� %ld�� �Դϴ�.\n", per1.name, per1.perId, per1.pee);


	return 0;
	
}
