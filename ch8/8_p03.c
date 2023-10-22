#include <stdio.h>

#define ARR_SIZE 10

int main() {
    int arr[ARR_SIZE] = { 44, 32, 65, 23, 45, 76, 77, 89, 23, 45 };
    int *parr = arr;

    printf("배열: ");
    for (int i = 0; i < ARR_SIZE; i++) {
        printf("%d  ", *parr++);
    }
    printf("\n");

    printf("역순: ");
    for (int i = 0; i < ARR_SIZE; i++) {
        printf("%d  ", *--parr);
    }
    printf("\n");

    return 0;
}
