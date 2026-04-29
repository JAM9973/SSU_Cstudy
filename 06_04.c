#include <stdio.h>
int main()
{	int a = 0, b = 0, c = 0;
	printf("세 정수를 입력하세요:");
	scanf ("%d %d %d", &a, &b, &c);

	int max1 = (a > b)? a : b;
	
	int max2 = (b > c)? b : c;

	int Max = (max1 > max2)? max1 : max2;

	printf("가장 큰 수는 %d 입니다\n", Max);

	return 0;

}
