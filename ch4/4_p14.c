#include <stdio.h>

int main() {
    int fee_basic, usage_kWh;

    printf("기본 요금? ");
    scanf("%d", &fee_basic);

    printf("월 사용량(kWh)? ");
    scanf("%d", &usage_kWh);

    printf("전기 요금: %d원\n", fee_basic + usage_kWh * 190);

    return 0;
}
