#include <stdio.h>

int main() {
    int left, top, right, bottom, x, y;

    printf("선택 영역의 좌상단점 (left, top)? ");
    scanf("%d %d", &left, &top);

    printf("선택 영역의 우하단점 (right, bottom)? ");
    scanf("%d %d", &right, &bottom);

    printf("점의 좌표 (x, y)? ");
    scanf("%d %d", &x, &y);

    if (left <= x && x <= right && top <= y && y <= bottom)
        printf("직사각형 모양의 선택 영역 내의 점입니다.\n");
    else
        printf("직사각형 모양의 선택 영역 내의 점이 아닙니다.\n");

    return 0;
}
