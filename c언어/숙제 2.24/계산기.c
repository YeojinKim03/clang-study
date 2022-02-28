#include <stdio.h>
int main(void){
    int opt; //operator (연산자)
    int num1, num2; //operand (피연산자)
    int result; //연산 결과

    printf("덧셈은 1, 뺄셈은 2 선택하세요! :");
    scanf("%d", &opt);
    printf("두개의 정수 입력 :");
    scanf("%d %d", &num1, &num2);

    if(opt==1)
    {
        result = num1 + num2;
        printf("결과 : %d \n", result);

    }
    else if(opt==2)// opt!=1 && opt==2
    {
        result = num1 - num2;
        printf("결과 : %d\n", result);
    }
    else // opt!=1 && opt!=2
    {   printf("잘못된 선택을 하셨습니다!\n");
    }

    return 0;



}