#include <stdio.h>
#define con 2.236
int main(void)
{
    int k;
    int p;
    printf(" 몸무게가 몇 kg인가요?\n");
    scanf("%d", &k);
    p = k * con;
    printf("%d\n\a\a\a", p); //소리가 안납니다....
    return 0;
}

