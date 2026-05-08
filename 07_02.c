#include <stdio.h>
int main()
{
	int s1 =0 ,s2 = 0, s3 = 0, s4 = 0, s5 = 0;
	int num1;
	printf("좌석 번호를 입력하세요(1~5, 종료 ):");
	scanf("%d", &num1);
	
	while(num1 != 0){
	if(num1==1)
	{
		if(s1 == 0){	
		printf("%d번 좌석이 예매 되었습니다.\n",num1);
		s1 = 1;}
		else if(s1 == 1){
		printf("이미 예매된 좌석입니다.\n");}
	}
	else if(num1 == 2)
	{	if(s2 == 0){
		printf("%d번 좌석이 예매 되었습니다.\n",num1);
		s2 = 1;}
		else if(s1 == 1){
		printf("이미 예매된 좌석입니다.\n");}

	}
	else if(num1 ==3)
	{	if(s3 == 0){
		printf("%d번 좌석이 예매 되었습니다.\n",num1);
		s3 = 1;}
		else if(s3 == 1){
		printf("이미 예매된 좌석입니다.\n");}
	}
	else if(num1 == 4)
	{	if(s4 == 0){
		printf("%d번 좌석이 예매 되었습니다.\n",num1);
		s4 = 1;}
	else if(s4 == 1){
		printf("이미 예매된 좌석입니다.\n");}
	}
	else if(num1 == 5)
	{	if(s5 == 0)
		{printf("%d번 좌석이 예매 되었습니다.\n",num1);
		s5 = 1;}
		else if(s5 == 1)
		{
			printf("이미 예매된 좌석입니다.\n");}
	}
	else
	{	printf("잘못된 좌석 번호입니다.\n");
	}

	printf("\n좌석 번호를 입력하세요(1~5, 종료 0): ");
        scanf("%d", &num1);


	}
	printf("예매를 종료합니다.\n");
	return 0;
	}
