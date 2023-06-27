#include <stdio.h>

int main() {
    double num;
    printf("실수? ");
    scanf("%lf", &num);

    printf("제곱: %le\n", num * num);
    printf("세제곱: %le\n", num * num * num);

    return 0;
}
