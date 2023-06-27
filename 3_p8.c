#include <stdio.h>

#define M_PER_YD_LENGTH 0.9144

int main() {
    int length_yd;
    double length_m;

    printf("길이(yd)? ");
    scanf("%d", &length_yd);

    length_m = length_yd * M_PER_YD_LENGTH;
    printf("%d yd = %lf m\n", length_yd, length_m);

    return 0;
}
