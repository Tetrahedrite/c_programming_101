#include <stdio.h>

int main() {
    double travel_time;

    printf("비행 소요시간(시간)? ");
    scanf("%lf", &travel_time);

    printf("비행 소요시간은 %d일 %d시간 %d분입니다.\n", \
        (int)travel_time / 24, \
        (int)travel_time % 24, \
        (int)((travel_time - (int)travel_time) * 60));

    return 0;
}
