#include <stdio.h>

int main() {
    int width, height;

    printf("가로의 길이? ");
    scanf("%d", &width);

    printf("세로의 길이? ");
    scanf("%d", &height);

    printf("직사각형의 넓이: %d\n", width * height);
    printf("직사각형의 둘레: %d\n", 2 * width + 2 * height);

    return 0;
}
