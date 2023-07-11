#include <stdio.h>

int main() {
    int base, amount;

    printf("양의 정수? ");
    scanf("%d", &base);

    printf("배수의 개수? ");
    scanf("%d", &amount);

    for (int i = 1; i <= amount; i++) {
        printf("%d ", base * i);
    }
    printf("\n");

    return 0;
}
