#include <stdio.h>
#include <string.h>

#define STR_SIZE 1024
#define MINIMAL_CHAR_COUNT 3

int main() {
    char str[STR_SIZE], last_char = '\0';
    int score = 0;

    while (1) {
        printf("word? ");
        fgets(str, STR_SIZE, stdin);
        str[strlen(str) - 1] = '\0';

        if (strlen(str) < MINIMAL_CHAR_COUNT) {
            printf("too short, try again\n");
            continue;
        } else if (last_char != '\0' && last_char != str[0]) {
            printf("WRONG WORD!!! YOU FAILED!!!\n");
            break;
        }

        last_char = str[strlen(str) - 1];
        score++;
    }

    printf("count: %d\n", score);
    return 0;
}
