#include <stdio.h>

#define PRODUCT_COUNT 5

int main() {
    int arr[PRODUCT_COUNT], discounted_arr[PRODUCT_COUNT], discount_rate;

    printf("상품가 %d개를 입력하세요: ", PRODUCT_COUNT);
    for (int i = 0; i < PRODUCT_COUNT; i++) {
        scanf("%d", &arr[i]);
    }

    printf("할인율(%%)? ");
    scanf("%d", &discount_rate);

    for (int i = 0; i < PRODUCT_COUNT; i++) {
        discounted_arr[i] = arr[i] - (arr[i] * 0.01 * discount_rate);
        printf("가격:  %d --> 할인가:   %d\n", arr[i], discounted_arr[i]);
    }
    return 0;
}
