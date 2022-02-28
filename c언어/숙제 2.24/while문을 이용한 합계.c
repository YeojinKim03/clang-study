#include <stdio.h>
int main(void){
    int i;
    int sum = 0;
    int factorial = 1;
    i = 1; //초기
    while (i<=10)
    {
        sum +=i;
        factorial *= i;
        i++; //증감식
    }
    printf("1~10의 합계 : %d\n", sum);
    printf("1~10의 곱 : %d\n", factorial);
    return 0;
}