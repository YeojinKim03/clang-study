#include <stdio.h>
int main(void)
{
    int r;
    const double π = 3.141592;
    printf("원의 반지름을 입력하시오 : \n");
    scanf("%d",&r);
    printf("%f", π * r*r);

    return 0;
}

