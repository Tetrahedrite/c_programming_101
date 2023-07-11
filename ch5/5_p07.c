#include <stdio.h>

#define BASIC_LE_200 910
#define BASIC_FROM_201_TO_400 (1600 - BASIC_LE_200)
#define BASIC_OVER_400 (7300 - BASIC_FROM_201_TO_400)

#define CHARGE_LE_200 93.3
#define CHARGE_FROM_201_TO_400 187.9
#define CHARGE_OVER_400 280.6

int main() {
    int usage_kWh = 0, basic = 0, charge = 0;

    printf("월 사용량 (kWh)? ");
    scanf("%d", &usage_kWh);

    if (0 < usage_kWh) {
        const int charge_in_curr_range = (usage_kWh > 200 ? 200 : usage_kWh);
        basic += BASIC_LE_200;
        charge += CHARGE_LE_200 * charge_in_curr_range;
        usage_kWh -= 200;
    }

    if (0 < usage_kWh) {
        const int charge_in_curr_range = (usage_kWh > 200 ? 200 : usage_kWh);
        basic += BASIC_FROM_201_TO_400;
        charge += CHARGE_FROM_201_TO_400 * charge_in_curr_range;
        usage_kWh -= charge_in_curr_range;
    }

    if (0 < usage_kWh) {
        basic += BASIC_OVER_400;
        charge += CHARGE_OVER_400 * usage_kWh;
    }

    printf("전기 요금 합계: %7d원\n", basic + charge);
    printf("  - 기본 요금:  %7d원\n", basic);
    printf("  - 전력량요금: %7d원\n", charge);

    return 0;
}
