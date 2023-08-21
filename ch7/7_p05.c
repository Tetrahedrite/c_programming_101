#include <stdio.h>

int main() {
    int arr[] = { 23, 45, 62, 12, 99, 83, 23, 50, 12, 37 };
    int to_find;

    printf("배열: ");
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        printf("%d ", arr[i]);
    }

    printf("\n찾을 값? ");
    scanf("%d", &to_find);

    for (int i = sizeof(arr) / sizeof(int) - 1; i != 0; i--) {
        if (arr[i] == to_find) {
            printf("%d는 %d번째 원소입니다.\n", to_find, i);
            break;
        }
    }
    return 0;
}
