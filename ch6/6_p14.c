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

int check_date(int year, int month, int day) {
    if (1 <= month && month <= 12 && day <= get_days_of_month(year, month))
        return 1;
    return 0;
}

int main() {
    int year, month, day;

    while (1) {
        printf("날짜 (연 월 일)? ");
        scanf("%d %d %d", &year, &month, &day);

        if (!check_date(year, month, day))
            printf("잘못 입력하셨습니다. 유효한 날짜를 입력하세요.\n");
        else {
            printf("입력한 날짜는 %d년 %d월 %d일입니다.\n", year, month, day);
            return 0;
        }
    }
}
