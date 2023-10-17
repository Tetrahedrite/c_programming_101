#include <stdio.h>

#define ARR_SIZE 20

void fill_array(int *arr, int size, int value) {
    for (int i = 0; i < size; i++) {
        *arr++ = value;
    }
}

int main() {
    int arr[ARR_SIZE];
    int value;

    printf("배열의 원소에 저장할 값? ");
    scanf("%d", &value);

    fill_array(arr, ARR_SIZE, value);
    printf("배열:");
    for (int i = 0; i < ARR_SIZE; i++) {
        printf(" %d", arr[i]);
    }
    printf("\n");

    return 0;
}
