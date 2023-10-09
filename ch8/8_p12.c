#include <stdio.h>

#define ARR_SIZE 10

int find_all_in_array(int *src_array, int *result_array, size_t size, int key_to_find) {
    int found = 0;
    for (size_t i = 0; i < size; i++) {
        if (src_array[i] == key_to_find) {
            found++;
            result_array[i] = 1;
        }
    }
    return found;
}

int main() {
    int arr[ARR_SIZE] = {
        12, 45, 62, 12, 99, 83, 23, 12, 72, 37,
    };
    int result_arr[ARR_SIZE] = { 0, };

    for (int i = 0; i < ARR_SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int key;
    printf("찾을 값: ");
    if (scanf("%d", &key) == 1) {
        int found = find_all_in_array(arr, result_arr, ARR_SIZE, key);
        printf("찾은 항목은 모두 %d개입니다.\n", found);
        printf("찾은 항목의 인덱스: ");
        for (int i = 0; i < ARR_SIZE; i++)
            if (result_arr[i] != 0)
                printf("%d ", i);
    }
    printf("\n");
    return 0;
}
