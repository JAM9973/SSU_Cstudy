#include <stdio.h>
int f(int);
int main()
{
	int hour1, hour2, min1, min2;

	printf("입차 시간 입력:");
	scanf("%d %d",&hour1,&min1);
	printf("출차 시간 입력:");
	scanf("%d %d",&hour2,&min2);

	int hour3 =hour2 -hour1;
	int min3 = min2 - min1;
	int total = (hour3 * 60) + min3;
	printf("출차 시간:%d분\n주차 요금:%d원\n",total,f(total));
	return 0;
}

int f(int n)
{
	int m = 0;
	if(n<=30)
	m = 1000;
	else if(n>=410)
	m = 20000;
	else 
	{	if(n%10 == 0)
			m = 1000 + (((n - 30) / 10) * 500);
		else
			m = 1500 + (((n - 30) / 10) * 500);}
	return m;
}

