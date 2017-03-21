#include <stdio.h>


int main(void)
{
	int ch1;

	while (1)
	{
		ch1 = getchar();
		if (ch1 == EOF)
			break;
		putchar(ch1);
	}
	return 0;
	
}
