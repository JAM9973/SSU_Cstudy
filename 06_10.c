#include <stdio.h>
int main()
{
	int num1 = 0, num2 = 0;
	char op;




while(1){

	printf("수식을 입력하세요(종료:q):");

	int result = scanf("%d%c%d", &num1, &op, &num2);

	if(result != 3)
	{
		scanf("%c", &op);
		if(op == 'q')

		{	
			
			printf("계산기를 종료합니다.\n");

			break;
		}
	}
	else 	
	{
	
	switch(op){

	case '+':
		printf("%d + %d = %d\n",num1, num2, num1 + num2);
		break;
	case '-':
	       printf("%d - %d = %d\n",num1,num2, num1 - num2);
		break;
	case '*':
		printf("%d * %d = %d\n",num1,num2, num1 * num2);
		break;
	case '/':
		if(num2 != 0)
		printf("%d / %d = %d\n",num1, num2, num1 / num2);
		else printf("0으로 나눌 수 없습니다.\n");
		break;
	case '%':
		printf("%d %% %d = %d\n",num1, num2, num1 % num2);
		break;
	
	default:
	printf("잘못된 연산자입니다.\n");
	break;
	}
	}
}
		return 0;
}
