#include <stdio.h>
#include <time.h>

int main() {
    time_t t = time(NULL);
    struct tm *tm = localtime(&t);
    printf("오늘 날짜는 %d/%d/%d 입니다.\n", tm->tm_year + 1900, tm->tm_mon + 1, tm->tm_mday);
    return 0;
}
