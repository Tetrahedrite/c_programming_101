#include <stdio.h>

int main() {
    int price, discount_percentage;

    printf("제품의 가격? ");
    scanf("%d", &price);

    printf("할인율(%%)? ");
    scanf("%d", &discount_percentage);

    printf("할인가: %d원 (%d원 할인)\n", \
        (int)(price * (1 - (double)discount_percentage / 100)), \
        (int)(price * ((double)discount_percentage / 100)));

    return 0;
}
