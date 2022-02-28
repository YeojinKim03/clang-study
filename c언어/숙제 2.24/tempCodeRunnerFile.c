#include <stdio.h>

int main(void)
{
    int a, b;
    char op;

    printf("수식을 입력하세요 (0 0 0 입력 시 종료) : ");
    scanf("%d %c %d", &a, &op, &b);

    while (a!=0 || op !='0' || b!=0)
    {
        switch (op) 
        {
        case '+':
            printf("%d + %d = %d\n", a, b, a+b);
            break;
        case '-':
            printf("%d - %d = %d\n", a, b, a-b);
            break;
        case '*':
            printf("%d * %d = %d\n", a, b, a*b);
            break;
        case '/':
            printf("%d / %d = %d\n", a, b, a/b);
            break;
        default:
            printf("계산할 수 없습니다.\n");
            break;
        }
    printf("수식을 입력하세요 (0 0 0 입력 시 종료) : ");
    scanf("%d %c %d", &a, &op, &b);
    }
}