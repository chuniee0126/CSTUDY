#include <stdio.h>
#include <math.h>

void Swap(int (*arr)[3])
{
	int temp[3][3];
	int i = 0, j = 0;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			temp[i][j] = arr[i][j];
		}
	}

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			if ((i == 0 && j != 2) || (i == 1 && j == 0))
				arr[i][j + 1] = temp[i][j];
			else if (i != 2 && j == 2)
				arr[i + 1][j] = temp[i][j];
			else if (i == 2 && j != 0)
				arr[i][j - 1] = temp[i][j];
			else if (i == 2 && j == 0)
				arr[i - 1][j] = temp[i][j];
			else
				arr[i - 1][j - 1] = temp[i][j];
		}
	}
	
	return;
}


int main(void)
{
	int arr[3][3];
	int temp = 0;
	int i = 0, j = 0;


	for (i = 0; i < 3; i++) {
		printf("%d�� ���� ä��� : ", i + 1);
		j = 0;
		while(j < 3) {
			scanf("%d", &temp);
			if ((temp > 0) && (temp <= 100)) {
				arr[i][j] = temp;
				j++;
			}
			else
				printf("1�̻� 100������ ���� �Է����ּ��� : ");
		}
	}

	printf("�ʱ� ���\n");

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}

	Swap(arr);

	printf("������ ���\n");

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}


	return 0;
}
