#include <stdio.h>

int min_index_of_array(int arr[], size_t arr_size) {
    if (arr_size <= 0)
        return -1;

    int index = 0;
    for (int i = 1; i < arr_size; i++) {
        if (arr[index] > arr[i])
            index = i;
    }
    return index;
}

int max_index_of_array(int arr[], size_t arr_size) {
    if (arr_size <= 0)
        return -1;

    int index = 0;
    for (int i = 1; i < arr_size; i++) {
        if (arr[index] < arr[i])
            index = i;
    }
    return index;
}

int main() {
    int arr[] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };

    printf("배열: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    const int max_index = max_index_of_array(arr, sizeof(arr) / sizeof(int));
    printf("최댓값: 인덱스:=%d, 값=%d\n", max_index, arr[max_index]);
    const int min_index = min_index_of_array(arr, sizeof(arr) / sizeof(int));
    printf("최솟값: 인덱스:=%d, 값=%d\n", min_index, arr[min_index]);
    return 0;
}
