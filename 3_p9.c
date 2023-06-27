#include <stdio.h>

#define KG_PER_LB_MASS 0.45359237

int main() {
    int mass_lb;
    double mass_kg;

    printf("무게(lb)? ");
    scanf("%d", &mass_lb);

    mass_kg = mass_lb * KG_PER_LB_MASS;
    printf("%d lb = %lf kg\n", mass_lb, mass_kg);

    return 0;
}
