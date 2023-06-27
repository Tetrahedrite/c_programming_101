#include <stdio.h>
#include <math.h>

int main() {
    int radius;

    printf("반지름의 길이? ");
    scanf("%d", &radius);

    printf("구의 부피: %lf\n", 4.0 / 3 * 3.141592 * pow(radius, 3));

    return 0;
}
