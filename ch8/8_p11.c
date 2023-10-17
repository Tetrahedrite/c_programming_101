#include <stdio.h>

void get_rect_info(int width, int height, int *area, int *perimeter) {
    *area = width * height;
    *perimeter = 2 * (width + height);
}

int main() {
    int width, height, area, perimeter;

    printf("가로? ");
    scanf("%d", &width);

    printf("세로? ");
    scanf("%d", &height);

    get_rect_info(width, height, &area, &perimeter);
    printf("넓이: %d, 둘레: %d\n", area, perimeter);
}
