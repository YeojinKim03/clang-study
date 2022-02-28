#include <stdio.h>
int main(void){
    int grade = 95;
    printf("(grade >= 90 && grade<100)의 값 : %d\n", grade>=90&& grade <= 100);
    printf("(grade < - || grade == 100)의 값 : %d\n", grade <0 || grade == 100);
    printf("(!grade)값 : %d\n", !grade);
}