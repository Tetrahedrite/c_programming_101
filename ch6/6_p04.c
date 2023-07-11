#include <stdio.h>

int discount_price(int price, int discount_rate) {
    return price * ((100.0 - discount_rate) / 100);
}

int main() {
    int discount_rate;
    printf("할인율(%%)? ");
    scanf("%d", &discount_rate);

    while (1) {
        int price;

        printf("제품의 가격? ");
        scanf("%d", &price);

        if (price == 0)
            return 1;
            
        printf("할인가: %d원\n", discount_price(price, discount_rate));
    }

    return 0;
}
