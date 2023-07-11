#include <stdio.h>

int get_perimeter(int width, int height) {
    return 2 * width + 2 * height;
}

int main() {
    int width, height;

    printf("가로? ");
    scanf("%d", &width);

    printf("세로? ");
    scanf("%d", &height);

    printf("직사각형의 둘레: %d\n", get_perimeter(width, height));
    return 0;
}
