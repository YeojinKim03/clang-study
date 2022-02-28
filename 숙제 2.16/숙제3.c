#include <stdio.h>
int main(void)
{
    int r;
    printf("원의 반지름을 입력하시오 : \n");
    scanf("%d",&r);
    printf("%f", 3.141592 * r*r);

    return 0;
}

