#include <stdio.h>
int main()
{
	int score = 0;

	printf("점수를 입력하세요:");
	scanf("%d", &score);

	if((score>=0)&&(score<=100)){
		if(score>=90)
			printf("학점은 A입니다\n");
		else
			if(score>=80)
				printf("학점은 B입니다\n");
			else
				if(score>=70)
					printf("학점은 C입니다\n");
				else
					if(score>=60)
						printf("학점은 D입니다\n");
					else
						printf("학점은 F입니다\n");	
	
	}
	else
		printf("잘못된 입력입니다.\n");

	return 0;
}
