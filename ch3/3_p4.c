#include <stdio.h>

int main() {
    float force, distance, e_work;

    printf("힘(N)? ");
    scanf("%f", &force);

    printf("이동거리(m)? ");
    scanf("%f", &distance);

    e_work = force * distance;
    printf("일의 양: %.2f J\n", e_work);

    return 0;
}
