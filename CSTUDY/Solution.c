#include <stdio.h>
#include <string.h>

int main(void)
{
	char arr[2][50];
	int name[2][50];
	int result[2] = { 0,0 };
	int temp = 0;
	int i, j, h;

	for (i = 0; i < 2; i++) {
		fgets(arr[i], sizeof(arr[i]), stdin);
	}

	for (j = 0; j < 2; j++) {
		for (h = 0; h < 50; h++) {
			if (arr[j][h] == 32){
				name[j][h] = NULL;
				h++;
				break;
			}
			name[j][h] = arr[j][h];
		}

		while (arr[j][h] != '\n') {
			temp = arr[j][h] - 48;
			result[j] = (result[j] * 10) + temp;
			h++;
		}
	}

	if (!strcmp(name[0], name[1]))
		printf("이름이 같습니다. \n");
	else
		printf("이름이 같지 않습니다. \n");

	if (result[0] == result[1])
		printf("나이가 같습니다. \n");
	else
		printf("나이가 같지 않습니다. \n");



	return 0;
	
}
