#include <stdio.h>

int main() {
    float mass, height, e_kinetic;

    printf("질량(kg)? ");
    scanf("%f", &mass);

    printf("높이(m)? ");
    scanf("%f", &height);

    e_kinetic = mass * height * 9.8f;
    printf("위치에너지: %f J\n", e_kinetic);

    return 0;
}
