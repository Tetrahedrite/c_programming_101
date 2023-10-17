#include <stdio.h>

#define ARR_COL 4
#define ARR_ROW 5

void fill_2d_array(int *arr, int size, int value) {
    for (int i = 0; i < size; i++)
        arr[i] = value;
}

int main() {
    int arr[ARR_COL][ARR_ROW];
    int value;

    printf("배열의 원소에 저장할 값? ");
    scanf("%d", &value);

    fill_2d_array(arr[0], ARR_COL * ARR_ROW, value);
    for (int i = 0; i < ARR_COL; i++) {
        for (int j = 0; j < ARR_ROW; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
