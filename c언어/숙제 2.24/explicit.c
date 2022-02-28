#include <stdio.h>
int main(void){
    int num;
    float f;
    f = 10/3; //int/int = int
    printf("f = %f\n", f);

    f = (float) 10/3; // explicit type casting float/float = float
    printf("f = %f\n", f);

    f = (float) 10 / (float) 3; // explicit type casting float/float = float
    printf("f = %f\n", f);

    num = (int) (12.5 + 10.7); // explicit type casting (int)(23.2) = 23
    printf("num = %d\n", num);

    num = (int)12.5 + (int)10.7; // explicit type casting 12+ 10 = 22
    printf("num = %d\n", num);

    return 0;



}