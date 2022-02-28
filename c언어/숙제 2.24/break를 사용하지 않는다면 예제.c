#include <stdio.h>
int main(void){
    char op;
    int a; int b;
    switch (op)
    {
        case '+':
            printf("%d + %d = %d\n", a, b, a+b);
        case '-':
            printf("%d - %d = %d\n", a, b, a-b);
        case '*':
            printf("%d * %d = %d\n", a, b, a*b);
        case '/':
            printf("%d / %d = %d\n", a, b, a/b);
        default:
            printf("계산할 수 없습니다.\n");
    }

    

    return 0;



}