#include <stdio.h>

#define ARR_SIZE 10

void swap_array(int *arr_x, int *arr_y, int size) {
    for (int i = 0; i < size; i++) {
        int temp = arr_x[i];
        arr_x[i] = arr_y[i];
        arr_y[i] = temp;
    }
}

int main() {
    int arr_x[ARR_SIZE] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, };
    int arr_y[ARR_SIZE] = { 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, };

    printf("a:");
    for (int i = 0; i < ARR_SIZE; i++) {
        printf(" %2d", arr_x[i]);
    }
    printf("\n");

    printf("b:");
    for (int i = 0; i < ARR_SIZE; i++) {
        printf(" %2d", arr_y[i]);
    }
    printf("\n");

    swap_array(arr_x, arr_y, ARR_SIZE);

    printf("<< swap_array 호출 후 >>\n");
    printf("a:");
    for (int i = 0; i < ARR_SIZE; i++) {
        printf(" %2d", arr_x[i]);
    }
    printf("\n");

    printf("b:");
    for (int i = 0; i < ARR_SIZE; i++) {
        printf(" %2d", arr_y[i]);
    }
    printf("\n");
}
