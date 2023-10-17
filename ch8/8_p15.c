#include <stdio.h>

#define ARR_SIZE 10

int sort_array(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int arr[ARR_SIZE] = { 90, 6, 96, 40, 52, 48, 26, 89, 48, 25 };

    printf("정렬 전:");
    for (int i = 0; i < ARR_SIZE; i++) {
        printf(" %2d", arr[i]);
    }
    printf("\n");

    sort_array(arr, ARR_SIZE);

    printf("정렬 후:");
    for (int i = 0; i < ARR_SIZE; i++) {
        printf(" %2d", arr[i]);
    }
    printf("\n");
}
