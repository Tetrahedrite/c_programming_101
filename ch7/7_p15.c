#include <stdio.h>

#define ARR_SIZE 10

int zero_array(int array[], int size) {
    for (int i = 0; i < size; i++) {
        array[i] = 0;
    }
}

int main() {
    int arr[ARR_SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    zero_array(arr, ARR_SIZE);
    for (int i = 0; i < ARR_SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
