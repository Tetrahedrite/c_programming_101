#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARR_SIZE 10

int rand_array(int *arr, int size, int rand_max_inclusive) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % rand_max_inclusive;
    }
    return 0;
}

int main() {
    int arr[ARR_SIZE];
    int count;

    srand(time(NULL));

    rand_array(&count, 1, 10);
    printf("count = %d\n", count);

    for (int i = 0; i < count; i++) {
        rand_array(arr, ARR_SIZE, 100);
        for (int j = 0; j < ARR_SIZE; j++) {
            printf("%d ", arr[j]);
        }
        printf("\n");
    }
}
