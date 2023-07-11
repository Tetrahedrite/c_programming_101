#include <stdio.h>

int main() {
    int minutes, result;

    printf("주차 시간(분)? ");
    scanf("%d", &minutes);

    if (minutes > 1440) {
        printf("주차 시간은 최대 24시간(1440분)을 넘을 수 없습니다.\n");
        return 1;
    }

    if (minutes > 0) {
        result += 2000;
        minutes -= 30;
    }

    if (minutes > 0)
        result += (minutes / 10 + 1) * 1000;

    if (result > 25000)
        result = 25000;

    printf("주차 요금: %d원\n", result);

    return 0;
}
