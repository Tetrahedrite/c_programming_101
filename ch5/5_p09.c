#include <stdio.h>

#define PRICE_BURGER 4000
#define PRICE_FRIES 2000
#define PRICE_COKE 1500
#define PRICE_MEAL 6500

int main() {
    int amount_burger = 0, amount_fries = 0, amount_coke = 0, amount_meal = 0;

    printf("[햄버거 4000원, 감자튀김 2000원, 콜라 1500원, 세트 6500원]\n");

    printf("햄버거 개수? ");
    scanf("%d", &amount_burger);

    printf("감자튀김 개수? ");
    scanf("%d", &amount_fries);

    printf("콜라 개수? ");
    scanf("%d", &amount_coke);

    amount_meal = (amount_burger < amount_fries ? amount_burger : amount_fries);
    amount_meal = (amount_meal < amount_coke ? amount_meal : amount_coke);

    amount_burger -= amount_meal;
    amount_fries -= amount_meal;
    amount_coke -= amount_meal;

    printf("\n");

    printf("상품명      단가    수량     금액\n");
    printf("세트       %5d    %4d    %5d\n", PRICE_MEAL, amount_meal, PRICE_MEAL * amount_meal);
    printf("햄버거     %5d    %4d    %5d\n", PRICE_BURGER, amount_burger, PRICE_BURGER * amount_burger);
    printf("감자튀김   %5d    %4d    %5d\n", PRICE_FRIES, amount_fries, PRICE_FRIES * amount_fries);
    printf("---------------------------------\n");
    printf("합계                        %5d\n", PRICE_MEAL * amount_meal + PRICE_BURGER * amount_burger + PRICE_FRIES * amount_fries);

    return 0;
}
