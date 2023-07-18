#include <stdio.h>

int electric_charge(int usage_kWh) {
    double result = 0;
    
    /*** Basic ***/
    if (usage_kWh <= 200)
        result += 910;
    else if (usage_kWh <= 400)
        result += 1600;
    else
        result += 7300;

    /*** Additional ***/
    if (usage_kWh > 400) {
        result += (usage_kWh - 400) * 280.6;
        usage_kWh = 400;
    }

    if (usage_kWh > 200) {
        result += (usage_kWh - 200) * 187.9;
        usage_kWh = 200;
    }

    result += usage_kWh * 93.3;

    return result;
}

int main() {
    int usage_kWh;

    while (1) {
        printf("월 사용량 (kWh)? ");
        scanf("%d", &usage_kWh);
        
        if (usage_kWh == -1)
            return 0;
        else
            printf("전기 요금: %6d원\n", electric_charge(usage_kWh));
    }

    return 0;
}
