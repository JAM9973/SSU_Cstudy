#include <stdio.h>
int f(int);
int main()
{
	int n;
	printf("정수 입력:");
	scanf("%d",&n);
	f(n);
	return 0;
}


int f(int p)
{
	int last, count = 0; 
	int num1 = 0 ,num2 = 1, num3 = 1;

	printf("%d 이하의 피보나치 수:", p);
	while(num1 <= p)
	{
		printf("%d ", num1);
		last = num1;
		num1 = num2;

		num2 = num3;
		num3 = num1 + num2;
		count += 1;
	}

	printf("\n피보나치 수 개수:%d\n",count);
	printf("마지막 피보나치 수:%d\n",last);

	return 0;
}
