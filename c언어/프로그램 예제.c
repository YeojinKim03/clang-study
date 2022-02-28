/* 반과 번호를 구하는 프로그램*/
#define SIZE 30
#include <stdio.h>
int main(void) {
    int num, ban, bunho;
    printf("접수 번호를 입력하세요 : ");
    scanf("%d", &num);
    ban = num / SIZE + 1;
    bunho = num % SIZE;
    printf("고객님의 접수번호는 %d 이고, 배정받은 반/번호는 %d반 %d번입니다.\n", num, ban, bunho);
    return 0;
}