#include <stdio.h>

int min_of_array(int arr[], size_t arr_size) {
    if (arr_size <= 0)
        return -1;

    int value = arr[0];
    for (int i = 1; i < arr_size; i++) {
        if (value > arr[i])
            value = arr[i];
    }
    return value;
}

int max_of_array(int arr[], size_t arr_size) {
    if (arr_size <= 0)
        return -1;

    int value = arr[0];
    for (int i = 1; i < arr_size; i++) {
        if (value < arr[i])
            value = arr[i];
    }
    return value;
}

int main() {
    int arr[] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };

    printf("배열: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("최댓값: %d\n", max_of_array(arr, sizeof(arr) / sizeof(int)));
    printf("최솟값: %d\n", min_of_array(arr, sizeof(arr) / sizeof(int)));
    return 0;
}
