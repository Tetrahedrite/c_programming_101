#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define STR_SIZE 1024

size_t count_digits(char *str) {
    size_t count = 0;
    while (*str != '\0') {
        if (isdigit(*str++)) {
            count++;
        }
    }
    return count;
}

int main() {
    while (1) {
        char input[STR_SIZE];
        fputs("정수? ", stdout);
        scanf("%s", input);

        if (strcmp(input, "0") == 0)
            return 0;
        else
            printf("count of digits: %zu\n", count_digits(input));
    }

    return 0;
}
