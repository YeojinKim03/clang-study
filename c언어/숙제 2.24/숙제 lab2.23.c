#include <stdio.h>
int main(void)
{
    int c;
    printf("섭씨온도를 입력하시오 :\n");
    scanf("%d", &c);
    int f;
    f = 9/5 * c + 32;
    printf("%d\n", f);

    f = 9.0/5.0 * c + 32;
    printf("%d\n", f);
    return 0;
}