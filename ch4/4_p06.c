#include <stdio.h>

int main() {
    int x1, y1, x2, y2;

    printf("한 점의 좌표 (x1, y1)? ");
    scanf("%d %d", &x1, &y1);

    printf("또 다른 점의 좌표 (x2, y2)? ");
    scanf("%d %d", &x2, &y2);

    printf("직선의 기울기: %lf\n", (double)(y2 - y1) / (x2 - x1));

    return 0;
}
