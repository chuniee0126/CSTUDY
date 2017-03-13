#include <stdio.h>

int main(void)
{
	int Anum, Znum = 0;
	int result = 0;

	printf("A program to obtain A and Z satisfying the following equation. \n AZ\n+ZA\n--------\n 99\n");

	for (Anum = 0; Anum < 10; Anum++) {
		for (Znum = 0; Znum < 10; Znum++) {
			result = 10 * (Anum + Znum) + (Anum + Znum);
			if (result == 99)
				printf("A equal %d, Z equal %d \n", Anum, Znum);
		}
	}

	system("pause");

	return 0;
}