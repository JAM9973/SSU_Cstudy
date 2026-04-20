#include <stdio.h>
int main()
{

	unsigned long long f;
	int n;	

	printf("계승을 구할 수를 입력하세요:");
	scanf("%d", &n);

	f = n;

	while (--n ) // 음수 입력시 무한 반복에 빠짐
	{
		f *= n;

	}
	printf("%llu\n", f);

	return 0;
}
