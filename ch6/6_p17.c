#include <stdio.h>

int get_quadrant(int x, int y) {
    if (x > 0 && y > 0)
        return 1;
    else if (x < 0 && y > 0)
        return 2;
    else if (x < 0 && y < 0)
        return 3;
    else
        return 4;
}

int main() {
    int x, y;
    while (1) {
        printf("점의 좌표 (x, y)? ");
        scanf("%d %d", &x, &y);

        if (x == 0 && y == 0)
            return 0;
        else
            printf("%d사분면의 점입니다.\n", get_quadrant(x, y));
    }
}
