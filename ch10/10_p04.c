#include <stdio.h>

typedef struct tagDATE {
    int year;
    int month;
    int day;
} DATE;

void print_date(const DATE *date) {
    printf("%d/%d/%d\n", date->year, date->month, date->day);
}

int main() {
    DATE date;
    printf("연? ");
    scanf("%d", &date.year);
    printf("월? ");
    scanf("%d", &date.month);
    printf("일? ");
    scanf("%d", &date.day);

    print_date(&date);
    return 0;
}
