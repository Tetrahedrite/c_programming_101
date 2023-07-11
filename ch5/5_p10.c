#include <stdio.h>
#include <math.h>

int main() {
    int charge, exponential_round;

    printf("금액? ");
    scanf("%d", &charge);

    printf("절사단위 (10의 지수승)? ");
    scanf("%d", &exponential_round);

    int round = (int)pow(10, exponential_round);

    printf("금액(100 미만 절사): %d\n", charge / round * round);
    return 0;
}
