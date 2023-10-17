#include <stdio.h>

#define ARR_SIZE 10

int main() {
    double arr[ARR_SIZE] = {
        0.10, 2.00, 3.40, 5.20, 4.50, 7.80, 9.70, 1.40, 6.60, 7.20,
    };
    double *parr = arr;
    double sum = 0.0;

    printf("배열: ");
    for (int i = 0; i < ARR_SIZE; i++) {
        printf("%.2lf  ", *parr);
        sum += *parr++;
    }
    printf("\n");

    printf("평균: %.6lf\n", sum / ARR_SIZE);

    return 0;
}
