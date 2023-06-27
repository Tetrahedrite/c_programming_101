#include <stdio.h>

int main() {
    int num;
    float score;

    printf("번호? ");
    scanf("%d", &num);

    printf("학점? ");
    scanf("%f", &score);

    printf("%d번 학생의 학점은 %f입니다.\n", num, score);

    return 0;
}
