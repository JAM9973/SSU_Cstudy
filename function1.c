#include <stdio.h>

int mkfn(int ingredient){
	
	if(ingredient == 1)
	{
		printf("팥붕어빵\n");
	}
	else if(ingredient == 2)
	{
		printf("슈크림붕어빵\n");
	}
	else
	{
		printf("그냥빵\n");
	}
}
int main()
{	
	int choice;

	printf("1번은 팥 2번은 슈\n");
	printf("번호를 입력해주세요 :");
	scanf("%d", &choice);

	mkfn(choice);
	return 0;}
