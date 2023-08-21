#include <stdio.h>

#define ARR_SIZE 20

int fill_array(int arr[], size_t size, int element) {
    for (int i = 0; i < size; i++) {
        arr[i] = element;
    }
}

int main() {
    int arr[ARR_SIZE], element;
    printf("배열의 원소에 저장할 값? ");
    scanf("%d", &element);

    fill_array(arr, sizeof(arr) / sizeof(int), element);
    
    for (int i = 0; i < ARR_SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
