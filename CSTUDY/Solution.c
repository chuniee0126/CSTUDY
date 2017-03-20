#include <stdio.h>

int main(void)
{
	int arr[100][100];
	int index = 0;
	int interval = 0;
	int num = 1;
	int i = 0, j = 0;

	printf("숫자를 입력하시오 : ");
	scanf("%d", &index);

	while (num < (index*index))
	{
		if (interval == 0) {
			for (j = 0; j <= index-1; j++) {
				arr[0][j] = num;
				num++;
			}
		}
		else if (interval % 2 == 1) {
			for (i = ((interval + 1) / 2); i <= (index - ((interval + 1) / 2)); i++) {
				arr[i][j-1] = num;
				num++;
			}
			for (j = (index - ((interval + 1) / 2) - 1); j >= (((interval + 1) / 2) - 1); j--) {
				arr[i-1][j] = num;
				num++;
			}
		}
		else if ((interval) % 2 == 0) {
			for (i = (index - (interval / 2) - 1); i >=  (interval / 2); i--) {
				arr[i][j+1] = num;
				num++;
			}
			for (j = (interval / 2); j <= (index - (interval / 2) - 1); j++) {
				arr[i+1][j] = num;
				num++;
			}
		}
		interval++;
	}

	for (i = 0; i < index; i++) {
		for (j = 0; j < index; j++) {
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}



	system("pause");

	return 0;
	
}
