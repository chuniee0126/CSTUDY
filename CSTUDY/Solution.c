#include <stdio.h>


int main(void)
{
	char * strArr[3] = {"simple", "String", "Array"};

	printf("%s\n", strArr[0]);
	printf("%s\n", strArr[1]);
	printf("%s\n", strArr[2]);

	printf("%c\n", strArr[0][0]);

	// strArr[0][0] = 'x'; 포인터 배열로 만들어진 상태에서 문자열을 저장하게 되었을 경우에는 상수 형태의 문자열이 저장되어 이 식에서 오류를 발생시킨다

	printf("%c\n", strArr[0][0]);

	system("pause");

	return 0;
	
}