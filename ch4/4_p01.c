#include <stdio.h>

int main() {
    double mass, speed, e_kinetic;

    printf("질량(kg)? ");
    scanf("%lf", &mass);

    printf("속력(m/s)? ");
    scanf("%lf", &speed);

    printf("운동에너지: %.2lf J\n", mass * speed * speed * 0.5);

    return 0;
}
