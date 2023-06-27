#include <stdio.h>

int main() {
    int time_played_in_second;

    printf("재생시간(초)? ");
    scanf("%d", &time_played_in_second);

    printf("재생시간은 %d시간 %d분 %d초입니다.\n", \
        time_played_in_second / 60 / 60, \
        time_played_in_second / 60 % 60, \
        time_played_in_second % 60);

    return 0;
}
