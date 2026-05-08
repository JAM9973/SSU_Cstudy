#include <stdio.h>
int f(int);

int main(void)
{
        int n;
	
        printf("정수 입력:");
        scanf("%d",&n);
	printf("\n");
        for(int m=n; m>=1; m--)
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
