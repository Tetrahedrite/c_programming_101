#include <stdio.h>
#include <string.h>

typedef struct tagPRODUCT {
    char name[20];
    unsigned int price;
    unsigned int stock;
} PRODUCT;

int main() {
    PRODUCT product;

    printf("제품명? ");
    fgets(product.name, sizeof(product.name), stdin);
    product.name[strlen(product.name) - 1] = '\0';

    printf("가격? ");
    scanf("%u", &product.price);

    printf("재고? ");
    scanf("%u", &product.stock);

    while (product.stock > 0) {
        unsigned int order;
        printf("주문 수량? ");
        scanf("%u", &order);

        if (order == 0) {
            return 0;
        } else if (order < product.stock) {
            printf("결제 금액: %u 재고: %u\n", order * product.price, product.stock - order);
            product.stock -= order;
        } else {
            printf("재고가 부족합니다.\n");
        }
    }
    printf("재고가 모두 소진되었습니다.\n");
    return 0;
}
