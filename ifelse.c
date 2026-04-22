#include <stdio.h>
int main()
{	

	int num1;
	printf("정수를 입력하세요:");
	scanf("%d", &num1);

	if(num1 % 2 == 0)
		printf(" 짝수입니다");
	else
		printf("홀수입니다");

	
	return 0;
}
