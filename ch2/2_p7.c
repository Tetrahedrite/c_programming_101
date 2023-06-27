#include <stdio.h>

int main() {
    char size;
    int quantity;

    printf("커피 사이즈(S,T,G)와 주문 수량? ");
    scanf("%c %d", &size, &quantity);

    printf("%c 사이즈 %d잔을 주문합니다.\n", size, quantity);

    return 0;
}
