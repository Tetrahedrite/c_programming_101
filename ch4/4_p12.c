#include <stdio.h>

int main() {
    int distance, speed;

    printf("이동 거리(km)? ");
    scanf("%d", &distance);

    printf("예상 속력(km/h)? ");
    scanf("%d", &speed);

    printf("도착까지 예상 소요 시간은 %d분입니다.\n", (int)(distance / (speed / 60.0)));

    return 0;
}
