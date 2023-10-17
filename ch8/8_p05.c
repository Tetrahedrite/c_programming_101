#include <stdio.h>

#define ARR_SIZE 10

void arith_seq(int *arr, int size, int common_diff) {
    for (int i = 1; i < size; i++) {
        arr[i] = arr[i - 1] + common_diff;
    }
}

int main() {
    int arr[ARR_SIZE], common_diff;

    printf("첫 번째 항? ");
    scanf("%d", &arr[0]);

    printf("공차? ");
    scanf("%d", &common_diff);

    arith_seq(arr, ARR_SIZE, common_diff);
    printf("등차수열: ");
    for (int i = 0; i < ARR_SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
