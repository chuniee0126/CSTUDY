#include <stdio.h>


int main(void)
{
	int count = 0, index = 1, num = 0;
	
	printf("상수 n 입력 : ");
	scanf("%d", &num);

	if (num <= 1) {
		printf("입력값의 경우 1보다 큰 숫자를 넣어주세요\n");
		return 0;
	}
	
	while (index <= num) {
		index = index * 2;
		count++;
	}

	printf("공식을 만족하는 K의 최댓값은 %d\n", count-1);
	

	system("pause");
	return 0;
}