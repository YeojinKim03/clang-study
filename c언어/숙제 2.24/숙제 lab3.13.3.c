#include <stdio.h>
int main(void)
{
    int k;
    int p;
    const double kg = 2.236;
    printf(" 몸무게가 몇 kg인가요?\n");
    scanf("%d", &k);
    p = k * kg;
    printf("%d\n\a\a\a", p); //소리가 안납니다....
    return 0;
}

