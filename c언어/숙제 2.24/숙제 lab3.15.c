#include <stdio.h>
int main(void)
{
    printf("%d\n", 123); //그냥 정수 출력
    printf("%5d\n", 123); //5칸 확보 
    printf("%05d\n", 123);//5칸 확보 앞에 0
    printf("%-5d\n", 123); //왼쪽 정렬하면서 5칸 확보
    printf("%6.1f\n", 123.45);//6칸확보 소수점 1칸
    printf("%06.1f\n", 123.45); //6칸확보 소수점 1칸, 앞에 0
    return 0;
}

