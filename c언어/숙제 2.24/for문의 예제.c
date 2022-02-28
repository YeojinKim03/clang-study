#include <stdio.h>
int main(void)
{
    int i;
    int sum = 0;
    int factorial = 1;

    for(i=1; i<=10; i++)
    {
        sum +=i; //sum = sum + i
        factorial *= i; //factorial = factorial * i
    }
    printf("1~10의 합계 : %d\n", sum);
    printf("1~10의 곱 : %d\n", factorial);

    return 0;
}