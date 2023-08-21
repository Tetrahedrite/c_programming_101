#include <stdio.h>

int main() {
    int arr[10], difference;

    printf("첫 번째 항? ");
    scanf("%d", &arr[0]);

    printf("공차? ");
    scanf("%d", &difference);

    for (int i = 1; i < 10; i++) {
        arr[i] = arr[i - 1] + difference;
    }

    printf("등차수열: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
