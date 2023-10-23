#include <stdio.h>
#include <string.h>

#define EXIT_COMMAND "."

typedef struct tagPRODUCT {
    char name[20];
    unsigned int price;
    unsigned int stock;
} PRODUCT;

int main() {
    PRODUCT product[5];
    unsigned int index = 0;

    while (index < 5) {
        printf("제품명? ");
        fgets(product[index].name, sizeof(product[index].name), stdin);
        product[index].name[strlen(product[index].name) - 1] = '\0';

        if (strcmp(product[index].name, EXIT_COMMAND) == 0)
            break;

        printf("가격 재고? ");
        scanf("%u %u", &product[index].price, &product[index].stock);
        while (getchar() != '\n');
        index++;
    }

    for (int i = 0; i < index; i++) {
        printf("[%s %u원 재고:%u]\n", product[i].name, product[i].price, product[i].stock);
    }

    return 0;
}
