#include <stdio.h>
#include <string.h>


char * InputString(int lenght) {
	char * str = (char *)malloc(sizeof(char) * lenght);

	printf("Please input string : ");
	gets(str);

	return str;
}

void calculate(char * str, int lenght) {
	
	int Start = (strlen(str) - 1);
	int End = (strlen(str) - 1);

	for (int i = Start; i >= 0; i--) {
		Start = i;
		if ((str[Start] == ' ') && (Start != 0)) {
			for (int j = (Start + 1); j <= End; j++) {
				printf("%c", str[j]);
			}
			printf(" ");
			End = (Start - 1);
		}
		else if (Start == 0) {
			for (int j = Start; j <= End; j++) {
				printf("%c", str[j]);
			}
		}
	}

	printf("\n");

	return;

}


int main(void)
{
	int lenght;
	char * str;
	char temp;

	printf("How long what you will be input string here : ");
	scanf("%d", &lenght);
	
	temp = getc(stdin);

	str = InputString(lenght);

	printf("Result of calculate : ");

	calculate(str, lenght);

	free(str);

	return 0;
}
