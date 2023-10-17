#include <stdio.h>

#define ARR_SIZE 10
#define ASCENDING 0
#define DESCENDING 1

int sort_array(int *arr, int size, int sort_type) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (sort_type == ASCENDING && arr[i] > arr[j]
                || sort_type == DESCENDING && arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int arr[ARR_SIZE] = { 45, 24, 53, 89, 38, 92, 0, 24, 66, 33 };

    printf("정렬 전         :");
    for (int i = 0; i < ARR_SIZE; i++) {
        printf(" %2d", arr[i]);
    }
    printf("\n");

    sort_array(arr, ARR_SIZE, ASCENDING);

    printf("오름차순 정렬 후:");
    for (int i = 0; i < ARR_SIZE; i++) {
        printf(" %2d", arr[i]);
    }
    printf("\n");

    sort_array(arr, ARR_SIZE, DESCENDING);

    printf("내림차순 정렬 후:");
    for (int i = 0; i < ARR_SIZE; i++) {
        printf(" %2d", arr[i]);
    }
    printf("\n");
}
