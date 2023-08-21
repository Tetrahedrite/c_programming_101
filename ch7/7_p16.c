#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARR_SIZE 10

int find_array(int arr[], int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[ARR_SIZE];
    int element_to_find;
    srand(time(NULL));

    for (int i = 0; i < ARR_SIZE; i++) {
        arr[i] = rand() % 100;
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("찾을 값? ");
    if (scanf("%u", &element_to_find) > 0) {
        int index = find_array(arr, ARR_SIZE, element_to_find);
        if (index == -1) {
            printf("%d는 없습니다.\n", element_to_find);
        } else {
            printf("%d는 %d번째 원소입니다.\n", element_to_find, index);
        }
    } else {
        printf("잘못된 입력입니다.\n");
    }

    return 0;
}
