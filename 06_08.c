#include <stdio.h>
int main()
{
	int n = 0 , count = 0;
	printf("n을 입력하세요 :");
	scanf("%d", &n);

	for(int m = 2; m<=n; m++)
	{
		int i;
		for(i = 2; i<m; i++)
		{
		if(m % i == 0)
		{
			break;
		}
		}
if(m == i)
{printf("%d ",m);
count += 1;
}
}	
	
	printf("소수의 개수는 %d 개입니다\n", count);

	return 0;
}
