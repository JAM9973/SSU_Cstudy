#include <stdio.h>
int main()
{
	int num1 = 0, sum = 0;
	printf("n을 입력하세요:");
	scanf("%d", &num1);

	for(num1;num1>=1;num1--)
	
	{
		if(num1%3 == 0)
		continue;

		sum += num1;
	}


	printf("3의 배수를 제외한 1부터 10까지의 합 : %d\n", sum);

	return 0;
}
