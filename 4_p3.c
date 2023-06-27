#include <stdio.h>

int main() {
    double mass, volume, result;

    printf("질량(g)? ");
    scanf("%lf", &mass);

    printf("부피(세제곱센티미터)? ");
    scanf("%lf", &volume);

    result = mass / volume;
    printf("밀도: %lf\n", result);
}
