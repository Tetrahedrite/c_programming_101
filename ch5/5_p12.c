#include <stdio.h>

#define MAX_YEAR 10

int main() {
    int basic;
    double interest_rate, interest, total;

    printf("원금? ");
    scanf("%d", &basic);

    printf("연이율(%%)? ");
    scanf("%lf", &interest_rate);

    total = basic;

    for (int i = 0; i < MAX_YEAR; i++) {
        interest = total / 100.0 * interest_rate;
        total += interest;
        printf("%2d년째 이자: %10.2lf, 원리합계: %10.2lf\n", i, interest, total);
    }

    return 0;
}
