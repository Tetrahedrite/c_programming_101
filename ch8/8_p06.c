#include <stdio.h>

#define ARR_SIZE 10

void get_min_max(int *arr, int size, int *min, int *max) {
    *min = arr[0];
    *max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}

int main() {
    int arr[ARR_SIZE] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37, };
    int min, max;

    printf("배열:");
    for (int i = 0; i < ARR_SIZE; i++) {
        printf(" %d", arr[i]);
    }
    printf("\n");

    get_min_max(arr, ARR_SIZE, &min, &max);

    printf("최댓값: %d\n", max);
    printf("최솟값: %d\n", min);

    return 0;
}
