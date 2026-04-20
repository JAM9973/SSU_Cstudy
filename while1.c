#include <stdio.h>
int main()
{
	int num1 = 0, num2 = 1, num3;

	num3 = num1 + num2;

	while( num3 < 100 )
	{
		num1 = num2;
		num2 = num3;
		num3 = num1 + num2;
	}

	printf("100보다 큰 피보나치수열 중 가장 작은 값은 %d 입니다.\n", num3);
	return 0;
}
