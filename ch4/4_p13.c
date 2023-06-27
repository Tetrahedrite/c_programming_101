#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int x1, y1, x2, y2;

    printf("직선의 시작점 (x1, y1)? ");
    scanf("%d %d", &x1, &y1);

    printf("직선의 시작점 (x2, y2)? ");
    scanf("%d %d", &x2, &y2);

    printf("직선의 길이: %lf\n", sqrt(pow(abs(x1 - x2), 2) + pow(abs(y1 - y2), 2)));

    return 0;
}
