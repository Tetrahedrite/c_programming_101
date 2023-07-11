#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double distance(int x1, int y1, int x2, int y2) {
    return sqrt(pow(abs(x2 - x1), 2) + pow(abs(y2 - y1), 2));
}

int main() {
    int start_x, start_y, end_x, end_y;

    printf("직선의 시작점 좌표? ");
    scanf("%d %d", &start_x, &start_y);

    printf("직선의 시작점 좌표? ");
    scanf("%d %d", &end_x, &end_y);

    printf("(%d, %d)~(%d, %d) 직선의 길이: %lf\n", \
        start_x, start_y, end_x, end_y, distance(start_x, start_y, end_x, end_y));
    return 0;
}
