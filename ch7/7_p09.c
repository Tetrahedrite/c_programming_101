#include <stdio.h>

int main() {
    const int monthly_charge[12] = {
        36000, 42000, 38000, 40000, 68000, 50000,
        45000, 40000, 25000, 12000, 88000, 65000,
    };

    for (int i = 0; i < 12; i++) {
        printf("%2d월 %d:", i + 1, monthly_charge[i]);
        const int progress = monthly_charge[i] / 2000;
        for (int j = 0; j < progress; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
