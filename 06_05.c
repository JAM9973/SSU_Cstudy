#include <stdio.h>
int main()
	{
		int sum = 0, num1 = 0;
		printf("양의 정수를 입력하세요 :");
		scanf("%d", &num1);

		while(num1>=10)
		{
			
			sum += (num1 % 10);
			num1 = (num1 / 10);
		}
		
		printf("각 자릿수의 합 :%d\n",num1 + sum);
		return 0;
	}
