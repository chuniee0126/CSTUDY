#include <stdio.h>


int main(void)
{
	FILE * fp = fopen("simple.txt", "wt");
	if (fp == NULL) {
		puts("���Ͽ��� ����");
		return -1;
	}

	fputc('A', fp);
	fputc('B', fp);
	fputs("My name is Park \n", fp);
	fputs("My name is Chun \n", fp);
	fclose(fp);

	return 0;	
}
