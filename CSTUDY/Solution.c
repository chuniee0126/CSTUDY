#include <stdio.h>


int main(void)
{
	char * strArr[3] = {"simple", "String", "Array"};

	printf("%s\n", strArr[0]);
	printf("%s\n", strArr[1]);
	printf("%s\n", strArr[2]);

	printf("%c\n", strArr[0][0]);

	// strArr[0][0] = 'x'; ������ �迭�� ������� ���¿��� ���ڿ��� �����ϰ� �Ǿ��� ��쿡�� ��� ������ ���ڿ��� ����Ǿ� �� �Ŀ��� ������ �߻���Ų��

	printf("%c\n", strArr[0][0]);

	system("pause");

	return 0;
	
}