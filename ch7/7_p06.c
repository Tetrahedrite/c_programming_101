#include <stdio.h>

int main() {
    double arr[] = { 1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8 };
    double reversed_arr[sizeof(arr) / sizeof(double)];

    printf("배열: ");
    for (int i = 0; i < sizeof(arr) / sizeof(double); i++) {
        printf("%lg ", arr[i]);
    }
    printf("\n");

    // Swap
    for (int i = 0; i < sizeof(arr) / sizeof(double); i++) {
        reversed_arr[i] = arr[sizeof(arr) / sizeof(double) - i - 1];
    }

    printf("역순: ");
    for (int i = 0; i < sizeof(reversed_arr) / sizeof(double); i++) {
        printf("%lg ", reversed_arr[i]);
    }
    printf("\n");

    return 0;
}
