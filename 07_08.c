#include <stdio.h>
int f(int n, int m);
int g(int n, int m);
int main(void)
{
	int num1 , num2;

 	printf("첫 번째 정수 입력:");
	scanf("%d",&num1);

 	printf("두 번째 정수 입력:");
	scanf("%d",&num2);

	f(num1,num2);
	g(num1,num2);

	return 0;
}



int f(int n, int m)
{
	if(n<=m){
		for(int s=n; s>=1; s--){
			if(n % s == 0 && m % s == 0)
			{printf("최대공약수:%d\n",s);
				break;}}}
	else{
                for(int s=m; s>=1; s--){
                        if(n % s == 0 && m % s == 0)
			{printf("최대공약수:%d\n",s);
                                break;}}}

	return 0;
	}

int g(int n, int m)
{	
	if(n<=m)
	{
	for(int s = m; ;s++){
		if(s % n == 0 && s % m ==0)
			{
				printf("최소공배수:%d\n",s);
			break;
			}
}
}
	else
{	for(int s = n; ;s++)
{		 if(s % n == 0 && s % m ==0)
	{                printf("최소공배수:%d\n",s);
                        break;
}
}
}
return 0;
}
