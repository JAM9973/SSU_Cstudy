#include <stdio.h>

int main(void)

{

    int a = 0, b = 5;

    a || printf("A 출력\n");

    a && printf("B 출력\n");

    b || printf("C 출력\n");

    b && printf("D 출력\n");

    return 0;

}
