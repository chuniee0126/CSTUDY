#include <stdio.h>

int main(void)
{
	int index, index2 = 0;
	
	for (index = 1; index < 9; index++) {
		if ((index % 2) == 1)
			continue;
		printf("\n%d´Ü Ãâ·Â\n", index);
		for (index2 = 1; index2 <= index; index2++) {
			printf("%d X %d = %d\n", index, index2, index*index2);
		}
	}

	system("pause");

	return 0;
}