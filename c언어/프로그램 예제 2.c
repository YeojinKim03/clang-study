/* 증감 연산자 사용 프로그램 */
#include <stdio.h>
int main(void) {
    int num = 10, value;

    printf("num = %d\n", num);
    num++;
    printf("num++; 후 num 값 = %d\n", num);
    value = ++num + 10;
    printf("value = num++ + 10; 후 value 값 = %d\n", value);
    printf("현재 num값 = %d\n", num);
    return 0;
}