#include <stdio.h>
int main(void)
{
    int age;
    int score;

    printf("나이를 입력하세요: ");
    scanf("%d", &age);
    printf("입력하신 나이는 %d입니다.\n", age);
    printf("점수를 입력하세요 :");
    scanf("%d", &score);
    printf("입력하신 점수는 %d 입니다.\n", score);

    return 0;

}
