#include <stdio.h>

int main() {
    int minutes, result;
    do {
        printf("주차 시간(분)? ");
        scanf("%d", &minutes);

        if (minutes > 1440) {
            printf("주차 시간은 최대 24시간(1440분)을 넘을 수 없습니다.\n");
            continue;
        }

        if (minutes > 0) {
            result += 2000;
            minutes -= 30;
        }

        if (minutes > 0)
            result += (minutes / 10 + 1) * 1000;

        if (result > 25000)
            result = 25000;

        if (minutes != 0)
            printf("주차 요금: %d원\n", result);
    } while (minutes != 0);

    return 0;
}
