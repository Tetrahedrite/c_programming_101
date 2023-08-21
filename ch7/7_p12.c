#include <stdio.h>

#define SEAT_COUNT 10

int main() {
    int seats[SEAT_COUNT] = {0};
    size_t head = 0;

    while (head < SEAT_COUNT) {
        // Print current seats
        printf("현재 좌석: [ ");
        for (int i = 0; i < SEAT_COUNT; i++) {
            // Print X when 1, O when 0
            printf("%c ", seats[i] ? 'X' : 'O');
        }
        printf("]\n");

        // Get input
        int seat_to_reserve = 0;
        printf("예매할 좌석수? ");
        scanf("%d", &seat_to_reserve);
        
        // Reserve seat
        if (seat_to_reserve > 0 && head + seat_to_reserve <= SEAT_COUNT) {
            for (int i = head; i < head + seat_to_reserve; i++) {
                seats[i] = 1;
                printf("%d ", i + 1);
            }
            printf("번 좌석을 예매했습니다.\n");
            head += seat_to_reserve;
        } else {
            printf("올바른 좌석 수를 입력해주세요.\n");
        }
    }

    return 0;
}
