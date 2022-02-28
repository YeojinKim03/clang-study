#include <stdio.h>
int main(void){
    int num;
    printf("정수를 입력하세요 :");
    scanf("%d", &num);
    if (num<0) {
        printf("음수입니다.\n");
    }

    else {
        printf("0 또는 양수입니다.\n");
    
    }
    printf("num = %d\n", num);

    return 0;



}