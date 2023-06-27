#include <stdio.h>

#define CM_PER_INCH 2.54

int main() {
    double length_inch, length_cm;

    printf("길이(inch)? ");
    scanf("%lf", &length_inch);

    length_cm = length_inch * CM_PER_INCH;
    printf("%lf inch = %lf cm\n", length_inch, length_cm);

    return 0;
}
