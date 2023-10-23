#include <stdio.h>
#include <string.h>

typedef struct tagPRODUCT {
    char name[20];
    unsigned int price;
    unsigned int stock;
} PRODUCT;

void print_product(const PRODUCT *product) {
    printf("[%s %u원 재고:%u]\n", product->name, product->price, product->stock);
}

int main() {
    PRODUCT product;

    printf("제품명? ");
    fgets(product.name, sizeof(product.name), stdin);
    product.name[strlen(product.name) - 1] = '\0';

    printf("가격? ");
    scanf("%u", &product.price);

    printf("재고? ");
    scanf("%u", &product.stock);

    print_product(&product);
    return 0;
}
