#include <stdio.h> //원래 함수 위 아래가 바뀌어 있었는데 그러면 printf에서 fncount를 선언되지 않았다고 나옴.
int fncount(int type,int count) //함수에는 무조건 변수앞에 형을 선언해야함

{
        int price;
        if(type == 1)
        price = 1000;
        else if(type == 2) //else는 조건이 붙을 수 없으므로 else if 로 수정
        price = 1500;

        return price * count;
        }
int main()
{	

	int type, count;
	printf("붕어빵 팝니다(1.팥 붕어빵 1000원, 2. 슈크림 붕어빵 1500원)\n");
	printf("종류와 갯수를 입력해주세요(예시 1 2):");
	scanf("%d %d", &type, &count);
	printf("%d원\n",fncount(type,count));
	return 0;

}

