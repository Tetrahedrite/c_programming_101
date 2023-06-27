#include <stdio.h>

int main() {
    double r, h;

    printf("반지름의 길이? ");
    scanf("%lf", &r);

    printf("높이? ");
    scanf("%lf", &h);

    printf("원기둥의 부피: %lf\n", 3.1415 * r * r * h);

    return 0;
}
