#include <stdio.h>
/*is_divisor(n, d)  d가 n의 약수이면 1, 아니면 0 반환
count_divisors(n) n의 약수 개수 반환
is_prime(n)  n이 소수이면 1, 아니면 0 반환
print_divisors(n) n의 모든 약수를 출력*/

int is_divisor(int n, int d)
{
	if(n%d == 0)
		return 1;
	else
		return 0;
}

int count_divisors(int n)
{
	int m,count = 0;
	for(m=1; m<=n; m++)
	{
		if(n%m==0)
			count += 1;
	}
return count;
}

int is_prime(int n)
{
	if(count_divisors(n)==2)
		return 1;
	else
		return 0;
}

int print_divisors(int n)
{
        for(int m=1; m<=n; m++){
                if(n%m==0)
		printf("%d ",m);
}
printf("\n");
return 0;
}
	
int main()
{	
	int num1;
	printf("정수 입력:");
	scanf("%d",&num1);

//	printf("%d의 약수:%d\n", num1, print_divisors(num1)); 함수호출이 가장 먼저 일어나서 1 13 13 리턴값0 이런식으로 나오므로 따로 써줘야함
//
	printf("%d",num1);
	printf("의 약수:"); 
	print_divisors(num1);
	printf("약수의 개수:%d\n",count_divisors(num1));

	if(is_prime(num1)==1)
	printf("%d는 소수입니다.\n",num1);
	else
	printf("%d는 소수가 아닙니다.\n",num1);

return 0;
}
