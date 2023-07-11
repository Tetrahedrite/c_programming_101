#include <stdio.h>

int main() {
    int guarantee, break_even_point, additional_guarantee;

    printf("기본 출연료? ");
    scanf("%d", &guarantee);

    printf("손익 분기점 관객 수? ");
    scanf("%d", &break_even_point);

    printf("관객 1인당 러닝 개런티? ");
    scanf("%d", &additional_guarantee);

    for (int i = 1000000; i <= 15000000; i += 1000000) {
        int point_over = i - break_even_point;
        if (point_over < 0)
            point_over = 0;
        printf("관객 %8d명 일 때 예상 출연료: %10d원\n", i, guarantee + point_over * additional_guarantee);
    }

    return 0;
}
