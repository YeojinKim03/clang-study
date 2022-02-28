/* 삼각형과 사각형의 넓이를 구하는 프로그램*/
#include <stdio.h>
int main(void)
{   
    int a, b, c, d, e, f, g, h, i, j;
    char p;
    printf("도형(삼각형 또는 사각형)의 모양을 찾고, 면적을 계산해 드립니다.\n");  //프로그램 설명
    printf("삼각형이면 t를 사각형이면 r을 입력하시오 : \n");                  //삼각형 또는 사각형을 선택
    scanf("%c", &p);
    if (p =='t') {                                                     //삼각형일 경우
        printf("삼각형의 각 꼭지점 좌표를 입력하시오 : \n");                    //좌표 입력
        scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
        if ((c-a)*(c-a) + (d-f)*(d-f) == (c-a)*(c-a) + (f-b)*(f-b))    //직각삼각형인 경우 (피타고라스 법칙 만족)
        {
            printf("직각삼각형입니다\n");
            printf("삼각형의 면적은 %g 입니다\n", (double) (c-a)*(f-b)/2);        //직각삼각형 넓이 계산
        } 
        else 
        {
            printf("직각삼각형이 아닙니다");                                //직각삼각형이 아닌 경우
        }
    }

    else if (p=='r')                                                  //사각형일 경우
    {
        printf("사각형의 각 꼭지점 좌표를 입력하시오 : \n");                   //좌표 입력
        scanf("%d %d %d %d", &g, &h, &i, &f);
        if ((i-g)==(f-h))                                             //정사각형인지 여부 (변의 길이 비교)
        {
            printf("정사각형입니다");                               
        }
        else 
        {
            printf("직사각형입니다\n");
        }
        printf("사각형의 면적은 %g 입니다.\n", (double) (i-g)*(f-h));           //사각형 넓이 계산

    }
    return 0;
}