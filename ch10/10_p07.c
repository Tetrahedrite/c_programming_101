#include <stdio.h>
#include <time.h>

typedef enum tagMONTH {
    January,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
} MONTH;

typedef struct tagDATE {
    int year;
    MONTH month;
    int day;
} DATE;

static const char *months[] = {
    "Jan", "Feb", "Mar", "Apr", "May", "Jun",
    "Jul", "Aug", "Sep", "Oct", "Nov", "Dec",
};

void set_as_today(DATE *date) {
    time_t t = time(NULL);
    struct tm *tm = localtime(&t);
    date->year = tm->tm_year + 1900;
    date->month = (MONTH)tm->tm_mon;
    date->day = tm->tm_mday;
}

void print_date_eng(const DATE *date) {
    printf("Today is ");
    printf("%s ", months[date->month]);
    printf("%d %d\n", date->day, date->year);
}

int main() {
    DATE date;
    set_as_today(&date);
    print_date_eng(&date);
    return 0;
}
