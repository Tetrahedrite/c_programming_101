#include <stdio.h>

#define ARR_SIZE 10

void reverse_array(double *const arr, int size) {
    for (int i = 0, j = size - 1; i < size / 2; i++, j--) {
        double temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main() {
    double arr[ARR_SIZE] = {
        1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8,
    };

    printf("배열:");
    for (int i = 0; i < ARR_SIZE; i++) {
        printf(" %.1lf", arr[i]);
    }
    printf("\n");

    reverse_array(arr, ARR_SIZE);

    printf("역순:");
    for (int i = 0; i < ARR_SIZE; i++) {
        printf(" %.1lf", arr[i]);
    }
    printf("\n");
    return 0;
}
