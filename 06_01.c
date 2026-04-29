#include <stdio.h>
int main()
{
	int a , b;
	
	printf("두 정수를 입력하세요:");
	scanf("%d %d", &a, &b);
	
	if(a > b){
	printf("a > b : 1\n");
	}
	else
		printf("a > b : 0\n");


	if(a == b){
	printf("a == b : 1\n");
	}
	else	
		printf("a == b : 0\n");

	
	if(a != b){
	printf("a != b : 1\n");
	}
	else
		printf("a != b : 0\n");
	

	if(a > b && a){
        printf("a > b && a>0 : 1\n");
	}
	else
        	printf("a > b && a>0 : 0\n");
        


        if(a > b || b > 0){
        printf("a > b || b > 0 : 1\n");
	}
	else
        	printf("a > b || b > 0: 0\n");
        

	if(!(a < b)){
        printf("!(a < b) : 1\n");
	}
	else
        	printf("!(a < b) : 0\n");
        


	return 0;	
}
