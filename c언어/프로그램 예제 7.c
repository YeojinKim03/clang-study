#include <stdio.h>
int main(void) {
    int num;
    num = 5;
    printf("num = %d\n", num);
    num +=2 ; // num = num +2
    printf("num = %d\n", num);
    num *=2; // num = num *2
    printf("num = %d\n", num);
    num |= 3; // num = num |3
    num <<=2; //num = num << 2
    printf("num = %d\n", num);
    return 0;

}