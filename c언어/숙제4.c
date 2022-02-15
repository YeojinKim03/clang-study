#include <stdio.h>
#define π 3.141592
int main(void)
{
    int r;
    printf("원의 반지름을 입력하시오 : \n");
    scanf("%d",&r);
    printf("%f", π * r*r);

    return 0;
}

