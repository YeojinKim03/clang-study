 #include <stdio.h>
int main(void)
{
    short n = 32766;
    printf("%7d %04x\n", n, n);
    n = n + 1;
    printf("%7d %04x\n", n, n);
    n = n + 1;
    printf("%7d %04x\n", n, n);
    n = n + 1;
    printf("%7d %04x\n", n, n);

    return 0;
}

