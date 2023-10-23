#include <stdio.h>
#include <string.h>

#define EXIT_COMMAND "."

typedef struct tagPRODUCT {
    char name[20];
    unsigned int price;
    unsigned int stock;
} PRODUCT;

int main() {
    PRODUCT product[5] = {
        { "아메리카노", 4000, 10 },
        { "카페라떼", 4500, 10 },
        { "플랫화이트", 5000, 10 },
    };
    char order_name[20];
    unsigned int order_quantity;

    while (1) {
        printf("주문할 제품명? ");
        fgets(order_name, sizeof(order_name), stdin);
        order_name[strlen(order_name) - 1] = '\0';

        if (strcmp(order_name, EXIT_COMMAND) == 0)
            break;

        printf("주문할 수량? ");
        scanf("%u", &order_quantity);
        while (getchar() != '\n');

        int found = 0;
        for (int i = 0; i < sizeof(product) / sizeof(product[0]); i++) {
            if (strcmp(product[i].name, order_name) != 0)
                continue;
            
            if (product[i].stock < order_quantity) {
                printf("재고가 부족합니다.\n");
                break;
            }

            if (*product[i].name == '\0')
                break;

            product[i].stock -= order_quantity;
            printf("결제 금액: %u  %s 재고: %u\n",
                   product[i].price * order_quantity, product[i].name, product[i].stock);
        }
    }

    for (int i = 0; i < sizeof(product) / sizeof(product[0]); i++) {
        if (*product[i].name == '\0')
            break;
        printf("[%s %u원 재고: %u]\n", product[i].name, product[i].price, product[i].stock);
    }

    return 0;
}
