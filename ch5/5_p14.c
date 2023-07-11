#include <stdio.h>

int main() {
    int minutes, kilometers;
    double average;

    printf("구간 단속 소요 시간 (분)? ");
    scanf("%d", &minutes);

    printf("구간 단속 주행 거리 (km)? ");
    scanf("%d", &kilometers);

    average = (double)kilometers / minutes * 60;

    printf("평균 속력은 %.1lf km/h입니다. ", average);

    if (average >= 100)
        printf("구간 단속 과속입니다.\n");
    else
        printf("구간 단속 과속이 아닙니다.\n");

    return 0;
}
