#include <stdio.h>

#define ARR_SIZE 10

int main() {
    double arr[ARR_SIZE] = {
        0.10, 2.00, 3.40, 5.20, 4.50, 7.80, 9.70, 1.40, 6.60, 7.20,
    };

    const double *p_arr = arr;
    for (int i = 0; i < ARR_SIZE; i++) {
        printf("%.2lf", *p_arr++);
        if (i != ARR_SIZE - 1)
            printf("  ");
    }
    printf("\n");
    return 0;
}
