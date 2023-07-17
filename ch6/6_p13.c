#include <stdio.h>
#include <stdlib.h>

int is_leap_year(int year) {
    if (year % 4 == 0)
        return 1;
    else
        return 0;
}

int get_days_of_month(int year, int month) {
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
        case 2:
            return is_leap_year(year) ? 29 : 28;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        default:
            printf("알 수 없는 달\n");
            exit(1);
    }
}

int main() {
    int year = 0;
    printf("연도? ");
    scanf("%d", &year);

    int month = 1;
    for (; month <= 12; month++) {
        printf(" %2d월: %2d일 ", month, get_days_of_month(year, month));

        if (month % 6 == 0)
            printf("\n");
    }

    if ((month - 1) % 6 != 0)
        printf("\n");

    return 0;
}
