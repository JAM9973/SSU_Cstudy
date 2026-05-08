#include <stdio.h>
int square(int);

int main()
{
	int num1;
	printf("정수 입력:");
	scanf("%d", &num1);
	printf("%d의 제곱은 %d입니다\n", num1, square(num1));
		
	return 0;
}

int square(int num2)
{
	return num2 * num2;
}


