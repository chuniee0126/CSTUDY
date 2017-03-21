#include <stdio.h>


int main(void)
{
	int ch;

	while (1)
	{
		ch = getchar();
		
		if (ch == EOF)
			break;

		if (ch < 'a' && ch >= 'A')
			putchar(ch + 32 );
		else if(ch >= 'a' && ch <= 'z')
			putchar(ch - 32);
	}
	return 0;
	
}
