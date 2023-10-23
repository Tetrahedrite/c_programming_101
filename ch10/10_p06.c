#include <stdio.h>

typedef struct tagDATE {
    int year;
    int month;
    int day;
} DATE;

int is_same_date(const DATE* date1, const DATE* date2) {
    return date1->year == date2->year
           && date1->month == date2->month
           && date1->day == date2->day;
}

int main() {
    DATE date, holiday = { 2023, 12, 25 };
    
    while (1) {
        printf("날짜(연월일)? ");
        scanf("%d %d %d", &date.year, &date.month, &date.day);

        if (date.year == 0 && date.month == 0 && date.day == 0)
            break;

        if (is_same_date(&date, &holiday))
            printf("%d/%d/%d은 공휴일입니다.\n", date.year, date.month, date.day);
        else
            printf("%d/%d/%d은 공휴일이 아닙니다.\n", date.year, date.month, date.day);
    }

    return 0;
}
