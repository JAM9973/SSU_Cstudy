#include <stdio.h>
int main()
{
	int num1 = 0, num2 = 0;
	int num3;
	printf("두 정수를 입력하세요 :");
	scanf("%d %d", &num1, &num2);
	
	printf("--- 메뉴 ---\n1.덧셈\n2.뺄셈\n3.곱셈\n4.나눗셈\n");
	
	printf("선택:");
	do
	{
		scanf("%d",&num3);
		 if(num3==1)
                                        printf("%d + %d = %d", num1, num2, num1 + num2);
                                else if(num3 == 2)
                                        printf("%d - %d = %d",num1, num2, num1 - num2);
                                else if(num3 == 3)
                                        printf("%d x %d = %d",num1, num2, num1 * num2);
                                else if(num3 == 4)
                                        printf("%d / %d = %d",num1, num2, num1 / num2);
}
			while(num3 != 0);

			
			if(num3==0)
			printf("\n프로그램을 종료합니다.\n");	
			return 0;
}

