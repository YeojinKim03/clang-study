#include <stdio.h>
int main(void){
    short a = 500;
    short b = 800;
    short c;
    printf("a*b = %d\n", a*b);
    c = a* b; // short c <= 500(int)*800(int) = 4000000(int) over flow!
    printf("c = %d\n", c);
    return 0;
}