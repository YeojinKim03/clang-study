#include <stdio.h>
int main(void){
    int a, b;
    int min, max;
    printf("두개의 정수를 입력하세요 : ");
    scanf("%d %d", &a, &b);
    min = a< b ? a : b;
    max = a> b ? a : b;
    printf("min = %d, max = %d\n", min, max);
    return 0;
}