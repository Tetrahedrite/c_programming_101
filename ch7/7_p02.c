#include <stdio.h>

int main() {
    float arr[10], ratio;

    printf("첫 번째 항? ");
    scanf("%f", &arr[0]);

    printf("공비? ");
    scanf("%f", &ratio);

    for (int i = 1; i < 10; i++) {
        arr[i] = arr[i - 1] * ratio;
    }

    printf("등비수열: ");
    for (int i = 0; i < 10; i++) {
        printf("%g ", arr[i]);
    }
    printf("\n");

    return 0;
}
