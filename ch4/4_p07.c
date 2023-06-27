#include <stdio.h>
#include <math.h>

int main() {
    int width, height;

    printf("밑변? ");
    scanf("%d", &width);

    printf("높이? ");
    scanf("%d", &height);

    printf("빗변의 길이: %lf\n", sqrt((double)(width * width) + (height * height)));

    return 0;
}
