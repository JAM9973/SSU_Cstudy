#include <stdio.h>
int main()
{
	int num1 = 0;
	printf("단을 입력하세요 (2~9) :");
	scanf("%d", &num1);

	if((num1>=2)&&(num1<=9))
	{
		printf("%d x 1 = %d\n", num1, num1 * 1);
		printf("%d x 2 = %d\n", num1, num1 * 2);
		printf("%d x 3 = %d\n", num1, num1 * 3);
		printf("%d x 4 = %d\n", num1, num1 * 4);
		printf("%d x 5 = %d\n", num1, num1 * 5);
		printf("%d x 6 = %d\n", num1, num1 * 6);
		printf("%d x 7 = %d\n", num1, num1 * 7);
		printf("%d x 8 = %d\n", num1, num1 * 8);
		printf("%d x 9 = %d\n", num1, num1 * 9);
		



	}
	else
		printf("범위를 벗어났습니다\n");
	return 0;
}
