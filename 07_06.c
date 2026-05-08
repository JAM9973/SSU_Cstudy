#include <stdio.h>
int f(int);

int main(void)
{	
	int n;
	printf("정수 입력:");
	scanf("%d",&n);
	
	for(int m=1; m<=n; m++)
	{
		f(m);
		printf("\n");
	}

	
return 0;
}






			
int f(int p)
{
	for(int q=1; q<=p;q++)
	{
	printf("%d",q);
	}
return 0;
}

