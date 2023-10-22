#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STR_SIZE 128

int validate_time(const char *hour, const char *minute, const char *second) {
    if (hour == NULL || minute == NULL || second == NULL)
        return 0;

    const int hour_value = atoi(hour);
    const int minute_value = atoi(minute);
    const int second_value = atoi(second);

    if (hour_value < 0 || hour_value > 23)
        return 0;

    if (minute_value < 0 || minute_value > 59)
        return 0;

    if (second_value < 0 || second_value > 59)
        return 0;

    return 1;
}

int time_to_string(char *dest, const char *hour, const char *minute, const char *second) {
    if (!validate_time(hour, minute, second))
        return -1;

    return sprintf(dest, "%02u:%02u:%02u", atoi(hour), atoi(minute), atoi(second));
}

int main() {
    char hour[STR_SIZE], minute[STR_SIZE], second[STR_SIZE], time[STR_SIZE];

    printf("시 분 초? ");
    scanf("%s %s %s", hour, minute, second);
    while (getchar() != '\n');

    if (time_to_string(time, hour, minute, second) >= 0)
        printf("%s\n", time);
    else
        printf("잘못된 시간입니다.\n");
    
    return 0;
}
